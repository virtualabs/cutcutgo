#include "hal/watchdog.h"

/**
 * Watchdog callback function.
 * 
 * Called every 1 ms.
 */

void watchdog_callback(void)
{
    /* Check if motors are stalled. */
    hal_motor_safety_checks();
}

