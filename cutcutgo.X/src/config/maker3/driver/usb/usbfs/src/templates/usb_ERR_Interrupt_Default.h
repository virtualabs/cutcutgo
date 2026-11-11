/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_ERR_Interrupt_Default.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ERR_Interrupt
    and its Variant : Default
    For following APIs :
        PLIB_USB_ErrorInterruptEnable
        PLIB_USB_ErrorInterruptDisable
        PLIB_USB_ErrorInterruptIsEnabled
        PLIB_USB_ExistsERR_Interrupt

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

#ifndef _USB_ERR_INTERRUPT_DEFAULT_H
#define _USB_ERR_INTERRUPT_DEFAULT_H

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"


//******************************************************************************
/* Function :  USB_ErrorInterruptEnable_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptEnable 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptEnable function.
*/

PLIB_TEMPLATE void USB_ErrorInterruptEnable_Default
( 
    USB_MODULE_ID index , 
    USB_ERROR_INTERRUPTS interruptFlag 
)
{
     volatile usb_registers_t * usb = ((usb_registers_t *)(index));
     usb->UxEIE.w |= interruptFlag ;
 
}
//******************************************************************************
/* Function :  USB_ErrorInterruptDisable_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptDisable 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptDisable function.
*/

PLIB_TEMPLATE void USB_ErrorInterruptDisable_Default
( 
    USB_MODULE_ID index , 
    USB_ERROR_INTERRUPTS interruptFlag 
)
{
	volatile usb_registers_t * usb = ((usb_registers_t *)(index));
	usb->UxEIE.w &= (~ interruptFlag );
}

//******************************************************************************
/* Function :  USB_ErrorInterruptIsEnabled_Default

  Summary:
    Implements Default variant of PLIB_USB_ErrorInterruptIsEnabled 

  Description:
    This template implements the Default variant of the
    PLIB_USB_ErrorInterruptIsEnabled function.
*/

PLIB_TEMPLATE bool USB_ErrorInterruptIsEnabled_Default
( 
    USB_MODULE_ID index , 
    USB_INTERRUPTS interruptFlag 
)
{
	volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
	return ( ( usb->UxEIE.w) & interruptFlag ? 1 : 0 );
}

//******************************************************************************
/* Function :  USB_ExistsERR_Interrupt_Default

  Summary:
    Implements Default variant of PLIB_USB_ExistsERR_Interrupt

  Description:
    This template implements the Default variant of the
    PLIB_USB_ExistsERR_Interrupt function.
*/

#define PLIB_USB_ExistsERR_Interrupt PLIB_USB_ExistsERR_Interrupt
PLIB_TEMPLATE bool USB_ExistsERR_Interrupt_Default( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_ERR_INTERRUPT_DEFAULT_H*/

/******************************************************************************
 End of File
*/

