#ifndef __INC_LED_H
#define __INC_LED_H

#include "configuration.h"
#include "definitions.h"

void led_init(void);
void led_set_logo(bool enable);
void led_set_other(bool enable);


#endif /* __INC_LED_H */