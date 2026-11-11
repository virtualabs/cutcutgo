/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_EPnRxEnableEnhanced_Unsupported.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : EPnRxEnableEnhanced
    and its Variant : Unsupported
    For following APIs :
        PLIB_USB_EPnRxEnable
        PLIB_USB_EPnRxDisable
        PLIB_USB_EPnTxEnable
        PLIB_USB_EPnTxDisable
        PLIB_USB_EPnHandshakeEnable
        PLIB_USB_EPnHandshakeDisable
        PLIB_USB_EPnControlTransferEnable
        PLIB_USB_EPnControlTransferDisable
        PLIB_USB_EPnIsStalled
        PLIB_USB_EPnStallClear
        PLIB_USB_ExistsEPnRxEnable

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

#ifndef _USB_EPNRXENABLEENHANCED_UNSUPPORTED_H
#define _USB_EPNRXENABLEENHANCED_UNSUPPORTED_H


//******************************************************************************
/* Function :  USB_EPnRxEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnRxEnable 

  Description:
    This template implements the Unsupported variant of the PLIB_USB_EPnRxEnable
    function.
*/

PLIB_TEMPLATE void USB_EPnRxEnable_Unsupported( USB_MODULE_ID index , uint8_t endpoint )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnRxEnable");
}


//******************************************************************************
/* Function :  USB_EPnRxDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnRxDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnRxDisable function.
*/

PLIB_TEMPLATE void USB_EPnRxDisable_Unsupported( USB_MODULE_ID index , uint8_t endpoint )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnRxDisable");
}


//******************************************************************************
/* Function :  USB_EPnTxEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnTxEnable 

  Description:
    This template implements the Unsupported variant of the PLIB_USB_EPnTxEnable
    function.
*/

PLIB_TEMPLATE void USB_EPnTxEnable_Unsupported( USB_MODULE_ID index , uint8_t endpoint )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnTxEnable");
}


//******************************************************************************
/* Function :  USB_EPnTxDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnTxDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnTxDisable function.
*/

PLIB_TEMPLATE void USB_EPnTxDisable_Unsupported( USB_MODULE_ID index , uint8_t endpoint )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnTxDisable");
}


//******************************************************************************
/* Function :  USB_EPnHandshakeEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnHandshakeEnable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnHandshakeEnable function.
*/

PLIB_TEMPLATE void USB_EPnHandshakeEnable_Unsupported( USB_MODULE_ID index , uint8_t epValue )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnHandshakeEnable");
}


//******************************************************************************
/* Function :  USB_EPnHandshakeDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnHandshakeDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnHandshakeDisable function.
*/

PLIB_TEMPLATE void USB_EPnHandshakeDisable_Unsupported( USB_MODULE_ID index , uint8_t epValue )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnHandshakeDisable");
}


//******************************************************************************
/* Function :  USB_EPnControlTransferEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnControlTransferEnable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnControlTransferEnable function.
*/

PLIB_TEMPLATE void USB_EPnControlTransferEnable_Unsupported( USB_MODULE_ID index , uint8_t epValue )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnControlTransferEnable");
}


//******************************************************************************
/* Function :  USB_EPnControlTransferDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnControlTransferDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnControlTransferDisable function.
*/

PLIB_TEMPLATE void USB_EPnControlTransferDisable_Unsupported( USB_MODULE_ID index , uint8_t epValue )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnControlTransferDisable");
}


//******************************************************************************
/* Function :  USB_EPnIsStalled_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnIsStalled 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnIsStalled function.
*/

PLIB_TEMPLATE bool USB_EPnIsStalled_Unsupported( USB_MODULE_ID index , uint8_t epValue )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnIsStalled");

    return false;
}


//******************************************************************************
/* Function :  USB_EPnStallClear_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_EPnStallClear 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_EPnStallClear function.
*/

PLIB_TEMPLATE void USB_EPnStallClear_Unsupported( USB_MODULE_ID index , uint8_t epValue )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_EPnStallClear");
}


//******************************************************************************
/* Function :  USB_ExistsEPnRxEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ExistsEPnRxEnable

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ExistsEPnRxEnable function.
*/

PLIB_TEMPLATE bool USB_ExistsEPnRxEnable_Unsupported( USB_MODULE_ID index )
{
    return false;
}


#endif /*_USB_EPNRXENABLEENHANCED_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

