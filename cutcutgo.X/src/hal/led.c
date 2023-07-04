#include "led.h"

void led_init(void)
{
    /* Force RE4 to digital I/O. */
    ANSELEbits.ANSE4 = 0;
    
    /* Initialize LEDs */
    GPIO_PinOutputEnable(LED_LOGO);
    GPIO_PinOutputEnable(LED_PAUSE);
    GPIO_PinOutputEnable(LED_PWR_RED);
    GPIO_PinOutputEnable(LED_PWR_WHITE);
    GPIO_PinOutputEnable(LED_PWR_BLUE);
    GPIO_PinOutputEnable(LED_UPDOWN);
    
    /* Set default LEDs state. */
    GPIO_PinClear(LED_LOGO);
    GPIO_PinClear(LED_PAUSE);
    GPIO_PinClear(LED_PWR_RED);
    GPIO_PinClear(LED_PWR_WHITE);
    GPIO_PinClear(LED_PWR_BLUE);
    GPIO_PinClear(LED_UPDOWN);
}

/**
 * Set front panel logo LED state.
 * @param enable    true to switch on, false to switch off
 */

void led_set_logo(bool enable)
{
    if (enable) {
        GPIO_PinSet(LED_LOGO);
    } else {
        GPIO_PinClear(LED_LOGO);
    }
}


/**
 * Set front panel pause LED state.
 * @param enable    true to switch on, false to switch off
 */

void led_set_pause(bool enable)
{
    if (enable) {
        GPIO_PinSet(LED_PAUSE);
    } else {
        GPIO_PinClear(LED_PAUSE);
    }
}


/**
 * Set front panel power LED state.
 * @param blue  true to switch on the power blue LED, false to switch off.
 * @param white true to switch on the power white LED, false to switch off.
 * @param red   true to switch on the power red LED, false to switch off.
 */

void led_set_power(bool blue, bool white, bool red)
{
    /* Red */
    if (red) {
        GPIO_PinSet(LED_PWR_RED);
    } else {
        GPIO_PinClear(LED_PWR_RED);
    }

    /* White */
    if (white) {
        GPIO_PinSet(LED_PWR_WHITE);
    } else {
        GPIO_PinClear(LED_PWR_WHITE);
    }

    /* Blue */
    if (blue) {
        GPIO_PinSet(LED_PWR_BLUE);
    } else {
        GPIO_PinClear(LED_PWR_BLUE);
    }
}

/**
 * Set front panel up/down LED state.
 * @param enable    true to switch on, false to switch off
 */

void led_set_updown(bool enable)
{
    if (enable) {
        GPIO_PinSet(LED_UPDOWN);
    } else {
        GPIO_PinClear(LED_UPDOWN);
    }
}
