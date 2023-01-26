/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_EPnRxEnableEnhanced_PIC32.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : EPnRxEnableEnhanced
    and its Variant : PIC32
    For following APIs :
        PLIB_USB_EPnRxEnable
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

#ifndef _USB_EPNRXENABLEENHANCED_PIC32_H
#define _USB_EPNRXENABLEENHANCED_PIC32_H

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"

//******************************************************************************
/* Function :  USB_EPnRxEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnRxEnable 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnRxEnable
    function.
*/

PLIB_TEMPLATE void USB_EPnRxEnable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPRXEN = 1;
}

//******************************************************************************
/* Function :  USB_EPnRxDisable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnRxDisable 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnRxDisable
    function.
*/

PLIB_TEMPLATE void USB_EPnRxDisable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPRXEN = 0;
}

//******************************************************************************
/* Function :  USB_EPnTxEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnTxEnable 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnTxEnable
    function.
*/

PLIB_TEMPLATE void USB_EPnTxEnable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPTXEN = 1;
}

//******************************************************************************
/* Function :  USB_EPnTxDisable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnTxDisable 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnTxDisable
    function.
*/

PLIB_TEMPLATE void USB_EPnTxDisable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPTXEN = 0;
}

//******************************************************************************
/* Function :  USB_EPnHandshakeEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnTxEnable 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnTxEnable
    function.
*/

PLIB_TEMPLATE void USB_EPnHandshakeEnable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPHSHK = 1;
   
}

//******************************************************************************
/* Function :  USB_EPnTxDisable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnTxDisable 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnTxDisable
    function.
*/

PLIB_TEMPLATE void USB_EPnHandshakeDisable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPHSHK = 0;
}

//******************************************************************************
/* Function :  USB_EPnControlTransferEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnControlTransferEnable 

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_EPnControlTransferEnable function.
*/

PLIB_TEMPLATE void USB_EPnControlTransferEnable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].w &= (~UxEP_EPCONDIS_MASK);
    usb->UxEP[endpoint].w |= (UxEP_EPTXEN_MASK|UxEP_EPRXEN_MASK);
}

PLIB_TEMPLATE void USB_EPnAttributesSet_PIC32
(
    USB_MODULE_ID index, 
    uint8_t endpoint, 
    int direction, 
    bool isControl, 
    bool handshake
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));

    if(isControl)
    {
        usb->UxEP[endpoint].w &= (~UxEP_EPCONDIS_MASK);
        usb->UxEP[endpoint].w |= (UxEP_EPTXEN_MASK|UxEP_EPRXEN_MASK|UxEP_EPHSHK_MASK);
    }
    else 
	{  
		/* Set the direction and handshake */
        usb->UxEP[endpoint].w |= ((UxEP_EPRXEN_MASK >> direction)|handshake);
	}
}

PLIB_TEMPLATE void USB_EPnAttributesClear_PIC32
(
    USB_MODULE_ID index, 
    uint8_t endpoint
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    
    usb->UxEP[endpoint].w |= UxEP_EPCONDIS_MASK;
    usb->UxEP[endpoint].w &= (~(UxEP_EPTXEN_MASK|UxEP_EPRXEN_MASK|UxEP_EPHSHK_MASK));
}

PLIB_TEMPLATE void USB_EPnDirectionDisable_PIC32
(
    USB_MODULE_ID index, 
    uint8_t endpoint, 
    int direction
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].w &= (~(UxEP_EPRXEN_MASK >> direction));
}

//******************************************************************************
/* Function :  USB_EPnControlTransferDisable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnControlTransferDisable 

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_EPnControlTransferDisable function.
*/

PLIB_TEMPLATE void USB_EPnControlTransferDisable_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPCONDIS = 1;
}

//******************************************************************************
/* Function :  USB_EPnIsStalled_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnIsStalled 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnIsStalled 
    function.
*/

PLIB_TEMPLATE bool USB_EPnIsStalled_PIC32
( 
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
	return ( usb->UxEP[endpoint].UxEPbits.EPSTALL );
}

//******************************************************************************
/* Function :  USB_EPnStallClear_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_EPnStallClear 

  Description:
    This template implements the PIC32 variant of the PLIB_USB_EPnStallClear 
    function.
*/

PLIB_TEMPLATE void USB_EPnStallClear_PIC32
(
    USB_MODULE_ID index , 
    uint8_t endpoint 
)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
    usb->UxEP[endpoint].UxEPbits.EPSTALL = 0;
}


PLIB_TEMPLATE void USB_EP0HostSetup_PIC32(USB_MODULE_ID index)
{
    volatile usb_registers_t   * usb = ((usb_registers_t *)(index));
	
	usb->UxEP[0].w = 0x00 ;
	
    /* Set up endpoint 0 for typical host operation.
     * Enable Transmit, Receive, Control Transfers, Handshake
     * Disable NAK Retry and Low speed connect */
    
    usb->UxEP[0].w |= (UxEP0_RETRYDIS_MASK|UxEP_EPHSHK_MASK|UxEP_EPTXEN_MASK|UxEP_EPRXEN_MASK);
}

//******************************************************************************
/* Function :  USB_ExistsEPnRxEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_ExistsEPnRxEnable

  Description:
    This template implements the PIC32 variant of the PLIB_USB_ExistsEPnRxEnable
    function.
*/

#define PLIB_USB_ExistsEPnRxEnable PLIB_USB_ExistsEPnRxEnable
PLIB_TEMPLATE bool USB_ExistsEPnRxEnable_PIC32( USB_MODULE_ID index )
{
    return true;
}


#endif /*_USB_EPNRXENABLEENHANCED_PIC32_H*/

/******************************************************************************
 End of File
*/

