#include "hal/button.h"

int a;

void button_init(void)
{
    /* Initialize buttons GPIOs */
    ANSELBbits.ANSB12 = 0;
    ANSELBbits.ANSB13 = 0;
    
    GPIO_PinInputEnable(BTN_PAUSE);
    GPIO_PinInputEnable(GPIO_PIN_RB13);
    
    /* Enable pull-ups. */
    CNPUB |= (1 << (BTN_PAUSE & 0x0F)) | (1 << 13);
    
    /* Enable change pin notification. */
    IEC1bits.CNBIE = 1;
    IFS1bits.CNBIF = 0;
    IPC8bits.CNIP = 1;
    CNCONBbits.ON = 1;
}

void hal_button_pressed(void)
{   
    /* Button pressed. */
    a = 1;
}
