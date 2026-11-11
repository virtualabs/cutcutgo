/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_EPnTxRx_Default.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : EPnTxRx
    and its Variant : Default
    For following APIs :
        PLIB_USB_EPnTxSelect
        PLIB_USB_EPnRxSelect
        PLIB_USB_EPnTxRxSelect
        PLIB_USB_ExistsEPnTxRx

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

#ifndef _USB_EPNTXRX_DEFAULT_H
#define _USB_EPNTXRX_DEFAULT_H

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"

//******************************************************************************
/* Function :  USB_EPnTxSelect_Default

  Summary:
    Implements Default variant of PLIB_USB_EPnTxSelect

  Description:
    This template implements the Default variant of the PLIB_USB_EPnTxSelect
    function.
*/

PLIB_TEMPLATE void USB_EPnTxSelect_Default
( 
    USB_MODULE_ID index , 
    uint8_t epValue , 
    USB_EP_TXRX epTxRx 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[epValue].UxEPbits.EPTXEN = ((epTxRx & 0x2) << 1);
}


//******************************************************************************
/* Function :  USB_EPnRxSelect_Default

  Summary:
    Implements Default variant of PLIB_USB_EPnRxSelect

  Description:
    This template implements the Default variant of the PLIB_USB_EPnRxSelect
    function.
*/

PLIB_TEMPLATE void USB_EPnRxSelect_Default
( 
    USB_MODULE_ID index , 
    uint8_t epValue , 
    USB_EP_TXRX epTxRx 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[epValue].UxEPbits.EPRXEN = ((epTxRx & 0x1) << 3);
}


//******************************************************************************
/* Function :  USB_EPnTxRxSelect_Default

  Summary:
    Implements Default variant of PLIB_USB_EPnTxRxSelect

  Description:
    This template implements the Default variant of the PLIB_USB_EPnTxRxSelect
    function.
*/

PLIB_TEMPLATE void USB_EPnTxRxSelect_Default
( 
    USB_MODULE_ID index , 
    uint8_t epValue , 
    USB_EP_TXRX epTxRx 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[epValue].UxEPbits.EPRXEN = ((epTxRx & 0x1) << 3);
    usb->UxEP[epValue].UxEPbits.EPTXEN = ((epTxRx & 0x2) << 1);
}

//******************************************************************************
/* Function :  USB_ExistsEPnTxRx_Default

  Summary:
    Implements Default variant of PLIB_USB_ExistsEPnTxRx

  Description:
    This template implements the Default variant of the PLIB_USB_ExistsEPnTxRx
    function.
*/

#define PLIB_USB_ExistsEPnTxRx PLIB_USB_ExistsEPnTxRx
PLIB_TEMPLATE bool USB_ExistsEPnTxRx_Default( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_EPNTXRX_DEFAULT_H*/

/******************************************************************************
 End of File
*/

