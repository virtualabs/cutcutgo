/*******************************************************************************
  USB Driver Local Data Structures

  Company:
    Microchip Technology Inc.

  File Name:
    drv_usb_local.h

  Summary:
    USB driver local declarations and definitions

  Description:
    This file contains the USB driver's local declarations and definitions.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
//DOM-IGNORE-END

#ifndef _DRV_USBFS_LOCAL_H
#define _DRV_USBFS_LOCAL_H


// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#include "configuration.h"
#include "driver/usb/drv_usb_external_dependencies.h"
#include "driver/usb/usbfs/drv_usbfs.h"
#include "driver/usb/usbfs/src/drv_usbfs_variant_mapping.h"
#include "osal/osal.h"
//#include "system/devcon/sys_devcon.h"
//#include "peripheral/osc/plib_osc.h"
#include "usb/usb_host.h"


#define _DRV_USBFS_HOST_IRP_PER_FRAME_NUMBER        5
#define _DRV_USBFS_SW_EP_NUMBER _DRV_USBFS_HOST_IRP_PER_FRAME_NUMBER

#define DRV_USBFS_MAX_CONTROL_BANDWIDTH_FULL_SPEED      20
#define DRV_USBFS_MAX_CONTROL_BANDWIDTH_LOW_SPEED       30
#define DRV_USBFS_MAX_BANDWIDTH_PER_FRAME    70

#define USB_TRANSFER_TYPE_LOCAL_CONTROL          0
#define USB_TRANSFER_TYPE_LOCAL_INTERRUPT        1
#define USB_TRANSFER_TYPE_LOCAL_BULK             2
#define USB_TRANSFER_TYPE_LOCAL_ISOC             3

#define DRV_USBFS_POST_DETACH_DELAY 2000

#define DRV_USBFS_TRANSACTION_RETRY_COUNT   30

/**********************************************
 * Constants required for accessing the USB
 * module BDT table entries.
 **********************************************/

#define USBFS_UOWN 0x80
#define USBFS_DTS_ENABLE 0x08
#define USBFS_DATA1_PID 0x40
#define USBFS_PID_MASK
#define USBFS_STALL_SET 0x04

// *****************************************************************************
// *****************************************************************************
// Section: Data Type Definitions
// *****************************************************************************
// *****************************************************************************

/**********************************************
 * BDT entry union type
 *********************************************/

typedef union
{
    uint8_t     byte[8];
    uint16_t    shortWord[4];
    uint32_t    word[2];
}
DRV_USBFS_BDT_ENTRY;

/***************************************************
 * This is an intermediate flag that is set by
 * the driver to indicate that a ZLP should be sent
 ***************************************************/
#define USB_DEVICE_IRP_FLAG_SEND_ZLP 0x80

/***************************************************
 * This object is used by the driver as IRP place
 * holder along with queueing feature.
 ***************************************************/
typedef struct _USB_DEVICE_IRP_LOCAL 
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

    /* This points to the next IRP in the queue */
    struct _USB_DEVICE_IRP_LOCAL * next;

    /* This points to the previous IRP in the queue */
    struct _USB_DEVICE_IRP_LOCAL * previous;

    /* Pending bytes in the IRP */
    uint32_t nPendingBytes;

}
USB_DEVICE_IRP_LOCAL;


/************************************************
 * Endpoint state enumeration.
 ************************************************/
typedef enum
{
    DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED = 0x1,
    DRV_USBFS_DEVICE_ENDPOINT_STATE_STALLED = 0x2
}
DRV_USBFS_DEVICE_ENDPOINT_STATE;

/************************************************
 * Endpoint data strucutre. This data structure
 * holds the IRP queue and other flags associated
 * with functioning of the endpoint.
 ************************************************/

typedef struct
{
    /* This is the IRP queue for 
     * the endpoint */
    USB_DEVICE_IRP_LOCAL * irpQueue;

    /* Max packet size for the endpoint */
    uint16_t maxPacketSize;

    /* Endpoint type */
    USB_TRANSFER_TYPE endpointType;

    /* Data Toggle */
    USB_BUFFER_DATA01 nextDataToggle;

    /* Ping pong buffer indicator */
    USB_BUFFER_PING_PONG nextPingPong;

    /* Endpoint state bitmap */
    DRV_USBFS_DEVICE_ENDPOINT_STATE endpointState;

}
DRV_USBFS_DEVICE_ENDPOINT_OBJ;

/*********************************************
 * These IRP states are used internally by the
 * HCD to track completion of a host IRP. This
 * is not the same as the public IRP status
 *********************************************/
typedef enum
{   
    DRV_USBFS_HOST_IRP_STATE_SETUP_STAGE,
    DRV_USBFS_HOST_IRP_STATE_SETUP_TOKEN_SENT,
    DRV_USBFS_HOST_IRP_STATE_DATA_STAGE,
    DRV_USBFS_HOST_IRP_STATE_DATA_STAGE_SENT,
    DRV_USBFS_HOST_IRP_STATE_HANDSHAKE,
    DRV_USBFS_HOST_IRP_STATE_HANDSHAKE_SENT,
    DRV_USBFS_HOST_IRP_STATE_COMPLETE,
    DRV_USBFS_HOST_IRP_STATE_ABORTED
}
DRV_USBFS_HOST_IRP_STATE; 

/*********************************************
 * This is the local USB Host IRP object
 ********************************************/
typedef struct _USB_HOST_IRP_LOCAL
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

    uint32_t tempSize;
    DRV_USBFS_HOST_IRP_STATE tempState;
    uint32_t completedBytes;
    uint32_t completedBytesInThisFrame;
    struct _USB_HOST_IRP_LOCAL * next;
    DRV_USB_HOST_PIPE_HANDLE  pipe;

}
USB_HOST_IRP_LOCAL;

/************************************************
 * This is the Host Pipe Object.
 ************************************************/
typedef struct _DRV_USBFS_HOST_PIPE_OBJ
{
    /* This pipe object is in use */
    bool inUse;

    /* Client that owns this pipe */
    DRV_HANDLE hClient;
    
    /* USB endpoint and direction */
    USB_ENDPOINT endpointAndDirection;
    
    /* USB Endpoint type */
    USB_TRANSFER_TYPE pipeType;

    /* The IRP queue on this pipe */
    USB_HOST_IRP_LOCAL * irpQueueHead;

    /* The data toggle for this pipe*/
    USB_BUFFER_DATA01 dataToggle;

    /* The NAK counter for the IRP
     * being served on the pipe */
    
    uint32_t nakCounter;
	
	/* The Retry Count for the Transaction errors */
    uint32_t retryCount;

    /* Pipe endpoint size*/

    unsigned int endpointSize;

    /* The next pipe */
    struct _DRV_USBFS_HOST_PIPE_OBJ * next;

    /* Interval in case this
     * is a Isochronous or
     * an interrupt pipe */
    uint8_t bInterval;

    /* The device address */
    uint8_t deviceAddress;

    /* Interval counter */

    uint8_t intervalCounter;

    /* Bandwidth */
    uint8_t bwPerTransaction;

    /* Pipe Speed */
    USB_SPEED speed;
}
DRV_USBFS_HOST_PIPE_OBJ;

/***********************************************
 * Possible states for the 1 millisecond timer
 * interrupt task. 
 ***********************************************/
typedef enum
{
    /* Nothing to be done */
    DRV_USBFS_ONE_MILLISECOND_TASK_STATE_IDLE,

    /* Task is attach debouncing */
    DRV_USBFS_ONE_MILLISECOND_TASK_STATE_ATTACH_DEBOUNCING,

    /* Task is detach debouncing */
    DRV_USBFS_ONE_MILLISECOND_TASK_STATE_POST_DETACH_DELAY,

    /* Providing reset delay */
    DRV_USBFS_ONE_MILLISECOND_TASK_STATE_RESETTING_DELAY

} DRV_USBFS_ONE_MILLISECOND_STATE_TASK_STATE;

/************************************************
 * This is the Host SW EP Object.
 ************************************************/
typedef struct _DRV_USBFS_HOST_SW_EP
{
    bool tobeDone;
    USB_TRANSFER_TYPE transferType;
    USB_HOST_IRP_LOCAL * pIRP;
}
DRV_USBFS_HOST_SW_EP;

/*********************************************
 * Host Transfer Group. This data structures
 * contains all pipes belonging to one transfer
 * type.
 *********************************************/

typedef struct _DRV_USBFS_HOST_TRANSFER_GROUP
{
    /* The first pipe in this transfer 
     * group */
    DRV_USBFS_HOST_PIPE_OBJ * pipe;
    
    /* The current pipe being serviced
     * in this transfer group */
    DRV_USBFS_HOST_PIPE_OBJ * currentPipe;

    /* Total number of pipes in this
     * transfer group */
    int nPipes;
}
DRV_USBFS_HOST_TRANSFER_GROUP;

/********************************************
 * This enumeration list the possible status
 * valus of a token once it has completed.
 ********************************************/

typedef enum
{
    USB_TRANSACTION_ACK             = 0x2,
    USB_TRANSACTION_NAK             = 0xA,
    USB_TRANSACTION_STALL           = 0xE,
    USB_TRANSACTION_DATA0           = 0x3,
    USB_TRANSACTION_DATA1           = 0xB,
    USB_TRANSACTION_BUS_TIME_OUT    = 0x0,
    USB_TRANSACTION_DATA_ERROR      = 0xF

}
DRV_USBFS_TRANSACTION_RESULT;

/***********************************************
 * USB Driver flags. Binary flags needed to 
 * track different states of the USB driver.
 ***********************************************/
typedef enum
{

    /* Driver Host Mode operation has been enabled */
    DRV_USBFS_FLAG_HOST_MODE_ENABLED = /*DOM-IGNORE-BEGIN*/0x10/*DOM-IGNORE-END*/,

  
} DRV_USBFS_FLAGS;

/**************************************
 * Root Hub parameters
 **************************************/

typedef struct
{
    /* Pointer to the port over current detect function */
    DRV_USBFS_ROOT_HUB_PORT_OVER_CURRENT_DETECT portOverCurrentDetect;

    /* Pointer to the port indication function */
    DRV_USBFS_ROOT_HUB_PORT_INDICATION portIndication;

    /* Pointer to the port enable function */
    DRV_USBFS_ROOT_HUB_PORT_POWER_ENABLE portPowerEnable;

    /* Total current available */
    uint32_t rootHubAvailableCurrent;
}
DRV_USBFS_HOST_ROOT_HUB_INFO;

/***********************************************
 * Driver object structure. One object per
 * hardware instance
 **********************************************/

typedef struct _DRV_USBFS_OBJ_STRUCT
{
    /* Indicates this object is in use */
    bool    inUse;
    
    /* Set if the driver is executing in an interrupt context */
    bool inInterruptContext;

    /* Set if valid VBUS was detected in device mode */
    bool vbusIsValid;

    /* Set if device if D+ pull up is enabled. */
    bool isAttached;

    /* Set if the device is suspended */
    bool isSuspended;

    /* Set if the driver is opened */
    bool isOpened;

    /* Driver flags to indicate different things */
    DRV_USBFS_FLAGS driverFlags;

    /* Client data that will be returned at callback */
    uintptr_t  hClientArg;

    /* Call back function for this client */
    DRV_USB_EVENT_CALLBACK  pEventCallBack;

    /* Status of this driver instance */
    SYS_STATUS status;     
    
    /* Next Ping Pong state */
    uint32_t  rxEndpointsNextPingPong;
    uint32_t  txEndpointsNextPingPong;

    /* The USB peripheral associated with 
     * the object */
     _DRV_USBFS_FOR_DYNAMIC(USB_MODULE_ID, usbID);      

    /* Current operating mode of the driver */
    USB_OPMODES operationMode;

    /* Interrupt source for USB module */
    _DRV_USBFS_FOR_DYNAMIC(INT_SOURCE, interruptSource);

    /* Pointer to the BDT table for this
     * particular instance of the USB module */
    DRV_USBFS_BDT_ENTRY * pBDT;

    /* Mutex create function place holder*/
    OSAL_MUTEX_DECLARE (mutexID);

    /* Pointer to the endpoint table */
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointTable;

    /* Root Hub Port 0 attached device speed */
    _DRV_USBFS_FOR_HOST(USB_SPEED, deviceSpeed);

    /* Transfer Groups */
    _DRV_USBFS_FOR_HOST(DRV_USBFS_HOST_TRANSFER_GROUP, transferGroup[4]);

    /* The SWEPBuffer index */
    _DRV_USBFS_FOR_HOST(uint8_t, numSWEpEntry);

    /* EP0 TX Ping Pong Tracker */
    _DRV_USBFS_FOR_HOST(USB_BUFFER_PING_PONG, ep0TxPingPong);
    
    /* EP0 TX Ping Pong Tracker */
    _DRV_USBFS_FOR_HOST(USB_BUFFER_PING_PONG, ep0RxPingPong);

    /* Placeholder for bandwidth consumed in frame */
    _DRV_USBFS_FOR_HOST(uint8_t, globalBWConsumed);

    /* Variable used SW Endpoint objects that is used by this HW instances for
     * USB transfer scheduling */
     
    _DRV_USBFS_FOR_HOST(DRV_USBFS_HOST_SW_EP, drvUSBHostSWEp[_DRV_USBFS_SW_EP_NUMBER]);

    /* This is needed to track if the host is generating reset signal */
    _DRV_USBFS_FOR_HOST(bool, isResetting);

    /* This counts the reset signal duration */
    _DRV_USBFS_FOR_HOST(uint32_t, resetDuration);

    /* This counts the reset signal duration */
    _DRV_USBFS_FOR_HOST(DRV_USBFS_HOST_ROOT_HUB_INFO, rootHubInfo);

    /* This counts the attach detach debounce interval*/
    _DRV_USBFS_FOR_HOST(uint32_t, attachDebounceCounter);
    
    /* This is the post detach delay counter */
    _DRV_USBFS_FOR_HOST(uint32_t, detachDebounceCounter);
    
    /* This flag is true if an attach de-bounce count is in progress */
    _DRV_USBFS_FOR_HOST(bool, isAttachDebouncing);
    
    /* This flag is true if an detach de-bounce count is in progress */
    _DRV_USBFS_FOR_HOST(bool, isDetachDebouncing);
    
    /* This flag is true if an detach event has come and device de-enumeration
     * operation is in progress  */
    _DRV_USBFS_FOR_HOST(bool, isDeviceDeenumerating);

    /* The parent UHD assigned by the host */
    _DRV_USBFS_FOR_HOST(USB_HOST_DEVICE_OBJ_HANDLE, usbHostDeviceInfo);
    
    /* The UHD of the device attached to port assigned by the host */
    _DRV_USBFS_FOR_HOST(USB_HOST_DEVICE_OBJ_HANDLE, attachedDeviceObjHandle);

} DRV_USBFS_OBJ;


/***************************************************
 * This type definition allows creation of multiple
 * aligned BDT arrays. Clubbing all members together
 * help the linker to reduce memory gaps
 ***************************************************/

typedef struct
{
    DRV_USBFS_OBJ gDrvUSBObj;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ gDrvUSBEndpoints[DRV_USBFS_ENDPOINTS_NUMBER * 2];
}
DRV_USBFS_GROUP;


/**************************************
 * Local functions.
 *************************************/

void _DRV_USBFS_DEVICE_Initialize(DRV_USBFS_OBJ * drvObj, SYS_MODULE_INDEX index);
void _DRV_USBFS_DEVICE_Tasks_ISR(DRV_USBFS_OBJ * hDriver);
void _DRV_USBFS_HOST_Initialize
(
    DRV_USBFS_OBJ * const pusbdrvObj,
    const SYS_MODULE_INDEX index,
    DRV_USBFS_INIT * init
);
void _DRV_USBFS_HOST_Tasks_ISR(DRV_USBFS_OBJ * pusbdrvObj);

bool _DRV_USBFS_HOST_TransferSchedule
(
    DRV_USBFS_OBJ * pusbdrvObj, 
    DRV_USBFS_TRANSACTION_RESULT lastResult, 
    unsigned int transactionSize, 
    bool frameExpiry
);

void _DRV_USBFS_SendTokenToAddress
(
    USB_MODULE_ID usbID,
    uint8_t address,
    USB_PID pid,
    uint8_t endpoint,
    bool isLowSpeed
);

bool _DRV_USBFS_HOST_NonControlIRPProcess
(
    DRV_USBFS_OBJ * pusbdrvObj,
    USB_HOST_IRP_LOCAL * pirp,
    DRV_USBFS_TRANSACTION_RESULT lastTransactionResult,
    int lastTransactionsize
);

bool _DRV_USBFS_HOST_ControlXferProcess
(
    DRV_USBFS_OBJ * pusbdrvObj,
    USB_HOST_IRP_LOCAL * pirp,
    DRV_USBFS_TRANSACTION_RESULT deviceResponse,
    unsigned int deviceResponseSize
);

void _DRV_USBFS_HOST_Calculate_Control_BW
(
    DRV_USBFS_OBJ * pusbdrvObj,
    DRV_USBFS_HOST_TRANSFER_GROUP * ptransferGroup,
    USB_HOST_IRP_LOCAL * pcontrolIRP
);

bool _DRV_USBFS_HOST_Calculate_NonControl_BW
(
    DRV_USBFS_OBJ * pusbdrvObj,
    DRV_USBFS_HOST_TRANSFER_GROUP * ptransferGroup,
    USB_HOST_IRP_LOCAL * ptransferIRP,
    USB_TRANSFER_TYPE transferType,
    uint8_t numSWEpEntry
);

void _DRV_USBFS_HOST_NonControl_Send_Token
(
    USB_HOST_IRP_LOCAL * pirp,
    DRV_USBFS_OBJ *pusbdrvObj,
    DRV_USBFS_HOST_PIPE_OBJ *pipe,
    bool isLowSpeed
);

void _DRV_USBFS_HOST_ControlSendToken
(
    USB_HOST_IRP_LOCAL * pirp,
    DRV_USBFS_OBJ *pusbdrvObj,
    DRV_USBFS_HOST_PIPE_OBJ *pipe,
    uint8_t endpoint,
    uint8_t deviceAddress,
    USB_MODULE_ID usbID,
    bool isLowSpeed
);


#endif
