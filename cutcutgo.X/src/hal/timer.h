/**
 * System timers module
 */

#ifndef __INC_HAL_TIMER_H
#define __INC_HAL_TIMER_H

#include <stdint.h>

#define TIMER_POOL_SIZE 10

typedef void (timerslot_cb_t)(void *p_data);

typedef enum {
    TIMER_FREE,
    TIMER_STOPPED,
    TIMER_RUNNING
} timerslot_state_t;

typedef struct {
    uint32_t interval;
    uint32_t stop_ts;
    void *p_data;
    timerslot_cb_t *p_callback;
    timerslot_state_t state;
} timerslot_t;

/* Initialize system timers. */
void timer_init(void);
void timer_start(void);
uint32_t timer_get_ms(void);
void _delay_ms(uint32_t ms);

/* Timer creation, start, stop, destruction. */
int timer_create_timer(uint32_t interval_ms, timerslot_cb_t *p_callback, void *p_data);
int timer_set_interval(int timer_id, uint32_t interval);
int timer_start_timer(int timer_id);
int timer_stop_timer(int timer_id);
int timer_destroy_timer(int timer_id);


#endif /* __INC_HAL_TIMER_H */