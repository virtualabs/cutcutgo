#ifndef __INC_HAL_MOTOR_H
#define __INC_HAL_MOTOR_H

#include "hal/config.h"

#define HAL_MOTOR_SPEED_MIN         0
#define HAL_MOTOR_SPEED_MAX         60000

typedef enum {
    HAL_MOTOR_IDLE,
    HAL_MOTOR_DRIVEN
} hal_motor_state_t;

typedef enum {
    HAL_MOTOR_STOP,
    HAL_MOTOR_DIR_CW,
    HAL_MOTOR_DIR_CCW
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
    int speed;                          /* Motor speed */
    hal_motor_mode_t mode;              /* Motor mode (PWM, direct) */
    hal_motor_direction_t direction;    /* Current motor direction (CW, CCW, STOP). */
    
    /* Quadratic Incremental Encoder state. */
    uint8_t enc_cur_state;              /* Quadratic Incremental Encoder current state */
    uint8_t enc_old_state;              /* Quadratic Incremental Encoder old state (both used to detect direction) */
    
    /* Command */
    volatile hal_motor_state_t state;   /* Motor state. */
    int command_steps;                  /* Number of steps to perform (if motor is driven by this driver). */
    int current_steps;                  /* Current number of steps performed. */
    
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

/* Motor initialization. */
int hal_motor_init(hal_motor_driver_t *motor, hal_motor_mode_t mode);
int hal_motor_set_mode(hal_motor_driver_t *motor, hal_motor_mode_t mode);

/* Motor control. */
int hal_motor_set_speed(hal_motor_driver_t *motor, uint32_t speed);
int hal_motor_step(hal_motor_driver_t *motor, int steps, hal_motor_direction_t direction);
void hal_motor_wait(hal_motor_driver_t *motor);

/* Interrupt-driven callback for motors (don't use it, it's required by our interrupt manager). */
void hal_motor_update_callback(void);


#endif /* __INC_HAL_MOTOR_H */