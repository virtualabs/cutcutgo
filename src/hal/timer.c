#include "hal/timer.h"
#include "hal/led.h"
#include "hal/watchdog.h"
#include "definitions.h"
#include "interrupts.h"
#include "config.h"

volatile uint32_t g_ticks_count;

/**
 * @brief   Initialize system timers
 */

void timer_init(void)
{
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


void __ISR(_TIMER_1_VECTOR, ipl1SOFT) Timer1Handler (void) {

    /* Increment our counter. */
    g_ticks_count++;
    
    /* Run our watchdog. */
    watchdog_callback();
    
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