/*******************************************************************************
  USB Device Layer local Header File

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device_local.h

  Summary:
    USB device layer local header file.

  Description:
    This header file contains private data types required for usb_device_layer.c.
    This header file must not be included in the application.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
//DOM-IGNORE-END

#ifndef _USB_DEVICE_LOCAL_H
#define _USB_DEVICE_LOCAL_H


// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// ***************************************************************************** /


#include "usb/usb_device.h"
#include "osal/osal.h"

// *****************************************************************************
/* USB Device Layer Get Status Request Response.

  Summary:
    This is the USB Device Get Status Request Response.

  Description:
    When the USB Device Layer gets a Get Status Request from the host, it
    responds with this data structure.

  Remarks:
    None.
*/

typedef union
{
    struct{
       
        /* Self powered */
        unsigned selfPowered:1;
        /* Remote wake up */
        unsigned remoteWakeup:1;
         /* Reserved bits */
        unsigned :6;
        unsigned :8 ;
    };

    struct{
        
        /* Endpoint halt */
        unsigned endPointHalt:1;
        /*Reserved bits */
        unsigned :7;
        /* Reserved bits */
        unsigned :8;
    };

    uint16_t status;

} USB_DEVICE_STATUS_RESPONSE;

// *****************************************************************************
/* USB Device Layer Control Transfer Structure

  Summary:
    This is the USB Device Layer Control Transfer Structure

  Description:
    This is the USB Device Layer Control Transfer Structure. It tracks the
    progress of the control transfer and allows the device layer or the
    application to handle the control transfer.

  Remarks:
    None.
*/

typedef struct 
{
    /* Control transfer state */
    bool  inProgress;
    uint8_t rxDataCount;
    uint8_t expectedRxDataCount;
    SYS_MODULE_INDEX handlerIndex;
    uint8_t * rxBuffer;

    /* Temporary pointer to function driver provided control transfer function.
       The setup packet will be forwarded to this function driver provided control
       transfer function */ 

    void (* handler)
    (   
         SYS_MODULE_INDEX handlerIndex,
         USB_DEVICE_EVENT controlTransferState,
         void * eventData
    );

} USB_DEVICE_CONTROL_TRANSFER_STRUCT;


// *****************************************************************************
/* USB Device Layer Task States

  Summary:
    USB Device Layer Task States.

  Description:
    This enumeration defines the possible USB Device Layer Task States

  Remarks:
    None.
*/

typedef enum
{
    /* USB Device Layer is trying to open the USBCD */
    USB_DEVICE_TASK_STATE_OPENING_USBCD,

    /* USB Device Layer is running the main task */
    USB_DEVICE_TASK_STATE_RUNNING    

} USB_DEVICE_TASK_STATE;

// *****************************************************************************
/* USB Device Layer Status structure

  Summary:
    A structure with usb device layer status and states.

  Description:
    This is a structure with usb device layer status and states.

  Remarks:
    None.
*/

typedef union
{
    struct
    {
        USB_DEVICE_POWER_STATE powerState:1;
        USB_SPEED usbSpeed:3;
        USB_SPEED usbConfiguredSpeed:3;
        bool setAddressPending:1;
        bool testModePending:1;
        bool remoteWakeupStatus:1;
        bool isSuspended:1;
        uint8_t testSelector;
        USB_DEVICE_STATE usbDeviceState:3;
        USB_DEVICE_STATE usbDevStatePriorSuspend:3;
        unsigned :10;
    };
} USB_DEVICE_STATUS;

// *****************************************************************************
/* USB Device Layer Endpoint Queue Size structure

  Summary:
    A structure with usb device layer Endpoint queue sizes

  Description:
    This structure is used to maintain queue size for endpoint read and write
    functions.

  Remarks:
    None.
*/
typedef struct
{
    /* Maxiumum Queue size for Endpoint Read. This queue size is applicable to
       all vendor Endpoints  */
    uint16_t qSizeMaxEpRead;

    /* Maximum Queue size for Endpoint Write. This queue size is applicable to
       all vendor Endpoints  */
    uint16_t qSizeMaxEpWrite;

    /* Current Queue size for Endpoint Write. This queue size is applicable to
       all vendor Endpoints  */
    uint16_t qSizeCurrentEpRead;

    /* Current Queue size for Endpoint Write. This queue size is applicable to
       all vendor Endpoints  */
    uint16_t qSizeCurrentEpWrite;

} USB_DEVICE_Q_SIZE_ENDPOINT;

// *****************************************************************************
/* USB Device Layer Instance Structure

  Summary:
    USB Device Layer Instance Structure.

  Description:
    This is the USB Device Layer Instance data structure.

  Remarks:
    None.
*/

typedef struct 
{
    /* USB device status of this instance */ 
    USB_DEVICE_STATUS usbDeviceStatusStruct;

    /* State of this instance */
    SYS_STATUS usbDeviceInstanceState;

    /* Pointer to master descriptor table */
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable;

    /* Number of function driver instances registered */
    uint16_t registeredFuncDriverCount;

     /* Function table registered to this instance of the USB device layer */
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * registeredFuncDrivers;

     /* This instance index */
    SYS_MODULE_INDEX usbDevLayerIndex;
    
    /* USB Controller driver handle */
    DRV_HANDLE usbCDHandle;

    /* USB Controller Driver System Module Object */
    SYS_MODULE_OBJ usbCDSystemModuleObject;
   
    /* EP0 rx buffer*/
    uint8_t ep0RxBuffer[USB_DEVICE_EP0_BUFFER_SIZE];

    /* Tx IRP */
    USB_DEVICE_IRP irpEp0Tx;

    /* Rx IRP */
    USB_DEVICE_IRP irpEp0Rx;

    /* Device address */
    uint8_t deviceAddress;

    /* Current active configuration */
    uint8_t activeConfiguration;

    /* Maximum configurations available for the selected speed*/
    uint8_t maxConfigs;

    /* Pointer to configuration descriptor group for the selected speed*/
    USB_DEVICE_CONFIGURATION_DESCRIPTORS_TABLE * configDescriptorsPtr;

    /* Pointer to active host selected descriptor */
    uint8_t * pActiveConfigDesc;

    /* Currently active events */
    USB_DEVICE_EVENT event;

    /* The two bytes that we are going to reply with for
       standard GET_STATUS request */
    USB_DEVICE_STATUS_RESPONSE getStatusResponse;

    /* Remote wakeup status as set by the host */
    USB_DEVICE_REMOTE_WAKEUP_STATUS remoteWakeupStatus;

    /* Control transfer related structure */
    USB_DEVICE_CONTROL_TRANSFER_STRUCT controlTransfer;

    /* Device Layer Tasks routine state */
    USB_DEVICE_TASK_STATE taskState;

    /* Client status */
    USB_DEVICE_CLIENT_STATUS clientState;

    /* Set to true if this object is in use */
    bool inUse;

    /* Pointer to the USB Device event callback function */
    USB_DEVICE_EVENT_HANDLER callBackFunc;

     /* Context associated with this client */
    uintptr_t context;
	
    /* This points to the size of the current control transfer */
    uint16_t controlTransferDataStageSize;
    
    /* Set to true if all members of this structure
       have been initialized once */
    bool isMutexEndpointIrpInitialized;

    /* Mutex to protect Endpoint IRP array */
    OSAL_MUTEX_DECLARE(mutexEndpointIRP);

    /* A pointer to the driver interface */
    DRV_USB_DEVICE_INTERFACE * driverInterface;

    /* The module index of the driver to be used. */
    SYS_MODULE_INDEX driverIndex;
    
    /* EP0 tx buffer. This is for handling other speed request */ 
    _USB_DEVICE_DECLARE_EP0_BUFFER(ep0TxBuffer);
    
    /* Tx IRP for handling Other Speed request */ 
    _USB_DEVICE_DECLARE_IRP(irpEp0TxOtherSpeedDescriptor);

} USB_DEVICE_OBJ;

// *****************************************************************************
/*  USB device layer Device descriptor header

  Summary:
    USB device layer Device descriptor header

  Description:
    USB device layer Device descriptor header

  Remarks:
   None.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bLength;
    uint8_t bDescriptorType;

} USB_DEVICE_SERVICE_DESCRIPTOR_HEAD;

/*******************************************************
 * Local functions
 *******************************************************/
void  _USB_DEVICE_ControlTransferHandler
(
    SYS_MODULE_INDEX handlerIndex,
    USB_DEVICE_EVENT transferEvent,
    void * eventData
);

void _USB_DEVICE_ProcessStandardDeviceSetRequests
(
    USB_DEVICE_OBJ * usbDeviceInstance,
    USB_SETUP_PACKET * setupPkt
);

void _USB_DEVICE_ProcessStandardDeviceGetRequests
(
    USB_DEVICE_OBJ * usbDeviceInstance,
    USB_SETUP_PACKET * setupPkt 
);

void _USB_DEVICE_ProcessStandardEndpointRequest
(
    USB_DEVICE_OBJ * usbDeviceInstance,
    uint8_t interfaceNumber,
    USB_SETUP_PACKET * setupPkt
);

void _USB_DEVICE_RedirectControlXfrToClient
(
    USB_DEVICE_OBJ* usbDeviceThisInstance ,
        USB_DEVICE_EVENT event, 
    USB_SETUP_PACKET * setupPkt
);
void _USB_DEVICE_ForwardControlXfrToFunction
(
    USB_DEVICE_OBJ * usbDeviceThisInstance,
    uint8_t interfaceNumber,
    USB_SETUP_PACKET * setupPkt
);
void _USB_DEVICE_ProcessInterfaceRequests
(
    USB_DEVICE_OBJ* usbDeviceInstance ,
    USB_SETUP_PACKET * setupPkt
);

void _USB_DEVICE_EventHandler
(
    uintptr_t referenceHandle,
    DRV_USB_EVENT eventType, 
    void * eventData 
);

USB_DEVICE_OBJ* _USB_DEVICE_ClientHandleValidate
(
    USB_DEVICE_HANDLE deviceHandle
);

USB_DEVICE_FUNCTION_REGISTRATION_TABLE * _USB_DEVICE_GetFunctionDriverEntryByInterface
(
    uint8_t interfaceNumber,
    USB_DEVICE_OBJ * usbDeviceThisInstance
);

bool _USB_DEVICE_FindEndpoint( USB_DEVICE_OBJ* usbDeviceThisInstance,
                          USB_ENDPOINT endpointNumber, uint8_t* interfaceNumber);
void _USB_DEVICE_Ep0ReceiveCompleteCallback( USB_DEVICE_IRP * handle );
void _USB_DEVICE_Ep0TransmitCompleteCallback(USB_DEVICE_IRP * handle);

void _USB_DEVICE_EndpointWriteCallBack( USB_DEVICE_IRP * irp );
void _USB_DEVICE_EndpointReadCallBack( USB_DEVICE_IRP * irp );
void _USB_DEVICE_RemotewakeupTimerCallback(uintptr_t context, uint32_t currTick);
void _USB_DEVICE_Initialize_Endpoint_Q_Size(SYS_MODULE_INDEX index, uint16_t qSizeRead, uint16_t qSizeWrite );
void _USB_DEVICE_EndpointMutexCreateFunction(USB_DEVICE_OBJ* usbDeviceThisInstance);
void _USB_DEVICE_EndpointMutexDeleteFunction(USB_DEVICE_OBJ* usbDeviceThisInstance);
void _USB_DEVICE_EndpointQueueSizeReset(SYS_MODULE_INDEX index);
uint16_t _USB_DEVICE_GetStringDescriptorRequestProcess
(
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable,
    USB_SETUP_PACKET * setupPkt,
    void**  pDescriptorString
);
uint16_t _USB_DEVICE_GetStringDescriptorRequestProcessAdvanced
(
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable,
    USB_SETUP_PACKET * setupPkt,
    void**  pDescriptorString
); 
void _USB_DEVICE_Other_Speed_Descriptor_Request
(
	USB_DEVICE_OBJ * usbDeviceThisInstance, 
	USB_SETUP_PACKET * setupPkt
);
void _USB_DEVICE_DeInitializeAllFunctionDrivers
(
    USB_DEVICE_OBJ * usbDeviceThisInstance
);
#endif
