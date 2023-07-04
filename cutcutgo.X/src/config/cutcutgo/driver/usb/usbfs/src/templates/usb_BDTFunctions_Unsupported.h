/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_BDTFunctions_Unsupported.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : BDTFunctions
    and its Variant : Unsupported
    For following APIs :
        PLIB_USB_BufferIndexGet
        PLIB_USB_BufferAddressGet
        PLIB_USB_BufferAddressSet
        PLIB_USB_BufferByteCountGet
        PLIB_USB_BufferByteCountSet
        PLIB_USB_BufferDataToggleGet
        PLIB_USB_BufferDataToggleSelect
        PLIB_USB_BufferDataToggleSyncDisable
        PLIB_USB_BufferDataToggleSyncEnable
        PLIB_USB_BufferPIDGet
        PLIB_USB_BufferReleasedToSW
        PLIB_USB_BufferReleaseToUSB
        PLIB_USB_BufferCancelReleaseToUSB
        PLIB_USB_BufferStallDisable
        PLIB_USB_BufferStallEnable
        PLIB_USB_BufferPIDBitsClear
        PLIB_USB_ExistsBDTFunctions

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

#ifndef _USB_BDTFUNCTIONS_UNSUPPORTED_H
#define _USB_BDTFUNCTIONS_UNSUPPORTED_H



//******************************************************************************
/* Function :  USB_BufferIndexGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferIndexGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferIndexGet function.
*/

PLIB_TEMPLATE unsigned int  USB_BufferIndexGet_Unsupported( USB_MODULE_ID index , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferIndexGet");
    return 0;
}


//******************************************************************************
/* Function :  USB_BufferAddressGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferAddressGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferAddressGet function.
*/

PLIB_TEMPLATE void*  USB_BufferAddressGet_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferAddressGet");
    return NULL;
}


//******************************************************************************
/* Function :  USB_BufferAddressSet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferAddressSet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferAddressSet function.
*/

PLIB_TEMPLATE void  USB_BufferAddressSet_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong , void* bufferAddress )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferAddressSet");
}


//******************************************************************************
/* Function :  USB_BufferByteCountGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferByteCountGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferByteCountGet function.
*/

PLIB_TEMPLATE uint16_t  USB_BufferByteCountGet_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferByteCountGet");
    return 0;
}


//******************************************************************************
/* Function :  USB_BufferByteCountSet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferByteCountSet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferByteCountSet function.
*/

PLIB_TEMPLATE void      USB_BufferByteCountSet_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong , uint16_t bufferByteCount )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferByteCountSet");
}


//******************************************************************************
/* Function :  USB_BufferDataToggleGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferDataToggleGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferDataToggleGet function.
*/

PLIB_TEMPLATE USB_BUFFER_DATA01  USB_BufferDataToggleGet_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferDataToggleGet");
    return (USB_BUFFER_DATA01) 0;
}


//******************************************************************************
/* Function :  USB_BufferDataToggleSelect_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferDataToggleSelect 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferDataToggleSelect function.
*/

PLIB_TEMPLATE void  USB_BufferDataToggleSelect_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong , USB_BUFFER_DATA01 bufferData01 )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferDataToggleSelect");
}


//******************************************************************************
/* Function :  USB_BufferDataToggleSyncDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferDataToggleSyncDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferDataToggleSyncDisable function.
*/

PLIB_TEMPLATE void  USB_BufferDataToggleSyncDisable_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferDataToggleSyncDisable");
}


//******************************************************************************
/* Function :  USB_BufferDataToggleSyncEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferDataToggleSyncEnable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferDataToggleSyncEnable function.
*/

PLIB_TEMPLATE void  USB_BufferDataToggleSyncEnable_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferDataToggleSyncEnable");
}


//******************************************************************************
/* Function :  USB_BufferPIDGet_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferPIDGet 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferPIDGet function.
*/

PLIB_TEMPLATE uint8_t  USB_BufferPIDGet_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferPIDGet");
    return 0;
}


//******************************************************************************
/* Function :  USB_BufferReleasedToSW_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferReleasedToSW 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferReleasedToSW function.
*/

PLIB_TEMPLATE bool  USB_BufferReleasedToSW_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferReleasedToSW");
    return false;
}


//******************************************************************************
/* Function :  USB_BufferReleaseToUSB_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferReleaseToUSB 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferReleaseToUSB function.
*/

PLIB_TEMPLATE void  USB_BufferReleaseToUSB_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferReleaseToUSB");
}


//******************************************************************************
/* Function :  USB_BufferCancelReleaseToUSB_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferCancelReleaseToUSB 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferCancelReleaseToUSB function.
*/

PLIB_TEMPLATE void  USB_BufferCancelReleaseToUSB_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferCancelReleaseToUSB");
}


//******************************************************************************
/* Function :  USB_BufferStallDisable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferStallDisable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferStallDisable function.
*/

PLIB_TEMPLATE void  USB_BufferStallDisable_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferStallDisable");
}


//******************************************************************************
/* Function :  USB_BufferStallEnable_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferStallEnable 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferStallEnable function.
*/

PLIB_TEMPLATE void  USB_BufferStallEnable_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferStallEnable");
}


//******************************************************************************
/* Function :  USB_BufferPIDBitsClear_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_BufferPIDBitsClear 

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_BufferPIDBitsClear function.
*/

PLIB_TEMPLATE void  USB_BufferPIDBitsClear_Unsupported( USB_MODULE_ID index , void* pBDT , USB_PING_PONG_MODE ppMode , uint8_t epValue , USB_BUFFER_DIRECTION bufferDirection , USB_BUFFER_PING_PONG  bufferPingPong )
{
    PLIB_ASSERT(false, "The device selected does not implement PLIB_USB_BufferPIDBitsClear");
}


//******************************************************************************
/* Function :  USB_ExistsBDTFunctions_Unsupported

  Summary:
    Implements Unsupported variant of PLIB_USB_ExistsBDTFunctions

  Description:
    This template implements the Unsupported variant of the
    PLIB_USB_ExistsBDTFunctions function.
*/

PLIB_TEMPLATE bool USB_ExistsBDTFunctions_Unsupported( USB_MODULE_ID index )
{
    return false;
}


#endif /*_USB_BDTFUNCTIONS_UNSUPPORTED_H*/

/******************************************************************************
 End of File
*/

