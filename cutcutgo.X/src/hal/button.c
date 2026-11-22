#include "hal/button.h"
#include "grbl/grbl/grbl.h"

#if defined(BOARD_MAKER3) && !defined(BOARD_MAKER1)   /* PIC32MK boards */
#include "hal/timer.h"

/*
 * Cricut Maker 3 (PIC32MK1024MCF100): buttons on RE14/RE15 (Pause, Cricut)
 * and RF12/RF13 (Load/Unload, Power). Active low with external pull-ups, so
 * internal pull-ups/downs are left alone. Change notification on ports E
 * and F (one vector per port on PIC32MK, see config/maker3/interrupts.c).
 */
static void button_pin_init(GPIO_PIN pin)
{
    uint32_t port = ((uint32_t)pin) >> 4;
    uint32_t mask = 1UL << (((uint32_t)pin) & 0x0FU);

    *(volatile uint32_t *)((uint32_t)&ANSELA + (port * 0x100U) + 0x04U) = mask;   /* ANSELxCLR */
    GPIO_PinInputEnable(pin);
    *(volatile uint32_t *)((uint32_t)&ANSELA + (port * 0x100U) + 0x88U) = mask;   /* CNENxSET  */
}

void button_init(void)
{
    button_pin_init(BTN_PAUSE);
    button_pin_init(BTN_LOGO);
    button_pin_init(BTN_POWER);
    button_pin_init(BTN_UPDOWN);

    (void)PORTE;
    (void)PORTF;
    CNCONESET = _CNCONE_ON_MASK;
    CNCONFSET = _CNCONF_ON_MASK;
    IFS1CLR = _IFS1_CNEIF_MASK | _IFS1_CNFIF_MASK;
    IEC1SET = _IEC1_CNEIE_MASK | _IEC1_CNFIE_MASK;     /* priorities: EVIC_Initialize() */
}

void hal_button_pressed(void)
{
    /* Load/Unload button pressed: load or unload the mat when idle
     * (same behaviour as the original Maker firmware). */
    {
        /* This handler also runs for every Y encoder edge (port E is shared),
         * so act only on a real press: a released->pressed edge, at least
         * 150 ms after the button last changed (debounce). */
        static bool     was_down = false;
        static uint32_t last_change_ms = 0;
        bool down = !GPIO_PinRead(BTN_UPDOWN);

        if (down != was_down)
        {
            uint32_t now = timer_get_ms();
            /* Loading needs a mat over the sensor; ejecting does not. */
            if (down && ((now - last_change_ms) >= 150U) && (sys.state == STATE_IDLE) &&
                ((sys.mat_loaded != 0U) || hal_motor_mat_present()))
            {
                system_set_exec_state_flag(EXEC_MAT_LOAD_UNLOAD);
            }
            last_change_ms = now;
            was_down = down;
        }
    }

    /* Pause, Cricut logo and Power: no action yet (as on the original). */
}

bool is_power_button_pressed(void)
{
    return !GPIO_PinRead(BTN_POWER);
}

#else /* original Cricut Maker (PIC32MX470) */

int a;

void button_init(void)
{
    /* Initialize buttons GPIOs */
    ANSELBbits.ANSB12 = 0;
    ANSELBbits.ANSB13 = 0;
    
    GPIO_PinInputEnable(BTN_PAUSE);
    GPIO_PinInputEnable(BTN_LOGO);
    GPIO_PinInputEnable(BTN_POWER);
    GPIO_PinInputEnable(BTN_UPDOWN);
    
    /* Disable pull-ups. */
    CNPUB &= ~((1 << (BTN_PAUSE & 0x0F)) | (1 << (BTN_LOGO & 0x0F)));
    CNENB |= (1 << (BTN_PAUSE & 0x0F)) | (1 << (BTN_LOGO & 0x0F));
    
    CNPUD &= ~(1 << (BTN_UPDOWN & 0x0F));
    CNEND |= (1 << (BTN_UPDOWN & 0x0F));
    
    CNPUF &= ~(1 << (BTN_POWER & 0x0F));
    CNENF |= (1 << (BTN_POWER & 0x0F));
    
    /* Set Change Notification priority to 1. */
    IPC8bits.CNIP = 1;
    
    /* Enable change notification on port B. */
    IEC1bits.CNBIE = 1;
    IFS1bits.CNBIF = 0;
    CNCONBbits.ON = 1;
    
    /* Enable change notification on port D. */
    IEC1bits.CNDIE = 1;
    IFS1bits.CNDIF = 0;
    CNCONDbits.ON = 1;
    
    /* Enable change notification on port F. */
    IEC1bits.CNFIE = 1;
    IFS1bits.CNFIF = 0;
    CNCONFbits.ON = 1;
}

void hal_button_pressed(void)
{   
    volatile uint32_t portb = PORTB;
    //volatile uint32_t portd = PORTD;
    volatile uint32_t portf = PORTF;
    
    /* Is pause button pressed ? */
    if (portb & (1 << (BTN_PAUSE & 0x0F)))
    {
        /* Pause current cycle. */
        
    }
    
    /* Is logo button pressed ? */
    if (portb & (1 << (BTN_LOGO & 0x0F)))
    {
        /* Logo button pressed. */
    }
    
    /* Is updown button pressed ? */
    if ((PORTD & (1 << (BTN_UPDOWN & 0x0F))) == 0)
    {
        /* Updown button pressed. */
        if (sys.state == STATE_IDLE)
        {
            system_set_exec_state_flag(EXEC_MAT_LOAD_UNLOAD);
        }
    }
    
    /* Is power button pressed ? */
    if (portf & (1 << (BTN_POWER & 0x0F)))
    {
        /* Power button pressed. */
        //system_execute_line((char *)"$H");
        //mc_homing_cycle((1 << X_AXIS));
    }
}

bool is_power_button_pressed(void)
{
    volatile uint32_t portf = PORTF;
    
    /* Is pause button pressed ? */
    return ((portf & (1 << (BTN_POWER & 0x0F))) == 0);
}

#endif /* BOARD_MAKER3 */
