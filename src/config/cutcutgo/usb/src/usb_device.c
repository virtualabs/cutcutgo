/**************************************************************************
 USB Device Layer Implementation

  Company:
    Microchip Technology Inc.
    
  File Name:
    usb_device.c
    
  Summary:
    This file contains implementations of both private and public functions
    of the USB Device Layer.
    
  Description:
    This file contains the USB device layer implementation.
**************************************************************************/

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

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "usb/src/usb_external_dependencies.h"
#include "usb/usb_common.h"
#include "usb/usb_chapter_9.h"
#include "usb/usb_device.h"
#include "usb/src/usb_device_function_driver.h"


#include "usb/src/usb_device_local.h"
#include "driver/usb/drv_usb.h"

/**********************************
 * Device layer instance objects.
 *********************************/
static USB_DEVICE_OBJ usbDeviceInstance[USB_DEVICE_INSTANCES_NUMBER];

/*************************************
 * Device layer endpoint constants. 
 *************************************/
static const USB_ENDPOINT controlEndpointTx = 0x80;
static const USB_ENDPOINT controlEndpointRx  = 0x00;

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer System Interface functions.
// *****************************************************************************
// *****************************************************************************

// ******************************************************************************
/* Function:
    SYS_MODULE_OBJ USB_DEVICE_Initialize
    (
        const SYS_MODULE_INDEX index, 
        const SYS_MODULE_INIT * const initData
    )

  Summary:
    Initializes the required USB device layer state machines.

  Description:
    This function initializes the required state machines of the USB device
    layer.

  Remarks:
    Refer to usb_device.h for usage information.
*/

SYS_MODULE_OBJ USB_DEVICE_Initialize
(
    const SYS_MODULE_INDEX index, 
    const SYS_MODULE_INIT * const initData
)
{
    USB_DEVICE_INIT *deviceInit;
    USB_DEVICE_OBJ* usbDeviceThisInstance;
    USB_DEVICE_IRP * irpEp0Rx;
    USB_DEVICE_IRP * irpEp0Tx;
    uint8_t count;
    USB_DEVICE_FUNCTION_DRIVER * driver;
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * funcRegTable;
         
    /* Copy init data to local variable. */
    deviceInit = (USB_DEVICE_INIT *)initData;
    
    /* Make sure the index is with in range. */
    if(index >= USB_DEVICE_INSTANCES_NUMBER)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid index value");
        return (SYS_MODULE_OBJ_INVALID);
    }
    
    /* Make sure that initData is not NULL. */
    if(deviceInit == NULL)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Initialization data is NULL");
        return (SYS_MODULE_OBJ_INVALID);
    }
    
    /* Make sure that the USB Device Master Descriptor is valid */
    if(deviceInit->usbMasterDescriptor == NULL)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: USB Master Descriptor table is NULL");
        return (SYS_MODULE_OBJ_INVALID);
    }
    
    /* Get this instance of USB device layer. */
    usbDeviceThisInstance = &usbDeviceInstance[index];

    /* Initialize this instance */        
    usbDeviceThisInstance->usbDeviceInstanceState = SYS_STATUS_BUSY;

    /* Save the "self" index for future use */    
    usbDeviceThisInstance->usbDevLayerIndex = index;
    
    /* Set the device state to detached.*/
    usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_DETACHED;
    
    /* Initialize the instance structure. */
    usbDeviceThisInstance->ptrMasterDescTable           = deviceInit->usbMasterDescriptor;
    usbDeviceThisInstance->registeredFuncDriverCount    = deviceInit->registeredFuncCount;
    usbDeviceThisInstance->registeredFuncDrivers        = deviceInit->registeredFunctions;
    
    /* Get the user configured speed */
    usbDeviceThisInstance->usbDeviceStatusStruct.usbConfiguredSpeed = deviceInit->deviceSpeed; 

    /* Initialize remote wakeup to disabled */
    usbDeviceThisInstance->remoteWakeupStatus = USB_DEVICE_REMOTE_WAKEUP_DISABLED;

    /* Initialize power source to bus power */
    usbDeviceThisInstance->usbDeviceStatusStruct.powerState = USB_DEVICE_POWER_STATE_BUS_POWERED;
    
    /* Reset set address flag.*/
    usbDeviceThisInstance->usbDeviceStatusStruct.setAddressPending = false;
    
    /* Reset Test mode flag.*/
    usbDeviceThisInstance->usbDeviceStatusStruct.testModePending = false;
    
    /* Initialize the RX IRP */
    irpEp0Rx            = &usbDeviceThisInstance->irpEp0Rx;
    irpEp0Rx->data      = usbDeviceThisInstance->ep0RxBuffer;
    irpEp0Rx->size      = USB_DEVICE_EP0_BUFFER_SIZE;
    irpEp0Rx->flags     = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    irpEp0Rx->status    = USB_DEVICE_IRP_STATUS_COMPLETED;
    irpEp0Rx->callback  = &_USB_DEVICE_Ep0ReceiveCompleteCallback;
    irpEp0Rx->userData  = (uintptr_t)usbDeviceThisInstance;

    /* Initialize the TX IRP */
    irpEp0Tx            = &usbDeviceThisInstance->irpEp0Tx;
    irpEp0Tx->callback  = &_USB_DEVICE_Ep0TransmitCompleteCallback;
    irpEp0Tx->userData  = (uintptr_t)usbDeviceThisInstance;
    irpEp0Tx->flags     = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;

    /* Device is not suspended */
    usbDeviceThisInstance->usbDeviceStatusStruct.isSuspended = false;

    /* Set the task state to opening the USB driver */
    usbDeviceThisInstance->taskState = USB_DEVICE_TASK_STATE_OPENING_USBCD;

    /* Get a pointer to the driver interface */
    usbDeviceThisInstance->driverInterface = (DRV_USB_DEVICE_INTERFACE *)(deviceInit->usbDriverInterface);
    usbDeviceThisInstance->driverIndex = deviceInit->driverIndex;

    /* Initialize Endpoint Q size */ 
    _USB_DEVICE_Initialize_Endpoint_Q(index, deviceInit->queueSizeEndpointRead, deviceInit->queueSizeEndpointWrite);

    /* Create Mutex for Endpoint Read Write */
    _USB_DEVICE_EndpointMutexCreate (usbDeviceThisInstance);

    funcRegTable    = usbDeviceThisInstance->registeredFuncDrivers;

    for(count = 0; count < usbDeviceThisInstance->registeredFuncDriverCount; count++ )
    {
        /* The global intialize function of each registered function driver is
         * called once when the device layer is initialized. This allows the
         * function driver to create any mutexes once when the device stack is
         * initialized. This happens only once. */

        driver = (USB_DEVICE_FUNCTION_DRIVER *)funcRegTable->driver;

        if (driver != NULL)
        {
            if(driver->globalInitialize != NULL)
            {
                driver->globalInitialize();
            }
        }
        funcRegTable++;
    }

    /* Return the index as the system module object */
    return index;  
}  
  
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

  Returns:
    None.

  Remarks:
     Refer to usb_device.h for usage information.
*/

void USB_DEVICE_Attach( USB_DEVICE_HANDLE usbDeviceHandle )
{
    USB_DEVICE_OBJ* usbClientHandle;

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
    }
    else
    {
        /* Attach to Host */
        usbClientHandle->driverInterface->deviceAttach(usbClientHandle->usbCDHandle); 
    
        /* Update the USB Device state */
        usbClientHandle->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_POWERED;
    } 
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_Detach( USB_DEVICE_HANDLE usbDeviceHandle )
{
    USB_DEVICE_OBJ* usbClientHandle;

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
    }
    else
    {
        /* Detach from the Host */
        usbClientHandle->driverInterface->deviceDetach(usbClientHandle->usbCDHandle); 
    
        /* Clear the suspended state */
        usbClientHandle->usbDeviceStatusStruct.isSuspended = false;
    
        /* Update the USB Device state */
        usbClientHandle->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_DETACHED;
    }  
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointEnable
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    uint8_t interface,
    USB_ENDPOINT_ADDRESS endpoint,
    USB_TRANSFER_TYPE transferType,
    size_t size
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    USB_DEVICE_RESULT result; 

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
        result = USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID; 
    }
    else
    {
        /* Enable the endpoint */
        result = (USB_DEVICE_RESULT)usbClientHandle->driverInterface->deviceEndpointEnable(usbClientHandle->usbCDHandle, endpoint, transferType, size);
    }
    
    return result; 
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_RESULT USB_DEVICE_EndpointDisable
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    USB_DEVICE_RESULT result; 

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
        result = USB_DEVICE_RESULT_ERROR_ENDPOINT_INVALID; 
    }
    else
    {
        /* Disable the Endpoint */
        result = (USB_DEVICE_RESULT)usbClientHandle->driverInterface->deviceEndpointDisable(usbClientHandle->usbCDHandle, endpoint);
    }
    
    return result; 
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

bool USB_DEVICE_EndpointIsEnabled
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    bool result;
    
    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
        result = false; 
    }
    else
    {
        /* Check if the endpoint is enabled */
        result = usbClientHandle->driverInterface->deviceEndpointIsEnabled(usbClientHandle->usbCDHandle, endpoint); 
    }
    
    return result; 
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_EndpointStall 
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_ENDPOINT_ADDRESS endpoint
)
{
    USB_DEVICE_OBJ* usbClientHandle;

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
    }
    else
    {
        /* Stall the endpoint */
        usbClientHandle->driverInterface->deviceEndpointStall(usbClientHandle->usbCDHandle, endpoint); 
    }
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_EndpointStallClear 
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_ENDPOINT_ADDRESS endpoint
)
{
    USB_DEVICE_OBJ* usbClientHandle;

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
    }
    else
    { 
        /* Clear endpoint stall condition */
        usbClientHandle->driverInterface->deviceEndpointStallClear(usbClientHandle->usbCDHandle, endpoint); 
    }
}

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

  Remarks:
    Refer to usb_device.h for usage information.
*/

bool USB_DEVICE_EndpointIsStalled
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT_ADDRESS endpoint
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    bool result; 

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
        /* Handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
        result = false; 
    }
    else
    {
        /* Check if the endpoint is stalled */
        result = usbClientHandle->driverInterface->deviceEndpointIsStalled(usbClientHandle->usbCDHandle, endpoint); 
    }
    
    return result; 
}

// *****************************************************************************
/* Function:
    SYS_STATUS USB_DEVICE_Status ( SYS_MODULE_OBJ object )

  Summary:
    Provides the current status of the USB device layer.

  Description:
    This function provides the current status of the USB device layer.

  Remarks
    Refer to usb_device.h for usage information.
*/

SYS_STATUS USB_DEVICE_Status( SYS_MODULE_OBJ object )
{
    SYS_MODULE_INDEX index = (SYS_MODULE_INDEX)object;

    if(object == SYS_MODULE_OBJ_INVALID)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid System Module Object");
        return(SYS_STATUS_UNINITIALIZED);
    }

    return( usbDeviceInstance[index].usbDeviceInstanceState );
}

// *****************************************************************************
/* Function:
    bool USB_DEVICE_IsSuspended( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    Returns true if the device is in a suspended state.

  Description:
    This function returns true if the device is presently in suspended state.

  Remarks:
    Refer to usb_device.h for usage information.
*/

bool USB_DEVICE_IsSuspended( USB_DEVICE_HANDLE usbDeviceHandle )
{
    USB_DEVICE_OBJ* usbClientHandle;
    bool result; 

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
       /* Handle is not valid */
       SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
       result = false; 
    }
    else
    {
        result = usbClientHandle->usbDeviceStatusStruct.isSuspended; 
    }
    
    return result;  
}

// *****************************************************************************
/* Function:
    USB_DEVICE_STATE USB_DEVICE_StateGet( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    Returns the current state of the USB device.

  Description:
    This function returns the current state of the USB device, as described in
    Chapter 9 of the USB 2.0 Specification.

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_STATE USB_DEVICE_StateGet( USB_DEVICE_HANDLE usbDeviceHandle )
{
    USB_DEVICE_OBJ* usbClientHandle;
    USB_DEVICE_STATE result; 

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
       /* Handle is not valid */
       SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
       result = USB_DEVICE_STATE_DETACHED; 
    }
    else
    {
        result = usbClientHandle->usbDeviceStatusStruct.usbDeviceState;
    }
    return result; 
}
    

// *****************************************************************************
/* Function:
    void USB_DEVICE_Deinitialize ( SYS_MODULE_OBJ usbDeviceobj)

  Summary:
    De initializes the specified instance of the USB device layer.

  Description:
    This function de initializes the specified instance of the USB device layer,
    disabling its operation (and any hardware) and invalidates all of the
    internal data.

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_Deinitialize ( SYS_MODULE_OBJ usbDeviceObj )
{
    USB_DEVICE_OBJ * usbDeviceThisInstance;
    SYS_MODULE_INDEX index = (SYS_MODULE_INDEX)usbDeviceObj;

    /* Check if we have a valid system module object */
    if(usbDeviceObj == SYS_MODULE_OBJ_INVALID)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid System Module Object");
        return;
    }

    /* In this release of the device stack, we really dont do much in the
     * deinitialize function, as we dont expect the USB Device Layer to be
     * deinitialized in a typical application. */

    usbDeviceThisInstance = ( USB_DEVICE_OBJ *)&usbDeviceInstance[index];

    /* Invalidate the object */
    usbDeviceThisInstance->usbDeviceInstanceState =  SYS_STATUS_UNINITIALIZED;
}
 
// *****************************************************************************
/* Function:
    void USB_DEVICE_Tasks( SYS_MODULE_OBJ devLayerObj )

  Summary:
    Calls all USB device layer tasks.

  Description:
    This function internally calls all USB Device layer tasks.

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_Tasks( SYS_MODULE_OBJ devLayerObj )
{
    uint8_t count;
    USB_SPEED speed;
    uint16_t configValue;
    uint16_t maxFunctionCounts;
    USB_DEVICE_OBJ * usbDeviceThisInstance;
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * funcRegTable;
    USB_DEVICE_FUNCTION_DRIVER * driver;

    /* Assert object is valid. */
    if(devLayerObj == SYS_MODULE_OBJ_INVALID)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: System Module Object is invalid");
        return;
    }

    /* Get this instance of USB device layer.*/
    usbDeviceThisInstance = &usbDeviceInstance[devLayerObj];    

    /* Proceed only if this instance is in initialized state. */
    if( usbDeviceThisInstance->usbDeviceInstanceState <= SYS_STATUS_UNINITIALIZED )
    {
        /* Instance is not yet initialized. Just do a return. */
        return;
    }

    /* Get device layer data. */
    speed           = usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed ;
    configValue     = usbDeviceThisInstance->activeConfiguration ;
    funcRegTable    = usbDeviceThisInstance->registeredFuncDrivers;
    maxFunctionCounts = usbDeviceThisInstance->registeredFuncDriverCount;

    /* Run the device layer task routine */
    switch(usbDeviceThisInstance->taskState)
    {
        case USB_DEVICE_TASK_STATE_OPENING_USBCD:

            /* Try to open the driver handle. This could fail if the driver is
             * not ready to be opened. */
            usbDeviceThisInstance->usbCDHandle = usbDeviceThisInstance->driverInterface->open( usbDeviceThisInstance->driverIndex, (DRV_IO_INTENT)(DRV_IO_INTENT_EXCLUSIVE|DRV_IO_INTENT_NONBLOCKING|DRV_IO_INTENT_READWRITE));

            /* Check if the driver was opened */
            if(usbDeviceThisInstance->usbCDHandle != DRV_HANDLE_INVALID)
            {
                /* Yes the driver could be opened. Advance the state to the next
                 * state */
                usbDeviceThisInstance->taskState = USB_DEVICE_TASK_STATE_RUNNING;

                /* Update the USB Device Layer state to indicate that it can be
                 * opened */
                usbDeviceThisInstance->usbDeviceInstanceState = SYS_STATUS_READY;
            }

            break;

        case USB_DEVICE_TASK_STATE_RUNNING:

            /* In this state, the device layer performs it's actual task, that
             * is calling the tasks routines of the functions drivers. The task
             * routine of a function driver is called in the context of the
             * USB_DEVICE_Tasks() function. The task routine is called only if
             * the current device speed matches the function driver speed
             * mentioned in the function driver registration table, the current
             * configuration matches the configuration value mentioned in the
             * function driver registration table, if the device is not
             * suspended and if the device state is in a configured state. */

            for(count = 0; count < maxFunctionCounts; count++ )
            {
                if( (funcRegTable->speed & speed) && (funcRegTable->configurationValue == configValue))
                {
                    if((usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState == USB_DEVICE_STATE_CONFIGURED) &&
                            (usbDeviceThisInstance->usbDeviceStatusStruct.isSuspended == false))
                    {
                        /* Get a pointer to the driver function pointer table and
                           call the task routine of the driver. */
                        driver = (USB_DEVICE_FUNCTION_DRIVER *)funcRegTable->driver;

                        if (driver != NULL)
                        {
                            if(driver->tasks != NULL)
                            {
                                driver->tasks( funcRegTable->funcDriverIndex );
                            }
                        }
                    }
                }

                /* Run the task routine for the next driver in the function
                 * driver registration table */
                funcRegTable++;
            }
            break;

        default:
            break;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer Client Interface Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_DEVICE_HANDLE USB_DEVICE_Open
    (
        const SYS_MODULE_INDEX index,
        const DRV_IO_INTENT intent
    )

  Summary:
    Opens the specific module instance and returns a handle.

  Description:
    This function opens the USB device layer for use by any client module and
    provides a handle that must be provided to any of the other device layer
    operations to identify the caller and the instance of the driver/hardware
    module.

  Remarks
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_HANDLE USB_DEVICE_Open
(
    const SYS_MODULE_INDEX index, 
    const DRV_IO_INTENT intent
)
{
    USB_DEVICE_OBJ * usbDeviceThisClient;

    /* Make sure the index is with in range. */
    if(index >= USB_DEVICE_INSTANCES_NUMBER)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Index is invalid");
        return(USB_DEVICE_HANDLE_INVALID);
    }

    /* Check if the instance is initialized. */   
    if(usbDeviceInstance[index].usbDeviceInstanceState != SYS_STATUS_READY)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Device Layer is not ready to be opened");
        return(USB_DEVICE_HANDLE_INVALID);
    }

    /* Copy this local client. This implementation of the device layer only
     * allows one client. Hence there is not seperate client object. The client
     * object is really the device layer object. */
    usbDeviceThisClient = &usbDeviceInstance[index];

    if(!usbDeviceThisClient->inUse)
    {
        /* We found a free client object */
        usbDeviceThisClient->inUse = true;

        /* Update client status */
        usbDeviceThisClient->clientState = USB_DEVICE_CLIENT_STATUS_READY;

        /* Get the Client Handle */
        return((USB_DEVICE_HANDLE)usbDeviceThisClient);
    }
      
    /* If we have reached here, then we did not find a free client object */
    SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: No free client objects");

    return(USB_DEVICE_HANDLE_INVALID);   
}    

// *****************************************************************************
/* Function:
    void USB_DEVICE_Close( DRV_HANDLE usbDevHandle )

  Summary:
    Closes an opened instance of the USB device layer.

  Description:
    This function closes an opened instance of the USB device layer,
    invalidating the handle.

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_Close(USB_DEVICE_HANDLE hClient )
{
    USB_DEVICE_OBJ* usbClientHandle;
    
    /* Validate the handle */
    
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(hClient);
    if(usbClientHandle == NULL)
    {
       /* Handle is not valid */
       SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
       return; 
    }
    
    /* Close this client */
    usbClientHandle->clientState = (USB_DEVICE_CLIENT_STATUS)DRV_CLIENT_STATUS_CLOSED;
    usbClientHandle->inUse = false;
}    

// *****************************************************************************
/* Function:
    USB_DEVICE_CLIENT_STATUS USB_DEVICE_ClientStatusGet
    (
        USB_DEVICE_HANDLE usbDevHandle
    );

  Summary:
    Gets the current client-specific status of the USB device layer.

  Description:
    This function gets the client-specific status of the USB device layer
    associated with the specified handle.

  Returns:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_CLIENT_STATUS USB_DEVICE_ClientStatusGet( USB_DEVICE_HANDLE hHandle )
{
    USB_DEVICE_OBJ * devClientHandle;

    devClientHandle = _USB_DEVICE_ClientHandleValidate(hHandle);

    if(devClientHandle == NULL)
    {
        return (USB_DEVICE_CLIENT_STATUS_CLOSED);
    }
    
    /* Return the state of the client. */  
    return( devClientHandle->clientState ); 
}
// ******************************************************************************
/* Function:
    void USB_DEVICE_EventCallBackSet
    (
        USB_DEVICE_HANDLE hHandle,
        const USB_DEVICE_EVENT_HANDLER callBackFunc
        uintptr_t context
    );

  Summary:
    Sets up the callback function that will be called in case of an
    event from the USB device layer.

  Description:
    This function sets up the callback function. This callback function 
    will be called when an event occurs in the USB device layer.

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_EventHandlerSet
(
    USB_DEVICE_HANDLE hHandle, 
    const USB_DEVICE_EVENT_HANDLER callBackFunc,
    uintptr_t context
)
{
    USB_DEVICE_OBJ* devClientHandle;

    /* Validate the handle */

    devClientHandle = _USB_DEVICE_ClientHandleValidate(hHandle);
    if(devClientHandle == NULL)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid client handle");
        return;
    }

    /* Register the callback function. Note that the call back function is
     * invoked for control transfer events.  */
    devClientHandle->callBackFunc = callBackFunc;
    devClientHandle->context = context;

    /* Register a callback with the driver. */
    devClientHandle->driverInterface->eventHandlerSet(devClientHandle->usbCDHandle, (uintptr_t)devClientHandle, &_USB_DEVICE_EventHandler);
}   

// ******************************************************************************
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

  Remarks:  
    See usb_device.h for usage information.
*/

uint8_t USB_DEVICE_ActiveConfigurationGet(USB_DEVICE_HANDLE hHandle)
{
    USB_DEVICE_OBJ * devClientHandle;

    /* Validate the client handle */

    devClientHandle = _USB_DEVICE_ClientHandleValidate(hHandle);
    if(devClientHandle == NULL)
    {
        /* Client handle is invalid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid client handle");
        return(0);
    }
    
    return(devClientHandle->activeConfiguration);
}

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
  
  Remarks:  
    See usb_device.h for usage information.
*/

USB_SPEED USB_DEVICE_ActiveSpeedGet(USB_DEVICE_HANDLE hHandle)
{
    USB_DEVICE_OBJ* devClientHandle;
    
    /* Validate the handle */
    devClientHandle = _USB_DEVICE_ClientHandleValidate(hHandle);

    if(devClientHandle == NULL)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid Handle");
        return(USB_SPEED_LOW);
    }

    /* Return the current speed */
    return(devClientHandle->usbDeviceStatusStruct.usbSpeed);
}

// *****************************************************************************
/* Function:
    USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlSend
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        uint8_t * data, 
        size_t length 
    )

  Summary:
    Sends data stage of the control transfer from device to host.

  Description:
    Sends data stage of the control transfer from device to host.

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlSend
(
    USB_DEVICE_HANDLE hClient,
    void * data, 
    size_t length 
)
{
    USB_DEVICE_OBJ * usbDeviceThisInstance;
    USB_DEVICE_IRP * irpHandle;   

    usbDeviceThisInstance = _USB_DEVICE_ClientHandleValidate(hClient);

    /* Validate the client handle */
    if(usbDeviceThisInstance == NULL)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid Client Handle");
        return(USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED);
    }

    /* Get a handle to the TX IRP */
    irpHandle = &usbDeviceThisInstance->irpEp0Tx;     
    irpHandle->data = data;
    irpHandle->size = (unsigned int )length;

    /* The function assumes the control transfer was initiated by the host and
     * the setup command has been received. controlTransferDataStageSize in such
     * a case will have the size of the control transfer data stage size. If the
     * length submitted by application is what the host is expecting, then we
     * dont have to send a ZLP. If the length is less than the what the host is
     * expecting then we should send a ZLP. */

    if(length == usbDeviceThisInstance->controlTransferDataStageSize)
    {
        /* This means we are sending the amount of data that is required.
         * So no need to send send ZLP */
        irpHandle->flags = USB_DEVICE_IRP_FLAG_DATA_PENDING;
    }
    else if (length < usbDeviceThisInstance->controlTransferDataStageSize )
    {
        /* The length is less than requested. We let the driver manage the
         * ZLP. */
        irpHandle->flags = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    }

    /* Submit the IRP to the USBCD */
    (void)usbDeviceThisInstance->driverInterface->deviceIRPSubmit( usbDeviceThisInstance->usbCDHandle, controlEndpointTx, irpHandle);

    return USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS;
}

// *****************************************************************************
/* Function:
    USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlReceive
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        void * data, 
        size_t length
    )

  Summary:
    Receives data stage of the control transfer from host to device.

  Description:
    Receives data stage of the control transfer from host to device.

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlReceive
(
    USB_DEVICE_HANDLE handle,
    void * data, 
    size_t length
)
{
    USB_DEVICE_CONTROL_TRANSFER_STRUCT * pControlTransfer;
    USB_DEVICE_OBJ * client;

    /* Validate the client handle */
    client = _USB_DEVICE_ClientHandleValidate(handle);
    if(client == NULL)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid Client Handle");
        return(USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED);
    }

    /* Get the control transfer object. The device layer is always ready to
     * receive data from the device. It needs to know however where the received
     * data should be placed. This is determined by the rxBuffer member of the
     * control transfer object. */
    pControlTransfer = &client->controlTransfer;
    pControlTransfer->rxBuffer = data ;
    pControlTransfer->rxDataCount = 0;
    pControlTransfer->expectedRxDataCount = length ;

    /* We are always ready to receive data on endpoint 0. So no need to submit a
     * IRP */
    return USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS;
}

// *****************************************************************************
/* Function:
    USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlStatus
    (
        USB_DEVICE_HANDLE hClient,
        USB_DEVICE_CONTROL_STATUS status 
    )

  Summary:
    Initiates status stage of the control transfer.

  Description:
    Initiates status stage of the control transfer.

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_CONTROL_TRANSFER_RESULT USB_DEVICE_ControlStatus
(
    USB_DEVICE_HANDLE handle,
    USB_DEVICE_CONTROL_STATUS status
)
{
    USB_DEVICE_OBJ * usbDeviceThisInstance;
    USB_DEVICE_IRP * irpHandle;

    usbDeviceThisInstance = _USB_DEVICE_ClientHandleValidate(handle);
    if(usbDeviceThisInstance == NULL)
    {
        /* Client handle is not valid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid Client Handle");
        return(USB_DEVICE_CONTROL_TRANSFER_RESULT_FAILED);
    }

    usbDeviceThisInstance->controlTransfer.inProgress = false;

    if(USB_DEVICE_CONTROL_STATUS_ERROR == status)
    {
        /* This means the control transfer should be stalled. We stall endpoint
         * 0 */
        usbDeviceThisInstance->driverInterface->deviceEndpointStall(usbDeviceThisInstance->usbCDHandle , controlEndpointTx);        
    }
    else
    {
        /* We must acknowledge the control transfer. This is done by sending a
         * ZLP */
        irpHandle = &usbDeviceThisInstance->irpEp0Tx;
        irpHandle->data = NULL;
        irpHandle->size = 0;

        (void)usbDeviceThisInstance->driverInterface->deviceIRPSubmit( usbDeviceThisInstance->usbCDHandle, controlEndpointTx, irpHandle);
    }

    return USB_DEVICE_CONTROL_TRANSFER_RESULT_SUCCESS;
}
// *****************************************************************************
/* Function:
    void USB_DEVICE_PowerStateSet
    (
        USB_DEVICE_HANDLE handle,
        USB_DEVICE_POWER_STATE state
    )

  Summary:
    Sets the power state of the device.

  Description:
    Sets the power state of the device.
    
  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_PowerStateSet
(
    USB_DEVICE_HANDLE handle,
    USB_DEVICE_POWER_STATE state
)
{
    USB_DEVICE_OBJ* client;

    /* Validate the client handle */

    client = _USB_DEVICE_ClientHandleValidate(handle);
    if(client == NULL)
    {
        /* Client handle is invalid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid Handle");
        return;
    }

    /* Store the power state */
    client->usbDeviceStatusStruct.powerState = state;
}

// ******************************************************************************
/* Function:
    USB_DEVICE_REMOTE_WAKEUP_STATUS USB_DEVICE_RemoteWakeupStatusGet
    (
        USB_DEVICE_HANDLE handle
    )

  Summary:
    This function returns the status of remote wakeup capability of the device.

  Description:
    This function returns the status of remote wakeup capability of the device.

  Remarks:
    Refer to usb_device.h for usage information.
*/

USB_DEVICE_REMOTE_WAKEUP_STATUS USB_DEVICE_RemoteWakeupStatusGet
(
    USB_DEVICE_HANDLE handle
)
{
    USB_DEVICE_OBJ* client;

    /* Validate the client handle */

    client = _USB_DEVICE_ClientHandleValidate(handle);
    if(client == NULL)
    {
        /* Client handle is invalid */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid Handle");
        return USB_DEVICE_REMOTE_WAKEUP_DISABLED;
    }

    return (client->remoteWakeupStatus);
}

// *****************************************************************************
/* Function:
    void USB_DEVICE_RemoteWakeupStop ( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    This function will stop the resume signalling.

  Description:
    This function will stop the resume signalling. This function should be
    called after the client has called the USB_DEVICE_RemoteWakeupStart()
    function.

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_RemoteWakeupStop( USB_DEVICE_HANDLE handle )
{
    USB_DEVICE_OBJ* usbDeviceThisInstance;

    /* Validate the device handle */
    usbDeviceThisInstance = _USB_DEVICE_ClientHandleValidate(handle);
    if(NULL == usbDeviceThisInstance)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer Client Handle is invalid");
        return;
    }

    /* Call the driver remote wake up function here */
    usbDeviceThisInstance->driverInterface->deviceRemoteWakeupStop(usbDeviceThisInstance->usbCDHandle);
}

// *****************************************************************************
/* Function:
    void USB_DEVICE_RemoteWakeupStart( USB_DEVICE_HANDLE usbDeviceHandle )

  Summary:
    This function will start the resume signalling.

  Description:
    This function will start the resume signalling on the bus. The client calls
    this function after it has detected a idle bus (through the
    USB_DEVICE_EVENT_SUSPENDED event). The remote wakeup feature should have
    been enabled by the host, before the client can call this function. The
    client can use the USB_DEVICE_RemoteWakeupStatusGet() function to check if
    the host has enabled the remote wakeup feature.

  Remarks:
    Refer to usb_device.h for usage information.
*/

void USB_DEVICE_RemoteWakeupStart( USB_DEVICE_HANDLE usbDeviceHandle )
{
    USB_DEVICE_OBJ * usbDeviceThisInstance;

    /* Validate the device handle */
    usbDeviceThisInstance = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle);
    if(NULL == usbDeviceThisInstance)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer Client Handle is invalid");
        return;
    }

    /* Call the driver remote wake up function here */
    usbDeviceThisInstance->driverInterface->deviceRemoteWakeupStart(usbDeviceThisInstance->usbCDHandle);
}
// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer System Interface functions.
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_ERROR USB_DEVICE_IRPSubmit
    (
        USB_DEVICE_HANDLE usbDeviceHandle, 
        USB_ENDPOINT endpointAndDirection, 
        USB_DEVICE_IRP * irp
    );
    
  Summary:
    This function submits an I/O Request Packet (IRP) for processing to the
    Hi-Speed USB Driver.
	
  Description:
    This function submits an I/O Request Packet (IRP) for processing to the USB
    Driver. The IRP allows a client to send and receive data from the USB Host.
    The data will be sent or received through the specified endpoint. The direction
    of the data transfer is indicated by the direction flag in the
    endpointAndDirection parameter. Submitting an IRP arms the endpoint to
    either send data to or receive data from the Host.  If an IRP is already
    being processed on the endpoint, the subsequent IRP submit operation
    will be queued. The contents of the IRP (including the application buffers)
    should not be changed until the IRP has been processed.
	
  Remarks:
    Refer to usb_device_function_driver.h for usage information.                                                                          
*/

USB_ERROR USB_DEVICE_IRPSubmit
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_ENDPOINT endpointAndDirection, 
    USB_DEVICE_IRP * irp
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    USB_ERROR result;
    
    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
       /* Handle is not valid */
       SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
       result = USB_ERROR_PARAMETER_INVALID; 
    }
    else
    {
         /* Submit IRP */
        result = usbClientHandle->driverInterface->deviceIRPSubmit(usbClientHandle->usbCDHandle,endpointAndDirection, irp ); 
    }
    
    return result; 
}

// **************************************************************************
/* Function:
    USB_ERROR USB_DEVICE_IRPCancelAll 
    (
        USB_DEVICE_HANDLE usbDeviceHandle,
        USB_ENDPOINT endpointAndDirection
    );
    
  Summary:
    This function cancels all IRPs that are queued and in progress at the
    specified endpoint.
	
  Description:
    This function cancels all IRPs that are queued and in progress at the
    specified endpoint.
	
  Remarks:
    Refer to usb_device_function_driver.h for usage information.                                                               
*/

USB_ERROR USB_DEVICE_IRPCancelAll 
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT endpointAndDirection
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    USB_ERROR result; 

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
       /* Handle is not valid */
       SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
       result = USB_ERROR_PARAMETER_INVALID; 
    }
    else
    {
        /* Cancel all IRPs pending on the Endpoint */
        result = usbClientHandle->driverInterface->deviceIRPCancelAll(usbClientHandle->usbCDHandle,endpointAndDirection); 
    }
    
    return result;  
}

// **************************************************************************
/* Function:
    USB_ERROR USB_DEVICE_IRPCancel
	(
		USB_DEVICE_HANDLE usbDeviceHandle,
		USB_DEVICE_IRP * irp
	)
    
  Summary:
    This function cancels the specific IRP that are queued and in progress at the
    specified endpoint.
	
  Description:
    This function attempts to cancel the processing of a queued IRP. An IRP that
    was in the queue but yet to be processed will be cancelled successfully and
    the IRP callback function will be called from this function with the
    USB_DEVICE_IRP_STATUS_ABORTED status. The application can release the data
    buffer memory used by the IRP when this callback occurs.  If the IRP was in
    progress (a transaction in on the bus) when the cancel function was called,
    the IRP will be canceled only when an ongoing or the next transaction has
    completed. The IRP callback function will then be called in an interrupt
    context. The application should not release the related data buffer unless
    the IRP callback has occurred.
	
  Remarks:
    Refer to usb_device_function_driver.h for usage information.
                                                                  
*/

USB_ERROR USB_DEVICE_IRPCancel
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_DEVICE_IRP * irp
)
{
    USB_DEVICE_OBJ* usbClientHandle;
    USB_ERROR result;

    /* Validate the handle */
    usbClientHandle = _USB_DEVICE_ClientHandleValidate(usbDeviceHandle );

    if(usbClientHandle == NULL)
    {
       /* Handle is not valid */
       SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid handle");
       result = USB_ERROR_PARAMETER_INVALID; 
    }
    else
    {
        /* Cancel IRP */
        result = usbClientHandle->driverInterface->deviceIRPCancel(usbClientHandle->usbCDHandle,irp); 
        
    }
  
    return result; 
}
// *****************************************************************************
// *****************************************************************************
// Section: USB Device Layer Local Functions
// *****************************************************************************
// *****************************************************************************

// ******************************************************************************
/* Function:
    void _USB_DEVICE_Ep0ReceiveCompleteCallback( USB_DEVICE_IRP * handle )

  Summary:
    Control receive complete callback.

  Description:
    This callback is called when either data/SETUP packet is received
    on the control endpoint.

  Remarks:
    This is local function. It should not be used directly by the client.
*/

void _USB_DEVICE_Ep0ReceiveCompleteCallback( USB_DEVICE_IRP * handle )
{
    USB_DEVICE_IRP * irpHandle = (USB_DEVICE_IRP *)handle;
    USB_DEVICE_OBJ * usbDeviceThisInstance;  
    USB_DEVICE_EVENT controlEvent = USB_DEVICE_EVENT_ERROR;
    USB_DEVICE_CONTROL_TRANSFER_STRUCT * controlTransfer;
    void * eventData = NULL;

    /* If the IRP was aborted, there is nothing for us to do */
    if(irpHandle->status == USB_DEVICE_IRP_STATUS_ABORTED)
    {
        return;
    }

    usbDeviceThisInstance = (USB_DEVICE_OBJ *)irpHandle->userData;
    controlTransfer = &usbDeviceThisInstance->controlTransfer;

    /* Something is received on EP0. */

    if(irpHandle->status == USB_DEVICE_IRP_STATUS_SETUP)
    {
        /* If we have received a SETUP packet, then abort any on-going control
         * transfer. Reset the control transfer handler back to the device layer
         * */

        if(controlTransfer->inProgress )
        {
            /* Abort any previous transfer */
            if ( controlTransfer->handler != NULL)
            {
                if (controlTransfer->handler == (void (*)(unsigned short, USB_DEVICE_EVENT, void *))usbDeviceThisInstance->callBackFunc)
                {
                    /* If the Control transfer handler is Application callback
                     * for USB Device layer, then invoke the application
                     * callback function.  */

                    usbDeviceThisInstance->callBackFunc(USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED, NULL, usbDeviceThisInstance->context ); 
                }
                else
                {
                    /* This means the in progress control transfer was initiated
                     * by a function driver or the device layer it self. */
                    controlTransfer->handler(controlTransfer->handlerIndex, USB_DEVICE_EVENT_CONTROL_TRANSFER_ABORTED , NULL );
                }
            }
            else
            {
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Control transfer Handler is NULL" );
            }
        }

        /* Mark the control transfer as "in progress". */
        controlTransfer->inProgress = true;

        /* Now change the transfer handler back to USB device layer handler. We
         * need to send the SETUP packet event and the SETUP packet to the
         * device layer */
        controlTransfer->handler = &_USB_DEVICE_ControlTransferHandler;
        controlTransfer->handlerIndex = usbDeviceThisInstance->usbDevLayerIndex;
        controlEvent = USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST; 
        eventData = usbDeviceThisInstance->ep0RxBuffer;

    }
    else if( irpHandle->size == 0)
    {
        /* ZLP received. This marks the completion of control transfer. Inform
         * the handler. */
        controlTransfer->inProgress = false;
        controlEvent = USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_SENT;
        eventData = NULL;
    }
    else if( irpHandle->size &&  controlTransfer->inProgress )
    {
        /* We are in the data stage of the control transfer.  See if the control
         * transfer handler was expecting the data. */

        if(controlTransfer->rxDataCount <  controlTransfer->expectedRxDataCount)
        {
            /* Copy the RX buffer to control transfer handler given driver
             * buffer and advance the buffer. Continue the transfer  */
            memcpy(&usbDeviceThisInstance->controlTransfer.rxBuffer[controlTransfer->rxDataCount], usbDeviceThisInstance->ep0RxBuffer, irpHandle->size );
            controlTransfer->rxDataCount += irpHandle->size;
        }
        
        /* Now that we have received the data, check if the IRP is completed */
        if(controlTransfer->rxDataCount >=  controlTransfer->expectedRxDataCount)
        {
            /* We have received all the the data that we need. Send an event to
             * the upper layer */
            controlEvent = USB_DEVICE_EVENT_CONTROL_TRANSFER_DATA_RECEIVED;
            eventData = NULL;
        }
    }

    if(controlEvent)
    {
        /* This means that some type of control transfer event needs to be sent
         * either to the the device layer or to the function driver or client
         * driver function driver layer. If a Setup packet was recieved, then
         * this will always go the device layer first. If this was a data stage
         * or handshake stage, then entity that was responsible for completing
         * the control transfer handles the events. */

        if (controlTransfer->handler == (void (*)(unsigned short, USB_DEVICE_EVENT, void *))usbDeviceThisInstance->callBackFunc)
        {
            /* If the Control transfer handler is Application callback for USB Device layer,
             * then invoke the application callback function.  */
            usbDeviceThisInstance->callBackFunc(controlEvent, eventData, usbDeviceThisInstance->context ); 
        }
        else
        {
            /* Propagate the event to the control transfer handler */
            controlTransfer->handler(controlTransfer->handlerIndex, controlEvent , eventData);
        }
    }

    usbDeviceThisInstance->irpEp0Rx.size = USB_DEVICE_EP0_BUFFER_SIZE;

    /* Submit IRP to endpoint 0 to receive the next data packet. */
    (void)usbDeviceThisInstance->driverInterface->deviceIRPSubmit( usbDeviceThisInstance->usbCDHandle, controlEndpointRx , &usbDeviceThisInstance->irpEp0Rx);
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_Ep0TransmitCompleteCallback( void * handle)

  Summary:
    EP0 transmit complete callback.

  Description:
    This function is called by the controller driver after the completing the
    EP0 transmit.

  Returns:
    This is local function. It should not be used directly by the client.
*/

void _USB_DEVICE_Ep0TransmitCompleteCallback(USB_DEVICE_IRP * handle)
{
    USB_DEVICE_IRP * irpHandle = (USB_DEVICE_IRP *)handle;
    USB_DEVICE_OBJ * usbDeviceThisInstance;
    USB_DEVICE_CONTROL_TRANSFER_STRUCT * controlTransfer;

    usbDeviceThisInstance = (USB_DEVICE_OBJ *)irpHandle->userData;
    controlTransfer = &(usbDeviceThisInstance->controlTransfer);
    
    if(irpHandle->status == USB_DEVICE_IRP_STATUS_ABORTED)
    {
        return;
    }

    /* If the device layer had recieved the set address request from the host
     * and we have now recieved a transmit complete callback, then this means we
     * have completed the handshake stage of the callback function and now need
     * to set the device address. */ 
    if(usbDeviceThisInstance->usbDeviceStatusStruct.setAddressPending)
    {
        usbDeviceThisInstance->driverInterface->deviceAddressSet(usbDeviceThisInstance->usbCDHandle, usbDeviceThisInstance->deviceAddress);
        usbDeviceThisInstance->usbDeviceStatusStruct.setAddressPending = false;
        
        /* Update the USB Device state */
        usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_ADDRESSED;
    }

    /* Or else, if the host had sent a request to enter test mode, we have
     * acknowledged that request and now should enter test mode. */

    else if(usbDeviceThisInstance->usbDeviceStatusStruct.testModePending)
    {
        /* Set the flag to false and enter test mode */
        usbDeviceThisInstance->usbDeviceStatusStruct.testModePending = false;
        usbDeviceThisInstance->driverInterface->deviceTestModeEnter(usbDeviceThisInstance->usbCDHandle, (USB_TEST_MODE_SELECTORS)usbDeviceThisInstance->usbDeviceStatusStruct.testSelector );
    }

    if(irpHandle->status == USB_DEVICE_IRP_STATUS_COMPLETED)
    {
        if( irpHandle->size == 0 )
        {
            controlTransfer->inProgress = false;
        }
    }
}

// *****************************************************************************
/* Function:
    void _USB_DEVICE_DeInitializeAllFunctionDrivers
    (
        USB_DEVICE_OBJ * usbDeviceThisInstance
    )

  Summary:
    De-initializes all function drivers that are presently loaded for the
    selected configuration.

  Description:
    De initializes all function drivers that are presently loaded for the
    selected configuration.

  Remarks
    This function is a local function and should not be called directly by the
    client.
*/

void _USB_DEVICE_DeInitializeAllFunctionDrivers
(
    USB_DEVICE_OBJ * usbDeviceThisInstance
)
{
    /* This function is called when device layer has detected a USB reset
     * signalling or when the host has set device configuration 0. */

    uint8_t count = 0;
    USB_SPEED speed = usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed ;
    uint16_t configValue = usbDeviceThisInstance->activeConfiguration ;
    uint16_t maxFunctionCounts = usbDeviceThisInstance->registeredFuncDriverCount;
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * funcRegTable = usbDeviceThisInstance->registeredFuncDrivers;
    USB_DEVICE_FUNCTION_DRIVER * driver;

    for(count = 0; count < maxFunctionCounts; count++ )
    {
        if( (funcRegTable->speed & speed) && (funcRegTable->configurationValue == configValue))
        {
            /* De initialize the function driver */
            driver = (USB_DEVICE_FUNCTION_DRIVER *)funcRegTable->driver;
            if (driver != NULL)
            {
                if(driver->deInitialize != NULL)
                {
                    /* Call the function driver deInitialize routine */
                    driver->deInitialize( funcRegTable->funcDriverIndex );
                }
            }           
        }

        funcRegTable++;
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_EventHandler
    (
        uintptr_t referenceHandle,
        DRV_USB_EVENT eventType, 
        void * eventData
    )

  Summary:
    Handles the events originating from the USB Controller driver.

  Description:
    This function is registered into the USB Controller driver as a callback
    function. The USB Controller driver calls this function in case of events
    from the USB Controller driver.
    
  Remarks:
    This is a local function and should not be called directly by a client.
*/

void _USB_DEVICE_EventHandler
(
    uintptr_t referenceHandle,
    DRV_USB_EVENT eventType, 
    void * eventData
)
{
    USB_DEVICE_OBJ* usbDeviceThisInstance;
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable;
    USB_DEVICE_EVENT_DATA_SOF SOFFrameNumber;

    usbDeviceThisInstance = (USB_DEVICE_OBJ *)referenceHandle;

    /* Handle events, only if this instance is in initialized state */
    if( usbDeviceThisInstance->usbDeviceInstanceState <= SYS_STATUS_UNINITIALIZED )
    {
        /* The device should anyway not be attached when the device layer is
         * not initialized. If we receive driver event when the device layer is
         * not initialized, there is nothing we can do but ignore them. */
        return;                
    }

    switch(eventType)
    {
        case DRV_USB_EVENT_RESET_DETECT:

            /* Clear the suspended state */
            usbDeviceThisInstance->usbDeviceStatusStruct.isSuspended = false;

            /* Cancel any IRP already submitted in the RX direction. */
            usbDeviceThisInstance->driverInterface->deviceIRPCancelAll( usbDeviceThisInstance->usbCDHandle, controlEndpointRx );

            /* Cancel any IRP already submitted in the TX direction. */
           usbDeviceThisInstance->driverInterface->deviceIRPCancelAll( usbDeviceThisInstance->usbCDHandle, controlEndpointTx );

            /* Deinitialize all function drivers.*/
            _USB_DEVICE_DeInitializeAllFunctionDrivers ( usbDeviceThisInstance );

            /* Disable all endpoints except for EP0.*/
            usbDeviceThisInstance->driverInterface->deviceEndpointDisable(usbDeviceThisInstance->usbCDHandle, DRV_USB_DEVICE_ENDPOINT_ALL);

            /* Enable EP0 endpoint. Note that the driver will ignore the
             * direction because this is endpoint 0. */
            (void)usbDeviceThisInstance->driverInterface->deviceEndpointEnable( usbDeviceThisInstance->usbCDHandle, controlEndpointTx, USB_TRANSFER_TYPE_CONTROL, USB_DEVICE_EP0_BUFFER_SIZE);

            if(usbDeviceThisInstance->irpEp0Rx.status <= USB_DEVICE_IRP_STATUS_SETUP)
            {
                /* Submit IRP to endpoint 0 to receive the setup packet */
                (void)usbDeviceThisInstance->driverInterface->deviceIRPSubmit( usbDeviceThisInstance->usbCDHandle, controlEndpointRx , &usbDeviceThisInstance->irpEp0Rx);
            }

            /* Change device state to Default */
            usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_DEFAULT;

            /* Reset means chirping has already happened. So, we must be knowing
               the speed. Get the speed and save it for future. */
            usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed = usbDeviceThisInstance->driverInterface->deviceCurrentSpeedGet(usbDeviceThisInstance->usbCDHandle);

            /* Get the master descriptor table entry.*/
            ptrMasterDescTable = usbDeviceThisInstance->ptrMasterDescTable;

            /* Now we know the speed. So for this speed get the pointer that
               points to correct group of configurations. */
            if( usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed == USB_SPEED_HIGH )
            {
                usbDeviceThisInstance->configDescriptorsPtr = ptrMasterDescTable->highSpeedConfigDescriptorTable;

                /* Also get the max configurations available in this group.*/
                usbDeviceThisInstance->maxConfigs = ptrMasterDescTable->highSpeedConfigDescriptorCount;
            }
            else
            {
                /* Classic speeds (full/low speed) */
                usbDeviceThisInstance->configDescriptorsPtr = ptrMasterDescTable->configDescriptorTable;

                /* Get the maximum configurations available in this group.*/
                usbDeviceThisInstance->maxConfigs = ptrMasterDescTable->configDescriptorCount;
            }

            /* Invalidate the current active configuration */
            usbDeviceThisInstance->activeConfiguration = 0;
            break;

        case DRV_USB_EVENT_RESUME_DETECT:

            /* USB device resumed. Update the flag.*/
            usbDeviceThisInstance->usbDeviceStatusStruct.isSuspended = false;
            break;

        case DRV_USB_EVENT_IDLE_DETECT:

            /* USB Device is suspended */
            usbDeviceThisInstance->usbDeviceStatusStruct.isSuspended = true;
            break;        

        case DRV_USB_EVENT_SOF_DETECT:

            /* The _USB_DEVICE_SOFEventEnable() macro resolves to eventType 
             * events are enabled in system_config.h. If enabled the event
             * will sent to the application. Else the event will not be
             * processed. */
            eventType = _USB_DEVICE_SOFEventEnable(); 
            if (eventType)
            {
                eventType = (DRV_USB_EVENT)USB_DEVICE_EVENT_SOF;
                /* Get the frame number */
                SOFFrameNumber.frameNumber = usbDeviceThisInstance->driverInterface->deviceSOFNumberGet(usbDeviceThisInstance->usbCDHandle);
                eventData = &SOFFrameNumber;
            }

            break;

        case DRV_USB_EVENT_DEVICE_SESSION_VALID:

            /* VBUS is valid.*/
            usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_ATTACHED;
            break;

        case DRV_USB_EVENT_DEVICE_SESSION_INVALID:

            /* VBUS is not valid. */ 
            usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_DETACHED;  
            break;

        default:
            // Nothing to do for all other cases.

            break;
    }

    if(eventType)
    {
        /* Inform the client about the event */
        if((usbDeviceThisInstance->clientState == USB_DEVICE_CLIENT_STATUS_READY) && (usbDeviceThisInstance->callBackFunc != NULL))
        {
            /* This means this client is valid and is a client of this device
             * layer instance. Pass event to application */
            usbDeviceThisInstance->callBackFunc((USB_DEVICE_EVENT)eventType, eventData, usbDeviceThisInstance->context);
        }
    }
}    

// ******************************************************************************
/* Function:
    void _USB_DEVICE_ControlTransferHandler
    (
        SYS_MODULE_INDEX handlerIndex,
        USB_DEVICE_CONTROL_TRANSFER_EVENT transferEvent,
        USB_DEVICE_CONTROL_TRANSFER_EVENT_DATA * eventData 
    )

  Summary:
    Processes the SETUP packet received from the USB Controller driver.

  Description:
    This function processes the SETUP packet received from the USB Controller 
    driver.
   
  Remarks:
    This is a local function and should not be called directly by the client.
*/

void  _USB_DEVICE_ControlTransferHandler
(    
    SYS_MODULE_INDEX handlerIndex,
    USB_DEVICE_EVENT transferEvent,
    void * eventData
)
{
    /* This function is called from _USB_DEVICE_Ep0ReceiveCompleteCallback
     * function when a Setup packet has been received. */

    USB_DEVICE_OBJ * usbDeviceThisInstance = (USB_DEVICE_OBJ *)&usbDeviceInstance[handlerIndex];
    USB_SETUP_PACKET * setupPkt;
    uint8_t interfaceNumber = 0;
    USB_ENDPOINT endpointNumber;
    bool enpointFoundInDescriptors = false;
  
    if( transferEvent == USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST )
    {
        /* Get pointer to Setup Packet */ 
        setupPkt = (USB_SETUP_PACKET *)(eventData);

        /* Get of Length of the Data Stage */
        usbDeviceThisInstance->controlTransferDataStageSize = setupPkt->wLength;

        /* Cancel any IRP that is in the pipe. */
        usbDeviceThisInstance->driverInterface->deviceIRPCancelAll( usbDeviceThisInstance->usbCDHandle, controlEndpointTx );
        
        switch (setupPkt->Recipient)
        {
            case USB_SETUP_RECIPIENT_DEVICE:
                if (setupPkt->RequestType == USB_SETUP_REQUEST_TYPE_STANDARD)
                {
                    /* This is a standard Device Request */ 
                    if (setupPkt->DataDir == USB_SETUP_REQUEST_DIRECTION_HOST_TO_DEVICE)
                    {
                        /* Serve standard Device SET requests */
                        _USB_DEVICE_ProcessStandardDeviceSetRequests ( usbDeviceThisInstance, setupPkt );
                    }
                    else
                    {
                        /* Serve standard Device GET requests */
                        _USB_DEVICE_ProcessStandardDeviceGetRequests ( usbDeviceThisInstance, setupPkt );
                    }
                }
                else if (setupPkt->RequestType == USB_SETUP_REQUEST_TYPE_VENDOR)
                {
                    /* This is a SETUP request of Vendor type  to recipient
                     * Device. The device layer does not know how to Handle
                     * these requests. Forward this request to application. */

                    _USB_DEVICE_RedirectControlXfrToClient (usbDeviceThisInstance, USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST, setupPkt);
                }
                else if (setupPkt->RequestType == USB_SETUP_REQUEST_TYPE_CLASS )
                {
                    /* This is a SETUP request of Type Class to recipient
                     * Device. */

                    USB_DEVICE_ControlStatus ((USB_DEVICE_HANDLE)usbDeviceThisInstance, USB_DEVICE_CONTROL_STATUS_ERROR);
                }
                break;

            case USB_SETUP_RECIPIENT_INTERFACE:

                 /* Serve any requests that is not "standard" type and whose
                  * recipient is not "device". (Any request whose recipient is
                  * interface/endpoint must be handled by the function driver.
                  * This is because function driver has all the information
                  * about endpoint and interface) */				
				if (setupPkt->RequestType == USB_SETUP_REQUEST_TYPE_VENDOR)
				{
					_USB_DEVICE_VendorInterfaceRequestProcess(usbDeviceThisInstance, setupPkt->bIntfID,setupPkt); 
				}
				else
				{
					_USB_DEVICE_ForwardControlXfrToFunction(usbDeviceThisInstance, setupPkt->bIntfID,setupPkt ); 
				}
                break;

            case USB_SETUP_RECIPIENT_ENDPOINT:

                /* Retrieve Endpoint number from Setup Packet */
                endpointNumber = setupPkt->bEPID;

                /* Any Control request to a Non Zero Endpoint should be Stalled
                 * if the Device is not in Configured State. The request will
                 * also be stalled if there is no descriptor available for this
                 * Endpoint */ 

                if (endpointNumber != 0)
                {
                    /* Check if the Endpoint is present in the Descriptors. If
                     * yes find the interface number */

                    enpointFoundInDescriptors = _USB_DEVICE_FindEndpoint( usbDeviceThisInstance, endpointNumber, &interfaceNumber);
                    if ((usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState != USB_DEVICE_STATE_CONFIGURED) ||(enpointFoundInDescriptors != true))
                    {
                        /* The Device should not service the Non Zero Endpoint
                         * request if the Device is not configured or the
                         * Endpoint is not present in descriptors. So stall this
                         * request.  */

                        USB_DEVICE_ControlStatus ((USB_DEVICE_HANDLE)usbDeviceThisInstance, USB_DEVICE_CONTROL_STATUS_ERROR);
                        return;
                    }
                }

                /* Program control reached here means that we have received an
                 * Endpoint request on a valid Endpoint Number. */

                if (setupPkt->RequestType == USB_SETUP_REQUEST_TYPE_STANDARD)
                {
                    /* Standard Endpoint requests are handled by Device Layer */
                    _USB_DEVICE_ProcessStandardEndpointRequest( usbDeviceThisInstance, interfaceNumber, setupPkt);
                }
                else 
                {
                    /* This is Class or Vendor request. Forward the request to
                     * right Function driver or Client */ 

                    _USB_DEVICE_ForwardControlXfrToFunction (usbDeviceThisInstance, interfaceNumber,setupPkt );
                   
                }
                break;
            
            case USB_SETUP_RECIPIENT_OTHER:
                
                /* This is a SETUP request of Type Vendor to recipient Device.
                 * The device layer does not know how to Handle these requests.
                 * Forward this request to application. */

                _USB_DEVICE_RedirectControlXfrToClient( usbDeviceThisInstance, USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST, setupPkt);
                break;
               
            default: 
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Unknown Control Transfer received from Host" );
                break;
        }
    }   
}

// *****************************************************************************
/* Function:
    void _USB_DEVICE_ForwardControlXfrToFunction 
    (
        USB_DEVICE_OBJ * usbDeviceThisInstance,
        uint8_t interfaceNumber,
        USB_SETUP_PACKET * setupPkt
    )

  Summary:
    This function forwards control transfers to registred function drivers.

  Description:
    This function Forwards control transfers to registred function drivers. If
    control handler fucntion callback is null, then the control transfer is
    forwarded to client.

  Remarks:
    This is local function. It should not be used directly by the client.
*/

void _USB_DEVICE_ForwardControlXfrToFunction 
(
    USB_DEVICE_OBJ * usbDeviceThisInstance,
    uint8_t interfaceNumber,
    USB_SETUP_PACKET * setupPkt
)
{
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * lFuncDriverRegTable;
    USB_DEVICE_CONTROL_TRANSFER_STRUCT * controlTransfer = &usbDeviceThisInstance->controlTransfer;
    USB_DEVICE_FUNCTION_DRIVER * driver;
    
    /* This is a function driver /vendor specific setup packet. The recipient
     * field is either interface or other. Check which function driver has to
     * handle this setup packet. This function is called from Setup packet
     * handling function. We first find out which function driver owns this
     * interface.  */
    
    lFuncDriverRegTable = _USB_DEVICE_GetFunctionDriverEntryByInterface( interfaceNumber, usbDeviceThisInstance);
    if (lFuncDriverRegTable != NULL)
    {
        if (lFuncDriverRegTable->driver != NULL)
        {
            driver = (USB_DEVICE_FUNCTION_DRIVER *)(lFuncDriverRegTable->driver);
            if (driver->controlTransferNotification != NULL)
            {
                /* The interface number is owned by one of the registered
                 * function driver. Pass the SETUP packet to the function
                 * driver. */

                /* Save the callback and index for future use.  Here we change
                 * the handler to function driver specific handler.  All further
                 * control transfer stage must be handled by the function driver
                 * control transfer handler.*/

                controlTransfer->handler = (void (*)(unsigned short, USB_DEVICE_EVENT, void *))driver->controlTransferNotification;

                controlTransfer->handlerIndex = lFuncDriverRegTable->funcDriverIndex;

                /* Forward the SETUP packet to the function driver */
                controlTransfer->handler( controlTransfer->handlerIndex, USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST, setupPkt);
            }
            else
            {
                /* There is no valid control Transfer Notification Handler found
                 * in the Function registration Table. This control transfer
                 * will be handled by the client */

                _USB_DEVICE_RedirectControlXfrToClient (usbDeviceThisInstance, USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST, setupPkt );
            }
        }
        else
        {
            /* If the driver member of the function driver registration table
             * entry is NULL, this means that the device layer client will
             * handle the control transfer. Forward the request to the device
             * layer client. */

            _USB_DEVICE_RedirectControlXfrToClient (usbDeviceThisInstance, USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST, setupPkt );
        }
    }
    else
    {
        /* The interface number specified in the SETUP Packet does not belong to
         * any of the registered function driver. Host should not have sent this
         * request. STALL this request */

        USB_DEVICE_ControlStatus((USB_DEVICE_HANDLE)usbDeviceThisInstance, USB_DEVICE_CONTROL_STATUS_ERROR);
    }
}

// *****************************************************************************
/* Function:
    void _USB_DEVICE_ProcessStandardEndpointRequest
    (
        USB_DEVICE_OBJ * usbDeviceThisInstance,
        uint8_t interfaceNumber,
        USB_SETUP_PACKET * setupPkt
    )

  Summary:
    This function handles standard Endpoint requests.

  Description:
    This function handles standard Endpoint requests. 

  Remarks:
    This is local function. It should not be used directly by the client.
*/

void _USB_DEVICE_ProcessStandardEndpointRequest
(
    USB_DEVICE_OBJ * usbDeviceThisInstance,
    uint8_t interfaceNumber,
    USB_SETUP_PACKET * setupPkt
)
{
    USB_ENDPOINT usbEndpoint;
    usbEndpoint = setupPkt->bEPID;

    if( setupPkt->bRequest == USB_REQUEST_GET_STATUS )
    {
        /* This is an Endpoint Get Status request. Send the status to the host.
         * */
        usbDeviceThisInstance->getStatusResponse.status = 0x00;
        usbDeviceThisInstance->getStatusResponse.endPointHalt =  usbDeviceThisInstance->driverInterface->deviceEndpointIsStalled(usbDeviceThisInstance->usbCDHandle, usbEndpoint );

        USB_DEVICE_ControlSend( (USB_DEVICE_HANDLE)usbDeviceThisInstance, (uint8_t *)&usbDeviceThisInstance->getStatusResponse, 2 );
    }
    else if( setupPkt->bRequest == USB_REQUEST_CLEAR_FEATURE )
    {
        if( setupPkt->wValue == USB_FEATURE_SELECTOR_ENDPOINT_HALT )
        {
            /* This means the host has requested for the stall condition on an
             * endpoint to be cleared. */
            usbDeviceThisInstance->driverInterface->deviceEndpointStallClear(usbDeviceThisInstance->usbCDHandle, usbEndpoint );
            USB_DEVICE_ControlStatus((USB_DEVICE_HANDLE)usbDeviceThisInstance, USB_DEVICE_CONTROL_STATUS_OK );
        }
    }
    else if (setupPkt->bRequest == USB_REQUEST_SET_FEATURE )
    {
        if( setupPkt->wValue == USB_FEATURE_SELECTOR_ENDPOINT_HALT )
        {
            /* This means the host has requested for an endpoint to be stalled
             * */
            usbEndpoint = setupPkt->bEPID;
            usbDeviceThisInstance->driverInterface->deviceEndpointStall(usbDeviceThisInstance->usbCDHandle, usbEndpoint );
            USB_DEVICE_ControlStatus((USB_DEVICE_HANDLE)usbDeviceThisInstance, USB_DEVICE_CONTROL_STATUS_OK );
        }
    }
    else if (setupPkt->bRequest == USB_REQUEST_SYNCH_FRAME)
    {
        /* Forward this request to Function driver. */
        _USB_DEVICE_Handle_Synch_Frame_Request(usbDeviceThisInstance, interfaceNumber, setupPkt);
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_ProcessStandardGetRequests
    (
        USB_DEVICE_OBJ * usbDeviceThisInstance,
        USB_SETUP_PACKET * setupPkt 
    )

  Summary:
    Processes the standard "get" requests received from the USB Controller driver.

  Description:
    This function processes the standard "get" requests received from the USB 
    Controller driver.
   
  Remarks:
    This is local function and should not be called directly by the client.
*/
void _USB_DEVICE_ProcessStandardDeviceGetRequests
(
    USB_DEVICE_OBJ * usbDeviceThisInstance,
    USB_SETUP_PACKET * setupPkt 
)
{
    USB_CONFIGURATION_DESCRIPTOR * lConfigDescriptor = NULL;
    uint16_t size = 0;
    void*  pData = NULL;
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable ;
    bool serviceGetRequest = true; 

    /* Copy the Master descriptor table to a local pointer. */
    ptrMasterDescTable = usbDeviceThisInstance->ptrMasterDescTable ;
    
    if(setupPkt->bRequest == USB_REQUEST_GET_DESCRIPTOR)
    {
        switch(setupPkt->bDescriptorType)
        {
            case USB_DESCRIPTOR_DEVICE:
                if(usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed == USB_SPEED_HIGH)
                {
                    /* High speed descriptor. */
                    if( ptrMasterDescTable->highSpeedDeviceDescriptor == NULL )
                    {
                        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: High speed device descriptor is NULL" );
                    }

                    /* Pointer to high speed device descriptor.*/
                    pData = ( (uint8_t*) ptrMasterDescTable->highSpeedDeviceDescriptor );
                }
                else
                {
                    /* Full/low speed descriptor.*/
                    if( ptrMasterDescTable->deviceDescriptor == NULL )
                    {   
                        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Full/Low speed device descriptor is NULL");
                    }

                    /* Full/low speed device descriptor points usbDeviceThisInstance->ptrMasterDescTabler */
                    pData = ( (uint8_t*) ptrMasterDescTable->deviceDescriptor );
                }

                /* Total size of the device descriptor (Its always 18). */
                size = 18;
                break;

            case USB_DESCRIPTOR_CONFIGURATION:                

                /* Get correct pointer to the descriptor based on config value.
                 * setupPkt->bDscIndex indicates the host requested
                 * configuration index.  Make sure that the requested
                 * configuration index is with in the limits.*/

                if( (setupPkt->bDscIndex) < usbDeviceThisInstance->maxConfigs )
                {
                    lConfigDescriptor = (USB_CONFIGURATION_DESCRIPTOR *)usbDeviceThisInstance->configDescriptorsPtr[setupPkt->bDscIndex];
                    if(lConfigDescriptor != NULL )
                    {
                        /* We have a valid specified configuration. Prepare the
                         * output variables */
                        pData  = (uint8_t *)lConfigDescriptor;
                        size = lConfigDescriptor->wTotalLength;
                    }
                    else
                    {
                        /* Configuration not found */
                        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid pointer to configuration descriptor");
                        pData = NULL;
                    }
                }
                break;

            case USB_DESCRIPTOR_OTHER_SPEED: 
                /* Host has requested for the other speed descriptor. Other Speed 
                * Descriptor requests are handled differently. Respond to Other 
                * Speed configuration descriptor request only if USB peripheral is 
                * configured for High Speed operation. If the USB peripheral is 
                * configured for Full Speed operation then the request shall be 
                * stalled.*/
                if (usbDeviceThisInstance->usbDeviceStatusStruct.usbConfiguredSpeed == USB_SPEED_HIGH)
                {
                    /* Service Other Speed Configuration descriptor request. The 
                       function will respond to Host */
                    serviceGetRequest = false;
                    _USB_DEVICE_OtherSpeedDescriptorRequestService(usbDeviceThisInstance, setupPkt); 
                }
                else
                {
                    /* USB Peripheral is not configured for High Speed. The 
                     * request will be stalled. */
                    serviceGetRequest = true;
                }
                break; 
    
            case USB_DESCRIPTOR_DEVICE_QUALIFIER:
                /* Respond to Device Qualifier request only if USB peripheral is
                   configured for High Speed operation. If the peripheral is 
                   configured for Full Speed operation request shall be stalled.
                 */
                if (usbDeviceThisInstance->usbDeviceStatusStruct.usbConfiguredSpeed == USB_SPEED_HIGH)
                {
                    if( usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed == USB_SPEED_HIGH )
                    {
                        /* For high speed, respond with the other speed (full speed) device_qualifier. */
                        pData = (uint8_t*) ptrMasterDescTable->fullSpeedDeviceQualifier;
                    }
                    else
                    {
                        /* For full speed, respond with the other speed (high speed) device_qualifier. */
                        pData = ((uint8_t*) ptrMasterDescTable->highSpeedDeviceQualifier );
                    } 

                    /* Size of device_qualifier descriptor is always 10. */
                    size = 10;
                }
                break;

            case USB_DESCRIPTOR_STRING:

                /* A string descriptor was requested */
                size = _USB_DEVICE_GetStringDescriptorRequest(ptrMasterDescTable, setupPkt, &pData );
                break;

            case USB_DESCRIPTOR_BOS:

                /* A BOS descriptor was requested */
                _USB_DEVICE_GetBosDescriptorRequest(ptrMasterDescTable->bosDescriptor, pData, size );
                break; 

            default:
                break;
        } 
    }
    else if (setupPkt->bRequest == USB_REQUEST_GET_CONFIGURATION)
    {
        /* Host wants to know what is current configuration */
        pData = &(usbDeviceThisInstance->activeConfiguration);
        size = 1;
    }
    else if (setupPkt->bRequest == USB_REQUEST_GET_STATUS)
    {
        /* The host want to know the power status and remote wakeup status of
         * the device. */
        usbDeviceThisInstance->getStatusResponse.status = 0;
        usbDeviceThisInstance->getStatusResponse.selfPowered = usbDeviceThisInstance->usbDeviceStatusStruct.powerState;
        usbDeviceThisInstance->getStatusResponse.remoteWakeup = usbDeviceThisInstance->remoteWakeupStatus;
        pData = (uint8_t *)&usbDeviceThisInstance->getStatusResponse;
        size = 2;
    }
    
    if (serviceGetRequest == true)
    {
        if(pData == NULL)
        {
            /* We don't have valid data to send. STALL the transfer */
            USB_DEVICE_ControlStatus((USB_DEVICE_HANDLE)usbDeviceThisInstance, USB_DEVICE_CONTROL_STATUS_ERROR );
        }
        else
        {
            /* Limit the size. */
            if( size > setupPkt->wLength )
            {
                size = setupPkt->wLength;
            }

            /* Send the data stage */
            USB_DEVICE_ControlSend( (USB_DEVICE_HANDLE)usbDeviceThisInstance, pData, size );
        }
    }
}

// ******************************************************************************
/* Function:
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * _USB_DEVICE_GetFunctionDriverEntryByInterface
    (
        uint8_t interfaceNumber,
        USB_DEVICE_OBJ * usbDeviceThisInstance
    )

  Summary:
    This function gets the correct entry in the function driver registration
    table for a given interface.

  Description:
    This function gets the correct entry in the function driver registration
    table for a given interface.

  Remarks:
    This is an internal function and should not be called directly by the client.
*/

USB_DEVICE_FUNCTION_REGISTRATION_TABLE * _USB_DEVICE_GetFunctionDriverEntryByInterface
(
    uint8_t interfaceNumber,
    USB_DEVICE_OBJ * usbDeviceThisInstance
)
{
    uint8_t count;
    uint16_t maxFunctionCounts = usbDeviceThisInstance->registeredFuncDriverCount;
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * funcRegTable = usbDeviceThisInstance->registeredFuncDrivers;
    uint8_t speed = usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed ;
    uint8_t configValue = usbDeviceThisInstance->activeConfiguration ;

    /* This loop finds the function driver that owns this interface */
    for(count = 0; count < maxFunctionCounts; count++ )
    {
        if( (funcRegTable->speed & speed) && (funcRegTable->configurationValue == configValue)
                && ( interfaceNumber >= funcRegTable->interfaceNumber ) &&
                (interfaceNumber < ( funcRegTable->interfaceNumber + funcRegTable->numberOfInterfaces )))
        {
            return(funcRegTable);
        }
        funcRegTable++;
    }

    return NULL;
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_ConfigureDevice( USB_DEVICE_OBJ* usbDeviceThisInstance )

  Summary:
    This function configures the device. 

  Description:
    The initialization of all the function drivers and opening of all endpoints
    are done here.

  Returns:
    This is a local function and should not be called directly by the
    application.
*/

void _USB_DEVICE_ConfigureDevice( USB_DEVICE_OBJ* usbDeviceThisInstance )
{
    uint16_t parsedLength= 0;
    uint16_t confTotalLength;
    uint8_t * pDescriptor = usbDeviceThisInstance->pActiveConfigDesc;
    uint8_t descriptorType;
    uint8_t interfaceNumber = 0;
    uint8_t alternateSetting = 0;
    USB_DEVICE_FUNCTION_REGISTRATION_TABLE * pFunctionRegTable = NULL;
    USB_DEVICE_FUNCTION_DRIVER * driver;
   
    confTotalLength = ((USB_CONFIGURATION_DESCRIPTOR *)pDescriptor)->wTotalLength;

    /* Start parsing the configuration desciptor. For each interface descriptor
     * that was found, find out the owning function driver and then initialize
     * the function driver. */

    while(parsedLength < confTotalLength)
    {
        descriptorType = ((USB_DEVICE_SERVICE_DESCRIPTOR_HEAD *)pDescriptor)->bDescriptorType;
        if(descriptorType == USB_DESCRIPTOR_INTERFACE)
        {
            /* If this descriptor was an interface, find out which function
             * driver owns this interface */ 
            pFunctionRegTable = NULL;
            interfaceNumber = ((USB_INTERFACE_DESCRIPTOR * )pDescriptor)->bInterfaceNumber;
            alternateSetting = ((USB_INTERFACE_DESCRIPTOR * )pDescriptor)->bAlternateSetting;
            pFunctionRegTable = _USB_DEVICE_GetFunctionDriverEntryByInterface(interfaceNumber , usbDeviceThisInstance);
        } 

        if( pFunctionRegTable != NULL )
        {
            driver = (USB_DEVICE_FUNCTION_DRIVER *)(pFunctionRegTable->driver);
            
            if (driver != NULL)
            {
                /* Call the driver intialize by descriptor function. This will
                 * let the function driver know that it should start running and
                 * be initialized. */
                driver->initializeByDescriptor(pFunctionRegTable->funcDriverIndex, (USB_DEVICE_HANDLE)usbDeviceThisInstance,
                              pFunctionRegTable->funcDriverInit, interfaceNumber, alternateSetting, descriptorType, pDescriptor);
            }
        }

        parsedLength += ((USB_DEVICE_SERVICE_DESCRIPTOR_HEAD *)pDescriptor)->bLength;
        pDescriptor += ((USB_DEVICE_SERVICE_DESCRIPTOR_HEAD *)pDescriptor)->bLength;
    }
}

// ******************************************************************************
/* Function:
    bool _USB_DEVICE_FindEndpoint
    ( 
        USB_DEVICE_OBJ* usbDeviceThisInstance,
        USB_ENDPOINT endpointNumber, 
        uint8_t* interfaceNumber
    )

  Summary:
    This function takes an Endpoint Number as a parameter and finds the Endpoint
    belongs to which Interface.

  Description:
    This function takes an Endpoint Number as a parameter and finds the Endpoint
    belongs to which Interface. This function finds the interface by parsing the
    USB descriptors. This is a local function and should not be called by
    applications directly.

  Parameters:
    usbDeviceThisInstance   - This instance of the USB device layer.
    endpointNumber          - Endpoint Number .
    interfaceNumber         - pointer to Interface Number. This is an out parameter.
    

  Returns:
    true - Returns true if the Endpoint number belongs to any of the registered
           interfaces. True indicates that a valid interface is found and user
           can read the interface number from the interfaceNumber parameter.
    false -Endpoint does not belong to any registered interface.
*/

bool _USB_DEVICE_FindEndpoint
(
    USB_DEVICE_OBJ* usbDeviceThisInstance, 
    USB_ENDPOINT endpointNumber,
    uint8_t* interfaceNum
)
{
    uint16_t parsedLength= 0;
    uint16_t confTotalLength;
    uint8_t * pDescriptor = usbDeviceThisInstance->pActiveConfigDesc;
    uint8_t descriptorType;

    confTotalLength = ((USB_CONFIGURATION_DESCRIPTOR *)pDescriptor)->wTotalLength;

    /* Parse the configuration descriptor. When an endpoint descriptor is found,
     * check if the endpoint number matches the input endpoint number. */
    while(parsedLength < confTotalLength)
    {
        descriptorType = ((USB_DEVICE_SERVICE_DESCRIPTOR_HEAD *)pDescriptor)->bDescriptorType;
        if(descriptorType == USB_DESCRIPTOR_INTERFACE)
        {
            *(interfaceNum) = ((USB_INTERFACE_DESCRIPTOR *)pDescriptor)->bInterfaceNumber;
        }
        else if (descriptorType == USB_DESCRIPTOR_ENDPOINT)
        {
            if(endpointNumber == ((USB_ENDPOINT_DESCRIPTOR * )pDescriptor)->bEndpointAddress)
            {
                return true;
            }
        }

        parsedLength += ((USB_DEVICE_SERVICE_DESCRIPTOR_HEAD *)pDescriptor)->bLength;
        pDescriptor += ((USB_DEVICE_SERVICE_DESCRIPTOR_HEAD *)pDescriptor)->bLength;
    }

    return false;
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_ProcessStandardSetRequests
    (
        USB_DEVICE_OBJ * usbDeviceThisInstance,
        USB_SETUP_PACKET * setupPkt
    )

  Summary:
    Processes the standard "set" requests received from the USB Controller driver.

  Description:
    This function processes the standard "set" requests received from the USB 
    Controller driver.
   
  Remarks:
    This is a local function and should not be called directly by the client.
*/

void _USB_DEVICE_ProcessStandardDeviceSetRequests
(
    USB_DEVICE_OBJ * usbDeviceThisInstance,
    USB_SETUP_PACKET * setupPkt
)
{   
    uint8_t count;
    USB_DEVICE_EVENT_DATA_CONFIGURED configuredEventData;
    USB_DEVICE_CONTROL_STATUS controlStatus = USB_DEVICE_CONTROL_STATUS_ERROR;
    bool sendStatus = true;
    
    switch(setupPkt->bRequest)
    {
        case USB_REQUEST_SET_ADDRESS:

            /* Got set address command. Change the address only after responding
               to the current request.*/
            
            usbDeviceThisInstance->usbDeviceStatusStruct.setAddressPending = true;
            usbDeviceThisInstance->deviceAddress = setupPkt->bDevADR;
            controlStatus = USB_DEVICE_CONTROL_STATUS_OK;
            
            break;

        case USB_REQUEST_SET_CONFIGURATION: 

            /* Device falls back to addressed state if configuration value is 0,
             * and if the device is already in configured state. */
            
            if((setupPkt->wValue == 0) && (usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState == USB_DEVICE_STATE_CONFIGURED))
            {
                /* Configuration value 0 means, host is trying to de configure
                 * the device.  Set a event here. USB device layer task will
                 * de initialize the function drivers later.*/
                usbDeviceThisInstance->event = USB_DEVICE_EVENT_DECONFIGURED;

                /* Deinit all function drivers. */
                _USB_DEVICE_DeInitializeAllFunctionDrivers ( usbDeviceThisInstance );

                /* Change the current active configuration to Zero */
                usbDeviceThisInstance->activeConfiguration = 0;

                /* Change the state to Addressed   */
                usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_ADDRESSED;
            }  
            else
            {
                /* Proceed only if new configuration value is different from
                 * current configuration value. */
                if( usbDeviceThisInstance->activeConfiguration != (uint8_t)setupPkt->wValue)
                {
                    for(count = 0; count < usbDeviceThisInstance->maxConfigs; count++)
                    {
                        /* 5th byte in the configuration descriptor table
                         * specifies the configuration value. */

                        if( usbDeviceThisInstance->configDescriptorsPtr[count][5] == setupPkt->bConfigurationValue )
                        {
                            /* Got a configuration match. Get the pointer to
                             * configuration descriptor. We have to pass this to
                             * function driver, so that function driver can
                             * parse configuration descriptor and get the
                             * required info. */

                            usbDeviceThisInstance->pActiveConfigDesc = (uint8_t *)usbDeviceThisInstance->configDescriptorsPtr[count];
                        }
                    }

                    /* Save the current active configuration.  This may be
                     * required for clients to know which configuration is
                     * presently active. */

                    usbDeviceThisInstance->activeConfiguration = (uint8_t)setupPkt->wValue;

                    /* In case the endpoint functions are enabled for Vendor operation,
                     * the endpoint queue sizes need to reset. */
                    _USB_DEVICE_EndpointCurrentQueueSizeReset(usbDeviceThisInstance->usbDevLayerIndex);

                    /* Initialize all function drivers and change to configured
                     * state only if all function drivers are initialized
                     * successfully. */
                    _USB_DEVICE_ConfigureDevice(usbDeviceThisInstance);

                    /* Change the state to configured. */
                    usbDeviceThisInstance->usbDeviceStatusStruct.usbDeviceState = USB_DEVICE_STATE_CONFIGURED;

                    /* Set an event, so that application and function drivers
                     * are informed  about the same. */
                    configuredEventData.configurationValue = (uint8_t)setupPkt->wValue;

                    /* Inform the client about the event */
                    if((usbDeviceThisInstance->clientState == USB_DEVICE_CLIENT_STATUS_READY) &&
                            (usbDeviceThisInstance->callBackFunc != NULL))
                    {
                        /* This means this client is valid and is a client of this device
                           layer instance. Pass event to application */
                        usbDeviceThisInstance->callBackFunc (USB_DEVICE_EVENT_CONFIGURED, &configuredEventData, usbDeviceThisInstance->context);
                    }
                }
            }
            
            controlStatus = USB_DEVICE_CONTROL_STATUS_OK;
            break;

         case  USB_REQUEST_CLEAR_FEATURE:

            if( setupPkt->wValue == USB_FEATURE_SELECTOR_DEVICE_REMOTE_WAKEUP )
            {
                /* The host is disabling the remote wakeup capability */
                usbDeviceThisInstance->remoteWakeupStatus = USB_DEVICE_REMOTE_WAKEUP_DISABLED ;
                controlStatus = USB_DEVICE_CONTROL_STATUS_OK;
            }
            break;

        case USB_REQUEST_SET_FEATURE:

            if (setupPkt->wValue == USB_FEATURE_SELECTOR_DEVICE_REMOTE_WAKEUP)
            {
                usbDeviceThisInstance->remoteWakeupStatus = USB_DEVICE_REMOTE_WAKEUP_ENABLED;
                controlStatus = USB_DEVICE_CONTROL_STATUS_OK;
            }
            else if (setupPkt->wValue == USB_FEATURE_SELECTOR_DEVICE_TEST_MODE)
            {
                /* Enable test mode only if the Device Speed is High Speed */
                if (usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed == USB_SPEED_HIGH)
                {
                    /* Send ACK to the Test Mode request. */
                    controlStatus = USB_DEVICE_CONTROL_STATUS_OK;

                    /* Save the Test Selector from SETUP Packet */
                    usbDeviceThisInstance->usbDeviceStatusStruct.testSelector = setupPkt->W_Index.byte.HB;

                    /* Switching to Test mode is done in the
                     * _USB_DEVICE_EP0_TransmitComplete function. */
                    usbDeviceThisInstance->usbDeviceStatusStruct.testModePending = true;
                }
                else
                {
                    /* Device is not High Speed. STALL the request. */
                    controlStatus = USB_DEVICE_CONTROL_STATUS_ERROR;
                }
            }
            break;

        case USB_REQUEST_SET_DESCRIPTOR:      

            /* All SET_DESCRIPTOR requests are directly forwarded to application */
            _USB_DEVICE_Handle_Set_Descriptor_Request ( usbDeviceThisInstance, USB_DEVICE_EVENT_SET_DESCRIPTOR, setupPkt);
            controlStatus = USB_DEVICE_CONTROL_STATUS_ERROR;
            break;

        default:
            /* Respond with a request error. Stall the endpoint. Stall the EP0
             * TX. */
            controlStatus = USB_DEVICE_CONTROL_STATUS_ERROR;
            break;
    }

    /* Send ZLP */
    if (sendStatus)
    {
        USB_DEVICE_ControlStatus( (USB_DEVICE_HANDLE)usbDeviceThisInstance, controlStatus);
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_RedirectControlXfrToClient
    (
        USB_DEVICE_OBJ* usbDeviceThisInstance ,
        USB_DEVICE_EVENT event,
        USB_SETUP_PACKET * setupPkt
    )

  Summary:
    This function forwards control transfers to client.

  Description:
    This function forwards control transfers to client.

  Remarks:
    This is local function. It should not be used directly by the client.
*/

void _USB_DEVICE_RedirectControlXfrToClient
(
    USB_DEVICE_OBJ* usbDeviceThisInstance ,
    USB_DEVICE_EVENT event,
    USB_SETUP_PACKET * setupPkt
)
{
    USB_DEVICE_CONTROL_TRANSFER_STRUCT * controlTransfer = &usbDeviceThisInstance->controlTransfer;
    
    /* This control transfer will be handled by the client */
    controlTransfer->handler = (void (*)(unsigned short, USB_DEVICE_EVENT, void *))usbDeviceThisInstance->callBackFunc;

    controlTransfer->handlerIndex = usbDeviceThisInstance->usbDevLayerIndex ;

    /* Let app clients handle the SETUP packet. */
    if((usbDeviceThisInstance->clientState == USB_DEVICE_CLIENT_STATUS_READY) && (usbDeviceThisInstance->callBackFunc != NULL))
    {
        /* This means this is a valid client. Pass the control transfer
         * event to the client. */
        usbDeviceThisInstance->callBackFunc( event, setupPkt, usbDeviceThisInstance->context );
    }

}

// ******************************************************************************
/* Function:
    USB_DEVICE_CLIENT_HANDLE _USB_DEVICE_ClientHandleValidate
    (
        USB_DEVICE_HANDLE deviceHandle
    )

  Summary:
    Validates the client device handle.

  Description:
    This function validates a device handle. It returns NULL if the device
    handle is not valid. It returns the pointer to the client object associated
    with the handle otherwise.

  Remarks:
    This is a local function and should not be called directly by the client.
*/

USB_DEVICE_OBJ* _USB_DEVICE_ClientHandleValidate(USB_DEVICE_HANDLE deviceHandle)
{
    /* This function validates the client handle and return NULL if the client
       handle is invalid or if the client has closed the device layer. */

    USB_DEVICE_OBJ* client;

    if((USB_DEVICE_HANDLE_INVALID == deviceHandle) || (0 == deviceHandle))
    {
        return (NULL);
    }

    /* Check if the client object is in use */
    client = (USB_DEVICE_OBJ *) deviceHandle;

    if(!client->inUse)
    {
        return(NULL);
    }

    /* Return the client handle */
    return(client);
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_EndpointMutexCreateFunction
    (
        USB_DEVICE_OBJ* usbDeviceThisInstance
    )

  Summary:
    Creats mutex which is required for Endpoint read write functions.

  Description:
    Creats mutex which is required for Endpoint read write functions.

  Remarks:
    This is a local function and should not be called directly by the client.
*/

void _USB_DEVICE_EndpointMutexCreateFunction(USB_DEVICE_OBJ* usbDeviceThisInstance)
{
    
    OSAL_RESULT osalResult;
    
    if (usbDeviceThisInstance->isMutexEndpointIrpInitialized == false)
    {
        /* Use the OSAL to create Mutex */
        osalResult = OSAL_MUTEX_Create(&(usbDeviceThisInstance->mutexEndpointIRP));
    
    
        if(osalResult != OSAL_RESULT_TRUE)
        {
            /* Mutex creation failed*/
            usbDeviceThisInstance->isMutexEndpointIrpInitialized = false;
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Mutex Create Failed");
        }
        else
        {
            /* Update the flag indicating that the Mutex has been created */
            usbDeviceThisInstance->isMutexEndpointIrpInitialized = true;
        }
    }
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_EndpointMutexDeleteFunction
    (
        USB_DEVICE_OBJ* usbDeviceThisInstance
    )

  Summary:
    Deletes mutex which is required for Endpoint read write functions.

  Description:
    Deletes mutex which is required for Endpoint read write functions.

  Remarks:
    This is a local function and should not be called directly by the client.
*/

void _USB_DEVICE_EndpointMutexDeleteFunction(USB_DEVICE_OBJ* usbDeviceThisInstance)
{
    OSAL_RESULT osalResult;

    /* Use the OSAL to delete the Mutex */
    osalResult = OSAL_MUTEX_Delete(&(usbDeviceThisInstance->mutexEndpointIRP));

    if(osalResult != OSAL_RESULT_TRUE)
    {
        /* Mutex delete failed */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Mutex Delete Failed");
    }
    else
    {
        /* Update the flag indicating that the mutex needs to be created again
         * */
        usbDeviceThisInstance->isMutexEndpointIrpInitialized = false;
    }
}

// ******************************************************************************
/* Function:
    uint16_t _USB_DEVICE_GetStringDescriptorRequestProcess
    (
        USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable,
        USB_SETUP_PACKET * setupPkt,
        void**  pDescriptorString
    )
  Summary:
    This function processes the Get Descriptor request received from Host.

  Description:
    This function processes the Get Descriptor request received from Host.
    The USB Device Layer chooses this function when the macro
    USB_DEVICE_STRING_DESCRIPTOR_TABLE_ADVANCED_ENABLE is not defined.

    This function is implemented based on the following String Descriptor 
    Table structure. 
    
    Following example assumes the Device supports 3 String Descriptors in 3 
    different Languages. 
    
        String Descriptor Index 0 -- Specifies Codes for all the Language 
                                     supported. 
        String -- Index 1 -- Language 1
        String -- Index 2 -- Language 1
        String -- Index 3 -- Language 1
        String -- Index 1 -- Language 2
        String -- Index 2 -- Language 2
        String -- Index 3 -- Language 2
        String -- Index 1 -- Language 3
        String -- Index 2 -- Language 3
        String -- Index 3 -- Language 3 

  Remarks:
    This is a local function and should not be called directly by the client.
*/

uint16_t _USB_DEVICE_GetStringDescriptorRequestProcess
(
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable,
    USB_SETUP_PACKET * setupPkt,
    void**  pDescriptorString
)
{
    uint8_t* stringDesc;
    uint8_t NumberLangSupported =0;
    uint16_t langID;
    uint16_t langIndex;
    uint16_t CurrentLangId;
    uint8_t stringIndex;
    uint16_t DescriptorStringSize = 0;

    /* Get the string descriptor index from setup packet*/
    stringIndex = setupPkt->bDscIndex;
    uint8_t stringDescPerLang =0; 
    
    /* Find Number Languages supported from String Descriptor array index 0 */
    NumberLangSupported = (uint8_t)((ptrMasterDescTable->stringDescriptorTable[0][0]) - 2)/2;   
    
    if (NumberLangSupported)
    {
        /* Get Number of Strings per Language */
        stringDescPerLang = (ptrMasterDescTable->stringDescCount - 1)/NumberLangSupported; 
    }
    
    /* Check if the String Index requested by Host is with in the String
     * descriptor count specified in the Master descriptor Table */ 

    if(setupPkt->bDscIndex <= stringDescPerLang)
    {
        /* This means the index is valid. Get correct string
         * descriptor and update the response variable */

        if (stringIndex == 0)
        {
            /* Get pointer to String Descriptor */ 
            stringDesc = (uint8_t*)(ptrMasterDescTable->stringDescriptorTable[0] );
            *pDescriptorString = (uint8_t *)stringDesc;

            /* Get Size of the String descriptor. Size is always the First
             * element in the String descriptor structure  */  
            DescriptorStringSize = stringDesc[0];
        }
        else
        {
            /* Retrieve Language ID from SETUP packet */
            langID = setupPkt->wLangID;

            /* Search through the String Descriptor Array (Index Zero) to find
             * out Language ID Index*/
            for (langIndex = 1; langIndex <= NumberLangSupported; langIndex++)
            {
                /* Get the Language ID from String Descriptor Index 0 */ 
                CurrentLangId = *((uint16_t*)ptrMasterDescTable->stringDescriptorTable[0] + langIndex);

                /* Check if the requested Language ID same as Current Language ID */ 
                if (CurrentLangId == langID)
                {
                    /* The Requested String Descriptor and Language was found.
                     * Get pointer to String Descriptor */ 
                    stringDesc = (uint8_t*)( ptrMasterDescTable->stringDescriptorTable[langIndex*stringIndex] );
                    *pDescriptorString = (uint8_t *)stringDesc;
                    
                    /* Get Size of the String descriptor. Size is always the
                     * First element in the String descriptor structure  */
                    DescriptorStringSize = stringDesc[0];
                    break;
                }
            }
        }

        return DescriptorStringSize;
    }

    /* We could not find the requested String Descriptor in the String 
       Descriptor Table. The request will be stalled. */  
    
    return 0; 
}

// ******************************************************************************
/* Function:
    uint16_t _USB_DEVICE_GetStringDescriptorRequestProcessAdvanced
    (
        USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable,
        USB_SETUP_PACKET * setupPkt,
        void**  pDescriptorString
    )

  Summary:
    This function processes the Get Descriptor request received from Host.

  Description:
    This function processes the Get Descriptor request received from Host.
    The USB Device Layer chooses this function when the macro
    USB_DEVICE_STRING_DESCRIPTOR_TABLE_ADVANCED_ENABLE is defined.

    This function is implemented based on the following String Descriptor 
    Table structure. 
    
            |Size(Byte)|Type(Byte)|String Index 0(Byte)|0(Word)|Language ID 1(Word)|Language ID 2(Word)|...|Language ID n(Word)|
            |Size(Byte)|Type(Byte)|String Index x(Byte)|Language ID 1(Word)|String |
            |Size(Byte)|Type(Byte)|String Index x(Byte)|Language ID 1(Word)|String |
            .
            .
            .
            |Size(Byte)|Type(Byte)|String Index x(Byte)|Language ID n(Word)|String |

  Remarks:
    This is a local function and should not be called directly by the client.
*/

uint16_t _USB_DEVICE_GetStringDescriptorRequestProcessAdvanced
(
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable,
    USB_SETUP_PACKET * setupPkt,
    void**  pDescriptorString
)
{
    uint8_t* stringDesc;
    uint16_t langID;
    uint8_t stringIndexRequested;
    uint16_t DescriptorStringSize = 0;
    uint8_t count;
    uint8_t stringIndex;
     
     /* Get the string descriptor index from setup packet*/
    stringIndexRequested = setupPkt->bDscIndex;

    if (stringIndexRequested == 0)
    {
        /* Get pointer to String Descriptor */ 
        stringDesc = (uint8_t*)&(ptrMasterDescTable->stringDescriptorTable[0][3] );
        *pDescriptorString = (uint8_t *)stringDesc;

        /* Get Size of the String descriptor. Size is always the First element
         * in the String descriptor structure  */ 

        DescriptorStringSize = stringDesc[0];
    }
    else
    {
        for (count = 1; count < ptrMasterDescTable->stringDescCount; count++ )
        {
            /* Get the string index from the String Descriptor.  String Index is
             * always the third element in the String Descriptor */  
            
            stringIndex = ptrMasterDescTable->stringDescriptorTable[count][0];
            
            /* Get Language ID from the string descriptor. Language ID is always
             * the Fourth element in the String Descriptor */ 
            
            langID = ((uint16_t)ptrMasterDescTable->stringDescriptorTable[count][2]<<8)
                               |ptrMasterDescTable->stringDescriptorTable[count][1];

            /* Check if the Requested String Index and Language ID matches with
             * the values retrieved from String Descriptor */  

            if ((stringIndex == stringIndexRequested) && (langID == setupPkt->wLangID))
            {
                    /* The Requested String Descriptor and Language was found.
                     * Get pointer to String Descriptor */ 

                    stringDesc = (uint8_t*)&( ptrMasterDescTable->stringDescriptorTable[count][3] );
                    *pDescriptorString = (uint8_t *)stringDesc;
                    
                    /* Get Size of the String descriptor. Size is always the
                     * First element in the String descriptor structure  */

                    DescriptorStringSize = stringDesc[0];
                    break;
            }
        }
    }

    /* Return String descriptor size. USB device layer would stall the request
     * if the requested string descriptor was not found. If requested string was
     * not found the DescriptorStringSize would be zero and pDescriptorString
     * would be NULL.  */  

    return DescriptorStringSize;
}

// ******************************************************************************
/* Function:
    void _USB_DEVICE_Other_Speed_Descriptor_Request
    (
        USB_DEVICE_OBJ * usbDeviceThisInstance, 
        USB_SETUP_PACKET * setupPkt
    )

  Summary:
    This function processes the Get Other Speed Configuration descriptor request
    from Host.

  Description:
    This function processes the Get Other Speed Configuration descriptor request
    from Host. This function should be called only if the USB peripheral is 
    configured for High Speed operation. 
 
  Remarks:
    This is a local function and should not be called directly by the client.
*/
void _USB_DEVICE_Other_Speed_Descriptor_Request
(
    USB_DEVICE_OBJ * usbDeviceThisInstance, 
    USB_SETUP_PACKET * setupPkt
)
{
    USB_CONFIGURATION_DESCRIPTOR * lConfigDescriptor = NULL;
    USB_DEVICE_MASTER_DESCRIPTOR * ptrMasterDescTable ;
    uint32_t size; 
    uint32_t pendingBytesOtherSpeedDescptr = 0; 
    
    /* Copy the Master descriptor table to a local pointer. */
    ptrMasterDescTable = usbDeviceThisInstance->ptrMasterDescTable ;
    
    /* Find out whether device is operating at full speed or high speed */
    if( usbDeviceThisInstance->usbDeviceStatusStruct.usbSpeed == USB_SPEED_HIGH )
    {
        if (((setupPkt->bDscIndex) < ptrMasterDescTable->configDescriptorCount) && (ptrMasterDescTable->configDescriptorTable != NULL))
        {
            /* If the Device is operating at High Speed, we send the full speed 
             * configuration descriptor */ 
            lConfigDescriptor = (USB_CONFIGURATION_DESCRIPTOR *)ptrMasterDescTable->configDescriptorTable[setupPkt->bDscIndex];
        }
    }
    else
    {
        if (((setupPkt->bDscIndex) < ptrMasterDescTable->highSpeedConfigDescriptorCount)
            && (ptrMasterDescTable->highSpeedConfigDescriptorTable != NULL))
        {
            /* If the device is operating at full speed, then send the high speed 
             * configuration descriptor */
            lConfigDescriptor = (USB_CONFIGURATION_DESCRIPTOR *)ptrMasterDescTable->highSpeedConfigDescriptorTable[setupPkt->bDscIndex];
        }
    }

    if(lConfigDescriptor != NULL )
    { 
        /* Get the descriptor size */
        size = lConfigDescriptor->wTotalLength;
             
        /* Adjust data size as Host request */
        if( size > setupPkt->wLength )
        {
            
            size = setupPkt->wLength;  
        }
        
        /* Update IRP flag to complete the transfer initially */
        _USB_DEVICE_OtherSpeedDescriptorRequestIrpFlagsUpdate
        (
            &(usbDeviceThisInstance->irpEp0TxOtherSpeedDescriptor), 
            USB_DEVICE_IRP_FLAG_DATA_COMPLETE
        ); 
        
        /* We may have to submit two IRPs for the Other Speed Configuration 
           descriptor request. The Second IRP is only needed if the data size 
           requested by the Host is more than USB_DEVICE_EP0_BUFFER_SIZE. */
        if (size > USB_DEVICE_EP0_BUFFER_SIZE)
        {
            /* Update Pending Bytes. This data will go in the Second IRP */
            pendingBytesOtherSpeedDescptr = size - USB_DEVICE_EP0_BUFFER_SIZE;
            
            /* In the First IRP we will submit only EP0 Buffer Size worth of 
             * data. Remaining Bytes will be sent in the Second IRP */
            size = USB_DEVICE_EP0_BUFFER_SIZE; 
            
            /* Keep the IRP flags pending as we are going to submit another IRP. */
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpFlagsUpdate
            (
                &(usbDeviceThisInstance->irpEp0TxOtherSpeedDescriptor), 
                USB_DEVICE_IRP_FLAG_DATA_PENDING
            );    
        }
        
        /* Copy Data into the EP0 Transmit buffer */
        _USB_DEVICE_OtherSpeedDescriptorRequestCopyData
        (
            usbDeviceThisInstance->ep0TxBuffer,
            lConfigDescriptor,
            size
        );
        
        /* Edit Descriptor type to OTHER_SPEED */
        _USB_DEVICE_OtherSpeedDescriptorRequestEditDescriptorType
        (
            usbDeviceThisInstance->ep0TxBuffer,
            1,
            USB_DESCRIPTOR_OTHER_SPEED
        ); 
        
        if (pendingBytesOtherSpeedDescptr == 0)
        {
            /* Fill in the Other Speed Descriptor IRP. */ 
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpFill
            (
                &(usbDeviceThisInstance->irpEp0TxOtherSpeedDescriptor),
                usbDeviceThisInstance->ep0TxBuffer,
                size,
                _USB_DEVICE_Ep0TransmitCompleteCallback,
                (uintptr_t)usbDeviceThisInstance
            ); 
            
             /* Submit IRP */
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpSubmit(usbDeviceThisInstance->usbCDHandle, controlEndpointTx, &usbDeviceThisInstance->irpEp0TxOtherSpeedDescriptor ); 
        }
        else
        {
            /* This means we have to submit two IRPs */   
            if (pendingBytesOtherSpeedDescptr % USB_DEVICE_EP0_BUFFER_SIZE == 0)
            {
                _USB_DEVICE_OtherSpeedDescriptorRequestIrpFlagsUpdate
                (
                    &(usbDeviceThisInstance->irpEp0Tx), 
                    USB_DEVICE_IRP_FLAG_DATA_PENDING
                ); 
            }
            else
            {
                _USB_DEVICE_OtherSpeedDescriptorRequestIrpFlagsUpdate
                (
                    &(usbDeviceThisInstance->irpEp0Tx), 
                    USB_DEVICE_IRP_FLAG_DATA_COMPLETE
                );
            }
            
            /* Fill in the Other Speed Descriptor IRP. Callback is NULL here. We
               do not want to be notified for first IRP */ 
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpFill
            (
                &(usbDeviceThisInstance->irpEp0TxOtherSpeedDescriptor),
                usbDeviceThisInstance->ep0TxBuffer,
                size,
                NULL,
                (uintptr_t)usbDeviceThisInstance
            ); 
            
            /* Submit the first IRP */
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpSubmit(usbDeviceThisInstance->usbCDHandle, controlEndpointTx, &usbDeviceThisInstance->irpEp0TxOtherSpeedDescriptor ); 
            
            /* Fill in the Second IRP for the pending data */
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpFill
            (
                &(usbDeviceThisInstance->irpEp0Tx), 
                ((uint8_t*)lConfigDescriptor + USB_DEVICE_EP0_BUFFER_SIZE),
                pendingBytesOtherSpeedDescptr,
                _USB_DEVICE_Ep0TransmitCompleteCallback,
                (uintptr_t)usbDeviceThisInstance
            );   
       
            /* Submit second IRP */
            _USB_DEVICE_OtherSpeedDescriptorRequestIrpSubmit(usbDeviceThisInstance->usbCDHandle, controlEndpointTx, &usbDeviceThisInstance->irpEp0Tx); 
        }
        
    }
    else
    {
        /* Configuration not found */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB Device Layer: Invalid pointer to configuration descriptor");
    }
}

/********************End of file********************************/
