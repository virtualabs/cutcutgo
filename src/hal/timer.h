#ifndef __INC_HAL_TIMER_H
#define __INC_HAL_TIMER_H

enum {
    HAL_TIMER_1,
    HAL_TIMER_2,
    HAL_TIMER_3,
    HAL_TIMER_4,
    HAL_TIMER_5
};

void timer_init(int timer);
void timer_start(int timer);
void timer_stop(int timer);

#endif /* __INC_HAL_TIMER_H */