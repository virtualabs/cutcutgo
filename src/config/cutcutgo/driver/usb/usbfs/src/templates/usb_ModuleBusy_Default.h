/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_ModuleBusy_Default.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : ModuleBusy
    and its Variant : Default
    For following APIs :
        PLIB_USB_ModuleIsBusy
        PLIB_USB_ExistsModuleBusy

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

#ifndef _USB_MODULEBUSY_DEFAULT_H
#define _USB_MODULEBUSY_DEFAULT_H

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"

//******************************************************************************
/* Function :  USB_ModuleIsBusy_Default

  Summary:
    Implements Default variant of PLIB_USB_ModuleIsBusy 

  Description:
    This template implements the Default variant of the PLIB_USB_ModuleIsBusy function.
*/

PLIB_TEMPLATE bool USB_ModuleIsBusy_Default( USB_MODULE_ID index )
{
     volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
	 return  ( usb->UxPWRC.USBBUSY );
}

//******************************************************************************
/* Function :  USB_ExistsModuleBusy_Default

  Summary:
    Implements Default variant of PLIB_USB_ExistsModuleBusy

  Description:
    This template implements the Default variant of the PLIB_USB_ExistsModuleBusy function.
*/

#define PLIB_USB_ExistsModuleBusy PLIB_USB_ExistsModuleBusy
PLIB_TEMPLATE bool USB_ExistsModuleBusy_Default( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_MODULEBUSY_DEFAULT_H*/

/******************************************************************************
 End of File
*/

