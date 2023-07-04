/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
//DOM-IGNORE-END

#ifndef _APP_H
#define _APP_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"
#include "definitions.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
// Section: Free RTOS Task Priorities
// *****************************************************************************
// *****************************************************************************

#define  USBDEVICETASK_PRIO                             4u

// *****************************************************************************
// *****************************************************************************
// Section: Free RTOS Task Stack Sizes
// *****************************************************************************
// *****************************************************************************
#define  USBDEVICETASK_SIZE                             1024u

// *****************************************************************************
// *****************************************************************************
// Section: Configuration specific application constants
// *****************************************************************************
// *****************************************************************************

#define APP_READ_BUFFER_SIZE 512

#ifdef __PIC32MZ__
    #define APP_MAKE_BUFFER_DMA_READY  __attribute__((coherent)) __attribute__((aligned(16)))
#else
    #define APP_MAKE_BUFFER_DMA_READY  __attribute__((aligned(16)))
#endif

#define APP_USB_LED_1 BSP_LED_1
#define APP_USB_LED_2 BSP_LED_2
#define APP_USB_LED_3 BSP_LED_3

// *****************************************************************************
/* Application States

  Summary:
    Application states 

  Description:
    This defines the valid application states.  These states
    determine the behavior of the application at various times.
*/
#define USBDEVICETASK_OPENUSB_STATE                1
#define USBDEVICETASK_ATTACHUSB_STATE              2
#define USBDEVICETASK_PROCESSUSBEVENTS_STATE       3

#define USBDEVICETASK_USBPOWERED_EVENT             1
#define USBDEVICETASK_USBCONFIGURED_EVENT          2
#define USBDEVICETASK_READDONECOM1_EVENT           3
#define USBDEVICETASK_WRITEDONECOM1_EVENT          4
#define USBDEVICETASK_SOF_EVENT                    5

/******************************************************
 * Application COM Port Object
 ******************************************************/

typedef struct
{
    /* CDC instance number */
    USB_DEVICE_CDC_INDEX cdcInstance;

    /* Set Line Coding Data */
    USB_CDC_LINE_CODING setLineCodingData;

    /* Get Line Coding Data */
    USB_CDC_LINE_CODING getLineCodingData;

    /* Control Line State */
    USB_CDC_CONTROL_LINE_STATE controlLineStateData;

    /* Break data */
    uint16_t breakData;

}APP_COM_PORT_OBJECT;

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

typedef struct
{
    /* Device layer handle returned by device layer open function */
    USB_DEVICE_HANDLE deviceHandle;

    /* This demo supports 1 COM port */
    APP_COM_PORT_OBJECT appCOMPortObjects[1];
    
    int numBytesRead; 

    /* True if the switch press needs to be ignored*/
    bool ignoreSwitchPress;

    /* Switch debounce timer */
    unsigned int switchDebounceTimer;

    /* Switch debounce timer count */
    unsigned int debounceCount;
    
} APP_DATA;


// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/
void APP_USBDeviceEventHandler(USB_DEVICE_EVENT event, void * pData,
                                                            uintptr_t context);

USB_DEVICE_CDC_EVENT_RESPONSE APP_USBDeviceCDCEventHandler (
            USB_DEVICE_CDC_INDEX index , USB_DEVICE_CDC_EVENT event ,void* pData,
                                                            uintptr_t userData);

	
// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_FREERTOS_Initialize ( void )

  Summary:
     MPLAB Harmony application initialization routine.

  Description:
    This function initializes the Harmony application.  It places the 
    application in its initial state and prepares it to run so that its 
    APP_Tasks function can be called.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_FREERTOS_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/

void APP_FREERTOS_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_FREERTOS_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_FREERTOS_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_FREERTOS_Tasks ( void );
void APP_FREERTOS_Initialize ( void );


#endif /* _APP_H */
/*******************************************************************************
 End of File
 */


