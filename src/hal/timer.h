/**
 * System timers module
 */

#ifndef __INC_HAL_TIMER_H
#define __INC_HAL_TIMER_H

#include <stdint.h>

/* Initialize system timers. */
void timer_init(void);
void timer_start(void);

void _delay_ms(uint32_t ms);



#endif /* __INC_HAL_TIMER_H */