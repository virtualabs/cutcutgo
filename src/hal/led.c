#include "led.h"

void led_init(void)
{
    /* Initialize GPIO RB10 */
    GPIO_PinOutputEnable(GPIO_PIN_RB10);
    GPIO_PinOutputEnable(GPIO_PIN_RB11);
    GPIO_PinClear(GPIO_PIN_RB10);
    GPIO_PinClear(GPIO_PIN_RB11);
}

void led_set_logo(bool enable)
{
    if (enable) {
        GPIO_PinSet(GPIO_PIN_RB10);
    } else {
        GPIO_PinClear(GPIO_PIN_RB10);
    }
}

void led_set_other(bool enable)
{
    if (enable) {
        GPIO_PinSet(GPIO_PIN_RB11);
    } else {
        GPIO_PinClear(GPIO_PIN_RB11);
    }
}
