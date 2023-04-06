/**
 * Motor driver library
 */

/**
 *
 * ISR à revoir, trop d'appels, instabilité.
 */

#include <string.h>
#include <stdbool.h>
#include "hal/motor.h"
#include "../grbl/grbl/stepper.h"
#include "definitions.h"
#include "config.h"
#include "../grbl/grbl/grbl.h"

/* Define X MOTOR driver pins and default state. */
hal_motor_driver_t HAL_MOTOR_X = {
    MOTOR_X_OCM,
    MOTOR_X_DRIVER_IN1,
    MOTOR_X_DRIVER_IN2,
    MOTOR_X_DRIVER_ENC_A,
    MOTOR_X_DRIVER_ENC_B,
    &MOTOR_X_DRIVER_PWM_IN1,
    &MOTOR_X_DRIVER_PWM_IN2,
    0,
    HAL_MOTOR_PWM,
    HAL_MOTOR_STOP,
    0,
    0,
    HAL_MOTOR_IDLE,
    0,
    0
};

/* Define Y MOTOR driver pins and default state. */
hal_motor_driver_t HAL_MOTOR_Y = {
    MOTOR_Y_OCM,
    MOTOR_Y_DRIVER_IN1,
    MOTOR_Y_DRIVER_IN2,
    MOTOR_Y_DRIVER_ENC_A,
    MOTOR_Y_DRIVER_ENC_B,
    &MOTOR_Y_DRIVER_PWM_IN1,
    &MOTOR_Y_DRIVER_PWM_IN2,
    0,
    HAL_MOTOR_PWM,
    HAL_MOTOR_STOP,
    0,
    0,
    HAL_MOTOR_IDLE,
    0,
    0
};

/* Define TOOL1 MOTOR driver pins and default state. */
hal_motor_driver_t HAL_MOTOR_TOOL1 = {
    MOTOR_TOOL1_OCM,
    MOTOR_TOOL1_DRIVER_IN1,
    MOTOR_TOOL1_DRIVER_IN2,
    MOTOR_TOOL1_DRIVER_ENC_A,
    MOTOR_TOOL1_DRIVER_ENC_B,
    &MOTOR_TOOL1_DRIVER_PWM_IN1,
    &MOTOR_TOOL1_DRIVER_PWM_IN2,
    0,
    HAL_MOTOR_PWM,
    HAL_MOTOR_STOP,
    0,
    0,
    HAL_MOTOR_IDLE,
    0,
    0
};

/* Define TOOL2 MOTOR driver pins and default state. */
hal_motor_driver_t HAL_MOTOR_TOOL2 = {
    MOTOR_TOOL2_OCM,
    MOTOR_TOOL2_DRIVER_IN1,
    MOTOR_TOOL2_DRIVER_IN2,
    MOTOR_TOOL2_DRIVER_ENC_A,
    MOTOR_TOOL2_DRIVER_ENC_B,
    &MOTOR_TOOL2_DRIVER_PWM_IN1,
    &MOTOR_TOOL2_DRIVER_PWM_IN2,
    0,
    HAL_MOTOR_PWM,
    HAL_MOTOR_STOP,
    0,
    0,
    HAL_MOTOR_IDLE,
    0,
    0
};

/* Define ACCESSORY MOTOR driver pins and default state. */
hal_motor_driver_t HAL_MOTOR_ACCESSORY = {
    MOTOR_ACCESSORY_OCM,
    MOTOR_ACCESSORY_DRIVER_IN1,
    MOTOR_ACCESSORY_DRIVER_IN2,
    MOTOR_ACCESSORY_DRIVER_ENC_A,
    MOTOR_ACCESSORY_DRIVER_ENC_B,
    &MOTOR_ACCESSORY_DRIVER_PWM_IN1,
    &MOTOR_ACCESSORY_DRIVER_PWM_IN2,
    0,
    HAL_MOTOR_PWM,
    HAL_MOTOR_STOP,
    0,
    0,
    HAL_MOTOR_IDLE,
    0,
    0
};

/* Globals. */
bool gb_pwm_init = false;
bool gb_motor_lookup_init = false;
static hal_motor_driver_t *ga_motor_lookup[16];

/**
 * Motor lookup table helper.
 * 
 * This function registers a given motor encoder pins into our global
 * encoder lookup table. This will be used by hal_motor_update_callback()
 * to determine which motor has been triggered (optical encoder) when
 * GPIO edge interrupt is raised.
 * 
 * @param p_motor pointer to a motor structure (hal_motor_driver_t*)
 */
void hal_motor_lookup_register(hal_motor_driver_t *p_motor)
{
    ga_motor_lookup[p_motor->encA & 0x0F] = p_motor;
    ga_motor_lookup[p_motor->encB & 0x0F] = p_motor;
}

/**
 * Initialize the motor/encoder lookup table.
 */

void hal_motor_lookup_init(void)
{
    for (int i=0; i<16; i++)
        ga_motor_lookup[i] = NULL;
    
    hal_motor_lookup_register(&HAL_MOTOR_X);
    hal_motor_lookup_register(&HAL_MOTOR_Y);
    hal_motor_lookup_register(&HAL_MOTOR_TOOL1);
    hal_motor_lookup_register(&HAL_MOTOR_TOOL2);
    hal_motor_lookup_register(&HAL_MOTOR_ACCESSORY);
}

void hal_motor_enable_encoder(hal_motor_driver_t *motor, bool enabled)
{
    if (enabled)
    {
        /* Enable encA/encB pin change notification. */
        CNENG |= (1 << (motor->encA & 0x0F));
        CNENG |= (1 << (motor->encB & 0x0F));
    }
    else
    {
        /* Disable encA/encB pin change notification. */
        CNENG &= ~(1 << (motor->encA & 0x0F));
        CNENG &= ~(1 << (motor->encB & 0x0F));
    }
}   

/**
 * Motor API
 */

/**
 * Initialize the motor HAL.
 * 
 * This function sets TIMER2 if not already initialized. This timer is used
 * to drive PWM motor GPIOs. Motors are totally controlled by hardware and
 * interrupts (full-async).
 */

int hal_motor_pwm_init(void)
{
    if (!gb_pwm_init)
    {
        /* Set Timer 2.*/
        T2CON   = 0x0;      // Disable timer 2 when setting it up
        TMR2    = 0;        // Set timer 2 counter to 0

        /* Set up the period. Period = PBCLK3 frequency, which is SYS_FREQ / 2, divided by 1000Hz and then divided by 8 for our chosen pre-scaler. */
        PR2 = SYS_FREQ / 2 / 20000;
        
#if 0
        // Enable Timer2 interrupt
        IPC2SET = 0x00000005; /* Priority: 1, Sub-priority: 1 */
        IFS0 &= ~(1 << 9);
        IEC0 |= (1 << 9);
#endif

        // Set up the pre-scaler
        //T2CONbits.TCKPS = 0b101; // Pre-scale of 32
        T2CONbits.TCKPS = 0b000; // Pre-scale of 1

        // Turn on timer 2
        T2CONbits.TON  = 1;

        gb_pwm_init = true;
    }
    
    /* Success. */
    return 0;
}

/**
 * Initialize a DC motor driver IN1/IN2 pins.
 * 
 * Sets IN1/IN2 pins as PWM output.
 * 
 * @param motor pointer to a motor structure.
 * @return Always 0.
 */

int hal_motor_pwm_ocm_init(hal_motor_driver_t *motor)
{
    switch (motor->ocm)
    {
        case 1:
        {
            OC1CON = 0;
            OC1CONbits.OCTSEL = 0;
            OC1CONbits.OCM = 0b110;
            OC1RS = 0;
            OC1CONbits.ON = 1;
        }
        break;
        
        case 2:
        {
            OC2CON = 0;
            OC2CONbits.OCTSEL = 0;
            OC2CONbits.OCM = 0b110;
            OC2RS = 0;
            OC2CONbits.ON = 1;            
        }
        break;
        
        case 3:
        {
            OC3CON = 0;
            OC3CONbits.OCTSEL = 0;
            OC3CONbits.OCM = 0b110;
            OC3RS = 0;
            OC3CONbits.ON = 1;            
        }
        break;
        
        case 4:
        {
            OC4CON = 0;
            OC4CONbits.OCTSEL = 0;
            OC4CONbits.OCM = 0b110;
            OC4RS = 0;
            OC4CONbits.ON = 1;            
        }
        break;
        
        case 5:
        {
            OC5CON = 0;
            OC5CONbits.OCTSEL = 0;
            OC5CONbits.OCM = 0b110;
            OC5RS = 0;
            OC5CONbits.ON = 1;            
        }
        break;
    }
    
    /* Success. */
    return 0;
}


/**
 * Sets the direction of a motor.
 * 
 * Drive the DC motor driver corresponding to a given motor to make the motor
 * turn in one direction or another, or simply stops the motor.
 * 
 * @param motor pointer to a motor structure corresponding to the motor to drive.
 * @param direction Direction in which the motor should go.
 * @return  Always 0.
 */

int hal_motor_set_direction(hal_motor_driver_t *motor, hal_motor_direction_t direction)
{
    switch (motor->mode)
    {
        /* Direct drive of DC motor. */
        case HAL_MOTOR_DIRECT:
        {
            switch (direction)
            {
                case HAL_MOTOR_DIR_CW:
                {
                    /* Forward: IN1=1 IN2=0. */
                    GPIO_PinWrite(motor->in1, true);
                    GPIO_PinWrite(motor->in2, false);
                }
                break;

                case HAL_MOTOR_DIR_CCW:
                {
                    /* Forward: IN1=1 IN2=0. */
                    GPIO_PinWrite(motor->in1, false);
                    GPIO_PinWrite(motor->in2, true);            
                }
                break;

                default:
                case HAL_MOTOR_STOP:
                {
                    /* Forward: IN1=1 IN2=0. */
                    GPIO_PinWrite(motor->in1, false);
                    GPIO_PinWrite(motor->in2, false);             
                }
                break;
            }

        }
        break;
        
        case HAL_MOTOR_PWM:
        {
            /* Enable PWM pins based on direction. */
            switch (direction)
            {
                case HAL_MOTOR_DIR_CW:
                {
                    /* Forward slow decay: in1=Vcc, in2=PWM*/
                    *motor->pwm_in2 = 0b1011;
                    *motor->pwm_in1 = 0b0000;
                    GPIO_PinWrite(motor->in1, true);
                    
                }
                break;
                
                case HAL_MOTOR_DIR_CCW:
                {
                    /* Reverse slow decay: in1=PWM, in2=Vcc*/
                    *motor->pwm_in1 = 0b1011;
                    *motor->pwm_in2 = 0b0000;
                    GPIO_PinWrite(motor->in2, true);
                }
                break;
                
                default:
                case HAL_MOTOR_STOP:
                {
                    *motor->pwm_in1 = 0b0000;
                    *motor->pwm_in2 = 0b0000;
                    GPIO_PinWrite(motor->in1, true);
                    GPIO_PinWrite(motor->in2, true);
                }
                break;
            }
        }
        break;
    }    
    /* Save direction. */
    motor->direction = direction;
    
    /* Success. */
    return 0;
}

/**
 * Initializes a motor.
 * 
 * @param motor pointer to a motor structure (hal_motor_driver_t*)
 * @param mode Driving mode (PWM or direct)
 * @return Always 0.
 */

int hal_motor_init(hal_motor_driver_t *motor, hal_motor_mode_t mode)
{
    /* Init timer2 if required. */
    hal_motor_pwm_init();
   
    /* Initialize motor lookup table if required. */
    hal_motor_lookup_init();
  
    /* Save mode. */
    hal_motor_set_mode(motor, mode);

    /* Set default direction. */
    hal_motor_set_direction(motor, HAL_MOTOR_STOP);
    
    /* Set default speed. */
    hal_motor_set_speed(motor, HAL_MOTOR_SPEED_MIN);
    
    /* Set encA/encB pins as input. */
    GPIO_PinInputEnable(motor->encA);
    GPIO_PinInputEnable(motor->encB);
    
    /* Enable pulldown for Change Notification. */
    //CNPDG |= (1 << (motor->encA & 0x0F));
    //CNPDG |= (1 << (motor->encB & 0x0F));
    
    /* Enable change notification for port G. */
    if (!CNCONGbits.ON)
    {
        CNCONGbits.ON = 1;
    }
       
    /* Success. */
    return 0;
}

/**
 * Set motor mode.
 * 
 * @param motor pointer to the motor structure to drive.
 * @param mode PWM or direct
 * @return Always 0
 */

int hal_motor_set_mode(hal_motor_driver_t *motor, hal_motor_mode_t mode)
{
    switch (mode)
    {
        case HAL_MOTOR_DIRECT:
        {
            /* Set direction of motor driver pins. */
            GPIO_PinOutputEnable(motor->in1);
            GPIO_PinOutputEnable(motor->in2);
        }
        break;

        case HAL_MOTOR_PWM:
        {
            /* Set direction of motor driver pins. */
            GPIO_PinOutputEnable(motor->in1);
            GPIO_PinOutputEnable(motor->in2);
            
            /* Connect corresponding OCM to PWM pins. */
            hal_motor_pwm_ocm_init(motor);
        }
        break;

        default:
            break;
    }

    /* Save mode. */
    motor->mode = mode;
    
    /* Success. */
    return 0;
}


/**
 * Set motor speed.
 * 
 * @param motor pointer to a motor structure
 * @param speed speed in number of ticks (depending of TIMER2 configuration)
 * @return Always 0
 */

int hal_motor_set_speed(hal_motor_driver_t *motor, uint32_t speed)
{
    if (motor->mode == HAL_MOTOR_PWM)
    {
        switch (motor->ocm)
        {
            case 1:
            {
                OC1RS = speed;
            }
            break;

            case 2:
            {
                OC2RS = speed;
            }
            break;

            case 3:
            {
                OC3RS = speed;
            }
            break;

            case 4:
            {
                OC4RS = speed;
            }
            break;

            case 5:
            {
                OC5RS = speed;
            }
            break;
        }
    }
    
    /* Save speed. */
    motor->speed = speed;
            
    /* Success. */
    return 0;
}

/**
 * Ask the motor driver to turn a given number of steps. 
 * 
 * The motor driver will start driving the motor to make it
 * turn the given number of steps in the specified direction.
 * It will monitor the motor progress and makes it stop when
 * the number of steps have been reached.
 * 
 * TODO: handle motor hangs (watchdog)
 * 
 * @param motor pointer to a motor structure
 * @param steps number of steps to do
 * @param direction direction (CW or CCW)
 * @return Always 0.
 */

int hal_motor_step(hal_motor_driver_t *motor, int steps, hal_motor_direction_t direction)
{
    /* Save command. */
    motor->command_steps = steps;
    //motor->command_steps = 3840;
    motor->current_steps = 0;
    motor->state = HAL_MOTOR_DRIVEN;
    
    /* Enable the motor's encoders. */
    hal_motor_enable_encoder(motor, true);
    
    /* Start motor in the given direction. */
    hal_motor_set_direction(motor, direction);
    
    /* Success. */
    return 0;
}


/**
 * Wait until a given motor finished its action.
 * 
 * @param motor pointer to a motor structure.
 */

void hal_motor_wait(hal_motor_driver_t *motor)
{
    while (motor->state != HAL_MOTOR_IDLE)
    {
        SYS_Tasks();
    }
}

/*********************************
 * Interrupt related routines
 * 
 * (Don't mess with that. Please.)
 ********************************/

/**
 * Update a given motor encoder state (normally triggered by interrupt controller).
 * 
 * @param motor pointer to a motor structure.
 */

void hal_motor_update_encoder_state(hal_motor_driver_t *motor)
{
    char dbg[256];
    //uint8_t enc_state;
    
    /* Are we driving this motor ?*/
    if (motor->state == HAL_MOTOR_DRIVEN)
    {

        /* Read encoder state. */
        //enc_state = (GPIO_PinRead(motor->encA) << 1) | GPIO_PinRead(motor->encB);
        
        //GPIO_PinRead(motor->encA);
        //GPIO_PinRead(motor->encB);
        
        /* Determine direction (TODO) */
        
        /* Update current state. */
        //motor->enc_old_state = motor->enc_cur_state;
        //motor->enc_cur_state = enc_state;

        /* Check if we reach command steps. */
        motor->current_steps++;
        if (motor->current_steps >= motor->command_steps)
        {   
            /* Stop motor. */
            hal_motor_set_direction(motor, HAL_MOTOR_STOP);
            
            snprintf(dbg, 256, "current steps: %d\r\n", motor->current_steps);
            printString(dbg);
            
            /* Target position reached. */
            motor->current_steps = 0;
            motor->command_steps = 0;
            motor->state = HAL_MOTOR_IDLE;
            
            /* Disable motor encoders. */
            hal_motor_enable_encoder(motor, false);
            
            /* Plan next move (if any). */
            st_plan_next_move();
        }
    }
}


/**
 * Motor quadratic encoder update callback (called by our interrupt controller).
 * 
 * This function is not intended to be called by user code. It is required by the
 * interrupt controller in order to monitor each motor step count !
 */

void hal_motor_update_callback(void)
{
    int i;
    
    /* Iterate over CNSTATG bits. */
    for (i=0; i<15; i++)
    {
        
        /* Bits 2,3,4,5,10,11 undefined. */
        if ((i>=2 && i<=5) || (i>=10 && i<=11))
            continue;
        
        /* Check state. */
        if (CNSTATG & (1 << i))
        {
            if (ga_motor_lookup[i] != NULL)
            {
                hal_motor_update_encoder_state(ga_motor_lookup[i]);
            }
        }
    }
}

hal_motor_state_t hal_motor_get_state(hal_motor_driver_t *motor)
{
    return motor->state;
}

void hal_motor_stop(hal_motor_driver_t *motor)
{
    /* Stop motor. */
    hal_motor_set_direction(motor, HAL_MOTOR_STOP);
    motor->state = HAL_MOTOR_IDLE;
}

void hal_motor_driver_init(void)
{
    /* Force RG6, RG7, RG8 and RG9 to digital I/O. */
    ANSELGbits.ANSG6 = 0;
    ANSELGbits.ANSG7 = 0;
    ANSELGbits.ANSG8 = 0;
    ANSELGbits.ANSG9 = 0;
    
    /* Enable pull-downs on encoders input. */
    //CNPDG = 0xF3CF;
    
    /* Enable IEC1<18> (Change notification for Port G) */
    IEC1bits.CNGIE = 1;
    IFS1bits.CNGIF = 0;
}


