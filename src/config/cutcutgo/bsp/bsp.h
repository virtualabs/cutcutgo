/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp.h

  Summary:
    Board Support Package Header File 

  Description:
    This file contains constants, macros, type definitions and function
    declarations 
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef _BSP_H
#define _BSP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "device.h"

// *****************************************************************************
// *****************************************************************************
// Section: BSP Macros
// *****************************************************************************
// *****************************************************************************
/*** LED Macros for LED2 ***/
#define LED2_Toggle() (LATEINV = (1<<6))
#define LED2_Get() ((PORTE >> 6) & 0x1)
#define LED2_On() (LATESET = (1<<6))
#define LED2_Off() (LATECLR = (1<<6))
/*** LED Macros for LED3 ***/
#define LED3_Toggle() (LATEINV = (1<<7))
#define LED3_Get() ((PORTE >> 7) & 0x1)
#define LED3_On() (LATESET = (1<<7))
#define LED3_Off() (LATECLR = (1<<7))
/*** LED Macros for RGB_LED_GREEN ***/
#define RGB_LED_GREEN_Toggle() (LATBINV = (1<<3))
#define RGB_LED_GREEN_Get() ((PORTB >> 3) & 0x1)
#define RGB_LED_GREEN_On() (LATBCLR = (1<<3))
#define RGB_LED_GREEN_Off() (LATBSET = (1<<3))
/*** LED Macros for RGB_LED_BLUE ***/
#define RGB_LED_BLUE_Toggle() (LATBINV = (1<<2))
#define RGB_LED_BLUE_Get() ((PORTB >> 2) & 0x1)
#define RGB_LED_BLUE_On() (LATBCLR = (1<<2))
#define RGB_LED_BLUE_Off() (LATBSET = (1<<2))
/*** LED Macros for RGB_LED_RED ***/
#define RGB_LED_RED_Toggle() (LATBINV = (1<<10))
#define RGB_LED_RED_Get() ((PORTB >> 10) & 0x1)
#define RGB_LED_RED_On() (LATBCLR = (1<<10))
#define RGB_LED_RED_Off() (LATBSET = (1<<10))
/*** LED Macros for LED ***/
#define LED_Toggle() (LATEINV = (1<<4))
#define LED_Get() ((PORTE >> 4) & 0x1)
#define LED_On() (LATESET = (1<<4))
#define LED_Off() (LATECLR = (1<<4))
/*** SWITCH Macros for SWITCH ***/
#define SWITCH_Get() ((PORTD >> 6) & 0x1)
#define SWITCH_STATE_PRESSED 0
#define SWITCH_STATE_RELEASED 1




// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    //Initialize the BSP
    BSP_Initialize();
    </code>

  Remarks:
    None
*/

void BSP_Initialize(void);

#endif // _BSP_H

/*******************************************************************************
 End of File
*/
