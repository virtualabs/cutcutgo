/********************************************************************************
  USB Device Layer Function Driver Interface Definition

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device_function_driver.h

  Summary:
    USB Device Layer Function Driver Interface Definition Header

  Description:
    This header file contains the function prototypes and definitions of the
    data types and constants that make up the interface between the function 
    driver and the USB Device layer.
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
#ifndef _USB_DEVICE_FUNCTION_DRIVER_H_
#define _USB_DEVICE_FUNCTION_DRIVER_H_

#include <stdint.h>
#include <stddef.h>
#include "usb/usb_device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  


// *****************************************************************************
/* USB function driver structure

  Summary:
    A function driver has to expose standard APIs to device layer using 
    following structure.

  Description:
    All function drivers (including vendor specific ones) must provide callback
    functions to USB device layer in the format specified by this structure.
    The USB device layer calls these callback functions at the time of
    appropriate event.

  Remarks:
    Even the vendor specific function drivers must provide callback functions
    in this format.
    
*/

typedef struct  
{
    /* Initialize gets called by the Device layer when it recieves set
       configuration event. The device layer will initialize a function driver
       for every descriptor. Based on the descriptor type the function driver
       has to initialize itself. */ 

    void (*initializeByDescriptor)
    (
        SYS_MODULE_INDEX funcDriverIndex, 
        USB_DEVICE_HANDLE usbDeviceHandle,
        void* funcDriverInit, 
        uint8_t interfaceNumber, 
        uint8_t alternateSetting,
        uint8_t descriptorType, 
        uint8_t * pDescriptor
    );

    /* Deinitialize gets called when the device layer detects a device dettach,
       change in configuration or ob USB bus reset.*/

    void (*deInitialize)(SYS_MODULE_INDEX funcDriverIndex);

    /* This function will be called by the device layer when there is a interface specific
       setup packet request */
    
    void (*controlTransferNotification) 
    (
        SYS_MODULE_INDEX index,
        USB_DEVICE_EVENT controlEvent,
        USB_SETUP_PACKET * controlEventData
    );

    /* Function driver Tasks */
    void (*tasks)(SYS_MODULE_INDEX funcDriverIndex);

    /* Gloabl Initialize for function driver */
    void (*globalInitialize)(void); 

} USB_DEVICE_FUNCTION_DRIVER;

// *****************************************************************************
/* USB device layer function driver data

  Summary:
    This structure has members that has information about the function drivers.

  Description:
    This structure has members that has information about the function drivers.

  Remarks:
    None.
*/

typedef struct 
{
    /* First Interface number used by this 
     * instance of function driver */
    uint8_t interfaceNumber;

    uint8_t numberOfInterfaces;

    /* Function driver instance index */
    SYS_MODULE_INDEX funcDriverIndex;

    /* Pointer to a structure which contains 
     * function driver initialization data
     */
    void * funcDriverInit;

    /* Pointer to a standard structure that 
     * exposes function driver APIs to USB
     * device layer*/
    USB_DEVICE_FUNCTION_DRIVER *  driver;

} USB_DEVICE_FUNC_DRIVER_DATA;

// *****************************************************************************
// *****************************************************************************
// Section: USB Device IRP Routines
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
    
    Particular attention should be paid to the size parameter of IRP. The
    following should be noted:
    
      * The size parameter while sending data to the Host can be less than,
        greater than, equal to, or be an exact multiple of the maximum packet size
        for the endpoint. The maximum packet size for the endpoint determines
        the number of transactions required to process the IRP.
      * If the size parameter, while sending data to the Host is less than the
        maximum packet size, the transfer will complete in one transaction.
      * If the size parameter, while sending data to the Host is greater
        than the maximum packet size, the IRP will be processed in multiple
        transactions.
      * If the size parameter, while sending data to the Host is equal to or
        an exact multiple of the maximum packet size, the client can optionally
        ask the driver to send a Zero Length Packet(ZLP) by specifying the
        USB_DEVICE_IRP_FLAG_DATA_COMPLETE flag as the flag parameter.
      * The size parameter, while receiving data from the Host must be an
        exact multiple of the maximum packet size of the endpoint. If this is
        not the case, the driver will return a USB_ERROR_IRP_SIZE_INVALID
        result. If while processing the IRP, the driver receives less than
        maximum packet size or a ZLP from the Host, the driver considers the
        IRP as processed. The size parameter at this point contains the actual
        amount of data received from the Host. The IRP status is returned as
        USB_DEVICE_IRP_STATUS_COMPLETED_SHORT.
      * If a ZLP needs to be sent to Host, the IRP size should be specified
        as 0 and the flag parameter should be set as
        USB_DEVICE_IRP_FLAG_DATA_COMPLETE.
      * If the IRP size is an exact multiple of the endpoint size, the client
        can request the driver to not send a ZLP by setting the flag parameter
        to USB_DEVICE_IRP_FLAG_DATA_PENDING. This flag indicates that there is
        more data pending in this transfer.
      * Specifying a size less than the endpoint size along with the
        USB_DEVICE_IRP_FLAG_DATA_PENDING flag will cause the driver to return a
        USB_ERROR_IRP_SIZE_INVALID.
      * If the size is greater than but not a multiple of the endpoint size, and
        the flag is specified as USB_DEVICE_IRP_FLAG_DATA_PENDING, the driver
        will send multiple of endpoint size number of bytes. For example, if the
        IRP size is 130 and the endpoint size if 64, the number of bytes sent
        will 128.
		
  Precondition:
    The Device Layer handle should be valid.
	
  Parameters:
    usbDeviceHandle - Pointer to the device layer handle that is returned from 
                      USB_DEVICE_Open() function.
    endpointAndDirection -  Specifies the endpoint and direcon.
    irp - Pointer to the IRP to be added to the queue for processing.
	
  Returns:
    * USB_ERROR_NONE - if the IRP was submitted successful.
    * USB_ERROR_IRP_SIZE_INVALID - if the size parameter of the IRP is not
      correct. 
    * USB_ERROR_PARAMETER_INVALID - If the client handle is not valid.
    * USB_ERROR_ENDPOINT_NOT_CONFIGURED - If the endpoint is not enabled.
    * USB_ERROR_DEVICE_ENDPOINT_INVALID - The specified endpoint is not valid.
    * USB_ERROR_OSAL_FUNCTION - An OSAL call in the function did not complete
      successfully.
	
  Example:
    <code>
    // The following code shows an example of how to schedule a IRP to send data
    // from a device to the Host. Assume that the max packet size is 64 and
    // and this data needs to sent over Endpoint 1. In this example, the
    // transfer is processed as three transactions of 64, 64 and 2 bytes.
    
    USB_ENDPOINT ep;
    USB_DEVICE_IRP irp;
    
    ep.direction = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    irp.data = myDataBufferToSend;
    irp.size = 130;
    irp.flags = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    irp.callback = MyIRPCompletionCallback;
    irp.referenceData = (uintptr_t)&myDeviceLayerObj;
    
    if (USB_DEVICE_IRPSubmit(handle, ep, &irp) != USB_ERROR_NONE)
    {
        // This means there was an error.
    }
    else
    {
        // The status of the IRP can be checked.
        while(irp.status != USB_DEVICE_IRP_STATUS_COMPLETED)
        {
            // Wait or run a task function.
        }
    }
    
    // The following code shows how the client can request
    // the driver to send a ZLP when the size is an exact multiple of
    // endpoint size.
    
    irp.data = myDataBufferToSend;
    irp.size = 128;
    irp.flags = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    irp.callback = MyIRPCompletionCallback;
    irp.referenceData = (uintptr_t)&myDeviceLayerObj;
    
    // Note that while  receiving data from the Host, the size should be an
    // exact multiple of the maximum packet size of the endpoint. In the
    // following example, the USB_DEVICE_IRPSubmit function will return a
    // USB_DEVICE_IRP_SIZE_INVALID value.
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_HOST_TO_DEVICE, 1);
    
    irp.data = myDataBufferToSend;
    irp.size = 60; // THIS SIZE IS NOT CORRECT
    irp.flags = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    irp.callback = MyIRPCompletionCallback;
    irp.referenceData = (uintptr_t)&myDeviceLayerObj;
    
    </code>
	
  Remarks:
    This function can be called from the ISR of the USB module to associated
    with the client.                                                                           
*/

USB_ERROR USB_DEVICE_IRPSubmit
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_ENDPOINT endpointAndDirection, 
    USB_DEVICE_IRP * irp
);

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
	
  Precondition:
    The Device Layer handle should be valid.
	
  Parameters:
    usbDeviceHandle - Pointer to the device layer handle that is returned from 
                      USB_DEVICE_Open() function.
    endpointAndDirection - Specifies the endpoint and direction.
	
  Returns:
    * USB_ERROR_NONE - The endpoint was successfully enabled.
    * USB_ERROR_DEVICE_ENDPOINT_INVALID - If the endpoint that is being
      accessed is out of the valid endpoint defined for this driver instance.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is not valid.
    * USB_ERROR_OSAL_FUNCTION - An OSAL function called in this function did not
      execute successfully.
	
  Example:
    <code>
    // This code shows an example of how to cancel all IRPs.
    
    void MyIRPCallback(USB_DEVICE_IRP * irp)
    {
        // Check if this is setup command
    
        if(irp->status == USB_DEVICE_IRP_STATUS_SETUP)
        {
            if(IsSetupCommandSupported(irp->data) == false)
            {
                // This means that this setup command is not
                // supported. Stall the some related endpoint and cancel all
                // queue IRPs.
    
                USB_DEVICE_EndpointStall(handle, ep);
                USB_DEVICE_IRPCancelAll(handle, ep);
            }
         }
     }
    </code>
	
  Remarks:
    None.                                                                  
*/

USB_ERROR USB_DEVICE_IRPCancelAll 
(
    USB_DEVICE_HANDLE usbDeviceHandle,
    USB_ENDPOINT endpointAndDirection
);

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
	
  Precondition:
    The Client handle should be valid.
	
  Parameters:
    usbDeviceHandle - Pointer to the device layer handle that is returned from 
                      USB_DEVICE_Open() function.
    irp - Pointer to the IRP to cancel.
	
  Returns:
    * USB_ERROR_NONE - The IRP have been canceled successfully.
    * USB_ERROR_PARAMETER_INVALID - Invalid parameter or the IRP already has 
      been aborted or completed
    * USB_ERROR_OSAL_FUNCTION - An OSAL function called in this function did
      not execute successfully.
	
  Example:
    <code>
    // This code shows an example of how to cancel IRP.  In this example the IRP
    // has been scheduled from a device to the Host.
    
    USB_ENDPOINT ep;
    USB_DEVICE_IRP irp;
    
    ep.direction = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    irp.data = myDataBufferToSend;
    irp.size = 130;
    irp.flags = USB_DEVICE_IRP_FLAG_DATA_COMPLETE;
    irp.callback = MyIRPCompletionCallback;
    irp.referenceData = (uintptr_t)&myDeviceLayerObj;
    
    if (USB_DEVICE_IRPSubmit(handle, ep, &irp) != USB_ERROR_NONE)
    {
        // This means there was an error.
    }
    else
    {
        // Check the status of the IRP.
        if(irp.status != USB_DEVICE_IRP_STATUS_COMPLETED)
        {
            // Cancel the submitted IRP.
            if (USB_DEVICE_IRPCancel(handle, &irp) != USB_ERROR_NONE)
            {
                // The IRP Cancel request submission was successful.
                // IRP cancel status will be notified through the callback
                // function.
            }
            else
            {
                // The IRP may have been completed before IRP cancel operation.
                // could start. No callback notification will be generated.
            }
        }
        else
        {
            // The IRP processing must have been completed before IRP cancel was
            // submitted.
        }
    }
 
    void MyIRPCallback(USB_DEVICE_IRP * irp)
    {
        // Check if the IRP callback is for a Cancel request
        if(irp->status == USB_DEVICE_IRP_STATUS_ABORTED)
        {
            // IRP cancel completed
        }
     }

    </code>
	
  Remarks:
    The size returned after the ABORT callback will be always 0 regardless of
    the amount of data that has been sent or received. The client should not
    assume any data transaction has happened for an canceled IRP.  If the last
    transaction of the IRP was in progress, the IRP cancel does not have
    any effect. The first transaction of any ongoing IRP cannot be canceled.                                                                  
*/

USB_ERROR USB_DEVICE_IRPCancel
(
    USB_DEVICE_HANDLE usbDeviceHandle, 
    USB_DEVICE_IRP * irp
);

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END


#endif

