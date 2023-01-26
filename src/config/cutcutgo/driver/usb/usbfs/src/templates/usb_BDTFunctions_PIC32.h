/*******************************************************************************
  USB Peripheral Library Template Implementation

  File Name:
    usb_BDTFunctions_PIC32.h

  Summary:
    USB PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : BDTFunctions
    and its Variant : PIC32
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
        PLIB_USB_BufferSchedule
        PLIB_USB_BufferCancelReleaseToUSB
        PLIB_USB_BufferAllCancelReleaseToUSB
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

#ifndef _USB_BDTFUNCTIONS_PIC32_H
#define _USB_BDTFUNCTIONS_PIC32_H

#include <sys/kmem.h>
#define ConvertToPhysicalAddress(a) ((uint32_t)KVA_TO_PA(a))
#define ConvertToVirtualAddress(a)  PA_TO_KVA1(a)

#include "driver/usb/usbfs/src/templates/usbfs_registers.h"
// *****************************************************************************
/* Buffer Status Layout for PIC24/dsPIC33 and PIC32.

  Summary:
    Provides C structure equivalence to lowest 16 bits of Buffer Descriptor.

  Description:
    Provides C structure equivalence to lowest 16 bits of Buffer Descriptor.

    Software To Hardware Fields: (Writable by software, not readable)
<pre><c>
        stallEnable
        dataToggleSyncEnable
        noDMAIncrement
        keepBDForever
</c></pre>
    On read these fields are replaced by:
<pre><c>
        packetID
</c></pre>

    With keepBDForever = 1, the USB module will keep the Buffer Descriptor and
    buffer defined by bufferAddress forever once usbOwnsBuffer = 1.  The USB
    status FIFO will not be updated nor will a Token Processing Complete
    interrupt fire.

    The keepBDForever and noDMAIncrement bits are primarily intended to be used
    in a system where the packet data is provided via a streaming interface.
    Since all packet data is stored in Data RAM these bits should be zero.

    Writable and Readable (Software to Hardware and Hardware to Software):
<pre><c>
        dataToggle
        usbOwnsBuffer
</c></pre>
    When usbOwnsBuffer = 1 the USB module controls the Buffer Descriptor (BD)
    and the data buffer that bufferAddress points to.  The software cannot
    modify any of this.  When usbOwnsBuffer = 0 the software owns the BD and
    buffer.  The USB module ignores all fields except usbOwnsBuffer, waiting
    for software to set this bit again after setting up the descriptor and
    buffer again.

    The usbOwnsBuffer should be assigned the correct initial value prior to
    enabling the associated endpoint.

*/

typedef union /*DOM-IGNORE-BEGIN*/__attribute__ ((packed))/*DOM-IGNORE-END*/
{
    struct /*DOM-IGNORE-BEGIN*/__attribute__ ((packed))/*DOM-IGNORE-END*/
    {
        uint8_t                         :2; //Reserved
        uint8_t    stallEnable          :1; //Buffer Stall Enable
        uint8_t    dataToggleSyncEnable :1; //Data Toggle Synch Enable
        uint8_t    noDMAIncrement       :1; //Disable DMA Increment?
        uint8_t    keepBDForever        :1; //Enable Keeping Buffer Descriptor?
        uint8_t    dataToggle           :1; //Data Toggle Synch Value
        uint8_t    usbOwnsBuffer        :1; //USB Ownership of buffer and BDT entry?
    };
    struct /*DOM-IGNORE-BEGIN*/__attribute__ ((packed))/*DOM-IGNORE-END*/
    {
        uint8_t                         :2; //Reserved
        uint8_t    packetID             :4; //Packet Identifier (PID)
    };
    uint16_t       sValue;                  //Short Integer Value

} USB_BD_STATUS;


// *****************************************************************************
/* Buffer Descriptor Table Entry for dsPIC33E/PIC24E and PIC32

  Summary:
    Provides C structure equivalence to each entry in the Buffer Descriptor Table (BDT).

  Description:
    Provides C structure equivalence to each entry in the Buffer Descriptor Table (BDT).

    Each Endpoint has four entries in the Buffer Descriptor Table (BDT), in the following order:
<pre><c>
        EndPoint Receive Even
        EndPoint Receive Odd
        EndPoint Transmit Even
        EndPoint Transmit Odd </code>
</c></pre>
    The Buffer Descriptor Table (BDT) is build by
  <code>
    //                                           (Even,Odd) or (Ping,Pong)
    //                                               (Rx,Tx) |
    //                             (EP0     to      EPn)  |  |
    volatile USB_BDT_ENTRY USB_BDT[(USB_MAX_EP_USED + 1)][2][2] __attribute__ (( aligned (512) ));
  </code>
    Where <c>USB_MAX_EP_USED</c> is #define'd in a configuration header.
*/

typedef union /*DOM-IGNORE-BEGIN*/__attribute__ ((packed))/*DOM-IGNORE-END*/ USB_BDT_ENTRY_TAG
{
    struct /*DOM-IGNORE-BEGIN*/__attribute__ ((packed))/*DOM-IGNORE-END*/
    {
        USB_BD_STATUS  bufferStatus;  //Buffer Status
        uint16_t       byteCount:10;  //Byte Count
        uint8_t                 : 6;  // reserved
        uint32_t       bufferAddress; // Buffer Address, points to buffer in Data Ram or Flash
    };
    uint64_t          dlValue;        //Double Long Integer Value
    uint32_t           lValue[2];     //Long  Integer Values
    uint16_t           sValue[4];     //Short Integer Values
} BDT_ENTRY;


// *****************************************************************************
/* Pointer to Buffer Descriptor Table Entry

  Summary:
    Pointer to BDT Entry.

  Description:
    Pointer to BDT Entry.

  Remarks:
    None.
*/

typedef union USB_BDT_ENTRY_TAG * pUSB_BDT_ENTRY;

PLIB_TEMPLATE uint8_t USB_BDTIndexGet
( 
    USB_PING_PONG_MODE ppMode,
    uint8_t epValue,
    USB_BUFFER_DIRECTION bufferDirection,
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    return epValue*4 + bufferDirection*2 + bufferPingPong;
}

//******************************************************************************
/* Function :  USB_BufferIndexGet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferIndexGet

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferIndexGet
    function.
*/

PLIB_TEMPLATE uint8_t USB_BufferIndexGet_PIC32
( 
    USB_MODULE_ID index , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    return epValue*4 + bufferDirection*2 + bufferPingPong;
}

//******************************************************************************
/* Function :  USB_BufferAddressGet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferAddressGet

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferAddressGet
    function.
*/

PLIB_TEMPLATE void* USB_BufferAddressGet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    return (void *)ConvertToVirtualAddress(pBDTEntry -> bufferAddress );

}


//******************************************************************************
/* Function :  USB_BufferAddressSet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferAddressSet

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferAddressSet
    function.
*/

PLIB_TEMPLATE void USB_BufferAddressSet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong , 
    void* bufferAddress 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferAddress = ConvertToPhysicalAddress((uint8_t*)bufferAddress);
}


//******************************************************************************
/* Function :  USB_BufferByteCountGet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferByteCountGet

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferByteCountGet function.
*/

PLIB_TEMPLATE uint16_t USB_BufferByteCountGet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    return ( pBDTEntry -> byteCount );
}


//******************************************************************************
/* Function :  USB_BufferByteCountSet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferByteCountSet

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferByteCountSet function.
*/

PLIB_TEMPLATE void USB_BufferByteCountSet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong , 
    uint16_t bufferByteCount 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> byteCount = bufferByteCount;
}


//******************************************************************************
/* Function :  USB_BufferClearAll_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferClearAll

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferClearAll
    function.
*/

PLIB_TEMPLATE void USB_BufferClearAll_PIC32
(
    USB_MODULE_ID index, 
    void * pBDT,
    USB_PING_PONG_MODE ppMode,
    uint8_t epValue,
    USB_BUFFER_DIRECTION bufferDirection,
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry;
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet(ppMode, epValue, bufferDirection, bufferPingPong);
    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;
    pBDTEntry->lValue[0] = 0ul;
    pBDTEntry->lValue[1] = 0ul;
}


//******************************************************************************
/* Function :  USB_BufferDataToggleGet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferDataToggleGet

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferDataToggleGet function.
*/

PLIB_TEMPLATE USB_BUFFER_DATA01 USB_BufferDataToggleGet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    return (USB_BUFFER_DATA01)( pBDTEntry -> bufferStatus.dataToggle );
}


//******************************************************************************
/* Function :  USB_BufferDataToggleSelect_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferDataToggleSelect

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferDataToggleSelect function.
*/

PLIB_TEMPLATE void USB_BufferDataToggleSelect_PIC32
(
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong , 
    USB_BUFFER_DATA01 bufferData01 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.dataToggle = bufferData01;
}


//******************************************************************************
/* Function :  USB_BufferDataToggleSyncDisable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferDataToggleSyncDisable

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferDataToggleSyncDisable function.
*/

PLIB_TEMPLATE void USB_BufferDataToggleSyncDisable_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.dataToggleSyncEnable = 0;
}


//******************************************************************************
/* Function :  USB_BufferDataToggleSyncEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferDataToggleSyncEnable

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferDataToggleSyncEnable function.
*/

PLIB_TEMPLATE void USB_BufferDataToggleSyncEnable_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.dataToggleSyncEnable = 1;
}


//******************************************************************************
/* Function :  USB_BufferPIDBitsClear_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferPIDBitsClear

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferPIDBitsClear function.
*/

PLIB_TEMPLATE void USB_BufferPIDBitsClear_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.packetID = 0;
}

//******************************************************************************
/* Function :  USB_BufferPIDGet_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferPIDGet

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferPIDGet
    function.
*/

PLIB_TEMPLATE uint8_t USB_BufferPIDGet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    return ( pBDTEntry -> bufferStatus.packetID );
}


//******************************************************************************
/* Function :  USB_BufferReleasedToSW_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferReleasedToSW

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferReleasedToSW function.
*/

PLIB_TEMPLATE bool USB_BufferReleasedToSW_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    bool result = false; 
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;
    
    if (!(pBDTEntry->bufferStatus.usbOwnsBuffer))
    {
        /* This indicates that the UOWN bit is Zero, so CPU owns the buffer. 
		   Return true */
        result = true;
    }
    return (result);
}


//******************************************************************************
/* Function :  USB_BufferReleaseToUSB_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferReleaseToUSB

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferReleaseToUSB function.
*/

PLIB_TEMPLATE void USB_BufferReleaseToUSB_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.usbOwnsBuffer = 1;

}

//******************************************************************************
/* Function :  USB_BufferSchedule_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferSchedule

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferSchedule
    function.
*/


PLIB_TEMPLATE void USB_BufferSchedule_PIC32
( 
    USB_MODULE_ID  index ,
    void*  pBDT ,
    USB_PING_PONG_MODE  ppMode ,
    uint8_t  epValue ,
    USB_BUFFER_DIRECTION  bufferDirection ,
    USB_BUFFER_PING_PONG  bufferPingPong ,
    void * bufferAddress ,
    int16_t bufferByteCount ,
    USB_BUFFER_SCHEDULE_DATA01 bufferData01 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.packetID = 0;             // Clear PID overlap bits
    pBDTEntry -> bufferStatus.dataToggleSyncEnable = 1; // Re-enable DTS

    if ( bufferData01 != USB_BUFFER_DONTCHANGE )
    {
        pBDTEntry -> bufferStatus.dataToggle = bufferData01;
    }

    pBDTEntry -> bufferAddress = ConvertToPhysicalAddress((uint8_t*)bufferAddress);
    pBDTEntry -> byteCount = bufferByteCount;
    PLIB_ASSERT( pBDTEntry -> bufferStatus.usbOwnsBuffer == 0, "Buffer already in use" );
    pBDTEntry -> bufferStatus.usbOwnsBuffer = 1;

}

//******************************************************************************
/* Function :  USB_BufferCancelReleaseToUSB_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferCancelReleaseToUSB

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferCancelReleaseToUSB function.
*/

PLIB_TEMPLATE void USB_BufferCancelReleaseToUSB_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    pBDTEntry -> bufferStatus.usbOwnsBuffer = 0;

}

//******************************************************************************
/* Function :  USB_BufferAllCancelReleaseToUSB_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferAllCancelReleaseToUSB

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferAllCancelReleaseToUSB function.
*/

PLIB_TEMPLATE void USB_BufferAllCancelReleaseToUSB_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    int nEndpoint 
)
{
    int iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry = (pUSB_BDT_ENTRY) pBDT ;

    for(iBDTEntry = 0; iBDTEntry < (nEndpoint * 4); iBDTEntry ++)
    {
        pBDTEntry -> bufferStatus.usbOwnsBuffer = 0;
        pBDTEntry += 1;
    }
}
//******************************************************************************
/* Function :  USB_BufferEP0RxStatusInitialize_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferEP0RxStatusInitialize

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferEP0RxStatusInitialize function.
*/


PLIB_TEMPLATE void USB_BufferEP0RxStatusInitialize_PIC32 
( 
    USB_MODULE_ID index,
    void* pBDT,
    USB_PING_PONG_MODE ppMode,
    USB_BUFFER_PING_PONG pingpong,
    uint16_t bufferByteCount 
)
{
    short iBDTEntry;
    pUSB_BDT_ENTRY pBDTEntry = (pUSB_BDT_ENTRY) pBDT;
    iBDTEntry = USB_BDTIndexGet( ppMode, 0, USB_BUFFER_RX, pingpong );
    pBDTEntry += iBDTEntry;

    pBDTEntry->lValue[0] = 0;
    pBDTEntry->byteCount = bufferByteCount;
    pBDTEntry->bufferStatus.usbOwnsBuffer = 1;

}

PLIB_TEMPLATE void USB_BufferClearAllDTSEnable_PIC32
(
    USB_MODULE_ID index,
    void * pBDT,
    USB_PING_PONG_MODE ppMode,
    uint8_t epValue,
    USB_BUFFER_DIRECTION bufferDirection
)
{

    short iBDTEntry, i; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, USB_BUFFER_EVEN );

    /* This is the even BD for the specified direction */
    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    for (i = 0; i < 2; i ++)
    {
        pBDTEntry -> lValue[0] = 0;
        pBDTEntry -> lValue[1] = 0;
        pBDTEntry -> bufferStatus.dataToggleSyncEnable = 1;
    
        /* Increment to point to odd BD for this endpoint */

        pBDTEntry ++; 
    }

}

//******************************************************************************
/* Function :  USB_BufferStallDisable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferStallDisable

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_BufferStallDisable function.
*/

PLIB_TEMPLATE void USB_BufferStallDisable_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    if(pBDTEntry->bufferStatus.stallEnable)
    {
        pBDTEntry -> bufferStatus.usbOwnsBuffer = 0;
        pBDTEntry -> bufferStatus.stallEnable = 0;
    }
}


//******************************************************************************
/* Function :  USB_BufferStallEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferStallEnable

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferStallEnable
    function.
*/

PLIB_TEMPLATE void USB_BufferStallEnable_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;
    
    pBDTEntry -> bufferStatus.usbOwnsBuffer = 0;
    pBDTEntry -> bufferStatus.stallEnable = 1;
    pBDTEntry -> bufferStatus.usbOwnsBuffer = 1;
}


//******************************************************************************
/* Function :  USB_BufferStallEnable_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_BufferStallGet

  Description:
    This template implements the PIC32 variant of the PLIB_USB_BufferStallGet
    function.
*/

PLIB_TEMPLATE bool USB_BufferStallGet_PIC32
( 
    USB_MODULE_ID index , 
    void* pBDT , 
    USB_PING_PONG_MODE ppMode , 
    uint8_t epValue , 
    USB_BUFFER_DIRECTION bufferDirection , 
    USB_BUFFER_PING_PONG  bufferPingPong 
)
{
    short iBDTEntry; // Index of BDT entry
    pUSB_BDT_ENTRY pBDTEntry;

    iBDTEntry = USB_BDTIndexGet( ppMode, epValue, bufferDirection, bufferPingPong );

    pBDTEntry = (pUSB_BDT_ENTRY)pBDT + iBDTEntry;

    return ( pBDTEntry -> bufferStatus.stallEnable );
}


//******************************************************************************
/* Function :  USB_ExistsBDTFunctions_PIC32

  Summary:
    Implements PIC32 variant of PLIB_USB_ExistsBDTFunctions

  Description:
    This template implements the PIC32 variant of the
    PLIB_USB_ExistsBDTFunctions function.
*/

#define PLIB_USB_ExistsBDTFunctions PLIB_USB_ExistsBDTFunctions
PLIB_TEMPLATE bool USB_ExistsBDTFunctions_PIC32( USB_MODULE_ID index )
{
    return true;
}

#endif /*_USB_BDTFUNCTIONS_PIC32_H*/

/******************************************************************************
 End of File
*/

