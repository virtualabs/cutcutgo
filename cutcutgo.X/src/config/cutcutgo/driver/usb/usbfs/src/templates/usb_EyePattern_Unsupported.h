/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_EyePattern_Unsupported.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : EyePattern
    and its Variant : Unsupported
    For following APIs :
        PLIB_USB_EyePatternDisable
        PLIB_USB_EyePatternEnable
        PLIB_USB_ExistsEyePattern

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

#ifndef _USB_EYEPATTERN_UNSUPPORTED_H
#define _USB_EYEPATTERN_UNSUPPORTED_H

//******************************************************************************
/* Function :  USB_EyePatternDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EyePatternDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EyePatternDisable function.
*/

PLIB_TEMPLATE void USB_EyePatternDisable_Unsupported( USB_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EyePatternDisable");
}


//******************************************************************************
/* Function :  USB_EyePatternEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EyePatternEnable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EyePatternEnable function.
*/

PLIB_TEMPLATE void USB_EyePatternEnable_Unsupported( USB_MODULE_ID index )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EyePatternEnable");
}


//******************************************************************************
/* Function :  USB_ExistsEyePattern_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ExistsEyePattern

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ExistsEyePattern function.
*/

PLIB_TEMPLATE bool USB_ExistsEyePattern_Unsupported( USB_MODULE_ID index )
{
    return false;
}


#endif /*_USB_EYEPATTERN_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

