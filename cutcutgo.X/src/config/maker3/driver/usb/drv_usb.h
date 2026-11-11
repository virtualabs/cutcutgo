/******************************************************************************
  USB Module Driver Interface Header File

  Company:
    Microchip Technology Inc.
    
  File Name:
    drv_usb.h
	
  Summary:
    USB Module Driver Interface File
	
  Description:
    This file describes the interface that any USB module driver must implement
    in order for it to work with MPLAB Harmony USB Host and Device Stack.                                                  
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

#ifndef _DRV_USB_H
#define _DRV_USB_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files (continued at end of file)
// *****************************************************************************
// *****************************************************************************
/*  This section lists the other files that are included in this file.  Also,
    see the bottom of the file for additional implementation header files that
    are also included
*/

#include <stdint.h>
#include <stdbool.h>
#include "usb/usb_common.h"
#include "usb/usb_chapter_9.h"
#include "driver/driver_common.h"
#include "system/int/sys_int.h"
#include "system/system_module.h"
#include "usb/usb_host_client_driver.h"
#include "usb/usb_host_hub_interface.h"

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Driver Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Driver Host Pipe Handle

  Summary:
    Defines the USB Driver Host Pipe handle type

  Description:
    Defines the USB Driver Host Pipe handle type. The Host pipe handle returned
    by the USB driver should match this type.

  Remarks:
    None.
*/

typedef uintptr_t DRV_USB_HOST_PIPE_HANDLE;

// *****************************************************************************
/* USB Driver Host Pipe Handle Invalid

  Summary:
    Defines the USB Driver Host Pipe Invalid handle 

  Description:
    Defines the USB Driver Host Pipe Invalid handle. The USB Driver should
    returns this value if the pipe could not be created. 

  Remarks:
    None.
*/

#define DRV_USB_HOST_PIPE_HANDLE_INVALID ((DRV_USB_HOST_PIPE_HANDLE)(-1))

// *****************************************************************************
/* USB Driver Operation Mode enumeration

  Summary:
    Possible operation modes of the USB Driver.

  Description:
    This enumeration lists the possible USB Driver Operation modes.

  Remarks:
    None.
*/

typedef enum
{
    /* The driver should be able to switch between Host and Device operation */
    DRV_USB_OPMODE_DUAL_ROLE,
    
    /* The driver should support device mode operation only */
    DRV_USB_OPMODE_DEVICE,

    /* The driver should support host mode operation only */
    DRV_USB_OPMODE_HOST,

    /* The driver should support the USB OTG protocol */
    DRV_USB_OPMODE_OTG  

} DRV_USB_OPMODE;

// *****************************************************************************
/* USB Driver Events Enumeration

  Summary:
    Identifies the different events that the USB Driver provides.

  Description:
    Identifies the different events that the USB Driver provides. The USB driver
    should be able to provide these event to Device Layer. 

  Remarks:
    None.
*/

typedef enum
{
    /* Bus error occurred and was reported. This event can be generated in both
       Host and device mode. */
    DRV_USB_EVENT_ERROR = 1,

    /* Host has issued a device reset. This event occurs only in device mode */
    DRV_USB_EVENT_RESET_DETECT,

    /* Resume detected while USB in suspend mode. This event can be generated in
       both host and device mode. In host mode, the events occurs when a remote
       wakeup capable device has generated resume signalling. In device mode,
       this event will occur when the host has issued resume signalling. */
    DRV_USB_EVENT_RESUME_DETECT,

    /* This event is generated in device mode only. It occurs when the Host
       suspends the bus and the bus goes idle. */
    DRV_USB_EVENT_IDLE_DETECT,

    /* This event is generated in device mode only. It occurs when the Host
       suspends the bus and the bus goes idle. */
    DRV_USB_EVENT_WAKEUP_DETECT,
	
    /* This event is generated in host mode and device mode. In host mode, this
       event occurs when the device has stalled the host. In device mode, this
       event occurs when the host has accessed a stalled endpoint thus
       triggering the device to send a STALL to the host. */
    DRV_USB_EVENT_STALL,

    /* This event is generated in host mode and device mode. In device mode,
       this event occurs when a SOF has been generated by the host. In host
       mode, this event occurs when controller is about to generate an SOF. 
       */
    DRV_USB_EVENT_SOF_DETECT,

    /* This event is generated in device mode when a the VBUS voltage is above
       VBUS session valid. */
    DRV_USB_EVENT_DEVICE_SESSION_VALID,

    /* This event is generated in device mode when a the VBUS voltage falls
       below VBUS session valid. */
    DRV_USB_EVENT_DEVICE_SESSION_INVALID

} DRV_USB_EVENT;

// *****************************************************************************
/* Type of the USB Event Callback Function

  Summary:
    Type of the USB event callback function

  Description:
    Type of the USB event callback function. The client should register an event
    callback function of this type when it intends to receive events from the USB
    driver. The event callback function is registered using the
    DRV_USB_ClientEventCallBackSet() function. 

  Parameters:
    hClient    - handle to driver client that registered this callback function
    eventType  - Event type
    eventData  - Event relevant data

  Returns:
    None.

  Remarks:
    None.
*/

typedef void (*DRV_USB_EVENT_CALLBACK) 
(
    DRV_HANDLE hClient, 
    DRV_USB_EVENT  eventType,
    void * eventData   
);


// *****************************************************************************
/* USB Root Hub API Interface

  Summary:
    Group of function pointers to the USB Root Hub Functions.

  Description:
    This structure is a group of function pointers pointing to the USB Driver
    Root Hub API routines. The USB Driver Root Hub should export this group of
    functions so that the Host layer can access the port functionality. The
    interface to the Root Hub APIs is offered through the USB Driver Host API.

  Remarks:
    None.
*/

typedef struct
{
    /* This function returns the bus speed of the root hub */
    USB_SPEED (*rootHubSpeedGet)(DRV_HANDLE handle);

    /* Returns the number of ports that the root hub contains */
    uint8_t (*rootHubPortNumbersGet)(DRV_HANDLE handle);

    /* Returns the total current (in mA) that the root hub can supply */
    uint32_t (*rootHubMaxCurrentGet)(DRV_HANDLE handle);

    /* Enables operation of the root hub */
    void (*rootHubOperationEnable)(DRV_HANDLE handle, bool enable);
    
    /* Return the status of the operation enable function */
    bool (*rootHubOperationIsEnabled)(DRV_HANDLE handle);

    /* This is the root hub initialize function */
    void (*rootHubInitialize)(DRV_HANDLE handle, USB_HOST_DEVICE_OBJ_HANDLE usbHostDeviceInfo);

    /* An interface to the Root Hub Port Control functions */
    USB_HUB_INTERFACE rootHubPortInterface;

} DRV_USB_ROOT_HUB_INTERFACE;

// *****************************************************************************
/* USB Driver Client Functions Interface (For Host Mode)

  Summary:
    Group of function pointers to the USB Driver Host Mode Client Functions.

  Description:
    This structure is a group of function pointers pointing to the USB Driver
    Host Mode Client routines. The USB driver should export this group of
    functions so that the Host layer can access the driver functionality.

  Remarks:
    None.
*/

typedef struct
{
    /* This is a pointer to the driver open function */
    DRV_HANDLE (*open)(const SYS_MODULE_INDEX drvIndex, const DRV_IO_INTENT intent);

    /* This is pointer to the driver close function */
    void (*close)(DRV_HANDLE handle);

    /* This is a pointer to the event call back set function */
    void (*eventHandlerSet)(DRV_HANDLE handle, uintptr_t hReferenceData, DRV_USB_EVENT_CALLBACK eventHandler);

    /* This is a pointer to the host IRP submit function */
    USB_ERROR (*hostIRPSubmit)(DRV_USB_HOST_PIPE_HANDLE pipeHandle, USB_HOST_IRP * irp);

    /* This is a pointer to the host IRP Cancel all function */
    void (*hostIRPCancel)(USB_HOST_IRP * irp);
    
    /* This is pointer to the host event disable function */
    bool (*hostEventsDisable)(DRV_HANDLE handle);
    
    /* This is a pointer to the host event enable function */
    void (*hostEventsEnable)(DRV_HANDLE handle, bool eventContext);

    /* This is a pointer to the host pipe setup function */
    DRV_USB_HOST_PIPE_HANDLE (*hostPipeSetup)
    (
        DRV_HANDLE client,
        uint8_t deviceAddress, 
        USB_ENDPOINT endpointAndDirection,
        uint8_t hubAddress,
        uint8_t hubPort,
        USB_TRANSFER_TYPE pipeType, 
        uint8_t bInterval, 
        uint16_t wMaxPacketSize,
        USB_SPEED speed
    );

    /* This is a pointer to the host pipe close function */
    void (*hostPipeClose)(DRV_USB_HOST_PIPE_HANDLE pipeHandle);
	
	 /* This is a pointer to the host endpoint data toggle clear function */
    void (*endpointToggleClear)(DRV_USB_HOST_PIPE_HANDLE pipeHandle);

    /* This is a pointer to the host Root Hub functions */
    DRV_USB_ROOT_HUB_INTERFACE rootHubInterface;

} DRV_USB_HOST_INTERFACE;

#define DRV_USB_DEVICE_ENDPOINT_ALL 16

// *****************************************************************************
/* USB Driver Client Functions Interface (For Device Mode)

  Summary:
    Group of function pointers to the USB Driver Device Mode Client Functions.

  Description:
    This structure is a group of function pointers pointing to the USB Driver
    Device Mode Client routines. The USB driver should export this group of
    functions so that the Device Layer can access the driver functionality.

  Remarks:
    None.
*/

typedef struct
{
    /* This is a pointer to the driver open function */
    DRV_HANDLE (*open)(const SYS_MODULE_INDEX drvIndex, const DRV_IO_INTENT intent);

    /* This is pointer to the driver close function */
    void (*close)(DRV_HANDLE handle);

    /* This is a pointer to the event call back set function */
    void (*eventHandlerSet)(DRV_HANDLE handle, uintptr_t hReferenceData, DRV_USB_EVENT_CALLBACK eventHandler);

    /* This is a pointer to the device address set function */
    void (*deviceAddressSet)(DRV_HANDLE handle, uint8_t address);

    /* This is a pointer to the device current speed get function */
    USB_SPEED (*deviceCurrentSpeedGet)(DRV_HANDLE handle);

    /* This is a pointer to the SOF Number get function */
    uint16_t (*deviceSOFNumberGet)(DRV_HANDLE handle);

    /* This is a pointer to the device attach function */
    void (*deviceAttach)(DRV_HANDLE handle);

    /* This is a pointer to the device detach function */
    void (*deviceDetach)(DRV_HANDLE handle);

    /* This is a pointer to the device endpoint enable function */
    USB_ERROR (*deviceEndpointEnable)(DRV_HANDLE handle, USB_ENDPOINT endpoint, USB_TRANSFER_TYPE transferType, uint16_t endpointSize);

    /* This is a pointer to the device endpoint disable function */
    USB_ERROR (*deviceEndpointDisable)(DRV_HANDLE handle, USB_ENDPOINT endpoint);
    
    /* This is a pointer to the device endpoint stall function */
    USB_ERROR (*deviceEndpointStall)(DRV_HANDLE handle, USB_ENDPOINT endpoint);

    /* This is a pointer to the device endpoint stall clear function */
    USB_ERROR (*deviceEndpointStallClear)(DRV_HANDLE handle, USB_ENDPOINT endpoint);

    /* This is pointer to the device endpoint enable status query function */
    bool (*deviceEndpointIsEnabled)(DRV_HANDLE handle, USB_ENDPOINT endpoint);

    /* This is pointer to the device endpoint stall status query function */
    bool (*deviceEndpointIsStalled)(DRV_HANDLE handle, USB_ENDPOINT endpoint);

    /* This is a pointer to the device IRP submit function */
    USB_ERROR (*deviceIRPSubmit)(DRV_HANDLE handle, USB_ENDPOINT endpoint, USB_DEVICE_IRP * irp);

    /* This is a pointer to the device IRP Cancel function */
    USB_ERROR (*deviceIRPCancel)(DRV_HANDLE handle, USB_DEVICE_IRP * irp);
    
    /* This is a pointer to the device IRP Cancel all function */
    USB_ERROR (*deviceIRPCancelAll)(DRV_HANDLE handle, USB_ENDPOINT endpoint);
    
    /* This is a pointer to the device remote wakeup start function */
    void (*deviceRemoteWakeupStart)(DRV_HANDLE handle);
    
    /* This is a pointer to the device remote wakeup stop function */
    void (*deviceRemoteWakeupStop)(DRV_HANDLE handle);

    /* This is a pointer to the device Test mode enter function */
    USB_ERROR (*deviceTestModeEnter)(DRV_HANDLE handle, USB_TEST_MODE_SELECTORS testMode);

} DRV_USB_DEVICE_INTERFACE;

// *****************************************************************************
// *****************************************************************************
// Section: Included Files (continued)
// *****************************************************************************
// *****************************************************************************
/*  The file included below maps the interface definitions above to appropriate
    static implementations, depending on build mode.
*/


#endif
