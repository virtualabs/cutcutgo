/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_UOEMonitor_Unsupported.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : UOEMonitor
    and its Variant : Unsupported
    For following APIs :
        PLIB_USB_UOEMonitorEnable
        PLIB_USB_UOEMonitorDisable
        PLIB_USB_ExistsUOEMonitor

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

#ifndef _USB_UOEMONITOR_UNSUPPORTED_H
#define _USB_UOEMONITOR_UNSUPPORTED_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    None.

  MASKs: 
    None.

  POSs: 
    None.

  LENs: 
    None.

*/


//******************************************************************************
/* Function :  USB_UOEMonitorEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_UOEMonitorEnable 

  Description:
    This template implements the Unsupported variant of the PLIB_USB_UOEMonitorEnable function.
*/

PLIB_TEMPLATE void USB_UOEMonitorEnable_Unsupported( USB_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_UOEMonitorEnable");
}


//******************************************************************************
/* Function :  USB_UOEMonitorDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_UOEMonitorDisable 

  Description:
    This template implements the Unsupported variant of the PLIB_USB_UOEMonitorDisable function.
*/

PLIB_TEMPLATE void USB_UOEMonitorDisable_Unsupported( USB_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_UOEMonitorDisable");
}


//******************************************************************************
/* Function :  USB_ExistsUOEMonitor_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ExistsUOEMonitor

  Description:
    This template implements the Unsupported variant of the PLIB_USB_ExistsUOEMonitor function.
*/

PLIB_TEMPLATE bool USB_ExistsUOEMonitor_Unsupported( USB_MODULE_ID index )
{
    return false;
}


#endif /*_USB_UOEMONITOR_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

