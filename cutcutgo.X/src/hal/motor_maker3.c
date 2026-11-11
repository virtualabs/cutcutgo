/*
 * motor_maker3.c - motor HAL for the Cricut Maker 3 (PIC32MK1024MCF100).
 *
 * Same API and step/encoder bookkeeping as motor.c (original Maker), but for
 * the Maker 3 hardware found with the motor-finder builds (MOTORS.txt,
 * ENCODERS.txt): TI DRV8876 H-bridges in PH/EN mode, EN driven by the
 * motor-control PWM module (MCPWM generators 3, 4, 6 (L output), 12),
 * PH (direction) and nSLEEP on plain GPIOs, quadrature encoders read with
 * change-notification interrupts on ports A, B and E.
 *
 *   Motor            EN (PWM)        PH     nSLEEP  Encoder A/B   Current sense
 *   X carriage       RA10 PWM4H      RD8    RF9     RA14/RA15     RE8 (AN21)
 *   Y rollers        RD3  PWM6L      RD4    RD2     RE0/RE1       RE9 (AN20)
 *   TOOL1 pen  (A)   RD5  PWM12H     RF0    -       RB0/RB2
 *   TOOL2 blade (B)  RB10 PWM3H      RG15   -       RA1/RA11
 *   ACCESSORY gear   not found yet (blade gear) - never driven
 *
 * The current-sense pins RE8/RE9 must never be driven (driving them high
 * makes the DRV8876 current-limit, i.e. stop).
 *
 * Speed values keep the original meaning (motor.c drove IN1/IN2 bridges with
 * the PWM'ed input braking): OCxRS "speed" out of 2400, larger = slower.
 * Here EN duty = 1 - speed / 2400, so Grbl's tuning keeps its meaning.
 *
 * Safety limits:
 *  - CCG_MOTOR_DUTY_LIMIT_PCT caps the EN duty (35 %, the setting every test ran with);
 *  - a motor that stays DRIVEN for CCG_MOTOR_MOVE_TIMEOUT_MS without finishing
 *    its step chunk is stopped and reported as a hard limit (the original
 *    stall watchdog only arms after the encoder counted forwards, so a wrong
 *    encoder sign would let a motor run forever).
 */
#include "hal/config.h"

#if defined(BOARD_MAKER3)

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "hal/motor.h"
#include "../grbl/grbl/stepper.h"
#include "definitions.h"
#include "config.h"
#include "../grbl/grbl/grbl.h"
#include "hal/timer.h"
#include "hal/led.h"

#ifndef CCG_MOTOR_DUTY_LIMIT_PCT
#define CCG_MOTOR_DUTY_LIMIT_PCT    35
#endif
#ifndef CCG_TOOL_MIN_DUTY_PCT
#define CCG_TOOL_MIN_DUTY_PCT       30U
#endif
#ifndef CCG_MOTOR_MOVE_TIMEOUT_MS
#define CCG_MOTOR_MOVE_TIMEOUT_MS   250U
#endif

#define M_CW    1
#define M_CCW   -1
#define M_NULL  0
#define M_ERR   2

#define PWM_FREQ_HZ         20000U
#define PWM_PERIOD          (SYS_FREQ / PWM_FREQ_HZ)    /* MCPWM clocked at SYSCLK */
#define SPEED_SCALE         2400U                       /* original motor.c PWM period */
#define PIN_NONE            ((GPIO_PIN)-1)
static const char M3_EOL[] = { 13, 10, 0 };   /* CR LF */

/* MCPWM generator n registers: PWMCONn @ 0xBF82A0C0 + (n-1)*0x100 */
#define MCPWM_BASE(n)       (0xBF82A0C0UL + (((uint32_t)(n) - 1U) * 0x100UL))
#define PWMCONx(n)          (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x00U))
#define IOCONx(n)           (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x10U))
#define PDCx(n)             (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x20U))
#define SDCx(n)             (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x30U))
#define PHASEx(n)           (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x40U))
#define DTRx(n)             (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x50U))
#define ALTDTRx(n)          (*(volatile uint32_t *)(MCPWM_BASE(n) + 0x60U))

typedef struct {
    uint8_t  pwm_gen;       /* MCPWM generator driving EN (its H output) */
    GPIO_PIN en;            /* EN pin (for ANSEL / documentation) */
    GPIO_PIN ph;            /* direction */
    uint8_t  ph_cw;         /* PH level for HAL_MOTOR_DIR_CW */
    GPIO_PIN sleep;         /* nSLEEP, PIN_NONE if tied awake */
    GPIO_PIN enc_a;
    GPIO_PIN enc_b;
    uint8_t  use_l;         /* 1: EN is the generator's L output (duty in SDCx) */
    uint8_t  ph_gen;        /* !=0: PH pin driven via this generator's H output (0 / 100 %) */
    uint8_t  sleep_gen;     /* !=0: nSLEEP driven via this generator's H output */
} m3_hw_t;

/*
 * ph_cw is chosen so that, with the inv_encoder flags Grbl's stepper code
 * sets (X, TOOL1, TOOL2 inverted; Y not), the encoder counts forwards while
 * a move is driven. Derived from the motor-finder measurements.
 */
static const m3_hw_t hw_x  = { 4,  GPIO_PIN_RA10, GPIO_PIN_RD8,  1, GPIO_PIN_RF9, GPIO_PIN_RA14, GPIO_PIN_RA15, 0, 0, 0 };
/* Y: RD2 + RD3 together move it, but which is EN and which nSLEEP isn't
 * known yet, so both candidates are tried at start-up (m3_calibrate_y()):
 *   A: EN = RD2 (PWM5H), nSLEEP = RD3
 *   B: EN = RD3 (PWM6L, complementary mode), nSLEEP = RD2
 * RD4 (= PWM6H) is Y's PH pin and always stays GPIO. */
/* While the MCPWM module runs, RD2 (PWM5H) can't be driven as a plain GPIO
 * (measured: it stays low), and RD4 (PWM6H) may behave the same. So pins
 * that must sit steadily high/low are driven through their generator's H
 * output at 0 % / 100 % instead (ph_gen / sleep_gen). RD3 is a free GPIO
 * once generator 6 is released in independent mode. */
static const m3_hw_t hw_y_a = { 5, GPIO_PIN_RD2, GPIO_PIN_RD4, 1, GPIO_PIN_RD3, GPIO_PIN_RE0, GPIO_PIN_RE1, 0, 6, 0 };
static const m3_hw_t hw_y_b = { 6, GPIO_PIN_RD3, GPIO_PIN_RD4, 1, GPIO_PIN_RD2, GPIO_PIN_RE0, GPIO_PIN_RE1, 1, 0, 5 };
static m3_hw_t hw_y = { 5, GPIO_PIN_RD2, GPIO_PIN_RD4, 1, GPIO_PIN_RD3, GPIO_PIN_RE0, GPIO_PIN_RE1, 0, 6, 0 };
static bool g_y_ok = false;             /* Y usable (calibration found the right config) */
int32_t  g_ycal_a = -1, g_ycal_b = -1;  /* encoder counts, 50 % PWM 30 ms (-1: no PWM on pin) */
int32_t  g_ycal_a100 = -1, g_ycal_b100 = -1;  /* encoder counts, steady high 15 ms */
uint32_t g_ycfg = 0;                    /* 0 = none, 1 = A, 2 = B */
static m3_hw_t hw_t1 = { 12, GPIO_PIN_RD5,  GPIO_PIN_RF0,  1, PIN_NONE,     GPIO_PIN_RB0,  GPIO_PIN_RB2,  0, 11, 0 };  /* RF0 = PWM11H: PH via gen 11 */
/* Blade gear, motor T (adaptive tools): EN RB14 is PWM1H (only the PWM generator can
 * drive it), PH RA0, encoder RB9/RG8. PH low makes the encoder count up. */
static const m3_hw_t hw_gear = { 1, GPIO_PIN_RB14, GPIO_PIN_RA0, 0, PIN_NONE, GPIO_PIN_RB9, GPIO_PIN_RG8, 0, 0, 0 };
static const m3_hw_t hw_t2 = { 3,  GPIO_PIN_RB10, GPIO_PIN_RG15, 0, PIN_NONE,     GPIO_PIN_RA1,  GPIO_PIN_RA11, 0, 0, 0 };

#define M3_INIT(ocm_, inv_) { .ocm = (ocm_), .hard_limit_threshold = 200, .mode = HAL_MOTOR_PWM, \
                              .direction = HAL_MOTOR_STOP, .state = HAL_MOTOR_IDLE, .inv_encoder = (inv_) }

hal_motor_driver_t HAL_MOTOR_X         = M3_INIT(1, false);
hal_motor_driver_t HAL_MOTOR_Y         = M3_INIT(2, false);
hal_motor_driver_t HAL_MOTOR_TOOL1     = M3_INIT(3, true);
hal_motor_driver_t HAL_MOTOR_TOOL2     = M3_INIT(4, true);
hal_motor_driver_t HAL_MOTOR_ACCESSORY = M3_INIT(0, false);   /* blade gear, motor T: servo only (hw_gear) */

static uint32_t g_drive_ms[4];      /* time spent DRIVEN in the current move */
static bool     g_hw_init = false;

static const m3_hw_t *m3_hw(const hal_motor_driver_t *motor)
{
    if (motor == &HAL_MOTOR_X)     { return &hw_x; }
    if (motor == &HAL_MOTOR_Y)     { return g_y_ok ? &hw_y : NULL; }
    if (motor == &HAL_MOTOR_TOOL1) { return &hw_t1; }
    if (motor == &HAL_MOTOR_TOOL2) { return &hw_t2; }
    return NULL;
}

static void m3_make_digital(GPIO_PIN pin)
{
    uint32_t port = ((uint32_t)pin) >> 4;
    *(volatile uint32_t *)((uint32_t)&ANSELA + (port * 0x100U) + 0x04U) = 1UL << (((uint32_t)pin) & 0x0FU);
}

static void m3_cn_enable(GPIO_PIN pin)
{
    uint32_t port = ((uint32_t)pin) >> 4;
    *(volatile uint32_t *)((uint32_t)&ANSELA + (port * 0x100U) + 0x88U) = 1UL << (((uint32_t)pin) & 0x0FU); /* CNENxSET */
}

/* EN duty for a given speed value (original units, larger = slower). */
#ifndef CCG_Y_DUTY_LIMIT_PCT
#define CCG_Y_DUTY_LIMIT_PCT        80U
#endif
uint32_t g_y_min_duty_pct = 60U;    /* Y EN duty floor */

/*
 * Adaptive duty (v26). Slow feeds used to run each 8-count chunk at full duty,
 * brake, then wait for the next step: jerky and buzzing. Now each motor learns
 * the duty that finishes a chunk just inside the step period the feed rate
 * gives it: early -> lower, still running when the step timer fires -> higher.
 * Fast feeds simply climb to the cap, as before.
 */
#ifndef CCG_ADAPT_MIN_PCT
#define CCG_ADAPT_MIN_PCT           12U
#endif
#ifndef CCG_ADAPT_MIN_Y_PCT
#define CCG_ADAPT_MIN_Y_PCT         20U
#endif
#define M3_ADAPT_DOWN   ((PWM_PERIOD * 1U) / 100U)   /* -1 % per early chunk */
#define M3_ADAPT_UP     ((PWM_PERIOD * 4U) / 100U)   /* +4 % per late timer tick */
uint32_t g_adapt_on = 1U;               /* adaptive duty floor on */
uint32_t g_adapt[4];                    /* learned duty (PWM counts), 0 = not learned yet */
static uint32_t g_period_ms[4];         /* step period the stepper gave this chunk */
static uint32_t g_start_ms[4];          /* chunk start time */

static int m3_index(const hal_motor_driver_t *motor);
static uint32_t m3_base_duty(const hal_motor_driver_t *motor);

/* Power caps per motor (v35). Homing keeps a gentle cap: it pushes
 * into stops on purpose. */
#ifndef CCG_X_DUTY_LIMIT_PCT
#define CCG_X_DUTY_LIMIT_PCT        80U
#endif
#ifndef CCG_TOOL_DUTY_LIMIT_PCT
#define CCG_TOOL_DUTY_LIMIT_PCT     60U
#endif
#ifndef CCG_HOME_DUTY_LIMIT_PCT
#define CCG_HOME_DUTY_LIMIT_PCT     35U
#endif
static volatile bool g_homing = false;

static uint32_t m3_cap(const hal_motor_driver_t *motor)
{
    uint32_t pct;

    if (g_homing)                      { pct = CCG_HOME_DUTY_LIMIT_PCT; }
    else if (motor == &HAL_MOTOR_Y)    { pct = CCG_Y_DUTY_LIMIT_PCT; }
    else if (motor == &HAL_MOTOR_X)    { pct = CCG_X_DUTY_LIMIT_PCT; }
    else                               { pct = CCG_TOOL_DUTY_LIMIT_PCT; }
    return (PWM_PERIOD * pct) / 100U;
}

static uint32_t m3_floor(const hal_motor_driver_t *motor)
{
    return (motor == &HAL_MOTOR_Y) ? (PWM_PERIOD * CCG_ADAPT_MIN_Y_PCT) / 100U
                                   : (PWM_PERIOD * CCG_ADAPT_MIN_PCT) / 100U;
}

static uint32_t m3_clamp(const hal_motor_driver_t *motor, uint32_t d)
{
    if (d < m3_floor(motor)) { d = m3_floor(motor); }
    if (d > m3_cap(motor))   { d = m3_cap(motor); }
    return d;
}

static uint32_t m3_duty(const hal_motor_driver_t *motor)
{
    int idx = m3_index(motor);

    if (g_adapt_on && (idx >= 0) && (motor->mode != HAL_MOTOR_DIRECT))
    {
        if (g_adapt[idx] == 0U) { g_adapt[idx] = m3_clamp(motor, m3_base_duty(motor)); }
        return g_adapt[idx];
    }
    return m3_base_duty(motor);
}

static uint32_t m3_base_duty(const hal_motor_driver_t *motor)
{
    uint32_t speed = (motor->mode == HAL_MOTOR_DIRECT) ? 0U : (uint32_t)motor->speed;
    uint32_t duty, max;

    if (speed > SPEED_SCALE) { speed = SPEED_SCALE; }
    duty = PWM_PERIOD - ((speed * PWM_PERIOD) / SPEED_SCALE);
    /* Tool holders: the original speeds give only ~4-12 % duty on the Maker 3's
     * drivers, too little for the pen holder to move at all. */
    if (((motor == &HAL_MOTOR_TOOL1) || (motor == &HAL_MOTOR_TOOL2)) &&
        (duty < (PWM_PERIOD * CCG_TOOL_MIN_DUTY_PCT) / 100U))
    {
        duty = (PWM_PERIOD * CCG_TOOL_MIN_DUTY_PCT) / 100U;
    }
    if (motor == &HAL_MOTOR_Y)
    {
        /* Y has to pull a gripped mat through the pinch rollers: the original
         * speed (37.5 %) only turns the bare rollers. Own floor and cap. */
        if (duty < (PWM_PERIOD * g_y_min_duty_pct) / 100U) { duty = (PWM_PERIOD * g_y_min_duty_pct) / 100U; }
        max = (PWM_PERIOD * CCG_Y_DUTY_LIMIT_PCT) / 100U;
        return (duty > max) ? max : duty;
    }
    max = (PWM_PERIOD * CCG_MOTOR_DUTY_LIMIT_PCT) / 100U;
    return (duty > max) ? max : duty;
}

/*
 * How an L-output EN pin (Y: RD3 = PWM6L) gets its PWM. A start-up
 * self-test (bring-up v7) found only mode 2 drives the pin.
 *   0: independent mode, duty in SDCx
 *   1: independent mode with SWAP (H signal on the L pin), duty in PDCx
 *   2: complementary mode, L = !H, so PDCx = period - duty
 *   M3_L_NONE: no mode worked - the motor stays disabled.
 */
#define M3_L_NONE   0xFFU
uint32_t g_l_mode = 2;      /* complementary: the mode found to work on RD3 (v7 self-test) */

static uint32_t m3_l_iocon(uint32_t mode)
{
    uint32_t v = (1UL << _IOCON3_PENL_POSITION) | (3UL << _IOCON3_FLTMOD_POSITION);
    switch (mode)
    {
        case 0:  v |= (3UL << _IOCON3_PMOD_POSITION); break;
        case 1:  v |= (3UL << _IOCON3_PMOD_POSITION) | _IOCON3_SWAP_MASK; break;
        case 2:  v |= (0UL << _IOCON3_PMOD_POSITION); break;    /* complementary */
        default: v = (3UL << _IOCON3_FLTMOD_POSITION); break;   /* no PWM pins */
    }
    return v;
}

static void m3_set_duty_l(uint8_t gen, uint32_t mode, uint32_t duty)
{
    switch (mode)
    {
        case 0:  SDCx(gen) = duty; break;
        case 1:  PDCx(gen) = duty; break;
        case 2:  PDCx(gen) = PWM_PERIOD - duty; break;
        default: break;
    }
}

static void m3_set_duty(const m3_hw_t *hw, uint32_t duty)
{
    if (hw->use_l) { m3_set_duty_l(hw->pwm_gen, g_l_mode, duty); }
    else           { PDCx(hw->pwm_gen) = duty; }
}

/* Steady level on a PWM generator's H output: 0 % or 100 %. */
static void m3_gen_level(uint8_t gen, bool high)
{
    PDCx(gen) = high ? (PWM_PERIOD + 1U) : 0U;
}

static void m3_ph_write(const m3_hw_t *hw, bool level)
{
    if (hw->ph_gen != 0U) { m3_gen_level(hw->ph_gen, level); }
    else                  { GPIO_PinWrite(hw->ph, level); }
}

static void m3_sleep_write(const m3_hw_t *hw, bool awake)
{
    if (hw->sleep == PIN_NONE)  { return; }
    if (hw->sleep_gen != 0U)    { m3_gen_level(hw->sleep_gen, awake); }
    else if (awake)             { GPIO_PinSet(hw->sleep); }
    else                        { GPIO_PinClear(hw->sleep); }
}

static void m3_pwm_generator_init(const m3_hw_t *hw)
{
    uint8_t n = hw->pwm_gen;

    PWMCONx(n) = 0;                             /* edge aligned, primary master time base */
    PHASEx(n) = 0;
    DTRx(n) = 0;
    ALTDTRx(n) = 0;
    PDCx(n) = 0;                                /* 0 % = EN low = brake */
    SDCx(n) = 0;
    /* Only the EN pin is PWM (H or L), the other stays GPIO; independent
     * mode (PDC -> H, SDC -> L); faults disabled. */
    IOCONx(n) = ((hw->use_l ? 1UL : 0UL) << _IOCON3_PENL_POSITION)
              | ((hw->use_l ? 0UL : 1UL) << _IOCON3_PENH_POSITION)
              | (3UL << _IOCON3_PMOD_POSITION)
              | (3UL << _IOCON3_FLTMOD_POSITION);
}

static void m3_hw_init(void)
{
    if (g_hw_init) { return; }

    /* Clear the reset-cause flags (RCON) so the next reset shows only its own cause. */
    RCONCLR = 0xFFFFFFFFU;

    /* PWM pins: no alternate mapping. With CFGCON.PWMAPINx set, PWMxL pins
     * carry PWM(x+6)H instead - e.g. PWMAPIN6 puts PWM12H (pen holder EN,
     * meant for RD5) on RD3 too, which is Y's nSLEEP: Y would never wake.
     * Their reset value is undefined, so clear them all explicitly. */
    SYSKEY = 0x00000000U;
    SYSKEY = 0xAA996655U;
    SYSKEY = 0x556699AAU;
    CFGCON &= ~(_CFGCON_PWMAPIN1_MASK | _CFGCON_PWMAPIN2_MASK | _CFGCON_PWMAPIN3_MASK |
                _CFGCON_PWMAPIN4_MASK | _CFGCON_PWMAPIN5_MASK | _CFGCON_PWMAPIN6_MASK);
    SYSKEY = 0x33333333U;

    /* MCPWM master time base: 20 kHz. */
    PTCON = 0;
    PTPER = PWM_PERIOD;
    m3_pwm_generator_init(&hw_x);
    m3_pwm_generator_init(&hw_t1);
    m3_pwm_generator_init(&hw_t2);
    m3_pwm_generator_init(&hw_gear);
    /* Mat sensor light: RB12 = PWM2H, off until the sensor is polled. */
    PWMCONx(2) = 0; PHASEx(2) = 0; DTRx(2) = 0; ALTDTRx(2) = 0; PDCx(2) = 0; SDCx(2) = 0;
    IOCONx(2) = (1UL << _IOCON3_PENH_POSITION) | (3UL << _IOCON3_PMOD_POSITION) | (3UL << _IOCON3_FLTMOD_POSITION);
    /* Pen holder PH (RF0) is PWM11H: as GPIO it is held by the MCPWM module
     * (bring-up v15: pen moved the same way for Z-1 and Z+1), so drive it
     * through generator 11 at 0 % / 100 %. */
    PWMCONx(11) = 0; PHASEx(11) = 0; DTRx(11) = 0; ALTDTRx(11) = 0; PDCx(11) = 0; SDCx(11) = 0;
    IOCONx(11) = (1UL << _IOCON3_PENH_POSITION) | (3UL << _IOCON3_PMOD_POSITION)
               | (3UL << _IOCON3_FLTMOD_POSITION);
    PTCONSET = _PTCON_PTEN_MASK;

    g_hw_init = true;
}

static void m3_pins_init(const m3_hw_t *hw)
{
    m3_make_digital(hw->en);
    m3_make_digital(hw->ph);
    GPIO_PinClear(hw->ph);
    GPIO_PinOutputEnable(hw->ph);
    if (hw->sleep != PIN_NONE)
    {
        m3_make_digital(hw->sleep);
        GPIO_PinSet(hw->sleep);                 /* wake the DRV8876 */
        GPIO_PinOutputEnable(hw->sleep);
    }
    m3_make_digital(hw->enc_a);
    m3_make_digital(hw->enc_b);
    GPIO_PinInputEnable(hw->enc_a);
    GPIO_PinInputEnable(hw->enc_b);
    m3_cn_enable(hw->enc_a);
    m3_cn_enable(hw->enc_b);
}

static uint8_t m3_enc_state(const m3_hw_t *hw)
{
    /* bit0 = A, bit1 = B (same convention as motor.c) */
    return (uint8_t)((GPIO_PinRead(hw->enc_a) ? 1U : 0U) | (GPIO_PinRead(hw->enc_b) ? 2U : 0U));
}

static int m3_index(const hal_motor_driver_t *motor)
{
    if (motor == &HAL_MOTOR_X)     { return 0; }
    if (motor == &HAL_MOTOR_Y)     { return 1; }
    if (motor == &HAL_MOTOR_TOOL1) { return 2; }
    if (motor == &HAL_MOTOR_TOOL2) { return 3; }
    return -1;
}

/* -------------------------------------------------------------------------- */

void hal_motor_enable_encoder(hal_motor_driver_t *motor, bool enabled)
{
    /* Encoders are always monitored on the Maker 3 (positions stay tracked
     * even when an axis is moved by hand). */
    (void)motor; (void)enabled;
}

int hal_motor_set_direction(hal_motor_driver_t *motor, hal_motor_direction_t direction)
{
    const m3_hw_t *hw = m3_hw(motor);

    if (hw != NULL)
    {
        switch (direction)
        {
            case HAL_MOTOR_DIR_CW:
                m3_ph_write(hw, hw->ph_cw != 0U);
                m3_set_duty(hw, m3_duty(motor));
                break;
            case HAL_MOTOR_DIR_CCW:
                m3_ph_write(hw, hw->ph_cw == 0U);
                m3_set_duty(hw, m3_duty(motor));
                break;
            default:
            case HAL_MOTOR_STOP:
                m3_set_duty(hw, 0);             /* EN low: brake */
                break;
        }
    }
    motor->direction = direction;
    return 0;
}

int hal_motor_init(hal_motor_driver_t *motor, hal_motor_mode_t mode)
{
    const m3_hw_t *hw = m3_hw(motor);

    m3_hw_init();
    motor->mode = mode;
    hal_motor_set_direction(motor, HAL_MOTOR_STOP);
    hal_motor_set_speed(motor, HAL_MOTOR_SPEED_MIN);
    if (hw != NULL)
    {
        motor->enc_cur_state = m3_enc_state(hw);
    }
    motor->rel_pos = 0;
    motor->rel_pos_th = 0;
    motor->manual = false;
    return 0;
}

int hal_motor_deinit(hal_motor_driver_t *motor)
{
    hal_motor_set_direction(motor, HAL_MOTOR_STOP);
    return 0;
}

int hal_motor_set_mode(hal_motor_driver_t *motor, hal_motor_mode_t mode)
{
    motor->mode = mode;
    if (motor->direction != HAL_MOTOR_STOP)
    {
        hal_motor_set_direction(motor, motor->direction);
    }
    return 0;
}

int hal_motor_set_speed(hal_motor_driver_t *motor, uint32_t speed)
{
    const m3_hw_t *hw = m3_hw(motor);

    motor->speed = (int)speed;
    if ((hw != NULL) && (motor->direction != HAL_MOTOR_STOP))
    {
        m3_set_duty(hw, m3_duty(motor));
    }
    return 0;
}


/*
 * Position servo (v27). The chunk scheme (drive 8 counts, brake, wait) can
 * only stop and start, so slow feeds judder. Instead, each Grbl step advances
 * the motor's target (rel_pos_th, in encoder counts) and this 1 kHz loop drives
 * the motor towards it with PI control, continuously, without braking between
 * steps. rel_pos increases when a motor is driven CW, so error > 0 -> CW.
 *  - A motor whose target hasn't moved for 400 ms is released (EN 0): no
 *    endless clicking against the blade clutch, no fighting a hand move.
 *  - Lagging the target by more than g_ferr_lim[] counts while moving = stall:
 *    the motor is released and Grbl gets a hard limit (ALARM:1).
 */
#define M3_SERVO_MOTORS  5
#define M3_SERVO_GEAR    4       /* motor T: servo only, not a Grbl axis */
static int32_t  g_gear_zero = 0;          /* counts at the knife's 0 degrees */
static int32_t  g_gear_goal = 0;          /* where the knife should be pointing, counts */
static volatile int32_t g_gear_slew = 8;       /* counts per ms */
static volatile bool g_gear_slewing = false;   /* ramp the gear to g_gear_goal in the servo tick */
static float    g_gear_sign = -1.0f;       /* +1: encoder counts up as the angle increases */
uint32_t g_servo_on = 1U;
int32_t  g_kp = 60;                 /* PWM counts per count of error (6000 = 100 %) */
int32_t  g_ki = 1;                  /* integral gain, per ms */
int32_t  g_ferr_max = 0;            /* overrides every motor's limit when not 0 */
/* Following-error limit per motor, counts: X ~7 mm, Y ~10 mm, pen ~2 mm, blade ~2.3 mm.
 * Measured lag in normal moves is under 30 counts. */
static const int32_t g_ferr_lim[M3_SERVO_MOTORS] = { 500, 800, 300, 800, 800 };
int32_t  g_ferr_peak[M3_SERVO_MOTORS];            /* worst following error seen */
static int32_t  g_int[M3_SERVO_MOTORS];
static uint32_t g_last_step_ms[M3_SERVO_MOTORS];
static bool     g_active[M3_SERVO_MOTORS];
static int8_t   g_dir_out[M3_SERVO_MOTORS];
static volatile bool g_servo_ready = false;

static hal_motor_driver_t *const g_servo_motor[M3_SERVO_MOTORS] = { &HAL_MOTOR_X, &HAL_MOTOR_Y, &HAL_MOTOR_TOOL1, &HAL_MOTOR_TOOL2, &HAL_MOTOR_ACCESSORY };

/* Motor T is deliberately not known to m3_hw()/m3_index(): it is not a Grbl axis. */
static const m3_hw_t *m3_servo_hw(int idx)
{
    return (idx == M3_SERVO_GEAR) ? &hw_gear : m3_hw(g_servo_motor[idx]);
}

static void m3_servo_release(int idx)
{
    const m3_hw_t *hw = m3_servo_hw(idx);
    if (hw != NULL) { m3_set_duty(hw, 0); }
    g_int[idx] = 0;
    g_active[idx] = false;
}

static void m3_servo_one(int idx)
{
    hal_motor_driver_t *m = g_servo_motor[idx];
    const m3_hw_t *hw = m3_servo_hw(idx);
    uint32_t now = timer_get_ms();
    uint32_t since = now - g_last_step_ms[idx];
    int32_t e, ae, u, cap;
    bool fwd;

    if ((hw == NULL) || !g_active[idx]) { return; }
    if (since > 400U) { m3_servo_release(idx); return; }

    e = m->rel_pos_th - m->rel_pos;
    ae = (e < 0) ? -e : e;
    if (ae > g_ferr_peak[idx]) { g_ferr_peak[idx] = ae; }
    if (ae > ((g_ferr_max != 0) ? g_ferr_max : g_ferr_lim[idx]))
    {
        m3_servo_release(idx);
        m->rel_pos_th = m->rel_pos;
        limits_set_state(m->grbl_axis, true);
        return;
    }
    /* Target reached and no new step for a while: hold still (brake). */
    if ((since > 20U) && (ae <= 2))
    {
        m3_set_duty(hw, 0);
        g_int[idx] = 0;
        return;
    }

    cap = (int32_t)m3_cap(m);
    u = g_kp * e + g_int[idx];
    if (u > cap)       { u = cap; }
    else if (u < -cap) { u = -cap; }
    else
    {
        g_int[idx] += g_ki * e;             /* integrate only when not saturated */
        if (g_int[idx] > cap)  { g_int[idx] = cap; }
        if (g_int[idx] < -cap) { g_int[idx] = -cap; }
    }

    fwd = (u >= 0);
    if ((fwd ? 1 : -1) != g_dir_out[idx])
    {
        m3_ph_write(hw, fwd ? (hw->ph_cw != 0U) : (hw->ph_cw == 0U));
        g_dir_out[idx] = fwd ? 1 : -1;
    }
    m3_set_duty(hw, (uint32_t)(fwd ? u : -u));
}

void hal_motor_abort_all(void)
{
    int i;

    for (i = 0; i < M3_SERVO_MOTORS; i++)
    {
        m3_servo_release(i);
        g_servo_motor[i]->rel_pos_th = g_servo_motor[i]->rel_pos;
    }
    g_gear_slewing = false;
    g_gear_goal = HAL_MOTOR_ACCESSORY.rel_pos;
}

bool hal_motor_servo_active(void)
{
    return (g_servo_on != 0U) && g_servo_ready;
}

/*
 * Mat sensor, before the rollers: IR emitter on RB12 (PWM2H), output on RG6,
 * which goes low with the light on when something reflects it. A steady light
 * shows nothing, so it is flashed: every 100 ms while idle with no mat loaded,
 * 300 us on then 300 us off, and "present" needs RG6 low when lit and high when
 * dark, three times running. Runs in the 1 ms tick.
 */
volatile bool g_y_cmd_busy = false;     /* a #Y command is running */
static volatile bool g_mat_present = false;
uint32_t g_mat_raw = 0U;                /* last raw reading: bit 0 = low when lit, bit 1 = high when dark */

bool hal_motor_mat_present(void)
{
    return g_mat_present;
}

static void m3_mat_sensor_tick(void)
{
    static uint32_t phase = 0U;
    static uint8_t yes = 0U, no = 0U;
    static bool lit_low = false, blinking = false;
    bool want;

    if (g_y_cmd_busy) { phase = 0U; return; }

    if ((sys.state == STATE_IDLE) && (sys.mat_loaded == 0U))
    {
        if (phase == 0U)
        {
            /* The sensor's response fades: read 300 us after each change, as
             * in the pulsed test that found it (1 ms was too late). */
            uint32_t t3;

            PDCx(2) = PWM_PERIOD + 1U;
            t3 = _CP0_GET_COUNT();
            while ((uint32_t)(_CP0_GET_COUNT() - t3) < 18000U) { }
            lit_low = !GPIO_PinRead(GPIO_PIN_RG6);
            PDCx(2) = 0U;
            t3 = _CP0_GET_COUNT();
            while ((uint32_t)(_CP0_GET_COUNT() - t3) < 18000U) { }
            g_mat_raw = (lit_low ? 1U : 0U) | (GPIO_PinRead(GPIO_PIN_RG6) ? 2U : 0U);

            if (lit_low && (g_mat_raw & 2U))
            {
                no = 0U;
                if (yes < 3U) { yes++; } else { g_mat_present = true; }
            }
            else
            {
                yes = 0U;
                if (no < 3U) { no++; } else { g_mat_present = false; }
            }
        }
        phase = (phase >= 99U) ? 0U : (phase + 1U);
    }
    else
    {
        if (phase != 0U) { PDCx(2) = 0U; phase = 0U; }
        g_mat_present = false;
        yes = 0U;
    }

    /* Feed button: flashes while a mat is ready to load. */
    want = g_mat_present && (sys.mat_loaded == 0U) && (sys.state == STATE_IDLE);
    if (want && !blinking)
    {
        led_blink_mode(LED_UPDOWN);
        blinking = true;
    }
    else if (!want && blinking)
    {
        led_normal_mode(LED_UPDOWN);
        if (sys.mat_loaded != 0U) { led_set(LED_UPDOWN); } else { led_clear(LED_UPDOWN); }
        blinking = false;
    }
}

void hal_motor_servo_tick(void)
{
    int i;

    /* The carriage white light (RG7, low = on) lights the registration sensor:
     * only the sensor commands (#YE, #YZ) switch it on, for their reads. */

    if (g_servo_ready) { m3_mat_sensor_tick(); }

    if (!g_servo_ready || !g_servo_on) { return; }

    /* Knife: small steering corrections, a few counts per ms. */
    if (g_gear_slewing)
    {
        hal_motor_driver_t *g = &HAL_MOTOR_ACCESSORY;
        int32_t diff = g_gear_goal - g->rel_pos_th;

        if (!g_active[M3_SERVO_GEAR])
        {
            g_int[M3_SERVO_GEAR] = 0;
            g_dir_out[M3_SERVO_GEAR] = 0;
            g_active[M3_SERVO_GEAR] = true;
        }
        g_last_step_ms[M3_SERVO_GEAR] = timer_get_ms();
        if (diff > g_gear_slew)        { g->rel_pos_th += g_gear_slew; }
        else if (diff < -g_gear_slew)  { g->rel_pos_th -= g_gear_slew; }
        else                { g->rel_pos_th = g_gear_goal; g_gear_slewing = false; }
    }
    for (i = 0; i < M3_SERVO_MOTORS; i++) { m3_servo_one(i); }
}

/* Servo-mode step: advance the target and return at once (the stepper's
 * timer paces the steps, the servo follows). */
static int m3_servo_step(hal_motor_driver_t *motor, int idx, hal_motor_direction_t direction)
{
    if (!g_active[idx])
    {
        /* Waking up: drop a big leftover error (axis moved by hand) instead
         * of lunging back to the old position. */
        int32_t e = motor->rel_pos_th - motor->rel_pos;
        if ((e > 300) || (e < -300)) { motor->rel_pos_th = motor->rel_pos; }
        g_int[idx] = 0;
        g_dir_out[idx] = 0;
        g_active[idx] = true;
    }
    motor->rel_pos_th += 8 * direction;
    motor->direction = direction;
    motor->state = HAL_MOTOR_IDLE;
    g_last_step_ms[idx] = timer_get_ms();
    return 0;
}

/* Stop the servo touching the motors (power-off homing). */
static void m3_servo_off(void)
{
    int i;
    g_servo_on = 0U;
    for (i = 0; i < M3_SERVO_MOTORS; i++) { m3_servo_release(i); }
}


/*
 * Homing (v29). The Maker 3 has no limit switches on these axes, so the
 * encoders act as switches: an axis that is driven but gives no counts for a
 * while has reached its stop.
 *  - Pen holder: driven up into its hard top stop -> T0 Z = 0.
 *  - Blade holder: its top is a slip clutch (no stall), so it is driven up a
 *    fixed amount that covers the reversal slack plus the 10 mm stroke from
 *    anywhere; the clutch clicks briefly at the top -> T1 Z = 0.
 *  - X: driven right (-X) at low power into the end of travel, then backed
 *    off 2 mm -> X = 0 (+X runs left, into the work area).
 *  - Y is the mat: not homed.
 * Ctrl-X aborts. Blocking; USB is kept alive with APP_ServiceSerialOnly().
 */
extern void APP_ServiceSerialOnly(void);

#define M3_HOME_STALL    1
#define M3_HOME_DISTANCE 0
#define M3_HOME_TIMEOUT  (-1)
#define M3_HOME_ABORT    (-2)

uint32_t g_home_result[4];      /* last homing outcome per motor */
int32_t  g_home_counts[4];      /* counts moved in the last homing drive */

static int m3_home_drive(hal_motor_driver_t *m, bool cw, uint32_t pct, int32_t max_counts,
                         uint32_t still_ms, uint32_t timeout_ms)
{
    const m3_hw_t *hw = m3_hw(m);
    int idx = m3_index(m);
    int32_t start = m->rel_pos, last = start, moved = 0;
    uint32_t t0 = timer_get_ms(), tlast = t0, now;
    int r;

    m3_ph_write(hw, cw ? (hw->ph_cw != 0U) : (hw->ph_cw == 0U));
    m3_set_duty(hw, (PWM_PERIOD * pct) / 100U);
    for (;;)
    {
        APP_ServiceSerialOnly();
        if (sys_rt_exec_state & EXEC_RESET) { r = M3_HOME_ABORT; break; }
        now = timer_get_ms();
        if (m->rel_pos != last) { last = m->rel_pos; tlast = now; }
        moved = last - start;
        if (moved < 0) { moved = -moved; }
        if (moved >= max_counts)                 { r = M3_HOME_DISTANCE; break; }
        if ((now - tlast) >= still_ms)           { r = M3_HOME_STALL; break; }
        if ((now - t0) >= timeout_ms)            { r = M3_HOME_TIMEOUT; break; }
    }
    m3_set_duty(hw, 0);
    if (idx >= 0) { g_home_result[idx] = (uint32_t)(r + 2); g_home_counts[idx] = moved; }
    return r;
}

/* Pen 157 counts/mm, blade 344 counts/mm: 3 mm/s. */
#define M3_HOME_TOOL_CPS_A  470U
#define M3_HOME_TOOL_CPS_B  1030U
static bool    g_blade_homed = false;
static int32_t g_blade_top;             /* blade rel_pos at its top (after homing) */

/*
 * Servo-paced homing drive: the motor's target moves at cps counts/s in the
 * given direction and the servo follows. Lagging the target by ferr_stop
 * counts = the holder hit something (its stop). Stops at max_counts anyway.
 */
static int m3_home_servo(hal_motor_driver_t *m, bool cw, uint32_t cps, int32_t max_counts,
                         int32_t ferr_stop, uint32_t timeout_ms)
{
    int idx = m3_index(m);
    int32_t start = m->rel_pos, adv, e, moved;
    int32_t sgn = cw ? 1 : -1;
    uint32_t t0 = timer_get_ms(), now, el;
    int r;

    if (idx < 0) { return M3_HOME_TIMEOUT; }
    m->rel_pos_th = start;
    g_int[idx] = 0;
    g_dir_out[idx] = 0;
    g_last_step_ms[idx] = t0;
    g_active[idx] = true;
    g_servo_on = 1U;
    for (;;)
    {
        APP_ServiceSerialOnly();
        if (sys_rt_exec_state & EXEC_RESET) { r = M3_HOME_ABORT; break; }
        now = timer_get_ms();
        el = now - t0;
        adv = (int32_t)((el * cps) / 1000U);
        if (adv > max_counts) { adv = max_counts; }
        m->rel_pos_th = start + sgn * adv;
        g_last_step_ms[idx] = now;
        e = m->rel_pos_th - m->rel_pos;
        if (e < 0) { e = -e; }
        if (e >= ferr_stop)                      { r = M3_HOME_STALL; break; }
        if ((adv >= max_counts) && (e <= 20))    { r = M3_HOME_DISTANCE; break; }
        if (el >= timeout_ms)                    { r = M3_HOME_TIMEOUT; break; }
    }
    m3_servo_release(idx);
    m->rel_pos_th = m->rel_pos;
    moved = m->rel_pos - start;
    if (moved < 0) { moved = -moved; }
    g_home_result[idx] = (uint32_t)(r + 2);
    g_home_counts[idx] = moved;
    return r;
}

bool hal_motor_home(uint8_t mask)
{
    uint32_t servo_was = g_servo_on;
    bool ok = true;
    int r;

    m3_servo_off();
    g_homing = true;

    if (ok && (mask & (1U << Z_AXIS)))
    {
        /* v30: gentle, speed-controlled homing through the servo (was 35 %
         * flat out, loud). Pen: up until it falls behind = its hard top stop. */
        r = m3_home_servo(&HAL_MOTOR_TOOL1, false, M3_HOME_TOOL_CPS_A, 1800, 120, 8000U);
        if ((r != M3_HOME_STALL) && (r != M3_HOME_DISTANCE)) { ok = false; }
        if (ok)
        {
            /* Blade: its top is a slip clutch, so it never stalls. Travel is
             * 10 mm (3440 counts): drive at most that + 1 mm, or - once homed -
             * only back up to the remembered top + 1 mm. */
            int32_t maxc = 3800;
            if (g_blade_homed)
            {
                int32_t below = HAL_MOTOR_TOOL2.rel_pos - g_blade_top;   /* up = rel_pos decreasing */
                maxc = below + 350;
                if (maxc < 350)  { maxc = 350; }
                if (maxc > 3800) { maxc = 3800; }
            }
            r = m3_home_servo(&HAL_MOTOR_TOOL2, false, M3_HOME_TOOL_CPS_B, maxc, 300, 8000U);
            if ((r != M3_HOME_STALL) && (r != M3_HOME_DISTANCE)) { ok = false; }
            if (ok) { g_blade_top = HAL_MOTOR_TOOL2.rel_pos; g_blade_homed = true; }
        }
        if (ok)
        {
            HAL_MOTOR_TOOL1.rel_pos_th = HAL_MOTOR_TOOL1.rel_pos;
            HAL_MOTOR_TOOL2.rel_pos_th = HAL_MOTOR_TOOL2.rel_pos;
        }
    }
    if (ok && (mask & (1U << X_AXIS)))
    {
        r = m3_home_drive(&HAL_MOTOR_X, true, 20U, 30000, 150U, 30000U);         /* right, to the stop */
        if (r != M3_HOME_STALL) { ok = false; }
        if (ok)
        {
            r = m3_home_drive(&HAL_MOTOR_X, false, 20U, 144, 300U, 3000U);        /* back off 2 mm */
            if (r != M3_HOME_DISTANCE) { ok = false; }
        }
        if (ok) { HAL_MOTOR_X.rel_pos_th = HAL_MOTOR_X.rel_pos; }
    }

    g_homing = false;
    g_servo_on = servo_was;
    return ok;
}

/* Identical bookkeeping to motor.c. */
int hal_motor_step(hal_motor_driver_t *motor, int steps, hal_motor_direction_t direction)
{
    int offset = 0;
    int idx = m3_index(motor);

    (void)steps;
    if (idx < 0)
    {
        return -1;                              /* blade gear: not available */
    }
    if (g_servo_on && g_servo_ready)
    {
        return m3_servo_step(motor, idx, direction);
    }
    switch (direction)
    {
        case HAL_MOTOR_DIR_CCW: offset = (motor->rel_pos - motor->rel_pos_th); break;
        case HAL_MOTOR_DIR_CW:  offset = motor->rel_pos_th - motor->rel_pos;   break;
        default: break;
    }
    if (offset > 8) { offset = 8; }

    motor->command_steps = 8 + offset;
    motor->current_steps = 0;
    motor->error_steps = 0;
    motor->wd_prev_steps = 0;
    motor->wd_armed = false;
    motor->wd_stall_counter = 0;
    g_drive_ms[idx] = 0;
    motor->state = HAL_MOTOR_DRIVEN;
    motor->rel_pos_th += 8 * direction;
    g_start_ms[idx] = timer_get_ms();
    hal_motor_set_direction(motor, direction);
    return 0;
}

void hal_motor_set_step_period(hal_motor_driver_t *motor, uint32_t period_ms)
{
    int idx = m3_index(motor);
    if (idx >= 0) { g_period_ms[idx] = period_ms; }
}

/* Step timer fired while the chunk is still running: too slow, push harder. */
void hal_motor_step_late(hal_motor_driver_t *motor)
{
    const m3_hw_t *hw = m3_hw(motor);
    int idx = m3_index(motor);

    if (!g_adapt_on || (idx < 0) || (hw == NULL)) { return; }
    g_adapt[idx] = m3_clamp(motor, m3_duty(motor) + M3_ADAPT_UP);
    if (motor->state == HAL_MOTOR_DRIVEN) { m3_set_duty(hw, g_adapt[idx]); }
}

void hal_motor_wait(hal_motor_driver_t *motor)
{
    while (motor->state != HAL_MOTOR_IDLE)
    {
        SYS_Tasks();
    }
}

void hal_motor_update_encoder_state(hal_motor_driver_t *motor, uint8_t enc_state)
{
    static const int8_t state_matrix[4][4] = {
        {M_NULL, M_CW,   M_CCW,  M_ERR},
        {M_CCW,  M_NULL, M_ERR,  M_CW},
        {M_CW,   M_ERR,  M_NULL, M_CCW},
        {M_ERR,  M_CCW,  M_CW,   M_NULL}
    };
    int8_t direction = state_matrix[motor->enc_cur_state][enc_state];

    switch (direction)
    {
        case M_ERR:
            motor->error_steps++;
            motor->enc_cur_state = enc_state;
            break;

        case M_CW:
        case M_CCW:
            if (direction == motor->direction)
            {
                if (motor->inv_encoder) { motor->current_steps--; } else { motor->current_steps++; }
            }
            else
            {
                if (motor->inv_encoder) { motor->current_steps++; } else { motor->current_steps--; }
            }
            if (motor->inv_encoder) { motor->rel_pos += (-direction); } else { motor->rel_pos += direction; }
            motor->enc_cur_state = enc_state;

            if ((motor->current_steps > 0) && !motor->wd_armed)
            {
                limits_set_state(motor->grbl_axis, false);
                motor->wd_armed = true;
            }
            if ((motor->state == HAL_MOTOR_DRIVEN) && (motor->current_steps >= motor->command_steps))
            {
                hal_motor_set_direction(motor, HAL_MOTOR_STOP);
                motor->state = HAL_MOTOR_IDLE;
                motor->wd_armed = false;
                {
                    /* Finished well inside its step period: a little less duty. */
                    int i = m3_index(motor);
                    if (g_adapt_on && (i >= 0) && (g_adapt[i] != 0U) &&
                        ((timer_get_ms() - g_start_ms[i]) + 2U < g_period_ms[i]))
                    {
                        uint32_t d = g_adapt[i];
                        g_adapt[i] = m3_clamp(motor, (d > M3_ADAPT_DOWN) ? (d - M3_ADAPT_DOWN) : 0U);
                    }
                }
            }
            break;

        case M_NULL:
        default:
            motor->enc_cur_state = enc_state;
            break;
    }
}

/* Called from the change-notice interrupts of ports A, B and E. */
void hal_motor_update_callback(void)
{
    uint8_t s;

    s = m3_enc_state(&hw_x);  if (s != HAL_MOTOR_X.enc_cur_state)     { hal_motor_update_encoder_state(&HAL_MOTOR_X, s); }
    s = m3_enc_state(&hw_y);  if (s != HAL_MOTOR_Y.enc_cur_state)     { hal_motor_update_encoder_state(&HAL_MOTOR_Y, s); }
    s = m3_enc_state(&hw_t1); if (s != HAL_MOTOR_TOOL1.enc_cur_state) { hal_motor_update_encoder_state(&HAL_MOTOR_TOOL1, s); }
    s = m3_enc_state(&hw_t2); if (s != HAL_MOTOR_TOOL2.enc_cur_state) { hal_motor_update_encoder_state(&HAL_MOTOR_TOOL2, s); }
    s = m3_enc_state(&hw_gear); if (s != HAL_MOTOR_ACCESSORY.enc_cur_state) { hal_motor_update_encoder_state(&HAL_MOTOR_ACCESSORY, s); }
}

hal_motor_state_t hal_motor_get_state(hal_motor_driver_t *motor)
{
    return motor->state;
}

int hal_motor_get_current_steps(hal_motor_driver_t *motor)
{
    return motor->current_steps;
}

void hal_motor_stop(hal_motor_driver_t *motor)
{
    hal_motor_set_direction(motor, HAL_MOTOR_STOP);
    motor->state = HAL_MOTOR_IDLE;
}

int hal_motor_set_free(hal_motor_driver_t *motor)
{
    hal_motor_stop(motor);
    motor->free = true;
    return 0;
}

void hal_motor_set_manual(hal_motor_driver_t *motor, bool manual_mode)
{
    motor->manual = manual_mode;
}

/*
 * Start-up self-test: with a driver ASLEEP (nSLEEP low, so nothing can move),
 * run its EN PWM at 50 % and count how often the EN pin reads high.
 * ~half of the samples high = the PWM really reaches the pin.
 */
uint32_t g_pwm_selftest_x, g_pwm_selftest_y;
uint32_t g_pwm_selftest_t1, g_pwm_selftest_t2;

/* Tool holders have no nSLEEP: check their EN PWM with a ~1 ms burst only
 * (a barely visible twitch at most). */
static uint32_t m3_pwm_selftest_short(const m3_hw_t *hw)
{
    uint32_t i, hi = 0;

    m3_set_duty(hw, PWM_PERIOD / 2U);
    for (i = 0; i < 1600U; i++)            /* 1600 x ~0.6 us ~ 1 ms */
    {
        uint32_t t0 = _CP0_GET_COUNT();
        while ((uint32_t)(_CP0_GET_COUNT() - t0) < 37U) { }
        if (GPIO_PinRead(hw->en)) { hi++; }
    }
    m3_set_duty(hw, 0);
    return hi;
}

static uint32_t m3_pwm_selftest(const m3_hw_t *hw)
{
    uint32_t i, hi = 0;

    if (hw->sleep == PIN_NONE) { return 0xFFFFFFFFU; }
    GPIO_PinClear(hw->sleep);                   /* driver asleep: no motion */
    m3_set_duty(hw, PWM_PERIOD / 2U);
    for (i = 0; i < 2000U; i++)
    {
        uint32_t t0 = _CP0_GET_COUNT();
        while ((uint32_t)(_CP0_GET_COUNT() - t0) < 37U) { }     /* ~0.6 us, not a multiple of the PWM period */
        if (GPIO_PinRead(hw->en)) { hi++; }
    }
    m3_set_duty(hw, 0);
    GPIO_PinSet(hw->sleep);                     /* wake again */
    return hi;
}

/* Count encoder movement (absolute quadrature steps) while waiting. */
static uint32_t m3_poll_encoder(const m3_hw_t *hw, uint32_t ms, uint8_t *state)
{
    static const int8_t q[4][4] = {
        {  0, +1, -1,  0 }, { -1,  0,  0, +1 }, { +1,  0,  0, -1 }, {  0, -1, +1,  0 },
    };
    uint32_t t0 = _CP0_GET_COUNT();
    int32_t n = 0;
    while ((uint32_t)(_CP0_GET_COUNT() - t0) < (ms * (SYS_FREQ / 2000U)))
    {
        uint8_t s = m3_enc_state(hw);
        n += q[*state][s];
        *state = s;
    }
    return (uint32_t)((n < 0) ? -n : n);
}

/* Y generator release mode (independent, which frees RD3) and a PWM-module
 * hold flag; both keep these values in normal use. */
static bool g_pwm_kept_off = false;
static uint32_t g_y_release_pmod = 3;   /* independent: frees RD3 (complementary held it low) */

/* Release both Y generators' pins back to GPIO. */
static void m3_y_release(void)
{
    PTCONCLR = _PTCON_PTEN_MASK;
    PDCx(5) = 0; SDCx(5) = 0; PDCx(6) = 0; SDCx(6) = 0;
    IOCONx(5) = (3UL << _IOCON3_FLTMOD_POSITION) | (g_y_release_pmod << _IOCON3_PMOD_POSITION);
    IOCONx(6) = (3UL << _IOCON3_FLTMOD_POSITION) | (g_y_release_pmod << _IOCON3_PMOD_POSITION);
    if (!g_pwm_kept_off) { PTCONSET = _PTCON_PTEN_MASK; }
}

/* Route PWM to a candidate's EN pin (0 % duty). */
static void m3_y_route(const m3_hw_t *hw)
{
    const uint32_t h_only = (1UL << _IOCON3_PENH_POSITION) | (3UL << _IOCON3_PMOD_POSITION)
                          | (3UL << _IOCON3_FLTMOD_POSITION);

    PTCONCLR = _PTCON_PTEN_MASK;
    if (hw->use_l) { IOCONx(hw->pwm_gen) = m3_l_iocon(g_l_mode); }
    else           { IOCONx(hw->pwm_gen) = h_only; }
    if ((hw->ph_gen != 0U) && (hw->ph_gen != hw->pwm_gen))       { IOCONx(hw->ph_gen) = h_only; }
    if ((hw->sleep_gen != 0U) && (hw->sleep_gen != hw->pwm_gen)) { IOCONx(hw->sleep_gen) = h_only; }
    m3_set_duty(hw, 0);
    if (hw->ph_gen != 0U)    { m3_gen_level(hw->ph_gen, false); }
    if (hw->sleep_gen != 0U) { m3_gen_level(hw->sleep_gen, false); }
    PTCONSET = _PTCON_PTEN_MASK;
}

/*
 * Try Y candidate A then B: with the driver asleep, check the PWM reaches the
 * EN pin; then wake it and give ONE 30 ms pulse at 50 % duty, measuring the
 * Y encoder. Keep the candidate that moved the rollers.
 */
static int32_t m3_y_try(const m3_hw_t *hw, uint32_t duty, uint32_t pulse_ms)
{
    uint32_t i, hi = 0, moved;
    uint8_t st;

    m3_y_release();
    GPIO_PinClear(hw->ph);    GPIO_PinOutputEnable(hw->ph);
    GPIO_PinClear(hw->en);    GPIO_PinOutputEnable(hw->en);
    GPIO_PinClear(hw->sleep); GPIO_PinOutputEnable(hw->sleep);
    m3_y_route(hw);                              /* PH low, asleep */
    m3_ph_write(hw, false);
    m3_sleep_write(hw, false);

    /* 1. PWM reaches EN? (driver asleep, nothing moves) */
    m3_set_duty(hw, PWM_PERIOD / 2U);
    for (i = 0; i < 2000U; i++)
    {
        uint32_t t0 = _CP0_GET_COUNT();
        while ((uint32_t)(_CP0_GET_COUNT() - t0) < 37U) { }
        if (GPIO_PinRead(hw->en)) { hi++; }
    }
    m3_set_duty(hw, 0);
    if ((hi < 600U) || (hi > 1400U))
    {
        return -1;                              /* no PWM on this pin */
    }

    /* 2. Wake, settle, one pulse at the given duty, then watch 200 ms. */
    m3_sleep_write(hw, true);
    st = m3_enc_state(hw);
    (void)m3_poll_encoder(hw, 3U, &st);
    m3_set_duty(hw, duty);
    moved = m3_poll_encoder(hw, pulse_ms, &st);
    m3_set_duty(hw, 0);
    moved += m3_poll_encoder(hw, 200U, &st);
    return (int32_t)moved;
}

static void m3_calibrate_y(void)
{
    g_ycal_a = m3_y_try(&hw_y_a, PWM_PERIOD / 2U, 30U);
    g_ycal_b = m3_y_try(&hw_y_b, PWM_PERIOD / 2U, 30U);
    g_ycal_a100 = m3_y_try(&hw_y_a, PWM_PERIOD, 15U);     /* 100 %: EN steady high */
    g_ycal_b100 = m3_y_try(&hw_y_b, PWM_PERIOD, 15U);

    if ((g_ycal_a >= 10) && (g_ycal_a >= g_ycal_b))      { hw_y = hw_y_a; g_ycfg = 1; }
    else if (g_ycal_b >= 10)                            { hw_y = hw_y_b; g_ycfg = 2; }
    else                                                { g_ycfg = 0; }

    m3_y_release();
    if (g_ycfg != 0U)
    {
        GPIO_PinClear(hw_y.sleep); GPIO_PinOutputEnable(hw_y.sleep);
        GPIO_PinClear(hw_y.ph);    GPIO_PinOutputEnable(hw_y.ph);
        m3_y_route(&hw_y);
        m3_ph_write(&hw_y, false);
        m3_sleep_write(&hw_y, true);            /* awake, EN low */
        HAL_MOTOR_Y.enc_cur_state = m3_enc_state(&hw_y);
        g_y_ok = true;
    }
    else
    {
        /* Neither worked: both pins low (driver asleep), Y disabled. */
        GPIO_PinClear(GPIO_PIN_RD2); GPIO_PinOutputEnable(GPIO_PIN_RD2);
        GPIO_PinClear(GPIO_PIN_RD3); GPIO_PinOutputEnable(GPIO_PIN_RD3);
    }
}

/*
 * Move a motor by the position servo at cps counts/s, blocking (USB kept alive).
 * Returns 1 = arrived, 0 = timed out, -1 = reset, -2 = servo gave up (lag limit).
 */
/* Optional: called on every pass of the ramp loop (the #YE mark scan). */
static void (*g_ramp_hook)(void) = NULL;

static int m3_servo_ramp(int idx, bool up, int32_t counts, uint32_t cps, int32_t *moved, uint32_t *ms)
{
    hal_motor_driver_t *m = g_servo_motor[idx];
    int32_t start = m->rel_pos_th, start_pos = m->rel_pos, sgn = up ? 1 : -1, adv, e;
    float n = (float)counts, v = (float)cps, acc = (float)cps * 8.0f;   /* full speed in 125 ms */
    float t1 = v / acc, d1 = (v * t1) / 2.0f, t2, tend, t;
    uint32_t t0 = timer_get_ms(), now, el, limit;
    int r;

    if (n < (2.0f * d1))        /* too short to reach full speed */
    {
        t1 = sqrtf(n / acc);
        v = acc * t1;
        d1 = n / 2.0f;
    }
    t2 = t1 + ((n - (2.0f * d1)) / v);
    tend = t2 + t1;
    limit = (uint32_t)(tend * 1000.0f) + 2000U;

    g_int[idx] = 0;
    g_dir_out[idx] = 0;
    g_last_step_ms[idx] = t0;
    g_active[idx] = true;
    for (;;)
    {
        APP_ServiceSerialOnly();
        if (g_ramp_hook != NULL) { g_ramp_hook(); }
        if (sys_rt_exec_state & EXEC_RESET) { r = -1; break; }
        if (!g_active[idx])                 { r = -2; break; }
        now = timer_get_ms();
        el = now - t0;
        t = (float)el / 1000.0f;
        if (t < t1)         { adv = (int32_t)(0.5f * acc * t * t); }
        else if (t < t2)    { adv = (int32_t)(d1 + (v * (t - t1))); }
        else if (t < tend)  { adv = counts - (int32_t)(0.5f * acc * (tend - t) * (tend - t)); }
        else                { adv = counts; }
        if (adv > counts)   { adv = counts; }
        m->rel_pos_th = start + (sgn * adv);
        g_last_step_ms[idx] = now;
        e = m->rel_pos_th - m->rel_pos;
        if (e < 0) { e = -e; }
        if ((adv >= counts) && (e <= 2))    { r = 1; break; }
        if (el >= limit)                    { r = 0; break; }
    }
    *ms = timer_get_ms() - t0;
    m3_servo_release(idx);
    m->rel_pos_th = (r == 1) ? (start + (sgn * counts)) : m->rel_pos;
    *moved = m->rel_pos - start_pos;
    return r;
}

/*
 * Knife steering. The gear's angle is tracked as a target in encoder counts:
 * small changes slew there while cutting, big ones must not happen in the
 * material, so the blade is lifted, turned and lowered again.
 */
#define M3_GEAR_REV          27635      /* counts per TOOL revolution (mark on the tool, by eye) */
#define M3_TOOL_ZERO_DEG     107.0f     /* direction the wheel lies along at this mark: wheel direction = 107 - gear angle (three readings by eye) */
#define M3_STEER_MAX_DEG     10.0f      /* turn in the material up to this */
#define M3_STEER_TURN_CPS    5000U      /* about 120 degrees/s */
#define M3_STEER_Z_CPS       1720U      /* 5 mm/s */
#define M3_STEER_BLADE_CPMM  344.0f     /* blade holder counts per mm */

/*
 * Holder-B tools, told apart by their reflective spots (see m3_find_tool_marks).
 * Every tool has the large spot "A" (two stripes ~11 and ~13 deg, starts 2620-2750
 * counts apart); most also have the small spot "B" (two stripes ~8 and ~9 deg,
 * starts ~2100 apart) at a tool-specific distance after A. The rotary blade has
 * only A (the sensor also sees two ~54 deg bands of other shiny parts on it). Zero (the tool's reference angle) is the start of A.
 * zero_deg: the direction the tool faces at zero (107 was set by eye with 01).
 * half: the tool works both ways round (a wheel), so it never turns more than a
 * quarter turn to line up; a knife has a front and needs the full turn.
 */
typedef struct
{
    const char *name;
    int32_t     a_to_b;         /* counts from A's start to B's start, -1 = no B */
    bool        steer;
    bool        half;
    float       zero_deg;
} m3_tool_t;

static const m3_tool_t m3_tools[] = {
    { "21 fine debossing",   8845,  false, true,  107.0f },
    { "11 perforation",      11237, true,  true,  107.0f },
    { "31 wavy blade",       12039, true,  true,  107.0f },
    { "knife blade",         14106, true,  false, 287.0f },   /* 107 faced backwards: +180 */
    { "01/02 scoring wheel", 18060, true,  true,  107.0f },
    { "41 engraving",        19577, false, true,  107.0f },
    { "rotary blade",        -1,    true,  true,  107.0f },
};
#define M3_TOOL_ROTARY   6U
#define M3_TOOL_UNKNOWN  255U
static const m3_tool_t m3_tool_unknown = { "unknown", -2, true, true, 107.0f };
static uint8_t g_tool_idx = M3_TOOL_UNKNOWN;
static int32_t g_tool_ab = 0;              /* last measured A-to-B distance, counts */

static const m3_tool_t *m3_tool(void)
{
    return (g_tool_idx < (sizeof(m3_tools) / sizeof(m3_tools[0]))) ? &m3_tools[g_tool_idx] : &m3_tool_unknown;
}

void hal_motor_gear_steer(float deg, bool in_material, float lift_mm)
{
    hal_motor_driver_t *g = &HAL_MOTOR_ACCESSORY;
    hal_motor_driver_t *b = &HAL_MOTOR_TOOL2;
    int32_t want, d, goal, count, moved;
    uint32_t ms;
    float dd;

    /* Roller cutter: at the tool's zero its wheel lies along M3_TOOL_ZERO_DEG, and a
     * wheel rolls either way, so directions repeat every half turn: never more than
     * a quarter turn to line up. A knife would need the full turn and its own offset. */
    const m3_tool_t *tl = m3_tool();

    if (!tl->steer) { return; }                     /* ball / point tools (21, 41): direction doesn't matter */
    want = g_gear_zero + (int32_t)(g_gear_sign * (deg - tl->zero_deg) * ((float)M3_GEAR_REV / 360.0f));
    if (tl->half)
    {
        d = (want - g_gear_goal) % (M3_GEAR_REV / 2);
        if (d > (M3_GEAR_REV / 4))   { d -= (M3_GEAR_REV / 2); }
        if (d < -(M3_GEAR_REV / 4))  { d += (M3_GEAR_REV / 2); }
    }
    else
    {
        d = (want - g_gear_goal) % M3_GEAR_REV;    /* knife: has a front, so up to half a turn either way */
        if (d > (M3_GEAR_REV / 2))   { d -= M3_GEAR_REV; }
        if (d < -(M3_GEAR_REV / 2))  { d += M3_GEAR_REV; }
    }
    if (d == 0) { return; }
    goal = g_gear_goal + d;
    dd = ((float)d * 360.0f) / (float)M3_GEAR_REV;
    if (dd < 0.0f) { dd = -dd; }

    if (in_material && (dd <= M3_STEER_MAX_DEG))
    {
        g_gear_goal = goal;
        g_gear_slewing = true;
        return;
    }

    /* Lift (only if in the material), turn, lower. */
    count = in_material ? (int32_t)(lift_mm * M3_STEER_BLADE_CPMM) : 0;
    {
        int32_t th0 = b->rel_pos_th;

        g_gear_slewing = false;
        if (count > 0)
        {
            if (m3_servo_ramp(3, false, count, M3_STEER_Z_CPS, &moved, &ms) != 1) { return; }
        }
        if (m3_servo_ramp(M3_SERVO_GEAR, d > 0, (d > 0) ? d : -d, M3_STEER_TURN_CPS, &moved, &ms) != 1) { return; }
        g_gear_goal = goal;
        g->rel_pos_th = goal;
        if (count > 0)
        {
            if (m3_servo_ramp(3, true, count, M3_STEER_Z_CPS, &moved, &ms) != 1) { return; }
            b->rel_pos_th = th0;    /* Grbl's Z target is unchanged */
        }
    }
}

/*
 * ADC for the tool position sensor (RB1 / AN3), read while a holder-B tool is
 * scanned. Set up for each scan and switched off again afterwards.
 */

static bool m3_adc_start(void)
{
    uint32_t t0;

    ADCCON1 = 0;
    ADC0CFG = DEVADC0; ADC1CFG = DEVADC1; ADC2CFG = DEVADC2; ADC3CFG = DEVADC3;
    ADC4CFG = DEVADC4; ADC5CFG = DEVADC5; ADC7CFG = DEVADC7;
    ADCCON1 = (3UL << _ADCCON1_SELRES_POSITION);                     /* 12 bit */
    ADCCON2 = (4UL << _ADCCON2_ADCDIV_POSITION) | (63UL << _ADCCON2_SAMC_POSITION);
    ADCCON3 = 0;                                                     /* AVDD / AVSS reference */
    ADCANCON = (5UL << _ADCANCON_WKUPCLKCNT_POSITION);
    ADCCSS1 = 0; ADCCSS2 = 0; ADCGIRQEN1 = 0; ADCGIRQEN2 = 0;
    ADCCON1SET = _ADCCON1_ON_MASK;
    t0 = _CP0_GET_COUNT();
    while (!(ADCCON2 & _ADCCON2_BGVRRDY_MASK)) { if ((uint32_t)(_CP0_GET_COUNT() - t0) > 6000000U) { return false; } }
    if (ADCCON2 & _ADCCON2_REFFLT_MASK) { return false; }
    ADCANCONSET = _ADCANCON_ANEN7_MASK | 0x3FU;                      /* ADC7 and ADC0-5 */
    t0 = _CP0_GET_COUNT();
    while ((ADCANCON & (_ADCANCON_WKRDY7_MASK | (0x3FUL << 8))) != (_ADCANCON_WKRDY7_MASK | (0x3FUL << 8)))
    {
        if ((uint32_t)(_CP0_GET_COUNT() - t0) > 6000000U) { return false; }
    }
    ADCCON3SET = _ADCCON3_DIGEN7_MASK | (0x3FUL << 16);
    return true;
}

/* One software-triggered conversion, or -1 on timeout. */
static int32_t m3_adc_read(uint8_t ch)
{
    uint32_t t0 = _CP0_GET_COUNT();
    volatile uint32_t *data = (volatile uint32_t *)((uint32_t)&ADCDATA0 + ((uint32_t)ch * 0x10U));

    ADCCON3CLR = 0x3FUL;
    ADCCON3SET = (uint32_t)ch | _ADCCON3_RQCNVRT_MASK;
    while (((ch < 32U) ? ((ADCDSTAT1 >> ch) & 1U) : ((ADCDSTAT2 >> (ch - 32U)) & 1U)) == 0U)
    {
        if ((uint32_t)(_CP0_GET_COUNT() - t0) > 120000U) { return -1; }  /* 2 ms */
    }
    return (int32_t)(*data);
}

/*
 * Find the tool's angle from its reflective marks. The carriage must be at X0
 * and the tool at Z-10. IR light on (RC7), sensor on RB1/AN3. Going round the
 * tool the marks' rising edges are about 2680, 15400, 2200 and 7400 counts
 * apart. The mark after the 7400 gap is on the reflective part that lines the
 * wheel up with Y; it becomes zero and the gear is turned to it.
 * Returns 1 = found, 0 = no pattern (no tool?), -1 = ADC failed.
 */
/*
 * Tool signature (#YN 1): while the tool turns, record each reflective spot
 * (start, width, peak) over the first turn and the brightest reading in each
 * 5-degree slice, so different tools can be told apart.
 */
#define M3_SIG_BINS 72U
static bool     g_sig_mode = false;
static uint16_t g_sig_bin[M3_SIG_BINS];
static int32_t  g_sig_seg[16][3];          /* start (counts), width (counts), peak */
static uint32_t g_sig_n;
static int32_t  g_sig_start;

static int m3_find_tool_marks(int32_t *gap_out, uint32_t *nr_out, int32_t *zero_out)
{
    bool sig_high = false, armed = false;   /* armed: a dark gap has been seen, so every spot is seen whole */
    int32_t arm_pos = 0;
    int32_t rise[16], zero2 = 0, gap = 0, moved2, d3;
    uint32_t nr = 0U, i3, tick, ms2, t1;
    bool found = false, is_high;
    volatile uint32_t *ansb = (volatile uint32_t *)&ANSELB;
    uint32_t saved_b;

    if (!m3_adc_start())
    {
        ADCCON1 = 0;
        return -1;
    }
    saved_b = *ansb;
    *ansb |= (1UL << 1);                                       /* RB1 analog */
    m3_make_digital(GPIO_PIN_RC7);
    GPIO_PinSet(GPIO_PIN_RC7);
    GPIO_PinOutputEnable(GPIO_PIN_RC7);                        /* IR light on */
    t1 = timer_get_ms();
    while ((timer_get_ms() - t1) < 20U) { }
    is_high = (m3_adc_read(3U) > 2000);

    g_gear_slewing = false;
    HAL_MOTOR_ACCESSORY.rel_pos_th = HAL_MOTOR_ACCESSORY.rel_pos;
    g_gear_goal = HAL_MOTOR_ACCESSORY.rel_pos_th + ((M3_GEAR_REV * 16) / 10);
    for (i3 = 0U; i3 < M3_SIG_BINS; i3++) { g_sig_bin[i3] = 0U; }
    g_sig_n = 0U;
    g_sig_start = HAL_MOTOR_ACCESSORY.rel_pos;
    g_gear_slew = 4;                                            /* 4000 counts/s */
    g_gear_slewing = true;
    tick = timer_get_ms();
    while (g_gear_slewing)
    {
        int32_t v = m3_adc_read(3U);

        if (v >= 0)
        {
            if (!is_high && (v > 2400))
            {
                is_high = true;
                if (nr < 16U) { rise[nr] = HAL_MOTOR_ACCESSORY.rel_pos; nr++; }
            }
            else if (is_high && (v < 1600)) { is_high = false; }
            {
                const int32_t pos = HAL_MOTOR_ACCESSORY.rel_pos;
                int32_t rel;
                const uint32_t b = (uint32_t)((((pos % M3_GEAR_REV) + M3_GEAR_REV) % M3_GEAR_REV) * (int32_t)M3_SIG_BINS / M3_GEAR_REV);

                if (g_sig_mode && (b < M3_SIG_BINS) && ((uint32_t)v > g_sig_bin[b])) { g_sig_bin[b] = (uint16_t)v; }
                /* Record exactly one turn, starting in a dark gap: a scan that starts on a stripe
                 * would otherwise see that stripe cut short and miss the pattern. */
                if (!armed && (v < 1600)) { armed = true; arm_pos = pos; }
                rel = armed ? (pos - arm_pos) : -1;
                if (rel < 0)
                {
                    /* still on a stripe at the start: wait */
                }
                else if (rel <= M3_GEAR_REV)
                {
                    if (!sig_high && (v > 2400) && (g_sig_n < 16U))
                    {
                        sig_high = true;
                        g_sig_seg[g_sig_n][0] = pos; g_sig_seg[g_sig_n][1] = 0; g_sig_seg[g_sig_n][2] = v;
                    }
                    else if (sig_high)
                    {
                        if (v > g_sig_seg[g_sig_n][2]) { g_sig_seg[g_sig_n][2] = v; }
                        if (v < 1600) { g_sig_seg[g_sig_n][1] = pos - g_sig_seg[g_sig_n][0]; g_sig_n++; sig_high = false; }
                    }
                }
                else if (sig_high)
                {
                    g_sig_seg[g_sig_n][1] = pos - g_sig_seg[g_sig_n][0]; g_sig_n++; sig_high = false;   /* still high at the end of the turn */
                }
            }
        }
        if ((timer_get_ms() - tick) >= 20U) { tick = timer_get_ms(); APP_ServiceSerialOnly(); }
        if (sys_rt_exec_state & EXEC_RESET) { break; }
    }
    g_gear_slewing = false;
    g_gear_slew = 8;
    GPIO_PinClear(GPIO_PIN_RC7);
    GPIO_PinInputEnable(GPIO_PIN_RC7);
    *ansb = saved_b;
    ADCCON1CLR = _ADCCON1_ON_MASK;

    *nr_out = nr;
    (void)rise;

    /* Find A: two spots ~2620-2750 apart, the second wider than any B stripe. */
    g_tool_idx = M3_TOOL_UNKNOWN;
    g_tool_ab = -1;
    {
        uint32_t ia = 0U, ib = 0U, k5;
        bool have_a = false, have_b = false, wide = false;

        for (k5 = 0U; k5 < g_sig_n; k5++)
        {
            const uint32_t j5 = (k5 + 1U) % g_sig_n;
            const int32_t g5 = (((g_sig_seg[j5][0] - g_sig_seg[k5][0]) % M3_GEAR_REV) + M3_GEAR_REV) % M3_GEAR_REV;

            if (g_sig_seg[k5][1] > 3000) { wide = true; }
            if (!have_a && (g_sig_n >= 2U) && (g5 >= 2400) && (g5 <= 2950) && (g_sig_seg[j5][1] >= 850)) { ia = k5; have_a = true; }
            if (!have_b && (g_sig_n >= 2U) && (g5 >= 1900) && (g5 <= 2350) && (g_sig_seg[k5][1] < 850) && (g_sig_seg[j5][1] < 850)) { ib = k5; have_b = true; }
        }
        if (have_a)
        {
            gap = (((g_sig_seg[(ia + 1U) % g_sig_n][0] - g_sig_seg[ia][0]) % M3_GEAR_REV) + M3_GEAR_REV) % M3_GEAR_REV;
            zero2 = g_sig_seg[ia][0];
            found = true;
            if (wide || !have_b)
            {
                /* The rotary blade has only spot A (its wide bands are other shiny parts);
                 * every other tool also has spot B. */
                g_tool_idx = M3_TOOL_ROTARY;
            }
            else
            {
                int32_t best = 451;

                g_tool_ab = (((g_sig_seg[ib][0] - g_sig_seg[ia][0]) % M3_GEAR_REV) + M3_GEAR_REV) % M3_GEAR_REV;
                for (k5 = 0U; k5 < (sizeof(m3_tools) / sizeof(m3_tools[0])); k5++)
                {
                    int32_t e5 = g_tool_ab - m3_tools[k5].a_to_b;
                    if (e5 < 0) { e5 = -e5; }
                    if ((m3_tools[k5].a_to_b >= 0) && (e5 < best)) { best = e5; g_tool_idx = (uint8_t)k5; }
                }
            }
        }
    }
    if (g_sig_mode) { return found ? 1 : 0; }   /* recording only: leave the tool where it is */
    if (!found) { return 0; }
    /* Any whole turn from A is the same angle: use the nearest one. */
    zero2 += ((HAL_MOTOR_ACCESSORY.rel_pos_th - zero2) / M3_GEAR_REV) * M3_GEAR_REV;
    if ((HAL_MOTOR_ACCESSORY.rel_pos_th - zero2) > (M3_GEAR_REV / 2)) { zero2 += M3_GEAR_REV; }
    d3 = zero2 - HAL_MOTOR_ACCESSORY.rel_pos_th;
    if (d3 != 0)
    {
        (void)m3_servo_ramp(M3_SERVO_GEAR, d3 > 0, (d3 > 0) ? d3 : -d3, M3_STEER_TURN_CPS, &moved2, &ms2);
    }
    g_gear_zero = zero2;
    g_gear_goal = zero2;
    HAL_MOTOR_ACCESSORY.rel_pos_th = zero2;
    *gap_out = gap;
    *zero_out = zero2;
    return 1;
}

/*
 * Knife job start. Grbl's own position is untouched: the moves are made with
 * the servo directly and undone exactly. Blade counts: 8 per Grbl step, and
 * Z+ / X+ both make the encoder count down.
 */
bool hal_motor_tool_home(int32_t x_steps, int32_t z_steps)
{
    const int32_t Z_BOTTOM_STEPS = -433;                       /* Z-10 mm, blade holder */
    int32_t gap = 0, zero = 0, moved, d;
    uint32_t nr = 0U, ms;
    int r;
#define M3_RAMP(idx_, delta_, cps_) \
    do { d = (delta_); if ((d != 0) && (m3_servo_ramp((idx_), d > 0, (d > 0) ? d : -d, (cps_), &moved, &ms) != 1)) { return false; } } while (0)

    M3_RAMP(3, 8 * z_steps, 1720U);                            /* up to Z0 */
    M3_RAMP(0, 8 * x_steps, 1800U);                            /* to X0 */
    M3_RAMP(3, -8 * Z_BOTTOM_STEPS, 1720U);                    /* down into the sensor position */
    r = m3_find_tool_marks(&gap, &nr, &zero);
    if (!g_sig_mode)
    {
        char msg[64];
        const m3_tool_t *tl = m3_tool();

        snprintf(msg, sizeof(msg), "[MSG:Tool %s, steering %s]", (r == 1) ? tl->name : "not found",
                 ((r == 1) && tl->steer) ? "on" : "off");
        printString(msg); printString(M3_EOL);
    }
    M3_RAMP(3, 8 * Z_BOTTOM_STEPS, 1720U);                     /* back up */
    M3_RAMP(0, -8 * x_steps, 1800U);                           /* back to where the job left X */
    M3_RAMP(3, -8 * z_steps, 1720U);                           /* and Z */
#undef M3_RAMP
    return (r == 1);
}

/* The TX ring drops text when full: wait for room, briefly. */
static void m3_tx(const char *str)
{
    while (*str != 0)
    {
        uint32_t t4 = timer_get_ms();
        while ((serial_get_tx_buffer_count() >= 60U) && ((timer_get_ms() - t4) < 500U))
        {
            APP_ServiceSerialOnly();
        }
        serial_write((uint8_t)*str);
        str++;
    }
}

/*
 * I2C probe, bit-banged, for finding a device on the carriage. Pins are only
 * ever pulled low or released, as an I2C bus expects. About 50 kHz.
 */
static void m3_i2c_wait(void)
{
    uint32_t t = _CP0_GET_COUNT();
    while ((uint32_t)(_CP0_GET_COUNT() - t) < 600U) { }
}

/*
 * Registration sensor (ISL29125 colour sensor): I2C address 0x44, SCL RE13, SDA RE12.
 * Bit-banged: pins are only pulled low or released.
 */
#define M3_BUS_SCL   ((GPIO_PIN)77U)
#define M3_BUS_SDA   ((GPIO_PIN)76U)
#define M3_BUS_ADDR  0x44U

static void m3_bus_scl_up(void)
{
    uint32_t t = _CP0_GET_COUNT();

    GPIO_PinInputEnable(M3_BUS_SCL);
    while (!GPIO_PinRead(M3_BUS_SCL) && ((uint32_t)(_CP0_GET_COUNT() - t) < 120000U)) { }  /* clock stretch, 2 ms max */
    m3_i2c_wait();
}

static void m3_bus_start(void)
{
    GPIO_PinInputEnable(M3_BUS_SDA); m3_i2c_wait();
    m3_bus_scl_up();
    GPIO_PinOutputEnable(M3_BUS_SDA); m3_i2c_wait();
    GPIO_PinOutputEnable(M3_BUS_SCL); m3_i2c_wait();
}

static void m3_bus_stop(void)
{
    GPIO_PinOutputEnable(M3_BUS_SDA); m3_i2c_wait();
    m3_bus_scl_up();
    GPIO_PinInputEnable(M3_BUS_SDA); m3_i2c_wait();
}

static bool m3_bus_write(uint32_t byte)
{
    uint32_t b;
    bool ack;

    for (b = 0U; b < 8U; b++)
    {
        if (byte & (0x80UL >> b)) { GPIO_PinInputEnable(M3_BUS_SDA); } else { GPIO_PinOutputEnable(M3_BUS_SDA); }
        m3_i2c_wait();
        m3_bus_scl_up();
        GPIO_PinOutputEnable(M3_BUS_SCL); m3_i2c_wait();
    }
    GPIO_PinInputEnable(M3_BUS_SDA); m3_i2c_wait();
    m3_bus_scl_up();
    ack = !GPIO_PinRead(M3_BUS_SDA);
    GPIO_PinOutputEnable(M3_BUS_SCL); m3_i2c_wait();
    return ack;
}

static uint32_t m3_bus_read(bool ack)
{
    uint32_t b, v = 0U;

    GPIO_PinInputEnable(M3_BUS_SDA);
    for (b = 0U; b < 8U; b++)
    {
        m3_i2c_wait();
        m3_bus_scl_up();
        v = (v << 1) | (GPIO_PinRead(M3_BUS_SDA) ? 1U : 0U);
        GPIO_PinOutputEnable(M3_BUS_SCL);
    }
    m3_i2c_wait();
    if (ack) { GPIO_PinOutputEnable(M3_BUS_SDA); } else { GPIO_PinInputEnable(M3_BUS_SDA); }
    m3_i2c_wait();
    m3_bus_scl_up();
    GPIO_PinOutputEnable(M3_BUS_SCL); m3_i2c_wait();
    GPIO_PinInputEnable(M3_BUS_SDA);
    return v;
}

static bool m3_bus_read_reg(uint32_t reg, uint32_t *b0, uint32_t *b1)
{
    bool ok;

    m3_bus_start();
    ok = m3_bus_write(M3_BUS_ADDR << 1) && m3_bus_write(reg);
    if (ok)
    {
        m3_bus_start();
        ok = m3_bus_write((M3_BUS_ADDR << 1) | 1U);
        if (ok)
        {
            *b0 = m3_bus_read(true);
            *b1 = m3_bus_read(false);
        }
    }
    m3_bus_stop();
    return ok;
}

/*
 * Registration mark scan (#YE). The sensor (ISL29125 at 0x44 on the bus above)
 * sits M3_REG_DX_MM / M3_REG_DY_MM from the pen: it is over a mark when the
 * machine is at the mark's position plus that offset (measured 2026-11-10).
 */
#define M3_REG_DX_MM       16.1f
#define M3_REG_DY_MM       2.0f   /* 1.5 by 1 mm steps; #YE scans both ways then read 0.5 high */
#define M3_REG_MAX_SAMPLES 2500U
#define M3_REG_SCAN_MM_S   5.0f
#define M3_REG_MOVE_MM_S   25.0f
static float    g_reg_pos[M3_REG_MAX_SAMPLES];
static uint16_t g_reg_val[M3_REG_MAX_SAMPLES];
static uint32_t g_reg_n;
static float    g_reg_p0, g_reg_cpm;
static int32_t  g_reg_rel0;
static hal_motor_driver_t *g_reg_motor;
static int32_t  g_reg_last = -1;

/* Green only, 12 bit (one reading every ~6 ms), 10000 lux range. */
static bool m3_reg_sensor_on(void)
{
    bool ok;

    m3_make_digital(M3_BUS_SCL); m3_make_digital(M3_BUS_SDA);
    GPIO_PinClear(M3_BUS_SCL); GPIO_PinClear(M3_BUS_SDA);
    GPIO_PinInputEnable(M3_BUS_SCL); GPIO_PinInputEnable(M3_BUS_SDA);
    m3_bus_start();
    ok = m3_bus_write(M3_BUS_ADDR << 1) && m3_bus_write(1U) && m3_bus_write(0x19U);
    m3_bus_stop();
    return ok;
}

static int32_t m3_reg_read(void)
{
    uint32_t b0 = 0U, b1 = 0U;

    if (!m3_bus_read_reg(0x09U, &b0, &b1)) { return -1; }
    return (int32_t)((b1 << 8) | b0);
}

/* Ramp hook: keep each new reading with where the sensor was. */
static void m3_reg_sample(void)
{
    int32_t v = m3_reg_read();

    if ((v < 0) || (v == g_reg_last) || (g_reg_n >= M3_REG_MAX_SAMPLES)) { return; }
    g_reg_last = v;
    g_reg_pos[g_reg_n] = g_reg_p0 - ((float)(g_reg_motor->rel_pos - g_reg_rel0) / g_reg_cpm);
    g_reg_val[g_reg_n] = (uint16_t)v;
    g_reg_n++;
}

/* Signed mm as "-12.34". */
static void m3_fmt_mm(char *buf, size_t len, float mm)
{
    long h = (long)((mm < 0.0f) ? (mm * 100.0f - 0.5f) : (mm * 100.0f + 0.5f));
    long a2 = (h < 0) ? -h : h;

    snprintf(buf, len, "%s%ld.%02ld", (h < 0) ? "-" : "", a2 / 100L, a2 % 100L);
}

/*
 * "#Y" lines from USB serial (dispatched by app.c, not Grbl):
 *   #YE axis from to          find a registration mark (see MAKER3_GRBL_SENDER_GUIDE.md)
 *   #YN 1                     record a holder-B tool's reflective-spot signature (needs T1)
 *   #YZ [light] [reg val..]   read / write the registration sensor's registers
 * Anything else prints a usage line and changes nothing.
 */
void hal_motor_y_cmd(const char *line)
{
    char out[64];
    uint32_t a[4] = { 0, 0, 0, 0 };
    uint32_t n = 0;
    const char *p = line + 3;

    while ((*p != 0) && (n < 4U))
    {
        while (*p == ' ') { p++; }
        if ((*p < '0') || (*p > '9')) { break; }
        a[n] = 0;
        while ((*p >= '0') && (*p <= '9')) { a[n] = a[n] * 10U + (uint32_t)(*p - '0'); p++; }
        n++;
    }

    if ((line[2] == 'E') || (line[2] == 'e'))
    {
        /*
         * #YE axis from to: find a dark mark. axis 0 = X, 1 = Y; from / to are the
         * mark's possible positions in tenths of a mm, in pen coordinates (where
         * the pen would draw it). The sensor passes from -> to at 5 mm/s with the
         * white light on, then the axis returns to where it was (Grbl's position
         * is untouched). Max 60 mm per scan.
         * [MARK X|Y found edge1 edge2 centre white dark], mm in pen coordinates;
         * edge2 and centre are "-" when the scan ended inside a dark area.
         * [MARK X|Y none white dark] when nothing dark enough was seen.
         */
        const uint32_t axis = a[0];
        const float off = (axis == 0U) ? M3_REG_DX_MM : M3_REG_DY_MM;
        const char ax = (axis == 0U) ? 'X' : 'Y';
        float from_mm, to_mm, cur_mm, edge1 = 0.0f, edge2 = 0.0f;
        int32_t d1, d2, back, moved4;
        uint32_t ms4, k, white = 0U, dark = 0xFFFFU, thr;
        int r4 = 1;
        char e1[16] = "-", e2[16] = "-", cc[16] = "-";
        volatile uint32_t *ansel = (volatile uint32_t *)&ANSELE;
        const uint32_t saved_e = *ansel;
        bool have1 = false, have2 = false;

        if ((n < 3U) || (axis > 1U) || (sys.state != STATE_IDLE))
        {
            printString("[MARK refused]"); printString(M3_EOL);
            return;
        }
        from_mm = ((float)a[1] / 10.0f) + off;       /* machine positions for the sensor */
        to_mm = ((float)a[2] / 10.0f) + off;
        if ((from_mm == to_mm) || (fabsf(to_mm - from_mm) > 60.0f) ||
            ((axis == 0U) && ((from_mm > 340.0f) || (to_mm > 340.0f))))   /* X340 reached with a tiny gap left */
        {
            printString("[MARK refused range]"); printString(M3_EOL);
            return;
        }
        g_reg_motor = g_servo_motor[axis];
        g_reg_cpm = settings.steps_per_mm[axis] * 8.0f;
        cur_mm = (float)(sys_position[axis] + st_carriage_offset_steps((uint8_t)axis)) / settings.steps_per_mm[axis];   /* carriage */
        g_reg_rel0 = g_reg_motor->rel_pos_th;

        if (!m3_reg_sensor_on())
        {
            *ansel = saved_e;
            printString("[MARK sensor not answering]"); printString(M3_EOL);
            return;
        }
        GPIO_PinClear(GPIO_PIN_RG7);                          /* white light on */

        /* Machine coordinate up = encoder counts down, on both axes. */
        d1 = (int32_t)(((cur_mm - from_mm) * g_reg_cpm) + ((cur_mm > from_mm) ? 0.5f : -0.5f));
        if (d1 != 0)
        {
            r4 = m3_servo_ramp((int)axis, d1 > 0, (d1 > 0) ? d1 : -d1, (uint32_t)(M3_REG_MOVE_MM_S * g_reg_cpm), &moved4, &ms4);
        }
        if (r4 == 1)
        {
            uint32_t t7 = timer_get_ms();
            while ((timer_get_ms() - t7) < 30U) { }            /* first reading with the light on */
            g_reg_n = 0U; g_reg_last = -1;
            g_reg_p0 = cur_mm;                                  /* positions relative to g_reg_rel0 */
            d2 = (int32_t)(((from_mm - to_mm) * g_reg_cpm) + ((from_mm > to_mm) ? 0.5f : -0.5f));
            g_ramp_hook = m3_reg_sample;
            r4 = m3_servo_ramp((int)axis, d2 > 0, (d2 > 0) ? d2 : -d2, (uint32_t)(M3_REG_SCAN_MM_S * g_reg_cpm), &moved4, &ms4);
            g_ramp_hook = NULL;
        }
        GPIO_PinSet(GPIO_PIN_RG7);
        /* Back exactly to where Grbl thinks the axis is. */
        back = g_reg_rel0 - g_reg_motor->rel_pos_th;
        if (back != 0)
        {
            int rb = m3_servo_ramp((int)axis, back > 0, (back > 0) ? back : -back, (uint32_t)(M3_REG_MOVE_MM_S * g_reg_cpm), &moved4, &ms4);
            if (rb != 1) { r4 = rb; }
        }
        *ansel = saved_e;
        if (r4 != 1)
        {
            snprintf(out, sizeof(out), "[MARK %c error %d]", ax, r4);
            printString(out); printString(M3_EOL);
            mc_reset();
            return;
        }

        for (k = 0U; k < g_reg_n; k++)
        {
            if (g_reg_val[k] > white) { white = g_reg_val[k]; }
            if (g_reg_val[k] < dark) { dark = g_reg_val[k]; }
        }
        if ((g_reg_n < 10U) || (white < 50U) || (((white - dark) * 10U) < (white * 3U)))
        {
            snprintf(out, sizeof(out), "[MARK %c none %lu %lu]", ax, (unsigned long)white,
                     (unsigned long)((dark == 0xFFFFU) ? 0U : dark));
            printString(out); printString(M3_EOL);
            return;
        }
        thr = (white + dark) / 2U;
        for (k = 1U; k < g_reg_n; k++)
        {
            const float v0 = (float)g_reg_val[k - 1U], v1 = (float)g_reg_val[k];
            const float f = ((float)thr - v0) / (v1 - v0);
            const float at = g_reg_pos[k - 1U] + (f * (g_reg_pos[k] - g_reg_pos[k - 1U])) - off;

            if (!have1 && (v0 >= (float)thr) && (v1 < (float)thr)) { edge1 = at; have1 = true; }
            else if (have1 && !have2 && (v0 < (float)thr) && (v1 >= (float)thr)) { edge2 = at; have2 = true; }
        }
        if (have1) { m3_fmt_mm(e1, sizeof(e1), edge1); }
        if (have2) { m3_fmt_mm(e2, sizeof(e2), edge2); m3_fmt_mm(cc, sizeof(cc), (edge1 + edge2) / 2.0f); }
        snprintf(out, sizeof(out), "[MARK %c found %s %s %s %lu %lu]", ax, e1, e2, cc, (unsigned long)white, (unsigned long)dark);
        printString(out); printString(M3_EOL);
        return;
    }

    if ((line[2] == 'Z') || (line[2] == 'z'))
    {
        /*
         * #YZ [light] [reg val [val2]]: read the 0x44 device's registers, 0x00-0x0F
         * and 0x7E-0x7F, two bytes each. light 1 = white light (RG7) on. With reg
         * and val, writes that first (val2 makes it a 16-bit write). Numbers are decimal.
         */
        static const uint8_t regs[] = { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 0x7EU, 0x7FU };
        volatile uint32_t *ansel = (volatile uint32_t *)&ANSELE;
        const uint32_t saved_e = *ansel;
        const bool light = (n >= 1U) && (a[0] != 0U);
        uint32_t k, t6;

        m3_make_digital(M3_BUS_SCL); m3_make_digital(M3_BUS_SDA);
        GPIO_PinClear(M3_BUS_SCL); GPIO_PinClear(M3_BUS_SDA);
        GPIO_PinInputEnable(M3_BUS_SCL); GPIO_PinInputEnable(M3_BUS_SDA);
        if (light)
        {
            GPIO_PinClear(GPIO_PIN_RG7);
            t6 = timer_get_ms();
            while ((timer_get_ms() - t6) < 100U) { APP_ServiceSerialOnly(); }
        }
        if (n >= 3U)
        {
            bool ok;

            m3_bus_start();
            ok = m3_bus_write(M3_BUS_ADDR << 1) && m3_bus_write(a[1]) && m3_bus_write(a[2]);
            if (ok && (n >= 4U)) { ok = m3_bus_write(a[3]); }
            m3_bus_stop();
            snprintf(out, sizeof(out), "[YZ write %s]", ok ? "ok" : "noack");
            m3_tx(out); m3_tx(M3_EOL);
            t6 = timer_get_ms();
            while ((timer_get_ms() - t6) < 200U) { APP_ServiceSerialOnly(); }
        }
        for (k = 0U; k < sizeof(regs); k++)
        {
            uint32_t b0 = 0U, b1 = 0U;

            if (m3_bus_read_reg(regs[k], &b0, &b1))
            {
                snprintf(out, sizeof(out), "[YZ %02X %02lX %02lX]", (unsigned)regs[k], (unsigned long)b0, (unsigned long)b1);
            }
            else
            {
                snprintf(out, sizeof(out), "[YZ %02X noack]", (unsigned)regs[k]);
            }
            m3_tx(out); m3_tx(M3_EOL);
        }
        if (light) { GPIO_PinSet(GPIO_PIN_RG7); }
        *ansel = saved_e;
        m3_tx("[YZ done]"); m3_tx(M3_EOL);
        return;
    }

    if ((line[2] == 'N') || (line[2] == 'n'))
    {
        /* #YN 1: record the tool's signature, doing the whole job-start move itself
         * (holder B up, X0, down into the tool pocket, 1.6 turns, back). Needs T1.
         * [YNS i start width peak] per spot in the first turn (start = counts within
         * one turn of 27635), then [YNB k v v v ...] brightest reading per 5 degrees. */
        if ((n >= 1U) && (a[0] == 1U))
        {
            uint32_t k4, j4;
            bool okh;

            if ((sys.state != STATE_IDLE) || (fabsf(settings.steps_per_mm[Z_AXIS] - DEFAULT_B_STEPS_PER_MM) > 0.01f))
            {
                printString("[YNS refused: select T1 and be idle]"); printString(M3_EOL);
                return;
            }
            g_sig_mode = true;
            okh = hal_motor_tool_home(sys_position[X_AXIS] + st_carriage_offset_steps(X_AXIS), sys_position[Z_AXIS]);
            g_sig_mode = false;
            snprintf(out, sizeof(out), "[YNS moves %s spots=%lu]", okh ? "ok" : "failed", (unsigned long)g_sig_n);
            m3_tx(out); m3_tx(M3_EOL);
            snprintf(out, sizeof(out), "[YNS tool=%s a_to_b=%ld]", m3_tool()->name, (long)g_tool_ab);
            m3_tx(out); m3_tx(M3_EOL);
            for (k4 = 0U; k4 < g_sig_n; k4++)
            {
                snprintf(out, sizeof(out), "[YNS %lu %ld %ld %ld]", (unsigned long)k4,
                         (long)(((g_sig_seg[k4][0] % M3_GEAR_REV) + M3_GEAR_REV) % M3_GEAR_REV),
                         (long)g_sig_seg[k4][1], (long)g_sig_seg[k4][2]);
                m3_tx(out); m3_tx(M3_EOL);
            }
            for (k4 = 0U; k4 < M3_SIG_BINS; k4 += 12U)
            {
                snprintf(out, sizeof(out), "[YNB %lu", (unsigned long)k4);
                m3_tx(out);
                for (j4 = k4; (j4 < k4 + 12U) && (j4 < M3_SIG_BINS); j4++)
                {
                    snprintf(out, sizeof(out), " %u", (unsigned)g_sig_bin[j4]);
                    m3_tx(out);
                }
                m3_tx("]"); m3_tx(M3_EOL);
            }
            m3_tx("[YNS done]"); m3_tx(M3_EOL);
            return;
        }
        printString("[YN usage: #YN 1 (select T1 first)]"); printString(M3_EOL);
        return;
    }
    printString("[Y? commands: #YE axis from to | #YN 1 | #YZ [light] [reg val [val2]]]");
    printString(M3_EOL);
}

void hal_motor_driver_init(void)
{
    static bool done = false;

    /* Called by both APP_Initialize() and stepper_init(): run once, so the
     * Y calibration pulses only happen once per boot. */
    if (done) { return; }
    done = true;

    m3_hw_init();
    m3_pins_init(&hw_x);
    m3_pins_init(&hw_y);
    m3_pins_init(&hw_t1);
    m3_pins_init(&hw_t2);
    m3_pins_init(&hw_gear);
    HAL_MOTOR_ACCESSORY.enc_cur_state = m3_enc_state(&hw_gear);
    HAL_MOTOR_ACCESSORY.rel_pos = 0;
    HAL_MOTOR_ACCESSORY.rel_pos_th = 0;
    HAL_MOTOR_ACCESSORY.grbl_axis = Z_AXIS;
    m3_make_digital(GPIO_PIN_RG6);              /* mat sensor output */
    GPIO_PinInputEnable(GPIO_PIN_RG6);
    m3_make_digital(GPIO_PIN_RG7);              /* carriage white light: off except during sensor reads */
    GPIO_PinSet(GPIO_PIN_RG7);
    GPIO_PinOutputEnable(GPIO_PIN_RG7);

    g_pwm_selftest_x = m3_pwm_selftest(&hw_x);
    g_pwm_selftest_t1 = m3_pwm_selftest_short(&hw_t1);
    g_pwm_selftest_t2 = m3_pwm_selftest_short(&hw_t2);
    m3_calibrate_y();

    HAL_MOTOR_X.grbl_axis = X_AXIS;
    HAL_MOTOR_Y.grbl_axis = Y_AXIS;
    HAL_MOTOR_TOOL1.grbl_axis = Z_AXIS;
    HAL_MOTOR_TOOL2.grbl_axis = Z_AXIS;

    /* Encoder change notification: ports A (X, TOOL2), B (TOOL1), E (Y).
     * Port E's interrupt is shared with the buttons (see interrupts.c). */
    (void)PORTA; (void)PORTB; (void)PORTE; (void)PORTG;
    CNCONASET = _CNCONA_ON_MASK;
    CNCONBSET = _CNCONB_ON_MASK;
    CNCONESET = _CNCONE_ON_MASK;
    CNCONGSET = _CNCONG_ON_MASK;       /* motor T encoder, RG8 */
    IFS1CLR = _IFS1_CNAIF_MASK | _IFS1_CNBIF_MASK | _IFS1_CNEIF_MASK | _IFS1_CNGIF_MASK;
    IEC1SET = _IEC1_CNAIE_MASK | _IEC1_CNBIE_MASK | _IEC1_CNEIE_MASK | _IEC1_CNGIE_MASK;   /* priorities: EVIC_Initialize() */
    g_servo_ready = true;
}

void hal_motor_driver_deinit(void)
{
    hal_motor_stop(&HAL_MOTOR_X);
    hal_motor_stop(&HAL_MOTOR_Y);
    hal_motor_stop(&HAL_MOTOR_TOOL1);
    hal_motor_stop(&HAL_MOTOR_TOOL2);
}

/* Called every 1 ms (watchdog_callback). */
static void m3_stall_detection(hal_motor_driver_t *motor)
{
    int idx = m3_index(motor);

    if ((idx < 0) || (motor->state != HAL_MOTOR_DRIVEN))
    {
        return;
    }

    /* Safety: a step chunk must finish within the timeout. */
    if (++g_drive_ms[idx] > CCG_MOTOR_MOVE_TIMEOUT_MS)
    {
        hal_motor_set_direction(motor, HAL_MOTOR_STOP);
        motor->state = HAL_MOTOR_IDLE;
        motor->wd_armed = false;
        limits_set_state(motor->grbl_axis, true);
        return;
    }

    /* Original stall watchdog (motor.c). */
    if ((motor->current_steps == motor->wd_prev_steps) && motor->wd_armed)
    {
        hal_motor_set_direction(motor, HAL_MOTOR_STOP);
        motor->state = HAL_MOTOR_IDLE;
        motor->wd_armed = false;
        limits_set_state(motor->grbl_axis, true);
    }
    else
    {
        motor->wd_prev_steps = motor->current_steps;
        motor->wd_stall_counter = 0;
    }
}

void hal_motor_safety_checks(void)
{
    m3_stall_detection(&HAL_MOTOR_X);
    m3_stall_detection(&HAL_MOTOR_Y);
    m3_stall_detection(&HAL_MOTOR_TOOL1);
    m3_stall_detection(&HAL_MOTOR_TOOL2);
}

#endif /* BOARD_MAKER3 */
