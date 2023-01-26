/*******************************************************************************
  USB Common Definitions File

  Company:
    Microchip Technology Inc.

  File Name:
    usb_common.h 

  Summary:
    USB Common Definitions File

  Description:
    This file contains definitions that are used by various components of the
    USB stack. This file is included by the USB Device and Host stack files. The
    application may typically not need to include this file directly.
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

#ifndef _USB_COMMON_H_
#define _USB_COMMON_H_

#include <limits.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
/* USB Device IRP Status Enumeration

  Summary:
    Enumerates the possible status options of USB Device IRP.

  Description:
    Enumerates the possible status options of USB Device IRP.

  Remarks:
    The application that schedules the IRP can check the status member of the
    USB Device IRP at any time to obtain current status of the IRP.
*/

typedef enum
{
    /* The IRP was aborted because the host cleared the stall on the endpoint */
    USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST = -4,

    /* IRP was aborted because the endpoint halted */
    USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT = -3,

    /* USB Device IRP was aborted by the function driver */
    USB_DEVICE_IRP_STATUS_ABORTED       = -2,
    
    /* An error occurred on the bus when the IRP was being
     * processed */
    USB_DEVICE_IRP_STATUS_ERROR         = -1,
    
    /* The IRP was completed */
    USB_DEVICE_IRP_STATUS_COMPLETED  = 0,
   
    /* The IRP was completed but the amount of
     * data received was less than the requested
     * size */
    USB_DEVICE_IRP_STATUS_COMPLETED_SHORT  = 1,
    
    /* The IRP was completed and the received
     * token was a SETUP token. This is applicable
     * to IRP scheduled on CONTROL endpoint */
    USB_DEVICE_IRP_STATUS_SETUP         = 2,

    /* The IRP is pending in the queue */
    USB_DEVICE_IRP_STATUS_PENDING       = 3,

    /* The IRP is currently being processed */
    USB_DEVICE_IRP_STATUS_IN_PROGRESS   = 4,

} USB_DEVICE_IRP_STATUS;

// *****************************************************************************
/* USB Host IRP Status Enumeration

  Summary:
    Enumerates the possible status options of USB Host IRP.

  Description:
    Enumerates the possible status options of USB Host IRP.

  Remarks:
    The  application that schedules the IRP can check the status member of the
    USB Host IRP at any time to obtain current status of the IRP.
*/

typedef enum _USB_HOST_IRP_STATUS
{
    /* IRP was terminated due to an unknown error */
    USB_HOST_IRP_STATUS_ERROR_UNKNOWN = -6,

    /* IRP was terminated by the application */
    USB_HOST_IRP_STATUS_ABORTED = -5,

    /* IRP was terminated due to a bus error */
    USB_HOST_IRP_STATUS_ERROR_BUS = -4,

    /* IRP was terminated due to data error */
    USB_HOST_IRP_STATUS_ERROR_DATA = -3,

    /* IRP was terminated because of a NAK timeout */
    USB_HOST_IRP_STATUS_ERROR_NAK_TIMEOUT = -2,

    /* IRP was terminated because of a STALL */
    USB_HOST_IRP_STATUS_ERROR_STALL = -1,
    
    /* IRP has been completed */
    USB_HOST_IRP_STATUS_COMPLETED = 0,

    /* IRP has been completed but the 
     * amount of data processed was less 
     * than requested. */
    
    USB_HOST_IRP_STATUS_COMPLETED_SHORT = 1,

    /* IRP is waiting in queue */
    USB_HOST_IRP_STATUS_PENDING = 2,
    
    /* IRP is currently being processed */
    USB_HOST_IRP_STATUS_IN_PROGRESS = 3,
   
} USB_HOST_IRP_STATUS;

// *****************************************************************************
/* USB Device IRP Flags

  Summary:
    USB Device IRP flags enumeration

  Description:
    This enumeration defines the possible flags that can be specified while 
    adding the IRP.

  Remarks:
    Not all flags are applicable in all conditions. Refer to API documentation
    for more details
*/

typedef enum
{
    /* This is a null value used to initialize the variable
     * that holds the status of this flag. */
    USB_DEVICE_IRP_FLAG_NONE = 0x0,

    /* Using this flag indicates that there is no
     * more data pending in the IRP. When data moves
     * from device to host, and if the IRP size is
     * a multiple of endpoint size, specifying this
     * flag sends the ZLP. The size is not a 
     * multiple of endpoint size, no ZLP will be sent. */
    USB_DEVICE_IRP_FLAG_DATA_COMPLETE = 0x1,

    /* In case of data moving from device to host, and if the
     * size parameter of the IRP is an exact multiple of the
     * endpoint maximum packet size, specifying this flag, does
     * send the ZLP. If the size is less than endpoint size, 
     * specifying this flag will return an error. If the size
     * is more than endpoint size but not a multiple, only
     * endpoint multiple size of data is sent.*/

    USB_DEVICE_IRP_FLAG_DATA_PENDING = 0x2

} USB_DEVICE_IRP_FLAG;

// *****************************************************************************
/* USB Host IRP Flags

  Summary:
    USB Host IRP flags enumeration

  Description:
    This enumeration defines the possible flags that can be specified while 
    adding the IRP.

  Remarks:
    Not all flags are applicable in all conditions. Refer to API documentation
    for more details
*/

typedef enum
{
    /* Does not do anything */
    USB_HOST_IRP_FLAG_NONE = 0,

    /* In case of data moving from host to device, and if the
     * size parameter of the IRP is an exact multiple of the
     * endpoint maximum packet size, specifying this flag sends
     * a Zero Length Packet before the IRP is completed. */

    USB_HOST_IRP_FLAG_SEND_ZLP,

    /* In case of data moving device to host, and if the
     * size parameter of the IRP is an exact multiple of 
     * the endpoint maximum packet size, specifying this 
     * flag will cause the IRP to completed only when the
     * a ZLP was requested and acknowledged and the amount
     * of data was a multiple of endpoint maximum packet size. */
    USB_HOST_IRP_WAIT_FOR_ZLP,

    /* This enum value serves as s hint to the compiler to keep the enum value
     * to atleast 16 bits wide. This is because the bit 15 of the flags member
     * is used internally by the implementation is certain places to track IRP
     * direction.  Adding this enum will ensure that the compiler will always
     * allocate 16 bits for this enum, even in the case of packing */
    USB_HOST_IRP_DIRECTION = 0x8000

} USB_HOST_IRP_FLAG;

// *****************************************************************************
/* USB Endpoint and Direction Type

  Summary:
    Defines a type to store Endpoint and Direction. The MSB defines the 
    direction. The lower 4 bits defines the endpoint.

  Description:
    Defines a type to store Endpoint and Direction. The MSB defines the 
    direction. The lower 4 bits defines the endpoint.

  Remarks:
    None.
*/

typedef uint8_t USB_ENDPOINT;

// *****************************************************************************
/* USB Endpoint and Direction helper macro

  Summary:
   This macro helps in setting up the USB_ENDPOINT type. 

  Description:
   This macro helps in setting up the USB_ENDPOINT type. Here 
   x is the direction and can be either USB_DATA_DIRECTION_HOST_TO_DEVICE
   or USB_DATA_DIRECTION_DEVICE_TO_HOST. y is the endpoint.

  Remarks:
    None.
*/

#define USB_ENDPOINT_AND_DIRECTION(direction, endpoint) ((uint8_t)((direction << 7) | endpoint))

// *****************************************************************************
/* USB Device Mode I/O Request Packet
 
  Summary:
    This structure defines the USB Device Mode IRP data structure.

  Description:
    This structure defines the USB Device Mode IRP data structure.

  Remarks:
    None.
*/

typedef struct _USB_DEVICE_IRP 
{
    /* Pointer to the data buffer */
    void * data;

    /* Size of the data buffer */
    unsigned int size;

    /* Status of the IRP */
    USB_DEVICE_IRP_STATUS status;

    /* IRP Callback. If this is NULL,
     * then there is no callback generated */
    void (*callback)(struct _USB_DEVICE_IRP * irp);

    /* Request specific flags */
    USB_DEVICE_IRP_FLAG flags;

    /* User data */
    uintptr_t userData;

    /***********************************
     * The following members should not
     * be modified by the client
     ***********************************/
    uint32_t privateData[3];

} USB_DEVICE_IRP;

// *****************************************************************************
/* USB Host Mode I/O Request Packet
 
  Summary:
    This structure defines the USB Host Mode IRP data structure.

  Description:
    This structure defines the USB Host Mode IRP data structure.

  Remarks:
    None.
*/

typedef struct _USB_HOST_IRP
{
    /* Points to the 8 byte setup command
     * packet in case this is a IRP is 
     * scheduled on a CONTROL pipe. Should
     * be NULL otherwise */
    void * setup;

    /* Pointer to data buffer */
    void * data;
    
    /* Size of the data buffer */
    unsigned int size;
    
    /* Status of the IRP */ 
    USB_HOST_IRP_STATUS status;

    /* Request specific flags */
    USB_HOST_IRP_FLAG flags;

    /* User data */
    uintptr_t userData;

    /* Pointer to function to be called
     * when IRP is terminated. Can be 
     * NULL, in which case the function
     * will not be called. */
    void (*callback)(struct _USB_HOST_IRP * irp);

    /****************************************
     * These members of the IRP should not be
     * modified by client
     ****************************************/
   uintptr_t privateData[7];

} USB_HOST_IRP;

// *****************************************************************************
/* USB Error Codes
 
  Summary:
    Enumeration of all possible error codes that are returned by various 
    components functions in the USB Stack.

  Description:
    Enumeration of all possible error codes that are returned by various 
    components functions in the USB Stack.

  Remarks:
    None.
*/

typedef enum
{
     /* IRP Queue Full Error */
    USB_ERROR_IRP_QUEUE_FULL = SCHAR_MIN ,

    /* OSAL Function fails */
    USB_ERROR_OSAL_FUNCTION ,

    /* IRP Size parameter invalid */
    USB_ERROR_IRP_SIZE_INVALID ,

    /* Some function parameter was not valid */
    USB_ERROR_PARAMETER_INVALID ,

    /* Device endpoint is not valid */
    USB_ERROR_DEVICE_ENDPOINT_INVALID ,
    
   /* IRP is already in use */
    USB_ERROR_DEVICE_IRP_IN_USE ,

    /* Client is not ready */
    USB_ERROR_CLIENT_NOT_READY ,
            
    /* Free IRP object unavailable */
    USB_ERROR_IRP_OBJECTS_UNAVAILABLE ,

    /* Function Driver instance was not provisioned */
    USB_ERROR_DEVICE_FUNCTION_INSTANCE_INVALID,

    /* Function Driver instance is not configured */
    USB_ERROR_DEVICE_FUNCTION_NOT_CONFIGURED,

    /* Endpoint is not configured */
    USB_ERROR_ENDPOINT_NOT_CONFIGURED,

    /* Device Control Transfer Failed */
    USB_ERROR_DEVICE_CONTROL_TRANSFER_FAILED,

    /* Host device instance invalid */
    USB_ERROR_HOST_DEVICE_INSTANCE_INVALID,
    
    /* Host driver not ready for communication*/
    USB_ERROR_HOST_DRIVER_NOT_READY,
    
    /* Host driver not found */
    USB_ERROR_HOST_DRIVER_NOT_FOUND,
    
    /*Host endpoint invalid*/
    USB_ERROR_HOST_ENDPOINT_INVALID,
    
    /* Host pipe invalid */
    USB_ERROR_HOST_PIPE_INVALID,
	
	/* Invalid arguments */
    USB_ERROR_HOST_ARGUMENTS_INVALID,

    /* Header size invalid */
    USB_ERROR_HOST_HEADERSIZE_INVALID,

    /* Max interface Number */
    USB_ERROR_HOST_MAX_INTERFACES_INVALID,

    /* Endpoint descriptor size is invalid */
    USB_ERROR_HOST_ENDPOINT_DESC_SIZE_INVALID,

    /* Invalid Descriptor */
    USB_ERROR_HOST_DESCRIPTOR_INVALID,

    /* Invalid number of endpoints */
    USB_ERROR_HOST_MAX_ENDPOINT_INVALID,

    /* Host alternate setting is invalid */
    USB_ERROR_HOST_ALT_SETTING_INVALID,

    /* Host is busy */
    USB_ERROR_HOST_BUSY,

    /* USB host invalid*/
    USB_HOST_OBJ_INVALID,

    /* Pointer is invalid */
    USB_ERROR_HOST_POINTER_INVALID,

    /* Could not find endpoint */
    USB_ERROR_HOST_ENDPOINT_NOT_FOUND,

    /* Driver Instance Invalid */ 
    USB_ERROR_HOST_DRIVER_INSTANCE_INVALID,

    /* Could not find endpoint */
    USB_ERROR_HOST_INTERFACE_NOT_FOUND,
    
    /* Transfer terminated because endpoint was halted */
    USB_ERROR_ENDPOINT_HALTED, 

    /* Transfer terminated by host because of a stall clear */
    USB_ERROR_TRANSFER_TERMINATED_BY_HOST, 
    
    /* No Error, Operation was successful */
    USB_ERROR_NONE = 0,

} USB_ERROR;

// *****************************************************************************
/* USB Communication direction definitions

  Summary:
    Defines the communication direction

  Description:
    This definitions define the communication direction and can be used to
    specify direction while using the DRV_USB_ENDPOINT type.

  Remarks:
    None.
*/

typedef enum
{
    /* Data moves from device to host */
    USB_DATA_DIRECTION_DEVICE_TO_HOST =    1,
    
    /* Data moves from host to device */                                  
    USB_DATA_DIRECTION_HOST_TO_DEVICE =    0

} USB_DATA_DIRECTION;

// *****************************************************************************
/* USB 2.0 Speeds Enumeration

  Summary:
    Provides enumeration of USB 2.0 speeds.

  Description:
    Provides enumeration of USB 2.0 speeds.

  Remarks:
    None.
*/

typedef enum
{
	USB_SPEED_ERROR = 0,         // Error in obtaining USB module speed
    USB_SPEED_HIGH = 1,        	// USB module is at high speed				
    USB_SPEED_FULL = 2, 		// USB module is at full speed
    USB_SPEED_LOW  = 3, 		// USB module is at low speed		
	
} USB_SPEED;

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif




