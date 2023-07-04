/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_LastTransactionDetails_Default.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : LastTransactionDetails
    and its Variant : Default
    For following APIs :
        PLIB_USB_LastTransactionDetailsGet
        PLIB_USB_ExistsLastTransactionDetails

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

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

#ifndef _USB_LASTTRANSACTIONDETAILS_DEFAULT_H
#define _USB_LASTTRANSACTIONDETAILS_DEFAULT_H

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"

//******************************************************************************
/* Function :  USB_LastTransactionDetailsGet_Default

  Summary:
    Implements Default variant of PLIB_USB_LastTransactionDetailsGet 

  Description:
    This template implements the Default variant of the PLIB_USB_LastTransactionDetailsGet function.
*/

PLIB_TEMPLATE void USB_LastTransactionDetailsGet_Default( USB_MODULE_ID index , USB_BUFFER_DIRECTION * direction , USB_PING_PONG_STATE * pingpong , uint8_t * endpoint )
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    *direction = ( USB_BUFFER_DIRECTION ) usb->UxSTAT.DIR;
    *pingpong =  ( USB_PING_PONG_STATE )usb->UxSTAT.PPBI;
    *endpoint = usb->UxSTAT.ENDPT;
}

//******************************************************************************
/* Function :  USB_ExistsLastTransactionDetails_Default

  Summary:
    Implements Default variant of PLIB_USB_ExistsLastTransactionDetails

  Description:
    This template implements the Default variant of the PLIB_USB_ExistsLastTransactionDetails function.
*/

#define PLIB_USB_ExistsLastTransactionDetails PLIB_USB_ExistsLastTransactionDetails
PLIB_TEMPLATE bool USB_ExistsLastTransactionDetails_Default( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_LASTTRANSACTIONDETAILS_DEFAULT_H*/

/******************************************************************************
 End of File
*/

