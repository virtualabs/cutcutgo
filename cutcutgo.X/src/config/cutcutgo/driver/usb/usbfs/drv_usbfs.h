/******************************************************************************
  PIC32MX USB Module Driver Interface Header File.

  Company:
    Microchip Technology Inc.
    
  File Name:
    drv_usbfs.h
	
  Summary:
    PIC32MX USB Module Driver Interface File.
	
  Description:
    The PIC32MX Full speed USB Module driver provides a simple interface to
    manage the "USB" peripheral on PIC32MX microcontrollers. This file defines
    the interface definitions and prototypes for the USB driver. The driver
    interface meets the requirements of the MPLAB Harmony USB Host and Device
    Layer.                                                  
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to  you  the  right  to  use,  modify,  copy  and  distribute
Software only when embedded on a Microchip  microcontroller  or  digital  signal
controller  that  is  integrated  into  your  product  or  third  party  product
(pursuant to the  sublicense  terms  in  the  accompanying  license  agreement).

You should refer  to  the  license  agreement  accompanying  this  Software  for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS  WITHOUT  WARRANTY  OF  ANY  KIND,
EITHER EXPRESS  OR  IMPLIED,  INCLUDING  WITHOUT  LIMITATION,  ANY  WARRANTY  OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A  PARTICULAR  PURPOSE.
IN NO EVENT SHALL MICROCHIP OR  ITS  LICENSORS  BE  LIABLE  OR  OBLIGATED  UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,  BREACH  OF  WARRANTY,  OR
OTHER LEGAL  EQUITABLE  THEORY  ANY  DIRECT  OR  INDIRECT  DAMAGES  OR  EXPENSES
INCLUDING BUT NOT LIMITED TO ANY  INCIDENTAL,  SPECIAL,  INDIRECT,  PUNITIVE  OR
CONSEQUENTIAL DAMAGES, LOST  PROFITS  OR  LOST  DATA,  COST  OF  PROCUREMENT  OF
SUBSTITUTE  GOODS,  TECHNOLOGY,  SERVICES,  OR  ANY  CLAIMS  BY  THIRD   PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE  THEREOF),  OR  OTHER  SIMILAR  COSTS.
*******************************************************************************/
//DOM-IGNORE-END

#ifndef _DRV_USBFS_H
#define _DRV_USBFS_H

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
#include "driver/usb/drv_usb.h"
#include "system/system_module.h"
#include "driver/usb/usbfs/src/plib_usbfs.h"
//#include "driver/usb/usbfs/src/plib_usbfs_header.h"
#include "usb/usb_hub.h"

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Driver Constants
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Driver Endpoint Table Entry Size in bytes.

  Summary:
    USB Driver Endpoint Table Entry Size in bytes.

  Description:
    This constant defines the size (in bytes) of an entry in the endpoint table.

  Remarks:
    None.
*/

#define DRV_USBFS_ENDPOINT_TABLE_ENTRY_SIZE  32 

// *****************************************************************************
/* USB Driver Host Mode Interface Functions.

  Summary:
    USB Driver Host Mode Interface Functions.

  Description:
    The Host Controller Driver interface in the Host Layer Initialization data
    structure should be set to this value so that Host Layer can access the USB
    Driver Host Mode functions.

  Remarks:
    None.
*/

/*DOM-IGNORE-BEGIN*/extern DRV_USB_HOST_INTERFACE gDrvUSBFSHostInterface;/*DOM-IGNORE-END */
#define DRV_USBFS_HOST_INTERFACE /*DOM-IGNORE-BEGIN*/&gDrvUSBFSHostInterface/*DOM-IGNORE-END */

// *****************************************************************************
/* USB Driver Device Mode Interface Functions.

  Summary:
    USB Driver Device Mode Interface Functions.

  Description:
    The Device Driver interface in the Device Layer Initialization data
    structure should be set to this value so that Device Layer can access the
    USB Driver Device Mode functions.

  Remarks:
    None.
*/

/*DOM-IGNORE-BEGIN*/extern DRV_USB_DEVICE_INTERFACE gDrvUSBFSDeviceInterface;/*DOM-IGNORE-END */
#define DRV_USBFS_DEVICE_INTERFACE /*DOM-IGNORE-BEGIN*/&gDrvUSBFSDeviceInterface/*DOM-IGNORE-END */

// *****************************************************************************
/* USB Driver Module Index 0 Definition.

  Summary:
    USB Driver Module Index 0 Definition.

  Description:
    This constant defines the value of USB Driver Index 0.  The SYS_MODULE_INDEX
    parameter of the DRV_USBFS_Initialize and DRV_USBFS_Open functions should be
    set to this value to identify instance 0 of the driver. 

  Remarks:
    These constants should be used in place of hard-coded numeric literals
    and should be passed into the DRV_USBFS_Initialize and DRV_USBFS_Open
    functions to identify the driver instance in use. These are not
    indicative of the number of modules that are actually supported by the
    microcontroller.
*/

#define DRV_USBFS_INDEX_0         0

// *****************************************************************************
/* USB Driver Module Index 1 Definition.

  Summary:
    USB Driver Module Index 1 Definition.

  Description:
    This constant defines the value of USB Driver Index 1.  The SYS_MODULE_INDEX
    parameter of the DRV_USBFS_Initialize and DRV_USBFS_Open functions should be
    set to this value to identify instance 1 of the driver. 

  Remarks:
    These constants should be used in place of hard-coded numeric literals
    and should be passed into the DRV_USBFS_Initialize and DRV_USBFS_Open
    functions to identify the driver instance in use. These are not
    indicative of the number of modules that are actually supported by the
    microcontroller.
*/

#define DRV_USBFS_INDEX_1         1

// *****************************************************************************
// *****************************************************************************
// Section: USB Device Driver Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Driver Host Pipe Handle.

  Summary:
    Defines the USB Driver Host Pipe Handle type.

  Description:
    This type definition defines the type of the USB Driver Host Pipe Handle.

  Remarks:
    None.
*/

typedef uintptr_t DRV_USBFS_HOST_PIPE_HANDLE;

// *****************************************************************************
/* USB Driver Invalid Host Pipe Handle.

  Summary:
    Value of an Invalid Host Pipe Handle.

  Description:
    This constant defines the value of an Invalid Host Pipe Handle.

  Remarks:
    None.
*/

#define DRV_USBFS_HOST_PIPE_HANDLE_INVALID ((DRV_USBFS_HOST_PIPE_HANDLE)(-1))

/*DOM-IGNORE-BEGIN*/#define DRV_USBFS_DEVICE_ENDPOINT_ALL 16/*DOM-IGNORE-END*/

// *****************************************************************************
/* USB Driver Events Enumeration.

  Summary:
    Identifies the different events that the USB Driver provides.

  Description:
    This enumeration identifies the different events that are generated by the
    USB Driver.

  Remarks:
    None.
*/

typedef enum
{
    /* Bus error occurred and was reported */
    DRV_USBFS_EVENT_ERROR = DRV_USB_EVENT_ERROR,

    /* Host has issued a device reset */
    DRV_USBFS_EVENT_RESET_DETECT = DRV_USB_EVENT_RESET_DETECT,

    /* Resume detected while USB in suspend mode */
    DRV_USBFS_EVENT_RESUME_DETECT = DRV_USB_EVENT_RESUME_DETECT,

    /* Idle detected */
    DRV_USBFS_EVENT_IDLE_DETECT = DRV_USB_EVENT_IDLE_DETECT,

    /* Stall handshake has occurred */
    DRV_USBFS_EVENT_STALL = DRV_USB_EVENT_STALL,

    /* Either Device received SOF or SOF threshold was reached in the Host mode
       operation */
    DRV_USBFS_EVENT_SOF_DETECT = DRV_USB_EVENT_SOF_DETECT,

    /* Session valid */
    DRV_USBFS_EVENT_DEVICE_SESSION_VALID = DRV_USB_EVENT_DEVICE_SESSION_VALID,

    /* Session Invalid */
    DRV_USBFS_EVENT_DEVICE_SESSION_INVALID = DRV_USB_EVENT_DEVICE_SESSION_INVALID,

} DRV_USBFS_EVENT;

// *****************************************************************************
/* USB Operating Modes Enumeration.

  Summary:
    Identifies the operating modes supported by the USB Driver.

  Description:
    This enumeration identifies the operating modes supported by the USB Driver.

  Remarks:
    None.
*/

typedef enum
{
    /* The driver should be able to switch between host and device mode */
    DRV_USBFS_OPMODE_DUAL_ROLE  = DRV_USB_OPMODE_DUAL_ROLE,

    /* The driver should support device mode operation only */
    DRV_USBFS_OPMODE_DEVICE  = DRV_USB_OPMODE_DEVICE,

    /* The driver should support host mode operation only */
    DRV_USBFS_OPMODE_HOST  = DRV_USB_OPMODE_HOST,

    /* The driver should support the OTG protocol */
    DRV_USBFS_OPMODE_OTG = DRV_USB_OPMODE_OTG

} DRV_USBFS_OPMODES;

// *****************************************************************************
/* Type of the USB Driver Event Callback Function.

  Summary:
    Type of the USB Driver event callback function.

  Description:
    Define the type of the USB Driver event callback function. The
    client should register an event callback function of this type when it
    intends to receive events from the USB Driver. The event callback
    function is registered using the DRV_USBFS_ClientEventCallBackSet function. 

  Parameters:
    hClient    - Handle to the driver client that registered this callback function.
    eventType  - This parameter identifies the event that caused the callback
                 function to be called.
    eventData  - Pointer to a data structure that is related to this event. 
                 This value will be NULL if the event has no related data.

  Returns:
    None.

  Remarks:
    None.

*/

typedef void (*DRV_USBFS_EVENT_CALLBACK) 
(
    uintptr_t hClient, 
    DRV_USBFS_EVENT  eventType,
    void * eventData   
);

// *****************************************************************************
/* USB Root hub Application Hooks (Port Overcurrent detection).

  Summary:
     USB Root hub Application Hooks (Port Overcurrent detection).

  Description:
    A function of the type defined here should be provided to the driver root
    hub to check for port over current condition.  This function will be called
    periodically by the root hub driver to check the Overcurrent status of the
    port. It should continue to return true while the Overcurrent condition
    exists on the port. It should return false when the Overcurrent condition
    does not exist. 

  Remarks:
    None.
*/

typedef bool (* DRV_USBFS_ROOT_HUB_PORT_OVER_CURRENT_DETECT)(uint8_t port);

// *****************************************************************************
/* USB Root hub Application Hooks (Port Power Enable/ Disable).

  Summary:
     USB Root hub Application Hooks (Port Power Enable/ Disable).

  Description:
    A function of the type defined here should be provided to the driver root to
    control port power.  The root hub driver will call this function when it
    needs to enable port power. If the application circuit contains a VBUS
    switch, the switch should be accessed and controlled by this function. If
    the enable parameter is true, the switch should be enabled and VBUS should
    be available on the port. If the enable parameter is false, the
    switch should be disabled and VBUS should not be available on the port.  

  Remarks:
    None.
*/

typedef void (* DRV_USBFS_ROOT_HUB_PORT_POWER_ENABLE)
(
    uint8_t port, 
    bool control
);

// *****************************************************************************
/* USB Root hub Application Hooks (Port Indication).

  Summary:
     USB Root hub Application Hooks (Port Indication).

  Description:
    A function of the type defined here should be provided to the driver root to
    implement Port Indication.  The root hub driver calls this function when it
    needs to update the state of the port indication LEDs. The application can
    choose to implement the Amber and Green colors as one LED or two different
    LEDs.  The root hub driver specifies the color and the indicator attribute
    (on, off or blinking) when it calls this function.

  Remarks:
    None.
*/

typedef void(* DRV_USBFS_ROOT_HUB_PORT_INDICATION)
(
    uint8_t port, 
    USB_HUB_PORT_INDICATOR_COLOR color, 
    USB_HUB_PORT_INDICATOR_STATE state
);

// *****************************************************************************
/* USB Device Driver Initialization Data.

  Summary:
    This type definition defines the Driver Initialization Data Structure.

  Description:
    This structure contains all the data necessary to initialize the USB Driver.
    A pointer to a structure of this type, containing the desired initialization
    data, must be passed into the DRV_USBFS_Initialize function.

  Remarks:
    None.
*/

typedef struct
{
    /* System Module Initialization */
    SYS_MODULE_INIT moduleInit;     
    
    /* Identifies the USB peripheral to be used. This should be the USB PLIB
       module instance identifier. */
    USB_MODULE_ID usbID; 
    
    /* This should be set to true if the USB module must stop operation in IDLE
       mode */
    bool stopInIdle;     

    /* This should be set to true if the USB module must suspend when the CPU
       enters sleep mode. */
    bool suspendInSleep; 

    /* Specify the interrupt source for the USB module. This should be the
       interrupt source identifier for the USB module instance specified in
       usbID. */
    INT_SOURCE interruptSource;

    /* Specify the operational speed of the USB module. This should always be
       set to USB_SPEED_FULL. */
    USB_SPEED operationSpeed; 

    /* Specify the operation mode of the USB module. This specifies if the USB
       module should operate as a Device, Host, or both (Dual Role operation). */
    DRV_USBFS_OPMODES operationMode;  

    /* A pointer to the endpoint descriptor table. This should be aligned at 512
       byte address boundary. The size of the table is equal to 
       DRV_USBFS_ENDPOINT_TABLE_ENTRY_SIZE times the number of endpoints needed
       in the application. */
    void * endpointTable; 

    /* Root hub available current in milliamperes. This specifies the amount of
       current that root hub can provide to the attached device. This should be
       specified in mA. This is required when the driver is required to operate
       in host mode. */
    uint32_t rootHubAvailableCurrent;

    /* When operating in Host mode, the application can specify a Root Hub port
       enable function. This parameter should point to Root Hub port enable
       function. If this parameter is NULL, it implies that the Port is always
       enabled. */
    DRV_USBFS_ROOT_HUB_PORT_POWER_ENABLE portPowerEnable;

    /* When operating in Host mode, the application can specify a Root Port
       Indication. This parameter should point to the Root Port Indication
       function. If this parameter is NULL, it implies that Root Port Indication
       is not supported. */
    DRV_USBFS_ROOT_HUB_PORT_INDICATION portIndication;

    /* When operating is Host mode, the application can specify a Root Port
       Overcurrent detection. This parameter should point to the Root Port
       Indication function. If this parameter is NULL, it implies that
       Overcurrent detection is not supported. */
    DRV_USBFS_ROOT_HUB_PORT_OVER_CURRENT_DETECT portOverCurrentDetect;

} DRV_USBFS_INIT;

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines - System Level
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    SYS_MODULE_OBJ DRV_USBHS_Initialize
    ( 
        const SYS_MODULE_INDEX drvIndex,
        const SYS_MODULE_INIT * const init    
    )
    
  Summary:
    Initializes the USB Driver.
	
  Description:
    This function initializes the USB Driver, making it ready for clients to
    open. The driver initialization does not complete when this function
    returns. The DRV_USBFS_Tasks function must called periodically to complete
    the driver initialization. The DRV_USBHS_Open function will fail if the
    driver was not initialized or if initialization has not completed.
	
  Precondition:
    None.
	
  Parameters:
    drvIndex - Ordinal number of driver instance to be initialized. This should
    be set to DRV_USBFS_INDEX_0 if driver instance 0 needs to be initialized.

    init - Pointer to a data structure containing data necessary to
    initialize the driver. This should be a DRV_USBFS_INIT structure reference
    typecast to SYS_MODULE_INIT reference. 
				
  Returns:
    * SYS_MODULE_OBJ_INVALID - The driver initialization failed.
    * A valid System Module Object - The driver initialization was able to
      start. It may have not completed and requires the DRV_USBFS_Tasks function
      to be called periodically. This value will never be the same as
      SYS_MODULE_OBJ_INVALID. 
	
  Example:
    <code>
     // The following code shows an example initialization of the
     // driver. The USB module to be used is USB1.  The module should not
     // automatically suspend when the  microcontroller enters Sleep mode.  The
     // module should continue  operation when the CPU enters Idle mode.  The
     // power state is set to run at full clock speeds. Device Mode operation
     // should be at FULL speed. The size of the endpoint table is set for 2
     // endpoints.
    
    DRV_USBFS_INIT moduleInit;

    uint8_t __attribute__((aligned(512))) endpointTable[DRV_USBFS_ENDPOINT_TABLE_ENTRY_SIZE * 2];
    
    usbInitData.usbID               = USB_ID_1;
    usbInitData.opMode              = DRV_USBFS_OPMODE_DEVICE;
    usbInitData.stopInIdle          = false;
    usbInitData.suspendInSleep      = false;
    usbInitData.operationSpeed      = USB_SPEED_FULL;
    usbInitData.interruptSource     = INT_SOURCE_USB;
    
    usbInitData.sysModuleInit.powerState = SYS_MODULE_POWER_RUN_FULL ;
    
    // This is how this data structure is passed to the initialize
    // function.
    
    DRV_USBFS_Initialize(DRV_USBFS_INDEX_0, (SYS_MODULE_INIT *) &usbInitData);
    
    </code>
	
  Remarks:
    This routine must be called before any other USB driver routine is called.
    This routine should only be called once during system initialization unless
    DRV_USBFS_Deinitialize is called to deinitialize the driver instance. 
*/

SYS_MODULE_OBJ DRV_USBFS_Initialize 
(
    const SYS_MODULE_INDEX drvIndex,
    const SYS_MODULE_INIT * const init
);

// *****************************************************************************
/* Function:
    SYS_STATUS DRV_USBFS_Status ( SYS_MODULE_OBJ object )

  Summary:
    Provides the current status of the USB Driver module.

  Description:
    This function provides the current status of the USB Driver module.

  Precondition:
    The DRV_USBFS_Initialize function must have been called before calling this
    function.

  Parameters:
    object - Driver object handle, returned from the DRV_USBFS_Initialize function.

  Returns:
    * SYS_STATUS_READY - Indicates that the driver is ready.
    * SYS_STATUS_UNINITIALIZED - Indicates that the driver has never been
      initialized.

  Example:
    <code>
    SYS_MODULE_OBJ      object;     // Returned from DRV_USBFS_Initialize
    SYS_STATUS          status;
    DRV_USBFS_INIT moduleInit;

    uint8_t __attribute__((aligned(512))) endpointTable[DRV_USBFS_ENDPOINT_TABLE_ENTRY_SIZE * 2];
    
    usbInitData.usbID               = USB_ID_1;
    usbInitData.opMode              = DRV_USBFS_OPMODE_DEVICE;
    usbInitData.stopInIdle          = false;
    usbInitData.suspendInSleep      = false;
    usbInitData.operationSpeed      = USB_SPEED_FULL;
    usbInitData.interruptSource     = INT_SOURCE_USB;
    
    usbInitData.sysModuleInit.powerState = SYS_MODULE_POWER_RUN_FULL ;
    
    // This is how this data structure is passed to the initialize
    // function.
    
    DRV_USBFS_Initialize(DRV_USBFS_INDEX_0, (SYS_MODULE_INIT *) &usbInitData);
    
    // The status of the driver can be checked.
    status = DRV_USBFS_Status(object);
    if(SYS_STATUS_READY == status)
    {
        // Driver is ready to be opened.
    }

    </code>

  Remarks:
    None.
*/

SYS_STATUS DRV_USBFS_Status ( SYS_MODULE_OBJ object );

// *****************************************************************************
/* Function:
    void DRV_USBFS_Tasks( SYS_MODULE_OBJ object )

  Summary:
    Maintains the driver's state machine when the driver is configured for 
    Polled mode.

  Description:
    Maintains the driver's Polled state machine. This function should be called
    from the SYS_Tasks function.

  Precondition:
    The DRV_USBFS_Initialize function must have been called for the specified
    USB Driver instance.

  Parameters:
    object - Object handle for the specified driver instance (returned from
    DRV_USBFS_Initialize function).

  Returns:
    None.

  Example:
    <code>
    SYS_MODULE_OBJ      object;     // Returned from DRV_USBFS_Initialize

    while (true)
    {
        DRV_USBFS_Tasks(object);

        // Do other tasks
    }
    </code>

  Remarks:
    This routine is normally not called  directly  by  an  application.   It  is
    called by the system's Tasks routine (SYS_Tasks). This function will never
    block.  
*/

void DRV_USBFS_Tasks(SYS_MODULE_OBJ object);

// *****************************************************************************
/* Function:
    void DRV_USBFS_Tasks_ISR( SYS_MODULE_OBJ object )

  Summary:
    Maintains the driver's Interrupt state machine and implements its ISR.

  Description:
    This function is used to maintain the driver's internal Interrupt state
    machine and implement its ISR for interrupt-driven implementations.

  Precondition:
    The DRV_USBFS_Initialize function must have been called for the specified
    USB Driver instance.

  Parameters:
    object - Object handle for the specified driver instance (returned from
    DRV_USBFS_Initialize).

  Returns:
    None.

  Example:
    <code>
    SYS_MODULE_OBJ object;     // Returned from DRV_USBFS_Initialize

    while (true)
    {
        DRV_USBFS_Tasks_ISR (object);

        // Do other tasks
    }
    </code>

  Remarks:
    This routine should be called from the USB interrupt service routine. In
    case of multiple USB modules, it should be ensured that the correct USB
    driver system module object is passed to this routine.
*/

void DRV_USBFS_Tasks_ISR( SYS_MODULE_OBJ object );

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines - Client Level
// *****************************************************************************
// *****************************************************************************

// ****************************************************************************
/* Function:
    DRV_HANDLE DRV_USBFS_Open
    ( 
        const SYS_MODULE_INDEX drvIndex,
        const DRV_IO_INTENT intent
    )
    
  Summary:
    Opens the specified USB Driver instance and returns a handle to it.
	
  Description:
    This function opens the specified USB Driver instance and provides a
    handle that must be provided to all other client-level operations to
    identify the caller and the instance of the driver. The intent flag
    should always be
    DRV_IO_INTENT_EXCLUSIVE|DRV_IO_INTENT_READWRITE|DRV_IO_INTENT_NON_BLOCKING.
    Any other setting of the intent flag will return a invalid driver
    handle. A driver instance can only support one client. Trying to open a
    driver that has an existing client will result in an unsuccessful
    function call.
	
  Precondition:
    Function DRV_USBFS_Initialize must have been called before calling this
    function.
	
  Parameters:
    drvIndex - Identifies the driver instance to be opened. As an example, this
    value can be set to DRV_USBFS_INDEX_0 if instance 0 of the driver has to be
    opened.
    
    intent - Should always be 
    (DRV_IO_INTENT_EXCLUSIVE|DRV_IO_INTENT_READWRITE| DRV_IO_INTENT_NON_BLOCKING).
				
  Returns:
    * DRV_HANDLE_INVALID - The driver could not be opened successfully.This can
      happen if the driver initialization was not complete or if an internal
      error has occurred.  
    * A Valid Driver Handle - This is an arbitrary value and is returned if the
      function was successful. This value will never be the same as
      DRV_HANDLE_INVALID. 
	
  Example:
    <code>

    DRV_HANDLE handle;

    // This code assumes that the driver has been initialized.
    handle = DRV_USBFS_Open(DRV_USBFS_INDEX_0, DRV_IO_INTENT_EXCLUSIVE| DRV_IO_INTENT_READWRITE| DRV_IO_INTENT_NON_BLOCKING);

    if(DRV_HANDLE_INVALID == handle)
    {
        // The application should try opening the driver again.
    }
    
    </code>
	
  Remarks:
    The handle returned is valid until the DRV_USBFS_Close function is called.
    The function will typically return DRV_HANDLE_INVALID if the driver was not
    initialized. In such a case the client should try to open the driver again.
*/

DRV_HANDLE DRV_USBFS_Open
(
    const SYS_MODULE_INDEX drvIndex,
    const DRV_IO_INTENT intent  
);

// *****************************************************************************
/* Function:
    void DRV_USBFS_Close( DRV_HANDLE handle )

  Summary:
    Closes an opened-instance of the  USB Driver.

  Description:
    This function closes an opened-instance of the  USB Driver, invalidating the
    handle.

  Precondition:
    The DRV_USBFS_Initialize function must have been called for the specified
    USB Driver instance. DRV_USBFS_Open function must have been called to obtain
    a valid opened device handle.

  Parameters:
    handle  - Client's driver handle (returned from DRV_USBFS_Open function).

  Returns:
    None.

  Example:
    <code>
    DRV_HANDLE handle;  // Returned from DRV_USBFS_Open

    DRV_USBFS_Close(handle);
    </code>

  Remarks:
    After calling this function, the handle passed in handle parameter must not
    be  used with any of the other driver functions. A new handle must be
    obtained by calling DRV_USBFS_Open function before the caller may use the
    driver again.
*/

void DRV_USBFS_Close( DRV_HANDLE handle );

// *****************************************************************************
/* Function:
    void DRV_USBFS_ClientEventCallBackSet
    ( 
        DRV_HANDLE handle,
        uintptr_t hReferenceData,
        DRV_USBFS_EVENT_CALLBACK myEventCallBack 
    );

  Summary:
    This function sets up the event callback function that is invoked by the USB
    controller driver to notify the client of USB bus events.
	
  Description:
    This function sets up the event callback function that is invoked by the USB
    controller driver to notify the client of USB bus events. The callback is
    disabled by either not calling this function after the DRV_USBFS_Open
    function has been called or by setting the myEventCallBack argument as NULL.
    When the callback function is called, the hReferenceData argument is
    returned.
	
  Precondition:
    None.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

    hReferenceData - Object (could be a pointer) that is returned with the
    callback.  
    
    myEventCallBack -  Callback function for all USB events.
	
  Returns:
    None.
	
  Example:
    <code>

     // Set the client event callback for the Device Layer.  The
     // USBDeviceLayerEventHandler function is the event handler. When this
     // event handler is invoked by the driver, the driver returns back the
     // second argument specified in the following function (which in this case
     // is the Device Layer data structure). This allows the application
     // firmware to identify, as an example, the Device Layer object associated
     // with this callback.
    
    DRV_USBFS_ClientEventCallBackSet(myUSBDevice.usbDriverHandle, (uintptr_t)&myUSBDevice, USBDeviceLayerEventHandler);
    
    </code>
	
  Remarks:
    Typical usage of the  USB Driver requires a client to register a callback.                                                                         
*/

void DRV_USBFS_ClientEventCallBackSet
( 
    DRV_HANDLE handle,
    uintptr_t  hReferenceData ,
    DRV_USB_EVENT_CALLBACK myEventCallBack 
);

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines - Device Mode Operation
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_AddressSet(DRV_HANDLE handle, uint8_t address);

  Summary:
    This function will set the USB module address that is obtained from the Host.

  Description:
    This function will set the USB module address  that  is  obtained  from  the
    Host in a setup transaction. The address is obtained from  the  SET_ADDRESS
    command issued by the Host. The  primary  (first)  client  of  the  driver
    uses this function to set the module's USB address after decoding the  setup
    transaction from the Host.

  Precondition:
    None.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    address - The address of this module on the USB bus.

  Returns:
    None.

  Example:
    <code>
    // This function should be called by the first client of the driver,
    // which is typically the Device Layer. The address to set is obtained
    // from the Host during enumeration.

    DRV_USBFS_DEVICE_AddressSet(deviceLayer, 4);
    </code>

  Remarks:
    None.
*/

void DRV_USBFS_DEVICE_AddressSet(DRV_HANDLE handle, uint8_t address);

// *****************************************************************************
/* Function:
    USB_SPEED DRV_USBFS_DEVICE_CurrentSpeedGet(DRV_HANDLE handle);

  Summary:
    This function returns the USB speed at which the device is operating.

  Description:
    This function returns the USB speed at which the device is operating. 

  Precondition:
    Only valid after the device is attached to the Host and Host has completed
    reset signaling.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

  Returns:
    * USB_SPEED_ERROR - The device speed is not valid.
    * USB_SPEED_FULL - The device is operating at Full speed.

  Example:
    <code>
    // Get the current speed.
    
    USB_SPEED deviceSpeed;
    
    deviceSpeed = DRV_USBFS_DEVICE_CurrentSpeedGet(deviceLayer);
    
    </code>

  Remarks:
    None.
*/

USB_SPEED DRV_USBFS_DEVICE_CurrentSpeedGet(DRV_HANDLE handle);

// *****************************************************************************
/* Function:
    uint16_t DRV_USBFS_DEVICE_SOFNumberGet(DRV_HANDLE handle);

  Summary:
    This function will return the USB SOF packet number.

  Description:
    This function will return the USB SOF packet number..

  Precondition:
    This function will return a valid value only when the device is attached to
    the bus. The SOF packet count will not increment if the bus is suspended.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

  Returns:
    The SOF packet number.

  Example:
    <code>
    // This code shows how the DRV_USBFS_DEVICE_SOFNumberGet function is called
    // to read the current SOF number.

    DRV_HANDLE handle;
    uint16_t sofNumber;

    sofNumber = DRV_USBFS_DEVICE_SOFNumberGet(handle);

    </code>

  Remarks:
    None.
*/

uint16_t DRV_USBFS_DEVICE_SOFNumberGet(DRV_HANDLE handle);

// *****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_Attach(DRV_HANDLE handle);

  Summary:
    This function will enable the attach signaling resistors on the D+ and D-
    lines thus letting the USB Host know that a device has been attached on the
    bus.

  Description:
    This function enables the pull-up resistors on the D+ or D- lines thus
    letting the USB Host know that a device has been attached on the bus . This
    function should be called when the driver client is ready  to  receive
    communication  from  the  Host (typically after all initialization is
    complete). The USB 2.0 specification requires VBUS to be detected before the
    data line pull-ups are enabled. The application must ensure the same.

  Precondition:
    The Client handle should be valid.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

  Returns:
    None.

  Example:
    <code>

    // Open the device driver and attach the device to the USB.
    handle = DRV_USBFS_Open(DRV_USBFS_INDEX_0, DRV_IO_INTENT_EXCLUSIVE| DRV_IO_INTENT_READWRITE| DRV_IO_INTENT_NON_BLOCKING);

    // Register a callback
    DRV_USBFS_ClientEventCallBackSet(handle, (uintptr_t)&myDeviceLayer, MyDeviceLayerEventCallback); 

    // The device can be attached when VBUS Session Valid event occurs
    void MyDeviceLayerEventCallback(uintptr_t handle, DRV_USBFS_EVENT event, void * hReferenceData)
    {
        switch(event)
        {
            case DRV_USBFS_EVENT_DEVICE_SESSION_VALID:
                // A valid VBUS was detected.    
                DRV_USBFS_DEVICE_Attach(handle);
                break;

            case DRV_USBFS_EVENT_DEVICE_SESSION_INVALID:
                // VBUS is not valid anymore. The device can be disconnected.
                DRV_USBFS_DEVICE_Detach(handle);
                break;

            default:
                break;
            }
        }
    }

    </code>

  Remarks:
    None.
*/

void DRV_USBFS_DEVICE_Attach(DRV_HANDLE handle);

// *****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_Detach(DRV_HANDLE handle);

  Summary:
    This function will disable the attach signaling resistors on the D+ and D-
    lines thus letting the USB Host know that the device has detached from the
    bus.

  Description:
    This function disables the pull-up resistors on the D+ or D- lines. This
    function should be called when the application wants to disconnect the
    device  from  the bus (typically to implement a soft detach or switch  to
    Host  mode operation).  A self-powered device should be detached from the
    bus when the VBUS is not valid.

  Precondition:
    The Client handle should be valid.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

  Returns:
    None.

  Example:
    <code>

    // Open the device driver and attach the device to the USB.
    handle = DRV_USBFS_Open(DRV_USBFS_INDEX_0, DRV_IO_INTENT_EXCLUSIVE| DRV_IO_INTENT_READWRITE| DRV_IO_INTENT_NON_BLOCKING);

    // Register a callback
    DRV_USBFS_ClientEventCallBackSet(handle, (uintptr_t)&myDeviceLayer, MyDeviceLayerEventCallback); 

    // The device can be detached when VBUS Session Invalid event occurs
    void MyDeviceLayerEventCallback(uintptr_t handle, DRV_USBFS_EVENT event, void * hReferenceData)
    {
        switch(event)
        {
            case DRV_USBFS_EVENT_DEVICE_SESSION_VALID:
                // A valid VBUS was detected.    
                DRV_USBFS_DEVICE_Attach(handle);
                break;

            case DRV_USBFS_EVENT_DEVICE_SESSION_INVALID:
                // VBUS is not valid anymore. The device can be disconnected.
                DRV_USBFS_DEVICE_Detach(handle);
                break;

            default:
                break;
            }
        }
    }

    </code>

  Remarks:
    None.
*/

void DRV_USBFS_DEVICE_Detach(DRV_HANDLE handle);

// ****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointEnable
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection,
        USB_TRANSFER_TYPE transferType,
        uint16_t endpointSize
    );
    
  Summary:
    This function enables an endpoint for the specified direction and endpoint
    size.
	
  Description:
    This function enables an endpoint for the specified direction and endpoint
    size. The function will enable the endpoint for communication in one
    direction at a time. It must be called twice if the endpoint is required to
    communicate in both the directions, with the exception of control endpoints.
    If the endpoint type is a control endpoint, the endpoint is always
    bidirectional and the function needs to be called only once.  
    
    The size of the endpoint must match the wMaxPacketSize reported in the
    endpoint descriptor for this endpoint. A transfer that is scheduled over
    this endpoint will be scheduled in wMaxPacketSize transactions. The function
    does not check if the endpoint is already in use. It is the client's
    responsibility to make sure that a endpoint is not accidentally reused.
	
  Precondition:
    The Client handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    
    endpointAndDirection - Specifies the endpoint and direction.

    transferType - Should be USB_TRANSFER_TYPE_CONTROL for control endpoint,
    USB_TRANSFER_TYPE_BULK for bulk endpoint, USB_TRANSFER_TYPE_INTERRUPT for
    interrupt endpoint and USB_TRANSFER_TYPE_ISOCHRONOUS for isochronous
    endpoint.
    
    endpointSize - Maximum size (in bytes) of the endpoint as reported in the
    endpoint descriptor.
							
  Returns:
    * USB_ERROR_NONE - The endpoint was successfully enabled.
    * USB_ERROR_DEVICE_ENDPOINT_INVALID - If the endpoint that is being accessed
      is not a valid endpoint defined for this driver instance.  The value of
      DRV_USBFS_ENDPOINTS_NUMBER configuration constant should be adjusted.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is invalid.
	
  Example:
    <code>
    // This code shows an example of how to enable Endpoint
    // 0 for control transfers. Note that for a control endpoint, the
    // direction parameter is ignored. A control endpoint is always
    // bidirectional. Endpoint size is 64 bytes.
    
    uint8_t ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 0);
    
    DRV_USBFS_DEVICE_EndpointEnable(handle, ep, USB_TRANSFER_TYPE_CONTROL, 64);
    
    // This code shows an example of how to set up a endpoint
    // for BULK IN transfer. For an IN transfer, data moves from device
    // to Host. In this example, Endpoint 1 is enabled. The maximum
    // packet size is 64.
    
    uint8_t ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    DRV_USBFS_DEVICE_EndpointEnable(handle, ep, USB_TRANSFER_TYPE_BULK, 64);
    
    // If Endpoint 1 must also be set up for BULK OUT, the
    // DRV_USBFS_DEVICE_EndpointEnable function must be called again, as shown
    // here.
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_HOST_TO_DEVICE, 1);
    
    DRV_USBFS_DEVICE_EndpointEnable(handle, ep, USB_TRANSFER_TYPE_BULK, 64);
    </code>
	
  Remarks:
    None.                                                                    
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointEnable
(
    DRV_HANDLE handle, 
    USB_ENDPOINT endpointAndDirection, 
    USB_TRANSFER_TYPE transferType,
    uint16_t endpointSize
);

// ***************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointDisable
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )
    
  Summary:
    This function disables an endpoint.
	
  Description:
    This function disables an endpoint. If the endpoint type is a control
    endpoint type, both directions are disabled. For non-control endpoints, the
    function disables the specified direction only. The direction to be disabled 
    is specified by the Most Significant Bit (MSB) of the endpointAndDirection 
    parameter.
	
  Precondition:
    The Client handle should be valid.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    endpointAndDirection - Specifies the endpoint and direction.
	
  Returns:
    * USB_ERROR_NONE - The endpoint was successfully enabled.
    * USB_ERROR_DEVICE_ENDPOINT_INVALID - The endpoint that is being accessed
      is not a valid endpoint (endpoint was not provisioned through the 
      DRV_USBFS_ENDPOINTS_NUMBER configuration constant) defined for this driver 
      instance.
	
  Example:
    <code>
    // This code shows an example of how to disable
    // a control endpoint. Note that the direction parameter is ignored.
    // For a control endpoint, both the directions are disabled.
    
    USB_ENDPOINT ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 0);
    
    DRV_USBFS_DEVICE_EndpointDisable(handle, ep );
    
    // This code shows an example of how to disable a BULK IN
    // endpoint
    
    USB_ENDPOINT ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    DRV_USBFS_DEVICE_EndpointDisable(handle, ep );
    
    </code>
	
  Remarks:
    None.                                                                    
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointDisable
(
    DRV_HANDLE handle, 
    USB_ENDPOINT endpointAndDirection
);

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointDisableAll(DRV_HANDLE handle) 
  
  Summary:
    This function disables all provisioned endpoints.

  Description:
    This function disables all provisioned endpoints in both directions. 
  
  Precondition:
    The Client handle should be valid.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

  Returns:
    * USB_ERROR_NONE - The function exited successfully.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is invalid.

  Example:
    <code>
    // This code shows an example of how to disable all endpoints. 

    DRV_USBFS_DEVICE_EndpointDisableAll(handle);
    
    </code>

  Remarks:
    This function is typically called by the USB Device Layer to disable
    all endpoints upon detecting a bus reset.
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointDisableAll(DRV_HANDLE handle); 

// ****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointStall
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )
    
  Summary:
    This function stalls an endpoint in the specified direction.
	
  Description:
    This function stalls an endpoint in the specified direction.
	
  Precondition:
    The Client handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    endpointAndDirection -  Specifies the endpoint and direction.
	
  Returns:
    * USB_ERROR_NONE - The endpoint was successfully enabled.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is not valid.
    * USB_ERROR_DEVICE_ENDPOINT_INVALID - If the endpoint that is being
      accessed is out of the valid endpoint defined for this driver instance.
    * USB_ERROR_OSAL_FUNCTION - An error with an OSAL function called in this
      function.
	
  Example:
    <code>
    // This code shows an example of how to stall an endpoint. In
    // this example, Endpoint 1 IN direction is stalled.
    
    USB_ENDPOINT ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    DRV_USBFS_DEVICE_EndpointStall(handle, ep);
    
    </code>
	
  Remarks:
    None.                                                                    
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointStall
(
    DRV_HANDLE handle, 
    USB_ENDPOINT endpointAndDirection
);

// ****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointStallClear
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )
    
  Summary:
    This function clears the stall on an endpoint in the specified direction.
	
  Description:
    This function clears the stall on an endpoint in the specified direction.
	
  Precondition:
    The Client handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    endpointAndDirection -  Specifies the endpoint and direction.
	
  Returns:
    * USB_ERROR_NONE - The endpoint was successfully enabled.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is not valid.
    * USB_ERROR_DEVICE_ENDPOINT_INVALID - If the endpoint that is being
      accessed is out of the valid endpoint defined for this driver instance.
	
  Example:
    <code>
    // This code shows an example of how to clear a stall. In this
    // example, the stall condition on Endpoint 1 IN direction is cleared.
    
    USB_ENDPOINT ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    DRV_USBFS_DEVICE_EndpointStallClear(handle, ep);
    
    </code>
	
  Remarks:
    None.                                                                    
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointStallClear
(
    DRV_HANDLE handle, 
    USB_ENDPOINT endpointAndDirection
);

// *****************************************************************************
/* Function:
    bool DRV_USBFS_DEVICE_EndpointIsEnabled
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )
    
  Summary:
    This function returns the enable/disable status of the specified endpoint
    and direction.
	
  Description:
    This function returns the enable/disable status of the specified endpoint
    and direction.
	
  Precondition:
    The Client handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    endpointAndDirection - Specifies the endpoint and direction.
	
  Returns:
    * true - The endpoint is enabled.
    * false - The endpoint is disabled.
	
  Example:
    <code>
    // This code shows an example of how the
    // DRV_USBFS_DEVICE_EndpointIsEnabled function can be used to obtain the
    // status of Endpoint 1 and IN direction.
    
    USB_ENDPOINT ep;
    
    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);
    
    if(DRV_USBFS_ENDPOINT_STATE_DISABLED ==
                DRV_USBFS_DEVICE_EndpointIsEnabled(handle, ep))
    {
        // Endpoint is disabled. Enable endpoint.
    
        DRV_USBFS_DEVICE_EndpointEnable(handle, ep, USB_ENDPOINT_TYPE_BULK, 64);
    
    }
    
    </code>
	
  Remarks:
    None.                                                                     
*/

bool DRV_USBFS_DEVICE_EndpointIsEnabled
(
    DRV_HANDLE client, 
    USB_ENDPOINT endpointAndDirection
);

// *****************************************************************************
/* Function:
    bool DRV_USBFS_DEVICE_EndpointIsStalled
    (
        DRV_HANDLE handle, 
        USB_ENDPOINT endpointAndDirection
    ) 
  
  Summary:
    This function returns the stall status of the specified endpoint and
    direction.

  Description:
    This function returns the stall status of the specified endpoint and
    direction.
  
  Precondition:
    The Client handle should be valid.

  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).

    endpointAndDirection - Specifies the endpoint and direction.

  Returns:
    * true - The endpoint is stalled.
    * false - The endpoint is not stalled.

  Example:
    <code>
    // This code shows an example of how the
    // DRV_USBFS_DEVICE_EndpointIsStalled function can be used to obtain the
    // stall status of Endpoint 1 and IN direction.

    USB_ENDPOINT ep;

    ep = USB_ENDPOINT_AND_DIRECTION(USB_DATA_DIRECTION_DEVICE_TO_HOST, 1);

    if(true == DRV_USBFS_DEVICE_EndpointIsStalled (handle, ep))
    {
        // Endpoint stall is enabled. Clear the stall.

        DRV_USBFS_DEVICE_EndpointStallClear(handle, ep);
        
    }

    </code>

  Remarks:
    None.
*/

bool DRV_USBFS_DEVICE_EndpointIsStalled
(
    DRV_HANDLE client, 
    USB_ENDPOINT endpoint
); 

// ***********************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_IRPSubmit
    (
        DRV_HANDLE client,
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
    The Client handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
    endpointAndDirection -  Specifies the endpoint and direction.
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
    
    if (DRV_USBFS_DEVICE_IRPSubmit(handle, ep, &irp) != USB_ERROR_NONE)
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
    // following example, the DRV_USBFS_DEVICE_IRPSubmit function will return a
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

USB_ERROR DRV_USBFS_DEVICE_IRPSubmit
(
    DRV_HANDLE client, 
    USB_ENDPOINT endpointAndDirection, 
    USB_DEVICE_IRP * irp
);

// **************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_IRPCancel
	(
		DRV_HANDLE client, 
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
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
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
    
    if (DRV_USBFS_DEVICE_IRPSubmit(handle, ep, &irp) != USB_ERROR_NONE)
    {
        // This means there was an error.
    }
    else
    {
        // Check the status of the IRP.
        if(irp.status != USB_DEVICE_IRP_STATUS_COMPLETED)
        {
            // Cancel the submitted IRP.
            if (DRV_USBFS_DEVICE_IRPCancel(handle, &irp) != USB_ERROR_NONE)
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

USB_ERROR DRV_USBFS_DEVICE_IRPCancel
(
    DRV_HANDLE client, 
    USB_DEVICE_IRP * irp
);

// **************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_IRPCancelAll 
    (
        DRV_HANDLE client,
        USB_ENDPOINT endpointAndDirection
    );
    
  Summary:
    This function cancels all IRPs that are queued and in progress at the
    specified endpoint.
	
  Description:
    This function cancels all IRPs that are queued and in progress at the
    specified endpoint.
	
  Precondition:
    The Client handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
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
    
                DRV_USBFS_DEVICE_EndpointStall(handle, ep);
                DRV_USBFS_DEVICE_IRPCancelAll(handle, ep);
            }
         }
     }
    </code>
	
  Remarks:
    None.                                                                  
*/

USB_ERROR DRV_USBFS_DEVICE_IRPCancelAll 
(
    DRV_HANDLE client, 
    USB_ENDPOINT endpointAndDirection
);

// ****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_RemoteWakeupStart(DRV_HANDLE handle);
  
  Summary:
    This function causes the device to start Remote Wakeup Signalling on the
    bus.
	
  Description:
    This function causes the device to start Remote Wakeup Signalling on the
    bus. This function should be called when the device, presently placed in
    suspend mode by the Host, wants to be wakeup. Note that the device can do
    this only when the Host has enabled the device's Remote Wakeup capability.
	
  Precondition:
    The handle should be valid.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).
	
  Returns:
    None.
	
  Example:
    <code>
    DRV_HANDLE handle;
    
    // If the Host has enabled the Remote Wakeup capability, and if the device
    // is in suspend mode, then start Remote Wakeup signaling.

    if(deviceIsSuspended && deviceRemoteWakeupEnabled)
    {   
        DRV_USBFS_DEVICE_RemoteWakeupStart(handle);
    }
    </code>
	
  Remarks:
    None.
*/

void DRV_USBFS_DEVICE_RemoteWakeupStart(DRV_HANDLE handle);

// ****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_RemoteWakeupStop(DRV_HANDLE handle);
  
  Summary:
    This function causes the device to stop the Remote Wakeup Signalling on the
    bus.
	
  Description:
    This function causes the device to stop Remote Wakeup Signalling on the bus.
    This function should be called after the DRV_USBFS_DEVICE_RemoteWakeupStart
    function was called to start the Remote Wakeup signaling on the bus.
	
  Precondition:
    The handle should be valid. The DRV_USBFS_DEVICE_RemoteWakeupStart function was
    called to start the Remote Wakeup signaling on the bus.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).
	
  Returns:
    None.
	
  Example:
    <code>
    DRV_HANDLE handle;
    
    // If the Host has enabled the Remote Wakeup capability, and if the device
    // is in suspend mode, then start Remote Wakeup signaling. Wait for 10
    // milliseconds and then stop the Remote Wakeup signaling

    if(deviceIsSuspended && deviceRemoteWakeupEnabled)
    {   
        DRV_USBFS_DEVICE_RemoteWakeupStart(handle);
        DelayMilliSeconds(10);
        DRV_USBFS_DEVICE_RemoteWakeupStop(handle);
    }
    </code>
	
  Remarks:
    This function should be 1 to 15 milliseconds after the
    DRV_USBFS_DEVICE_RemoteWakeupStart function was called.
*/

void DRV_USBFS_DEVICE_RemoteWakeupStop(DRV_HANDLE handle);

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines - Host Mode Operation
// *****************************************************************************
// *****************************************************************************

// ****************************************************************************
/* Function:
    void DRV_USBFS_HOST_IRPCancel(USB_HOST_IRP * inputIRP);
    
  Summary:
    Cancels the specified IRP.
	
  Description:
    This function attempts to cancel the specified IRP. If the IRP is queued and
    its processing has not started, it will be cancelled successfully. If the
    IRP in progress, the ongoing transaction will be allowed to complete. 
	
  Precondition:
    None.
	
  Parameters:
    inputIRP - Pointer to the IRP to cancel.
	
  Returns:
    None.
	
  Example:
    <code>

    // This code shows how a submitted IRP can be cancelled.

    USB_HOST_IRP irp;
    USB_ERROR result;
    USB_HOST_PIPE_HANDLE controlPipe;
    USB_SETUP_PACKET setup;
    uint8_t controlTransferData[32];

    irp.setup = setup;
    irp.data = controlTransferData;
    irp.size = 32;
    irp.flags = USB_HOST_IRP_FLAG_NONE ;
    irp.userData = &someApplicationObject;
    irp.callback = IRP_Callback;

    DRV_USBFS_HOST_IRPSubmit(controlPipeHandle, &irp);

    // Additional application logic may come here. This logic may decide to
    // cancel the submitted IRP.
    
    DRV_USBFS_HOST_IRPCancel(&irp);

    </code>
	
  Remarks:
    None.                                                                  
*/

void DRV_USBFS_HOST_IRPCancel(USB_HOST_IRP * inputIRP);

// ****************************************************************************
/* Function:
    void DRV_USBFS_HOST_PipeClose
    (
        DRV_USBFS_HOST_PIPE_HANDLE pipeHandle
    );
    
  Summary:
    Closes an open pipe.
	
  Description:
    This function closes an open pipe. Any IRPs scheduled on the pipe will be
    aborted and IRP callback functions will be called with the status as
    DRV_USB_HOST_IRP_STATE_ABORTED. The pipe handle will become invalid and the
    pipe will not accept IRPs.
	
  Precondition:
    The pipe handle should be valid.
	
  Parameters:
    pipeHandle - Handle to the pipe to close.
	
  Returns:
    None.
	
  Example:
    <code>
    // This code shows how an open Host pipe can be closed.
    
    DRV_HANDLE driverHandle;
    DRV_USBFS_HOST_PIPE_HANDLE pipeHandle;

    // Close the pipe.
    DRV_USBFS_HOST_PipeClose(pipeHandle);
    </code>
	
  Remarks:
    None.                                                                  
*/

void DRV_USBFS_HOST_PipeClose
(
    DRV_USBFS_HOST_PIPE_HANDLE pipeHandle
);

// ****************************************************************************
/* Function:
    bool DRV_USBFS_HOST_EventsDisable
    (
        DRV_HANDLE handle
    );
    
  Summary:
    Disables Host mode events.
	
  Description:
    This function disables the Host mode events. This function is called by the
    Host Layer when it wants to execute code atomically. 
	
  Precondition:
    The handle should be valid.
	
  Parameters:
    handle - Client's driver handle (returned from DRV_USBFS_Open function).
	
  Returns:
    * true - Driver event generation was enabled when this function was called.
    * false - Driver event generation was not enabled when this function was
      called. 
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_EventsDisable and
    // DRV_USBFS_HOST_EventsEnable function can be called to disable and enable
    // events.

    DRV_HANDLE driverHandle;
    bool eventsWereEnabled;

    // Disable the driver events.
    eventsWereEnabled = DRV_USBFS_HOST_EventsDisable(driverHandle);

    // Code in this region will not be interrupted by driver events.

    // Enable the driver events.
    DRV_USBFS_HOST_EventsEnable(driverHandle, eventsWereEnabled);

    </code>
	
  Remarks:
    None.
*/

bool DRV_USBFS_HOST_EventsDisable
(
    DRV_HANDLE handle
);

// ****************************************************************************
/* Function:
    void DRV_USBFS_HOST_EventsEnable
    (
        DRV_HANDLE handle
        bool eventRestoreContext
    );
    
  Summary:
    Restores the events to the specified the original value.
	
  Description:
    This function will restore the enable disable state of the events.  The
    eventRestoreContext parameter should be equal to the value returned by the
    DRV_USBFS_HOST_EventsDisable function.
	
  Precondition:
    The handle should be valid.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).
    eventRestoreContext - Value returned by the DRV_USBFS_HOST_EventsDisable
    function.
	
  Returns:
    None.
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_EventsDisable and
    // DRV_USBFS_HOST_EventsEnable function can be called to disable and enable
    // events.

    DRV_HANDLE driverHandle;
    bool eventsWereEnabled;

    // Disable the driver events.
    eventsWereEnabled = DRV_USBFS_HOST_EventsDisable(driverHandle);

    // Code in this region will not be interrupted by driver events.

    // Enable the driver events.
    DRV_USBFS_HOST_EventsEnable(driverHandle, eventsWereEnabled);

    </code>
	
  Remarks:
    None.
*/

void DRV_USBFS_HOST_EventsEnable
(
    DRV_HANDLE handle, 
    bool eventContext
);

// ****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_HOST_IRPSubmit
    (
        DRV_USBFS_HOST_PIPE_HANDLE  hPipe,
        USB_HOST_IRP * pInputIRP
    );
    
  Summary:
    Submits an IRP on a pipe.
	
  Description:
    This function submits an IRP on the specified pipe. The IRP will be added to
    the queue and will be processed in turn. The data will be transferred on the
    bus based on the USB bus scheduling rules. When the IRP has been processed,
    the callback function specified in the IRP will be called. The IRP status
    will be updated to reflect the completion status of the IRP. 
	
  Precondition:
    The pipe handle should be valid.
	
  Parameters:
    hPipe - Handle to the pipe to which the IRP has to be submitted.

    pInputIRP - Pointer to the IRP.
	
  Returns:
    * USB_ERROR_NONE - The IRP was submitted successfully.
    * USB_ERROR_PARAMETER_INVALID - The pipe handle is not valid.
    * USB_ERROR_OSAL_FUNCTION - An error occurred in an OSAL function called in
      this function.
	
  Example:
    <code>
    // The following code shows an example of how the host layer populates
    // the IRP object and then submits it. IRP_Callback function is called when an
    // IRP has completed processing. The status of the IRP at completion can be
    // checked in the status flag. The size field of the irp will contain the amount
    // of data transferred.  

    void IRP_Callback(USB_HOST_IRP * irp)
    {
        // irp is pointing to the IRP for which the callback has occurred. In most
        // cases this function will execute in an interrupt context. The application
        // should not perform any hardware access or interrupt un-safe operations in
        // this function. 

        switch(irp->status)
        {
            case USB_HOST_IRP_STATUS_ERROR_UNKNOWN:
                // IRP was terminated due to an unknown error 
                break;

            case USB_HOST_IRP_STATUS_ABORTED:
                // IRP was terminated by the application 
                break;

            case USB_HOST_IRP_STATUS_ERROR_BUS:
                // IRP was terminated due to a bus error 
                break;

            case USB_HOST_IRP_STATUS_ERROR_DATA:
                // IRP was terminated due to data error 
                break;

            case USB_HOST_IRP_STATUS_ERROR_NAK_TIMEOUT:
                // IRP was terminated because of a NAK timeout 
                break;

            case USB_HOST_IRP_STATUS_ERROR_STALL:
                // IRP was terminated because of a device sent a STALL 
                break;

            case USB_HOST_IRP_STATUS_COMPLETED:
                // IRP has been completed 
                break;

            case USB_HOST_IRP_STATUS_COMPLETED_SHORT:
                // IRP has been completed but the amount of data processed was less
                // than requested. 
                break;

            default:
                break;
        }
    }

    // In the following code snippet the a control transfer IRP is submitted to a
    // control pipe. The setup parameter of the IRP points to the Setup command of
    // the control transfer. The direction of the data stage is specified by the
    // Setup packet. 

    USB_HOST_IRP irp;
    USB_ERROR result;
    USB_HOST_PIPE_HANDLE controlPipe;
    USB_SETUP_PACKET setup;
    uint8_t controlTransferData[32];

    irp.setup = setup;
    irp.data = controlTransferData;
    irp.size = 32;
    irp.flags = USB_HOST_IRP_FLAG_NONE ;
    irp.userData = &someApplicationObject;
    irp.callback = IRP_Callback;

    result = DRV_USBFS_HOST_IRPSubmit(controlPipeHandle, &irp);

    </code>
	
  Remarks:
    An IRP can also be submitted in an IRP callback function.                                                                  
*/

USB_ERROR DRV_USBFS_HOST_IRPSubmit
(
    DRV_USBFS_HOST_PIPE_HANDLE  hPipe,
    USB_HOST_IRP * pinputIRP
);

// ****************************************************************************
/* Function:
    DRV_USBFS_HOST_PIPE_HANDLE DRV_USBFS_HOST_PipeSetup 
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
    
  Summary:
    Open a pipe with the specified attributes.
	
  Description:
    This function opens a communication pipe between the Host and the device
    endpoint. The transfer type and other attributes are specified through the
    function parameters. The driver does not check for available bus bandwidth,
    which should be done by the application (the USB Host Layer in this case)
	
  Precondition:
    The driver handle should be valid.
	
  Parameters:
    client - Handle to the driver (returned from DRV_USBFS_Open function).
    
    deviceAddress - USB Address of the device to connect to.
    
    endpoint - Endpoint on the device to connect to.
    
    hubAddress - Address of the hub to which this device is connected. If not
    connected to a hub, this value should be set to 0. 

    hubPort - Port number of the hub to which this device is connected.

    pipeType - Transfer type of the pipe to open.
    
    bInterval - Polling interval for periodic transfers. This should be
    specified as defined by the USB 2.0 Specification.

    wMaxPacketSize - This should be set to the endpoint size reported by the
    device in its configuration descriptors. This defines the maximum size of
    the transaction in a transfer on this pipe.

    speed - The speed of the pipe. This should match the speed at which the
    device connected to the Host.

  Returns:
    * DRV_USB_HOST_PIPE_HANDLE_INVALID - The pipe could not be created.
    * A valid Pipe Handle - The pipe was created successfully. This is an
      arbitrary value and will never be the same as
      DRV_USB_HOST_PIPE_HANDLE_INVALID.
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_PipeSetup function is called for
    // create a communication pipe. In this example, Bulk pipe is created
    // between the Host and a device. The Device address is 2 and the target
    // endpoint on this device is 4 . The direction of the data transfer over
    // this pipe is from the Host to the device. The device is connected to Port
    // 1 of a Hub, whose USB address is 3. The maximum size of a transaction
    // on this pipe is 64 bytes. This is a Bulk Pipe and hence the bInterval
    // field is set to 0. The target device is operating at Full Speed.

    DRV_HANDLE driverHandle;
    DRV_USBFS_HOST_PIPE_HANDLE pipeHandle;

    pipeHandle = DRV_USBFS_HOST_PipeSetup(driverHandle, 0x02, 0x14, 0x03, 0x01, USB_TRANSFER_TYPE_BULK, 0, 64, USB_SPEED_FULL); 

    if(pipeHandle != DRV_USBFS_HOST_PIPE_HANDLE_INVALID)
    {
        // The pipe was created successfully.
    }

    </code>
	
  Remarks:
    None.                                                                  
*/

DRV_USBFS_HOST_PIPE_HANDLE DRV_USBFS_HOST_PipeSetup 
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

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines - Root Hub
// *****************************************************************************
// *****************************************************************************

// ****************************************************************************
/* Function:
    void DRV_USBFS_ROOT_HUB_PortReset(DRV_HANDLE handle, uint8_t port );
    
  Summary:
    Resets the specified root hub port.
	
  Description:
    This function resets the root hub port. The reset duration is defined by
    DRV_USBFS_ROOT_HUB_RESET_DURATION. The status of the reset signaling can be
    checked using the DRV_USBFS_ROOT_HUB_PortResetIsComplete function.
	
  Precondition:
    None.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

    port - Port to reset.
	
  Returns:
    None.
	
  Example:
    <code>
    // This code shows how the DRV_USB_HOST_ROOT_HUB_PortReset and the
    // DRV_USBFS_ROOT_HUB_PortResetIsComplete functions are called to complete a
    // port reset sequence.

    DRV_HANDLE driverHandle;

    // Reset Port 0.
    DRV_USB_HOST_ROOT_HUB_PortReset(driverHandle, 0);

    // Check if the Reset operation has completed.
    if(DRV_USBFS_ROOT_HUB_PortResetIsComplete(driverHandle, 0) == false)
    {
        // This means that the Port Reset operation has not completed yet. The
        // DRV_USBFS_ROOT_HUB_PortResetIsComplete function should be called
        // again after some time to check the status.
    }

    </code>
	
  Remarks:
    The root hub on the PIC32MZ USB controller contains only one port - port 0.                                                                  
*/

USB_ERROR DRV_USBFS_HOST_ROOT_HUB_PortReset(DRV_HANDLE handle, uint8_t port );

// ****************************************************************************
/* Function:
    bool DRV_USBFS_ROOT_HUB_PortResetIsComplete
    (
        DRV_HANDLE handle,
        uint8_t port
    );

  Summary:
    Returns true if the root hub has completed the port reset operation.

  Description:
    This function returns true if the port reset operation has completed. It
    should be called after the DRV_USB_HOST_ROOT_HUB_PortReset function to
    check if the reset operation has completed.

  Precondition:
    None.

  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

    port - Port to check

  Returns:
    * true - The reset signaling has completed.
    * false - The reset signaling has not completed.

  Example:
    <code>
    // This code shows how the DRV_USB_HOST_ROOT_HUB_PortReset and the
    // DRV_USBFS_ROOT_HUB_PortResetIsComplete functions are called to complete a
    // port reset sequence.

    DRV_HANDLE driverHandle;

    // Reset Port 0.
    DRV_USB_HOST_ROOT_HUB_PortReset(driverHandle, 0);

    // Check if the Reset operation has completed.
    if(DRV_USBFS_ROOT_HUB_PortResetIsComplete(driverHandle, 0) == false)
    {
        // This means that the Port Reset operation has not completed yet. The
        // DRV_USBFS_ROOT_HUB_PortResetIsComplete function should be called
        // again after some time to check the status.
    }

    </code>

  Remarks:
    The root hub on this particular hardware only contains one port - port 0.
*/

bool DRV_USBFS_HOST_ROOT_HUB_PortResetIsComplete(DRV_HANDLE handle, uint8_t port );

// ****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_HOST_ROOT_HUB_PortResume
    (
        DRV_HANDLE handle, 
        uint8_t port
    );
    
  Summary:
    Resumes the specified root hub port.
	
  Description:
    This function resumes the root hub. The resume duration is defined by
    DRV_USBFS_ROOT_HUB_RESUME_DURATION. The status of the resume signaling can
    be checked using the DRV_USBFS_ROOT_HUB_PortResumeIsComplete function.
	
  Precondition:
    None.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

    port - Port to resume.
	
  Returns:
    * USB_ERROR_NONE - The function executed successfully.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is not valid or the port
      number does not exist.
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_PortResume function is
    // called to resume the specified port.

    DRV_HANDLE driverHandle;

    // Resume Port 0.
    DRV_USBFS_HOST_ROOT_HUB_PortResume(driverHandle, 0);

    </code>
	
  Remarks:
    The root hub on this particular hardware only contains one port - port 0.                                                                  
*/

USB_ERROR DRV_USBFS_HOST_ROOT_HUB_PortResume(DRV_HANDLE handle, uint8_t port);

// ****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_ROOT_HUB_PortSuspend(DRV_HANDLE handle, uint8_t port);
    
  Summary:
    Suspends the specified root hub port.
	
  Description:
    This function suspends the root hub port. 
	
  Precondition:
    None.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

    port - Port to suspend.
	
  Returns:
    * USB_ERROR_NONE - The function executed successfully.
    * USB_ERROR_PARAMETER_INVALID - The driver handle is not valid or the port
      number does not exist.
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_PortSuspend function is
    // called to suspend the specified port.

    DRV_HANDLE driverHandle;

    // Suspend Port 0.
    DRV_USBFS_HOST_ROOT_HUB_PortSuspend(driverHandle, 0);

    </code>
	
  Remarks:
    The root hub on this particular hardware only contains one port - port 0.                                                                  
*/

USB_ERROR DRV_USBFS_HOST_ROOT_HUB_PortSuspend(DRV_HANDLE handle, uint8_t port);

// ****************************************************************************
/* Function:
    USB_SPEED DRV_USBFS_HOST_ROOT_HUB_PortSpeedGet
    (
        DRV_HANDLE handle, 
        uint8_t port
    );
    
  Summary:
    Returns the speed of at which the port is operating.
	
  Description:
    This function returns the speed at which the port is operating.
	
  Precondition:
    None.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

    port - Port number of the port to be analyzed..
	
  Returns:
    * USB_SPEED_ERROR - This value is returned  if the driver handle is not
      or if the speed information is not available or if the specified port is
      not valid.
    * USB_SPEED_FULL - A Full Speed device has been connected to the port.
    * USB_SPEED_LOW - A Low Speed device has been connected to the port.
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_PortSpeedGet function is
    // called to know the operating speed of the port. This also indicates the
    // operating speed of the device connected to this port.

    DRV_HANDLE driverHandle;
    USB_SPEED speed;

    speed = DRV_USBFS_HOST_ROOT_HUB_PortSpeedGet(driverHandle, 0);

    </code>
	
  Remarks:
    The root hub on this particular hardware only contains one port - port 0.                                                                  
*/

USB_SPEED DRV_USBFS_HOST_ROOT_HUB_PortSpeedGet(DRV_HANDLE handle, uint8_t port);

// ****************************************************************************
/* Function:
    USB_SPEED DRV_USBFS_HOST_ROOT_HUB_BusSpeedGet(DRV_HANDLE handle);
    
  Summary:
    This function returns the operating speed of the bus to which this root hub
    is connected.
	
  Description:
    This function returns the operating speed of the bus to which this root hub
    is connected.
 
  Precondition:
    None.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

  Returns:
    * USB_SPEED_FULL - The Root hub is connected to a bus that is operating at
      Full Speed.
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_BusSpeedGet function is
    // called to know the operating speed of the bus to which this Root hub is
    // connected.

    DRV_HANDLE driverHandle;
    USB_SPEED speed;

    speed = DRV_USBFS_HOST_ROOT_HUB_BusSpeedGet(driverHandle);
    </code>
	
  Remarks:
    None.
*/

USB_SPEED DRV_USBFS_HOST_ROOT_HUB_BusSpeedGet(DRV_HANDLE handle);

// ****************************************************************************
/* Function:
    uint32_t DRV_USBFS_HOST_ROOT_HUB_MaximumCurrentGet(DRV_HANDLE);
    
  Summary:
    Returns the maximum amount of current that this root hub can provide on the
    bus.
	
  Description:
    This function returns the maximum amount of current that this root hub can
    provide on the bus.
	
  Precondition:
    None.
	
  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

  Returns:
    Returns the maximum current (in milliamperes) that the root hub can supply. 
	
  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_MaximumCurrentGet
    // function is called to obtain the maximum VBUS current that the Root hub
    // can supply.

    DRV_HANDLE driverHandle;
    uint32_t currentMilliAmperes;

    currentMilliAmperes = DRV_USBFS_HOST_ROOT_HUB_MaximumCurrentGet(driverHandle);
    </code>
	
  Remarks:
    None.
*/

uint32_t DRV_USBFS_HOST_ROOT_HUB_MaximumCurrentGet(DRV_HANDLE handle);

// ****************************************************************************
/* Function:
    uint8_t DRV_USBFS_HOST_ROOT_HUB_PortNumbersGet(DRV_HANDLE handle);

  Summary:
    Returns the number of ports this root hub contains.

  Description:
    This function returns the number of ports that this root hub contains.

  Precondition:
    None.

  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

  Returns:
    This function will always return 1.

  Example:
    <code>
    // This code shows how DRV_USBFS_HOST_ROOT_HUB_PortNumbersGet function can
    // be called to obtain the number of Root hub ports.

    DRV_HANDLE driverHandle;
    uint8_t nPorts;

    nPorts = DRV_USBFS_HOST_ROOT_HUB_PortNumbersGet(driverHandle);

    </code>

  Remarks:
    None.
*/

uint8_t DRV_USBFS_HOST_ROOT_HUB_PortNumbersGet(DRV_HANDLE handle);

// ****************************************************************************
/* Function:
    void DRV_USBFS_HOST_ROOT_HUB_OperationEnable
    (
        DRV_HANDLE handle, 
        bool enable
    );

  Summary:
    This function enables or disables root hub operation.

  Description:
    This function enables or disables root hub operation. When enabled, the root
    hub will detect devices attached to the port and will request the Host Layer
    to enumerate the device. This function is called by the Host Layer when it
    is ready to receive enumeration requests from the Host. If the operation is
    disabled, the root hub will not detect attached devices.

  Precondition:
    None.

  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

    enable - If this is set to true, root hub operation is enabled. If this is
    set to false, root hub operation is disabled.

  Returns:
    None.

  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_OperationEnable and the
    // DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled functions are called to enable
    // the Root hub operation.

    DRV_HANDLE driverHandle;

    // Enable Root hub operation.
    DRV_USBFS_HOST_ROOT_HUB_OperationEnable(driverHandle);

    // Wait till the Root hub operation is enabled.  
    if(DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled(driverHandle) == false)
    {
        // The operation has not completed. Call the
        // DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled function again to check if
        // the operation has completed. Note that the DRV_USBFS_Tasks function
        // must be allowed to run at periodic intervals to allow the enable
        // operation to completed.
    }
    </code>

  Remarks:
    None.
*/

void DRV_USBFS_HOST_ROOT_HUB_OperationEnable(DRV_HANDLE handle, bool enable);

// ****************************************************************************
/* Function:
    bool DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled(DRV_HANDLE handle);

  Summary:
    Returns the operation enabled status of the root hub.

  Description:
    This function returns true if the DRV_USBFS_HOST_ROOT_HUB_OperationEnable
    function has completed enabling the Host.

  Precondition:
    None.

  Parameters:
    handle - Handle to the driver (returned from DRV_USBFS_Open function).

  Returns:
    * true - Root hub operation is enabled.
    * false - Root hub operation is not enabled.

  Example:
    <code>
    // This code shows how the DRV_USBFS_HOST_ROOT_HUB_OperationEnable and the
    // DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled functions are called to enable
    // the Root hub operation.

    DRV_HANDLE driverHandle;

    // Enable Root hub operation.
    DRV_USBFS_HOST_ROOT_HUB_OperationEnable(driverHandle);

    // Wait till the Root hub operation is enabled.  
    if(DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled(driverHandle) == false)
    {
        // The operation has not completed. Call the
        // DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled function again to check if
        // the operation has completed. Note that the DRV_USBFS_Tasks function
        // must be allowed to run at periodic intervals to allow the enable
        // operation to completed.
    }

    </code>

  Remarks:
    None.
*/

bool DRV_USBFS_HOST_ROOT_HUB_OperationIsEnabled(DRV_HANDLE handle);

// ****************************************************************************
/* Function:
    void DRV_USBFS_HOST_ROOT_HUB_Initialize
    (
        DRV_HANDLE handle,
        USB_HOST_DEVICE_OBJ_HANDLE usbHostDeviceInfo,
    )

  Summary:
    This function initializes the root hub driver.

  Description:
    This function initializes the root hub driver. It is called by the Host
    Layer at the time of processing the root hub devices. The Host Layer assigns a
    USB_HOST_DEVICE_INFO reference to this root hub driver. This identifies the
    relationship between the root hub and the Host Layer.

  Precondition:
    None.

  Parameters:
    handle - Handle to the driver.
    usbHostDeviceInfo - Reference provided by the Host.

  Returns:
    None.

  Example:
    <code>

    // This code shows how the USB Host Layer calls the
    // DRV_USBFS_HOST_ROOT_HUB_Initialize function. The usbHostDeviceInfo
    // parameter is an arbitrary identifier assigned by the USB Host Layer. Its
    // interpretation is opaque to the Root hub Driver.

    DRV_HANDLE drvHandle;
    USB_HOST_DEVICE_OBJ_HANDLE usbHostDeviceInfo = 0x10003000;

    DRV_USBFS_HOST_ROOT_HUB_Initialize(drvHandle, usbHostDeviceInfo);

    </code>

  Remarks:
    None.
*/

void DRV_USBFS_HOST_ROOT_HUB_Initialize
(
    DRV_HANDLE handle,
    USB_HOST_DEVICE_OBJ_HANDLE usbHostDeviceInfo
);


// ****************************************************************************
/* Function:
    void DRV_USBFS_HOST_EndpointToggleClear
    (
        DRV_USBFS_HOST_PIPE_HANDLE pipeHandle
    )

  Summary:
    Facilitates in resetting of endpoint data toggle to 0 for Non Control
    endpoints.

  Description:
    Facilitates in resetting of endpoint data toggle to 0 for Non Control
    endpoints.
	
  Precondition:
    None.

  Parameters:
    pipeHandle - Handle to the pipe that connects to the device endpoint
    whose data toggle needs to be cleared.

  Example:
    <code>

    // This code shows how the USB Host Layer calls the
    // DRV_USBFS_HOST_EndpointToggleClear function. 

    DRV_USBFS_HOST_PIPE_HANDLE pipeHandle ;

    DRV_USBFS_HOST_EndpointToggleClear(pipeHandle);

    </code>

  Remarks:
    None.
*/

void DRV_USBFS_HOST_EndpointToggleClear
(
    DRV_USBFS_HOST_PIPE_HANDLE pipeHandle
);

// *****************************************************************************
// *****************************************************************************
// Section: Included Files (continued)
// *****************************************************************************
// *****************************************************************************
/*  The file included below maps the interface definitions above to appropriate
    static implementations, depending on build mode.
*/

#include "driver/usb/usbfs/src/drv_usbfs_variant_mapping.h"

#endif
