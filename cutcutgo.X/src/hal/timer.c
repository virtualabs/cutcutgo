#include "hal/timer.h"
#include "hal/led.h"
#include "hal/watchdog.h"
#include "definitions.h"
#include "interrupts.h"
#include "config.h"

volatile uint32_t g_ticks_count;

/* Timers. */
static timerslot_t g_timer_pool[TIMER_POOL_SIZE];

/**
 * @brief   Initialize system timers
 */

void timer_init(void)
{
    int i;
    
    /* Initialize our timers pool. */
    for (i=0; i<TIMER_POOL_SIZE; i++)
    {
        g_timer_pool[i].p_callback = NULL;
        g_timer_pool[i].p_data = NULL;
        g_timer_pool[i].interval = 0;
        g_timer_pool[i].state = TIMER_FREE;
        g_timer_pool[i].stop_ts = 0;
    }
    
    /* Setup Timer1 (main system timer) */
    T1CON   = 0x0;      // Disable timer 1 when setting it up
    TMR1    = 0;        // Set timer 1 counter to 0

    /* Set up the period. */
    PR1 = (SYS_FREQ / 2) / 1000;

    // Enable Timer1 interrupt
    IPC1SET = 0x00000005; /* Priority: 1, Sub-priority: 1 */
    IFS0 &= ~(1 << 4);
    IEC0 |= (1 << 4);

    /* Init our counter. */
    g_ticks_count = 0;

    // Turn on timer 1
    T1CONbits.TON = 1;
}

void timer_trigger(void)
{
    int i;
    
    for (i=0; i<TIMER_POOL_SIZE; i++)
    {
        if (g_timer_pool[i].state == TIMER_RUNNING)
        {
            g_timer_pool[i].stop_ts--;
            if (g_timer_pool[i].stop_ts == 0)
            {
                /* Timer is automatically stopped. */
                g_timer_pool[i].state = TIMER_STOPPED;
                
                /* Trigger the associated callback. */
                g_timer_pool[i].p_callback(g_timer_pool[i].p_data);
            }
        }
    }
}

void __ISR(_TIMER_1_VECTOR, ipl1SOFT) Timer1Handler (void) {

    /* Increment our counter. */
    g_ticks_count++;
    
    /* Check our timer slots. */
    timer_trigger();
    
    /* Run our watchdog. */
    //watchdog_callback();
    
    /* Blink LED if required. */
    led_handle_blink();
    
    /* Clear interrupt flag for Timer1 interrupt. */
    IFS0 &= ~(1 << 4);
} 


/**
 * @brief   Wait for an number of milliseconds (blocking)
 * 
 * @param   ms  Number of milliseconds to wait
 */
void _delay_ms(uint32_t ms)
{
    g_ticks_count = 0;
    while(g_ticks_count < ms);
}

/**
 * @brief   Retrieve the current number of elapsed milliseconds since boot time
 * 
 * @return  Number of milliseconds elapsed since boot time.
 */

uint32_t timer_get_ms(void)
{
    return g_ticks_count;
}



int timer_create_timer(uint32_t interval_ms, timerslot_cb_t *p_callback, void *p_data)
{
    int i;
    
    /* Search a free timer in our pool. */
    for (i=0; i<TIMER_POOL_SIZE; i++)
    {
        if (g_timer_pool[i].state == TIMER_FREE)
        {
            g_timer_pool[i].p_callback = p_callback;
            g_timer_pool[i].p_data = p_data;
            g_timer_pool[i].interval = interval_ms;
            g_timer_pool[i].state = TIMER_STOPPED;
            return i;
        }
    }
    
    /* No free timer available. */
    return -1;
}

int timer_set_interval(int timer_id, uint32_t interval)
{
    if ((timer_id >=0) && (timer_id < TIMER_POOL_SIZE))
    {
        g_timer_pool[timer_id].interval = interval;
        
        /* Success. */
        return 0;
    }
    else
    {
        /* Error. */
        return -1;
    }
}

int timer_start_timer(int timer_id)
{
    if ((timer_id >=0) && (timer_id < TIMER_POOL_SIZE))
    {
        if (g_timer_pool[timer_id].state == TIMER_STOPPED)
        {
            /* Compute the stop timestamp in ms. */
            g_timer_pool[timer_id].stop_ts = g_timer_pool[timer_id].interval;
            
            /* Start timer. */
            g_timer_pool[timer_id].state = TIMER_RUNNING;
            
            /* Success. */
            return 0;
        }
        else
        {
            /* Error, timer is already started. */
            return -1;
        }
    }
    else
    {
        /* Error. */
        return -1;   
    }
}

int timer_stop_timer(int timer_id)
{
    if ((timer_id >=0) && (timer_id < TIMER_POOL_SIZE))
    {
        if (g_timer_pool[timer_id].state == TIMER_RUNNING)
        {
            g_timer_pool[timer_id].state = TIMER_STOPPED;

            /* Success. */
            return 0;
        }
        else
        {
            /* Error. */
            return -1;
        }
    }
    else
    {
        /* Error. */
        return -1;
    }
}

int timer_destroy_timer(int timer_id)
{
    if ((timer_id >=0) && (timer_id < TIMER_POOL_SIZE))
    {
        g_timer_pool[timer_id].state = TIMER_FREE;

        /* Success. */
        return 0;
    }
    else
    {
        /* Error. */
        return -1;
    }   
}