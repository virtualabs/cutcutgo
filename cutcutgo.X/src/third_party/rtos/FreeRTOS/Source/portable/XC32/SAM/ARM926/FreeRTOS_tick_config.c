/*
 * FreeRTOS Kernel V10.0.0
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software. If you wish to use our Amazon
 * FreeRTOS name, please do so in a fair use way that does not cause confusion.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */

/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"

/* Library includes. */
#include "definitions.h"

/*
 * The application must provide a function that configures a peripheral to
 * create the FreeRTOS tick interrupt, then define configSETUP_TICK_INTERRUPT()
 * in FreeRTOSConfig.h to call the function.  This file contains a function
 * that is suitable for use on the SAM9X60.
 */
void vConfigureTickInterrupt( void )
{
    /* NOTE:  The PIT interrupt is cleared by the configCLEAR_TICK_INTERRUPT()
    macro in FreeRTOSConfig.h. */

    /* Set FreeRTOS_Tick_Handler as callback to PIT Handler */
    PIT_TimerCallbackSet(FreeRTOS_Tick_Handler, 0);

    /* Initialize the PIT to the desired frequency - specified in PIT ticks. */
    PIT_TimerPeriodSet( PIT_TimerFrequencyGet() / configTICK_RATE_HZ );
    PIT_TimerStart();
}
/*-----------------------------------------------------------*/

/* The function called by the RTOS port layer after it has managed interrupt
entry. */
void vApplicationIRQHandler( void )
{

    typedef void (*ISRFunction_t)( void );
    ISRFunction_t pxISRFunction;

    /* Obtain the address of the interrupt handler from the AIR. */
    pxISRFunction = ( ISRFunction_t ) AIC_REGS->AIC_IVR;

    /* Write back to the SAM9X60's interrupt controller's IVR register in case the
    CPU is in protect mode.  If the interrupt controller is not in protect mode
    then this write is not necessary. */
    //AIC->AIC_IVR = ( uint32_t ) pxISRFunction;

    /* Ensure the write takes before re-enabling interrupts. */
    __DSB();
    __ISB();
    __enable_irq();

    /* Call the installed ISR. */
    pxISRFunction();
}

void vClear_Tick_Interrupt(void)
{
    PIT_ClearInterrupt();
    return;
}
