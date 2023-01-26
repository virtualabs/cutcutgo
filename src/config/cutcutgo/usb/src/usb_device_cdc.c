/*******************************************************************************
 USB CDC Class Function Driver

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device_cdc.c

  Summary:
    USB CDC class function driver.

  Description:
    USB CDC class function driver.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "usb/usb_device_cdc.h"
#include "usb/src/usb_device_cdc_local.h"
#include "usb/src/usb_external_dependencies.h"


// *****************************************************************************
// *****************************************************************************
// Section: File Scope or Global Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* CDC Device function driver structure

  Summary:
    Defines the function driver structure required for the device layer.

  Description:
    This data type defines the function driver structure required for the
    device layer.

  Remarks:
    This structure is private to the USB stack.
*/

const USB_DEVICE_FUNCTION_DRIVER cdcFunctionDriver =
{

    /* CDC init function */
    .initializeByDescriptor         = _USB_DEVICE_CDC_Initialization ,

    /* CDC de-init function */
    .deInitialize                   = _USB_DEVICE_CDC_Deinitialization ,

    /* EP0 activity callback */
    .controlTransferNotification    = _USB_DEVICE_CDC_ControlTransferHandler,

    /* CDC tasks function */
    .tasks                          = NULL,

    /* CDC Global Initialize */
    .globalInitialize = _USB_DEVICE_CDC_GlobalInitialize
};

// *****************************************************************************
/* CDC Device IRPs

  Summary:
    Array of CDC Device IRP. 

  Description:
    Array of CDC Device IRP. This array of IRP will be shared by read, write and
    notification data requests.

  Remarks:
    This array is private to the USB stack.
*/

USB_DEVICE_IRP gUSBDeviceCDCIRP[USB_DEVICE_CDC_QUEUE_DEPTH_COMBINED];


/* Create a variable for holding CDC IRP mutex Handle and status */
USB_DEVICE_CDC_COMMON_DATA_OBJ gUSBDeviceCdcCommonDataObj;
 

// *****************************************************************************
/* CDC Instance structure

  Summary:
    Defines the CDC instance(s).

  Description:
    This data type defines the CDC instance(s). The number of instances is
    defined by the application using USB_DEVICE_CDC_INSTANCES_NUMBER.

  Remarks:
    This structure is private to the CDC.
*/

USB_DEVICE_CDC_INSTANCE gUSBDeviceCDCInstance[USB_DEVICE_CDC_INSTANCES_NUMBER];

// *****************************************************************************
/* CDC Instance Serial State Response structure

  Summary:
    Defines the Serial State Response structures.

  Description:
    This data type defines the CDC Serial State Response structures. 
	The number of buffers is defined by the application using the 
	USB_DEVICE_CDC_INSTANCES_NUMBER.

  Remarks:
    This structure is private to the CDC.
*/
USB_CDC_SERIAL_STATE_RESPONSE gUSBDeviceCDCSerialStateResponse[USB_DEVICE_CDC_INSTANCES_NUMBER] USB_ALIGN;

// *****************************************************************************
// *****************************************************************************
// Section: File Scope Functions
// *****************************************************************************
// *****************************************************************************
// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_GlobalInitialize ( void )

  Summary:
    This function initializes resourses required common to all instances of CDC
    function driver.

  Description:
    This function initializes resourses common to all instances of CDC function
    driver. This function is called by the USB Device layer during Initalization.

  Remarks:
    This is local function and should not be called directly by the application.
*/
void _USB_DEVICE_CDC_GlobalInitialize (void)
{
    OSAL_RESULT osal_err;
    
    /* Create Mutex for CDC IRP objects if not created already */
    if (gUSBDeviceCdcCommonDataObj.isMutexCdcIrpInitialized == false)
    {
        /* This means that mutexes where not created. Create them. */
        osal_err = OSAL_MUTEX_Create(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);

        if(osal_err != OSAL_RESULT_TRUE)
        {
            /*do not proceed lock was not created, let user know about error*/
            return;
        }

         /* Set this flag so that global mutexes get allocated only once */
         gUSBDeviceCdcCommonDataObj.isMutexCdcIrpInitialized = true;
    }
}
// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_Initialization 
    ( 
        SYS_MODULE_INDEX iCDC ,
        DRV_HANDLE deviceHandle ,
        void* initData ,
        uint8_t infNum ,
        uint8_t altSetting ,
        uint8_t descType ,
        uint8_t * pDesc 
    )

  Summary:
    USB Device CDC function called by the device layer during Set Configuration
    processing.
  
  Description:
    USB Device CDC function called by the device layer during Set Configuration
    processing.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_Initialization 
( 
    SYS_MODULE_INDEX iCDC ,
    USB_DEVICE_HANDLE deviceHandle ,
    void* initData ,
    uint8_t infNum ,
    uint8_t altSetting ,
    uint8_t descType ,
    uint8_t * pDesc 
)
{
    /* Avoid unused warning */
    ( void ) ( altSetting );
    ( void ) ( initData );
    uint8_t epAddress;
    uint8_t epDir;
    uint16_t maxPacketSize;
    USB_DEVICE_CDC_INSTANCE * thisCDCInstance;
    USB_DEVICE_CDC_INIT * cdcInit;
    USB_ENDPOINT_DESCRIPTOR *pEPDesc;
    USB_INTERFACE_DESCRIPTOR *pInfDesc;
    USB_DEVICE_CDC_ENDPOINT * deviceCDCEndpoint;

    /* Check the validity of the function driver index */
    if (iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER)
    {
        /* Assert on invalid CDC index */
        SYS_DEBUG(0, "USB Device CDC: Invalid index");
        return;
    }

    thisCDCInstance = &gUSBDeviceCDCInstance[iCDC];


    /* Initialize the queue sizes. This code may run several times
     * but then we dont expect the queue sizes to change.*/

    cdcInit = ((USB_DEVICE_CDC_INIT *)initData);
    thisCDCInstance->queueSizeWrite = cdcInit->queueSizeWrite;
    thisCDCInstance->queueSizeRead = cdcInit->queueSizeRead;
    thisCDCInstance->queueSizeSerialStateNotification = 
    cdcInit->queueSizeSerialStateNotification;
    thisCDCInstance->currentQSizeWrite = 0;
    thisCDCInstance->currentQSizeRead = 0;
    thisCDCInstance->currentQSizeSerialStateNotification = 0;
	
	/* Initialize pointer to the Serial state notification buffer */ 
	thisCDCInstance->serialStateResponse = &gUSBDeviceCDCSerialStateResponse[iCDC]; 

    
    /* check the type of descriptor passed by device layer */
    switch ( descType )
    {
        /* Interface descriptor passed */
        case USB_DESCRIPTOR_INTERFACE:
            {
                pInfDesc = ( USB_INTERFACE_DESCRIPTOR * )pDesc;

                /* Preserve the device layer handle */
                thisCDCInstance->deviceHandle = deviceHandle;

                /* check if this is notification(communication) interface */
                if ( ( pInfDesc->bInterfaceClass == USB_CDC_COMMUNICATIONS_INTERFACE_CLASS_CODE ) &&
                        ( pInfDesc->bInterfaceSubClass == USB_CDC_SUBCLASS_ABSTRACT_CONTROL_MODEL ) )
                {
                    /* Save the notification interface number */
                    thisCDCInstance->notificationInterface.interfaceNum = infNum;
                }

                /* data interface */
                else if ( ( pInfDesc->bInterfaceClass == USB_CDC_DATA_INTERFACE_CLASS_CODE ) )
                {
                    /* save the data interface number */
                    thisCDCInstance->dataInterface.interfaceNum = infNum;
                }

                else
                {
                    /* Ignore anything else */
                    SYS_DEBUG(0, "USB Device CDC: Invalid interface presented to CDC " );
                }

                break;
            }

            /* Endpoint descriptor passed */
        case USB_DESCRIPTOR_ENDPOINT:
            {
                pEPDesc = ( USB_ENDPOINT_DESCRIPTOR* ) pDesc;

                /* Save the ep address */
                epAddress = pEPDesc->bEndpointAddress;

                /* Get the direction */
                epDir = ( epAddress & 0x80 ) ? 
                    ( USB_DEVICE_CDC_ENDPOINT_TX ) : ( USB_DEVICE_CDC_ENDPOINT_RX );

                /* Save max packet size */
                maxPacketSize = ( ( USB_ENDPOINT_DESCRIPTOR* ) pDesc )->wMaxPacketSize;

                if ( pEPDesc->transferType == USB_TRANSFER_TYPE_BULK )
                {
                    /* This is a data interface endpoint */
                    deviceCDCEndpoint = &thisCDCInstance->dataInterface.endpoint[epDir];
                }
                else if( pEPDesc->transferType == USB_TRANSFER_TYPE_INTERRUPT)
                {
                    /* This is notification endpoint */
                    deviceCDCEndpoint = &thisCDCInstance->notificationInterface.endpoint[epDir];
                }
                else
                {
                    /* We cannot support ny other type of endpoint for now */
                    SYS_DEBUG(0, "USB Device CDC: Cannot handle this endpoint type" );
                    break;
                }

                /* Save ep address to the data interface */
                deviceCDCEndpoint->address = epAddress;

                /* Save max packet size to the data interface */
                deviceCDCEndpoint->maxPacketSize = maxPacketSize;

                /* Enable the endpoint */
                USB_DEVICE_EndpointEnable ( deviceHandle ,
                        0,
                        epAddress ,
                        (USB_TRANSFER_TYPE)pEPDesc->transferType ,
                        maxPacketSize );

                /* Indicate that the endpoint is configured */
                deviceCDCEndpoint->isConfigured = true;

                break;
            }

        case USB_CDC_DESC_CS_INTERFACE:
            {
                break;
            }

        default:
            /* Unsupported descriptor type */
            break;
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_EndpointDisable
    (
        USB_DEVICE_HANDLE deviceHandle, 
        USB_DEVICE_CDC_ENDPOINT * deviceCDCEndpoint
    )

  Summary:
    Disabled USB Device CDC endpoints.
  
  Description:
    Disabled USB Device CDC endpoints.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_EndpointDisable
(
    USB_DEVICE_HANDLE deviceHandle, 
    USB_DEVICE_CDC_ENDPOINT * deviceCDCEndpoint
)
{
    if(deviceCDCEndpoint->isConfigured)
    {
        USB_DEVICE_IRPCancelAll(deviceHandle, deviceCDCEndpoint->address);
        USB_DEVICE_EndpointDisable(deviceHandle, deviceCDCEndpoint->address);
        deviceCDCEndpoint->isConfigured = false;
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_Deinitialization ( SYS_MODULE_INDEX iCDC )
 
  Summary:
    Deinitializes the function driver instance.
  
  Description:
    Deinitializes the function driver instance.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_Deinitialization ( SYS_MODULE_INDEX iCDC )
{
    /* Cancel all IRPs on the owned endpoints and then 
     * disable the endpoint */

    USB_DEVICE_HANDLE deviceHandle;
    USB_DEVICE_CDC_ENDPOINT * deviceCDCEndpoint;

    if(iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER)
    {
        SYS_DEBUG(0, "USB Device CDC: Invalid instance");
        return;
    } 

    deviceHandle = gUSBDeviceCDCInstance[iCDC].deviceHandle;

    deviceCDCEndpoint = &gUSBDeviceCDCInstance[iCDC].dataInterface.endpoint[0];
    _USB_DEVICE_CDC_EndpointDisable(deviceHandle, deviceCDCEndpoint);
    
    deviceCDCEndpoint = &gUSBDeviceCDCInstance[iCDC].dataInterface.endpoint[1];
    _USB_DEVICE_CDC_EndpointDisable(deviceHandle, deviceCDCEndpoint);
    
    deviceCDCEndpoint = &gUSBDeviceCDCInstance[iCDC].notificationInterface.endpoint[0];
    _USB_DEVICE_CDC_EndpointDisable(deviceHandle, deviceCDCEndpoint);
    
    deviceCDCEndpoint = &gUSBDeviceCDCInstance[iCDC].notificationInterface.endpoint[1];
    _USB_DEVICE_CDC_EndpointDisable(deviceHandle, deviceCDCEndpoint);

}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_ControlTransferHandler 
    (
        USB_DEVICE_CONTROL_TRANSFER_HANDLE controlTransferHandle ,
        SYS_MODULE_INDEX iCDC ,
        USB_DEVICE_EVENT controlTransferEvent,
        void * controlTransferEventData
    )
 
  Summary:
    Control Transfer Handler for class specific control transfer.
  
  Description:
    This is theControl Transfer Handler for class specific control transfer. The
    device layer calls this functions for control transfer that are targetted to
    an interface or endpoint that is owned by this function driver.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_ControlTransferHandler 
(
    SYS_MODULE_INDEX iCDC ,
    USB_DEVICE_EVENT controlTransferEvent,
    USB_SETUP_PACKET * setupRequest
)
{
    USB_DEVICE_HANDLE deviceHandle;
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;
    
    /* Check the validity of the function driver index */
    if (iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER)
    {
        /* invalid CDC index */
        SYS_DEBUG(0, "USB Device CDC: Invalid CDC index" );
        return;
    }

    /* Get a local reference */
    thisCDCDevice = &gUSBDeviceCDCInstance[iCDC];

    /* Get the Device Layer handle */
    deviceHandle = thisCDCDevice->deviceHandle;

    switch (controlTransferEvent)
    {
        /* Setup packet received */

        case USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST:

            /* This means we have a setup packet for this interface */
            
            if(!(setupRequest->bmRequestType & USB_CDC_REQUEST_CLASS_SPECIFIC))
            {
                /* This means this is not a class specific request.
                 * We stall this request */

                USB_DEVICE_ControlStatus(deviceHandle, USB_DEVICE_CONTROL_STATUS_ERROR);
            }
            else
            {
                /* Check if the requests belong to the ACM sub class */
                switch(setupRequest->bRequest)
                {
                    case USB_CDC_REQUEST_SET_LINE_CODING:
                    case USB_CDC_REQUEST_GET_LINE_CODING:
                    case USB_CDC_REQUEST_SET_CONTROL_LINE_STATE:
                    case USB_CDC_REQUEST_SEND_BREAK:
                    case USB_CDC_REQUEST_SEND_ENCAPSULATED_COMMAND:
                    case USB_CDC_REQUEST_GET_ENCAPSULATED_RESPONSE:

                        /* These are ACM requests */

                        _USB_DEVICE_CDC_ACMSetUpPacketHandler(iCDC, thisCDCDevice, 
                                setupRequest);

                        break;
                    default:
                        /* This is an un-supported request */
                        USB_DEVICE_ControlStatus(deviceHandle, USB_DEVICE_CONTROL_STATUS_ERROR);
                        break;
                }
            }

            break;

        case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

            /* A control transfer data stage is complete. Send
             * this event to application */

            if(thisCDCDevice->appEventCallBack != NULL)
            {
                thisCDCDevice->appEventCallBack(iCDC, 
                        USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED,
                        NULL, thisCDCDevice->userData );
            }

            break;

        case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT:

            /* A control transfer data stage is complete. Send
             * this event to application */

            if(thisCDCDevice->appEventCallBack != NULL)
            {
                thisCDCDevice->appEventCallBack(iCDC, 
                        USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT,
                        NULL, thisCDCDevice->userData );
            }

        default:
            break;
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_SerialStateSendIRPCallback (USB_DEVICE_IRP * irp )
 
  Summary:
    IRP call back for Serial State Send IRPs.
  
  Description:
    This is IRP call back for IRPs submitted through the
    USB_DEVICE_CDC_SerialStateSend() function.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_SerialStateSendIRPCallback (USB_DEVICE_IRP * irp )
{
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;

    /* This function is called when a CDC Write IRP has
     * terminated */
    
    USB_DEVICE_CDC_EVENT_DATA_SERIAL_STATE_NOTIFICATION_COMPLETE serialStateEventData;

    /* The user data field of the IRP contains the CDC instance
     * that submitted this IRP */
    thisCDCDevice = &gUSBDeviceCDCInstance[irp->userData];

    /* populate the event handler for this transfer */
    serialStateEventData.handle = ( USB_DEVICE_CDC_TRANSFER_HANDLE ) irp;

    /* update the size written */
    serialStateEventData.length = irp->size;
    
    /* Get transfer status */
    if ((irp->status == USB_DEVICE_IRP_STATUS_COMPLETED) 
        || (irp->status == USB_DEVICE_IRP_STATUS_COMPLETED_SHORT))
    {
        /* Transfer completed successfully */
        serialStateEventData.status = USB_DEVICE_CDC_RESULT_OK; 
    }
    else if (irp->status == USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT)
    {
        /* Transfer cancelled due to Endpoint Halt */
        serialStateEventData.status = USB_DEVICE_CDC_RESULT_ERROR_ENDPOINT_HALTED; 
    }
    else if (irp->status == USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST)
    {
        /* Transfer Cancelled by Host (Host sent a Clear feature )*/
        serialStateEventData.status = USB_DEVICE_CDC_RESULT_ERROR_TERMINATED_BY_HOST; 
    }
    else
    {
        /* Transfer was not completed successfully */
        serialStateEventData.status = USB_DEVICE_CDC_RESULT_ERROR; 
    }

    /* Reduce the queue size */

    thisCDCDevice->currentQSizeSerialStateNotification --;

    /* valid application event handler present? */
    if ( thisCDCDevice->appEventCallBack )
    {
        /* inform the application */
        thisCDCDevice->appEventCallBack ( (USB_DEVICE_CDC_INDEX)(irp->userData) , 
                   USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE ,
                   &serialStateEventData, thisCDCDevice->userData);
    }

}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_ReadIRPCallback (USB_DEVICE_IRP * irp )
 
  Summary:
    IRP call back for Data Read IRPs.
  
  Description:
    This is IRP call back for IRPs submitted through the USB_DEVICE_CDC_Read()
    function.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_ReadIRPCallback (USB_DEVICE_IRP * irp )
{
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;

    /* This function is called when a CDC Write IRP has
     * terminated */
    
    USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE readEventData;

    /* The user data field of the IRP contains the CDC instance
     * that submitted this IRP */
    thisCDCDevice = &gUSBDeviceCDCInstance[irp->userData];

    /* populate the event handler for this transfer */
    readEventData.handle = ( USB_DEVICE_CDC_TRANSFER_HANDLE ) irp;

    /* update the size written */
    readEventData.length = irp->size;
    
    /* Get transfer status */
    if ((irp->status == USB_DEVICE_IRP_STATUS_COMPLETED) 
        || (irp->status == USB_DEVICE_IRP_STATUS_COMPLETED_SHORT))
    {
        /* Transfer completed successfully */
        readEventData.status = USB_DEVICE_CDC_RESULT_OK; 
    }
    else if (irp->status == USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT)
    {
        /* Transfer cancelled due to Endpoint Halt */
        readEventData.status = USB_DEVICE_CDC_RESULT_ERROR_ENDPOINT_HALTED; 
    }
    else if (irp->status == USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST)
    {
        /* Transfer Cancelled by Host (Host sent a Clear feature )*/
        readEventData.status = USB_DEVICE_CDC_RESULT_ERROR_TERMINATED_BY_HOST; 
    }
    else
    {
        /* Transfer was not completed successfully */
        readEventData.status = USB_DEVICE_CDC_RESULT_ERROR; 
    }

    /* update the queue size */
    thisCDCDevice->currentQSizeRead --;

    /* valid application event handler present? */
    if ( thisCDCDevice->appEventCallBack )
    {
        /* inform the application */
        thisCDCDevice->appEventCallBack ( (USB_DEVICE_CDC_INDEX)(irp->userData) , 
                   USB_DEVICE_CDC_EVENT_READ_COMPLETE , 
                   &readEventData, thisCDCDevice->userData);
    }

}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_WriteIRPCallback (USB_DEVICE_IRP * irp )
 
  Summary:
    IRP call back for Data Write IRPs.
  
  Description:
    This is IRP call back for IRPs submitted through the USB_DEVICE_CDC_Write()
    function.

  Remarks:
    This is local function and should not be called directly by the application.
*/

void _USB_DEVICE_CDC_WriteIRPCallback (USB_DEVICE_IRP * irp )
{
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;

    /* This function is called when a CDC Write IRP has
     * terminated */
    
    USB_DEVICE_CDC_EVENT_DATA_WRITE_COMPLETE writeEventData;

    /* The user data field of the IRP contains the CDC instance
     * that submitted this IRP */
    thisCDCDevice = &gUSBDeviceCDCInstance[irp->userData];

    /* populate the event handler for this transfer */
    writeEventData.handle = ( USB_DEVICE_CDC_TRANSFER_HANDLE ) irp;

    /* update the size written */
    writeEventData.length = irp->size;
    
    /* Get transfer status */
    if ((irp->status == USB_DEVICE_IRP_STATUS_COMPLETED) 
        || (irp->status == USB_DEVICE_IRP_STATUS_COMPLETED_SHORT))
    {
        /* Transfer completed successfully */
        writeEventData.status = USB_DEVICE_CDC_RESULT_OK; 
    }
    else if (irp->status == USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT)
    {
        /* Transfer cancelled due to Endpoint Halt */
        writeEventData.status = USB_DEVICE_CDC_RESULT_ERROR_ENDPOINT_HALTED; 
    }
    else if (irp->status == USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST)
    {
        /* Transfer Cancelled by Host (Host sent a Clear feature )*/
        writeEventData.status = USB_DEVICE_CDC_RESULT_ERROR_TERMINATED_BY_HOST; 
    }
    else
    {
        /* Transfer was not completed successfully */
        writeEventData.status = USB_DEVICE_CDC_RESULT_ERROR; 
    }

    /* Update the queue size*/
    thisCDCDevice->currentQSizeWrite --;

    /* valid application event handler present? */
    if ( thisCDCDevice->appEventCallBack )
    {
        /* inform the application */
        thisCDCDevice->appEventCallBack ( (USB_DEVICE_CDC_INDEX)(irp->userData) , 
                   USB_DEVICE_CDC_EVENT_WRITE_COMPLETE , 
                   &writeEventData, thisCDCDevice->userData);
    }

}

// *****************************************************************************
// *****************************************************************************
// Section: CDC Interface Function Definitions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
/* Function:
    USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_Read 
    (
        USB_DEVICE_CDC_INDEX instance, 
        USB_CDC_DEVICE_TRANSFER_HANDLE * transferHandle,
        void * data, 
        size_t size
    );

  Summary:
    This function requests a data read from the USB Device CDC Function Driver 
    Layer.

  Description:
    This function requests a data read from the USB Device CDC Function Driver
    Layer. The function places a requests with driver, the request will get
    serviced as data is made available by the USB Host. A handle to the request
    is returned in the transferHandle parameter. The termination of the request
    is indicated by the USB_DEVICE_CDC_EVENT_READ_COMPLETE event. The amount of
    data read and the transfer handle associated with the request is returned
    along with the event in the pData parameter of the event handler. The
    transfer handle expires when event handler for the
    USB_DEVICE_CDC_EVENT_READ_COMPLETE exits. If the read request could not be
    accepted, the function returns an error code and transferHandle will contain
    the value USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.

    If the size parameter is not a multiple of maxPacketSize or is 0, the
    function returns USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID in transferHandle
    and returns an error code as a return value. If the size parameter is a
    multiple of maxPacketSize and the host send less than maxPacketSize data in
    any transaction, the transfer completes and the function driver will issue a
    USB_DEVICE_CDC_EVENT_READ_COMPLETE event along with the
    USB_DEVICE_CDC_EVENT_READ_COMPLETE_DATA data structure. If the size
    parameter is a multiple of maxPacketSize and the host sends maxPacketSize
    amount of data, and total data received does not exceed size, then the
    function driver will wait for the next packet. 
  
  Remarks:
    Refer to usb_device_cdc.h for usage information.
*/   

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_Read 
(
    USB_DEVICE_CDC_INDEX iCDC ,
    USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle ,
    void * data , size_t size
)
{
    unsigned int cnt;
    unsigned int remainder;
    USB_DEVICE_IRP * irp;
    USB_DEVICE_CDC_ENDPOINT * endpoint;
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;
    OSAL_RESULT osalError;
    USB_ERROR irpError;
    OSAL_CRITSECT_DATA_TYPE IntState;

    /* Check the validity of the function driver index */
    
    if (  iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER  )
    {
        /* Invalid CDC index */
        SYS_ASSERT(false, "Invalid CDC Device Index");
        return USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID;
    }

    thisCDCDevice = &gUSBDeviceCDCInstance[iCDC];
    endpoint = &thisCDCDevice->dataInterface.endpoint[USB_DEVICE_CDC_ENDPOINT_RX];
    *transferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;

    /* Check if the endpoint is configured */
    if(!(endpoint->isConfigured))
    {
        /* This means that the endpoint is not configured yet */
        SYS_ASSERT(false, "Endpoint not configured");
        return (USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED);
    }

    /* For read the size should be a multiple of endpoint size*/
    remainder = size % endpoint->maxPacketSize;

    if((size == 0) || (remainder != 0))
    {
        /* Size is not valid */
        SYS_ASSERT(false, "Invalid size in IRP read");
        return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_SIZE_INVALID);
    }

    /* Make sure that we are with in the queue size for this instance */
    if(thisCDCDevice->currentQSizeRead >= thisCDCDevice->queueSizeRead)
    {
        SYS_ASSERT(false, "Read Queue is full");
        return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL);
    }

    /*Obtain mutex to get access to a shared resource, check return value*/
    osalError = OSAL_MUTEX_Lock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP, OSAL_WAIT_FOREVER);
    if(osalError != OSAL_RESULT_TRUE)
    {
      /*Do not proceed lock was not obtained, or error occurred, let user know about error*/
      return (USB_DEVICE_CDC_RESULT_ERROR);
    }

    /* Loop and find a free IRP in the Q */
    for ( cnt = 0; cnt < USB_DEVICE_CDC_QUEUE_DEPTH_COMBINED; cnt ++ )
    {
        if(gUSBDeviceCDCIRP[cnt].status <
                (USB_DEVICE_IRP_STATUS)USB_DEVICE_IRP_FLAG_DATA_PENDING)
        {
            /* This means the IRP is free. Configure the IRP
             * update the current queue size and then submit */

            irp = &gUSBDeviceCDCIRP[cnt];
            irp->data = data;
            irp->size = size;
            irp->userData = (uintptr_t) iCDC;
            irp->callback = _USB_DEVICE_CDC_ReadIRPCallback;
            
            /* Prevent other tasks pre-empting this sequence of code */ 
            IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
            /* Update the read queue size */ 
            thisCDCDevice->currentQSizeRead++;
            OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);
            
            *transferHandle = (USB_DEVICE_CDC_TRANSFER_HANDLE)irp;
            irpError = USB_DEVICE_IRPSubmit(thisCDCDevice->deviceHandle,
                    endpoint->address, irp);

            /* If IRP Submit function returned any error, then invalidate the
               Transfer handle.  */
            if (irpError != USB_ERROR_NONE )
            {
                /* Prevent other tasks pre-empting this sequence of code */ 
                IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
                /* Update the read queue size */ 
                thisCDCDevice->currentQSizeRead--;
                OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);
                *transferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
            }
            
            /*Release mutex, done with shared resource*/
            osalError = OSAL_MUTEX_Unlock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);
            if(osalError != OSAL_RESULT_TRUE)
            {
                /*Do not proceed unlock was not complete, or error occurred, let user know about error*/
                return (USB_DEVICE_CDC_RESULT_ERROR);
            }
            
            return((USB_DEVICE_CDC_RESULT)irpError);
        }
    }
    
    /*Release mutex, done with shared resource*/
    osalError = OSAL_MUTEX_Unlock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);
    if(osalError != OSAL_RESULT_TRUE)
    {
        /*Do not proceed unlock was not complete, or error occurred, let user know about error*/
        return (USB_DEVICE_CDC_RESULT_ERROR);
    }
    /* If here means we could not find a spare IRP */
    return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL);
}

// *****************************************************************************
/* Function:
    USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_Write 
    (   
        USB_DEVICE_CDC_INDEX instance, 
        USB_CDC_DEVICE_TRANSFER_HANDLE * transferHandle, 
        const void * data, 
        size_t size, 
        USB_DEVICE_CDC_TRANSFER_FLAGS flags 
    );

  Summary:
    This function requests a data write to the USB Device CDC Function Driver 
    Layer.

  Description:
    This function requests a data write to the USB Device CDC Function Driver
    Layer. The function places a requests with driver, the request will get
    serviced as data is requested by the USB Host. A handle to the request is
    returned in the transferHandle parameter. The termination of the request is
    indicated by the USB_DEVICE_CDC_EVENT_WRITE_COMPLETE event. The amount of
    data written and the transfer handle associated with the request is returned
    along with the event in writeCompleteData member of the pData parameter in
    the event handler. The transfer handle expires when event handler for the
    USB_DEVICE_CDC_EVENT_WRITE_COMPLETE exits.  If the read request could not be
    accepted, the function returns an error code and transferHandle will contain
    the value USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.

  Remarks:
    Refer to usb_device_cdc.h for usage information.
*/

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_Write 
(
    USB_DEVICE_CDC_INDEX iCDC ,
    USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle ,
    const void * data , size_t size ,
    USB_DEVICE_CDC_TRANSFER_FLAGS flags 
)
{
    unsigned int cnt;
    unsigned int remainder;
    USB_DEVICE_IRP * irp;
    USB_DEVICE_IRP_FLAG irpFlag = USB_DEVICE_IRP_FLAG_NONE;
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;
    USB_DEVICE_CDC_ENDPOINT * endpoint;
    OSAL_RESULT osalError;
    USB_ERROR irpError; 
    OSAL_CRITSECT_DATA_TYPE IntState;

    /* Check the validity of the function driver index */
    
    if (  iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER  )
    {
        /* Invalid CDC index */
        SYS_ASSERT(false, "Invalid CDC Device Index");
        return USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID;
    }

    /* Initialize the transfer handle, get the instance object
     * and the transmit endpoint */

    * transferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
    thisCDCDevice = &gUSBDeviceCDCInstance[iCDC];
    endpoint = &thisCDCDevice->dataInterface.endpoint[USB_DEVICE_CDC_ENDPOINT_TX];

    if(!(endpoint->isConfigured))
    {
        /* This means that the endpoint is not configured yet */
        SYS_ASSERT(false, "Endpoint not configured");
        return (USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED);
    }

    if(size == 0) 
    {
        /* Size cannot be zero */
        return (USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_SIZE_INVALID);
    }

    /* Check the flag */

    if(flags & USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING)
    {
        if(size < endpoint->maxPacketSize)
        {
            /* For a data pending flag, we must atleast get max packet
             * size worth data */

            return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_SIZE_INVALID);
        }

        remainder = size % endpoint->maxPacketSize;
        
        if(remainder != 0)
        {
            size -= remainder;
        }

        irpFlag = USB_DEVICE_IRP_FLAG_DATA_PENDING;
    }
    else if(flags & USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE)
    {
        irpFlag = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    }

    if(thisCDCDevice->currentQSizeWrite >= thisCDCDevice->queueSizeWrite)
    {
        SYS_ASSERT(false, "Write Queue is full");
        return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL);
    }

    /*Obtain mutex to get access to a shared resource, check return value*/
    osalError = OSAL_MUTEX_Lock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP, OSAL_WAIT_FOREVER);
    if(osalError != OSAL_RESULT_TRUE)
    {
      /*Do not proceed lock was not obtained, or error occurred, let user know about error*/
      return (USB_DEVICE_CDC_RESULT_ERROR);
    }

    /* loop and find a free IRP in the Q */
    for ( cnt = 0; cnt < USB_DEVICE_CDC_QUEUE_DEPTH_COMBINED; cnt ++ )
    {
        if(gUSBDeviceCDCIRP[cnt].status <
                (USB_DEVICE_IRP_STATUS)USB_DEVICE_IRP_FLAG_DATA_PENDING)
        {
            /* This means the IRP is free */

            irp         = &gUSBDeviceCDCIRP[cnt];
            irp->data   = (void *)data;
            irp->size   = size;

            irp->userData   = (uintptr_t) iCDC;
            irp->callback   = _USB_DEVICE_CDC_WriteIRPCallback;
            irp->flags      = irpFlag;

            /* Prevent other tasks pre-empting this sequence of code */ 
            IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
            /* Update the Write queue size */ 
            thisCDCDevice->currentQSizeWrite++;
            OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);
            
            *transferHandle = (USB_DEVICE_CDC_TRANSFER_HANDLE)irp;

            irpError = USB_DEVICE_IRPSubmit(thisCDCDevice->deviceHandle,
                    endpoint->address, irp);

            /* If IRP Submit function returned any error, then invalidate the
               Transfer handle.  */
            if (irpError != USB_ERROR_NONE )
            {
                /* Prevent other tasks pre-empting this sequence of code */ 
                IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
                /* Update the Write queue size */ 
                thisCDCDevice->currentQSizeWrite--;
                OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);
                *transferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
            }
            /*Release mutex, done with shared resource*/
            osalError = OSAL_MUTEX_Unlock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);
            if(osalError != OSAL_RESULT_TRUE)
            {
                /*Do not proceed unlock was not complete, or error occurred, let user know about error*/
                return (USB_DEVICE_CDC_RESULT_ERROR);
            }

            return((USB_DEVICE_CDC_RESULT)irpError);
        }
    }
    
    /*Release mutex, done with shared resource*/
    osalError = OSAL_MUTEX_Unlock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);
    if(osalError != OSAL_RESULT_TRUE)
    {
        /*Do not proceed unlock was not complete, or error occurred, let user know about error*/
        return (USB_DEVICE_CDC_RESULT_ERROR);
    }
    /* If here means we could not find a spare IRP */
    return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL);
}

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_EventHandlerSet 
(
    USB_DEVICE_CDC_INDEX iCDC ,
    USB_DEVICE_CDC_EVENT_HANDLER eventHandler,
    uintptr_t userData

)
{
    /* Check the validity of the function driver index */
    if (( iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER ) )
    {
        /* invalid CDC index */
        return USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID;
    }

    /* Check if the given event handler is valid */
    if ( eventHandler )
    {
        /* update the event handler for this instance */
        gUSBDeviceCDCInstance[iCDC].appEventCallBack = eventHandler;
        gUSBDeviceCDCInstance[iCDC].userData = userData;

        /* return success */
        return USB_DEVICE_CDC_RESULT_OK;
    }

    else
    {
        /* invalid event handler passed */
        return USB_DEVICE_CDC_RESULT_ERROR_PARAMETER_INVALID;
    }
}

uint16_t USB_DEVICE_CDC_ReadPacketSizeGet ( USB_DEVICE_CDC_INDEX iCDC )
{
    /* check the validity of the function driver index */
    if ( ( iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER ) )
    {
        /* Invalid CDC index */
        SYS_ASSERT ( false , "Invalid CDC index" );
        return (0);
    }

    /* max read packet size for this instance */
    return (gUSBDeviceCDCInstance[iCDC].dataInterface
            .endpoint[USB_DEVICE_CDC_ENDPOINT_RX].maxPacketSize );

}

// *****************************************************************************
/* Function:
    USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_EventHandlerSet 
    (
        USB_DEVICE_CDC_INDEX instance 
        USB_DEVICE_CDC_EVENT_HANDLER eventHandler 
        uintptr_t context
    );

  Summary:
    This function registers a event handler for the specified CDC function
    driver instance. 

  Description:
    This function registers a event handler for the specified CDC function
    driver instance. This function should be called by the client when it
    receives a SET CONFIGURATION event from the device layer. A event handler
    must be registered for function driver to respond to function driver
    specific commands. If the event handler is not registered, the device layer
    will stall function driver specific commands and the USB device may not
    function. 

  Remarks:
    Refer to usb_device_cdc.h for usage information.
*/


uint16_t USB_DEVICE_CDC_WritePacketSizeGet ( USB_DEVICE_CDC_INDEX iCDC )
{
    /* check the validity of the function driver index */
    if ( ( iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER ) )
    {
        /* Invalid CDC index */
        SYS_ASSERT ( false , "Invalid CDC index" );
        return (0);
    }

    /* max read packet size for this instance */
    return (gUSBDeviceCDCInstance[iCDC].dataInterface.
            endpoint[USB_DEVICE_CDC_ENDPOINT_TX].maxPacketSize );
}
// *****************************************************************************
/* Function:
    USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_SerialStateNotificationSend
    (
        USB_DEVICE_CDC_INDEX instanceIndex,
        USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle,
        USB_DEVICE_CDC_SERIAL_STATE_NOTIFICATION * notificationData
    );
    
  Summary:
    This function schedules a request to send serial state notification to the host.

  Description:
    This function places a request to send serial state notificatin data to the
    host. The function will place the request with the driver, the request will
    get serviced when the data is requested by the USB host.  A handle to the
    request is returned in the transferHandle parameter. The termination of the
    request is indicated by the
    USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE event. The amount of
    data transmitted and the transfer handle associated with the request is
    returned along with the event in the serialStateNotificationCompleteData
    member of pData paramter of the event handler. The transfer handle expires
    when the event handler for the
    USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE event exits. If the
    send request could not be accepted, the function returns an error code and
    transferHandle will contain the value
    USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.

  Remarks:
    Refer to usb_device_cdc.h for usage information.
*/

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_SerialStateNotificationSend 
(
    USB_DEVICE_CDC_INDEX iCDC ,
    USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle ,
    USB_CDC_SERIAL_STATE * notificationData 
)
{
    unsigned int cnt;
    USB_DEVICE_IRP * irp;
    USB_DEVICE_CDC_ENDPOINT * endpoint;
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice;
    OSAL_RESULT osalError;
    USB_ERROR irpError;
    OSAL_CRITSECT_DATA_TYPE IntState;
	USB_CDC_SERIAL_STATE_RESPONSE * serialStateResponse; 

    *transferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;

    /* Check the validity of the function driver index */
    
    if (  iCDC >= USB_DEVICE_CDC_INSTANCES_NUMBER  )
    {
        /* Invalid CDC index */
        SYS_ASSERT(false, "Invalid CDC Device Index");
        return USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID;
    }

    thisCDCDevice = &gUSBDeviceCDCInstance[iCDC];
    endpoint = &thisCDCDevice->notificationInterface.endpoint[USB_DEVICE_CDC_ENDPOINT_TX];
	
	serialStateResponse = thisCDCDevice->serialStateResponse; 
	
	/* Fill in the USB CDC Serial state buffer */ 
	
	/* bmRequestType = 10100001B (Direction = Device to Host, Request Type = Class, Recipient = Interface) */ 
	serialStateResponse->bmRequestType = 0xA1; 
	
	/* bRequest = SERIAL_STATE */ 
	serialStateResponse->bNotification = USB_CDC_NOTIFICATION_SERIAL_STATE; 
	
	/* wValue = Zero */ 
	serialStateResponse->wValue = 0; 
	
	/* Get the interface Number from the CDC instance */ 
	serialStateResponse->wIndex = (uint16_t)(thisCDCDevice->notificationInterface.interfaceNum); 
	
	/* Fill in the length */ 
	serialStateResponse->wLength = sizeof(USB_CDC_SERIAL_STATE);
	
	/* Copy Serial state data received from the client to the buffer */ 
	memcpy (&(serialStateResponse->stSerial), notificationData, sizeof(USB_CDC_SERIAL_STATE)); 
	

    if(!(endpoint->isConfigured))
    {
        /* This means that the endpoint is not configured yet */
        SYS_ASSERT(false, "Endpoint not configured");
        return (USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED);
    }

    if(thisCDCDevice->currentQSizeSerialStateNotification >=
            thisCDCDevice->queueSizeSerialStateNotification)
    {
        SYS_ASSERT(false, "Serial State Notification Send Queue is full");
        return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL);
    }

    /*Obtain mutex to get access to a shared resource, check return value*/
    osalError = OSAL_MUTEX_Lock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP, OSAL_WAIT_FOREVER);
    if(osalError != OSAL_RESULT_TRUE)
    {
      /*Do not proceed lock was not obtained, or error occurred, let user know about error*/
      return (USB_DEVICE_CDC_RESULT_ERROR);
    }

    /* Loop and find a free IRP in the Q */
    for ( cnt = 0; cnt < USB_DEVICE_CDC_QUEUE_DEPTH_COMBINED; cnt ++ )
    {
        if(gUSBDeviceCDCIRP[cnt].status < (USB_DEVICE_IRP_STATUS)USB_DEVICE_IRP_FLAG_DATA_PENDING)
        {
            /* This means the IRP is free */

            irp = &gUSBDeviceCDCIRP[cnt];
            irp->data = serialStateResponse;
            irp->size = sizeof(USB_CDC_SERIAL_STATE_RESPONSE);
            irp->userData = (uintptr_t) iCDC;
            irp->callback = _USB_DEVICE_CDC_SerialStateSendIRPCallback;
            irp->flags = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
            /* Prevent other tasks pre-empting this sequence of code */ 
            IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
            /* Update Serial State Notification Queue Size */ 
            thisCDCDevice->currentQSizeSerialStateNotification ++;
            OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);
            
            *transferHandle = (USB_DEVICE_CDC_TRANSFER_HANDLE) irp;
            irpError = USB_DEVICE_IRPSubmit(thisCDCDevice->deviceHandle, endpoint->address, irp);
            
            /* If IRP Submit function returned any error, then invalidate the
               Transfer handle.  */
            if (irpError != USB_ERROR_NONE )
            {
                /* Prevent other tasks pre-empting this sequence of code */ 
                IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
                /* Update Serial State Notification Queue Size */ 
                thisCDCDevice->currentQSizeSerialStateNotification --;
                OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH, IntState);
                
                *transferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
            }

            /*Release mutex, done with shared resource*/
            osalError = OSAL_MUTEX_Unlock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);
            if(osalError != OSAL_RESULT_TRUE)
            {
                /*Do not proceed unlock was not complete, or error occurred, let user know about error*/
                return (USB_DEVICE_CDC_RESULT_ERROR);
            }
            
            return((USB_DEVICE_CDC_RESULT)irpError);
        }
    }
    
    /*Release mutex, done with shared resource*/
    osalError = OSAL_MUTEX_Unlock(&gUSBDeviceCdcCommonDataObj.mutexCDCIRP);
    if(osalError != OSAL_RESULT_TRUE)
    {
        /*Do not proceed unlock was not complete, or error occurred, let user know about error*/
        return (USB_DEVICE_CDC_RESULT_ERROR);
    }
    /* If here means we could not find a spare IRP */
    return(USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL);
}

/*******************************************************************************
 End of File
 */
