/*******************************************************************************
  USB Device CDC Function Driver Interface

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device_cdc.h

  Summary:
    USB Device CDC Function Driver Interface

  Description:
    This file describes the USB Device CDC Function Driver interface. The 
    application should include this file if it needs to use the CDC Function
    Driver API.
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
// DOM-IGNORE-END

#ifndef _USB_DEVICE_CDC_H
#define _USB_DEVICE_CDC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "configuration.h"
#include "usb/usb_common.h"
#include "usb/usb_chapter_9.h"
#include "usb/usb_device.h"
#include "usb/src/usb_device_function_driver.h"
#include "usb/usb_cdc.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Device CDC Function Driver Index Constants

  Summary:
    USB Device CDC Function Driver Index Constants

  Description:
    This constants can be used by the application to specify CDC function
    driver instance indexes.

  Remarks:
    None.
*/

/* Use this to specify CDC Function Driver Instance 0 */
#define USB_DEVICE_CDC_INDEX_0 0    

/* Use this to specify CDC Function Driver Instance 1 */
#define USB_DEVICE_CDC_INDEX_1 1

/* Use this to specify CDC Function Driver Instance 2 */
#define USB_DEVICE_CDC_INDEX_2 2

/* Use this to specify CDC Function Driver Instance 3 */
#define USB_DEVICE_CDC_INDEX_3 3

/* Use this to specify CDC Function Driver Instance 4 */
#define USB_DEVICE_CDC_INDEX_4 4

/* Use this to specify CDC Function Driver Instance 5 */
#define USB_DEVICE_CDC_INDEX_5 5

/* Use this to specify CDC Function Driver Instance 6 */
#define USB_DEVICE_CDC_INDEX_6 6

/* Use this to specify CDC Function Driver Instance 7 */
#define USB_DEVICE_CDC_INDEX_7 7

// *****************************************************************************
/* USB Device CDC Function Driver Index

  Summary:
    USB Device CDC Function Driver Index

  Description:
    This uniquely identifies a CDC Function Driver instance.

  Remarks:
    None.
*/

typedef uintptr_t USB_DEVICE_CDC_INDEX;

// *****************************************************************************
/* USB Device CDC Function Driver Events

  Summary:
    USB Device CDC Function Driver Events

  Description:
    These events are specific to the USB Device CDC Function Driver instance.
    Each event description contains details about the  parameters passed with
    event. The contents of pData depends on the generated event.
    
    Events associated with the CDC Function Driver Specific Control Transfers
    require application response.  The application should respond to these
    events by using the USB_DEVICE_ControlReceive, USB_DEVICE_ControlSend
    and USB_DEVICE_ControlStatus functions.
    
    Calling the USB_DEVICE_ControlStatus function with a
    USB_DEVICE_CONTROL_STATUS_ERROR will stall the control transfer request.
    The application would do this if the control transfer request is not
    supported. Calling the USB_DEVICE_ControlStatus function with a
    USB_DEVICE_CONTROL_STATUS_OK will complete the status stage of the control
    transfer request. The application would do this if the control transfer
    request is supported 
    
    The following code snippet shows an example of a possible event handling
    scheme.

    <code>
    
    // This code example shows all CDC Function Driver events 
    // and a possible scheme for handling these events. In this example
    // event responses are not deferred. usbDeviceHandle is obtained while
    // opening the USB Device Layer through the USB_DEVICE_Open function.

    uint16_t * breakData;
    USB_DEVICE_HANDLE    usbDeviceHandle;
    USB_CDC_LINE_CODING  lineCoding;
    USB_CDC_CONTROL_LINE_STATE * controlLineStateData;

    USB_DEVICE_CDC_EVENT_RESPONSE USBDeviceCDCEventHandler
    (
        USB_DEVICE_CDC_INDEX instanceIndex, 
        USB_DEVICE_CDC_EVENT event, 
        void * pData,
        uintptr_t userData
    )
    {
        switch(event)
        {
            case USB_DEVICE_CDC_EVENT_SET_LINE_CODING:

                // In this case, the application should read the line coding
                // data that is sent by the host. The application must use the
                // USB_DEVICE_ControlReceive function to receive the 
                // USB_CDC_LINE_CODING type of data.
                
                USB_DEVICE_ControlReceive(usbDeviceHandle, &lineCoding, sizeof(USB_CDC_LINE_CODING));
                break;

            case USB_DEVICE_CDC_EVENT_GET_LINE_CODING:

                // In this case, the application should send the line coding
                // data to the host. The application must send the 
                // USB_DEVICE_ControlSend function to send the data. 

                USB_DEVICE_ControlSend(usbDeviceHandle, &lineCoding, sizeof(USB_CDC_LINE_CODING));
                break;

            case USB_DEVICE_CDC_EVENT_SET_CONTROL_LINE_STATE:
                
                // In this case, pData should be interpreted as a
                // USB_CDC_CONTROL_LINE_STATE pointer type.  The application
                // acknowledges the parameters by calling the
                // USB_DEVICE_ControlStatus function with the
                // USB_DEVICE_CONTROL_STATUS_OK option.
             
                controlLineStateData = (USB_CDC_CONTROL_LINE_STATE *)pData;
                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);   
                break;

            case USB_DEVICE_CDC_EVENT_SEND_BREAK:
               
                // In this case, pData should be interpreted as a uint16_t
                // pointer type to the break duration. The application
                // acknowledges the parameters by calling the
                // USB_DEVICE_ControlStatus() function with the
                // USB_DEVICE_CONTROL_STATUS_OK option.
                
                breakDuration = (uint16_t *)pData; 
                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                break;

            case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT:

                // This event indicates the data send request associated with
                // the latest USB_DEVICE_ControlSend function was
                // completed.  The application could use this event to track
                // the completion of the USB_DEVICE_CDC_EVENT_GET_LINE_CODING
                // request. 

                break;

            case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                // This event indicates the data that was requested using the
                // USB_DEVICE_ControlReceive function is available for the
                // application to peruse. The application could use this event
                // to track the completion of the
                // USB_DEVICE_CDC_EVENT_SET_LINE_CODING_EVENT event. The
                // application can then either accept the line coding data (as
                // shown here) or decline it by using the
                // USB_DEVICE_CONTROL_STATUS_ERROR flag in the
                // USB_DEVICE_ControlStatus function.
                
                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                break;
            
            case USB_DEVICE_CDC_EVENT_WRITE_COMPLETE:
                
                // This event indicates that a CDC Write Transfer request has
                // completed.  pData should be interpreted as a 
                // USB_DEVICE_CDC_EVENT_DATA_WRITE_COMPLETE pointer type. This
                // contains the transfer handle of the write transfer that
                // completed and amount of data that was written.
 
                break;

            case USB_DEVICE_CDC_EVENT_READ_COMPLETE:
                
                // This event indicates that a CDC Read Transfer request has
                // completed.  pData should be interpreted as a 
                // USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE pointer type. This
                // contains the transfer handle of the read transfer that
                // completed and amount of data that was written.
           
                break;
            
            case USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE:

                // This event indicates that a CDC Serial State Notification
                // Send request has completed. pData should be interpreted as a
                // USB_DEVICE_CDC_EVENT_DATA_SERIAL_STATE_NOTIFICATION_COMPLETE
                // pointer type. This will contain the transfer handle
                // associated with the send request and the amount of data that
                // was sent.     

            break

             default:
                break;
         }

        return(USB_DEVICE_CDC_EVENT_RESPONSE_NONE);
    }
    </code>


  Remarks:
    The USB Device CDC control transfer related events allow the application to
    defer responses. This allows the application some time to obtain the
    response data rather than having to respond to the event immediately. Note
    that a USB host will typically wait for event response for a finite time
    duration before timing out and canceling the event and associated
    transactions. Even when deferring response, the application must respond
    promptly if such time outs have to be avoided.
*/

typedef enum
{
    /* This event occurs when the host issues a SET LINE CODING command.
       The application must provide a USB_CDC_LINE_CODING data structure to the
       device layer to receive the line coding data that the host will provide.
       The application must provide the buffer by calling the
       USB_DEVICE_ControlReceive function either in the event handler or in
       the application, after returning from the event handler function. The
       pData parameter will be NULL. The application can use the
       USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED event to track
       completion of the command. */

    USB_DEVICE_CDC_EVENT_SET_LINE_CODING,

    /* This event occurs when the host issues a GET LINE CODING command.
       The application must provide a USB_CDC_LINE_CODING data structure to the
       device layer that contains the line coding data to be provided to the
       host. The application must provide the buffer by calling the
       USB_DEVICE_ControlSend function either in the event handler or in the
       application, after returning from the event handler function. The
       application can use the USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT
       event to track completion of the command. */
       
    USB_DEVICE_CDC_EVENT_GET_LINE_CODING,

    /* This event occurs when the host issues a SET CONTROL LINE STATE command.
       The application must interpret the pData parameter as
       USB_CDC_CONTROL_LINE_STATE pointer type. This data structure contains the
       control line state data. The application can then use the
       USB_DEVICE_ControlStatus function to indicate acceptance or rejection
       of the command. The USB_DEVICE_ControlStatus function can be called
       from the event handler or in the application, after returning from the
       event handler.*/
       
    USB_DEVICE_CDC_EVENT_SET_CONTROL_LINE_STATE,

    /* This event occurs when the host issues a SEND BREAK command. The
       application must interpret the pData parameter as a
       USB_DEVICE_CDC_EVENT_DATA_SEND_BREAK pointer type.  This data structure
       contains the break duration data.  The application can then use the
       USB_DEVICE_ControlStatus function to indicate acceptance of rejection
       of the command. The USB_DEVICE_ControlStatus function can be called
       from the event handler or in the application, after returning from the
       event handler. */

    USB_DEVICE_CDC_EVENT_SEND_BREAK,

    /* This event occurs when a write operation scheduled by calling the
       USB_DEVICE_CDC_Write function has completed. The pData parameter should
       be interpreted as a USB_DEVICE_CDC_EVENT_DATA_WRITE_COMPLETE pointer
       type. This will contain the transfer handle associated with the
       completed write transfer and the amount of data written. */ 

    USB_DEVICE_CDC_EVENT_WRITE_COMPLETE,

    /* This event occurs when a read operation scheduled by calling the
       USB_DEVICE_CDC_Read function has completed. The pData parameter should
       be interpreted as a USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE pointer
       type. This will contain the transfer handle associated with the
       completed read transfer and the amount of data read. */

    USB_DEVICE_CDC_EVENT_READ_COMPLETE,

    /* This event occurs when a serial state notification scheduled using the
       USB_DEVICE_CDC_SerialStateNotificationSend function, was sent to the host. The
       pData parameter should be interpreted as a
       USB_DEVICE_CDC_EVENT_DATA_SERIAL_STATE_NOTIFICATION_COMPLETE pointer type
       and will contain the transfer handle associated with the completed send
       transfer and the amount of data sent. */

    USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE,

    /* This event occurs when the data stage of a control read transfer has
       completed. This event would occur after the application uses the
       USB_DEVICE_ControlSend function to respond to the
       USB_DEVICE_CDC_EVENT_GET_LINE_CODING event. */

    USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT,

    /* This event occurs when the data stage of a control write transfer has
       completed. This would occur after the application would respond with a
       USB_DEVICE_ControlReceive function to the
       USB_DEVICE_CDC_EVENT_SET_LINE_CODING_EVENT and the data has been
       received. The application should respond to this event by calling the
       USB_DEVICE_ControlStatus function with the USB_DEVICE_CONTROL_STATUS_OK
       flag to acknowledge the received data or the
       USB_DEVICE_CONTROL_STATUS_ERROR flag to reject it and stall the control
       transfer */

    USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED,

    /* This event occurs when a control transfer that this instance of CDC
       function driver responded to was aborted by the host. The application can
       use this event to reset its CDC function driver related control transfer
       state machine */
    USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_ABORTED

} USB_DEVICE_CDC_EVENT;

// *****************************************************************************
/* USB Device CDC Function Driver Event Handler Response Type

  Summary:
    USB Device CDC Function Driver Event Callback Response Type

  Description:
    This is the return type of the CDC Function Driver event handler.

  Remarks:
    None.
*/

typedef void USB_DEVICE_CDC_EVENT_RESPONSE;

// *****************************************************************************
/* USB Device CDC Function Driver Event Handler Response None  

  Summary:
    USB Device CDC Function Driver Event Handler Response Type None.

  Description:
    This is the definition of the CDC Function Driver Event Handler Response
    Type none.

  Remarks:
    Intentionally defined to be empty.
*/

#define USB_DEVICE_CDC_EVENT_RESPONSE_NONE

// *****************************************************************************
/* USB Device CDC Event Handler Function Pointer Type.

  Summary:
    USB Device CDC Event Handler Function Pointer Type.

  Description:
    This data type defines the required function signature of the USB Device CDC
    Function Driver event handling callback function. The application must
    register a pointer to a CDC Function Driver events handling function whose
    function signature (parameter and return value types) match the types
    specified by this function pointer in order to receive event call backs from
    the CDC Function Driver. The function driver will invoke this function with
    event relevant parameters. The description of the event handler function
    parameters is given here.

    instanceIndex           - Instance index of the CDC Function Driver that generated the 
                              event.
    
    event                   - Type of event generated.
    
    pData                   - This parameter should be type cast to an event specific
                              pointer type based on the event that has occurred. Refer 
                              to the USB_DEVICE_CDC_EVENT enumeration description for
                              more details.
    
    context                 - Value identifying the context of the application that 
                              was registered along with the event handling function.

  Remarks:
    The event handler function executes in the USB interrupt context when the
    USB Device Stack is configured for interrupt based operation. It is not
    advisable to call blocking functions or computationally intensive functions
    in the event handler. Where the response to a control transfer related event
    requires extended processing, the response to the control transfer should be
    deferred and the event handler should be allowed to complete execution.
*/

typedef USB_DEVICE_CDC_EVENT_RESPONSE (*USB_DEVICE_CDC_EVENT_HANDLER)
(
    USB_DEVICE_CDC_INDEX instanceIndex,
    USB_DEVICE_CDC_EVENT event,
    void * pData,
    uintptr_t context
);

// *****************************************************************************
/* USB Device CDC Transfer Flags

  Summary:
    USB Device CDC Function Driver Transfer Flags

  Description:
    These flags are used to indicate status of the pending data while sending
    data to the host by using the USB_DEVICE_CDC_Write function.

  Remarks:
    The relevance of the specified flag depends on the size of the buffer. Refer
    to the individual flag descriptions for more details.
*/

typedef enum 
{
    /* This flag indicates there is no further data to be sent in this transfer
       and that the transfer should end. If the size of the transfer is a
       multiple of the maximum packet size for related endpoint configuration,
       the function driver will send a zero length packet to indicate end of the
       transfer to the host. */

    USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE /* DOM-IGNORE-BEGIN */ = (1<<0) /* DOM-IGNORE-END */,

    /* This flag indicates there is more data to be sent in this transfer. If
       the size of the transfer is a multiple of the maximum packet size for the
       related endpoint configuration, the function driver will not send a zero
       length packet. If the size of the transfer is greater than (but not a
       multiple of) the maximum packet size, the function driver will only send
       maximum packet size amount of data. If the size of the transfer is
       greater than endpoint size but not an exact multiple of endpoint size,
       only the closest endpoint size multiple bytes of data will be sent. This
       flag should not be specified if the size of the transfer is less than
       maximum packet size. */

    USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING /* DOM-IGNORE-BEGIN */ = (1<<1) /* DOM-IGNORE-END */

} USB_DEVICE_CDC_TRANSFER_FLAGS;

// *****************************************************************************
/* USB Device CDC Function Driver Transfer Handle Definition
 
  Summary:
    USB Device CDC Function Driver Transfer Handle Definition.

  Description:
    This definition defines a USB Device CDC Function Driver Transfer Handle. A
    Transfer Handle is owned by the application but its value is modified by the
    USB_DEVICE_CDC_Write, USB_DEVICE_CDC_Read and the
    USB_DEVICE_CDC_SerialStateNotificationSend functions. The transfer handle is
    valid for the life time of the transfer and expires when the transfer
    related event had occurred.

  Remarks:
    None.
*/

typedef uintptr_t USB_DEVICE_CDC_TRANSFER_HANDLE;

// *****************************************************************************
/* USB Device CDC Function Driver Invalid Transfer Handle Definition
 
  Summary:
    USB Device CDC Function Driver Invalid Transfer Handle Definition.

  Description:
    This definition defines a USB Device CDC Function Driver Invalid Transfer 
    Handle. A Invalid Transfer Handle is returned by the USB_DEVICE_CDC_Write,
    USB_DEVICE_CDC_Read and the USB_DEVICE_CDC_SerialStateNotificationSend
    functions when the request was not successful.

  Remarks:
    None.
*/

#define USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID  ((USB_DEVICE_CDC_TRANSFER_HANDLE)(-1))

// *****************************************************************************
/* USB Device CDC Function Driver USB Device CDC Result enumeration.
 
  Summary:
    USB Device CDC Function Driver USB Device CDC Result enumeration.

  Description:
    This enumeration lists the possible USB Device CDC Function Driver operation
    results. These values are returned by USB Device CDC Library functions.

  Remarks:
    None.
*/

typedef enum
{
    /* The operation was successful */
    USB_DEVICE_CDC_RESULT_OK /* DOM-IGNORE-BEGIN */ = USB_ERROR_NONE /* DOM-IGNORE-END */,

    /* The transfer size is invalid. Refer to the description
     * of the read or write function for more details */
    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_SIZE_INVALID 
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_IRP_SIZE_INVALID /* DOM-IGNORE-END */,

    /* The transfer queue is full and no new transfers can be
     * scheduled */
    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL 
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_IRP_QUEUE_FULL /* DOM-IGNORE-END */,

    /* The specified instance is not provisioned in the system */
    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_DEVICE_FUNCTION_INSTANCE_INVALID /* DOM-IGNORE-END */,

    /* The specified instance is not configured yet */
    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED 
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_ENDPOINT_NOT_CONFIGURED /* DOM-IGNORE-END */,

    /* The event handler provided is NULL */
    USB_DEVICE_CDC_RESULT_ERROR_PARAMETER_INVALID 
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_PARAMETER_INVALID /* DOM-IGNORE-END */,
        
    /* Transfer terminated because host halted the endpoint */
    USB_DEVICE_CDC_RESULT_ERROR_ENDPOINT_HALTED
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_ENDPOINT_HALTED /* DOM-IGNORE-END */,

    /* Transfer terminated by host because of a stall clear */
    USB_DEVICE_CDC_RESULT_ERROR_TERMINATED_BY_HOST
        /* DOM-IGNORE-BEGIN */ = USB_ERROR_TRANSFER_TERMINATED_BY_HOST /* DOM-IGNORE-END */,

    /* General CDC Function driver error */
    USB_DEVICE_CDC_RESULT_ERROR

} USB_DEVICE_CDC_RESULT;

// *****************************************************************************
/* USB Device CDC Function Driver Send Break Event Data
 
  Summary:
    USB Device CDC Function Driver Send Break Event Data

  Description:
    This data type defines the data structure returned by the driver along with
    USB_DEVICE_CDC_EVENT_SEND_BREAK event.

  Remarks:
    None.
*/

typedef struct
{
    /* Duration of break signal */
    uint16_t breakDuration;

} USB_DEVICE_CDC_EVENT_DATA_SEND_BREAK; 

// *****************************************************************************
/* USB Device CDC Function Driver Read and Write Complete Event Data.
 
  Summary:
    USB Device CDC Function Driver Read and Write Complete Event Data.

  Description:
    This data type defines the data structure returned by the driver along with
    USB_DEVICE_CDC_EVENT_READ_COMPLETE and USB_DEVICE_CDC_EVENT_WRITE_COMPLETE
    events.

  Remarks:
    None.
*/

typedef struct
{
    /* Transfer handle associated with this
     * read or write request */
    USB_DEVICE_CDC_TRANSFER_HANDLE handle;

    /* Indicates the amount of data (in bytes) that was
     * read or written */
    size_t length;
    
    /* Completion status of the transfer */
    USB_DEVICE_CDC_RESULT status;

} 
USB_DEVICE_CDC_EVENT_DATA_WRITE_COMPLETE, 
USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE,
USB_DEVICE_CDC_EVENT_DATA_SERIAL_STATE_NOTIFICATION_COMPLETE;

// *****************************************************************************
// *****************************************************************************
// Section: CDC Interface Function Definitions
// *****************************************************************************
// *****************************************************************************

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
    
  Precondition:
    This function should be called when the function driver has been initialized
    as a result of a set configuration.

  Parameters:
    instance        - Instance of the CDC Function Driver.

    eventHandler    - A pointer to event handler function.

    context         - Application specific context that is returned in the 
                      event handler.

  Returns:
    USB_DEVICE_CDC_RESULT_OK - The operation was successful
    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID - The specified instance does 
    not exist
    USB_DEVICE_CDC_RESULT_ERROR_PARAMETER_INVALID - The eventHandler parameter is 
    NULL
    
  Example:
    <code>
    // This code snippet shows an example registering an event handler. Here
    // the application specifies the context parameter as a pointer to an
    // application object (appObject) that should be associated with this 
    // instance of the CDC function driver.

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

    // Get Line Coding Data 
    USB_CDC_LINE_CODING getLineCodingData;
    
    // Control Line State 
    USB_CDC_CONTROL_LINE_STATE controlLineStateData;
    
    // Set Line Coding Data 
    USB_CDC_LINE_CODING setLineCodingData;
    
    USB_DEVICE_CDC_RESULT result;
    
    USB_DEVICE_CDC_EVENT_RESPONSE APP_USBDeviceCDCEventHandler 
    (
        USB_DEVICE_CDC_INDEX instanceIndex ,
        USB_DEVICE_CDC_EVENT event ,
        void* pData, 
        uintptr_t context 
    )
    {
        // Event Handling comes here
        
        switch(event) 
        {
            case USB_DEVICE_CDC_EVENT_GET_LINE_CODING:
					// This means the host wants to know the current line
					// coding. This is a control transfer request. Use the
					// USB_DEVICE_ControlSend() function to send the data to
					// host.  

					USB_DEVICE_ControlSend(usbDeviceHandle,
						&getLineCodingData, sizeof(USB_CDC_LINE_CODING));

            break;
            
            case USB_DEVICE_CDC_EVENT_SET_LINE_CODING:

                // This means the host wants to set the line coding.
                // This is a control transfer request. Use the
                // USB_DEVICE_ControlReceive() function to receive the
                // data from the host 

                USB_DEVICE_ControlReceive(usbDeviceHandle,
                        &setLineCodingData, sizeof(USB_CDC_LINE_CODING));

            break;
            
            case USB_DEVICE_CDC_EVENT_SET_CONTROL_LINE_STATE:

                // This means the host is setting the control line state.
                // Read the control line state. We will accept this request
                // for now.
                controlLineStateData.dtr = ((USB_CDC_CONTROL_LINE_STATE *)pData)->dtr; 
                controlLineStateData.carrier = ((USB_CDC_CONTROL_LINE_STATE *)pData)->carrier; 
                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);

            break;
            
            case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                // The data stage of the last control transfer is
                // complete. For now we accept all the data 

                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);
                
            break;
            
                case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT:

                // This means the GET LINE CODING function data is valid. We dont
                // do much with this data in this demo. 
            break;
            
            case USB_DEVICE_CDC_EVENT_SEND_BREAK:

                // This means that the host is requesting that a break of the
                // specified duration be sent. 
                USB_DEVICE_ControlStatus(usbDeviceHandle, USB_DEVICE_CONTROL_STATUS_OK);    
            
            break;
          
            case USB_DEVICE_CDC_EVENT_READ_COMPLETE:
                // This means that the host has sent some data
                break;
                
            case USB_DEVICE_CDC_EVENT_WRITE_COMPLETE:
                // This means that the host has sent some data 
                break;
            
            default:
                break; 
        }

        return USB_DEVICE_CDC_EVENT_RESPONSE_NONE;
    }

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
				// Register CDC Function driver Event Handler.  
				USB_DEVICE_CDC_EventHandlerSet(USB_DEVICE_CDC_INDEX_0, APP_USBDeviceCDCEventHandler, (uintptr_t)0);
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

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_EventHandlerSet 
( 
    USB_DEVICE_CDC_INDEX instanceIndex ,
    USB_DEVICE_CDC_EVENT_HANDLER eventHandler,
    uintptr_t context
);

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

    The behavior of the write request depends on the flags and size parameter.
    If the application intends to send more data in a request, then it should
    use the USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING flag. If there is no
    more data to be sent in the request, the application must use the
    USB_DEVICE_CDC_EVENT_WRITE_COMPLETE flag. This is explained in more detail
    here:
    
    - If size is a multiple of maxPacketSize and flag is set as
    USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE, the write function will append
    a Zero Length Packet (ZLP) to complete the transfer. 
    
    - If size is a multiple of maxPacketSize and flag is set as
    USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING, the write function will
    not append a ZLP and hence will not complete the transfer. 
    
    - If size is greater than but not a multiple of maxPacketSize and flags is
    set as USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE, the write function
    returns an error code and sets the transferHandle parameter to
    USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.
    
    - If size is greater than but not a multiple of maxPacketSize and flags is
    set as USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING, the write function
    fails and return an error code and sets the transferHandle parameter to
    USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.
    
    - If size is less than maxPacketSize and flag is set as
    USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE, the write function schedules
    one packet. 
    
    - If size is less than maxPacketSize and flag is set as
    USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING, the write function
    returns an error code and sets the transferHandle parameter to 
    USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.

    - If size is 0 and the flag is set
    USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE, the function driver will
    schedule a Zero Length Packet.

    Completion of the write transfer is indicated by the 
    USB_DEVICE_CDC_EVENT_WRITE_COMPLETE event. The amount of data written along
    with the transfer handle is returned along with the event.
   
  Precondition:
    The function driver should have been configured.

  Parameters:
    instance  - USB Device CDC Function Driver instance.

    transferHandle - Pointer to a USB_DEVICE_CDC_TRANSFER_HANDLE type of
                     variable. This variable will contain the transfer handle
                     in case the write request was  successful.

    data - pointer to the data buffer that contains the data to written.

    size - Size of the data buffer. Refer to the description section for more
           details on how the size affects the transfer.

    flags - Flags that indicate whether the transfer should continue or end.
            Refer to the description for more details.

  Returns:

    USB_DEVICE_CDC_RESULT_OK - The write request was successful. transferHandle
    contains a valid transfer handle.
    
    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL - internal request queue 
    is full. The write request could not be added.

    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_SIZE_INVALID - The specified transfer
    size and flag parameter are invalid.

    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED - The specified 
    instance is not configured yet.

    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID - The specified instance
    was not provisioned in the application and is invalid.

  Example:
    <code>
    // Below is a set of examples showing various conditions trying to
    // send data with the Write command.  
    //
    // This assumes that driver was opened successfully.
    // Assume maxPacketSize is 64.
    
    USB_DEVICE_CDC_TRANSFER_HANDLE transferHandle;
    USB_DEVICE_CDC_RESULT writeRequestHandle;
    USB_DEVICE_CDC_INDEX instance;

    //-------------------------------------------------------
    // In this example we want to send 34 bytes only.

    writeRequestResult = USB_DEVICE_CDC_Write(instance,
                            &transferHandle, data, 34, 
                            USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE);

    if(USB_DEVICE_CDC_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    //-------------------------------------------------------
    // In this example we want to send 64 bytes only.
    // This will cause a ZLP to be sent.

    writeRequestResult = USB_DEVICE_CDC_Write(instance,
                            &transferHandle, data, 64, 
                            USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE);

    if(USB_DEVICE_CDC_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    //-------------------------------------------------------
    // This example will return an error because size is less
    // than maxPacketSize and the flag indicates that more
    // data is pending.

    writeRequestResult = USB_DEVICE_CDC_Write(instanceHandle,
                            &transferHandle, data, 32, 
                            USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING);

    //-------------------------------------------------------
    // In this example we want to place a request for a 70 byte transfer.
    // The 70 bytes will be sent out in a 64 byte transaction and a 6 byte
    // transaction completing the transfer.

    writeRequestResult = USB_DEVICE_CDC_Write(instanceHandle,
                            &transferHandle, data, 70, 
                            USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE);

    if(USB_DEVICE_CDC_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    //-------------------------------------------------------
    // In this example we want to place a request for a 70 bytes and the flag
    // is set to data pending. This will result in an error. The size of data
    // when the data pending flag is specified should be a multiple of the
    // endpoint size.

    writeRequestResult = USB_DEVICE_CDC_Write(instanceHandle,
                            &transferHandle, data, 70, 
                            USB_DEVICE_CDC_TRANSFER_FLAGS_MORE_DATA_PENDING);

    if(USB_DEVICE_CDC_RESULT_OK != writeRequestResult)
    {
        //Do Error handling here
    }

    // The completion of the write request will be indicated by the 
    // USB_DEVICE_CDC_EVENT_WRITE_COMPLETE event.

    </code>

  Remarks:
    While the using the CDC Function Driver with the PIC32MZ USB module, the
    transmit buffer provided to the USB_DEVICE_CDC_Write function should be placed
    in coherent memory and aligned at a 16 byte boundary.  This can be done by
    declaring the buffer using the  __attribute__((coherent, aligned(16)))
    attribute. An example is shown here

    <code>
    uint8_t data[256] __attribute__((coherent, aligned(16)));
    </code>
*/

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_Write
(
    USB_DEVICE_CDC_INDEX instanceIndex,
    USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle,
    const void * data, 
    size_t size, 
    USB_DEVICE_CDC_TRANSFER_FLAGS flags
);

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
    
  Precondition:
    The function driver should have been configured.

  Parameters:
    instance        - USB Device CDC Function Driver instance.

    transferHandle  - Pointer to a USB_DEVICE_CDC_TRANSFER_HANDLE type of
                      variable. This variable will contain the transfer handle
                      in case the read request was  successful.

    data            - pointer to the data buffer where read data will be stored.

    size            - Size of the data buffer. Refer to the description section 
                      for more details on how the size affects the transfer.

  Returns:
    USB_DEVICE_CDC_RESULT_OK - The read request was successful. transferHandle
    contains a valid transfer handle.
    
    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL - internal request queue 
    is full. The write request could not be added.

    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_SIZE_INVALID - The specified transfer
    size was not a multiple of endpoint size or is 0.

    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED - The specified 
    instance is not configured yet.

    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID - The specified instance
    was not provisioned in the application and is invalid.

  Example:
    <code>
    // Shows an example of how to read. This assumes that
    // driver was opened successfully.

    USB_DEVICE_CDC_TRANSFER_HANDLE transferHandle;
    USB_DEVICE_CDC_RESULT readRequestResult;
    USB_DEVICE_CDC_HANDLE instanceHandle;

    readRequestResult = USB_DEVICE_CDC_Read(instanceHandle,
                            &transferHandle, data, 128);

    if(USB_DEVICE_CDC_RESULT_OK != readRequestResult)
    {
        //Do Error handling here
    }

    // The completion of the read request will be indicated by the 
    // USB_DEVICE_CDC_EVENT_READ_COMPLETE event.

    </code>

  Remarks:
    While the using the CDC Function Driver with the PIC32MZ USB module, the
    receive buffer provided to the USB_DEVICE_CDC_Read function should be placed
    in coherent memory and aligned at a 16 byte boundary.  This can be done by
    declaring the buffer using the  __attribute__((coherent, aligned(16)))
    attribute. An example is shown here

    <code>
    uint8_t data[256] __attribute__((coherent, aligned(16)));
    </code>
*/

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_Read
(
    USB_DEVICE_CDC_INDEX instanceIndex,
    USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle,
    void * data, 
    size_t size
);

// *****************************************************************************
/* Function:
    USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_SerialStateNotificationSend
    (
        USB_DEVICE_CDC_INDEX instanceIndex,
        USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle,
        USB_CDC_SERIAL_STATE * notificationData
    );
    
  Summary:
    This function schedules a request to send serial state notification to the host.

  Description:
    This function places a request to send serial state notification data to the
    host. The function will place the request with the driver, the request will
    get serviced when the data is requested by the USB host.  A handle to the
    request is returned in the transferHandle parameter. The termination of the
    request is indicated by the
    USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE event. The amount of
    data transmitted and the transfer handle associated with the request is
    returned along with the event in the serialStateNotificationCompleteData
    member of pData parameter of the event handler. The transfer handle expires
    when the event handler for the
    USB_DEVICE_CDC_EVENT_SERIAL_STATE_NOTIFICATION_COMPLETE event exits. If the
    send request could not be accepted, the function returns an error code and
    transferHandle will contain the value
    USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID.

  Precondition:
    The function driver should have been configured

  Parameters:
    instance        - USB Device CDC Function Driver instance.
    
    transferHandle  - Pointer to a output only variable that will contain transfer
                      handle.
    
    notificationData - USB_DEVICE_CDC_SERIAL_STATE_NOTIFICATION type of
                       notification data to be sent to the host.

  Returns:
    USB_DEVICE_CDC_RESULT_OK - The request was successful. transferHandle
    contains a valid transfer handle.
    
    USB_DEVICE_CDC_RESULT_ERROR_TRANSFER_QUEUE_FULL - Internal request queue 
    is full. The request could not be added.

    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_NOT_CONFIGURED - The specified 
    instance is not configured yet.

    USB_DEVICE_CDC_RESULT_ERROR_INSTANCE_INVALID - The specified instance
    was not provisioned in the application and is invalid.

  Example:
    <code>

    USB_CDC_SERIAL_STATE notificationData;
    
    // This application function could possibly update the notificationData
    // data structure.

    APP_UpdateNotificationData(&notificationData);

    // Now send the updated notification data to the host.

    result = USB_DEVICE_CDC_SerialStateNotificationSend
                (instanceIndex, &transferHandle, &notificationData);
    
    if(USB_DEVICE_CDC_RESULT_OK != result)
    {
        // Error handling here. The transferHandle will contain
        // USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID in this case.
    } 
    
    </code>

  Remarks:
    While the using the CDC Function Driver with the PIC32MZ USB module, the
    notification data buffer provided to the
    USB_DEVICE_CDC_SerialStateNotificationSend function should be placed in
    coherent memory and aligned at a 16 byte boundary.  This can be done by
    declaring the buffer using the __attribute__((coherent, aligned(16)))
    attribute. An example is shown here

    <code>
    uint8_t data[256] __attribute__((coherent, aligned(16)));
    </code>
*/

USB_DEVICE_CDC_RESULT USB_DEVICE_CDC_SerialStateNotificationSend 
( 
    USB_DEVICE_CDC_INDEX instanceIndex ,
    USB_DEVICE_CDC_TRANSFER_HANDLE * transferHandle ,
    USB_CDC_SERIAL_STATE * notificationData
);

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Types. This section is specific to PIC32 implementation
//          of the USB Device CDC Function Driver
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Device CDC Function Driver Function Pointer

  Summary:
    USB Device CDC Function Driver Function pointer

  Description:
    This is the USB Device CDC Function Driver Function pointer. This should
    registered with the device layer in the function driver registration table.

  Remarks:
    None.
*/

/*DOM-IGNORE-BEGIN*/extern const USB_DEVICE_FUNCTION_DRIVER cdcFunctionDriver;/*DOM-IGNORE-END*/
#define USB_DEVICE_CDC_FUNCTION_DRIVER /*DOM-IGNORE-BEGIN*/&cdcFunctionDriver/*DOM-IGNORE-END*/

// *****************************************************************************
/* USB Device CDC Function Driver Initialization Data Structure

  Summary:
    USB Device CDC Function Driver Initialization Data Structure

  Description:
    This data structure must be defined for every instance of the CDC function 
    driver. It is passed to the CDC function driver, by the Device Layer,
    at the time of initialization. The funcDriverInit member of the 
    Device Layer Function Driver registration table entry must point to this
    data structure for an instance of the CDC function driver. 

  Remarks:
    The queue sizes that are specified in this data structure are also affected
    by the USB_DEVICE_CDC_QUEUE_DEPTH_COMBINED configuration macro.
*/

typedef struct 
{
    /* Size of the read queue for this instance
     * of the CDC function driver */
    size_t queueSizeRead;
    
    /* Size of the write queue for this instance
     * of the CDC function driver */
    size_t queueSizeWrite;

    /* Size of the serial state notification
     * queue size*/
    size_t queueSizeSerialStateNotification;

} USB_DEVICE_CDC_INIT;

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif

