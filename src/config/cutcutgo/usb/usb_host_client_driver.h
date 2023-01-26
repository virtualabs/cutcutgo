/********************************************************************************
  USB Host Layer Client Driver Interface Definition

  Company:
    Microchip Technology Inc.

  File Name:
    usb_host_client_driver.h

  Summary:
    USB Host Layer Client Driver Interface Definition Header

  Description:
    This header file contains the function prototypes and definitions of the
    data types and constants that make up the interface between the client 
    driver and the USB HOST layer.
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
#ifndef _USB_HOST_CLIENT_DRIVER_H_
#define _USB_HOST_CLIENT_DRIVER_H_

#include <stdint.h>
#include <stddef.h>
#include "usb/usb_host.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
// *****************************************************************************
// Section: USB Host Client Driver Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Host Layer Device Client Handle

  Summary:
    Host Layer Device Client Handle

  Description:
    This type defines the type of handle that the host provides to the client
    driver for device level access. The host layer provides this handle in the
    deviceAssign() function of the client driver.

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_DEVICE_CLIENT_HANDLE;

// *****************************************************************************
/* Host Layer Device Invalid Client Handle 

  Summary:
    Host Layer Device Invalid Client Handle

  Description:
    This constant defines an Invalid Device Client Handle

  Remarks:
    None.
*/

#define USB_HOST_DEVICE_CLIENT_HANDLE_INVALID ((USB_HOST_DEVICE_CLIENT_HANDLE)(-1))

// *****************************************************************************
/* Host Layer Interface Client Handle

  Summary:
    Host Layer Interface Client Handle

  Description:
    This type defines the type of handle that the host provides to the client
    driver for interface level access. The host layer provides this handle in
    the interfaceAssign() function of the client driver.

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_DEVICE_INTERFACE_HANDLE;

// *****************************************************************************
/* Host Layer Device Events Handler Function Return Type

  Summary:
    Host Layer Device Events Handler Function Return Type.

  Description:
    This type defines the return type of the Host Layer Device Events Handler
    Function.

  Remarks:
    None.
*/

typedef enum 
{
    /* Specifying this return value indicates that client driver has no response
       to this event. */
    USB_HOST_DEVICE_EVENT_RESPONSE_NONE

} USB_HOST_DEVICE_EVENT_RESPONSE;

// *****************************************************************************
/* Host Layer Device Interface Events Handler Function Return Type

  Summary:
    Host Layer Device Interface Events Handler Function Return Type.

  Description:
    This type defines the return type of the Host Layer Device Interface Events
    Handler Function.

  Remarks:
    None.
*/

typedef enum 
{
    /* Specifying this return value indicates that client driver has no response
       to this event. */
    USB_HOST_DEVICE_INTERFACE_EVENT_RESPONSE_NONE

} USB_HOST_DEVICE_INTERFACE_EVENT_RESPONSE;

// *****************************************************************************
/* USB Host Transfer Handle

  Summary:
    Type identifying a USB Host Transfer Handle 

  Description: 
    This type identifies a USB Host Client Transfer Handle. A transfer handle is
    returned when the client driver schedules a Host Layer transfer. This
    transfer handle is unique and allows the host to track the transfer. 

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_TRANSFER_HANDLE;

// *****************************************************************************
/* USB Host Invalid Transfer Handle

  Summary:
    Constant defining an invalid USB Host Transfer Handle

  Description:
    This type identifies an invalid USB Host Transfer Handle. The transfer
    function returns this handle when a transfer could not be scheduled.

  Remarks:
    None.
*/

#define USB_HOST_TRANSFER_HANDLE_INVALID ((USB_HOST_TRANSFER_HANDLE)(-1))

// *****************************************************************************
/* USB Host Device Events

  Summary:
    Defines the possible Device Events.

  Description:
    This enumeration lists the possible Device events that host layer can
    provide to a client driver. These event are only available to client drivers
    that have devices assigned to them (their deviceAssign() function was called
    at the time of device attach). 

  Remarks:
    None.
*/

typedef enum
{
    /* This event occurs when the host layer has configured the device. All
       client drivers that have opened this device will receive this event. The
       event is accompanied by the USB_HOST_DEVICE_DATA_CONFIGURATION_SET_DATA
       type of event data that contains the result of the operation. */
    USB_HOST_DEVICE_EVENT_CONFIGURATION_SET,

    /* This event occurs when a USB_HOST_ConfigurationDescriptorGet() function
       has completed. This event is accompanied by the
       USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE_DATA type of
       event data that contains the result of the transfer. */
    USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE

} USB_HOST_DEVICE_EVENT;

// *****************************************************************************
/* USB Host Device Interface Events

  Summary:
    Defines the possible Device Interface Events.

  Description:
    This enumeration lists the possible Device interface events that host layer can
    provide to a client driver. These event are only available to client drivers
    that have interfaces assigned to them (their deviceAssign() function was called
    at the time of device attach). 

  Remarks:
    None.
*/

typedef enum
{
    /* This event occurs when a Bulk, Isochronous or Interrupt transfer has
       completed. This event is accompanied by the
       USB_HOST_DEVICE_INTERFACE_EVENT_TRANSFER_COMPLETE_DATA type of event data
       that contains the result of the transfer. */
    USB_HOST_DEVICE_INTERFACE_EVENT_TRANSFER_COMPLETE,

    /* This event occurs when a alternate setting request has completed. This
       event is accompanied by the
       USB_HOST_DEVICE_INTERFACE_EVENT_SET_INTERFACE_COMPLETE_DATA type of event
       data that contains the result of the transfer. */
    USB_HOST_DEVICE_INTERFACE_EVENT_SET_INTERFACE_COMPLETE,

    /* This event occurs when a endpoint halt clear request has completed. This
       event is accompanied by the
       USB_HOST_DEVICE_INTERFACE_EVENT_PIPE_HALT_CLEAR_COMPLETE_DATA type of
       event data that contains the result of the transfer. */
    USB_HOST_DEVICE_INTERFACE_EVENT_PIPE_HALT_CLEAR_COMPLETE,

} USB_HOST_DEVICE_INTERFACE_EVENT;

// *****************************************************************************
/* USB Host Client Driver Interface

  Summary:
    Defines the interface between the client driver and USB Host Layer.

  Description:
    This type defines the interface between the client driver and the USB Host
    Layer. Any client driver that intends to operate with the USB Host Layer
    must implement the functions defined in this structure. This structure must
    be registered with host layer, through the TPL table, against VID PID entry
    (for a device client driver) or Class Subclass Protocol entry for a client
    driver. The Host Layer will invoke these functions at different times during
    the life time of the connected device.

  Remarks
    None.
*/

typedef struct
{
    /* The initialize function is called when the USB Host Layer initializes.
       The init parameter from the TPL is passed to the initialize function */ 

    void (*initialize)(void * init);

    /* The deinitialize function is called when the USB Host Layer
       deinitializes. */

    void (*deinitialize)(void);

    /* The reinitialize function is called when the USB Host Layer
       reinitializes. The initialization parameter from the TPL is passed to the
       reinitialize function. */

    void (*reinitialize)(void * init);

    /* The host layer calls this client driver function when the when it has a
       found a device level VID PID or class subclass protocol match. The
       pointer to the device descriptor is made available to the function along
       withe device client handle and the device object handle */

    void (*deviceAssign)
    (
        USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle,
        USB_DEVICE_DESCRIPTOR * deviceDescriptor
    );

    /* The host layer calls this client driver function when the device has been
       detached. */

    void (*deviceRelease) (USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle);

    /* The host layer calls this function periodically to run the device level
     * tasks of the client driver */
    
    void (*deviceTasks)(USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle);

    /* The host layer calls this function for device level events. An event may
       have event data associated with it. The client driver must interpret the event
       data appropriately, based on the generated event. The context is the
       is the context that was provided by the client driver at the time of
       raising the request that generated this event. */

    USB_HOST_DEVICE_EVENT_RESPONSE (*deviceEventHandler)
    (
        USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
        USB_HOST_DEVICE_EVENT event,
        void * eventData,
        uintptr_t context
    );

    /* The host layer calls this function when it wants to assign the client
       driver to an interface. This will happen on an interface level TPL match.
       In case of IAD, the interfaces will point to a table of interface handles.
       The number of interface handles in the table will be equal to the number
       of interfaces in the IAD group. The nInterfaces parameter will specify
       the number of interfaces. The descriptor parameter will point to the IAD.
       In case of a single interface descriptor, the interfaces will point to
       the a table of interface handles, nInterfaces will be 1 and descriptor
       will point to the interface descriptor.  */

    void (*interfaceAssign)
    (
        USB_HOST_DEVICE_INTERFACE_HANDLE * interfaces,
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle,
        size_t nInterfaces,
        uint8_t * descriptor
    );

    /* This function will be called when the device is detached or a
       configuration has changed. */

    void (*interfaceRelease)
    (
        USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle
    );

    /* The host layer called this function for interface level events. An event may
       have event data associated with it. The client driver must interpret the event
       data appropriately, based on the generated event. The context is the
       is the context that was provided by the client driver at the time of
       raising the request that generated this event. */

    USB_HOST_DEVICE_INTERFACE_EVENT_RESPONSE (*interfaceEventHandler)
    (
        USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle,
        USB_HOST_DEVICE_INTERFACE_EVENT event,
        void * eventData,
        uintptr_t context
    );
    
    /* The host layer calls this function periodically to run the device level
       tasks of the client driver */

    void (*interfaceTasks)(USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle);

} USB_HOST_CLIENT_DRIVER;

// *****************************************************************************
/* USB Host Pipe Handle

  Summary:
    Type of handle returned by the USB_HOST_DevicePipeOpen() function.

  Description:
    This type identifies a handle to a communication pipe between the host and
    device. A pipe handle is returned by the USB_HOST_DevicePipeOpen() and
    function.  The application creates pipes to communicate with connected
    device. The pipe handle identifies the pipe, in the USB_HOST_Transfer()
    function, over which the transfer needs to be scheduled.  The pipe handle
    also maintains the relationship between the client driver and communication
    pipe.

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_PIPE_HANDLE;

// *****************************************************************************
/* USB Host Invalid Pipe Handle

  Summary:
    Definition of an invalid USB Host Pipe Handle

  Description:
    This is the definition of an invalid USB Host Pipe Handle. An invalid pipe
    handle is returned by the USB_HOST_DevicePipeOpen() function when it fails
    to open a pipe.

  Remarks:
    None.
*/

#define USB_HOST_PIPE_HANDLE_INVALID /*DOM-IGNORE-BEGIN*/((USB_HOST_PIPE_HANDLE)(-1))/*DOM-IGNORE-END*/

// *****************************************************************************
/* USB Host Control Pipe Handle

  Summary:
    Type of handle returned by the USB_HOST_ControlPipeOpen() function.

  Description:
    This type identifies a handle to a control request pipe between the host and
    device. A control request pipe handle is returned by the
    USB_HOST_DeviceControlPipeOpen() function.  The application creates
    pipes to communicate with connected device. The pipe handle identifies the
    pipe, in the USB_HOST_DeviceControlTransfer() function, over which the
    control request transfer needs to be scheduled.

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_CONTROL_PIPE_HANDLE;

// *****************************************************************************
/* USB Host Invalid Control Pipe Handle

  Summary:
    Definition of an invalid USB Host Control  Pipe Handle

  Description:
    This is the definition of an invalid USB Host Control Pipe Handle. An
    invalid control pipe handle is returned by the USB_HOST_PipeOpen() function
    when it fails to open a pipe.

  Remarks:
    None.
*/

#define USB_HOST_CONTROL_PIPE_HANDLE_INVALID /*DOM-IGNORE-BEGIN*/((USB_HOST_CONTROL_PIPE_HANDLE)(-1))/*DOM-IGNORE-END*/

// *****************************************************************************
/* USB Host Device Configuration Set Event Data, Interface Set Event Data,
   Configuration Descriptor Get and the Endpoint Halt Clear Event Data. 

  Summary:
    Defines the event data that is returned along with the
    USB_HOST_DEVICE_EVENT_CONFIGURATION_SET,
    USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE,
    USB_HOST_DEVICE_INTERFACE_EVENT_SET_INTERFACE_COMPLETE and
    USB_HOST_DEVICE_INTERFACE_EVENT_PIPE_HALT_CLEAR_COMPLETE events.

  Description:
    This type defines the event data that is returned with the
    USB_HOST_DEVICE_EVENT_CONFIGURATION_SET,
    USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE,
    USB_HOST_DEVICE_INTERFACE_EVENT_SET_INTERFACE_COMPLETE and
    USB_HOST_DEVICE_INTERFACE_EVENT_PIPE_HALT_CLEAR_COMPLETE events.

  Remarks:
    None.
*/

typedef struct
{
    /* The request handle */
    USB_HOST_REQUEST_HANDLE requestHandle;

    /* Result of the request. This is will be USB_HOST_RESULT_SUCCESS if the
       request was completed successfully. If the result is
       USB_HOST_RESULT_REQUEST_STALLED, this means that the device stalled the
       request. If the result is USB_HOST_RESULT_FAILURE, this means an unknown
       failure occurred. */
    USB_HOST_RESULT result;

} 
USB_HOST_DEVICE_EVENT_CONFIGURATION_SET_DATA,
USB_HOST_DEVICE_INTERFACE_EVENT_SET_INTERFACE_COMPLETE_DATA,
USB_HOST_DEVICE_INTERFACE_EVENT_PIPE_HALT_CLEAR_COMPLETE_DATA;

// *****************************************************************************
/* USB Host Configuration Descriptor Get Complete Event Data. 

  Summary:
    Defines the event data that is returned along with the
    USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE.

  Description:
    This type defines the event data that is returned with the
    USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE.

  Remarks:
    None.
*/

typedef struct
{
    /* The request handle */
    USB_HOST_REQUEST_HANDLE requestHandle;

    /* Result of the request. This is will be USB_HOST_RESULT_SUCCESS if the
       request was completed successfully. If the result is
       USB_HOST_RESULT_REQUEST_STALLED, this means that the device stalled the
       request. If the result is USB_HOST_RESULT_FAILURE, this means an unknown
       failure occurred. */
    USB_HOST_RESULT result;

    /* Pointer to the configuration descriptor */
    USB_CONFIGURATION_DESCRIPTOR * configurationDescriptor;

    /* Size of the configuration descriptor */
    size_t length;

}
USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE_DATA;

// *****************************************************************************
/* USB Host Device Transfer Event Data 

  Summary:
    Defines the event data that is returned along with the
    USB_HOST_DEVICE_INTERFACE_EVENT_TRANSFER_COMPLETE events.

  Description:
    This type defines the event data that is returned along with the
    USB_HOST_DEVICE_INTERFACE_EVENT_TRANSFER_COMPLETE events.

  Remarks:
    None.
*/

typedef struct
{
    /* The transfer handle for the transfer for which this event was generated
     */
    USB_HOST_TRANSFER_HANDLE transferHandle;

    /* Completion status of the transfer. This is will be
       USB_HOST_RESULT_SUCCESS if the transfer was completed successfully. If
       the transfer is USB_HOST_RESULT_REQUEST_STALLED, this means that the
       device stalled the transfer. If the result is USB_HOST_RESULT_FAILURE,
       this means an unknown failure occurred. */

    USB_HOST_RESULT result;

    /* Size of the transfer when the event was generated. In case of control
       transfers, this is the size of the data stage of the control transfer */
    
    size_t length;
   
} USB_HOST_DEVICE_INTERFACE_EVENT_TRANSFER_COMPLETE_DATA;

// *****************************************************************************
/* USB Host Control Transfer Complete Callback Function Pointer type

  Summary:
   USB Host Control Transfer Complete Callback Function Pointer Type

  Description:
   This data type defines the required function signature of the USB Host Layer
   Control Transfer Complete callback function. The client driver must provide a
   pointer to a Control Transfer Complete Callback function who's function
   signature (parameter and return value types) match the types specified by
   this function pointer in order to receive notification when a control
   transfer has completed. The pointer to the callback function must be
   specified inn USB_HOST_DeviceControlTransfer() function. The Host Layer will
   invoke this function with event relevant parameters. The description of the
   event handler function parameters is given here.

   deviceHandle - handle to the device associated with this event.

   requestHandle - request handle of the control transfer request that caused
   this event.

   result - completion result of the control transfer. This will be
   USB_HOST_RESULT_SUCCESS if the control transfer completed successfully,
   USB_HOST_RESULT_FAILURE if an unknown failure occurred or
   USB_HOST_RESULT_REQUEST_STALLED if the request was stalled.

   size - size of the data stage that was transferred.

   context - Value identifying the context of the application that was
   provided when the USB_HOST_DeviceControlTransfer() function was called.

  Remarks:
    None.
*/

typedef void ( * USB_HOST_DEVICE_CONTROL_REQUEST_COMPLETE_CALLBACK)
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle,
    USB_HOST_REQUEST_HANDLE requestHandle,
    USB_HOST_RESULT result,
    size_t size,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_HOST_CONTROL_PIPE_HANDLE USB_HOST_DeviceControlPipeOpen
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
    );

  Summary:
    Open a control transfer pipe to the device.

  Description:
    This function opens a control transfer pipe to the device. The return control
    pipe handle can be used in the USB_HOST_DeviceControlTransfer() function to
    schedule control transfers to the device.
    
  Precondition:
    The client driver should have been assigned to this interface.

  Parameters:
    deviceObjHandle - handle to the device to the pipe should be opened.

  Returns:
    The function will return USB_HOST_CONTROL_PIPE_HANDLE_INVALID if the pipe
    could not be opened. It returns a valid pipe otherwise. Pipe open may fail
    if the device is not connected to the bus or if the total number of pipes in
    the system exceeds the maximum number of pipes provisioned in the USB
    peripheral driver.

  Example:
  <code>
  </code>

  Remarks:
    None.
*/

USB_HOST_CONTROL_PIPE_HANDLE USB_HOST_DeviceControlPipeOpen
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceControlTransfer 
    ( 
        USB_HOST_CONTROL_PIPE_HANDLE pipeHandle
        USB_HOST_TRANSFER_HANDLE * transferHandle
        USB_SETUP_PACKET * setupPacket,
        void * data,
        USB_HOST_DEVICE_CONTROL_REQUEST_COMPLETE_CALLBACK callback,
        uintptr_t context
    );

  Summary:
    Schedules a control transfer.

  Description:
    This function schedules a control transfer. pipeHandle contains a handle to
    a control pipe obtained through the USB_HOST_DeviceControlPipeOpen() function.
    setupPacket points to the setup command to be sent in the Setup Stage of the
    control transfer. The size and the direction of the data stage is indicated
    by the setup packet. In case of control transfers where there is no data
    stage, data is ignored and can be NULL. In all other cases, data should point
    to the data to data be transferred in the data stage of the control
    transfer. 
    
    If the transfer was scheduled successfully, transferHandle will contain a
    transfer handle that uniquely identifies this transfer. If the transfer
    could not be scheduled successfully, transferHandle will contain
    USB_HOST_TRANSFER_HANDLE_INVALID.

    When the control transfer completes, the host layer will call the specified
    callback function. The context parameter specified here will be returned in
    the callback.

  Precondition:
    pipeHandle should be valid and should have been obtained through the
    USB_HOST_DeviceControlPipeOpen() function.

  Parameters:
    pipeHandle - Handle to a pipe opened using the
    USB_HOST_DeviceControlPipeOpen() function.

    transferHandle - output parameter that will contain the handle to this
    transfer.

    setupPacket - Pointer to the setup packet to sent to the device in the setup
    stage of the control transfer.

    data -  For control transfer with a data stage, this should point to data to
    be sent to the device (for a control write transfer) or point to the buffer
    that will receive data from the device (for a control read transfer). For
    control transfers that do not require a data stage, this parameter is
    ignored and can be NULL.

    callback - pointer to the callback function that will be called when the
    control transfer completes. If the callback function is NULL, there will be
    no notification of when the control transfer will complete.

    context - user defined context that is returned with the callback function.

  Returns:
    USB_HOST_RESULT_SUCCESS - the transfer was scheduled successfully.
    transferHandle will contain a valid transfer handle.
    USB_HOST_RESULT_FAILURE - an unknown failure occurred. transferHandle will
    contain USB_HOST_TRANSFER_HANDLE_INVALID.
    USB_HOST_RESULT_PIPE_HANDLE_INVALID - The pipe handle is not valid.
    USB_HOST_RESULT_PARAMETER_INVALID - The data pointer or transferHandle pointer
    is NULL.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceControlTransfer
(
    USB_HOST_CONTROL_PIPE_HANDLE pipeHandle,
    USB_HOST_TRANSFER_HANDLE * transferHandle,
    USB_SETUP_PACKET * setupPacket,
    void * data,
    USB_HOST_DEVICE_CONTROL_REQUEST_COMPLETE_CALLBACK callback,
    uintptr_t context
); 

// *****************************************************************************
// *****************************************************************************
// Section: USB Host Client Driver Device Level Routines. 
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_ConfigurationDescriptorGet
    (
        USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
        USB_HOST_REQUEST_HANDLE * requestHandle
        uint8_t configurationIndex,
        void * buffer,
        size_t size,
        uintptr_t context
    );

  Summary:
    Requests for a configuration descriptor.

  Description:
    This function places a USB Host request to obtain a device configuration
    descriptor. The function is non blocking. A pointer to the configuration
    descriptor data will be available in event data when the
    USB_HOST_DEVICE_EVENT_CONFIGURATION_DESCRIPTOR_GET_COMPLETE event occurs.
    The size of the configuration descriptor will be available in the event
    data.

  Precondition:
    The client driver should have been assigned to the device.

  Parameters:
    deviceHandle - handle to the device whose configuration descriptor is to be
    obtained.

    requestHandle - Output parameter. Will contain the handle to the request

    configurationValue - index of the configuration that is to be retrieved.
    Should be 0 for the first configuration, 1 for the second configuration and
    so on.

    buffer - pointer to the buffer where the configuration descriptor will be
    stored.

    size - size of buffer in bytes

    context - a client driver specified context that is returned in the event
    handler.
  
  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted. requestHandle will
    contain a valid request handle.
    USB_HOST_RESULT_REQUEST_BUSY - The request queue is full. requestHandle will
    contain USB_HOST_REQUEST_HANDLE_INVALID.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.
    USB_HOST_RESULT_CONFIGURATION_UNKNOWN - The specified configuration does not
    exist on this device. requestHandle will contain
    USB_HOST_REQUEST_HANDLE_INVALID.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The device was detached. requestHandle will
    contain USB_HOST_REQUEST_HANDLE_INVALID.
    
  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceConfigurationDescriptorGet
(
    USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
    USB_HOST_REQUEST_HANDLE * requestHandle,
    uint8_t configurationValue,
    void * buffer,
    size_t size,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceConfigurationGet 
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceHandle,
        uint8_t * configuration
    );

  Summary:
    Returns the bConfigurationValue of the currently active configuration.

  Description:
    This function returns the bConfigurationValue of the currently active
    configuration. 

  Precondition:
    The client driver should have been assigned to this device.

  Parameters:
    deviceHandle - handle to device whose active configuration number is to be
    obtained.

    configuration - output parameter. This will contain the bConfigurationValue
    of the currently active configuration.

  Returns:
    USB_HOST_RESULT_SUCCESS - The function was successful. configuration
    contains the bConfigurationValue of the currently active configuration.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.
    USB_HOST_RESULT_PARAMETER_INVALID - The configuration parameter is NULL.
    USB_HOST_RESULT_DEVICE_HANDLE_INVALID - The deviceHandle is not a valid
    device handle.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The device does not exist in the system.
    The value of configuration should not be considered.

  Example:
    <code>

    // TBD
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceConfigurationGet 
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceHandle,
    uint8_t * configuration
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceConfigurationSet 
    (
        USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
        USB_HOST_REQUEST_HANDLE * requestHandle,
        uint8_t configurationValue,
        uintptr_t context
    );

  Summary:
    Sets the active configuration for the device.

  Description:
    This function sets the configuration that the host layer must set for this
    device. A handle to the request is returned in requestHandle. The completion
    of this request is indicated by the USB_HOST_DEVICE_EVENT_CONFIGURATION_SET
    complete event.
    
  Precondition:
    The client driver should have been assigned to the device.

  Parameters:
    deviceHandle - handle to the device whose configuration needs to be set.

    requestHandle - Output parameter. This will contain a valid request handle
    if the request was successful or will contain
    USB_HOST_RESULT_DEVICE_HANDLE_INVALID if the request was not successful.

    configurationValue - the bConfigurationValue of the configuration to
    activated. 

    context - a client driver specified context that is returned in the event
    handler.

  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted successfully.
    USB_HOST_RESULT_CONFIGURATION_UNKNOWN - The request did not succeed. The
    specified configuration does not exist.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request did not succeed. The device was
    detached.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.

  Example:
    <code>

    // TBD
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceConfigurationSet 
(
    USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
    USB_HOST_REQUEST_HANDLE * requestHandle,
    uint8_t configurationValue,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceRelease
    (
        USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle,
    );

  Summary:
    Releases ownership of the device

  Description:
    This function allows the client driver to release ownership of the device.
    The client driver must take all steps required to release the ownership of
    the device. The host will not call the driver deinstantiate function when
    the driver releases ownership.

  Precondition:
    The client driver should have been assigned to this device.

  Parameters:
    deviceHandle - handle to the device to be released.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted successfully.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request did not succeed. The device was
    detached.
    USB_HOST_RESULT_DEVICE_HANDLE_INVALID - The device handle is invalid.
    USB_HOST_RESULT_FAILURE - An unspecified failure occurred.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceRelease
(
    USB_HOST_DEVICE_CLIENT_HANDLE deviceHandle
);

// *****************************************************************************
// *****************************************************************************
// Section: USB Host Client Driver Interface Level Routines. 
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceInterfaceRelease
    (
        USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle,
    );

  Summary:
    Releases an interface on the specified device.

  Description:
    This function allows the application to release a claimed interface on the
    specified device and within the selected configuration on that device.

  Precondition:
    The client driver should have been assigned to this interface.

  Parameters:
    interfaceHandle - handle to the interface to release.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted successfully.
    USB_HOST_RESULT_INTERFACE_UNKNOWN - The request did not succeed. The
    specified interface does not exist.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request did not succeed. The device was
    detached.
    USB_HOST_RESULT_FAILURE - An unspecified failure occurred.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceInterfaceRelease
(
    USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceInterfaceSet
    (
        USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle,
        USB_HOST_REQUEST_HANDLE * requestHandle,
        uint8_t alternateSetting,
        uintptr_t context
    );

  Summary:
    Activates an alternate setting for the specified interface.

  Description:
    This function activates an alternate setting for the specified interface.
    This will cause the host layer to send a SET INTERFACE request to the
    device.  The specified interface should have been claimed. The completion of
    the SET INTERFACE function will be indicated by the
    USB_HOST_DEVICE_EVENT_SET_INTERFACE_COMPLETE event.

  Precondition:
    The client driver should have been assigned to this interface.
 
  Parameters:
    interfaceHandle - handle to the interface.

    requestHandle - Output parameter. Will contain a valid request handle if the
    request was accepted or USB_HOST_RESULT_DEVICE_HANDLE_INVALID if the request
    was not accepted.

    interface - the bInterfaceNumber of the claimed interface

    alternateSetting - the bAlternateSetting interface number of the alternate
    setting to activate.
    
    context - a client driver specified context that is returned in the event
    handler.

  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted successfully.
    USB_HOST_RESULT_INTERFACE_UNKNOWN - The request did not succeed. The
    specified interface does not exist.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request did not succeed. The device was
    detached.
    USB_HOST_RESULT_FAILURE - An unspecified failure occurred.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceInterfaceSet
(
    USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle,
    USB_HOST_REQUEST_HANDLE * requestHandle,
    uint8_t alternateSetting,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DevicePipeHaltClear
    (
        USB_HOST_PIPE_HANDLE * pipeHandle,
        USB_HOST_REQUEST_HANDLE * requestHandle,
        uintptr_t context
    );

  Summary:
    Clears the halt condition on a pipe.

  Description:
    This function clears the halt condition on the specified pipe. This
    function will cause a CLEAR FEATURE control request to be sent to the
    device. The completion of the control transfer will be indicated by the
    USB_HOST_DEVICE_EVENT_DEVICE_PIPE_HALT_CLEAR_COMPLETE event.

  Precondition:
    The client driver should have been assigned to this interface.

  Parameters:
    pipeHandle - pipe handle of the pipe that connects to the endpoint on which
    the halt needs to cleared
    
    requestHandle - Output parameter. Will contain a valid request handle if the
    request was accepted or USB_HOST_RESULT_DEVICE_HANDLE_INVALID if the request
    was not accepted.
    
    context - a client driver specified context that is returned in the event
    handler.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted successfully.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request did not succeed. The device was
    detached.
    USB_HOST_PIPE_HANDLE_INVALID - The pipe handle is not valid.
    USB_HOST_RESULT_REQUEST_BUSY - The host is busy. The client driver should try again.
    USB_HOST_RESULT_FAILURE - An unspecified failure occurred.
    USB_HOST_RESULT_PARAMETER_INVALID - requestHandle pointer is NULL.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DevicePipeHaltClear
(
    USB_HOST_PIPE_HANDLE pipeHandle,
    USB_HOST_REQUEST_HANDLE * requestHandle,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_HOST_PIPE_HANDLE USB_HOST_DevicePipeOpen 
    (
        USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle,
        USB_ENDPOINT_ADDRESS endpointAddress
    );

  Summary:
    Opens a pipe to the specified endpoint.

  Description:
    This function opens a pipe on the specified endpoint. The pipe parameters
    will be defined by the endpoint attributes specified in the endpoint
    descriptor that the attached device reports to the host.

  Precondition:
    The client driver should have been assigned to this interface.
 
  Parameters:
    interface - handle to the interface to which this endpoint belongs.
   
    endpointAddress - A combination of endpoint address and direction. If the
    endpoint is 0, then direction field, transferType, pollingRate and
    endpointSize are ignored and the function return a control pipe.

  Returns:
    The function returns USB_HOST_PIPE_HANDLE_INVALID if the pipe could not
    created. Pipe creation may fail if 
    - the number of open pipes in the application has reached the
      USB_HOST_PIPES_NUMBER value. 
    - the specified device is not connected on the bus.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_PIPE_HANDLE USB_HOST_DevicePipeOpen 
(
    USB_HOST_DEVICE_INTERFACE_HANDLE interfaceHandle,
    USB_ENDPOINT_ADDRESS endpointAddress
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DevicePipeClose 
    (
        USB_HOST_PIPE_HANDLE pipeHandle
    );

  Summary:
    Closes an existing pipe.

  Description:
    This function closes an existing pipe. Any transfers that are queued or
    in-progress on the pipe will be aborted and the transfer complete events
    will be generated. Once closed, no transfers can be queued on the pipe.

  Precondition:
    The specified pipe should have been opened using the
    USB_HOST_DevicePipeOpen() function.
 
  Parameters:
    pipeHandle - handle to the pipe to close.

  Returns:
    USB_HOST_RESULT_SUCCESS - the request completed successfully.
    USB_HOST_RESULT_FAILURE - an unknown failure occurred.
    USB_HOST_RESULT_PIPE_HANDLE_INVALID - the specified pipe is not valid or
    does not exist in the system.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DevicePipeClose 
(
    USB_HOST_PIPE_HANDLE pipeHandle
);

// *****************************************************************************
/* Function:
    void USB_HOST_DeviceTransfer
    ( 
        USB_HOST_PIPE_HANDLE pipeHandle
        USB_HOST_TRANSFER_HANDLE * transferHandle,
        void * data,
        size_t size,
        uintptr_t context
    );

  Summary:
    Schedules a bulk, interrupt or isochronous transfer.

  Description:
    This function schedules a bulk, interrupt or isochronous. pipeHandle
    contains a handle to a bulk, interrupt or isochronous pipe obtained through
    the USB_HOST_DevicePipeOpen() function .
    
    If the transfer was scheduled successfully, transferHandle will contain a
    transfer handle that uniquely identifies this transfer. If the transfer
    could not be scheduled successfully, transferHandle will contain
    USB_HOST_TRANSFER_HANDLE_INVALID.  

    Multiple transfers can be queued. These transfers will be processed in the
    order they were scheduled. The host layer will called the interfaceEvent
    event handler with USB_HOST_DEVICE_INTERFACE_EVENT_TRANSFER_COMPLETE_DATA
    when the transfer completes.

  Precondition:
    pipeHandle should be valid and should have been obtained through the
    USB_HOST_PipeOpen() function.

  Parameters:
    pipeHandle - Handle to a pipe opened using the USB_HOST_PipeOpen() 
                 function.

    transferHandle - output parameter that will contain the handle to this 
                     transfer.

    data -  Pointer to the data to sent to the device or pointer to a
    destination buffer for data received from the device. 

    size - size of the transfer

    context - context to returned with the transfer complete event.

  Returns:
    USB_HOST_RESULT_SUCCESS - the transfer was scheduled successfully.
    transferHandle will contain a valid transfer handle.
    USB_HOST_RESULT_FAILURE - an unknown failure occurred. transferHandle will
    contain USB_HOST_TRANSFER_HANDLE_INVALID.
    USB_HOST_RESULT_PIPE_HANDLE_INVALID - The pipe handle is not valid.
    USB_HOST_RESULT_PARAMETER_INVALID - The data pointer or transferHandle pointer
    is NULL.
    USB_HOST_RESULT_REQUEST_BUSY - This indicates that host is busy with
    transfers and cannot accept any new transfer requests at this point.
    transferHandle will contain USB_HOST_TRANSFER_HANDLE_INVALID.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceTransfer
(
    USB_HOST_PIPE_HANDLE pipeHandle,
    USB_HOST_TRANSFER_HANDLE * transferHandle,
    void * data,
    size_t size,
    uintptr_t context
); 

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceTransferTerminate
    (
        USB_HOST_TRANSFER_HANDLE transferHandle
    )

  Summary:
    Terminates the specified transfer. 

  Description:
    This function terminates transfers the specified transfer. If the transfer
    is in progress, the ongoing transaction will be allowed to complete. The
    pending transactions will be aborted. If a control transfer is aborted
    before the handshake stage of the transfer has completed, this handshake
    stage will not be sent. A transfer complete event will be generated and
    completion result will indicate that this transfer was aborted.

  Precondition:
    None.

  Parameters:
    transferHandle - handle of the transfer to be terminated.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The function was successful.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.
    USB_HOST_RESULT_TRANSFER_HANDLE_INVALID - the transfer handle is not valid.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceTransferTerminate
(
    USB_HOST_TRANSFER_HANDLE transferHandle
);

// *****************************************************************************
// *****************************************************************************
// Section: USB Host Client Driver Routines. Endpoint and Interface Query
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Host Interface Query Flag

  Summary:
    Defines the different flags that can be used in the
    USB_HOST_INTERFACE_DESCRIPTOR_QUERY object.

  Description:
    This enumeration defines the different flags that can be used to modify the
    interface descriptor search operations in the
    USB_HOST_INTERFACE_DESCRIPTOR_QUERY object. These flags qualify the
    interface descriptor search. Multiple flags can be combined (logically
    OR'ed) to create specific queries. 

  Remarks:
    This feature is optional and may not be available in all implementations of
    the USB Host Layer.
*/


typedef enum
{
    /* Get any interface */
    USB_HOST_INTERFACE_QUERY_ANY = /*DOM-IGNORE-BEGIN*/ 0x0 /*DOM-IGNORE-END*/,

    /* The interface number must match the specified interface number */
    USB_HOST_INTERFACE_QUERY_BY_NUMBER = /*DOM-IGNORE-BEGIN*/ 0x1 /*DOM-IGNORE-END*/,

    /* The interface alternate setting field must match the specified alternate
     * setting */
    USB_HOST_INTERFACE_QUERY_ALT_SETTING = /*DOM-IGNORE-BEGIN*/0x2/*DOM-IGNORE-END*/,

    /* Interface class field must match specified field */ 
    USB_HOST_INTERFACE_QUERY_BY_CLASS = /*DOM-IGNORE-BEGIN*/0x4/*DOM-IGNORE-END*/,

    /* Interface subclass field must match specified subclass field */
    USB_HOST_INTERFACE_QUERY_BY_SUBCLASS = /*DOM-IGNORE-BEGIN*/0x8/*DOM-IGNORE-END*/,

    /* Interface protocol field must match specified protocol field */
    USB_HOST_INTERFACE_QUERY_BY_PROTOCOL = /*DOM-IGNORE-BEGIN*/0x10/*DOM-IGNORE-END*/,
    
} USB_HOST_INTERFACE_QUERY_FLAG;

// *****************************************************************************
/* USB Host Endpoint Query Flag

  Summary:
    Defines the different flags that can be used in the
    USB_HOST_ENDPOINT_DESCRIPTOR_QUERY object.

  Description:
    This enumeration defines the different flags that can be used to modify the
    endpoint descriptor search operations in the
    USB_HOST_ENDPOINT_DESCRIPTOR_QUERY object. These flags qualify the endpoint
    descriptor search. Multiple flags can be combined (logically OR'ed) to
    create specific queries. 

  Remarks:
    This feature is optional and may not be available in all implementations of
    the USB Host Layer.
*/

typedef enum
{
    /* Find any endpoint in the interface */
    USB_HOST_ENDPOINT_QUERY_ANY = /*DOM-IGNORE-BEGIN*/0x0/*DOM-IGNORE-END*/,
    
    /* Endpoint address of endpoint must match specified endpoint address. Other
     * flags will be ignored  */
    USB_HOST_ENDPOINT_QUERY_BY_ENDPOINT_ADDRESS = /*DOM-IGNORE-BEGIN*/0x1/*DOM-IGNORE-END*/,

    /* Endpoint type must match specified endpoint type */ 
    USB_HOST_ENDPOINT_QUERY_BY_TRANSFER_TYPE = /*DOM-IGNORE-BEGIN*/0x2/*DOM-IGNORE-END*/,

    /* Endpoint direction must match direction */
    USB_HOST_ENDPOINT_QUERY_BY_DIRECTION = /*DOM-IGNORE-BEGIN*/0x04/*DOM-IGNORE-END*/

} USB_HOST_ENDPOINT_QUERY_FLAG;

// *****************************************************************************
/* USB Host Interface Association Descriptor Query flag

  Summary:
    Defines the different flags that can be used in the
    USB_HOST_IAD_QUERY object.

  Description:
    This enumeration defines the different flags that can be used to modify the
    interface association descriptor search operations in the USB_HOST_IAD_QUERY
    object. These flags qualify the IAD search. Multiple flags can be combined
    (logically OR'ed) to create specific queries. 

  Remarks:
    This feature is optional and may not be available in all implementations of
    the USB Host Layer.
*/

typedef enum
{
    /* Find any IAD */
    USB_HOST_IAD_QUERY_FLAG_ANY = 0

} USB_HOST_IAD_QUERY_FLAG;

// *****************************************************************************
/* USB Host Interface Descriptor Query Object

  Summary:
    Defines the USB Host Descriptor Query object.

  Description:
    This data type defines the USB Host Interface Descriptor Query object. A
    pointer to an object of this type is passed to
    USB_HOST_DeviceInterfaceDescriptorQuery() function. This object specifies
    the query against which the function will search the configuration
    descriptor for an interface descriptor.

  Remarks:
    This feature is optional and may not be available in all implementations of
    the USB Host Layer.
*/


typedef struct
{
    /* Interface number of the interface to be located. */
    uint8_t bInterfaceNumber;
    
    /* Alternate setting of the interface to be located. */        
    uint8_t bAlternateSetting;

    /* Class code of the interface to be located */
    uint8_t bInterfaceClass;

    /* Subclass code of the interface to be located */
    uint8_t bInterfaceSubClass;

    /* Protocol code of the interface to be located */
    uint8_t bInterfaceProtocol;

    /* Flags to apply for this query */
    USB_HOST_INTERFACE_QUERY_FLAG flags;

    /* Search context. Do not modify */
    uintptr_t context;
    
} USB_HOST_INTERFACE_DESCRIPTOR_QUERY;

// *****************************************************************************
/* USB Host Interface Association Descriptor Query Object

  Summary:
    Defines the USB Host Interface Association Descriptor Query object.

  Description:
    This data type defines the USB Host Interface Association Descriptor Query
    object. A pointer to an object of this type is passed to
    USB_HOST_DeviceIADQuery() function. This object specifies the query against
    which the function will search the configuration descriptor for an interface
    association descriptor.

  Remarks:
    This feature is optional and may not be available in all implementations of
    the USB Host Layer.
*/


typedef struct
{
    /* Flags to apply for this query */
    USB_HOST_IAD_QUERY_FLAG flags;

    /* Search context. Do not modify */
    uintptr_t context;
    
} USB_HOST_IAD_QUERY;

// *****************************************************************************
/* USB Host Endpoint Descriptor Query Object

  Summary:
    Defines the USB Host Descriptor Query object.

  Description:
    This data type defines the USB Host Endpoint Descriptor Query object. A
    pointer to an object of this type is passed to
    USB_HOST_DeviceEndpointDescriptorQuery() function. This object specifies the
    query against which the function will search the interface descriptor for an
    endpoint descriptor.

  Remarks:
    This feature is optional and may not be available in all implementations of
    the USB Host Layer.
*/

typedef struct
{
    /* The endpoint number */
    USB_ENDPOINT_ADDRESS endpointAddress;

    /* Type of the endpoint to be located */
    USB_TRANSFER_TYPE transferType;

    /* Direction of the endpoint to be located */
    USB_DATA_DIRECTION direction;

    /* Flags to apply to this search */
    USB_HOST_ENDPOINT_QUERY_FLAG flags;

    /* Search context. Do not modify */
    uintptr_t context;

} USB_HOST_ENDPOINT_DESCRIPTOR_QUERY;

// *****************************************************************************
/* Function:
    USB_ENDPOINT_DESCRIPTOR * USB_HOST_DeviceEndpointDescriptorQuery
    (
        USB_INTERFACE_DESCRIPTOR * interface
        USB_HOST_ENDPOINT_DESCRIPTOR_QUERY * query 
    );

  Summary:
    Queries the configuration for the specified endpoint type and returns a
    pointer to the endpoint descriptor if found.

  Description:
    This function queries the specified configuration for the specified endpoint
    type and returns a pointer to the endpoint descriptor if found. The return
    pointer will point to the standard endpoint descriptor and class specific
    endpoint descriptors for that endpoint. The search criteria can specified by
    using the flags. 
    
    In a case where there are multiple endpoints in the interface, the function
    can be called repetitively to continue the search till the end of the
    interface descriptor is reached or till the search fails.  The query object
    maintains the last point where the search was successful and continues the
    search from that point onwards. Resetting the query object (through the
    USB_HOST_DeviceEndpointQueryClear) function will reset the search object and
    cause the search to start from the top of the interface descriptor.
   
  Precondition:
    The host layer should have been initialized and the bus should have been
    enabled.

  Parameters:
    interface - pointer to the interface descriptor to be searched.         

    query - pointer to the query object that defines the search type.

  Returns:
    If the endpoint descriptor was not found or if the search has reached the end
    of the interface descriptor, the function returns NULL. If the endpoint
    descriptor was found, the size will contain the size of the endpoint
    descriptor (including the class specific endpoint descriptors) and the
    function will return a pointer to the endpoint descriptor. The class
    specific endpoint descriptors follow the endpoint descriptor.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the Host Layer.
*/

USB_ENDPOINT_DESCRIPTOR * USB_HOST_DeviceEndpointDescriptorQuery
(
    USB_INTERFACE_DESCRIPTOR * interface,
    USB_HOST_ENDPOINT_DESCRIPTOR_QUERY * query
);

// *****************************************************************************
/* Function:
    USB_INTERFACE_ASSOCIATION_DESCRIPTOR * USB_HOST_DeviceIADQuery
    (
        USB_CONFIGURATION_DESCRIPTOR * configuration
        USB_HOST_IAD_QUERY * query,
    );

  Summary:
    Queries the configuration for the specified IAD.

  Description:
    This function queries the configuration for the specified IAD and returns a
    pointer to the interface association descriptor if found. The return pointer
    will point to the standard interface association descriptor.  The search
    criteria can specified by using the flags. 
    
  Precondition:
    The host layer should have been initialized and the bus should have been
    enabled.

  Parameters:
    configuration - pointer to the configuration descriptor to be queried.

    query - pointer to the query object that defines this search.
  
  Returns:
    If the interface association descriptor was not found or if the search has
    reached the end of the configuration descriptor, the function returns NULL.
    If the interface association  descriptor was found, the pointer to the
    interface association descriptor will be returned. 

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

USB_INTERFACE_ASSOCIATION_DESCRIPTOR * USB_HOST_DeviceIADQuery
(
    USB_CONFIGURATION_DESCRIPTOR * configuration,
    USB_HOST_IAD_QUERY * query
);

// *****************************************************************************
/* Function:
    USB_INTERFACE_DESCRIPTOR * USB_HOST_DeviceInterfaceDescriptorQuery
    (
        USB_CONFIGURATION_DESCRIPTOR * configuration
        USB_HOST_DESCRIPTOR_QUERY * query,
    );

  Summary:
    Queries the active configuration for the specified interface.

  Description:
    This function queries the active configuration for the specified interface
    and returns a pointer to the interface descriptor if found. The return
    pointer will point to the standard interface descriptor and class specific
    interface descriptors for that interface. The search criteria can specified
    by using the flags. 
    
    In a case where the interface has more than one alternate settings, the
    function can be called repetitively to continue the search till the end of the
    configuration descriptor is reached or till the search fails. The query flag
    in such should be set to ignore the alternate setting field.  The query
    object maintains the last point where the search was successful and
    continues the search from that point onwards. Resetting the query object
    (through the USB_HOST_QueryClear) function will reset the search object and
    cause the search to start from the top of the configuration descriptor.
   
  Precondition:
    The host layer should have been initialized and the bus should have been
    enabled.

  Parameters:
    configuration - pointer to the configuration descriptor to be queried.

    query - pointer to the query object that defines this search.
  
  Returns:
    If the interface descriptor was not found or if the search has reached the
    end of the configuration descriptor, the function returns NULL. If the
    interface descriptor was found, interface descriptor (including the class
    specific interface descriptors) and the function will return the pointer to
    the interface descriptor.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

USB_INTERFACE_DESCRIPTOR * USB_HOST_DeviceInterfaceDescriptorQuery
(
    USB_CONFIGURATION_DESCRIPTOR * configuration,
    USB_HOST_INTERFACE_DESCRIPTOR_QUERY * query
);

// *****************************************************************************
/* Function:
    void USB_HOST_DeviceInterfaceQueryClear
    (
        USB_HOST_INTERFACE_DESCRIPTOR_QUERY * query
    );

  Summary:
    Clear the query object.

  Description:
    This function clears the query object. Using the query after it has been
    clear will cause the USB_HOST_DeviceInterfaceDescriptorQuery() and function
    to reset the search location to the start of the configuration descriptor.

  Precondition:
    None.

  Parameters:
    query - query object to clear.

  Returns:
    None.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

void USB_HOST_DeviceInterfaceQueryContextClear
(
    USB_HOST_INTERFACE_DESCRIPTOR_QUERY * query
);

// *****************************************************************************
/* Function:
    void USB_HOST_DeviceIADQueryContextClear
    (
        USB_HOST_IAD_QUERY * query
    );

  Summary:
    Clear the query object.

  Description:
    This function clears the query object. Using the query after it has been
    clear will cause the USB_HOST_DeviceIADQuery() and function to reset the
    search location to the start of the configuration descriptor.

  Precondition:
    None.

  Parameters:
    query - query object to clear.

  Returns:
    None.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

void USB_HOST_DeviceIADQueryContextClear
(
    USB_HOST_IAD_QUERY * query
);

// *****************************************************************************
/* Function:
    void USB_HOST_DeviceEndpointQueryClear
    (
        USB_HOST_INTERFACE_DESCRIPTOR_QUERY * query
    );

  Summary:
    Clear the query object.

  Description:
    This function clears the query object. Using the query after it has been
    clear will cause the USB_HOST_DeviceEndpointDescriptorQuery() and function
    to reset the search location to the start of the configuration descriptor.

  Precondition:
    None.

  Parameters:
    query - query object to clear.

  Returns:
    None.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

void USB_HOST_DeviceEndpointQueryContextClear
(
    USB_HOST_ENDPOINT_DESCRIPTOR_QUERY * query
);

// *****************************************************************************
/* Function:
    void USB_HOST_DeviceEnumerate
    (
        USB_HOST_DEVICE_OBJ_HANDLE parentHubObjHandle, 
        uint8_t port 
    );

  Summary:
    This function will request the host layer to enumerate an attached device.

  Description:
    This function will request the host layer to enumerate an attached device.
    It is called by the hub driver or the root hub when a device is attached.The
    function will return a device object handle to the caller. The caller must
    specify this handle when the device is detached.

  Precondition:
    None.

  Parameters:
    parentHubObjHandle - device object handle of the parent.

    port - port to which the device was attached.

  Returns:
    None.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

USB_HOST_DEVICE_OBJ_HANDLE USB_HOST_DeviceEnumerate
(
    USB_HOST_DEVICE_OBJ_HANDLE parentHubObjHandle, 
    uint8_t port 
);

// *****************************************************************************
/* Function:
    void USB_HOST_DeviceDenumerate
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle 
    );

  Summary:
    This function will request the host layer to denumerate an attached device.

  Description:
    This function will request the host layer to denumerate an attached device.
    It is called by the hub driver or the root hub when a device is detached.

  Precondition:
    None.

  Parameters:
    parentHubObjHandle - device object handle of the device that was detached.

  Returns:
    None.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

void USB_HOST_DeviceDenumerate
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
);

// *****************************************************************************
/* Function:
    void USB_HOST_OverCurrentDetected
    (
        USB_HOST_DEVICE_OBJ_HANDLE parentDeviceObjHandle,
        uint8_t port,
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
    );

  Summary:
    This function provides indication to the host layer that an over-current
    event has occurred.
    
  Description:
    This function provides indication to the host layer that an over-current
    event has occurred. The host layer will in turn forward the event to the
    application. This function is called exclusively by the root hub or the
    external hub driver. The root hub or the external driver will denumerate
    this device after the function returns.

  Precondition:
    None.

  Parameters:
    parentHubObjHandle - device object handle of the parent device which could
    be the root hub or an external hub.

    port - port on which the overcurrent was detected.

    device - device object handle of the device that was connected to the port.

  Returns:
    None.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer. 
*/

void USB_HOST_OverCurrentDetected
(
    USB_HOST_DEVICE_OBJ_HANDLE parentDeviceObjHandle,
    uint8_t port,
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
);


// *****************************************************************************
/* Function:
    USB_INTERFACE_DESCRIPTOR * USB_HOST_DeviceGeneralInterfaceDescriptorQuery
    (
        void * descriptor, 
        USB_HOST_INTERFACE_DESCRIPTOR_QUERY * query
    );

  Summary:
    Queries the descriptor for an interface.

  Description:
    This function will query will search for an interface starting from the
    location pointed to by the descriptor parameter. This descriptor parameter
    could be a pointer to an IAD or an interface descriptor.  The return pointer
    will point to the standard interface descriptor and class specific interface
    descriptors for that interface. The search criteria can specified by using the
    flags. 
    
    In a case where the interface has more than one alternate settings, the
    function can be called repetitively to continue the search till the end of the
    configuration descriptor is reached or till the search fails. The query flag
    in such should be set to ignore the alternate setting field.  The query
    object maintains the last point where the search was successful and
    continues the search from that point onwards. Resetting the query object
    (through the USB_HOST_DeviceInterfaceQueryContextClear()) function will
    reset the search object and cause the search to start from the top.

  Precondition:
    The host layer should have been initialized and the bus should have been
    enabled.

  Parameters:
    descriptor - a valid USB descriptor from where search should start.

    query - pointer to the query object that defines this search.
  
  Returns:
    If the interface descriptor was not found or if the search has reached the
    end of the configuration descriptor, the function returns NULL. If the
    interface descriptor was found, interface descriptor (including the class
    specific interface descriptors) and the function will return the pointer to
    the interface descriptor.

  Example:
    <code>
    </code>

  Remarks:
    This function is optional and may not be available on all implementations of
    the USB Host Layer.
*/

USB_INTERFACE_DESCRIPTOR * USB_HOST_DeviceGeneralInterfaceDescriptorQuery
(
    void * descriptor,
    USB_HOST_INTERFACE_DESCRIPTOR_QUERY * query
);


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END


#endif

