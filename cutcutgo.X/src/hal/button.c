#include "hal/button.h"
#include "grbl/grbl/grbl.h"

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
            sys.pending_mat_loaded = 1;
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