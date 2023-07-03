/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_ERR_InterruptStatus_Unsupported.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ERR_InterruptStatus
    and its Variant : Unsupported
    For following APIs :
        PLIB_USB_ErrorInterruptFlagSet
        PLIB_USB_ErrorInterruptFlagClear
        PLIB_USB_ErrorInterruptFlagGet
        PLIB_USB_ErrorInterruptFlagAllGet
        PLIB_USB_ExistsERR_InterruptStatus

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

#ifndef _USB_ERR_INTERRUPTSTATUS_UNSUPPORTED_H
#define _USB_ERR_INTERRUPTSTATUS_UNSUPPORTED_H

//******************************************************************************
/* Function :  USB_ErrorInterruptFlagSet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ErrorInterruptFlagSet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ErrorInterruptFlagSet function.
*/

PLIB_TEMPLATE void USB_ErrorInterruptFlagSet_Unsupported( USB_MODULE_ID index , USB_ERROR_INTERRUPTS   interruptFlag )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_ErrorInterruptFlagSet");
}


//******************************************************************************
/* Function :  USB_ErrorInterruptFlagClear_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ErrorInterruptFlagClear 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ErrorInterruptFlagClear function.
*/

PLIB_TEMPLATE void USB_ErrorInterruptFlagClear_Unsupported( USB_MODULE_ID index , USB_ERROR_INTERRUPTS   interruptFlag )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_ErrorInterruptFlagClear");
}


//******************************************************************************
/* Function :  USB_ErrorInterruptFlagGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ErrorInterruptFlagGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ErrorInterruptFlagGet function.
*/

PLIB_TEMPLATE bool USB_ErrorInterruptFlagGet_Unsupported( USB_MODULE_ID index , USB_ERROR_INTERRUPTS   interruptFlag )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_ErrorInterruptFlagGet");

    return false;
}


//******************************************************************************
/* Function :  USB_ErrorInterruptFlagAllGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ErrorInterruptFlagAllGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ErrorInterruptFlagAllGet function.
*/

PLIB_TEMPLATE USB_ERROR_INTERRUPTS USB_ErrorInterruptFlagAllGet_Unsupported( USB_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_ErrorInterruptFlagAllGet");

    return 0;
}


//******************************************************************************
/* Function :  USB_ExistsERR_InterruptStatus_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ExistsERR_InterruptStatus

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ExistsERR_InterruptStatus function.
*/

PLIB_TEMPLATE bool USB_ExistsERR_InterruptStatus_Unsupported( USB_MODULE_ID index )
{
    return false;
}


#endif /*_USB_ERR_INTERRUPTSTATUS_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

