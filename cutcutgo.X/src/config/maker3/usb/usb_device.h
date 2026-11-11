/*******************************************************************************
  USB Device Layer Interface Definition

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device.h

  Summary:
    USB Device Layer Interface Header

  Description:
    This header file contains the function prototypes and definitions of the
    data types and constants that make up the interface to the USB device layer.
    This application should include this file if it needs to use the USB Device
    Layer API.
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

#ifndef _USB_DEVICE_H
#define _USB_DEVICE_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>

#include "configuration.h"
#include "system/system.h"
#include "driver/driver_common.h"
#include "usb/usb_common.h"
#include "usb/usb_chapter_9.h"
#include "driver/usb/drv_usb.h"

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer Constants
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Device Layer Index Numbers

  Summary:
    USB device layer index definitions.

  Description:
    These constants provide USB device layer index definitions.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
    These values should be passed into the USB_DEVICE_Initialize and
    USB_DEVICE_Open routines to identify the device layer instance in use.
*/

#define USB_DEVICE_INDEX_0         0
#define USB_DEVICE_INDEX_1         1
#define USB_DEVICE_INDEX_2         2
#define USB_DEVICE_INDEX_3         3
#define USB_DEVICE_INDEX_4         4
#define USB_DEVICE_INDEX_5         5

// *****************************************************************************
/*  Data type for USB device handle.

  Summary:
    Data type for USB device handle.

  Description:
    The data type of the handle that is returned from USB_DEVICE_Open
    function.

  Remarks:
    None.
*/

typedef uintptr_t USB_DEVICE_HANDLE;

// *****************************************************************************
/* USB Device Layer Invalid Handle

  Summary:
    Constant that defines the value of an Invalid Device Handle.

  Description:
    This constant is returned by the USB_DEVICE_Open() function when the 
    function fails.
    
  Remarks:
    None.
*/

#define USB_DEVICE_HANDLE_INVALID /*DOM-IGNORE-BEGIN*/((USB_DEVICE_HANDLE)(-1))/*DOM-IGNORE-END*/

// *****************************************************************************
/*  Data type for USB Device Endpoint Data Transfer Handle.

  Summary:
    Data type for USB Device Endpoint Data Transfer Handle.

  Description:
    The data type of the handle that is returned by the
    USB_DEVICE_EndpointRead() and USB_DEVICE_EndpointWrite() functions.

  Remarks:
    None.
*/

typedef uintptr_t USB_DEVICE_TRANSFER_HANDLE;

// *****************************************************************************
/* USB Device Layer Invalid Endpoint Data Transfer Handle

  Summary:
    Constant that defines the value of an Invalid Device Endpoint Data Transfer
    Handle.

  Description:
    This constant defines the value that is returned by the
    USB_DEVICE_EndpointRead() and USB_DEVICE_EndpointWrite() functions, as a
    transfer handle, when the function is not successful.
    
  Remarks:
    None.
*/

#define USB_DEVICE_TRANSFER_HANDLE_INVALID /*DOM-IGNORE-BEGIN*/((USB_DEVICE_TRANSFER_HANDLE)(-1))/*DOM-IGNORE-END*/

// *****************************************************************************
/* Configuration descriptors pointer

  Summary:
    Pointer to an array that contains pointer to configuration descriptors.

  Description:
    This type defines a pointer to an array that contains pointers to
    configuration descriptors. This data type is used in
    USB_DEVICE_MASTER_DESCRIPTOR data type to point to the table of
    configuration descriptors.

  Remarks:
    This type is specific to implementation of the USB Device Stack
    API.
*/

typedef const uint8_t * const USB_DEVICE_CONFIGURATION_DESCRIPTORS_TABLE;

// *****************************************************************************
/* String Descriptors Pointer

  Summary:
    Pointer to an array that contains pointer to string descriptors.

  Description:
    This type defines a pointer to an array that contains pointers to
    string descriptors. This data type is used in
    USB_DEVICE_MASTER_DESCRIPTOR data type to point to the table of
    string descriptors.

  Remarks:
    This type is specific to implementation of the USB Device Stack
    API.
*/

typedef const uint8_t * const USB_DEVICE_STRING_DESCRIPTORS_TABLE;

// *****************************************************************************
/* Device Power state

  Summary:
    Enumerated data type that identifies if the device is self powered or
    bus powered .

  Description:
    This enumeration defines the possible power states of the device. The
    application specifies this state to  the device layer (through the
    USB_DEVICE_PowerStateSet function) to let the device layer know if this
    USB Device is presently bus or self powered.

  Remarks:
    None.
*/

typedef enum
{
    /* Device is bus powered */
    USB_DEVICE_POWER_STATE_BUS_POWERED 
            /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/,

    /* Device is self powered */
    USB_DEVICE_POWER_STATE_SELF_POWERED 
            /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/,

} USB_DEVICE_POWER_STATE;

// *****************************************************************************
/* Remote Wakeup Status

  Summary:
    Enumerated data type that identifies if the remote wakeup status of the
    device.

  Description:
    This enumeration defines the possible status of the remote wake up
    capability. These values are returned by the
    USB_DEVICE_RemoteWakeupStatusGet function.

  Remarks:
    None.
*/

typedef enum
{
    /* Remote wakeup is disabled */
    USB_DEVICE_REMOTE_WAKEUP_DISABLED
            /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/,
 
    /* Remote wakeup is enabled */
    USB_DEVICE_REMOTE_WAKEUP_ENABLED
            /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/   

} USB_DEVICE_REMOTE_WAKEUP_STATUS;

// *****************************************************************************
/* USB Device Layer Transfer Flags

  Summary:
    Enumerated data type that identifies the USB Device Layer Transfer Flags.

  Description:
    This enumeration defines the possible USB Device Layer Transfer Flags. These
    flags are specified in USB_DEVICE_EndpointWrite() function to specify the
    handling of the transfer. Please refer to the description of the
    USB_DEVICE_EndpointWrite function for examples.

  Remarks:
    None.
*/

typedef enum
{
    /* This flag indicates there is no further data to be sent in this transfer
       and that the transfer should end. If the size of the transfer is a
       multiple of the maximum packet size for related endpoint configuration,
       the device layer will send a zero length packet to indicate end of the
       transfer to the host. */

    USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE /* DOM-IGNORE-BEGIN */ = (1<<0) /* DOM-IGNORE-END */,

    /* This flag indicates there is more data to be sent in this transfer. If
       the size of the transfer is a multiple of the maximum packet size for the
       related endpoint configuration, the device layer will not send a zero
       length packet. This flags should not be specified if the size of the
       transfer is is not a multiple of the maximum packet size or if the
       transfer is less than maximum packet size. */

    USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING /* DOM-IGNORE-BEGIN */ = (1<<1) /* DOM-IGNORE-END */

} USB_DEVICE_TRANSFER_FLAGS;

// *****************************************************************************
/* USB Device Layer Client Status

  Summary:
    Enumerated data type that identifies the USB Device Layer Client Status.

  Description:
    This enumeration defines the possible status of the USB Device Layer Client.
    It is returned by the USB_DEVICE_ClientStatusGet function.

  Remarks:
    None.
*/

typedef enum
{
     /* Client is closed or the specified handle is invalid */
    USB_DEVICE_CLIENT_STATUS_CLOSED
            /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/,
 
    /* Client is ready */
    USB_DEVICE_CLIENT_STATUS_READY
            /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/   

} USB_DEVICE_CLIENT_STATUS;

// *****************************************************************************
/* USB Device Layer Events.

  Summary:
    USB Device Layer Events.

  Description:
    This enumeration lists the possible events that the device layer can
    generate. The client should register an event handler of the type
    USB_DEVICE_EVENT_HANDLER to receive device layer events. The contents of
    pData in the event handler depends on the generated event. Refer to the
    description of the event for details on data provided along with that event.
    The events generated are device layer instance specific.

    The client will receive control transfers for handling from the device
    layer, where the recipient field of the Control Transfer Setup packet is set
    to Other. The client can use the control transfer events and the Device
    Layer control transfer functions to complete such control transfers. 

    It is not mandatory for the client application to handle the control
    transfer event within the event handler. Indeed, it may be possible that the
    data stage of the control transfer requires extended processing. Because the
    event handler executes in an interrupt context, it is recommended to keep
    the processing in the event handler to a minimum. The client application can
    call the USB_DEVICE_ControlSend, USB_DEVICE_ControlReceive and
    USB_DEVICE_ControlStatus functions after returning from the event handler,
    thus deferring the control transfer event handling and responses. 

    Note that a USB host will typically wait for control transfer response for a
    finite time duration before timing out and canceling the transfer and
    associated transactions. Even when deferring response, the application must
    respond promptly if such timeouts have to be avoided. 

    The client must use the USB_DEVICE_EventHandlerSet function to register
    the event handler call back function. The following code example shows the
	handling of the USB Device Layer Events.

    <code>
    USB_DEVICE_EVENT_RESPONSE APP_USBDeviceEventHandler
    (
        USB_DEVICE_EVENT event,
        void * pData, 
        uintptr_t context
    )
    {
        uint8_t     activeConfiguration;
        uint16_t    frameNumber;
        USB_SPEED   attachSpeed;
        USB_SETUP_PACKET * setupEventData;

        // Handling of each event
        switch(event)
        {
            case USB_DEVICE_EVENT_POWER_DETECTED:
                
                // This means the device detected a valid VBUS voltage and is
                // attached to the USB. The application can now call
                // USB_DEVICE_Attach() function to enable D+/D- pull up
                // resistors. 
                break;

            case USB_DEVICE_EVENT_POWER_REMOVED:
                
                // This means the device is not attached to the USB.
                // The application should now call the USB_DEVICE_Detach()
                // function.
                break;

            case USB_DEVICE_EVENT_SUSPENDED:
                
                // The bus is idle. There was no activity detected.
                // The application can switch to a low power mode after
                // exiting the event handler.
                break;

            case USB_DEVICE_EVENT_SOF:

                // A start of frame was received. This is a periodic event and
                // can be used by the application for timing related activities.
                // pData will point to a USB_DEVICE_EVENT_DATA_SOF type data
                // containing the frame number. In USB Device Stack, this
                // event is generated if USB_DEVICE_SOF_EVENT_ENABLE is
                // defined in System Configuration.

                frameNumber = ((USB_DEVICE_EVENT_DATA_SOF *)pData)->frameNumber;
                break;

            case USB_DEVICE_EVENT_RESET :

                // Reset signaling was detected on the bus. The 
                // application can find out the attach speed.
                
                attachSpeed = USB_DEVICE_ActiveSpeedGet(usbDeviceHandle);
                break;

            case USB_DEVICE_EVENT_DECONFIGURED :
                
                // This indicates that host has deconfigured the device i.e., it
                // has set the configuration as 0. All function driver instances
                // would have been deinitialized.
                
                break;

            case USB_DEVICE_EVENT_ERROR :

                // This means an unknown error has occurred on the bus.
                // The application can try detaching and attaching the
                // device again.
                break;

            case USB_DEVICE_EVENT_CONFIGURED :

                // This means that device is configured and the application can
                // start using the device functionality. The application must
                // register function driver event handlersI have one device
                // level event.  The pData parameter will be a pointer to a
                // USB_DEVICE_EVENT_DATA_CONFIGURED data type that contains the
                // active configuration number.

                activeConfiguration = ((USB_DEVICE_EVENT_DATA_CONFIGURED *)pData)->configurationValue;
                break;
                
            case USB_DEVICE_EVENT_RESUMED:

                // This means that the resume signaling was detected on the
                // bus. The application can bring the device out of power
                // saving mode.

                break;
            
            case USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST:

                // This means that the setup stage of the control transfer is in
                // progress and a setup packet has been received. The pData
                // parameter will point to a USB_SETUP_PACKET data type The
                // application can process the command and update its control
                // transfer state machine. The application for example could call
                // the USB_DEVICE_ControlReceive function (as shown here) to
                // submit the buffer that would receive data in case of a
                // control read transfer.

                setupEventData = (USB_SETUP_PACKET *)pData;

                // Submit a buffer to receive 32 bytes in the  control write transfer.
                USB_DEVICE_ControlReceive(usbDeviceHandle, data, 32); 
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                // This means that data in the data stage of the control write
                // transfer has been received. The application can either accept
                // the received data by calling the USB_DEVICE_ControlStatus
                // function with USB_DEVICE_CONTROL_STATUS_OK flag (as shown in
                // this example) or it can reject it by calling the
                // USB_DEVICE_ControlStatus function with
                // USB_DEVICE_CONTROL_STATUS_ERROR flag. 

                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT:
                
                // This means that data in the data stage of the control
                // read transfer has been sent. 

                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED:

                // This means the host has aborted the control transfer. The
                // application can reset its control transfer state machine.
                
                break;

            case USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE:

                // This means schedule endpoint read operation has completed.
                // The application should interpret pData as a pointer to 
                // a USB_DEVICE_EVENT_DATA_ENDPOINT_READ_COMPLETE type.
                
                break;
            
            case USB_DEVICE_EVENT_ENDPOINT_WRITE_COMPLETE:

                // This means schedule endpoint write operation has completed.
                // The application should interpret pData as a pointer to 
                // a USB_DEVICE_EVENT_DATA_ENDPOINT_WRITE_COMPLETE type.
                
                break;

            case USB_DEVICE_EVENT_SET_DESCRIPTOR:
                
                // This means the Host has sent a Set Descriptor request. The
                // application should interpret pData as a
                // USB_DEVICE_EVENT_DATA_SET_DESCRIPTOR pointer type containing the
                // details of the Set Descriptor request. In USB Device
                // Stack, this event is generated if 
                // USB_DEVICE_SET_DESCRIPTOR_EVENT_ENABLE is defined in the
                // system configuration. The application can use
                // USB_DEVICE_ControlSend, USB_DEVICE_ControlReceive and/or
                // the USB_DEVICE_ControlStatus functions to complete the
                // control transfer.

                break;

            case USB_DEVICE_EVENT_SYNCH_FRAME:

                // This means the host has sent a Sync Frame Request. The
                // application should interpret pData as a
                // USB_DEVICE_EVENT_DATA_SYNCH_FRAME pointer type. In USB Device
                // Stack, this event is generated if 
                // USB_DEVICE_SYNCH_FRAME_EVENT_ENABLE is defined in the
                // system configuration. The application should respond be
                // sending the 2 byte frame number using the
                // USB_DEVICE_ControlSend function. 

                USB_DEVICE_ControlSend(usbDeviceHandle, &frameNumber, 2);
                break;

            default:
                break;
        }

        return USB_DEVICE_EVENT_RESPONSE_NONE;
    }

    </code>

  Remarks:
    Generation of some events required the definition of configuration macros.
    Refer to the event specific description for more details.
*/

typedef enum 
{
    /* USB bus reset occurred. This event is an indication to the application
       client that device layer has deinitialized all function drivers. The 
       application should not use the function drivers in this state. The
       pData parameter in the event handler function will be NULL. */

    USB_DEVICE_EVENT_RESET 
        /*DOM-IGNORE-BEGIN*/ = DRV_USB_EVENT_RESET_DETECT /*DOM-IGNORE-END*/,

    /* This event is an indication to the application client that device is
       suspended and it can put the device to sleep mode if required. Power
       saving routines should not be called in the event handler. The pData
       parameter in the event handler function will be NULL. */

    USB_DEVICE_EVENT_SUSPENDED
        /*DOM-IGNORE-BEGIN*/ = DRV_USB_EVENT_IDLE_DETECT /*DOM-IGNORE-END*/,

    /* This event indicates that device has resumed from suspended state. The
       pData parameter in the event handler function will be NULL. */

    USB_DEVICE_EVENT_RESUMED
        /*DOM-IGNORE-BEGIN*/ = DRV_USB_EVENT_RESUME_DETECT /*DOM-IGNORE-END*/,    

    /* This event is an indication to the application client that an error 
       occurred on the USB bus. The pData parameter in the event handler 
       function will be NULL. */
    
    USB_DEVICE_EVENT_ERROR
        /*DOM-IGNORE-BEGIN*/ = DRV_USB_EVENT_ERROR /*DOM-IGNORE-END*/,

    /* This event is generated at every start of frame detected on the bus.
       Application client can use this SOF event for general time based house
       keeping activities. The pData parameter in the event handler function
       will point to a USB_DEVICE_EVENT_DATA_SOF type that contains the frame
       number.*/
    
    USB_DEVICE_EVENT_SOF
        /*DOM-IGNORE-BEGIN*/ = DRV_USB_EVENT_SOF_DETECT /*DOM-IGNORE-END*/,

    /* This event indicates that device is attached to the host. The application
       can now call the USB_DEVICE_Attach function so that the host can detect
       the device. The device is yet to be enumerated and configured. The
       application should not access the function drivers at this point. The
       pData parameter in the event handler function will be NULL. */

    USB_DEVICE_EVENT_POWER_DETECTED = /*DOM-IGNORE-BEGIN*/DRV_USB_EVENT_DEVICE_SESSION_VALID/*DOM-IGNORE-END*/,
            
    /* This event is an indication to the application client that the device is
       detached from the host. The application should call the
       USB_DEVICE_Detach function to update the device USB state. The pData
       parameter in the event handler function will be NULL. */

    USB_DEVICE_EVENT_POWER_REMOVED = /*DOM-IGNORE-BEGIN*/DRV_USB_EVENT_DEVICE_SESSION_INVALID/*DOM-IGNORE-END*/,

    /* This event is an indication to the application client that device layer
       has initialized all function drivers and application can set the event
       handlers for the function drivers. The pData parameter will point to a
       USB_DEVICE_EVENT_DATA_CONFIGURED data type that contains configuration
       set by the host. */

    USB_DEVICE_EVENT_CONFIGURED,

    /* The host has deconfigured the device. This happens when the host sends a
       Set Configuration request with configuration number 0. The device layer
       will deinitialize all function drivers and then generate this event. */
       
    USB_DEVICE_EVENT_DECONFIGURED,

    /* An on-going control transfer was aborted. The application can use this
       event to reset its control transfer state machine. The pData parameter
       in the event handler function will be NULL.  */

    USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED,

   /* The data stage of a Control write transfer has completed. This event
      occurs after the application has used the USB_DEVICE_ControlReceive
      function to receive data in the control transfer. The pData parameter in
      the event handler function will be NULL.  */

    USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED,

   /* A setup packet of a control transfer has been received. The recipient
      field of the received setup packet is Other.  The application can
      initiate the data stage using the USB_DEVICE_ControlReceive and
      USB_DEVICE_ControlSend function. It can end the control transfer by
      calling the USB_DEVICE_ControlStatus function. The pData parameter in
      the event handler will point to USB_SETUP_PACKET data type.  */

    USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST,

   /* The data stage of a Control read transfer has completed. This event
      occurs after the application has used the USB_DEVICE_ControlSend
      function to send data in the control transfer. The pData parameter in the
      event handler function will be NULL. */

    USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT,

   /* This event occurs when a endpoint read transfer scheduled using the
      USB_DEVICE_EndpointRead function has completed. The pData parameter in
      the event handler function will be a pointer to a
      USB_DEVICE_EVENT_DATA_ENDPOINT_READ_COMPLETE data type. */

    USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE,

    /* This event occurs when a endpoint write transfer scheduled using the
       USB_DEVICE_EndpointWrite function has completed. The pData parameter in
       the event handler function will be a pointer to a
       USB_DEVICE_EVENT_DATA_ENDPOINT_WRITE_COMPLETE data type. */

    USB_DEVICE_EVENT_ENDPOINT_WRITE_COMPLETE,

    /* A SET_DESCRIPTOR request is received. This event occurs when Host sends a
       SET_DESCRIPTOR request. The pData parameter in the event handler function
       will be a pointer to a USB_DEVICE_EVENT_DATA_SET_DESCRIPTOR data type.
       The application should initiate the data stage using the
       USB_DEVICE_ControlReceive function. In the USB Device Stack, this
       event is generated if USB_DEVICE_EVENT_ENABLE_SET_DESCRIPTOR is defined
       in the system configuration. */

    USB_DEVICE_EVENT_SET_DESCRIPTOR,
    
   /* A SYNCH_FRAME request is received. This event occurs when Host sends a 
       SYNCH_FRAME request. The pData parameter in the event handler function
       will be a pointer to a USB_DEVICE_EVENT_DATA_SYNCH_FRAME data type. The
       application should initiate the data stage using the
       USB_DEVICE_ControlSend function. In the USB Device Stack, this
       event is generated if USB_DEVICE_EVENT_ENABLE_SYNCH_FRAME is defined in
       the system configuration. */

    USB_DEVICE_EVENT_SYNCH_FRAME,

} USB_DEVICE_EVENT;

// *****************************************************************************
/*  Control Transfer Status Stage Flags

  Summary:
    USB Device Layer Control Transfer Status Stage flags.

  Description:
    This enumeration defines the flags to be used with the
    USB_DEVICE_ControlStatus function.  

  Remarks:
    None.
*/

typedef enum 
{
    /* Using this flag acknowledges the Control transfer. A Zero Length
       Packet will be transmitted in the status stage of the control transfer.
       */

    USB_DEVICE_CONTROL_STATUS_OK,

     /* Using this flag stalls the control transfer. This flags should be used
        if the control transfer request needs to be declined. */

    USB_DEVICE_CONTROL_STATUS_ERROR

} USB_DEVICE_CONTROL_STATUS;

// *****************************************************************************
/*  USB Device Result Enumeration

  Summary:
    USB Device Layer Results Enumeration

  Description:
    This enumeration lists the possible USB Device Endpoint operation
    results. These values are returned by USB Device Endpoint functions.

  Remarks:
    None.
*/
typedef enum
{
     /* Queue is full */
    USB_DEVICE_RESULT_ERROR_TRANSFER_QUEUE_FULL
    /*DOM-IGNORE-BEGIN*/ = USB_ERROR_DEVICE_IRP_IN_USE /*DOM-IGNORE-END*/,

    /* No Error */
    USB_DEVICE_RESULT_OK
            /*DOM-IGNORE-BEGIN*/ = USB_ERROR_NONE /*DOM-IGNORE-END*/,

    /* Endpoint not configured */
    USB_DEVICE_RESULT_ERROR_ENDPOINT_NOT_CONFIGURED
            /*DOM-IGNORE-BEGIN*/ = USB_ERROR_ENDPOINT_NOT_CONFIGURED /*DOM-IGNORE-END*/,

    /* Endpoint not provisioned in the system */
    USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID
            /*DOM-IGNORE-BEGIN*/ = USB_ERROR_DEVICE_ENDPOINT_INVALID /*DOM-IGNORE-END*/,

    /* One or more parameter/s of the function is invalid */
    USB_DEVICE_RESULT_ERROR_PARAMETER_INVALID
            /*DOM-IGNORE-BEGIN*/ = USB_ERROR_PARAMETER_INVALID /*DOM-IGNORE-END*/,

    /* Device Handle passed to the function is invalid */
    USB_DEVICE_RESULT_ERROR_DEVICE_HANDLE_INVALID,
    
     /* Transfer terminated because host halted the endpoint */
    USB_DEVICE_RESULT_ERROR_ENDPOINT_HALTED
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_ENDPOINT_HALTED /* DOM-IGNORE-END */,

    /* Transfer terminated by host because of a stall clear */
    USB_DEVICE_RESULT_ERROR_TERMINATED_BY_HOST
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_TRANSFER_TERMINATED_BY_HOST /* DOM-IGNORE-END */, 

    /* An unspecified error has occurred */
    USB_DEVICE_RESULT_ERROR

} USB_DEVICE_RESULT;

// *****************************************************************************
/* Device Layer Event Handler function return type.

  Summary:
    Device Layer Event Handler function return type.

  Description:
    This data type defines the return type of the Device Layer event handler
    function.

  Remarks:
    None.
*/

typedef void USB_DEVICE_EVENT_RESPONSE;

// *****************************************************************************
/* Device Layer Event Handler Function Response Type None.

  Summary:
    Device Layer Event Handler Function Response Type.

  Description:
    This is the definition of the Device Layer Event Handler Response Type None.

  Remarks:
    Intentionally defined to be empty.
*/

#define USB_DEVICE_EVENT_RESPONSE_NONE

// *****************************************************************************
/* USB Device Layer Event Handler Function Pointer Type

  Summary:
    USB Device Layer Event Handler Function Pointer Type

  Description:
    This data type defines the required function signature of the USB Device
    Layer Event handling callback function. The application must register a
    pointer to a Device Layer Event handling function whose function signature
    (parameter and return value types) match the types specified by this
    function pointer in order to receive event call backs from the Device Layer.
    The Device Layer will invoke this function with event relevant parameters.
    The description of the event handler function parameters is given here.

    event                   - Type of event generated.
    
    pData                   - This parameter should be type cast to an event specific
                              pointer type based on the event that has occurred. Refer 
                              to the USB_DEVICE_EVENT enumeration description for
                              more details.
    
    context                 - Value identifying the context of the application that 
                              was registered along with the event handling function.

  Remarks:
    None.
*/

typedef USB_DEVICE_EVENT_RESPONSE ( * USB_DEVICE_EVENT_HANDLER) 
(
    USB_DEVICE_EVENT event, 
    void * eventData, 
    uintptr_t context
);
                                                
// *****************************************************************************
/* USB Device Master Descriptor Structure.

  Summary:
    USB Device Master Descriptor Structure.

  Description:
    This data type defines the structure of the USB Device Master Descriptor.
    The application must provide such a structure for each instance of the
    device layer.

  Remarks:
    This type is specific to implementation of the USB Device Stack
    API.
*/

typedef struct 
{
    /* Pointer to standard device descriptor (for low/full speed) */
    const USB_DEVICE_DESCRIPTOR * deviceDescriptor;

    /* Total number configurations available (for low/full speed)*/
    uint8_t configDescriptorCount;

    /* Pointer to array of configurations descriptor pointers
       (for low/full speed)*/
    USB_DEVICE_CONFIGURATION_DESCRIPTORS_TABLE * configDescriptorTable;

    /* Pointer to array of high speed standard Device descriptor.
       Assign this to NULL if not supported.*/
    const USB_DEVICE_DESCRIPTOR * highSpeedDeviceDescriptor;

    /* Total number of high speed configurations available.
       Set this to zero if not supported*/
    uint8_t  highSpeedConfigDescriptorCount;

    /* Pointer to array of high speed configurations descriptor pointers.
       Set this to NULL if not supported*/
    USB_DEVICE_CONFIGURATION_DESCRIPTORS_TABLE * highSpeedConfigDescriptorTable;

    /* Total number of string descriptors available (common to all speeds)*/
    uint8_t stringDescCount;

    /* Pointer to array of string Descriptor pointers (common to all speeds)*/
    USB_DEVICE_STRING_DESCRIPTORS_TABLE * stringDescriptorTable;

    /* Pointer to full speed device_qualifier descriptor. Device responds
       with this descriptor when it is operating at high speed */
    const USB_DEVICE_QUALIFIER * fullSpeedDeviceQualifier;

    /* Pointer to high speed device_qualifier descriptor. 
       Device responds with this descriptor when it is 
       operating at full speed */ 
    const USB_DEVICE_QUALIFIER * highSpeedDeviceQualifier;

    /* Pointer to BOS descriptor for this Device. Device responds
       with this descriptor when Host sends a GET_DESCRIPTOR request for BOS
       descriptor */
    const uint8_t * bosDescriptor;

} USB_DEVICE_MASTER_DESCRIPTOR;

// *****************************************************************************
/* USB Device Function Registration Structure

  Summary:
    USB Device Function Registration Structure

  Description:
    This data type defines the USB Device Function Registration Structure. A 
    table containing entries for each function driver instance should be 
    registered with device layer.

  Remarks:
    This type is specific to implementation of the USB Device Stack
    API.
*/

typedef struct   
{
    /* Type of speed (high, full or low speed) */
    USB_SPEED speed;
    
    /* Configuration Value to which the function driver
       has to be tied */
    uint8_t configurationValue;

    /* Interface number to which this function driver
       has to be tied */
    uint8_t interfaceNumber;

    /* Number of interfaces used by the function */
    uint8_t numberOfInterfaces;
    
    /* Function driver instance index */
    uintptr_t funcDriverIndex;
    
    /* Pointer to a structure that contains function
       driver initialization data */
    void * funcDriverInit;
    
    /* Pointer to a standard structure that exposes 
       function driver APIs to USB device layer*/
    void * driver;

} USB_DEVICE_FUNCTION_REGISTRATION_TABLE;

// *****************************************************************************
/* USB Device Initialization Structure

  Summary: 
    USB Device Initialization Structure

  Description: 
    This data type defines the USB Device Initialization data
    structure. A data structure of this type should be initialized and provided
    to USB_DEVICE_Initialize. 

  Remarks: 
    This type is specific to implementation of the USB Device Stack
    API.
*/

typedef struct 
{
    /* System module initialization */
    SYS_MODULE_INIT moduleInit;    

    /* Identifies peripheral (PLIB-level) ID. The use of this parameter is
     * deprecated. */
    unsigned int usbID;

    /* If true, USB module will stop when CPU enters Idle Mode. The use of this
     * parameter is deprecated. */
    bool stopInIdle;     

    /* If true, USB module will suspend when the microcontroller enters sleep
     * mode. The use of this parameter is deprecated. */
    bool suspendInSleep; 

    /* Interrupt Source for USB module. The use of this parameter is deprecated.
     *  */
    INT_SOURCE interruptSource;

    /* Interrupt Source for USB DMA module. The use of this parameter is
     * deprecated. */
    INT_SOURCE interruptSourceUSBDma;
      
    /* Pointer to an byte array whose size is USB_DEVICE_ENDPOINT_TABLE_SIZE
       and who start address is aligned at a 512 bytes address boundary. The
     * use of this parameter is deprecated. */
    void * endpointTable;

    /* Number of function drivers registered to this instance of the 
       USB device layer */
    uint16_t registeredFuncCount;
    
    /* Function driver table registered to this instance of the USB device
       layer*/
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * registeredFunctions;
    
    /* Pointer to USB Descriptor structure */
    USB_DEVICE_MASTER_DESCRIPTOR * usbMasterDescriptor;

    /* Specify the speed at which this device will attempt to connect to the 
       host. PIC32MX and PIC32WK devices support Full Speed only. PIC32MZ devices support
       Full Speed and High Speed. Selecting High Speed will allow the device to
       work at both Full Speed and High Speed.*/
    USB_SPEED deviceSpeed;

    /* Enter Endpoint Read queue size. Application can place this many Endpoint
       Read requests in the queue. Each Endpoint Read queue element would 
       consume 36 Bytes of RAM. Value of this field should be at least 1. This 
       is applicable only for applications using Endpoint Read/Write functions 
       like USB Vendor Device.  */
    uint16_t queueSizeEndpointRead;

    /* Enter Endpoint Write queue size. Application can place this many Endpoint
       Read requests in the queue. Each Endpoint Write queue element would 
       consume 36 Bytes of RAM. Value of this field should be at least 1. This 
       is applicable only for applications using Endpoint Read/Write functions 
       like USB Vendor Device.  */
    uint16_t queueSizeEndpointWrite;

    /* System Module Index of the driver that this device layer should open */
    SYS_MODULE_INDEX driverIndex;

    /*Interface to the USB Driver that this Device Layer should use */
    void * usbDriverInterface;

} USB_DEVICE_INIT;

//*******************************************************************************
/* USB Device Layer Control Transfer Result Enumeration 

  Summary:
    Enumerated data type identifying results of a control transfer.

  Description:
    These enumerated values are the possible return values for control transfer
    operations. These values are returned by the USB_DEVICE_ControlStatus,
    USB_DEVICE_ControlSend and the USB_DEVICE_ControlReceive functions.

  Remarks:
    None.
*/

typedef enum
{
    /* Control transfer failed. This could be because the control transfer
       handle is no more valid since the control transfer was aborted by host by
       sending a new setup packet */

    USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED
            /*DOM-IGNORE-BEGIN*/ = USB_ERROR_DEVICE_CONTROL_TRANSFER_FAILED /*DOM-IGNORE-END*/,

    /* Control transfer was successful*/

    USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS
            /*DOM-IGNORE-BEGIN*/ = USB_ERROR_NONE /*DOM-IGNORE-END*/
    
} USB_DEVICE_CONTROL_TRANSFER_RESULT;

//*******************************************************************************
/* USB Device Layer Endpoint Read and Write Complete Event Data type.

  Summary:
    USB Device Layer Endpoint Read and Write Complete Event Data type.

  Description:
    This data type defines the type of data that is returned by the Device Layer
    along with the USB_DEVICE_EVENT_ENDPOINT_WRITE_COMPLETE and
    USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE events.

  Remarks:
    None.
*/

typedef struct
{
    /* Transfer Handle */
    USB_DEVICE_TRANSFER_HANDLE transferHandle;

    /* Size of transferred data */
    size_t length;
    
    /* Completion status of the transfer */
    USB_DEVICE_RESULT status;

} 
USB_DEVICE_EVENT_DATA_ENDPOINT_READ_COMPLETE, 
USB_DEVICE_EVENT_DATA_ENDPOINT_WRITE_COMPLETE;

//*******************************************************************************
/* USB Device Set Descriptor Event Data type.

  Summary:
    USB Device Set Descriptor Event Data type.

  Description:
    This data type defines the type of data that is returned by the Device Layer
    along with the USB_DEVICE_EVENT_SET_DESCRIPTOR event. 

  Remarks:
    None.
*/
typedef struct __attribute__((packed))
{
    uint8_t :8;
    uint8_t :8;
    uint8_t descriptorIndex;
    uint8_t descriptorType;
    uint16_t languageID;
    uint16_t descriptorLength;

} USB_DEVICE_EVENT_DATA_SET_DESCRIPTOR;

//******************************************************************************
/* USB Device Set Configuration Event Data type.

  Summary:
    USB Device Set Configuration Event Data type.

  Description:
    This data type defines the type of data that is returned by the Device Layer
    along with the USB_DEVICE_EVENT_CONFIGURED event.

  Remarks:
    None.
*/

typedef struct
{
    /* The configuration that was set */
    uint8_t configurationValue;

} USB_DEVICE_EVENT_DATA_CONFIGURED;

//******************************************************************************
/* USB Device Synch Frame Event Data type.

  Summary:
    USB Device Synch Frame Event Data type.

  Description:
    This data type defines the type of data that is returned by the Device Layer
    along with the USB_DEVICE_EVENT_SYNCH_FRAME event.

  Remarks:
    None.
*/

typedef struct
{
    /* Endpoint for which the Synch Frame number is requested */
    USB_ENDPOINT_ADDRESS endpoint;

} USB_DEVICE_EVENT_DATA_SYNCH_FRAME;

//******************************************************************************
/* USB Device Start Of Frame Event Data Type

  Summary:
    USB Device Start Of Frame Event Data Type

  Description:
    This data type defines the type of data that is returned by the Device Layer
    along with the USB_DEVICE_EVENT_SOF event.

  Remarks:
    None.
*/

typedef struct
{
    /* The Start Of Frame number */
    uint16_t frameNumber;

} USB_DEVICE_EVENT_DATA_SOF;

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer System Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    SYS_MODULE_OBJ USB_DEVICE_Initialize
    (
        const SYS_MODULE_INDEX instanceIndex, 
        const SYS_MODULE_INIT * const init
    )

  Summary:
    Creates and initializes an instance of the USB device layer.

  Description:
    This function initializes an instance of USB device layer, making it ready
    for clients to open and use it. The number of instances is limited by the 
    value of macro USB_DEVICE_MAX_INSTANCES defined in system_config.h file.

  Precondition:
    None.

  Parameters:
    instanceIndex     - In case of microcontrollers with multiple USB peripherals,
                        user can create multiple instances of USB device layer.
                        Parameter instanceIndex identifies this instance.
    
    init              - Pointer to a data structure containing any data necessary
                        to initialize the USB device layer

  Returns:
    If successful, returns a valid handle to a device layer object. 
    Otherwise, it returns SYS_MODULE_OBJ_INVALID. 

  Example:
    <code>
   
    // This code example shows the initialization of the 
    // the USB Device Layer. Note how an endpoint table is
    // created and assigned. 

    USB_DEVICE_INIT deviceLayerInit;
    SYS_MODULE_OBJ usbDeviceObj;
    uint8_t __attribute__((aligned(512))) endpointTable[USB_DEVICE_ENDPOINT_TABLE_SIZE]; 

    // System module initialization
    deviceLayerInit.moduleInit.value = SYS_MODULE_POWER_RUN_FULL;
    
    // Identifies peripheral (PLIB-level) ID
    deviceLayerInit.usbID = USB_ID_1;
    
    // Boolean flag: true -> Stop USB module in Idle Mode
    deviceLayerInit.stopInIdle = false;
    
    // Boolean flag: true -> Suspend USB in Sleep Mode
    deviceLayerInit.suspendInSleep = false;
    
    // Interrupt Source for USB module
    deviceLayerInit.interruptSource = INT_SOURCE_USB_1;
    
    // Number of function drivers registered to this instance of the
    // USB device layer 
    deviceLayerInit.registeredFuncCount = 1;
    
    // Function driver table registered to this instance of the USB device layer
    deviceLayerInit.registeredFunctions = funcRegistrationTable;
    
    // Pointer to USB Descriptor structure 
    deviceLayerInit.usbMasterDescriptor   = &usbMasterDescriptor;
    
    // Pointer to an endpoint table.
    deviceLayerInit.endpointTable = endpointTable;

    // USB device initialization
    usbDeviceObj = USB_DEVICE_Initialize(USB_DEVICE_INDEX_0, &deviceLayerInit);
      
    if (SYS_MODULE_OBJ_INVALID == usbDeviceObj)
    {
        // Handle error
    }
    </code>

  Remarks:
    This routine must be called before any other USB Device Layer routine is
    called and after the initialization of USB Device Driver.  This routine
    should only be called once during system initialization.
*/

SYS_MODULE_OBJ USB_DEVICE_Initialize
(
    const SYS_MODULE_INDEX instanceIndex, 
    const SYS_MODULE_INIT * const init
);
                                                        
// *****************************************************************************
/* Function:
    void USB_DEVICE_Deinitialize ( SYS_MODULE_OBJ usbDeviceobj )

  Summary:
    De-initializes the specified instance of the USB device layer.

  Description:
    This function deinitializes the specified instance of the USB device layer,
    disabling its operation (and any hardware) and invalidates all of the
    internal data.

  Precondition:
    Function USB_DEVICE_Initialize must have been called before calling this
    routine and a valid SYS_MODULE_OBJ must have been returned.

  Parameters:
    object          - USB device layer object handle, returned by USB_DEVICE_Initialize

  Returns:
    None.

  Example:
    <code>
    // This code example shows how the USB
    // Device Layer can be deinitialized. It is assumed the
    // USB Device Layer was already initialized.

    SYS_MODULE_OBJ usbDeviceobj;

    USB_DEVICE_Deinitialize(usbDeviceobj); 

    </code>

  Remarks:
    Once the Initialize operation has been called, the deinitialize operation
    must be called before the Initialize operation can be called again.
*/

void USB_DEVICE_Deinitialize ( SYS_MODULE_OBJ usbDeviceObj );

// *****************************************************************************
/* Function:
    SYS_STATUS USB_DEVICE_Status ( SYS_MODULE_OBJ object )

  Summary:
    Provides the current status of the USB device layer

  Description:
    This function provides the current status of the USB device layer.

  Precondition:
    The USB_DEVICE_Initialize function must have been called before calling this
    function.

  Parameters:
    object  - Driver object handle, returned from USB_DEVICE_Initialize

  Returns:
    SYS_STATUS_READY          - Indicates that the device is busy with a
                                previous system level operation and cannot start
                                another

    SYS_STATUS_UNINITIALIZED  - Indicates that the device layer is in a 
                                deinitialized state

  Example:
    <code>
    // This code example shows how the USB_DEVICE_Status function
    // can be used to check if the USB Device Layer is ready
    // for client operations. 

    SYS_MODULE_OBJ      object;     // Returned from DRV_USB_Initialize
    SYS_STATUS          status;

    status = USB_DEVICE_Status(object);

    if (SYS_STATUS_READY != status)
    {
        // Handle error
    }
    </code>

  Remarks:
    None.
*/

SYS_STATUS USB_DEVICE_Status( SYS_MODULE_OBJ object );
 
// *****************************************************************************
/* Function:
    void USB_DEVICE_Tasks( SYS_MODULE_OBJ devLayerObj )

  Summary:
    USB Device layer calls all other function driver tasks in this function.
    It also generates and forwards events to its clients.

  Description:
    This function must be periodically called by the user application. The USB
    Device layer calls all other function driver tasks in this function. It also
    generates and forwards events to its clients.

  Precondition:
    Device layer must have been initialized by calling USB_DEVICE_Initialize.

  Parameters:
    devLayerObj    - Pointer to the Device Layer Object that is returned from
                     USB_DEVICE_Initialize

  Returns:
    None.

  Example:
    <code>
    // The USB_DEVICE_Tasks() function should be placed in the 
    // SYS_Tasks() function of a MPLAB Harmony application.

    SYS_MODULE_OBJ usbDeviceLayerObj; // Returned by USB_DEVICE_Initialize().

    void SYS_Tasks(void)
    {
        USB_DEVICE_Tasks(usbDeviceLayerObj);
    }
    
    </code>

  Remarks:
    None.
*/

void USB_DEVICE_Tasks( SYS_MODULE_OBJ object );

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer Client Interface Routines
// *****************************************************************************
// *****************************************************************************
                                                                                   
// *****************************************************************************
/* Function:
    USB_DEVICE_HANDLE USB_DEVICE_Open
    (
        const SYS_MODULE_INDEX instanceIndex,
        const DRV_IO_INTENT intent 
    )

  Summary:
    Opens the specified USB device layer instance and returns a handle to it.

  Description:
    This function opens the USB device layer instance specified by instance
    index and returns a handle. This handle must be provided to all other client
    operations to identify the caller and the instance of the USB device layer.
    An instance of the Device Layer can be opened only once. Trying to open the
    Device Layer more than once will return a invalid device layer handle.

  Precondition:
    This function must be called after USB device driver initialization
    and after the initialization of USB Device Layer.

  Parameters:
    instanceIndex   - USB device layer instance index
    intent          - This parameter is ignored. The Device Layer will always
                      open in read/write and exclusive mode.

  Returns:
    If successful, returns a valid device layer handle. Otherwise, it 
    returns USB_DEVICE_HANDLE_INVALID. 

  Example:
    <code>
    // This code example shows how the 
    // USB Device Layer can be opened.
    
    USB_DEVICE_HANDLE usbDeviceHandle;
    
    // Before opening a handle, USB device must have been initialized 
    // by calling USB_DEVICE_Initialize().
    
    usbDeviceHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0, 
                                    DRV_IO_INTENT_READWRITE );
    
    if(USB_DEVICE_HANDLE_INVALID == usbDeviceHandle)
    {
        //Failed to open handle.
    }
    
    </code>

  Remarks:
    None.
*/

USB_DEVICE_HANDLE USB_DEVICE_Open 
(
    const SYS_MODULE_INDEX instanceIndex,
    const DRV_IO_INTENT intent
);

// *****************************************************************************
/* Function:
    void USB_DEVICE_Close( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    Closes an opened handle to an instance of the USB device layer.

  Description:
    This function closes an opened handle to an instance of the USB device layer,
    invalidating the handle.

  Precondition:
    The USB_DEVICE_Initialize function must have been called for the specified
    device layer instance. USB_DEVICE_Open must have been called to obtain a 
    valid opened device handle.

  Parameters:
    handle       - A valid open-instance handle, returned from USB_DEVICE_Open

  Returns:
    None

  Example:
    <code>
    USB_DEVICE_HANDLE usbDeviceHandle;
    
    // Before opening a handle, USB device must have been initialized 
    // by calling USB_DEVICE_Initialize().
    usbDeviceHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0 );
    
    if(USB_DEVICE_HANDLE_INVALID == usbDeviceHandle)
    {
        //Failed to open handle.
    }
    
    //.................
    //.................
    // User's code
    //.................
    //.................
    // Close handle
    USB_DEVICE_Close( usbDevHandle );
    </code>

  Remarks:
    After calling this routine, the handle passed in "usbDevHandle" must not be used
    with any of the remaining driver routines.  A new handle must be obtained by
    calling USB_DEVICE_Open() before the client may use the device layer again.
*/

void USB_DEVICE_Close( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    void USB_DEVICE_EventHandlerSet
    (
        USB_DEVICE_HANDLE usbDeviceHandle, 
        USB_DEVICE_EVENT_HANDLER *callBackFunc,
        uintptr_t context
    )

  Summary:
    USB Device Layer Event Handler Callback Function set function.

  Description:
    This is the USB Device Layer Event Handler Callback Set function. A client
    can receive USB Device Layer event by using this function to register and
    event handler callback function. The client can additionally specify a
    specific context which will returned with the event handler callback
    function.

  Precondition:
    The device layer must have been initialized by calling USB_DEVICE_Initialize
    and a valid handle to the instance must have been obtained by calling 
    USB_DEVICE_Open.

  Parameters:
    usbDeviceHandle   - Pointer to the device layer handle that is returned from
                        USB_DEVICE_Open
                        
    callBackFunc      - Pointer to the call back function. The device layer calls
                        notifies the client about bus event by calling this function.

    context           - Client specific context
    
  Returns:
    None.

  Example:
    <code>
    // This code example shows how the application can set 
    // a Device Layer Event Handler. 
	
    // Application states
	typedef enum
	{
		//Application's state machine's initial state.
		APP_STATE_INIT=0,
		APP_STATE_SERVICE_TASKS,
		APP_STATE_WAIT_FOR_CONFIGURATION, 
	} APP_STATES;

    USB_DEVICE_HANDLE usbDeviceHandle;
	APP_STATES appState; 

    // This is the application device layer event handler function.

    USB_DEVICE_EVENT_RESPONSE APP_USBDeviceEventHandler
    (
        USB_DEVICE_EVENT event,
        void * pData, 
        uintptr_t context
    )
    {
		USB_SETUP_PACKET * setupPacket;
        switch(event)
        {
            case USB_DEVICE_EVENT_POWER_DETECTED:
				// This event in generated when VBUS is detected. Attach the device 
				USB_DEVICE_Attach(usbDeviceHandle);
                break;
				
            case USB_DEVICE_EVENT_POWER_REMOVED:
				// This event is generated when VBUS is removed. Detach the device
				USB_DEVICE_Detach (usbDeviceHandle);
                break; 
				
            case USB_DEVICE_EVENT_CONFIGURED:
				// This event indicates that Host has set Configuration in the Device. 
                break;
				
			case USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST:
				// This event indicates a Control transfer setup stage has been completed. 
				setupPacket = (USB_SETUP_PACKET *)pData;
				
				// Parse the setup packet and respond with a USB_DEVICE_ControlSend(), 
				// USB_DEVICE_ControlReceive or USB_DEVICE_ControlStatus(). 
				
				break; 
				
			case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT:
				// This event indicates that a Control transfer Data has been sent to Host.   
			    break; 
				
			case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:
				// This event indicates that a Control transfer Data has been received from Host.
				break; 
				
			case USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED:
				// This event indicates a control transfer was aborted. 
				break; 
				
            case USB_DEVICE_EVENT_SUSPENDED:
                break;
				
            case USB_DEVICE_EVENT_RESUMED:
                break;
				
            case USB_DEVICE_EVENT_ERROR:
                break;
				
            case USB_DEVICE_EVENT_RESET:
                break;
				
            case USB_DEVICE_EVENT_SOF:
				// This event indicates an SOF is detected on the bus. The 	USB_DEVICE_SOF_EVENT_ENABLE
				// macro should be defined to get this event. 
                break;
            default:
                break;
        }
    }

	
	void APP_Tasks ( void )
	{
		// Check the application's current state.
		switch ( appState )
		{
			// Application's initial state. 
			case APP_STATE_INIT:
				// Open the device layer 
				usbDeviceHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0,
                    DRV_IO_INTENT_READWRITE );

				if(usbDeviceHandle != USB_DEVICE_HANDLE_INVALID)
				{
					// Register a callback with device layer to get event notification 
					USB_DEVICE_EventHandlerSet(usbDeviceHandle,
                        APP_USBDeviceEventHandler, 0);
					appState = APP_STATE_WAIT_FOR_CONFIGURATION;
				}
				else
				{
					// The Device Layer is not ready to be opened. We should try
					// gain later. 
				}
				break; 

			case APP_STATE_SERVICE_TASKS:
				break; 

				// The default state should never be executed. 
			default:
				break; 
		}
	}
    </code>

  Remarks:
    None.
*/

void USB_DEVICE_EventHandlerSet
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    const USB_DEVICE_EVENT_HANDLER callBackFunc,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_DEVICE_CLIENT_STATUS USB_DEVICE_ClientStatusGet
    ( 
        USB_DEVICE_HANDLE usbDeviceHandle
    )

  Summary:
    Returns the client specific status.

  Description:
    This function returns the status of the client (ready or closed). The
    application can use this function to query the present state of a client.
    Some of the USB Device Layer functions do not have any effect if the client
    handle is invalid. The USB_DEVICE_ClientStatusGet function in such cases
    can be used for debugging or trouble shooting.
    
  Precondition:
    The USB device layer must have been initialized and opened before calling
    this function.

  Parameters:
    usbDeviceHandle    - Pointer to the device layer handle that is returned from
                         USB_DEVICE_Open

  Returns:
    USB_DEVICE_CLIENT_STATUS type of client status.

  Example:
    <code>
    // This code example shows usage of the
    // USB_DEVICE_ClientStatusGet function.

    if(USB_DEVICE_CLIENT_STATUS_READY == USB_DEVICE_ClientStatusGet(usbDeviceHandle))
    {
        // Client handle is valid.
        if(USB_DEVICE_IsSuspended(usbDeviceHandle))
        {
            // Device is suspended. Do something here.
        }
    }
    </code>

  Remarks:
    The application may ordinarily not find the need to use this function. It
    can be used for troubleshooting or debugging purposes. 
*/

USB_DEVICE_CLIENT_STATUS USB_DEVICE_ClientStatusGet
(
    USB_DEVICE_HANDLE usbDeviceHandle
);

// *****************************************************************************
// *****************************************************************************
// Section: Device State Management and other routines.
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_DEVICE_STATE USB_DEVICE_StateGet( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    Returns the current state of the USB device.

  Description:
    This function returns the current state of the USB device, as described in
    Chapter 9 of the USB 2.0 Specification.

  Precondition:
    The USB device layer must have been initialized and opened before calling
    this function.

  Parameters:
    usbDeviceHandle    - Pointer to the device layer handle that is returned from
                         USB_DEVICE_Open
    
  Returns:
    USB_DEVICE_STATE_DETACHED        - Device is not in any of the known states
  
    USB_DEVICE_STATE_ATTACHED        - Device is attached to the USB, 
                                       but is not powered
    
    USB_DEVICE_STATE_POWERED         - Device is attached to the USB and powered, 
                                       but has not been reset
    
    USB_DEVICE_STATE_DEFAULT         - Device is attached to the USB and powered 
                                       and has been reset, but has not been assigned 
                                       a unique address
    
    USB_DEVICE_STATE_ADDRESS         - Device is attached to the USB, powered, 
                                       has been reset, and a unique device address 
                                       has been assigned
    
    USB_DEVICE_STATE_CONFIGURED      - Device is attached to the USB, powered, 
                                       has been reset, has a unique address, 
                                       is configured, and is not suspended

  Example:
    <code>
    USB_DEVICE_STATE usbDevState;
    
    // Get USB Device State.
    usbDevState = USB_DEVICE_StateGet( usbDeviceHandle );
    
    switch(usbDevState)
    {
        case USB_DEVICE_STATE_ATTACHED:
            // Add code here            
            break;
            
        case USB_DEVICE_STATE_POWERED:
           // Add code here
           break;     
                  
        default:
            break;
     }     
    </code>

  Remarks:
    None.
*/

USB_DEVICE_STATE USB_DEVICE_StateGet( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    uint8_t USB_DEVICE_ActiveConfigurationGet( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    Informs the client of the current USB device configuration set by the USB
    host.

  Description:
    This function returns the current active USB device configuration.

  Precondition:
    The USB Device Layer must have been initialized and opened before calling this
    function.

  Parameters:
    usbDeviceHandle    - Pointer to the Device Layer Handle that is returned from
                        USB_DEVICE_Open
    
  Returns:
    Present active configuration.

  Example:
    <code>
    // This code example shows how the
    // USB_DEVICE_ActiveConfigurationGet function can be called to obtain
    // the configuration that has been set by the host. Note that this
    // information is also available in the macro USB_DEVICE_EVENT_CONFIGURED.
    
    uint8_t currentConfiguration;
    USB_DEVICE_HANDLE usbDeviceHandle;

    currentConfiguration = USB_DEVICE_ActiveConfigurationGet(usbDeviceHandle);

    </code>

  Remarks:
    None.
*/

uint8_t USB_DEVICE_ActiveConfigurationGet( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    bool USB_DEVICE_IsSuspended( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    Returns true if the device is in a suspended state.

  Description:
    This function returns true is the device is presently in suspended state.
    The application can use this function in conjunction with the 
    USB_DEVICE_StateGet function to obtain the detailed state of the device
    (such as addressed and suspended, configured and suspended etc.). The Device
    Layer also provides the macro USB_DEVICE_EVENT_SUSPENDED event to indicate entry
    into suspend state.

  Precondition:
    The USB Device Layer must have been initialized and opened before calling this
    function.

  Parameters:
    usbDeviceHandle    - Pointer to the Device Layer Handle that is returned from
                         USB_DEVICE_Open
    
  Returns:
    Returns true if the device is suspended. 

  Example:
    <code>

    // This code example shows how the application
    // can find out if the device is in a configured but suspended state.

    if(USB_DEVICE_IsSuspended(usbDeviceHandle))
    {
        // Device is in a suspended state.

        if(USB_DEVICE_STATE_CONFIGURED == USB_DEVICE_StateGet(usbDeviceHandle))
        {
            // This means the device is in configured and suspended state.
            
        }
    }

    </code>

  Remarks:
    None.
*/

bool USB_DEVICE_IsSuspended( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    USB_SPEED USB_DEVICE_ActiveSpeedGet(USB_DEVICE_HANDLE usbDeviceHandle)

  Summary:
    Informs the client of the current operation speed of the USB bus.

  Description:
    The USB device stack supports both high speed and full speed operations.
    This function returns the current operation speed of the USB bus. This
    function should be called after the USB_DEVICE_EVENT_RESET event has
    occurred.

  Precondition:
    The USB device layer must have been initialized and a valid handle
    to USB device layer must have been opened.

  Parameters:
    usbDeviceHandle    - Pointer to device layer handle that is returned from
                        USB_DEVICE_Open
    
  Returns:
     
    USB_SPEED_LOW           -  USB module is at low-speed
    USB_SPEED_FULL          -  USB module is at full-speed
    USB_SPEED_HIGH          -  USB module is at high-speed

  Example:
    <code>     
    // This code example shows how the 
    // USB_DEVICE_GetDeviceSpeed function can be called to obtain
    // the current device speed. This information is also
    // available in the USB_DEVICE_EVENT_CONFIGURED event.

    if(USB_DEVICE_ActiveSpeedGet(usbDeviceHandle) == USB_SPEED_FULL)
    {
        // This means the device attached at full speed.
    } 
    else if(USB_DEVICE_ActiveSpeedGet(usbDeviceHandle) == USB_SPEED_HIGH)
    {
        // This means the device attached at high speed.
    }

    </code>

  Remarks:
    None.
*/

USB_SPEED USB_DEVICE_ActiveSpeedGet( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    void USB_DEVICE_PowerStateSet
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_DEVICE_POWER_STATE powerState
    )

  Summary:
    Sets power state of the device.

  Description:
    Application clients can use this function to set the power state of the
    device. A USB device can be bus powered or self powered. Based on hardware
    configuration, this power state may change while the device is on operation.
    The application can call this function to update the Device Layer on the
    present power status of the device.

  Precondition:
    The device layer should have been initialized and opened.

  Parameters:
    usbDeviceHandle     -   USB device handle returned by USB_DEVICE_Open().
    powerState          -   USB_DEVICE_POWER_STATE_BUS_POWERED/
                            USB_DEVICE_POWER_STATE_SELF_POWERED

  Returns:
    None.
 
  Example:
    <code>
    // The following code example shows how the application can
    // change the power state of the device. In this case the application checks
    // if a battery is charged and if so, the application set the device power
    // state to self-powered.
    
    if(APP_BATTERY_IS_CHARGED == APP_BatteryChargeStatusGet())
    {
        // The application switches if power source.

        APP_PowerSourceSwitch(APP_POWER_SOURCE_BATTERY);
        USB_DEVICE_PowerStateSet(usbDeviceHandle, USB_DEVICE_POWER_STATE_SELF_POWERED);
    }
    else
    {
        // The battery is still not charged. The application uses the USB power.

        USB_DEVICE_PowerStateSet(usbDeviceHandle, USB_DEVICE_POWER_STATE_BUS_POWERED);
    }

    </code>

  Remarks:
    By default, the device is bus powered.
*/

void USB_DEVICE_PowerStateSet
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_DEVICE_POWER_STATE powerState
);

// *****************************************************************************
/* Function:
    void USB_DEVICE_Attach( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    This function will attach the device to the USB.

  Description:
    This function will attach the device to the USB. It does this by enabling
    the pull up resistors on the D+ or D- lines. This function should be called
    after the USB device layer has generated the USB_DEVICE_EVENT_POWER_DETECTED
    event.

  Precondition:
    Client handle should be valid.  The device layer should have been
    initialized and an device layer event handler function should have been
    assigned.

  Parameters:
    usbDeviceHandle   - Client's USB device layer handle (returned from
                        USB_DEVICE_Open)

  Returns:
    None.

  Example:
    <code>
    
    // This code example shows the set 
    // of steps to follow before attaching the
    // device on the bus. It is assumed that the
    // device layer is already initialized.
    
    USB_DEVICE_HANDLE usbDeviceHandle;

    // Get an handle to the USB device layer.
    usbDeviceHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0,
                                                      DRV_IO_INTENT_READWRITE );

    if(USB_DEVICE_HANDLE_INVALID == usbDeviceHandle)
    {
        // Failed to open handle.
        // Handle error.
    }

    // Register an event handler call back function with device layer
    // so that we are ready to receive events when the device is 
    // attached to the bus.

    USB_DEVICE_EventHandlerSet(usbDeviceHandle, APP_USBDeviceEventHandler, NULL);

    // Now, connect device to USB
    USB_DEVICE_Attach(usbDeviceHandle);

    </code>

  Remarks:
    None.
*/

void USB_DEVICE_Attach( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    void USB_DEVICE_Detach( USB_DEVICE_HANDLE usbDeviceHandle );

  Summary:
    This function will detach the device from the USB. 

  Description:
    This function will detach the device from the USB. It does this by disabling
    the pull up resistors on the D+ or D- lines. This function should be called
    when the application wants to disconnect the device from the bus (typically
    to implement a soft detach or switch to host mode operation). It should
    be called when the Device Layer has generated the
    USB_DEVICE_EVENT_POWER_REMOVED event.

  Precondition:
    The device layer should have been initialized and opened.

  Parameters:
    usbDeviceHandle    - Client's driver handle (returned from USB_DEVICE_Open)

  Returns:
    None.

  Example:
    <code>
    USB_DEVICE_HANDLE usbDeviceHandle;

    // Detach the device from the USB
    USB_DEVICE_Detach( usbDeviceHandle );

    </code>

  Remarks:
    None.
*/

void USB_DEVICE_Detach( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
// *****************************************************************************
// Section: Device Remote Wakeup Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_DEVICE_REMOTE_WAKEUP_STATUS USB_DEVICE_RemoteWakeupStatusGet
    (
        USB_DEVICE_HANDLE usbDeviceHandle
    )

  Summary:
    Gets the "Remote wake-up" status of the device.

  Description:
    This function returns the present "Remote Wake-up" status of the device. If
    the device supports remote wake-up, the host may enable of disable this
    feature. The client can use this function to find out the status of this
    feature.

  Precondition:
    The device layer should have been initialized and opened.

  Parameters:
    usbDeviceHandle    -   USB device handle returned by USB_DEVICE_Open().
    
  Returns:
    USB_DEVICE_REMOTE_WAKEUP_ENABLED -  Remote wakeup is enabled.
    USB_DEVICE_REMOTE_WAKEUP_DISABLED - Remote wakeup is disabled.

  Example:
    <code>
    // This code example checks if the host has enabled the remote wake-up    
    // feature and then starts resume signaling. It is assumed
    // that the device is in suspended mode.

    USB_DEVICE_HANDLE usbDeviceHandle;

    if(USB_DEVICE_RemoteWakeupStatusGet(usbDeviceHandle))
    {
        // Start resume signaling.

        USB_DEVICE_RemoteWakeupStart(usbDeviceHandle);
    }

    </code>

  Remarks:
    None.

*/

USB_DEVICE_REMOTE_WAKEUP_STATUS USB_DEVICE_RemoteWakeupStatusGet
(
    USB_DEVICE_HANDLE usbDeviceHandle
);

// *****************************************************************************
/* Function:
    void USB_DEVICE_RemoteWakeupStart( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    This function will start the resume signaling.

  Description:
    This function will start the resume signaling on the bus. The client calls
    this function after it has detected a idle bus (through the
    USB_DEVICE_EVENT_SUSPENDED event). The remote wake-up feature should have
    been enabled by the host, before the client can call this function. The
    client can use the USB_DEVICE_RemoteWakeupStatusGet function to check if
    the host has enabled the remote wake-up feature.

  Precondition:
    Client handle should be valid.  The remote wake-up feature should have
    been enabled by the host.

  Parameters:
    usbDeviceHandle    - Client's driver handle (returned from USB_DEVICE_Open)

  Returns:
    None.

  Example:
    <code>
    // This code example shows how the device can enable and disable
    // Resume signaling on the bus. These function should only be called if the 
    // device support remote wakeup and the host has enabled this 
    // feature. 

    USB_DEVICE_HANDLE usbDeviceHandle;

    // Start resume signaling.
    USB_DEVICE_RemoteWakeupStart(usbDeviceHandle);

    // As per section 7.1.7.7 of the USB specification, device can
    // drive resume signaling for at least 1 millisecond but no
    // more than 15 milliseconds.
    
    APP_DelayMilliseconds(10);

    // Stop resume signaling.
    USB_DEVICE_RemoteWakeupStop(usbDeviceHandle);

    </code>

  Remarks:
    None.
*/

void USB_DEVICE_RemoteWakeupStart( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    void USB_DEVICE_RemoteWakeupStop ( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    This function will stop the resume signaling.

  Description:
    This function will stop the resume signaling. This function should be called
    after the client has called the USB_DEVICE_RemoteWakeupStart() function. 

  Precondition:
    Client handle should be valid. The host should have enabled the Remote
    Wakeup feature for this device. 

  Parameters:
    usbDeviceHandle    - Client's driver handle (returned from USB_DEVICE_Open)

  Returns:
    None.

  Example:
    <code>
    // This code example shows how the device can enable and disable
    // Resume signaling on the bus. These function should only be called if the 
    // device support remote wake-up and the host has enabled this 
    // feature. 

    USB_DEVICE_HANDLE usbDeviceHandle;

    // Start resume signaling.
    USB_DEVICE_RemoteWakeupStart(usbDeviceHandle);

    // As per section 7.1.7.7 of the USB specification, device must
    // drive resume signaling for at least 1 millisecond but no
    // more than 15 milliseconds.
    
    APP_DelayMilliseconds(10);

    // Stop resume signaling.
    USB_DEVICE_RemoteWakeupStop(usbDeviceHandle);

    </code>

  Remarks:
    None.
*/

void USB_DEVICE_RemoteWakeupStop ( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
/* Function:
    void USB_DEVICE_RemoteWakeupStartTimed ( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    This function will start a self timed Remote Wake-up.

  Description:
    This function will start a self timed Remote Wake-up sequence. The function
    will cause the device to generate resume signaling for 10 milliseconds. The
    resume signaling will stop after 10 milliseconds. The application can use
    this function instead of the USB_DEVICE_RemoteWakeupStart and
    USB_DEVICE_RemoteWakeupStop functions, which require the application to
    manually start, maintain duration and then stop the resume signaling.

  Precondition:
    Client handle should be valid. The host should have enabled the Remote
    Wake-up feature for this device. 

  Parameters:
    usbDeviceHandle    - Client's driver handle (returned from USB_DEVICE_Open)

  Returns:
    None.

  Example:
    <code>
    // This code example shows how the device can use the
    // USB_DEVICE_RemoteWakeupStartTimed function to drive resume signaling
    // on the bus for 10 milliseconds.

    USB_DEVICE_HANDLE usbDeviceHandle;

    // Check if host has enabled remote wake-up for the device.
    if(USB_DEVICE_REMOTE_WAKEUP_ENABLED == USB_DEVICE_RemoteWakeupStatusGet(usbDeviceHandle))
    {
        // Remote wake-up is enabled

        USB_DEVICE_RemoteWakeupStartTimed(usbDeviceHandle);
    }

    </code>

  Remarks:
    None.
*/

void USB_DEVICE_RemoteWakeupStartTimed ( USB_DEVICE_HANDLE usbDeviceHandle );

// *****************************************************************************
// *****************************************************************************
// Section: Control Transfer Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlSend
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        void * data, 
        size_t length
    )

  Summary:
    Sends data stage of the control transfer from device to host.

  Description:
    This function allows the application to specify the data that would be sent
    to host in the data stage of a control read transfer. It should be called
    when the application has received the
    USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST event and has identified
    this setup request as the setup stage of a control read transfer. The Device
    Layer will generate a USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT event when
    the data stage has completed. The function can be called in the Application
    Control Transfer Event handler or can be called after the application has
    returned from the control transfer event handler. 
    
    Calling this function after returning from the event handler defers the
    response to the event.  This allows the application to prepare the data
    buffer out of the event handler context, especially if the data buffer to
    receive the data is not readily available. Note however, that there are
    timing considerations when responding to the control transfer. Exceeding the
    response time will cause the host to cancel the control transfer and may
    cause USB host to reject the device.
 
  Precondition:
    Client handle should be valid.

  Parameters:
    usbDeviceHandle         - USB device handle returned by USB_DEVICE_Open

    data                    - Pointer to buffer that holds data

    length                  - Size in bytes

  Returns:
    USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED - If control transfer failed 
    due to host aborting the previous control transfer.

    USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS - The request was submitted
    successfully.

  Example:
    <code>
    // The following code example shows an example of how the
    // USB_DEVICE_ControlSend() function is called in response to the
    // USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST event to enable a control
    // read transfer.

    void APP_USBDeviceEventHandler
    (
        USB_DEVICE_EVENT event, 
        void * pData, 
        uintptr_t context
    )
    {
        USB_SETUP_PACKET * setupPkt;

        switch(event)
        {
            case USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST:

                setupPkt = (USB_SETUP_PACKET *)pData;
                
                // Submit a buffer to send 32 bytes in the  control read transfer.
                USB_DEVICE_ControlSend(usbDeviceHandle, data, 32); 
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                // This means that data in the data stage of the control
                // write transfer has been received. The application can either
                // accept the received data by calling the
                // USB_DEVICE_ControlStatus function with
                // USB_DEVICE_CONTROL_STATUS_OK flag (as shown in this example)
                // or it can reject it by calling the USB_DEVICE_ControlStatus
                // function with USB_DEVICE_CONTROL_STATUS_ERROR flag. 

                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT:
                
                 // This means that data in the data stage of the control
                // read transfer has been sent. This indicates that the control transfer is 
                // completed. 
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED:

                // This means the host has aborted the control transfer. The
                // application can reset its control transfer state machine.
            break;
        }
        
    } 
    </code>

  Remarks:
    None.
*/

USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlSend
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    void *  data, 
    size_t length
);

// *****************************************************************************
/* Function:
    USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlReceive
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        void *  data, 
        size_t length
    )

  Summary:
    Receives data stage of the control transfer from host to device.

  Description:
    This function allows the application to specify the data buffer that would
    be needed to receive the data stage of a control write transfer. It should
    be called when the application receives the
    USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST event and has identified
    this setup request as the setup stage of a control write transfer. The
    function can be called in the Application Control Transfer Event handler or
    can be called after the application has returned from the control transfer
    event handler. 
    
    Calling this function after returning from the event handler defers the
    response to the event.  This allows the application to prepare the data
    buffer out of the event handler context, especially if the data buffer to
    receive the data is not readily available. Note however, that there are
    timing considerations when responding to the control transfer. Exceeding the
    response time will cause the host to cancel the control transfer and may
    cause USB host to reject the device.

  Precondition:
    Client handle should be valid.

  Parameters:
    usbDeviceHandle        - USB device handle returned by USB_DEVICE_Open
    
    data                   - Pointer to buffer that holds data

    length                 - Size in bytes

  Returns:
    USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED - If control transfer failed 
    due to host aborting the previous control transfer.

    USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS - The request was submitted
    successfully.

  Example:
    <code>
    // The following code example shows an example of how the
    // USB_DEVICE_ControlReceive function is called in response to the
    // USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST event to enable a control
    // write transfer.

    void APP_USBDeviceControlTransferEventHandler
    (
        USB_DEVICE_EVENT event,
        void * pData, 
        uintptr_t context
    )
    {
        uint8_t * setupPkt;

        switch(event)
        {
            case USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST:

                setupPkt = (uint8_t *)pData;
                
                // Submit a buffer to receive 32 bytes in the  control write transfer.
                // USB_DEVICE_ControlReceive(usbDeviceHandle, data, 32); 
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                // This means that data in the data stage of the control
                // write transfer has been received. The application can either
                // accept the received data by calling the
                // USB_DEVICE_ControlStatus function with
                // USB_DEVICE_CONTROL_STATUS_OK flag (as shown in this example)
                // or it can reject it by calling the USB_DEVICE_ControlStatus()
                // function with USB_DEVICE_CONTROL_STATUS_ERROR flag. 

                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT:
                
                // This means that data in the data stage of the control
                // read transfer has been sent. This indicates that the control transfer is 
                // completed. 

                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED:

                // This means the host has aborted the control transfer. The
                // application can reset its control transfer state machine.
            break;
        }
        
    } 
    </code>

  Remarks:
    None.
*/

USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlReceive
( 
    USB_DEVICE_HANDLE usbDeviceHandle,
    void *  data, 
    size_t length
);

// *****************************************************************************
/* Function:
    USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlStatus
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_DEVICE_CONTROL_STATUS status
    )

  Summary:
    Initiates status stage of the control transfer.

  Description:
    This function allows the application to complete the status stage of the of
    an on-going control transfer. The application must call this function when
    the data stage of the control transfer is complete or when a Setup Request
    has been received (in case of a zero data stage control transfer). The
    application can either accept the data stage/setup command or reject it.
    Calling this function with status set to USB_DEVICE_CONTROL_STATUS_OK will
    acknowledge the status stage of the control transfer. The control transfer
    can be stalled by setting the status parameter to
    USB_DEVICE_CONTROL_STATUS_ERROR. 
    
    The function can be called in the Application Control Transfer event handler
    or can be called after returning from this event handler.  Calling this
    function after returning from the control transfer event handler defers the
    response to the event. This allows the application to analyze the event
    response outside the event handler. Note however, that there are timing
    considerations when responding to the control transfer. Exceeding the
    response time will cause the host to cancel the control transfer and may
    cause USB host to reject the device. 
    
    The application must be aware of events and associated control transfers
    that do or do not require data stages.  Incorrect usage of the
    USB_DEVICE_ControlStatus function could cause the device function to be
    non-compliant.

  Precondition:
    Client handle should be valid. This function should only be called to 
	complete an on-going control transfer.

  Parameters:
    usbDeviceHandle        - USB device handle returned by USB_DEVICE_Open
    
    status                 - USB_DEVICE_CONTROL_STATUS_OK to acknowledge the 
                             status stage. USB_DEVICE_CONTROL_STATUS_ERROR to
                             stall the status stage.

  Returns:
    USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED - If control transfer failed 
    due to host aborting the previous control transfer.

    USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS - The request was submitted
    successfully.

  Example:
    <code>

    // The following code example shows an example of how the
    // USB_DEVICE_ControlStatus() function is called in response to the
    // USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED event to complete the 
	// control transfer. Here, the application code acknowledges the status 
	// stage of the control transfer.

    void APP_USBDeviceControlTransferEventHandler
    (
        USB_DEVICE_EVENT event,
        void * data, 
        uintptr_t context
    )
    {
        USB_SETUP_PACKET * setupPkt;

        switch(event)
        {
            case USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST:

                setupPkt = (USB_SETUP_PACKET *)pData;
                
                // Submit a buffer to receive 32 bytes in the  control write transfer.
                // USB_DEVICE_ControlReceive(usbDeviceHandle, data, 32); 
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                // This means that data in the data stage of the control
                // write transfer has been received. The application can either
                // accept the received data by calling the
                // USB_DEVICE_ControlStatus function with
                // USB_DEVICE_CONTROL_STATUS_OK flag (as shown in this example)
                // or it can reject it by calling the USB_DEVICE_ControlStatus
                // function with USB_DEVICE_CONTROL_STATUS_ERROR flag. 

                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT:
                
                // This means that data in the data stage of the control
                // read transfer has been sent. This indicates that the control transfer is 
                // completed. 
                break;

            case USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED:

                // This means the host has aborted the control transfer. The
                // application can reset its control transfer state machine.
            break;
        }
    } 

    </code>

  Remarks:
    None.
*/

USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlStatus
( 
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_DEVICE_CONTROL_STATUS status
);

// *****************************************************************************
// *****************************************************************************
// Section: Endpoint Data Transfer and Management routines. 
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void USB_DEVICE_EndpointStall
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT_ADDRESS endpoint
    )

  Summary:
    This function stalls an endpoint in the specified direction.

  Description:
    This function stalls an endpoint in the specified direction.

  Precondition:
    Client handle should be valid.

  Parameters:
    usbDeviceHandle - USB device handle returned by USB_DEVICE_Open
    endpoint        - Specifies the endpoint and direction

  Returns:
    None.

  Example:
    <code>
    // This code example shows how to stall an endpoint. In
    // this case, endpoint 1 IN direction is stalled.

    USB_ENDPOINT_ADDRESS ep;

    ep = 0x1|USB_EP_DIRECTION_IN;

    USB_DEVICE_EndpointStall(usbDeviceHandle, ep);

    </code>

  Remarks:
    The application may typically, not find the need to stall an endpoint.
    Stalling an endpoint erroneously could potentially make the device
    non-compliant.
*/

void USB_DEVICE_EndpointStall 
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_ENDPOINT_ADDRESS endpoint
); 

// *****************************************************************************
/* Function:
    void USB_DEVICE_EndpointStallClear
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT_ADDRESS endpoint
    )

  Summary:
    This function clears the stall on an endpoint in the specified direction.

  Description:
    This function clear the stall on an endpoint in the specified direction. 

  Precondition:
    Client handle should be valid.

  Parameters:
    usbDeviceHandle  -        USB device handle returned by USB_DEVICE_Open().
    endpoint    - Specifies the endpoint and direction.

  Returns:
    None.

  Example:
    <code>
    // This code example shows how to clear a stall on an
    // endpoint. In this case, the stall on endpoint 1 IN direction is
    // cleared.

    USB_ENDPOINT_ADDRESS ep;

    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);

    USB_DEVICE_EndpointStallClear(usbDeviceHandle, ep);

    </code>

  Remarks:
    None.
*/

void USB_DEVICE_EndpointStallClear 
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_ENDPOINT_ADDRESS endpoint
); 

// *****************************************************************************
/* Function:
    bool USB_DEVICE_EndpointIsStalled
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT_ADDRESS endpoint
    )

  Summary:
    This function returns the stall status of the specified endpoint and
    direction.

  Description:
    This function returns the stall status of the specified endpoint and
    direction.

  Precondition:
    The USB Device should be in a configured state.

  Parameters:
    usbDeviceHandle - USB device handle returned by USB_DEVICE_Open
    endpoint        - Specifies the endpoint and direction

  Returns:
    Returns true if endpoint is stalled, false otherwise.

  Example:
    <code>
    // This code example shows of how the
    // USB_DEVICE_EndpointIsStalled function can be used to obtain the
    // stall status of the endpoint 1 and IN direction.

    USB_ENDPOINT_ADDRESS ep;

    ep = 0x1|USB_EP_DIRECTION_IN;

    if(true == USB_DEVICE_EndpointIsStalled (handle, ep))
    {
        // Endpoint stall is enabled. Clear the stall.

        USB_DEVICE_EndpointStallClear(handle, ep);

    }

    </code>

  Remarks:
    None.
*/

bool USB_DEVICE_EndpointIsStalled
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint
);

// *****************************************************************************
/* Function:
    USB_DEVICE_RESULT USB_DEVICE_EndpointWrite 
    (   
        USB_DEVICE_HANDLE usbDeviceHandle, 
        USB_DEVICE_TRANSFER_HANDLE * transferHandle, 
        USB_ENDPOINT_ADDRESS endpoint,
        const void * data, 
        size_t size, 
        USB_DEVICE_TRANSFER_FLAGS flag
    );

  Summary:
    This function requests a data write to a USB Device Endpoint.

  Description:
    This function requests a data write to the USB Device Endpoint. The function
    places a requests with Device layer, the request will get serviced as and
    when the data is requested by the USB Host. A handle to the request is
    returned in the transferHandle parameter. The termination of the request is
    indicated by the USB_DEVICE_EVENT_ENDPOINT_WRITE_COMPLETE event. The amount
    of data written and the transfer handle associated with the request is
    returned along with the event in length member of the pData parameter in the
    event handler. The transfer handle expires when event handler for the
    USB_DEVICE_EVENT_ENDPOINT_WRITE_COMPLETE exits.  If the write request could
    not be accepted, the function returns an error code and transferHandle will
    contain the value USB_DEVICE_TRANSFER_HANDLE_INVALID.
    
    The behavior of the write request depends on the flags and size parameter.
    If the application intends to send more data in a request, then it should
    use the USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING flag. If there is no
    more data to be sent in the request, the application must use the
    USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE flag. This is explained in more
    detail here:
    
    - If size is a multiple of maxPacketSize and flag is set as
    USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE, the write function will append
    a Zero Length Packet (ZLP) to complete the transfer. 
    
    - If size is a multiple of maxPacketSize and flag is set as
    USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING, the write function will
    not append a ZLP and hence will not complete the transfer. 
    
    - If size is greater than but not a multiple of maxPacketSize and flags is
    set as USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE, the write function complete
    the transfer without appending a ZLP. 
    
    - If size is greater than but not a multiple of maxPacketSize and flags is
    set as USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING, the write function
    returns an error code and sets the transferHandle parameter to 
    USB_DEVICE_TRANSFER_HANDLE_INVALID. 
    
    - If size is less than maxPacketSize and flag is set as
    USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE, the write function schedules
    one packet. 
    
    - If size is less than maxPacketSize and flag is set as
    USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING, the write function
    returns an error code and sets the transferHandle parameter to 
    USB_DEVICE_TRANSFER_HANDLE_INVALID.

  Precondition:
    The USB Device should be in a configured state.

  Parameters:
    instance  - Handle to the device layer.

    transferHandle  - Pointer to a USB_DEVICE_TRANSFER_HANDLE type of
                      variable. This variable will contain the transfer handle
                      in case the write request was successful.

    endpoint        - Endpoint to which the data should be written. Note that is
                      a combination of direction and the endpoint number. Refer 
                      to the description of USB_ENDPOINT_ADDRESS for more details.

    data            - Pointer to the data buffer that contains the data to written.

    size            - Size of the data buffer. Refer to the description section for more
                      details on how the size affects the transfer.

    flags           - Flags that indicate whether the transfer should continue or end.
                      Refer to the description for more details.

  Returns:

    USB_DEVICE_RESULT_OK - The write request was successful. transferHandle
    contains a valid transfer handle.
    
    USB_DEVICE_RESULT_ERROR_TRANSFER_QUEUE_FULL - Internal request queue 
    is full. The write request could not be added.
    
    USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID - Endpoint is not provisioned in
    the system.

    USB_DEVICE_RESULT_ERROR_TRANSFER_SIZE_INVALID - The combination of the
    transfer size and the specified flag is invalid.

    USB_DEVICE_RESULT_ERROR_ENDPOINT_NOT_CONFIGURED - Endpoint is not enabled
    because device is not configured.

    USB_DEVICE_RESULT_ERROR_PARAMETER_INVALID - Device Layer handle is not
    valid. 

  Example:
    <code>
    // Below is a set of examples showing various conditions trying to
    // send data with the Write command.  
    //
    // This assumes that Device Layer was opened successfully.
    // Assume maxPacketSize is 64.
    
    USB_DEVICE_TRANSFER_HANDLE transferHandle;
    USB_DEVICE_RESULT writeRequestHandle;
    USB_DEVICE_HANDLE usbDeviceHandle;

    //-------------------------------------------------------
    // In this example we want to send 34 bytes only.

    writeRequestResult = USB_DEVICE_EndpointWrite(usbDeviceHandle,
                            &transferHandle, data, 34, 
                            USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE);

    if(USB_DEVICE_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    //-------------------------------------------------------
    // In this example we want to send 64 bytes only.
    // This will cause a ZLP to be sent.

    writeRequestResult = USB_DEVICE_EndpointWrite(usbDeviceHandle,
                            &transferHandle, data, 64, 
                            USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE);

    if(USB_DEVICE_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    //-------------------------------------------------------
    // This example will return an error because size is less
    // than maxPacketSize and the flag indicates that more
    // data is pending.

    writeRequestResult = USB_DEVICE_EndpointWrite(usbDeviceHandle,
                            &transferHandle, data, 32, 
                            USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING);

    //-------------------------------------------------------
    // In this example we want to place a request for a 70 byte transfer.
    // The 70 bytes will be sent out in a 64 byte transaction and a 6 byte
    // transaction completing the transfer.

    writeRequestResult = USB_DEVICE_EndpointWrite(usbDeviceHandle,
                            &transferHandle, data, 70, 
                            USB_DEVICE_TRANSFER_FLAGS_DATA_COMPLETE);

    if(USB_DEVICE_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    //-------------------------------------------------------
    // This example would result in an error because the transfer size is
    // not an exact multiple of the endpoint size and the
    // USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING flag indicate that the
    // transfer should continue.

    writeRequestResult = USB_DEVICE_EndpointWrite(usbDeviceHandle,
                            &transferHandle, data, 70, 
                            USB_DEVICE_TRANSFER_FLAGS_MORE_DATA_PENDING);

    if(USB_DEVICE_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    // The completion of the write request will be indicated by the 
    // USB_DEVICE_EVENT_ENDPOINT_WRITE_COMPLETE event.

    </code>

  Remarks:
    While the using the device layer with PIC32MZ USB module, the transmit
    buffer provided to the USB_DEVICE_EndpointWrite should be placed in coherent
    memory and aligned at a 16 byte boundary.  This can be done by declaring the
    buffer using the  __attribute__((coherent, aligned(16))) attribute. An
    example is shown here

    <code>
    uint8_t data[256] __attribute__((coherent, aligned(16)));
    </code>
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointWrite
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_DEVICE_TRANSFER_HANDLE * transferHandle,
    USB_ENDPOINT_ADDRESS endpoint,
    const void * data, 
    size_t size, 
    USB_DEVICE_TRANSFER_FLAGS flags
);

//******************************************************************************
/* Function:
    USB_DEVICE_RESULT USB_DEVICE_EndpointRead
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_DEVICE_TRANSFER_HANDLE * transferHandle,
        USB_ENDPOINT_ADDRESS endpoint,
        void * buffer,
        size_t bufferSize
    );

  Summary:
    Reads data received from host on the requested endpoint.

  Description:
    This function requests a endpoint data read from the USB Device Layer. The
    function places a requests with driver, the request will get serviced as
    data is made available by the USB Host. A handle to the request is returned
    in the transferHandle parameter. The termination of the request is indicated
    by the USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE event. The amount of data
    read and the transfer handle associated with the request is returned along
    with the event in the pData parameter of the event handler. The transfer
    handle expires when event handler for the
    USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE exits. If the read request could not
    be accepted, the function returns an error code and transferHandle will
    contain the value USB_DEVICE_TRANSFER_HANDLE_INVALID.

    If the size parameter is not a multiple of maxPacketSize or is 0, the
    function returns USB_DEVICE_TRANSFER_HANDLE_INVALID in transferHandle and
    returns an error code as a return value. If the size parameter is a multiple
    of maxPacketSize and the host sends less than maxPacketSize data in any
    transaction, the transfer completes and the function driver will issue a
    USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE event along with the
    USB_DEVICE_EVENT_DATA_ENDPOINT_READ_COMPLETE_DATA data structure. If the
    size parameter is a multiple of maxPacketSize and the host sends
    maxPacketSize amount of data, and total data received does not exceed size,
    then the function driver will wait for the next packet. 
    
  Precondition:
    The device should have been configured.

  Parameters:
    usbDeviceHandle    - USB Device Layer Handle.

    transferHandle  - Pointer to a USB_DEVICE_TRANSFER_HANDLE type of
                      variable. This variable will contain the transfer handle
                      in case the read request was  successful.
    
    endpoint        - Endpoint from which the data should be read.
    
    data            - pointer to the data buffer where read data will be stored.
    
    size            - Size of the data buffer. Refer to the description section for more
                      details on how the size affects the transfer.

  Returns:
    USB_DEVICE_RESULT_OK - The read request was successful. transferHandle
    contains a valid transfer handle.
    
    USB_DEVICE_RESULT_ERROR_TRANSFER_QUEUE_FULL - internal request queue 
    is full. The write request could not be added.

    USB_DEVICE_RESULT_ERROR_TRANSFER_SIZE_INVALID - The specified transfer
    size was not a multiple of endpoint size or is 0.

    USB_DEVICE_RESULT_ERROR_ENDPOINT_NOT_CONFIGURED - The specified 
    endpoint is not configured yet and is not ready for data transfers.

    USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID - The specified instance
    was not provisioned in the application and is invalid.

  Example:
    <code>

    // Shows an example of how to read. This assumes that
    // driver was opened successfully. Note how the endpoint 
    // is specified. The most significant bit is cleared while
    // the lower nibble specifies the endpoint (which is 1).

    USB_DEVICE_TRANSFER_HANDLE transferHandle;
    USB_DEVICE_RESULT readRequestResult;
    USB_DEVICE_HANDLE usbDeviceHandle;
    USB_ENDPOINT_ADDRESS endpoint = 0x01;

    readRequestResult = USB_DEVICE_EndpointRead(usbDeviceHandle,
                            &transferHandle, endpoint, data, 128);

    if(USB_DEVICE_RESULT_OK != readRequestResult)
    {
        //Do Error handling here
    }

    // The completion of the read request will be indicated by the 
    // USB_DEVICE_EVENT_ENDPOINT_READ_COMPLETE event.

    </code>

  Remarks:
    While the using the device layer with PIC32MZ USB module, the receive
    buffer provided to the USB_DEVICE_EndpointRead should be placed in coherent
    memory and aligned at a 16 byte boundary.  This can be done by declaring the
    buffer using the  __attribute__((coherent, aligned(16))) attribute. An
    example is shown here

    <code>
    uint8_t data[256] __attribute__((coherent, aligned(16)));
    </code>
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointRead
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_DEVICE_TRANSFER_HANDLE * transferHandle,
    USB_ENDPOINT_ADDRESS endpoint, 
    void * buffer, 
    size_t bufferSize 
);

//******************************************************************************
/* Function:
    USB_DEVICE_RESULT USB_DEVICE_EndpointEnable
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        uint8_t interface,
        USB_ENDPOINT_ADDRESS endpoint,
        USB_TRANSFER_TYPE transferType
        size_t size
    );
 
  Summary:
    Enables a device endpoint.

  Description:
    This function enables a device endpoint for the specified transfer type and
    size. A Vendor specific device application may typically call this function
    in response to a Set Interface request from the host. Note that Device Layer
    will enable endpoints contained in Alternate Setting 0 of an interface, when
    the host configures the device. If there is only one alternate setting in an
    interface, the application may not need to call the
    USB_DEVICE_EndpointEnable function. 

    If the device supports multiple alternate settings in an Interface, the
    device application must then disable an endpoint (if it was enabled) before
    re-enabling it with the new settings.The application can use the
    USB_DEVICE_EndpointIsEnabled function to check the status of the endpoint and
    USB_DEVICE_EndpointDisable function to disable the endpoint. 
    
  Precondition:
    The device should have been configured.

  Parameters:
    usbDeviceHandle    - USB Device Layer Handle.

    interface          - This parameter is ignored in the PIC32 USB Device Stack 
                         implementation. 

    endpoint           - Endpoint to enable.
    
    transferType       - Type of transfer that this is endpoint will support. This 
                         should match the type reported to the host
    
    size               - Maximum endpoint size. This should match the value reported 
                         to the host.
  Returns:
    USB_DEVICE_RESULT_OK - The endpoint was enabled successfully.

    USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID - The specified instance
    was not provisioned in the application and is invalid.

  Example:
    <code>

    // The following code example checks if an Set Alternate request has
    // been received and changes the endpoint characteristics based on the
    // alternate setting. Endpoint is 1 and direction is device to host.
    // Assume that endpoint size was 32 bytes in alternate setting 0.

    if(setAlternateRequest)
    {
        if(alternateSetting == 1)
        {
            // Check if the endpoint is already enabled.
            if(USB_DEVICE_EndpointIsEnabled(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN)))
            {
                // Disable the endpoint.
                USB_DEVICE_EndpointDisable(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN));
            }

            // Re-enable the endpoint with new settings
            USB_DEVICE_EndpointEnable(usbDeviceHandle, 0, (0x1|USB_EP_DIRECTION_IN)
                        USB_TRANSFER_TYPE_BULK, 64);
        }
    }
    
    </code>

  Remarks:
    None.
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointEnable
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    uint8_t interface,
    USB_ENDPOINT_ADDRESS endpoint,
    USB_TRANSFER_TYPE transferType,
    size_t size
);

//******************************************************************************
/* Function:
    USB_DEVICE_RESULT USB_DEVICE_EndpointDisable
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT_ADDRESS endpoint,
    );
 
  Summary:
    Disables a device endpoint.

  Description:
    This function disables a device endpoint. The application may need to
    disable the endpoint when it want to change the endpoint characteristics.
    This could happen when the device features interfaces with multiple
    alternate settings.  If such cases, the host may request the device to
    switch to specific alternate setting by sending the Set Interface request.
    The device application must then disable the endpoint (if it was enabled)
    before re-enabling it with the new settings.The application can use the
    USB_DEVICE_EndpointIsEnabled function to check the status of the endpoint and
    USB_DEVICE_EndpointEnable function to enable the endpoint. 
    
  Precondition:
    The device should have been configured.

  Parameters:
    usbDeviceHandle    - USB Device Layer Handle.

    endpoint        - Endpoint to disable.
    
  Returns:
    USB_DEVICE_RESULT_OK - The endpoint was enabled successfully.

    USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID - The specified instance
    was not provisioned in the application and is invalid.

  Example:
    <code>

    // The following code example checks if an Set Alternate request has
    // been received and changes the endpoint characteristics based on the
    // alternate setting. Endpoint is 1 and direction is device to host.
    // Assume that endpoint size was 32 bytes in alternate setting 0.

    if(setAlternateRequest)
    {
        if(alternateSetting == 1)
        {
            // Check if the endpoint is already enabled.
            if(USB_DEVICE_EndpointIsEnabled(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN)))
            {
                // Disable the endpoint.
                USB_DEVICE_EndpointDisable(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN));
            }

            // Re-enable the endpoint with new settings
            USB_DEVICE_EndpointEnable(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN)
                        USB_TRANSFER_TYPE_BULK, 64);
        }
    }
    
    </code>

  Remarks:
    None.
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointDisable
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint
);

//******************************************************************************
/* Function:
    bool USB_DEVICE_EndpointIsEnabled
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT_ADDRESS endpoint,
    );
 
  Summary:
    Returns true if the endpoint is enabled.

  Description:
    This function returns true if the endpoint is enabled. The application can
    use this function when handling Set Interface requests in case of Vendor or
    Custom USB devices.

  Precondition:
    The device should have been configured.

  Parameters:
    usbDeviceHandle    - USB Device Layer Handle.

    endpoint        - Endpoint to disable.
    
  Returns:
    true    - The endpoint is enabled.

    false   - The endpoint is not enabled or the specified endpoint is not
              provisioned in the system and is invalid.

  Example:
    <code>

    // The following code example checks if an Set Alternate request has
    // been received and changes the endpoint characteristics based on the
    // alternate setting. Endpoint is 1 and direction is device to host.
    // Assume that endpoint size was 32 bytes in alternate setting 0.

    if(setAlternateRequest)
    {
        if(alternateSetting == 1)
        {
            // Check if the endpoint is already enabled.
            if(USB_DEVICE_EndpointIsEnabled(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN)))
            {
                // Disable the endpoint.
                USB_DEVICE_EndpointDisable(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN));
            }

            // Re-enable the endpoint with new settings
            USB_DEVICE_EndpointEnable(usbDeviceHandle, (0x1|USB_EP_DIRECTION_IN)
                        USB_TRANSFER_TYPE_BULK, 64);
        }
    }
    
    </code>

  Remarks:
    None.
*/

bool USB_DEVICE_EndpointIsEnabled
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint
);

//******************************************************************************
/* Function:
    USB_DEVICE_RESULT USB_DEVICE_EndpointTransferCancel
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT_ADDRESS endpoint,
        USB_DEVICE_TRANSFER_HANDLE handle
    );
 
  Summary:
    This function cancels a transfer scheduled on an endpoint.

  Description:
    This function cancels a transfer scheduled on an endpoint using the
    USB_DEVICE_EndpointRead and USB_DEVICE_EndpointWrite functions. If a
    transfer is still in the queue and its processing has not started, the
    transfer is canceled completely. A transfer that is in progress may or may
    not get canceled depending on the transaction that is presently in
    progress. If the last transaction of the transfer is in progress, the
    transfer will not be canceled.  If it is not the last transaction in
    progress, the in progress transfer will be allowed to complete. Pending 
	transactions will be canceled. The first transaction of an in progress 
	transfer cannot be canceled.

  Precondition:
    The USB Device should be in a configured state.

  Parameters:
    usbDeviceHandle - USB Device Layer Handle.

    endpoint        - Endpoint of which the transfer needs to be canceled.

    handle          - Transfer handle of the transfer to be canceled.
    
  Returns:
    USB_DEVICE_RESULT_OK    - The transfer will be canceled completely or 
                              partially.

    USB_DEVICE_RESULT_ERROR - The transfer could not be canceled because it has
                              either completed, the transfer handle is invalid 
                              or the last transaction is in progress.

  Example:
    <code>

    // The following code example cancels a transfer on endpoint 1, IN direction.

    USB_DEVICE_TRANSFER_HANDLE transferHandle;
    USB_DEVICE_RESULT result;

    result = USB_DEVICE_EndpointTransferCancel(usbDeviceHandle, 
                (0x1|USB_EP_DIRECTION_IN), transferHandle);

    if(USB_DEVICE_RESULT_OK == result)
    {
        // The transfer cancellation was either completely or 
        // partially successful.
    }
    
    </code>

  Remarks:
    None.
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointTransferCancel
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint,
    USB_DEVICE_TRANSFER_HANDLE transferHandle
);


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: The following constants, macros and functions are specific to 
// PIC32 implementation of the USB Device Layer.
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Included Files (continued)
// *****************************************************************************
// *****************************************************************************
/*  The file included below maps the interface definitions above to appropriate
    static implementations, depending on build mode.
*/

#include "usb/src/usb_device_mapping.h"

#endif
