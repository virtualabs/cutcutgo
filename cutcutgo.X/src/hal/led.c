#include "led.h"

typedef enum {
    LED_SOLID,
    LED_BLINK
} led_mode_t;

typedef struct {
    uint8_t gpio;
    bool state;
    led_mode_t mode;
} led_t;

static led_t g_leds[LED_MAX_ID] = {
    {GPIO_LED_LOGO, 0, LED_SOLID},
    {GPIO_LED_PAUSE, 0, LED_SOLID},
    {GPIO_LED_UPDOWN, 0, LED_SOLID},
    {GPIO_LED_PWR_WHITE, 0, LED_SOLID},
    {GPIO_LED_PWR_RED, 0, LED_SOLID},
    {GPIO_LED_PWR_BLUE, 0, LED_SOLID}
};

static uint32_t g_led_elapsed_ms = 0;

void led_init(void)
{
    int i;
    
    /* Force RE4 to digital I/O. */
    ANSELEbits.ANSE4 = 0;
    
    /* Initialize LEDs */
    for (i=0; i<LED_MAX_ID; i++)
    {
        GPIO_PinOutputEnable(g_leds[i].gpio);
        GPIO_PinClear(g_leds[i].gpio);
    }
}

/* LED API */
void led_set(int led_id)
{
    if ((led_id >= 0) && (led_id < LED_MAX_ID))
    {
        GPIO_PinSet(g_leds[led_id].gpio);
        g_leds[led_id].state = true;
    }
}

void led_clear(int led_id)
{
    if ((led_id >= 0) && (led_id < LED_MAX_ID))
    {
        GPIO_PinClear(g_leds[led_id].gpio);
        g_leds[led_id].state = false;
    }
}

void led_toggle(int led_id)
{
    if ((led_id >= 0) && (led_id < LED_MAX_ID))
    {
        GPIO_PinToggle(g_leds[led_id].gpio);
        g_leds[led_id].state = !g_leds[led_id].state;
    }
}

void led_blink_mode(int led_id)
{
    if ((led_id >= 0) && (led_id < LED_MAX_ID))
    {
        g_leds[led_id].mode = LED_BLINK;
    }
}

void led_normal_mode(int led_id)
{
    if ((led_id >= 0) && (led_id < LED_MAX_ID))
    {
        g_leds[led_id].mode = LED_SOLID;
    }
}

/**
 * Set front panel logo LED state.
 * @param enable    true to switch on, false to switch off
 */

void led_set_logo(bool enable)
{
    if (enable) {
        led_set(LED_LOGO);
    } else {
        led_clear(LED_LOGO);
    }
}


/**
 * Set front panel pause LED state.
 * @param enable    true to switch on, false to switch off
 */

void led_set_pause(bool enable)
{
    if (enable) {
        led_set(LED_PAUSE);
    } else {
        led_clear(LED_PAUSE);
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
        led_set(LED_POWER_RED);
    } else {
        led_clear(LED_POWER_RED);
    }

    /* White */
    if (white) {
        led_set(LED_POWER_WHITE);
    } else {
        led_clear(LED_POWER_WHITE);
    }

    /* Blue */
    if (blue) {
        led_set(LED_POWER_BLUE);
    } else {
        led_clear(LED_POWER_BLUE);
    }
}

/**
 * Set front panel up/down LED state.
 * @param enable    true to switch on, false to switch off
 */

void led_set_updown(bool enable)
{
    if (enable) {
        led_set(LED_UPDOWN);
    } else {
        led_clear(LED_UPDOWN);
    }
}


void led_handle_blink(void)
{
    int i;
    
    /* Increment our counter. */
    g_led_elapsed_ms++;
    
    /* If period is reached, then toggle LEDs. */
    if (g_led_elapsed_ms > LED_BLINK_PERIOD)
    {
        /* Reset our counter. */
        g_led_elapsed_ms = 0;
        
        /* Toggle LED in blink mode. */
        for (i=0; i<LED_MAX_ID; i++)
        {
            if (g_leds[i].mode == LED_BLINK)
            {
                led_toggle(i);
            }
        }
    }
}