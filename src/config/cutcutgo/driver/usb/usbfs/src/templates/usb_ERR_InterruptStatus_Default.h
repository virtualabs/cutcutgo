/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_ERR_InterruptStatus_Default.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ERR_InterruptStatus
    and its Variant : Default
    For following APIs :
        PLIB_USB_ErrorInterruptFlagSet
        PLIB_USB_ErrorInterruptFlagClear
        PLIB_USB_ErrorInterruptFlagGet
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

#ifndef _USB_ERR_INTERRUPTSTATUS_DEFAULT_H
#define _USB_ERR_INTERRUPTSTATUS_DEFAULT_H

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"

//******************************************************************************
/* Function :  USB_ErrorInterruptFlagSet_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptFlagSet 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptFlagSet function.
*/

PLIB_TEMPLATE void USB_ErrorInterruptFlagSet_Default
( 
    USB_MODULE_ID index , 
    USB_ERROR_INTERRUPTS   interruptFlag 
)
{
	volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
	usb->UxEIR.w |=  interruptFlag ;
   
}

//******************************************************************************
/* Function :  USB_ErrorInterruptFlagClear_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptFlagClear 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptFlagClear function.
*/

PLIB_TEMPLATE void USB_ErrorInterruptFlagClear_Default
( 
    USB_MODULE_ID index , 
    USB_ERROR_INTERRUPTS interruptFlag 
)
{
 	volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
	usb->UxEIR.w = interruptFlag ;
}

//******************************************************************************
/* Function :  USB_ErrorInterruptFlagGet_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptFlagGet 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptFlagGet function.
*/

PLIB_TEMPLATE bool USB_ErrorInterruptFlagGet_Default
( 
    USB_MODULE_ID index , 
    USB_ERROR_INTERRUPTS interruptFlag 
)
{
	volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    return ( ( usb->UxEIR.w) & interruptFlag ? 1 : 0 );
}

//******************************************************************************
/* Function :  USB_ErrorInterruptFlagAllGet_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptFlagAllGet 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptFlagAllGet function.
*/

PLIB_TEMPLATE USB_ERROR_INTERRUPTS USB_ErrorInterruptFlagAllGet_Default( USB_MODULE_ID index )
{
	volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    return (USB_ERROR_INTERRUPTS)( usb->UxEIR.w);

}

//******************************************************************************
/* Function :  USB_ExistsERR_InterruptStatus_Default

  Summary:
    Implements Default variant of PLIB_USB_ExistsERR_InterruptStatus

  Description:
    This template implements the Default variant of the
    PLIB_USB_ExistsERR_InterruptStatus function.
*/

#define PLIB_USB_ExistsERR_InterruptStatus PLIB_USB_ExistsERR_InterruptStatus
PLIB_TEMPLATE bool USB_ExistsERR_InterruptStatus_Default( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_ERR_INTERRUPTSTATUS_DEFAULT_H*/

/******************************************************************************
 End of File
*/

