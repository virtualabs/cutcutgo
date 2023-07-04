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

#define     BTN_PAUSE   GPIO_PIN_RB12

void button_init(void);
void hal_button_pressed(void);

#endif	/* __INC_BUTTON_H */

