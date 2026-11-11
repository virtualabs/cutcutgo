/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_BDTBaseAddress_Unsupported.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : BDTBaseAddress
    and its Variant : Unsupported
    For following APIs :
        PLIB_USB_BDTBaseAddressGet
        PLIB_USB_BDTBaseAddressSet
        PLIB_USB_ExistsBDTBaseAddress

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

#ifndef _USB_BDTBASEADDRESS_UNSUPPORTED_H
#define _USB_BDTBASEADDRESS_UNSUPPORTED_H

#include "../templates/usb_registers.h"

//******************************************************************************
/* Function :  USB_BDTBaseAddressGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BDTBaseAddressGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BDTBaseAddressGet function.
*/

PLIB_TEMPLATE void* USB_BDTBaseAddressGet_Unsupported( USB_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BDTBaseAddressGet");
    return (void*)0;
}

//******************************************************************************
/* Function :  USB_BDTBaseAddressSet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BDTBaseAddressSet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BDTBaseAddressSet function.
*/

PLIB_TEMPLATE void USB_BDTBaseAddressSet_Unsupported( USB_MODULE_ID index , void* address )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BDTBaseAddressSet");
}


//******************************************************************************
/* Function :  USB_ExistsBDTBaseAddress_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ExistsBDTBaseAddress

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ExistsBDTBaseAddress function.
*/

PLIB_TEMPLATE bool USB_ExistsBDTBaseAddress_Unsupported( USB_MODULE_ID index )
{
    return false;
}


#endif /*_USB_BDTBASEADDRESS_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

