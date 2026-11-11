/*******************************************************************************
  USB Device layer interface names mapping

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device_mapping.h

  Summary:
    USB Device Layer Interface names mapping

  Description:
    This header file maps the interface prototypes in "usb_device.h" to static
    variants of these routines appropriate for the selected configuration.
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

#ifndef _USB_DEVICE_MAPPING_H
#define _USB_DEVICE_MAPPING_H

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************
/* Note:  See the bottom of file for implementation header include files.
*/

#include <stdint.h>
#include <stdbool.h>

// *****************************************************************************
// *****************************************************************************
// Section: Removing support for USB Driver Implicit Initialization 
// *****************************************************************************
// *****************************************************************************
#ifndef USB_DEVICE_DRIVER_INITIALIZE_EXPLICIT
    #error USB Device Mode Driver must be initialized explicitly. Support for implicit initialization is removed.
#endif 

// *****************************************************************************
// *****************************************************************************
// Section: SOF Enable Variations
// *****************************************************************************
// *****************************************************************************
#if defined USB_DEVICE_SOF_EVENT_ENABLE
    #define _USB_DEVICE_SOFEventEnable()  eventType
#else
    #define _USB_DEVICE_SOFEventEnable()  0
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Endpoint Read Write functions support
// *****************************************************************************
// *****************************************************************************
#ifdef USB_DEVICE_ENDPOINT_QUEUE_DEPTH_COMBINED
    /* This means that the application has included the endpoint functions and
     * is most probably implementing a custom device. We need the following
     * functions to be included in the code. */
    #define _USB_DEVICE_Initialize_Endpoint_Q(x,y,z) _USB_DEVICE_Initialize_Endpoint_Q_Size(x,y,z)
    #define _USB_DEVICE_EndpointCurrentQueueSizeReset(x)  _USB_DEVICE_EndpointQueueSizeReset(x)
    #define _USB_DEVICE_EndpointMutexCreate(x)       _USB_DEVICE_EndpointMutexCreateFunction(x)
    #define _USB_DEVICE_EndpointMutexDelete(x)       _USB_DEVICE_EndpointMutexDeleteFunction(x)
#else
    /* If the endpoint functions are not called in the code, then the following
     * function are not needed and map to nothing */
    #define _USB_DEVICE_Initialize_Endpoint_Q(x,y,z)
    #define _USB_DEVICE_EndpointMutexCreate(x)
    #define _USB_DEVICE_EndpointCurrentQueueSizeReset(x)
    #define _USB_DEVICE_EndpointMutexDelete(x)
    #define _USB_DEVICE_EndpointDeclareOsalResult(x)
#endif 

// *****************************************************************************
// *****************************************************************************
// Section: Enabling Set Descriptor events 
// *****************************************************************************
// *****************************************************************************
#ifdef USB_DEVICE_SET_DESCRIPTOR_EVENT_ENABLE
    #define _USB_DEVICE_Handle_Set_Descriptor_Request(x,y,z) _USB_DEVICE_RedirectControlXfrToClient(x,y,z)
#else
    #define _USB_DEVICE_Handle_Set_Descriptor_Request(x,y,z) sendStatus = true
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Enabling Sync frame events 
// *****************************************************************************
// *****************************************************************************
#ifdef USB_DEVICE_SYNCH_FRAME_EVENT_ENABLE
    #define _USB_DEVICE_Handle_Synch_Frame_Request(x,y,z) _USB_DEVICE_ForwardControlXfrToFunction(x,y,z)
#else
    #define _USB_DEVICE_Handle_Synch_Frame_Request(x,y,z) USB_DEVICE_ControlStatus((USB_DEVICE_HANDLE)x, USB_DEVICE_CONTROL_STATUS_ERROR )
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Enabling BOS Descriptor Support 
// *****************************************************************************
// *****************************************************************************
#ifdef USB_DEVICE_BOS_DESCRIPTOR_SUPPORT_ENABLE 
    #define _USB_DEVICE_GetBosDescriptorRequest(pBosDesc, data, size)  if (pBosDesc != NULL)\
                                                                                 {\
                                                                                     data = (uint8_t *)(pBosDesc);\
                                                                                     size = ((USB_BOS_DESCRIPTOR *)pBosDesc)->wTotalLength;\
                                                                                 }\

#else
    #define _USB_DEVICE_GetBosDescriptorRequest(x, y, z)
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Advanced String Descriptor Table Support 
// *****************************************************************************
// *****************************************************************************
#ifdef USB_DEVICE_STRING_DESCRIPTOR_TABLE_ADVANCED_ENABLE
    #define _USB_DEVICE_GetStringDescriptorRequest(x,y,z)  _USB_DEVICE_GetStringDescriptorRequestProcessAdvanced(x,y,z)
#else
    #define _USB_DEVICE_GetStringDescriptorRequest(x,y,z) _USB_DEVICE_GetStringDescriptorRequestProcess(x,y,z)
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Microsoft OS Descriptor Support 
// *****************************************************************************
// *****************************************************************************
#ifdef USB_DEVICE_MICROSOFT_OS_DESCRIPTOR_SUPPORT_ENABLE
	#define _USB_DEVICE_VendorInterfaceRequestProcess(x,y,z)  _USB_DEVICE_RedirectControlXfrToClient(x,USB_DEVICE_EVENT_CONTROL_TRANSFER_SETUP_REQUEST,z);
#else
	#define _USB_DEVICE_VendorInterfaceRequestProcess(x,y,z)  _USB_DEVICE_ForwardControlXfrToFunction(x,y,z)
#endif 

// *****************************************************************************
// *****************************************************************************
// Section: Enabling Other Speed Descriptor request. 
// *****************************************************************************
// *****************************************************************************
/* Following macros are needed to Support Other Speed Descriptor request */ 
#if defined(DRV_USBHS_INSTANCES_NUMBER) || defined (DRV_USBHSV1_INSTANCES_NUMBER) || defined (DRV_USB_UDPHS_INSTANCES_NUMBER)
    #define _USB_DEVICE_DECLARE_IRP(x) USB_DEVICE_IRP x 
    #define _USB_DEVICE_DECLARE_EP0_BUFFER(x) uint8_t x[USB_DEVICE_EP0_BUFFER_SIZE]
    #define _USB_DEVICE_OtherSpeedDescriptorRequestService(x,y) _USB_DEVICE_Other_Speed_Descriptor_Request(x,y)
    #define _USB_DEVICE_OtherSpeedDescriptorRequestIrpFill(mIrp,mData,mSize,mCallback,mUserData)         (mIrp)->data = mData;\
                                                                                                                (mIrp)->size = mSize;\
                                                                                                                (mIrp)->callback = mCallback;\
                                                                                                                (mIrp)->userData = mUserData;
    #define _USB_DEVICE_OtherSpeedDescriptorRequestIrpFlagsUpdate(mIrp, mFlags)                                  (mIrp)->flags = mFlags;                                                                                                             
    #define _USB_DEVICE_OtherSpeedDescriptorRequestCopyData(dest,source,size)                                   memcpy(dest,source, size)
    #define _USB_DEVICE_OtherSpeedDescriptorRequestEditDescriptorType(buffer, index, type)                      buffer[index] = type; 
    #define _USB_DEVICE_OtherSpeedDescriptorRequestIrpSubmit(mCDHandle,mEp,mIrp)        (void)usbDeviceThisInstance->driverInterface->deviceIRPSubmit( mCDHandle, mEp, mIrp);                           
#else
    #define _USB_DEVICE_DECLARE_IRP(x)
    #define _USB_DEVICE_DECLARE_EP0_BUFFER(x)
    #define _USB_DEVICE_OtherSpeedDescriptorRequestService(x,y) _USB_DEVICE_Other_Speed_Descriptor_Request(x,y)
    #define _USB_DEVICE_OtherSpeedDescriptorRequestIrpFill(mIrp,mData,mSize,mCallback,mUserData)                                                                                                        
    #define _USB_DEVICE_OtherSpeedDescriptorRequestIrpFlagsUpdate(mIrp, mFlags)                                  
    #define _USB_DEVICE_OtherSpeedDescriptorRequestCopyData(dest,source,size)                                   
    #define _USB_DEVICE_OtherSpeedDescriptorRequestEditDescriptorType(buffer, index, type)                      
    #define _USB_DEVICE_OtherSpeedDescriptorRequestIrpSubmit(mCDHandle,mEp,mIrp)        
#endif 

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Descriptor Macros. 
// *****************************************************************************
// *****************************************************************************

/* The USB_DEVICE_16bitTo8bitArrange() macro is implemented for convenience.
   Since the configuration descriptor array is a uint8_t array, each entry 
   needs to be a uint8_t in LSB format.  The USB_DEVICE_16bitTo8bitArrange()
   macro breaks up a uint16_t into the appropriate uint8_t entries in LSB.
    Typical Usage:
    <code>
        const uint8_t configDescriptor1[]=
        {
            0x09,                           // Size of this descriptor in bytes
            USB_DESCRIPTOR_CONFIGURATION,   // CONFIGURATION descriptor type
            USB_DEVICE_16bitTo8bitArrange(0x0022), // Total length of data for
                                                    // this cfg  
    </code>
*/
#define USB_DEVICE_16bitTo8bitArrange(a) (a&0xFF),((a>>8)&0xFF)

/* The USB_DEVICE_32bitTo8bitArrange() macro is implemented for 
   convenience.  Since the configuration descriptor array is a uint8_t 
   array, each entry needs to be a uint8_t in LSB format.  The 
   USB_DEVICE_32bitTo8bitArrange() macro breaks up a uint32_t into
   the appropriate uint8_t entries in LSB.
*/
#define USB_DEVICE_32bitTo8bitArrange(a) (a&0xFF),((a>>8)&0xFF),((a>>16)&0xFF),((a>>24)&0xFF)

/* The USB_DEVICE_8bitArrange() macro is implemented for convenience.
   The USB_DEVICE_8bitArrange() macro provides a consistent macro for
   use with a byte when generating a configuration descriptor when using either
   the USB_DEVICE_16bitTo8bitArrange() or USB_DEVICE_32bitTo8bitArrange() 
   macros.
*/
#define USB_DEVICE_8bitArrange(a) (a)

#endif // #ifndef _USB_DEVICE_MAPPING_H

/*******************************************************************************
 End of File
*/

