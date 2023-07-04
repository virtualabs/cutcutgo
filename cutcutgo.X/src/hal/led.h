#ifndef __INC_LED_H
#define __INC_LED_H

#include "configuration.h"
#include "definitions.h"

#define     LED_LOGO        GPIO_PIN_RB11
#define     LED_PAUSE       GPIO_PIN_RB10
#define     LED_UPDOWN      GPIO_PIN_RF13
#define     LED_PWR_WHITE   GPIO_PIN_RF4
#define     LED_PWR_RED     GPIO_PIN_RF5
#define     LED_PWR_BLUE    GPIO_PIN_RE4


void led_init(void);
void led_set_logo(bool enable);
void led_set_pause(bool enable);
void led_set_power(bool blue, bool white, bool red);
void led_set_updown(bool enable);


#endif /* __INC_LED_H */