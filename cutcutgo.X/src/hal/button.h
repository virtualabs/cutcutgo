/* 
 * File:   button.h
 * Author: virtualabs
 *
 * Created on 5 juillet 2023, 00:11
 */

#ifndef __INC_BUTTON_H
#define	__INC_BUTTON_H

#include "configuration.h"
#include "definitions.h"

#define     BTN_PAUSE       GPIO_PIN_RB12
#define     BTN_LOGO        GPIO_PIN_RB13
#define     BTN_POWER       GPIO_PIN_RF3
#define     BTN_UPDOWN      GPIO_PIN_RD13

#define     BTN_IFS1_MASK   ((1 << 13) | (1 << 15) | (1 << 17))

void button_init(void);
void hal_button_pressed(void);
bool is_power_button_pressed(void);

#endif	/* __INC_BUTTON_H */

