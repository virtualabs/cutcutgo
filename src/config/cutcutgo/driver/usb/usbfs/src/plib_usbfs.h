/*******************************************************************************
  USB Peripheral Library Interface Header

  Company:
    Microchip Technology Inc.

  File Name:
    plib_usb.h

  Summary:
    USB Peripheral Library Interface Header for common definitions

  Description:
    This header file contains the function prototypes and definitions of
    the data types and constants that make up the interface to the USB
    Peripheral Library.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright © 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
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
// DOM-IGNORE-END

#ifndef _PLIB_USB_H
#define _PLIB_USB_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files (continued at end of file)
// *****************************************************************************
// *****************************************************************************
/*  This section lists the other files that are included in this file.  However,
    please see the bottom of the file for additional implementation header files
    that are also included
*/

#include <stdint.h>
#include <stdbool.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END 

// *****************************************************************************
// *****************************************************************************
// Section: Constants
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
/* Maximum number of endpoints

  Summary:
    Maximum number of endpoints supported (not including EP0).

  Description:
    This constant defines the maximum number of endpoints supported (not
    including EP0).  It is used in dimensioning the Buffer Descriptor Table (BDT)
    array.
*/

#define USB_MAX_EP_NUMBER 15


// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Operating Modes Enumeration

  Summary:
    Provides enumeration of operating modes supported by USB.

  Description:
    This data type provides enumeration of the operating modes supported by the 
    USB module.

  Remarks:
    None.
*/

typedef enum
{
    // None
    USB_OPMODE_NONE   /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/ ,
    // Device
    USB_OPMODE_DEVICE /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/ ,
    // Host
    USB_OPMODE_HOST   /*DOM-IGNORE-BEGIN*/ = 2 /*DOM-IGNORE-END*/ ,
    // OTG
    USB_OPMODE_OTG    /*DOM-IGNORE-BEGIN*/ = 3 /*DOM-IGNORE-END*/

} USB_OPMODES;


// *****************************************************************************
/* USB OTG Interrupts Enumeration

  Summary:
    Provides enumeration of interrupts related to the USB On-The-Go (OTG) module.

  Description:
    This data type provides enumeration of interrupts related to the USB OTG module.

  Remarks:
    Not applicable if the USB OTG module is not enabled.
*/

typedef enum
{
    // State of (VBUS > Va_vbus_vld) on the A device has changed
    USB_OTG_INT_ADEVICE_VBUS_VALID   /*DOM-IGNORE-BEGIN*/ =  1<<0 /*DOM-IGNORE-END*/ ,
    // Reserved. Don't use.
    USB_OTG_INT_OTG_RESERVED         /*DOM-IGNORE-BEGIN*/ =  1<<1 /*DOM-IGNORE-END*/ ,
    // State of (VBUS < Vb_sess_end) on the B device has changed
    USB_OTG_INT_BDEVICE_SESSION_END  /*DOM-IGNORE-BEGIN*/ =  1<<2 /*DOM-IGNORE-END*/ ,
    // State of (VBUS > Va_sess_vld) on the A or B devices has changed
    USB_OTG_INT_SESSION_VALID        /*DOM-IGNORE-BEGIN*/ =  1<<3 /*DOM-IGNORE-END*/ ,
    // Activity detected on the D+, D-, ID, or VBUS lines
    USB_OTG_INT_ACTIVITY_DETECT      /*DOM-IGNORE-BEGIN*/ =  1<<4 /*DOM-IGNORE-END*/ ,
    // USB line state has been stable for 1 ms, but different from last time
    USB_OTG_INT_STABLE_LINE_STATE    /*DOM-IGNORE-BEGIN*/ =  1<<5 /*DOM-IGNORE-END*/ ,
    // One millisecond timer has expired
    USB_OTG_INT_ONE_MS_TIMEOUT       /*DOM-IGNORE-BEGIN*/ =  1<<6 /*DOM-IGNORE-END*/ ,
    // Change in state of ID pin detected.
    USB_OTG_INT_ID_STATE_CHANGE      /*DOM-IGNORE-BEGIN*/ =  1<<7 /*DOM-IGNORE-END*/ ,
    // All or Any of the above
    USB_OTG_INT_ANY                  /*DOM-IGNORE-BEGIN*/ =  0xFD /*DOM-IGNORE-END*/ ,
    // All or Any of the above
    USB_OTG_INT_ALL                  /*DOM-IGNORE-BEGIN*/ =  0xFD /*DOM-IGNORE-END*/

} USB_OTG_INTERRUPTS;


// *****************************************************************************
/* Enumeration of USB Ping-Pong Modes

  Summary:
    Supports the four modes of ping-pong buffering.

  Description:
    This data type supports the four modes of ping-pong buffering.

  Remarks:
    None.
*/

typedef enum
{
    // Ping-Pong buffering on all endpoints except Endpoint Zero
    USB_PING_PONG_ALL_BUT_EP0    /*DOM-IGNORE-BEGIN*/ = 0x03 /*DOM-IGNORE-END*/ , 
    // Ping-Pong buffering on all endpoints
    USB_PING_PONG_FULL_PING_PONG /*DOM-IGNORE-BEGIN*/ = 0x02 /*DOM-IGNORE-END*/ , 
    // Ping-Pong buffering on just Endpoint Zero transmit
    USB_PING_PONG_EP0_OUT_ONLY   /*DOM-IGNORE-BEGIN*/ = 0x01 /*DOM-IGNORE-END*/ , 
    // No ping-pong buffering
    USB_PING_PONG_NO_PING_PONG   /*DOM-IGNORE-BEGIN*/ = 0x00 /*DOM-IGNORE-END*/   

} USB_PING_PONG_MODE;


// *****************************************************************************
/* Enumeration of USB Ping-Pong Indicator

  Summary:
    Decodes which buffer (Even vs. Odd) was used for the last transaction.

  Description:
    This data type decodes which buffer (Even vs. Odd) was used for the last 
    transaction.

  Remarks:
    None.
*/

typedef enum
{
    // Last transaction on Even Buffer
    USB_PING_PONG_EVEN /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/ ,
    // Last transaction on Odd  Buffer
    USB_PING_PONG_ODD  /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/   

} USB_PING_PONG_STATE;


// *****************************************************************************
/* Enumeration of USB Buffer Ping-Pong

  Summary:
   Enumerates the ping-pong buffer (Even vs. Odd).

  Description:
   This data type enumerates the ping-pong buffer (Even vs. Odd).

  Remarks:
    None.
*/

typedef enum
{
    USB_BUFFER_EVEN /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/ , // Even Buffer
    USB_BUFFER_ODD  /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/   // Odd  Buffer

} USB_BUFFER_PING_PONG;


// *****************************************************************************
/* Enumeration of Legal Packet IDs (PIDs)

  Summary:
    Legal PID values.

  Description:
    This data type enumerates the valid (i.e., legal) PID values.  While the PID
    field is four bits long, only these values are legal and should be used.  
    The use of any other values may cause unpredictable results.

*/

typedef enum
{
    USB_PID_SETUP /*DOM-IGNORE-BEGIN*/ = 0x0D /*DOM-IGNORE-END*/ , // Setup token
    USB_PID_IN    /*DOM-IGNORE-BEGIN*/ = 0x09 /*DOM-IGNORE-END*/ , // IN token
    USB_PID_OUT   /*DOM-IGNORE-BEGIN*/ = 0x01 /*DOM-IGNORE-END*/   // OUT token

} USB_PID;


// *****************************************************************************
/* Enumeration of Pull-Up and Pull-Down Resistors for OTG

  Summary:
    USB OTG pull-Up and pull-Down resistors for D+ and D- .

  Description:
    This data type enumerates the OTG Pull-Up and Pull-Down resistors for D+ and D- .

  Remarks:
    None.
*/

typedef enum
{
    USB_OTG_DPLUS_PULLUP   /*DOM-IGNORE-BEGIN*/ = 1<<7 /*DOM-IGNORE-END*/ , // D+ Pull-Up
    USB_OTG_DMINUS_PULLUP  /*DOM-IGNORE-BEGIN*/ = 1<<6 /*DOM-IGNORE-END*/ , // D- Pull-Up
    USB_OTG_DPLUS_PULLDN   /*DOM-IGNORE-BEGIN*/ = 1<<5 /*DOM-IGNORE-END*/ , // D+ Pull-Down
    USB_OTG_DMINUS_PULLDN  /*DOM-IGNORE-BEGIN*/ = 1<<4 /*DOM-IGNORE-END*/   // D- Pull-Down

} USB_OTG_PULL_UP_PULL_DOWN;


// *****************************************************************************
/* USB Token Speeds Enumeration

  Summary:
    Provides enumeration of available token speeds.

  Description:
    This data type provides enumeration of available token speeds.

  Remarks:
    For Host mode only.
*/

typedef enum
{
    USB_LOWSPEED_TOKENS, // Low Speed Tokens
    USB_FULLSPEED_TOKENS // Full Speed Tokens

} USB_TOKEN_SPEED;


// *****************************************************************************
/* Enumeration of USB Endpoint Transmit/Receive Setup

  Summary:
    Provides enumeration transmit/receive setup for an endpoint.

  Description:
    This data type provides enumeration transmit/receive setup for an endpoint.

  Remarks:
    None.
*/

typedef enum
{
    USB_EP_NOTXRX,  // Nothing              enabled for endpoint
    USB_EP_RX,      // Receive              enabled for endpoint
    USB_EP_TX,      // Transmit             enabled for endpoint
    USB_EP_TX_RX    // Transmit and Receive enabled for endpoint

} USB_EP_TXRX;


// *****************************************************************************
/* USB Endpoint Buffer Direction Enumeration

  Summary:
    Provides enumeration transmit/receive direction for a buffer.

  Description:
    This data type provides enumeration transmit/receive direction for a buffer.

  Remarks:
    None.
*/

typedef enum
{
    USB_BUFFER_RX  /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/, // Receive
    USB_BUFFER_TX  /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/  // Transmit

} USB_BUFFER_DIRECTION;


// *****************************************************************************
/* USB Endpoint Buffer Data Toggle Enumeration

  Summary:
    Provides enumeration data toggle for a buffer.

  Description:
    This data type provides enumeration data toggle for a buffer.

  Remarks:
    None.
*/

typedef enum
{
    USB_BUFFER_DATA0, // DATA0/1 = 0
    USB_BUFFER_DATA1  // DATA0/1 = 1

} USB_BUFFER_DATA01;


// *****************************************************************************
/* USB Endpoint Buffer Data Toggle Enumeration for Buffer Schedulint

  Summary:
    Provides enumeration data toggle for a buffer.

  Description:
    This data type provides enumeration data toggle for a buffer.

  Remarks:
    None.
*/

typedef enum
{
    USB_BUFFER_DONTCHANGE  /*DOM-IGNORE-BEGIN*/ = -1 /*DOM-IGNORE-END*/, // Don't Change DATA0/1
    USB_BUFFER_SET_DATA0   /*DOM-IGNORE-BEGIN*/ =  0 /*DOM-IGNORE-END*/, // DATA0/1 = 0
    USB_BUFFER_SET_DATA1   /*DOM-IGNORE-BEGIN*/ =  1 /*DOM-IGNORE-END*/  // DATA0/1 = 1

} USB_BUFFER_SCHEDULE_DATA01;


// ****************************************************************************
// ****************************************************************************
// Section: Processor Include Files
// ****************************************************************************
// ****************************************************************************

/*DOM-IGNORE-BEGIN*/
//#include "driver/usb/usbfs/src/plib_usbfs_header.h"
#include "driver/usb/usbfs/src/usbfs_registers.h"

/*DOM-IGNORE-END*/


//DOM-IGNORE-END

// ****************************************************************************
// ****************************************************************************
// Section: Included Files (continued)
// ****************************************************************************
// ****************************************************************************
/*  The file included below  maps the interface definitions above to appropriate
    implementations defined in the implementation (imp) file(s).
*/

// DOM-IGNORE-BEGIN
//#include other_stuff.h
// DOM-IGNORE-END

// Note: usb_processor.h is not included here.  It is included above to
// provide processor-specific definitions of the Buffer Descriptor Table.

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif//ndef _PLIB_USB_H

/*******************************************************************************
 End of File
*/
