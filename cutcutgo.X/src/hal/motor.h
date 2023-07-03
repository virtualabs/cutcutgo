#ifndef __INC_HAL_MOTOR_H
#define __INC_HAL_MOTOR_H

#include "hal/config.h"

#define HAL_MOTOR_SPEED_MAX         0
//#define HAL_MOTOR_SPEED_MIN         1800
#define HAL_MOTOR_SPEED_MIN         2100
//#define HAL_MOTOR_SPEED_MIN         2000
//#define HAL_MOTOR_SPEED_MIN         100
#define HAL_MOTOR_SPEED_KICK        100
//#define HAL_MOTOR_SPEED_MIN         1000

#define HAL_MOTOR_SPEED_X       2000
#define HAL_MOTOR_SPEED_Y       1500
#define HAL_MOTOR_SPEED_TOOL1   2100
#define HAL_MOTOR_SPEED_TOOL2   2000


typedef enum {
    HAL_MOTOR_IDLE,
    HAL_MOTOR_DRIVEN,
    HAL_MOTOR_BRAKE
} hal_motor_state_t;

typedef enum {
    HAL_MOTOR_DIR_CCW = -1,
    HAL_MOTOR_STOP,
    HAL_MOTOR_DIR_CW,
} hal_motor_direction_t;

typedef enum {
    HAL_MOTOR_DIRECT,
    HAL_MOTOR_PWM
} hal_motor_mode_t;


/**
 * Motor model structure.
 * 
 * This structure specifies the hardware configuration of a motor
 * (ocm, in1, in2, encA, encB, pwm_in1, pwm_in2) and keeps track
 * of its state (speed, mode, direction, steps).
 */

typedef struct {
    /* Motor pin configuration. */
    int ocm;
    int in1;                        /* DC motor driver IN1 pin config */
    int in2;                        /* DC motor driver IN2 pin config */
    int encA;                       /* Optical encoder A pin */
    int encB;                       /* Opical encoder B pin */
    volatile uint32_t *pwm_in1;     /* DC motor driver IN1 pin mux */
    volatile uint32_t *pwm_in2;     /* DC motor driver IN2 pin mux*/
    
    /* Motor mode, speed and direction. */
    int speed;                          /* Motor current speed */

    hal_motor_mode_t mode;              /* Motor mode (PWM, direct) */
    hal_motor_direction_t direction;    /* Current motor direction (CW, CCW, STOP). */
    
    /* Quadratic Incremental Encoder state. */
    uint8_t enc_cur_state;              /* Quadratic Incremental Encoder current state */
    uint8_t enc_old_state;              /* Quadratic Incremental Encoder old state (both used to detect direction) */
    
    /* Command */
    volatile hal_motor_state_t state;   /* Motor state. */
    int command_steps;                  /* Number of steps to perform (if motor is driven by this driver). */
    int current_steps;                  /* Current number of steps performed. */
    bool inv_encoder;                   /* Invert encoder */
    
    int error_steps;
    int wd_prev_steps;                  /* Watchdog: number of steps previously monitored. */
    bool wd_armed;                      /* Watchdog armed state. */
    int wd_stall_counter;
    
    /* Relative position for the axis. */
    int rel_pos;
    int rel_pos_th;
    
    /* GRBL axis number. */
    int grbl_axis;   
} hal_motor_driver_t;

/* Hardware motors declaration (export). */
extern hal_motor_driver_t HAL_MOTOR_X;
extern hal_motor_driver_t HAL_MOTOR_Y;
extern hal_motor_driver_t HAL_MOTOR_TOOL1;
extern hal_motor_driver_t HAL_MOTOR_TOOL2;
extern hal_motor_driver_t HAL_MOTOR_ACCESSORY;

/**
 * Exported functions
 */

/* Driver initialization. */
void hal_motor_driver_init(void);

/* Motor initialization. */
int hal_motor_init(hal_motor_driver_t *motor, hal_motor_mode_t mode);
int hal_motor_set_mode(hal_motor_driver_t *motor, hal_motor_mode_t mode);

/* Motor control. */
int hal_motor_set_speed(hal_motor_driver_t *motor, uint32_t speed);
int hal_motor_step(hal_motor_driver_t *motor, int steps, hal_motor_direction_t direction);
void hal_motor_wait(hal_motor_driver_t *motor);
hal_motor_state_t hal_motor_get_state(hal_motor_driver_t *motor);
void hal_motor_stop(hal_motor_driver_t *motor);

/* Interrupt-driven callback for motors (don't use it, it's required by our interrupt manager). */
void hal_motor_update_callback(void);

/* Callback for motor stall detection. */
void hal_motor_safety_checks(void);


#endif /* __INC_HAL_MOTOR_H */