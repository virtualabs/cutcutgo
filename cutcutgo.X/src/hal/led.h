#ifndef __INC_LED_H
#define __INC_LED_H

#include "configuration.h"
#include "definitions.h"

#if defined(BOARD_MAKER3) && !defined(BOARD_MAKER1)   /* PIC32MK boards */
/* Cricut Maker 3 main board (PIC32MK1024MCF100), all active high.
 * NEVER drive RB10 on the Maker 3: it moves the blade-down actuator. */
#define     GPIO_LED_LOGO        GPIO_PIN_RD13
#define     GPIO_LED_PAUSE       GPIO_PIN_RD14
#define     GPIO_LED_UPDOWN      GPIO_PIN_RD12
#define     GPIO_LED_PWR_WHITE   GPIO_PIN_RB7
#define     GPIO_LED_PWR_RED     GPIO_PIN_RC10
#define     GPIO_LED_PWR_BLUE    GPIO_PIN_RD15
#else
#define     GPIO_LED_LOGO        GPIO_PIN_RB11
#define     GPIO_LED_PAUSE       GPIO_PIN_RB10
#define     GPIO_LED_UPDOWN      GPIO_PIN_RF13
#define     GPIO_LED_PWR_WHITE   GPIO_PIN_RF4
#define     GPIO_LED_PWR_RED     GPIO_PIN_RF5
#define     GPIO_LED_PWR_BLUE    GPIO_PIN_RE4
#endif /* BOARD_MAKER3 */

#define     LED_BLINK_PERIOD     (250) /* Blink period: 500ms */

enum {
    LED_LOGO = 0,
    LED_PAUSE,
    LED_UPDOWN,
    LED_POWER_WHITE,
    LED_POWER_RED,
    LED_POWER_BLUE,
    LED_MAX_ID
};

void led_init(void);
void led_normal_mode(int led_id);
void led_blink_mode(int led_id);
void led_toggle(int led_id);
void led_clear(int led_id);
void led_set(int led_id);
void led_handle_blink(void);
void led_set_logo(bool enable);
void led_set_pause(bool enable);
void led_set_power(bool blue, bool white, bool red);
void led_set_updown(bool enable);


#endif /* __INC_LED_H */