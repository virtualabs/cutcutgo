/*******************************************************************************
  USB Device Chapter-9 Definition

  Company:
    Microchip Technology Inc.

  File Name:
    usb_chapter_9.h

  Summary:
    USB device chapter-9 definitions header.

  Description:
    This file defines data structures, constants, and macros that are used to
    support the "USB Device Framework" described in Chapter 9 of the USB 2.0
    Specification. This file is included by usb_device.h and usb_host.h. The
    application can include this file if it needs to access any Chapter 9
    definitions.
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

#ifndef _USB_CHAPTER_9_H
#define _USB_CHAPTER_9_H
#include <stdint.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

/*****************************************************************************
* A generic structure for accessing the word in byte and value format.
*****************************************************************************/

typedef union
{
    uint16_t Val;
    uint8_t v[2];
    struct
    {
        uint8_t LB;
        uint8_t HB;
    } byte;
    
} USB_WORD_VAL;

// *****************************************************************************
/* Descriptor header structure.

  Summary:
   Descriptor header structure.

  Description:
   Any USB descriptor starts with "size" and "descriptor type".
   This structure is used by USB device layer to determine the
   size and type of a descriptor.

  Remarks:
    Note that this structure may need to be packed, or even accessed as bytes,
    to properly access the correct fields when used on some device
    architectures.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t size;
    uint8_t descType;    
    
}USB_DESCRIPTOR_HEADER;    

// *****************************************************************************
/* Configuration descriptor structure

  Summary:
    Structure that contains all configuration descriptor fields as described in
    Table 9-10 of USB 2.0 specification.

  Description:
    Structure that contains all configuration descriptor fields as described in
    Table 9-10 of USB 2.0 specification.

  Remarks:
    Note that this structure may need to be packed, or even accessed 
    as bytes, to properly access the correct fields when used on some device 
    architectures.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bLength;
    uint8_t bDescriptorType;
    uint16_t wTotalLength;
    uint8_t bNumInterfaces;
    uint8_t bConfigurationValue;
    uint8_t iConfiguration;
    uint8_t bmAttributes;
    uint8_t bMaxPower;

} USB_CONFIGURATION_DESCRIPTOR;    

// *****************************************************************************
/* Interface descriptor structure

  Summary:
    Structure that contains all interface descriptor fields as described in
    Table 9-12 of USB 2.0 specification.

  Description:
    Structure that contains all interface descriptor fields as described in
    Table 9-12 of USB 2.0 specification.

  Remarks:
    Note that this structure may need to be packed, or even accessed as bytes,
    to properly access the correct fields when used on some device
    architectures. 
*/
    
typedef struct __attribute__ ((packed))
{
    uint8_t bLength;
    uint8_t bDescriptorType;
    uint8_t bInterfaceNumber;
    uint8_t bAlternateSetting;
    uint8_t bNumEndPoints;
    uint8_t bInterfaceClass;
    uint8_t bInterfaceSubClass;
    uint8_t bInterfaceProtocol;
    uint8_t iInterface;

} USB_INTERFACE_DESCRIPTOR;

// *****************************************************************************
/* Interface Association Descriptor structure

  Summary:
    Structure that contains all interface descriptor fields as described in
    USB 2.0 spec.

  Description:
    Structure that contains all interface descriptor fields as described in
     USB 2.0 spec.

  Remarks:
    Note that this structure may need to be packed, or even accessed as bytes,
    to properly access the correct fields when used on some device
    architectures. 
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bLength;
    uint8_t bDescriptorType;
    uint8_t bFirstInterface;
    uint8_t bInterfaceCount;
    uint8_t bFunctionClass;
    uint8_t bFunctionSubClass;
    uint8_t bFunctionProtocol;
    uint8_t iFunction;

} USB_INTERFACE_ASSOCIATION_DESCRIPTOR;

// *****************************************************************************
/* Endpoint descriptor structure

  Summary:
    Structure that contains all endpoint descriptor fields as described in Table
    9-13 of USB 2.0 specification.

  Description:
    Structure that contains all endpoint descriptor fields as described in Table
    9-13 of USB 2.0 specification.
  
  Remarks:
    Note that this structure may need to be packed, or even accessed as bytes,
    to properly access the correct fields when used on some device
    architectures.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bLength;
    uint8_t bDescriptorType;

    union
    {
        struct __attribute__ ((packed))
         {
            uint8_t epAddress:4;
            uint8_t :3;
            uint8_t dirn: 1;
          };
        uint8_t bEndpointAddress;
    }; 
    
    union
    {        
        struct __attribute__ ((packed))
        {
            uint8_t transferType:2;
            uint8_t syncType:2;
            uint8_t usageType:2;
            uint8_t :2;
        };
        uint8_t bmAttributes;
    };
    
    union
    {
        struct __attribute__ ((packed))
        {
            uint16_t packetSize:11;
            uint16_t addTransaction:2;
            uint16_t :3;
        };       
        
        uint16_t wMaxPacketSize;       
    };                              
    
    uint8_t  bInterval;

} USB_ENDPOINT_DESCRIPTOR;

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

typedef uint8_t USB_ENDPOINT_ADDRESS;

// *****************************************************************************
/* USB device states as described in chapter-9 of USB 2.0 specification

  Summary:
    Standard USB device states as described in Chapter-9 of USB 2.0 Specification.

  Description:
    This data type identifies the USB Device States.

  Remarks:
    The USB specification doesn't define the state of a device when it 
    is detached from the USB. The USB_DEVICE_STATE_DETACHED is not the standard
    state, but is required to indicate the user, that the device is not in 
    any of the known states.

    The USB_DEVICE_IsSuspended() function can be called to obtain the suspend
    state of the device. The Device Layer also generates the
    USB_DEVICE_EVENT_SUSPENDED event to indicate entry into a suspend state.
*/

typedef enum 
{
    /* Device is not in any of the known USB states*/
    USB_DEVICE_STATE_DETACHED
            /*DOM-IGNORE-BEGIN*/ = 0 /*DOM-IGNORE-END*/,
            
    /* Device is in attached state*/
    USB_DEVICE_STATE_ATTACHED
            /*DOM-IGNORE-BEGIN*/ = 1 /*DOM-IGNORE-END*/,
            
    /*Device is in powered state*/
    USB_DEVICE_STATE_POWERED            
            /*DOM-IGNORE-BEGIN*/ = 2 /*DOM-IGNORE-END*/,
            
    /*Device is in default state*/    
    USB_DEVICE_STATE_DEFAULT           
            /*DOM-IGNORE-BEGIN*/ = 3 /*DOM-IGNORE-END*/,
    
    /*Device is in addressed state*/ 
    USB_DEVICE_STATE_ADDRESSED            
            /*DOM-IGNORE-BEGIN*/ = 4 /*DOM-IGNORE-END*/,
    
    /*Device is in configured state*/ 
    USB_DEVICE_STATE_CONFIGURED         
            /*DOM-IGNORE-BEGIN*/ = 5 /*DOM-IGNORE-END*/,
    
} USB_DEVICE_STATE;

// *****************************************************************************
/* Setup packet structure

  Summary:
    This structure contains members of the "standard setup" as requested by the
    USB host.
   
  Description:
    This structure contains members of the "standard setup" as requested by the
    USB host.

  Remarks:
    Note that this structure may need to be packed, or even accessed as bytes,
    to properly access the correct fields when used on some device
    architectures. 
*/

typedef union __attribute__ ((packed))
{
    /** Standard Device Requests ***********************************/
    struct __attribute__ ((packed))
    {
        uint8_t bmRequestType; //from Table 9-2 of the USB 2.0 specification
        uint8_t bRequest;      //from Table 9-2 of the USB 2.0 specification
        uint16_t wValue;       //from Table 9-2 of the USB 2.0 specification
        uint16_t wIndex;       //from Table 9-2 of the USB 2.0 specification
        uint16_t wLength;      //from Table 9-2 of the USB 2.0 specification
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        USB_WORD_VAL W_Value;  //from Table 9-2 of the USB 2.0 specification, allows byte/bitwise access
        USB_WORD_VAL W_Index;  //from Table 9-2 of the USB 2.0 specification, allows byte/bitwise access
        USB_WORD_VAL W_Length; //from Table 9-2 of the USB 2.0 specification, allows byte/bitwise access
    };
    struct __attribute__ ((packed))
    {
        uint16_t Recipient:5;   //Device,Interface,Endpoint,Other
        uint16_t RequestType:2; //Standard,Class,Vendor,Reserved
        uint16_t DataDir:1;     //Host-to-device,Device-to-host
        uint16_t :8;
        uint16_t bFeature:8;          //DEVICE_REMOTE_WAKEUP,ENDPOINT_HALT
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
    };
    struct __attribute__ ((packed))
    {
        union                           // offset   description
        {                               // ------   ------------------------
            uint8_t bmRequestType;      //   0      Bit-map of request type
            struct
            {
                uint8_t    recipient:  5;  //          Recipient of the request
                uint8_t    type:       2;  //          Type of request
                uint8_t    direction:  1;  //          Direction of data X-fer
            };
        }requestInfo;
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        uint8_t bDscIndex;          //For Configuration and String DSC Only
        uint8_t bDescriptorType;    //Device,Configuration,String
        uint16_t wLangID;           //Language ID
        uint16_t :8;
        uint16_t :8;
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        uint8_t bDevADR;           //Device Address 0-127
        uint8_t bDevADRH;          //Must equal zero
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        uint8_t bConfigurationValue;         //Configuration Value 0-255
        uint8_t bCfgRSD;           //Must equal zero (Reserved)
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        uint8_t bAltID;            //Alternate Setting Value 0-255
        uint8_t bAltID_H;          //Must equal zero
        uint8_t bIntfID;           //Interface Number Value 0-255
        uint8_t bIntfID_H;         //Must equal zero
        uint16_t :8;
        uint16_t :8;
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint8_t bEPID;             //Endpoint ID (Number & Direction)
        uint8_t bEPID_H;           //Must equal zero
        uint16_t :8;
        uint16_t :8;
    };
    struct __attribute__ ((packed))
    {
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
        uint16_t EPNum:4;       // Endpoint Number 0-15
        uint16_t :3;
        uint16_t EPDir:1;       // Endpoint Direction: 0-OUT, 1-IN
        uint16_t :8;
        uint16_t :8;
        uint16_t :8;
    };

    /** End: Standard Device Requests ******************************/

} USB_SETUP_PACKET ;

// *****************************************************************************
/* Get Status (Device) Response

  Summary:
    Defines the response of the device to the Get Status (Device) Request.

  Description:
    This structure defines the response of the device to the Get Status (Device)
    Request. Refer to section Figure 9-4 in section 9.5.2 of the USB 2.0
    specification.

  Remarks:
    Note that this structure may need to be packed, or even accessed 
    as bytes, to properly access the correct fields when used on some device 
    architectures. 
*/

typedef union __attribute__((packed))
{
    struct
    {
        uint16_t selfPowered    :1;
        uint16_t remoteWakeup   :1;
        uint16_t                :14;
    };

    uint16_t value;

} USB_DEVICE_GET_STATUS_RESPONSE;

// *****************************************************************************
/* Standard device descriptor

  Summary:
    Structure that contains all device descriptor fields.

  Description:
    This structure contains all device descriptor fields as described in Table
    9-8 of the USB 2.0 specification.

  Remarks:
    Note that this structure may need to be packed, or even accessed 
    as bytes, to properly access the correct fields when used on some device 
    architectures. 
    
*/

typedef struct __attribute__ ((packed)) 
{
    uint8_t bLength;                // Length of this descriptor.
    uint8_t bDescriptorType;        // DEVICE descriptor type (USB_DESCRIPTOR_DEVICE).
    uint16_t bcdUSB;                // USB Spec Release Number (BCD).
    uint8_t bDeviceClass;           // Class code (assigned by the USB-IF). 0xFF-Vendor specific.
    uint8_t bDeviceSubClass;        // Subclass code (assigned by the USB-IF).
    uint8_t bDeviceProtocol;        // Protocol code (assigned by the USB-IF). 0xFF-Vendor specific.
    uint8_t bMaxPacketSize0;        // Maximum packet size for endpoint 0.
    uint16_t idVendor;              // Vendor ID (assigned by the USB-IF).
    uint16_t idProduct;             // Product ID (assigned by the manufacturer).
    uint16_t bcdDevice;             // Device release number (BCD).
    uint8_t iManufacturer;          // Index of String Descriptor describing the manufacturer.
    uint8_t iProduct;               // Index of String Descriptor describing the product.
    uint8_t iSerialNumber;          // Index of String Descriptor with the device's serial number.
    uint8_t bNumConfigurations;     // Number of possible configurations.

} USB_DEVICE_DESCRIPTOR;

// *****************************************************************************
/* Device_Qualifier

  Summary:
    Structure that contains all device_qualifier descriptor fields.

  Description:
    This structure contains all device_qualifier descriptor fields
    as described in Table 9-9 of the USB 2.0 specification.

  Remarks:
    Note that this structure may need to be packed, or even accessed as bytes,
    to properly access the correct fields when used on some device
    architectures. 
*/

typedef struct __attribute__ ((packed)) 
{
    uint8_t bLength;               // Length of this descriptor.
    uint8_t bDescriptorType;       // DEVICE descriptor type (USB_DESCRIPTOR_DEVICE).
    uint16_t bcdUSB;               // USB Spec Release Number (BCD).
    uint8_t bDeviceClass;          // Class code (assigned by the USB-IF). 0xFF-Vendor specific.
    uint8_t bDeviceSubClass;       // Subclass code (assigned by the USB-IF).
    uint8_t bDeviceProtocol;       // Protocol code (assigned by the USB-IF). 0xFF-Vendor specific.
    uint8_t bMaxPacketSize0;       // Maximum packet size for endpoint 0.
    uint8_t bNumConfigurations;    // Number of possible configurations.
    uint8_t bReserved;             // Reserved for future use.

} USB_DEVICE_QUALIFIER;

// *****************************************************************************
/* USB BOS Descriptor

  Summary:
    Identifies the USB BOS Descriptor.

  Description:
    This type identifies the USB BOS Descriptor. This structure is as per the
    USB protocol.

  Remarks:
    Needs to packed always.
*/

typedef struct __attribute__ ((packed))
{
    /* Size of this descriptor */
    uint8_t bLength;

    /* Type of this descriptor */
    uint8_t bDescriptorType;

    /* Length of this descriptor and all of its sub descriptors */
    uint16_t wTotalLength;

    /*No of separate Device capability descriptors */
    uint8_t bNumDeviceCaps;

} USB_BOS_DESCRIPTOR; 

// *****************************************************************************
/* Descriptor types

  Summary:
    These definitions provide "descriptor type" constants.

  Description:
    The "descriptor types" are listed in Table 9-5 of the USB 2.0 specification.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_DESCRIPTOR_DEVICE           0x01    // bDescriptorType for a Device Descriptor.
#define USB_DESCRIPTOR_CONFIGURATION    0x02    // bDescriptorType for a Configuration Descriptor.
#define USB_DESCRIPTOR_STRING           0x03    // bDescriptorType for a String Descriptor.
#define USB_DESCRIPTOR_INTERFACE        0x04    // bDescriptorType for an Interface Descriptor.
#define USB_DESCRIPTOR_ENDPOINT         0x05    // bDescriptorType for an Endpoint Descriptor.
#define USB_DESCRIPTOR_DEVICE_QUALIFIER 0x06    // bDescriptorType for a Device Qualifier.
#define USB_DESCRIPTOR_OTHER_SPEED      0x07    // bDescriptorType for a Other Speed Configuration.
#define USB_DESCRIPTOR_INTERFACE_POWER  0x08    // bDescriptorType for Interface Power.
#define USB_DESCRIPTOR_OTG              0x09    // bDescriptorType for an OTG Descriptor. 
#define USB_DESCRIPTOR_INTERFACE_ASSOCIATION  0x0b 
#define USB_DESCRIPTOR_BOS              0x0F    // bDescriptorType for a BOS Descriptor.
#define USB_DESCRIPTOR_DEVICE_CAPABILITY 0x10   // bDescriptorType for a Device Capability Descriptor.

// *****************************************************************************
/* Standard device requests

  Summary:
    These definitions provide constant values of the "bRequest" field of
    standard device request.

  Description:
    The "standard device requests" are listed in table 9-3 of USB 2.0 spec.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_REQUEST_GET_STATUS                  0       // Standard Device Request - GET STATUS
#define USB_REQUEST_CLEAR_FEATURE               1       // Standard Device Request - CLEAR FEATURE
#define USB_REQUEST_SET_FEATURE                 3       // Standard Device Request - SET FEATURE
#define USB_REQUEST_SET_ADDRESS                 5       // Standard Device Request - SET ADDRESS
#define USB_REQUEST_GET_DESCRIPTOR              6       // Standard Device Request - GET DESCRIPTOR
#define USB_REQUEST_SET_DESCRIPTOR              7       // Standard Device Request - SET DESCRIPTOR
#define USB_REQUEST_GET_CONFIGURATION           8       // Standard Device Request - GET CONFIGURATION
#define USB_REQUEST_SET_CONFIGURATION           9       // Standard Device Request - SET CONFIGURATION
#define USB_REQUEST_GET_INTERFACE               10      // Standard Device Request - GET INTERFACE
#define USB_REQUEST_SET_INTERFACE               11      // Standard Device Request - SET INTERFACE
#define USB_REQUEST_SYNCH_FRAME                 12      // Standard Device Request - SYNCH FRAME

// *****************************************************************************
/* Characteristics of request.

  Summary:
    Characteristics of "bmRequestType" field of setup data as described in
    Table 9-2 of the USB 2.0 specification.

  Description:
    ORing these constants with "bmRequestType" field gives characteristics of the
    setup data.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_SETUP_DIRN_HOST_TO_DEVICE               0x00    // Setup request direction is Host -> Device
#define USB_SETUP_DIRN_DEVICE_TO_HOST               0x80    // Setup request direction is Device -> Host
#define USB_SETUP_TYPE_STANDARD                     0x00    // Setup request type is "Standard"
#define USB_SETUP_TYPE_CLASS                        0x20    // Setup request type is "Class"
#define USB_SETUP_TYPE_VENDOR                       0x40    // Setup request type is "Vendor"
#define USB_SETUP_TYPE_RESERVED                     0x60    // Reserved
#define USB_SETUP_RECIPIENT_DEVICE                  0x00    // Recipient is Device
#define USB_SETUP_RECIPIENT_INTERFACE               0x01    // Recipient is interface
#define USB_SETUP_RECIPIENT_ENDPOINT                0x02    // Recipient is endpoint
#define USB_SETUP_RECIPIENT_OTHER                   0x03    // Recipient is other

// *****************************************************************************
/* Setup Packet - Data Transfer Direction.

  Summary:
    Specifies possible values of "Data transfer direction" (bit D7) of the
    "bmRequestType" field of setup data as described in Table 9-2 of the USB 2.0
    specification.

  Description:
    These constants can be used to set/compare the "DataDir" field of
    USB_SETUP_PACKET structure. The "DataDir" is 7th bit of the "bmRequestType"
    field in a USB SETUP packet.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

typedef enum
{
    /* Control transfer data stage moves from host to device */
    USB_SETUP_REQUEST_DIRECTION_HOST_TO_DEVICE  = 0,

    /* Control transfer data stage moves from device to host */
    USB_SETUP_REQUEST_DIRECTION_DEVICE_TO_HOST  = 1
            
} USB_SETUP_REQUEST_DIRECTION;

// *****************************************************************************
/* Setup Packet - Type.

  Summary:
    Specifies possible values of "Type" (bit D6 and D5) of the "bmRequestType"
    field of setup data as described in Table 9-2 of the USB 2.0 specification.

  Description:
    These constants can be used to set/compare the "RequestType" field of
    USB_SETUP_PACKET structure. The "RequestType" is 6th and 5th bits of the
    "bmRequestType" field in a USB SETUP packet.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

typedef enum
{
    USB_SETUP_REQUEST_TYPE_STANDARD  = 0,

    USB_SETUP_REQUEST_TYPE_CLASS     = 1 ,

    USB_SETUP_REQUEST_TYPE_VENDOR    = 2 ,

    USB_SETUP_REQUEST_TYPE_RESERVED  = 3
            
} USB_SETUP_REQUEST_TYPE;

// *****************************************************************************
/* Setup Packet - Recipient.

  Summary:
    Specifies possible values of "Recipient" (bit D4 to D0) of the "bmRequestType"
    field of setup data as described in Table 9-2 of the USB 2.0 specification.

  Description:
    These constants can be used to set/compare the "Recipient" field of
    USB_SETUP_PACKET structure. The "Recipient" is bits 4 to 0 of the
    "bmRequestType" field in a USB SETUP packet.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

typedef enum
{
    USB_SETUP_REQUEST_RECIPIENT_DEVICE     = 0 ,

    USB_SETUP_REQUEST_RECIPIENT_INTERFACE  = 1 ,

    USB_SETUP_REQUEST_RECIPIENT_ENDPOINT   = 2 ,

    USB_SETUP_REQUEST_RECIPIENT_OTHER      = 3
            
}  USB_SETUP_REQUEST_RECIPIENT;

// *****************************************************************************
/* Standard feature selectors.

  Summary:
    Standard feature selectors as described in Table 9-2 of the USB 2.0
    specification.

  Description:
    Standard feature selectors as described in Table 9-2 of USB 2.0
    specification.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_FEATURE_SELECTOR_ENDPOINT_HALT                          0
#define USB_FEATURE_SELECTOR_DEVICE_REMOTE_WAKEUP                   1
#define USB_FEATURE_SELECTOR_DEVICE_TEST_MODE                       2

// *****************************************************************************
/* Test mode selectors.

  Summary:
    Test mode selectors as described in Table 9-7 of the USB 2.0 specification.

  Description:
    Test mode selectors as described in Table 9-2 of USB 2.0 specification.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

typedef enum
{
    /*DOM-IGNORE-BEGIN*/USB_TEST_MODE_SELCTOR_RESERVED = 0,/*DOM-IGNORE-END*/

    /*DOM-IGNORE-BEGIN*/USB_TEST_MODE_SELCTOR_TEST_J = 1,/*DOM-IGNORE-END*/

    /*DOM-IGNORE-BEGIN*/USB_TEST_MODE_SELCTOR_TEST_K = 2,/*DOM-IGNORE-END*/

    /*DOM-IGNORE-BEGIN*/USB_TEST_MODE_SELCTOR_TEST_SE0_NAK = 3,/*DOM-IGNORE-END*/

    /*DOM-IGNORE-BEGIN*/USB_TEST_MODE_SELCTOR_TEST_PACKET = 4,/*DOM-IGNORE-END*/

    /*DOM-IGNORE-BEGIN*/USB_TEST_MODE_SELCTOR_TEST_FORCE_ENABLE = 5, /*DOM-IGNORE-END*/

    /* This test mode is reserved. Do not use */
    USB_TEST_MODE_SELECTOR_RESERVED /*DOM-IGNORE-BEGIN*/ = USB_TEST_MODE_SELCTOR_RESERVED /*DOM-IGNORE-END*/,

    /* This test mode causes the port to enter high speed J state */
    USB_TEST_MODE_SELECTOR_TEST_J /*DOM-IGNORE-BEGIN*/ = USB_TEST_MODE_SELCTOR_TEST_J /*DOM-IGNORE-END*/,

    /* This test mode causes the port to enter high speed K state */
    USB_TEST_MODE_SELECTOR_TEST_K /*DOM-IGNORE-BEGIN*/ = USB_TEST_MODE_SELCTOR_TEST_K /*DOM-IGNORE-END*/,

    /* This test mode causes the port to enter high speed receive mode */
    USB_TEST_MODE_SELECTOR_TEST_SE0_NAK /*DOM-IGNORE-BEGIN*/ = USB_TEST_MODE_SELCTOR_TEST_SE0_NAK /*DOM-IGNORE-END*/,

    /* This test mode causes the port to repetitively transmit a test packet */
    USB_TEST_MODE_SELECTOR_TEST_PACKET /*DOM-IGNORE-BEGIN*/= USB_TEST_MODE_SELCTOR_TEST_PACKET /*DOM-IGNORE-END*/,

    /* This test mode enables the port even if no device is connected */
    USB_TEST_MODE_SELECTOR_TEST_FORCE_ENABLE /*DOM-IGNORE-BEGIN*/ = USB_TEST_MODE_SELCTOR_TEST_FORCE_ENABLE /*DOM-IGNORE-END*/
            
} USB_TEST_MODE_SELECTORS;

// *****************************************************************************
/*  bmAttributes field of standard configuration descriptor.

  Summary:
    Characteristics of "bmAttributes" field of standard configuration descriptor
    as described in Table 9-10 of the USB 2.0 specification.

  Description:
    ORing these constants with "bmAttributes" field gives configuration
    characteristics of standard configuration descriptor.

  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_ATTRIBUTE_DEFAULT                       0x80  // Reserved (set to one)
#define USB_ATTRIBUTE_SELF_POWERED                  0x40  // Self powered
#define USB_ATTRIBUTE_REMOTE_WAKEUP                 0x20  // Remote wakeup

// *****************************************************************************
/*  Endpoint direction for standard endpoint descriptor.

  Summary:
    Specifies the direction for the endpoint.

  Description:
    ORing these constants with the "bEndpointAddress" field specifies the direction
    for the endpoint. Refer to Table 9-13 of the USB 2.0 specification.
 
  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_EP_DIRECTION_IN                     0x80    // IN direction
#define USB_EP_DIRECTION_OUT                    0x00    // OUT direction

// *****************************************************************************
/* USB Transfer Type

  Summary:
    Specifies the USB Transfer Type

  Description:
    Value of the bmAttributes field (bits 1:0) in the endpoint descriptor.
 
  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

typedef enum
{
    USB_TRANSFER_TYPE_CONTROL       = 0x00,     // Control transfer
    USB_TRANSFER_TYPE_ISOCHRONOUS   = 0x01,     // Isochronous
    USB_TRANSFER_TYPE_BULK          = 0x02,     // Bulk
    USB_TRANSFER_TYPE_INTERRUPT     = 0x03      // Interrupt

} USB_TRANSFER_TYPE;

// *****************************************************************************
/* USB Endpoint Synchronization Type

  Summary:
    Specifies the USB Endpoint Synchronization Type

  Description:
    Value of the bmAttributes field (bits 3:2) in the endpoint descriptor.
 
  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_SYNCH_TYPE_NO_SYNCH                 0x00    // No synchronization
#define USB_SYNCH_TYPE_ASYNCHRONOUS             0x04    // Asynchronous
#define USB_SYNCH_TYPE_ADAPTIVE                 0x08    //
#define USB_SYNCH_TYPE_SYNCHRONOUS              0x0C

// *****************************************************************************
/* USB Endpoint Usage Type

  Summary:
    Specifies the USB Endpoint Usage Type

  Description:
    Value of the bmAttributes field (bits 5:4) in the endpoint descriptor.
 
  Remarks:
    These constants should be used in place of hard-coded numeric literals.
*/

#define USB_USAGE_DATA_ENDPOINT                 0x00
#define USB_USAGE_FEEDBACK_ENDPOINT             0x01
#define USB_USAGE_IMPLICIT_FEEDBACK_DATA_EP     0x02
#define USB_USAGE_RESERVED                      0x03

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif
