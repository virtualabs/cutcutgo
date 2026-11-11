/********************************************************************************
  USB Host Layer Interface Definition

  Company:
    Microchip Technology Inc.

  File Name:
    usb_host.h

  Summary:
    USB Host Layer Interface Header

  Description:
    This header file contains the function prototypes and definitions of the
    data types and constants that make up the interface to the USB HOST layer.
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
#ifndef _USB_HOST_H_
#define _USB_HOST_H_


//DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************

#include "usb/usb_chapter_9.h"
#include "usb/usb_common.h"
#include "system/system_module.h"
#include <stddef.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* USB Bus Data Type

  Summary:
    Defines a USB Bus Data Type.

  Description:
    This data type defines a USB Bus. In microcontroller devices, that may have
    multiple USB peripherals, this type identifies the USB bus associated with
    each peripheral. Bus numbers start from 0 and counts up to include all the
    busses in the system. The total number of busses and the mapping between a
    bus and the USB controller is specified in the Host Layer initialization
    data structure.

  Remarks:
    None.
*/

typedef uint8_t USB_HOST_BUS;

// *****************************************************************************
/* USB Host Device Object Handle

  Summary:
    Handle to an attached USB Device.

  Description:
    This data type defines the type of handle to an attached USB Device. This
    handle uniquely identifies the attached device. A handle of this type is
    returned in the deviceObjHandle member of the USB_HOST_DEVICE_INFO structure
    when the USB_HOST_DeviceGetFirst() and the USB_HOST_DeviceGetNext()
    functions are called.

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_DEVICE_OBJ_HANDLE;

// *****************************************************************************
/* USB Host Invalid Device Object Handle

  Summary:
    Defines an invalid USB Device Object Handle.

  Description:
    This constant defines an invalid USB Device Object Handle.  The
    USB_HOST_DeviceGetFirst() and the USB_HOST_DeviceGetNext() functions return
    this value in the deviceObjHandle member of the USB_HOST_DEVICE_INFO object
    when there are no attached devices to report. 

  Remarks:
    None.
*/

#define USB_HOST_DEVICE_OBJ_HANDLE_INVALID ((USB_HOST_DEVICE_OBJ_HANDLE)(-1))

// *****************************************************************************
/* USB Host Device Info Type

  Summary:
    Defines the data type that is used by the USB_HOST_DeviceGetFirst()
    and USB_HOST_DeviceGetNext() functions.

  Description:
    This data type defines the type of data that is used by the
    USB_HOST_DeviceGetFirst() and USB_HOST_DeviceGetNext() functions. The
    application must provide an object of this type to these functions to obtain
    information about the devices attached on the USB.

  Remarks:
    The application must only instantiate this data structure and should not
    modify it's contents. Multiple objects can be instantiated and used.
*/

typedef struct
{
    /* USB Host Device Object Handle */
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle;
   
    /* Address of the device on the USB */
    uint8_t deviceAddress;

    /* The bus to which this device is connected */
    USB_HOST_BUS bus;

} USB_HOST_DEVICE_INFO;

// *****************************************************************************
/* USB Host Device String Type

  Summary:
    Defines a defines types of strings that can be request through the
    USB_HOST_DeviceStringDescriptorGet() function.

  Description:
    This type defines the types of strings that can be request through the
    USB_HOST_DeviceStringDescriptorGet() function. The stringType parameter in
    the function call can be set any one of these types.

  Remarks:
    None.
*/

typedef enum
{
    /* Specifies the language ID string */
    USB_HOST_DEVICE_STRING_LANG_ID  = 0,

    /* Specifies the manufacturer string */
    USB_HOST_DEVICE_STRING_MANUFACTURER,

    /* Specifies the product string */
    USB_HOST_DEVICE_STRING_PRODUCT,

    /* Specifies the serial number string */
    USB_HOST_DEVICE_STRING_SERIAL_NUMBER

} USB_HOST_DEVICE_STRING;

// *****************************************************************************
/* USB Host Device String Default Lang ID

  Summary:
    Defines the default Lang ID to be used while obtaining the string.

  Description:
    This constant defines the default Lang ID. When then languageID parameter in
    the USB_HOST_DeviceStringDescriptorGet() function is set to this value, the
    function will specify the default Lang ID while requesting the string
    from the device.

  Remarks:
    None.
*/

#define USB_HOST_DEVICE_STRING_LANG_ID_DEFAULT (0)

// *****************************************************************************
/* USB Host Bus All

  Summary:
    USB Host Bus All

  Description:
    This constant defines the value that should be passed to the
    USB_HOST_BusSuspend(), USB_HOST_BusResume() and USB_HOST_IsBusSuspended()
    function if all the USB segments must be addressed. Passing this constant to
    these functions will cause Suspend and Resume operation to affect all the
    USB segments and hence affect all connected devices.

  Remarks:
    None.
*/

#define USB_HOST_BUS_ALL ((USB_HOST_BUS)(0xFF))

// *****************************************************************************
/* USB Host Request Handle Type

  Summary:
    USB Host Request Handle Type

  Description:
    This type defines the USB Host Request Handle. This type of handle is
    returned by the USB_HOST_DeviceStringDescriptorGet() function. Each request
    will generate a unique handle. This handle will be returned in the event
    associated with the completion of the string descriptor request.

  Remarks:
    None.
*/

typedef uintptr_t USB_HOST_REQUEST_HANDLE;

// *****************************************************************************
/* USB Host Request Invalid Handle

  Summary:
    USB Host Request Invalid Handle

  Description:
    This constant defines an Invalid USB Host Request Handle. This handle is
    returned by the USB_HOST_DeviceStringDescriptorGet() function when the
    request was not accepted.

  Remarks:
    None.
*/

#define USB_HOST_REQUEST_HANDLE_INVALID ((USB_HOST_REQUEST_HANDLE)(-1))

// *****************************************************************************
/* USB Host Layer TPL Table Entry Matching Criteria flag

  Summary:
    USB Host Layer TPL Table Entry Matching Criteria flag

  Description:
    This enumeration defines the possible matching criteria flag that can be
    specified for a Host TPL table entry. The tplFlag member of the TPL table
    entry should be set to one or more of these flags. These flags define the
    criteria that the Host layer will use while matching the attached device to
    the TPL table entry. For example, if a device is specified by class,
    subclass and protocol specifying the TPL_FLAG_IGNORE_SUBCLASS flag will
    cause the Host layer to ignore the subclass while comparing the class,
    subclass and protocol of the attached device.  
    
    Multiple flags can be specified as a logically OR'ed combination. While
    combining multiple flags, VID and PID criteria flags cannot be combined with
    the Class, Subclass, Protocol flags. For example, the TPL_FLAG_VID_PID
    flag cannot be combined with TPL_FLAG_IGNORE_SUBCLASS.

  Remarks:
    None.
*/

typedef enum
{
    /* Match by VID and PID. This flag can be used when the device member of the
       TPL table entry is a VID and PID entry type. */
    TPL_FLAG_VID_PID = /*DOM-IGNORE-BEGIN*/ (1<<0) /*DOM-IGNORE-END*/,

    /* Match by Class, Subclass and Protocol. This flag can be used when the
       device member of the TPL table entry is a Class, Subclass, Protocol entry
       type */
    TPL_FLAG_CLASS_SUBCLASS_PROTOCOL = /*DOM-IGNORE-BEGIN*/(0<<0)/*DOM-IGNORE-END*/,

    /* Ignore Class, only consider subclass and protocol. This flag can be used
       when the device member of the TPL table entry is a Class, Subclass,
       Protocol entry type */
    TPL_FLAG_IGNORE_CLASS = /*DOM-IGNORE-BEGIN*/(1<<1)/*DOM-IGNORE-END*/,

    /* Ignore Subclass, consider only class and protocol. This flag can be used
       when the device member of the TPL entry is a Class, Subclass or Protocol
       entry type. */
    TPL_FLAG_IGNORE_SUBCLASS = /*DOM-IGNORE-BEGIN*/(1<<2)/*DOM-IGNORE-END*/,

    /* Ignore protocol, consider only class and subclass. This flag can be used
       when the device member of the TPL entry is a Class, Subclass or Protocol
       entry type. */
    TPL_FLAG_IGNORE_PROTOCOL = /*DOM-IGNORE-BEGIN*/(1<<3)/*DOM-IGNORE-END*/,

    /* Mask the specified bits in the device PID and then match it against the
       PID in the TPL table. The bits to be masked is specified in the pidMask
       member of the TPL table entry. The 0 bits in the PID mask indicate the
       bits to ignored while comparing the device PID to the PID specified in
       the TPL.  See USB_HOST_TARGET_PERIPHERAL_LIST description for examples.
       This flag can be used when the device member of the TPL table entry is a
       VID and PID entry type. */
    TPL_FLAG_PID_MASKED = /*DOM-IGNORE-BEGIN*/(1<<4)/*DOM-IGNORE-END*/,

    /* Ignore the VID and PID while matching a device based on VID and PID. */
    TPL_FLAG_IGNORE_VID_PID = /*DOM-IGNORE-BEGIN*/(1<<5)/*DOM-IGNORE-END*/,    

} USB_HOST_TPL_FLAGS;

// *****************************************************************************
/* USB Host TPL Class Subclass Protocol entry

  Summary:
    Attach client driver to interface based on Class, Subclass and Protocol.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver to an interface when the class, subclass and protocol code 
    match the parameters specified in the entry. 

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_INTERFACE_CLASS_SUBCLASS_PROTOCOL(classCode, subClassCode, protocolCode, initData, driver)\
{\
    .id.cl_sc_p = { classCode, subClassCode, protocolCode },\
    .pidMask = 0xFFFF,\
    .tplFlags.driverType = (TPL_FLAG_CLASS_SUBCLASS_PROTOCOL),\
    .tplFlags.ignoreClass = false,\
    .tplFlags.ignoreSubClass = false,\
    .tplFlags.ignoreProtocol = false,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host TPL Class Subclass entry

  Summary:
    Attach client driver based on Class and Subclass only.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver when the class, subclass match the parameters specified in the
    entry. The protocol code field is ignored. 

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_INTERFACE_CLASS_SUBCLASS(classCode, subClassCode, initData, driver)\
{\
    .id.cl_sc_p = { classCode, subClassCode, 0xFF },\
    .pidMask = 0xFFFF,\
    .tplFlags.driverType = (TPL_FLAG_CLASS_SUBCLASS_PROTOCOL),\
    .tplFlags.ignoreClass = false,\
    .tplFlags.ignoreSubClass = false,\
    .tplFlags.ignoreProtocol = true,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host TPL Class entry

  Summary:
    Attach client driver based on Class only.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver  when the class matches the parameter specified in the entry.
    The subclass and the protocol code field are ignored. 

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_INTERFACE_CLASS(classCode, initData, driver)\
{\
    .id.cl_sc_p = { classCode, 0xFF, 0xFF },\
    .pidMask = 0xFFFF,\
    .tplFlags.driverType = (TPL_FLAG_CLASS_SUBCLASS_PROTOCOL),\
    .tplFlags.ignoreClass = false,\
    .tplFlags.ignoreSubClass = true,\
    .tplFlags.ignoreProtocol = true,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host TPL Interface All entry

  Summary:
    Attach client driver to all interfaces.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver while ignoring the class, subclass and protocol fields.

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_INTERFACE_ANY(initData, driver)\
{\
    .id.cl_sc_p = { 0xFF, 0xFF, 0xFF },\
    .pidMask = 0xFFFF,\
    .tplFlags.driverType = (TPL_FLAG_CLASS_SUBCLASS_PROTOCOL),\
    .tplFlags.ignoreClass = true,\
    .tplFlags.ignoreSubClass = true,\
    .tplFlags.ignoreProtocol = true,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host TPL VID PID Entry

  Summary:
    Attach client driver to interface based on VID and PID.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver to an device when the VID and PID  of the device match the
    parameters specified in the entry. 

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_DEVICE_VID_PID(vid, pid, initData, driver)\
{\
    .id.vid_pid = { vid, pid },\
    .pidMask = 0xFFFF,\
    .tplFlags.driverType = (TPL_FLAG_VID_PID),\
    .tplFlags.pidMasked = 0,\
    .tplFlags.ignoreVIDPID = 0,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host TPL VID with masked PID Entry

  Summary:
    Attach client driver to interface based on VID and and a masked PID.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver to an device when the VID and PID  of the device (after the
    specified PID mask is applied) match the parameters specified in the entry. 

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_DEVICE_VID_PID_MASKED(vid, pid, mask, initData, driver)\
{\
    .id.vid_pid = { vid, pid },\
    .pidMask = mask,\
    .tplFlags.driverType = (TPL_FLAG_VID_PID),\
    .tplFlags.pidMasked = 1,\
    .tplFlags.ignoreVIDPID = 0,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host TPL Device All entry

  Summary:
    Attach client driver to all devices.

  Description:
    This macro allows the application to specify a TPL table entry to attach a
    client driver to any device. The VID and PID fields of the device are
    ignored. 

  Remarks:
    This is a helper macro only. It sets up the TPL entry fields to implement
    the specified matching criteria.
*/

#define TPL_DEVICE_ANY(initData, driver)\
{\
    .id.vid_pid = { 0xFFFF, 0xFFFF },\
    .pidMask = 0x0000,\
    .tplFlags.driverType = (TPL_FLAG_VID_PID),\
    .tplFlags.pidMasked = 1,\
    .tplFlags.ignoreVIDPID = 1,\
    .hostClientDriverInitData = initData,\
    .hostClientDriver = driver\
}

// *****************************************************************************
/* USB Host Layer Target Peripheral List Entry Type

  Summary:
    Defines the structure of an USB Host Layer Target Peripheral List (TPL)
    Table entry.

  Description:
    This data type defines the structure of a USB Host Layer TPL Table entry.
    The TPL table may contain multiple such entries. The TPL table thus
    provisions the host client driver support and identifies the ranges of USB
    devices and device classes to be supported by the host layer. 

    <code>

    // This code snippet shows some examples of configuring the USB Host Layer
    // TPL Table. In this example, the USB Host layer is configured to support
    // 3 different types of devices.

    USB_HOST_TARGET_PERIPHERAL_LIST usbHostTPL[4] = 
    {

        // Catch every device with the exact Vendor ID = 0x04D8 and Product ID = 0x0001.
        // Every other device will not load this driver.
        TPL_DEVICE_VID_PID( 0x04D8, 0x0001, &driverInitData, &DEVICE_DRIVER_EXAMPLE1_Driver ),

        // This driver will catch any device with the Vendor ID of 0x04D8 and any
        // product ID = 0x0000 or 0x0002-0x00FF.  The entry in the TPL before this
        // caught the Product ID = 0x0001 case so that is why it is not caught by
        // this entry.  Those devices have already been caught.
        TPL_DEVICE_VID_PID_MASKED( 0x04D8, 0x0002, 0xFF00, &driverInitData, &DEVICE_DRIVER_EXAMPLE2_Driver ),

        // This entry will catch all other devices. 
        TPL_DEVICE_ANY( &driverInitData, &DEVICE_DRIVER_EXAMPLE3_Driver ),

        // This entry will catch only a HID boot keyboard.  All other devices,
        // including other HID keyboards that are non-boot, will be skipped by this
        // entry. This driver will handle only this specific case.
        TPL_INTERFACE_CLASS_SUBCLASS_PROTOCOL( USB_HID_CLASS_CODE, USB_HID_SUBCLASS_CODE_BOOT_INTERFACE, USB_HID_PROTOCOL_CODE_KEYBOARD, &hidDriverInitData, USB_HOST_HID_BOOT_KEYBOARD_DRIVER ),

        // This entry will catch all CDC-ACM devices.  It filters on the class and
        // subclass but ignores the protocol since the driver will handle all
        // possible protocol options. 
        TPL_INTERFACE_CLASS_SUBCLASS( USB_CDC_CLASS_CODE, USB_CDC_SUBCLASS_CODE_ABSTRACT_CONTROL_MODEL, &cdcDriverInitData, USB_HOST_CDC_ACM_DRIVER ),

        // This will catch all instances of the MSD class regardless subclass or
        // protocol.  In this case the driver will sort out if it supports the
        // device or not. 
        TPL_INTERFACE_CLASS( USB_MSD_CLASS_CODE, &msdDriverInitData, USB_HOST_MSD_DRIVER ),

        // Any unclaimed interfaces can be sent to a particular driver if desired.
        // This can be used to create a similar mechanism that libUSB or WinUSB
        // provides on a PC where any unused interface can be opened and utilized by
        // these drivers. 
        TPL_INTERFACE_ANY( &driverInitData, USB_HOST_VENDOR_DRIVER )
    }

    </code>

  Remarks:
    While the members of the USB_HOST_TPL_ENTRY structure can be accessed
    directly to create a TPL entry, using the TPL help macros to setup TPL
    entries (as shown in the code snippet) is recommended
*/

typedef struct
{
    /* VID and PID or the Class, Subclass and Protocol */
    union
    {
        uint32_t value;
        struct
        {
            /* Device Vendor ID to be matched */
            uint16_t vid;
            /* Device Product ID to be matched */
            uint16_t pid;
        } vid_pid;
        struct
        {
            /* Device class to be matched */
            uint8_t classCode;
            /* Device sub-class to be matched */
            uint8_t subClassCode;
            /* Device protocol to be matched */
            uint8_t protocolCode;
        } cl_sc_p;

    } id;

    /* PID mask to be applied to the PID. This is applicable only if the
       matching criteria is specified as VID, PID and the TPL_FLAG_PID_MASK is
       specified. */
    uint16_t pidMask;
    
    /* TPL Flag for this entry */
    struct
    {
        /* selected via TPL_FLAG_VID_PID or TPL_FLAG_CLASS_SUBCLASS_PROTOCOL. */
        uint8_t driverType :1;
        uint8_t ignoreClass :1;
        uint8_t ignoreSubClass :1;
        uint8_t ignoreProtocol :1;
        uint8_t pidMasked :1;
        uint8_t ignoreVIDPID :1;
    } tplFlags;

    /* Initialization data to be passed to the client driver */
    void * hostClientDriverInitData;
    
    /* Interface to the USB Host Client driver for this device type */
    void * hostClientDriver;
}
USB_HOST_TARGET_PERIPHERAL_LIST_ENTRY,
USB_HOST_TPL_ENTRY;

// *****************************************************************************
/* USB Host Controller Driver Information
  
  Summary:
    Defines the USB Host HCD Information object that is provided to the host
    layer.

  Description:
    This data type defines the data required to connect a Host Controller Driver
    to the host layer. The USB Host layer used the HCD routines to access the
    root hub and the USB.

  Remarks:
    This data structure is specific to the PIC32 implementation of the USB
    Host layer.
*/

typedef struct
{
    /* Index of the USB Host Controller driver that the host layer should open
       and use. */
    SYS_MODULE_INDEX drvIndex;

    /* USB Host Controller Driver function pointers */
    void * hcdInterface;

} USB_HOST_HCD;

// *****************************************************************************
/* USB Host Initialization Data Structure

  Summary:
    Defines the data required to initialize a USB Host Layer instance.

  Description:
    This data type defines the data required to initialize the host layer. A
    pointer to a structure of this type is required by the USB_HOST_Initialize()
    function.  

  Remarks:
    This data structure is specific to the PIC32MX and PIC32WK implementation of the USB
    Host layer.
*/

typedef struct
{
    /* Size of the TPL table */
    size_t nTPLEntries;

    /* Pointer to the TPL table for this host layer implementation. */
    USB_HOST_TPL_ENTRY * tplList;

    /* This is a pointer to a table of host controller drivers that the host
       layer will operate on. The number of entries in this table is specified
       via the USB_HOST_CONTROLLERS_NUMBER configuration macro in
       system_config.h */
    USB_HOST_HCD * hostControllerDrivers;

} USB_HOST_INIT;

// *****************************************************************************
/* USB Host Events

  Summary:
    Defines the different events that the USB Host Layer can generate.

  Description:
    This data type defines the different events that USB Host Layer can
    generate. The application is intended recipient of these events. Some events
    return event related data. The application must register an event handler
    with the host layer (via the USB_HOST_EventHandlerSet() function) before
    enabling any of the buses.

  Remarks:
    None.
*/

typedef enum
{
    /* This event occurs when device needs more current than what the host can
       supply.*/ 
    USB_HOST_EVENT_DEVICE_REJECTED_INSUFFICIENT_POWER,

    /* This event occurs when a host layer could not attach any drivers to the
       attached device or when an error has occurred. There is no event data
       associated with this event. */
    USB_HOST_EVENT_DEVICE_UNSUPPORTED,

    /* This event occurs when the number of hubs connected to the host exceeds the
       configured maximum number of hubs USB_HOST_HUB_TIER_LEVEL. There is no event
       data associated with this event. */
    USB_HOST_EVENT_HUB_TIER_LEVEL_EXCEEDED,

    /* This event occurs when an over-current condition is detected at the root
     * hub or an external hub port.*/
    USB_HOST_EVENT_PORT_OVERCURRENT_DETECTED

} USB_HOST_EVENT;

// *****************************************************************************
/* Host Layer Events Handler Function Response Type.

  Summary: 
    Host Layer Events Handler Function Response Type.

  Description:
    This is the definition of the Host Layer Event Handler Response Type.

  Remarks:
    None.
*/

typedef enum
{
    /* Returning this value indicates no application response to the host event
     * */
    USB_HOST_EVENT_RESPONSE_NONE = 0

} USB_HOST_EVENT_RESPONSE;

// *****************************************************************************
/* USB Host Layer Event Handler Function Pointer Type

  Summary:
   USB Host Layer Event Handler Function Pointer Type

  Description:
   This data type defines the required function signature of the USB Host
   Layer Event handling callback function. The application must register a
   pointer to a Host Layer Event handling function who's function signature
   (parameter and return value types) match the types specified by this
   function pointer in order to receive event call backs from the Host Layer.
   The Host Layer will invoke this function with event relevant parameters.
   The description of the event handler function parameters is given here.

   event - Type of event generated.

   pData - This parameter should be type cast to an event specific pointer type
   based on the event that has occurred. Refer to the USB_HOST_EVENT enumeration
   description for more details.

   context - Value identifying the context of the application that was
   registered along with the event handling function.

  Remarks:
    None.
*/

typedef USB_HOST_EVENT_RESPONSE ( * USB_HOST_EVENT_HANDLER) 
(
    USB_HOST_EVENT event, 
    void * eventData, 
    uintptr_t context
);

// *****************************************************************************
/* USB Host Device String Descriptor Request Complete Callback Function Type

  Summary:
    USB Host Device String Descriptor Request Complete Callback Function Type

  Description:
    This data type defines the required function signature of the USB Host Device
    String Descriptor Request Complete Callback Function. The application must
    specify a pointer to a function who's function signature (parameter and
    return value types) matches the type specified by this function pointer in
    order to a call backs from the Host Layer when the
    USB_HOST_DeviceStringDescriptorGet() function has completed its operation.
    The description of the callback function parameters is given here.

    requestHandle - a handle that is unique to this request. This will match the
    handle that was returned by the USB_HOST_DeviceStringDescriptorGet()
    function.

    size - size of the returned string descriptor. If the string descriptor could
    not be obtained, the size will be zero.

    context - Value identifying the context of the application that was
    registered along with the event handling function.

  Remarks:
    None.
*/

typedef void ( * USB_HOST_STRING_REQUEST_COMPLETE_CALLBACK) 
(
    USB_HOST_REQUEST_HANDLE requestHandle, 
    size_t size, 
    uintptr_t context
);

// *****************************************************************************
/* USB Host Result Minimum Constant

  Summary:
    USB Host Result Minimum Constant.

  Description:
    Constant identifying the USB Host Result Minimum Value. This constant is
    used in the USB_HOST_RESULT enumeration.

  Remarks:
    None.
*/

#define USB_HOST_RESULT_MIN -100

// *****************************************************************************
/* USB Host Result 

  Summary:
    USB Host Results.

  Description:
    This enumeration defines the possible returns values of USB Host Layer API.
    A function may only return some of the values in this enumeration. Refer to
    function description for details on which values will be returned.

  Remarks:
    None.
*/

typedef enum
{
    /* Indicates that the Host Layer cannot accept any requests at this point */
    USB_HOST_RESULT_REQUEST_BUSY = USB_HOST_RESULT_MIN,
    
    /* The device does not support the request string descriptor */
    USB_HOST_RESULT_STRING_DESCRIPTOR_UNSUPPORTED, 

    /* Request was aborted */
    USB_HOST_RESULT_TRANSFER_ABORTED,
            
    /* Request was stalled */
    USB_HOST_RESULT_REQUEST_STALLED,

    /* The specified pipe is not valid */
    USB_HOST_RESULT_PIPE_HANDLE_INVALID,

    /* The end of the device list was reached.*/
    USB_HOST_RESULT_END_OF_DEVICE_LIST,
    
    /* The specified interface is not available */
    USB_HOST_RESULT_INTERFACE_UNKNOWN,

    /* A NULL parameter was passed to the function */
    USB_HOST_RESULT_PARAMETER_INVALID,

    /* The specified configuration does not exist on this device.*/
    USB_HOST_RESULT_CONFIGURATION_UNKNOWN, 

    /* A bus operation was requested but the bus was not operated */
    USB_HOST_RESULT_BUS_NOT_ENABLED,

    /* The specified bus does not exist in the system */
    USB_HOST_RESULT_BUS_UNKNOWN,

    /* The specified device does not exist in the system */
    USB_HOST_RESULT_DEVICE_UNKNOWN,

    /* An unknown failure has occurred */
    USB_HOST_RESULT_FAILURE,

    /* Indicates a false condition */
    USB_HOST_RESULT_FALSE = 0,

    /* Indicate a true condition */
    USB_HOST_RESULT_TRUE = 1,

    /* Indicates that the operation succeeded or the request was accepted and
       will be processed. */
    USB_HOST_RESULT_SUCCESS = USB_HOST_RESULT_TRUE

} USB_HOST_RESULT;

// *****************************************************************************
// *****************************************************************************
// Section: USB Host Layer MPLAB Harmony System Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    SYS_MODULE_OBJ USB_HOST_Initialize
    (
       const SYS_MODULE_INIT * const init 
   )

  Summary:
    Initializes the USB Host layer instance specified by the index.

  Description:
    This routine initializes the USB Host Layer. This function must be called
    before any other Host layer function can be called. The initialization data
    is specified by the init parameter.  This function is typically called in
    the SYS_Initialize() function. The initialization completion may require the
    USB_HOST_Tasks() routine to execute.  The initialization function does not
    start the operation of the Host on the USB.  This must be done explicitly
    via the USB_HOST_BusEnable() function. This function will initialize all
    client drivers listed in the TPL.

  Precondition:
    The USB Host Controller driver initialization should be called somewhere in
    the SYS_Initialize() function.

  Input:
    init   - Pointer to a USB_HOST_INIT data structure containing data necessary 
    to initialize the driver. 

  Return:
    Return a SYS_MODULE_OBJ_INVALID if the initialization failed.

  Example:
    <code>
    TBD.

    </code>

  Remarks:
    This routine must be called before any other USB Host routine is called.
    This routine should only be called once during system initialization unless
    USB_HOST_Deinitialize is called to deinitialize the Host Layer instance.
    This routine will NEVER block for hardware access. The USB_HOST_Tasks()
    function should be called to complete the initialization. 
*/

SYS_MODULE_OBJ  USB_HOST_Initialize 
(
    const SYS_MODULE_INIT * init
);

// *****************************************************************************
/* Function:
    void USB_HOST_Deinitialize( SYS_MODULE_OBJ object )

  Summary:
    Deinitializes the specified instance of the USB Host Layer.

  Description:
    Deinitializes the USB Host Layer.  All internal data structures will be
    reset.  

  Precondition:
    Function USB_HOST_Initialize should have been called before calling this
    function.

  Parameters:
    object - USB Host layer object handle, returned from the USB_HOST_Initialize
    routine

  Returns:
    None.

  Example:
    <code>
    SYS_MODULE_OBJ      object;     //  Returned from USB_HOST_Initialize
    SYS_STATUS          status;

    USB_HOST_Deinitialize(object);

    status = USB_HOST_Status(object);
    if (SYS_MODULE_DEINITIALIZED != status)
    {
        // Can check again later if you need to know 
        // when the driver is deinitialized.
    }
    </code>

  Remarks:
    Once the Initialize operation has been called, the Deinitialize operation
    must be called before the Initialize operation can be called again. This 
    routine will NEVER block waiting for hardware. 
*/

void USB_HOST_Deinitialize(SYS_MODULE_OBJ hostLayerObject);

// *****************************************************************************
/* Function:
    SYS_STATUS USB_HOST_Status( SYS_MODULE_OBJ object )

  Summary:
    Gets the current status of the USB Host Layer.

  Description:
    This routine provides the current status of the USB Host Layer.

  Precondition:
    Function USB_HOST_Initialize should have been called before calling this
    function.

  Parameters:
    object - USB Host Layer object handle, returned from the USB_HOST_Initialize
    routine

  Returns:
    SYS_STATUS_READY          - Indicates that the USB Host layer is ready for
                                operations. 

    SYS_STATUS_BUSY           - The initialization is in progress.
    
    SYS_STATUS_DEINITIALIZED  - Indicates that the driver has been 
                                deinitialized

  Example:
    <code>
    SYS_MODULE_OBJ      object;     // Returned from USB_HOST_Initialize
    SYS_STATUS          status;

    status = USB_HOST_Status(object);
    if (SYS_STATUS_READY == status)
    {
        // The USB Host system is ready and is running.
    }
    </code>

  Remarks:
    This function is typically called by the MPLAB Harmony System to check the
    system status of the USB Host Layer. This function is not intended to be
    called directly by the application tasks routine.
*/

SYS_STATUS USB_HOST_Status (SYS_MODULE_OBJ hostLayerObject);

// *****************************************************************************
/* Function:
    void USB_HOST_Tasks (SYS_MODULE_OBJ object );

  Summary:
    Maintains the USB Host Layer state machine. 

  Description:
    This routine maintains the USB Host layer's state machine. It must be called
    frequently to ensure proper operation of the USB. This function should be
    called from the SYS_Tasks function.

  Precondition:
    The USB_HOST_Initialize routine must have been called for the specified 
    USB Host Layer instance.

  Parameters:
    object - Object handle for the specified driver instance (returned from
    USB_HOST_Initialize)

  Returns:
    None.

  Example:
    <code>
    SYS_MODULE_OBJ      object;     // Returned from USB_HOST_Initialize

    void SYS_Tasks(void)
    {
        USB_HOST_Tasks (object);
        
        // Do other tasks
    }
    </code>

  Remarks:
    This routine is not intended to be called directly by an application. It is
    called by the MPLAB Harmony System Tasks function.  
*/

void USB_HOST_Tasks   (SYS_MODULE_OBJ hostLayerObject);

// *****************************************************************************
// *****************************************************************************
// Section: USB Host Layer Application Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_BusEnable(USB_HOST_BUS bus)

  Summary:
    Starts host operations. 

  Description:
    The function starts the operation of the USB Host Bus. It enables the root
    hub associated with specified bus and starts the process of detecting
    attached devices and enumerating them. The USB_HOST_EventHandlerSet()
    function should have been called to register an application host layer event
    handler before the bus is enabled (before the USB_HOST_BusEnable()
    function is called).  This will ensure that the application does not miss
    any events. 

  Precondition:
    The USB_HOST_Initialize() function should have been called before calling
    this function.

  Parameters:
    bus - the bus to be enabled. If this is set to USB_HOST_BUS_ALL, all buses
    will be enabled.
    
  Returns:
    USB_HOST_RESULT_SUCCESS if the request was accepted. 
    USB_HOST_RESULT_BUS_UNKNOWN if the specified bus is invalid (it does not exist
    in the system).
    USB_HOST_RESULT_FAILURE if an unknown failure occurred.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    The Host Layer may generate events after the USB_HOST_BusEnable() function is
    called. The application should have registered an event handler using the
    USB_HOST_EventHandlerSet() function to handle these events. The
    USB_HOST_EventHandlerSet() function should have been called before the
    USB_HOST_BusEnable() function is called.
*/

USB_HOST_RESULT USB_HOST_BusEnable(USB_HOST_BUS bus);


USB_HOST_RESULT USB_HOST_BusDisable(USB_HOST_BUS bus);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_BusIsEnabled(USB_HOST_BUS bus)

  Summary:
    Checks if the bus is enabled.

  Description:
    The function returns the enable status of the bus. It can be called after
    the USB_HOST_BusEnable() function is called, to check if the bus has been
    enabled yet. If the bus parameter is set to USB_HOST_BUS_ALL, then the
    function will check the enable status of all the busses and will return true
    only if all the busses are enabled. 

  Precondition:
    The USB_HOST_Initialize() function should have been called before calling
    this function.

  Parameters:
    bus - the bus that needs to checked for enable status. If this is set to
    USB_HOST_BUS_ALL, all buses will be checked.
    
  Returns:
    USB_HOST_RESULT_TRUE if the bus is enabled.
    USB_HOST_RESULT_FALSE if the bus is not enabled.. 
    USB_HOST_RESULT_BUS_UNKNOWN if the specified bus is invalid (it does not exist
    in the system).
    USB_HOST_RESULT_FAILURE if an unknown failure occurred.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_BusIsEnabled(USB_HOST_BUS bus);

USB_HOST_RESULT USB_HOST_BusIsDisabled(USB_HOST_BUS bus);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_BusSuspend (USB_HOST_BUS bus);

  Summary:
    Suspends the bus.

  Description:
    The function suspends the bus. All devices on the bus will be suspended. If
    bus  is specified as USB_HOST_BUS_ALL, all the buses managed by this host
    will be suspended.

  Precondition:
    The USB_HOST_BusEnable() function should have been called to enable the bus.

  Parameters:
    bus - The bus to be suspended or USB_HOST_BUS_ALL to suspend all buses.

  Returns:
    USB_HOST_RESULT_SUCCESS - if the request was successful.
    USB_HOST_RESULT_BUS_NOT_ENABLED - if the bus was not enabled.
    USB_HOST_RESULT_FAILURE - An unknown error has occurred.
    USB_HOST_RESULT_BUS_UNKNOWN - if the specified bus does not exist in the system.

  Example:
    <code>

    // Suspend the bus 0
    USB_HOST_BusSuspend(0);

    // Suspend all buses
    USB_HOST_BusSuspend(USB_HOST_BUS_ALL);
    
    </code>

  Remarks:
    None. 
*/

USB_HOST_RESULT USB_HOST_BusSuspend (USB_HOST_BUS bus);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_BusResume (USB_HOST_BUS bus);

  Summary:
    Resumes the bus.

  Description:
    The function resumes the bus. All devices on the bus will be receive resume
    signaling. If bus is specified as USB_HOST_BUS_ALL, all the buses managed by
    this host will be resumed.

  Precondition:
    The USB_HOST_BusEnable() function should have been called to enable the bus.

  Parameters:
    bus - The bus to be resume or USB_HOST_BUS_ALL to resume all buses.

  Returns:
    USB_HOST_RESULT_SUCCESS - if the request was successful or if the bus was
    already resumed.
    USB_HOST_RESULT_BUS_UNKNOWN - the request failed because the bus does not
    exist in the system.
    USB_HOST_RESULT_BUS_NOT_ENABLED - the bus was not enabled.
    USB_HOST_RESULT_FAILURE - An unknown error occurred.

  Example:
    <code>

    // Resume bus 0
    USB_HOST_BusResume(0);

    // Resume all buses
    USB_HOST_BusSuspend(USB_HOST_BUS_ALL);
    
    </code>

  Remarks:
    None. 
*/

USB_HOST_RESULT USB_HOST_BusResume (USB_HOST_BUS bus);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_BusIsSuspended (USB_HOST_BUS bus)

  Summary:
    Returns the suspend status of the bus.

  Description:
    This function returns suspend status of the specified USB bus. This function
    can be used to check the completion of the Suspend operation started by
    using the USB_HOST_BusSuspend() function. The function would return
    USB_HOST_RESULT_FALSE if the bus is not suspended. Calling the
    USB_HOST_BusIsSuspended() with bus specified as USB_HOST_BUS_ALL returns the
    suspend status of the all USB segments that are managed by the host layer.
    The function would return USB_HOST_RESULT_TRUE only if all the bus are in a
    suspended state.

  Precondition:
    The USB_HOST_BusEnable() function should have been called to enable the bus.

  Parameters:
    bus - the bus whose suspend status is to be queried.

  Returns:
    USB_HOST_RESULT_TRUE - if the bus is suspended.
    USB_HOST_RESULT_FALSE - if the bus is not suspended.
    USB_HOST_RESULT_BUS_NOT_ENABLED - if the bus was not enabled.
    USB_HOST_RESULT_BUS_UNKNOWN - if the specified bus does not exist in the system.
    USB_HOST_RESULT_FAILURE - an unknown error occurred.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_BusIsSuspended (USB_HOST_BUS bus);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceGetFirst 
    (
        USB_HOST_BUS bus, 
        USB_HOST_DEVICE_INFO * deviceInfo
    );

  Summary:
    Returns information about the first attached device on the bus.

  Description:
    This function returns information about the first attached device on the
    specified bus. The USB_HOST_DeviceGetNext() function can be used to get the
    reference to the next attached device on the bus. The USB_HOST_DEVICE_INFO
    object is provided by the application.The device information will be
    populated into this object. If there are no devices attached on the bus, the
    function will set the deviceObjHandle parameter, in the USB_HOST_DEVICE_INFO
    object, to USB_HOST_DEVICE_OBJ_HANDLE INVALID. 
    
  Precondition:
    The USB_HOST_BusEnable function should have been called to enable detection of
    attached devices. 

  Parameters:
    bus - the bus to be queried for attached devices.

    deviceInfo - output parameter. Will contain device information when the
    function returns. If the deviceObjHandle member of the structure contains
    USB_HOST_DEVICE_OBJ_HANDLE INVALID, then there are no attached devices on
    the bus and the deviceAddress and the bus member of the info object will
    contain indeterminate values.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The function executed successfully.
    USB_HOST_RESULT_END_OF_DEVICE_LIST - There are no attached devices on the
    bus. 
    USB_HOST_RESULT_BUS_UNKNOWN - The specified bus does not exist in the system.
    USB_HOST_RESULT_BUS_NOT_ENABLED - The specified bus is not enabled.
    USB_HOST_RESULT_PARAMETER_INVALID - the deviceInfo parameter is NULL.
    USB_HOST_RESULT_FAILURE - an unknown failure occurred.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceGetFirst 
(
    USB_HOST_BUS bus, 
    USB_HOST_DEVICE_INFO * deviceInfo
); 

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceGetNext (USB_HOST_DEVICE_INFO * deviceInfo);

  Summary:
    Returns information about the next device on the bus.

  Description:
    This function returns information of the next device attached on the bus.
    The  USB_HOST_DeviceGetFirst() function should have been called at least once
    on the deviceInfo object.  Then calling this function repeatedly on the
    deviceInfo object will return information about the next attached device on
    the bus. When there are no more attached devices to report, the function
    returns USB_HOST_RESULT_END_OF_DEVICE_LIST.

    Calling the USB_HOST_DeviceGetFirst() function on the deviceInfo object
    after the USB_HOST_DeviceGetNext() function has been called will cause the
    host to reset the deviceInfo object to point to the first attached device.

  Precondition:
    The USB_HOST_DeviceGetFirst() function must have been called
    before calling this function.

  Parameters:
    deviceInfo - pointer to the USB_HOST_DEVICE_INFO object.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The function executed successfully.
    USB_HOST_RESULT_END_OF_DEVICE_LIST - There are no attached devices on the
    bus. 
    USB_HOST_RESULT_PARAMETER_INVALID - the deviceInfo parameter is NULL.
    USB_HOST_RESULT_DEVICE_UNKNOWN - the device specified in deviceInfo does not
    exist in the system. The search should be restarted.
    USB_HOST_RESULT_FAILURE - an unknown failure occurred. Application can
    restart the search by calling the USB_HOST_DeviceGetFirst() function.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceGetNext (USB_HOST_DEVICE_INFO * deviceInfo);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceSuspend 
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
    );

  Summary:
    Suspends the specified device. 

  Description:
    The function suspends the specified device. 

  Precondition:
    The USB_HOST_BusEnable() function should have been called.

  Parameters:
    deviceObjHandle - handle to the device to suspend.

  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted and the device will be
    suspended.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request failed. The device may have been
    detached.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.
    
  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None. 
*/

USB_HOST_RESULT USB_HOST_DeviceSuspend 
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceResume 
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
    );

  Summary:
    Resumes the selected device

  Description:
    The function resumes the selected device. A device can be resumed only if it
    was suspended. 

  Precondition:
    None.

  Parameters:
    deviceObjHandle - handle to the device to be resumed.

  Returns:
    USB_HOST_RESULT_SUCCESS - The request was accepted and the device will be
    resumed or the device was already resumed.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request failed. The device may have been
    detached.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.
 
  Example:
    <code>

    TBD.

    </code>

  Remarks:
    None. 
*/

USB_HOST_RESULT USB_HOST_DeviceResume 
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceSpeedGet 
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle, 
        USB_SPEED * speed
    )

  Summary:
    Returns the speed at which this device is operating.

  Description:
    This function returns the speed at which this device is operating.

  Precondition:
    The USB_HOST_Initialize() function should have been called. 

  Parameters:
    deviceObjHandle - handle to the device whose speed is required.

    speed - output parameter. Will contain the speed of the device if the
    function was successful.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The function was successful. speed will contain
    the speed of the device.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The device does not exist in the system.
    speed will contain USB_SPEED_ERROR. 
    USB_HOST_RESULT_FAILURE - an unknown error occurred.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceSpeedGet 
( 
    USB_HOST_DEVICE_OBJ_HANDLE deviceHandle, 
    USB_SPEED * speed
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceIsSuspended 
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
    );

  Summary:
    Returns the suspend state of the device is suspended.

  Description:
    This function returns the suspend state of the specified USB device. This
    function can be used to check the completion of the Resume operation started
    by using the USB_HOST_Resume() function. If the Resume signaling has
    completed, the USB_HOST_IsSuspended() function would return
    USB_HOST_RESULT_TRUE.  

  Precondition:
    The USB_HOST_BusEnable() function should have been called.

  Parameters:
    deviceObjHandle - handle to the device that needs to be checked for suspend
    status.

  Returns:
    USB_HOST_RESULT_TRUE - if the device is suspended.
    USB_HOST_RESULT_FALSE - if the device is not suspended.
    USB_HOST_RESULT_DEVICE_UNKNOWN - the specified device does not exist in the
    system.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceIsSuspended 
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_DeviceStringDescriptorGet
    (
        USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle,
        USB_HOST_DEVICE_STRING stringType,
        uint16_t languageID,
        void * stringDescriptor,
        size_t length,
        USB_HOST_REQUEST_HANDLE * requestHandle,
        USB_HOST_STRING_REQUEST_COMPLETE_CALLBACK callback,
        uintptr_t context
    );

  Summary:
    Retrieves specified string descriptor from the device

  Description:
    This function retrieves the specified string descriptor from the device.
    This function will cause the host layer to issue a control transfer to the
    device. When the string descriptor is available, the host layer will call
    the callback function to let the application know that the request has
    completed. 
    
    The function will return a valid request handle in requestHandle, if the
    request was successful. This request handle will be returned in the callback
    function. The size of the stringDescriptor buffer is specified by the length
    parameter.  Only length number of bytes will be retrieved. The type of
    device string descriptor to be retrieved is specified by the stringType
    parameter. The supported language IDs, manufacturer, product and serial
    number strings can be obtained. While obtaining the supported language IDs,
    the languageID parameter will be ignored.

  Precondition:
    The USB_HOST_BusEnable() function should have been called.

  Parameters:
    deviceObjHandle - handle to the device whose string descriptor is to be
    retrieved.

    stringType - type of string descriptor to be retrieved

    languageID - the language ID of the string descriptor

    stringDescriptor - output buffer for the descriptor

    length - size of the specified output buffer

    requestHandle - This is an output parameter. It will contain a valid request
    handle if the request was successful. It will contain
    USB_HOST_REQUEST_HANDLE_INVALID is the request was not successful.  

    callback - Function that will be called when this request completes. If this
    is NULL, then the application will not receive indication of completion.

    context - Calling application context to be returned in the callback
    function.
  
  Returns:
    USB_HOST_RESULT_SUCCESS - The request was scheduled successfully.
    requestHandle will contain a valid request handle.
    USB_HOST_RESULT_DEVICE_UNKNOWN - The request failed because the device was
    detached.
    USB_HOST_RESULT_FAILURE - An unknown error occurred.
    USB_HOST_RESULT_REQUEST_BUSY - The host layer cannot take more requests at
    this point. The application should try later.
    USB_HOST_RESULT_STRING_DESCRIPTOR_UNSUPPORTED - The device does not support
    the specified string descriptor type.

  Example:
    <code>
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_DeviceStringDescriptorGet
(
    USB_HOST_DEVICE_OBJ_HANDLE deviceObjHandle,
    USB_HOST_DEVICE_STRING stringType,
    uint16_t languageID,
    void * stringDescriptor,
    size_t length,
    USB_HOST_REQUEST_HANDLE * requestHandle,
    USB_HOST_STRING_REQUEST_COMPLETE_CALLBACK callback,
    uintptr_t context
);

// *****************************************************************************
/* Function:
    USB_HOST_RESULT USB_HOST_EventHandlerSet
    (
        USB_HOST_EVENT_HANDLER * eventHandler,
        uintptr_t context
    )

  Summary:
    USB Host Layer Event Handler Callback Function set function.

  Description:
    This is the USB Host Layer Event Handler Callback Set function. An
    application can receive USB Host Layer events by using this function to
    register and event handler callback function. The application can
    additionally specify a specific context which will returned with the event
    handler callback function. The event handler must be set (this function must
    be called) before any of the USB buses are enabled.

  Precondition:
    The host layer should have been initialized.

  Parameters:
    eventHandler - Pointer to the call back function. The host layer notifies
    the application about host layer events by calling this function.  If this
    is NULL, then events will not be generated.

    context     - application specific context.
    
  Returns:
    USB_HOST_RESULT_SUCCESS - The function was successful.
    USB_HOST_RESULT_FAILURE - An unknown failure occurred.

  Example:
    <code>
    TBD.
    </code>

  Remarks:
    None.
*/

USB_HOST_RESULT USB_HOST_EventHandlerSet
(
    USB_HOST_EVENT_HANDLER  eventHandler,
    uintptr_t context
);


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif
