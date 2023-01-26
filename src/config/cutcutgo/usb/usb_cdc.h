/*******************************************************************************
  USB CDC class definitions

  Company:
    Microchip Technology Inc.

  File Name:
    usb_cdc.h

  Summary:
    USB CDC class definitions

  Description:
    This file describes the CDC class specific definitions. This file is
    included by usb_device_cdc.h and usb_host_cdc.h header files. The
    application can include this file if it needs to use any USB CDC Class
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
// DOM-IGNORE-END

#ifndef _USB_CDC_H
#define _USB_CDC_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Constants
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* CDC Interface Class Subclass and Protocol constants.

  Summary:
    Identifies the CDC Interface Class, Subclass and protocol constants.

  Description:
    These constants identify the CDC Interface Class, Subclass and protocol
    constants.

  Remarks:
    None.
*/

#define USB_CDC_CLASS_CODE                              0x02
#define USB_CDC_SUBCLASS_CODE                           0x00
#define USB_CDC_COMMUNICATIONS_INTERFACE_CLASS_CODE     0x02
#define USB_CDC_DATA_INTERFACE_CLASS_CODE               0x0A
#define USB_CDC_DATA_INTERFACE_SUBCLASS_CODE            0x00
#define USB_CDC_DATA_INTERFACE_PROTOCOL                 0x00
#define CS_INTERFACE                                    0x24

/* Bit code information in line state */
#define USB_CDC_LINESTATE_CARRIER                       0

/* Bit code information in line state */
#define USB_CDC_LINESTATE_DTR                           1

/* CDC specific request */
#define USB_CDC_REQUEST_CLASS_SPECIFIC                  0x20

/* CDC Line Coding specific macro definitions */
#define USB_CDC_LINE_CODING_STOP_1_BIT                  0x00
#define USB_CDC_LINE_CODING_STOP_1_5_BIT                0x01
#define USB_CDC_LINE_CODING_STOP_2_BIT                  0x02
        
#define USB_CDC_LINE_CODING_PARITY_NONE                 0x00
#define USB_CDC_LINE_CODING_PARITY_ODD                  0x01
#define USB_CDC_LINE_CODING_PARITY_EVEN                 0x02
#define USB_CDC_LINE_CODING_PARITY_MARK                 0x03
#define USB_CDC_LINE_CODING_PARITY_SPACE                0x04

#define USB_CDC_LINE_CODING_DATA_5_BIT                  0x05
#define USB_CDC_LINE_CODING_DATA_6_BIT                  0x06
#define USB_CDC_LINE_CODING_DATA_7_BIT                  0x07
#define USB_CDC_LINE_CODING_DATA_8_BIT                  0x08
#define USB_CDC_LINE_CODING_DATA_16_BIT                 0x10


// *****************************************************************************
/* CDC ACM capabilities.

  Summary:
    Identifies the CDC ACM sub-class capabilities.

  Description:
    This enumeration identifies the CDC ACM sub-class capabilities.

  Remarks:
    This value goes into the bDescriptorSubtype of CDC functional descriptor.
*/

#define USB_CDC_ACM_SUPPORT_NONE                                     ( 0 )
#define USB_CDC_ACM_SUPPORT_COMM_FEATURE                             ( 1 << 0 )
#define USB_CDC_ACM_SUPPORT_LINE_CODING_LINE_STATE_AND_NOTIFICATION  ( 1 << 1 )
#define USB_CDC_ACM_SUPPORT_BREAK                                    ( 1 << 2 )
#define USB_CDC_ACM_SUPPORT_NETWORK_NOTIFICATION                     ( 1 << 3 )

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* CDC Communication interface subclass codes

  Summary:
    Identifies the subclass codes for communication interface. 

  Description:
    This enumeration identifies the possible subclass codes for CDC
    communication interface

  Remarks:
    None.
*/

typedef enum
{
    USB_CDC_SUBCLASS_DIRECT_LINE_CONTROL_MODEL     = 0x01,
    USB_CDC_SUBCLASS_ABSTRACT_CONTROL_MODEL        = 0x02,
    USB_CDC_SUBCLASS_TELEPHONE_CONTROL_MODEL       = 0x03,
    USB_CDC_SUBCLASS_MULTI_CHANNEL_CONTROL_MODEL   = 0x04,
    USB_CDC_SUBCLASS_CAPI_CONTROL_MODEL            = 0x05,
    USB_CDC_SUBCLASS_ETH_NW_CONTROL_MODEL          = 0x06,
    USB_CDC_SUBCLASS_ATM_NW_CONTROL_MODEL          = 0x07,
    USB_CDC_SUBCLASS_WL_HANDSET_CONTROL_MODEL      = 0x08,
    USB_CDC_SUBCLASS_DEV_MANAGEMENT_CONTROL_MODEL  = 0x09,
    USB_CDC_SUBCLASS_MOBILE_DL_CONTROL_MODEL       = 0x0A,
    USB_CDC_SUBCLASS_OBEX                          = 0x0B,      
    USB_CDC_SUBCLASS_ETH_EMULATION_MODEL           = 0x0C

} USB_CDC_SUBCLASS;

// *****************************************************************************
/* CDC notification codes

  Summary:
    Identifies the notification codes available for CDC.

  Description:
    This enumeration identifies the possible notification codes available for
    CDC.

  Remarks:
    None.
*/

typedef enum
{
    USB_CDC_NOTIFICATION_NETWORK_CONNECTION        = 0x00,
    USB_CDC_NOTIFICATION_RESPONSE_AVAILABLE        = 0x01,
    USB_CDC_NOTIFICATION_AUX_JACK_HOOK_STATE       = 0x08,
    USB_CDC_NOTIFICATION_RING_DETECT               = 0x09,
    USB_CDC_NOTIFICATION_SERIAL_STATE              = 0x20,
    USB_CDC_NOTIFICATION_CALL_STATE_CHANGE         = 0x28,
    USB_CDC_NOTIFICATION_LINE_STATE_CHANGE         = 0x29,
    USB_CDC_NOTIFICATION_CONNECTION_SPEED_CHANGE   = 0x2A

} USB_CDC_NOTIFICATION;

// *****************************************************************************
/* CDC request codes

  Summary:
    Identifies the CDC specific request codes.

  Description:
    This enumeration identifies the possible CDC specific request codes.

  Remarks:
    None.
*/

typedef enum
{
    USB_CDC_REQUEST_SEND_ENCAPSULATED_COMMAND               = 0x00,
    USB_CDC_REQUEST_GET_ENCAPSULATED_RESPONSE               = 0x01,
    USB_CDC_REQUEST_SET_COMM_FEATURE                        = 0x02,
    USB_CDC_REQUEST_GET_COMM_FEATURE                        = 0x03,
    USB_CDC_REQUEST_CLEAR_COMM_FEATURE                      = 0x04,
    USB_CDC_REQUEST_SET_AUX_LINE_STATE                      = 0x10,
    USB_CDC_REQUEST_SET_HOOK_STATE                          = 0x11,
    USB_CDC_REQUEST_PULSE_SETUP                             = 0x12,
    USB_CDC_REQUEST_SEND_PULSE                              = 0x13,
    USB_CDC_REQUEST_SET_PULSE_TIME                          = 0x14,
    USB_CDC_REQUEST_RING_AUX_JACK                           = 0x15,
    USB_CDC_REQUEST_SET_LINE_CODING                         = 0x20,
    USB_CDC_REQUEST_GET_LINE_CODING                         = 0x21,
    USB_CDC_REQUEST_SET_CONTROL_LINE_STATE                  = 0x22,
    USB_CDC_REQUEST_SEND_BREAK                              = 0x23,
    USB_CDC_REQUEST_SET_RINGER_PARMS                        = 0x30,
    USB_CDC_REQUEST_GET_RINGER_PARMS                        = 0x31,
    USB_CDC_REQUEST_SET_OPERATIONAL_PARMS                   = 0x32,
    USB_CDC_REQUEST_GET_OPERATIONAL_PARMS                   = 0x33,
    USB_CDC_REQUEST_SET_LINE_PARMS                          = 0x34,
    USB_CDC_REQUEST_GET_LINE_PARMS                          = 0x35,
    USB_CDC_REQUEST_DIAL_DIGITS                             = 0x36,
    USB_CDC_REQUEST_SET_UNIT_PARAMETER                      = 0x37,
    USB_CDC_REQUEST_GET_UNIT_PARAMETER                      = 0x38,
    USB_CDC_REQUEST_CLEAR_UNIT_PARAMETER                    = 0x39,
    USB_CDC_REQUEST_GET_PROFILE                             = 0x3A,
    USB_CDC_REQUEST_SET_ETHERNET_MULTICAST_FILTERS          = 0x40,
    USB_CDC_REQUEST_SET_ETHERNET_POWER_MANAGEMENT_FILTER    = 0x41,
    USB_CDC_REQUEST_GET_ETHERNET_POWER_MANAGEMENT_FILTER    = 0x42,
    USB_CDC_REQUEST_SET_ETHERNET_PACKET_FILTER              = 0x43,
    USB_CDC_REQUEST_GET_ETHERNET_STATISTIC                  = 0x44,
    USB_CDC_REQUEST_SET_ATM_DATA_FORMAT                     = 0x50,
    USB_CDC_REQUEST_GET_ATM_DEVICE_STATISTICS               = 0x51,
    USB_CDC_REQUEST_SET_ATM_DEFAULT_VC                      = 0x52,
    USB_CDC_REQUEST_GET_ATM_VC_STATISTICS                   = 0x53,
    USB_CDC_REQUEST_NONE                                    = 0xFF

} USB_CDC_REQUEST;

// *****************************************************************************
/* CDC protocol codes

  Summary:
    Identifies the protocol codes.

  Description:
    This enumeration identifies the possible protocol codes for CDC.

  Remarks:
    None.
*/

typedef enum
{
    USB_CDC_PROTOCOL_NO_CLASS_SPECIFIC      = 0x00,
    USB_CDC_PROTOCOL_AT_V250                = 0x01,
    USB_CDC_PROTOCOL_AT_PCCA                = 0x02,
    USB_CDC_PROTOCOL_AT_PCCA_ANNEX_O        = 0x03,
    USB_CDC_PROTOCOL_AT_GSM                 = 0x04,
    USB_CDC_PROTOCOL_AT_3GPP                = 0x05,
    USB_CDC_PROTOCOL_AT_CDMA                = 0x06,
    USB_CDC_PROTOCOL_ETH_EMULATION          = 0x07,
    USB_CDC_PROTOCOL_EXTERNAL               = 0xFE,
    USB_CDC_PROTOCOL_VENDOR_SPECIFIC        = 0xFF

} USB_CDC_INF_PROTOCOL;

// *****************************************************************************
/* CDC descriptor type.

  Summary:
    Identifies the descriptor types in the CDC.

  Description:
    This enumeration identifies the descriptor types in the CDC.

  Remarks:
    This value goes into the bDescriptorType of CDC functional descriptor.
*/

typedef enum
{
    USB_CDC_DESC_CS_INTERFACE       = 0x24,
    USB_CDC_DESC_CS_ENDPOINT        = 0x25

} USB_CDC_DESCRIPTOR_TYPE;

// *****************************************************************************
/* CDC function header type.

  Summary:
    Identifies the CDC function header type.

  Description:
    This enumeration identifies the CDC function header type.

  Remarks:
    This value goes into the bDescriptorSubtype of CDC functional descriptor.
*/

typedef enum
{
    USB_CDC_FUNCTIONAL_HEADER                                   = 0x00,
    USB_CDC_FUNCTIONAL_CALL_MANAGEMENT                          = 0x01,
    USB_CDC_FUNCTIONAL_ABSTRACT_CONTROL_MANAGEMENT              = 0x02,
    USB_CDC_FUNCTIONAL_DIRECT_LINE                              = 0x03,
    USB_CDC_FUNCTIONAL_TELEPHONE_RINGER                         = 0x04,
    USB_CDC_FUNCTIONAL_TELEPHONE_CALL_AND_LINE_STATE_REPORTING  = 0x05,
    USB_CDC_FUNCTIONAL_UNION                                    = 0x06,
    USB_CDC_FUNCTIONAL_COUNTRY_SELECT                           = 0x07,
    USB_CDC_FUNCTIONAL_TELEPHONE_OPERATIONAL_MODES              = 0x08,
    USB_CDC_FUNCTIONAL_USB_TERMINAL                             = 0x09,
    USB_CDC_FUNCTIONAL_NETWORK_CHANNEL_TERMINAL                 = 0x0A,
    USB_CDC_FUNCTIONAL_PROTOCOL_UNIT                            = 0x0B,
    USB_CDC_FUNCTIONAL_EXTENSION_UNIT                           = 0x0C,
    USB_CDC_FUNCTIONAL_MULTI_CHANNEL_MANAGEMENT                 = 0x0D,
    USB_CDC_FUNCTIONAL_CAPI_CONTROL                             = 0x0E,
    USB_CDC_FUNCTIONAL_ETHERNET_NETWORKING                      = 0x0F,
    USB_CDC_FUNCTIONAL_ATM_NETWORKING                           = 0x10,
    USB_CDC_FUNCTIONAL_WIRELESS_HANDSET                         = 0x11,
    USB_CDC_FUNCTIONAL_MOBILE_DIRECT_LINE                       = 0x12,
    USB_CDC_FUNCTIONAL_MDLM_DETAIL                              = 0x13,
    USB_CDC_FUNCTIONAL_DEVICE_MANAGEMENT                        = 0x14,
    USB_CDC_FUNCTIONAL_OBEX                                     = 0x15,
    USB_CDC_FUNCTIONAL_COMMAND_SET                              = 0x16,
    USB_CDC_FUNCTIONAL_COMMAND_SET_DETAIL                       = 0x17,
    USB_CDC_FUNCTIONAL_TELEPHONE_CONTROL                        = 0x18,
    USB_CDC_FUNCTIONAL_OBEX_SERVICE_IDENTIFY                    = 0x19

} USB_CDC_FUNCTIONAL_DESCRIPTOR;

// *****************************************************************************
/* CDC interface type.

  Summary:
    Identifies the CDC interface type.

  Description:
    This enumeration identifies the CDC interface type. CDC has one mandatory 
    data interface and an optional notification interface.

  Remarks:
    None.
*/

typedef enum
{
    USB_CDC_INTERFACE_DATA          = 0,
    USB_CDC_INTERFACE_NOTIFICATION

} USB_CDC_INTERFACE_TYPE;

// *****************************************************************************
/* CDC line coding.

  Summary:
    Identifies the CDC line coding information.

  Description:
    This type identifies the CDC line coding information. This structure is 
    as per the USB protocol.

  Remarks:
    Need to be packed always.
*/
                                    
typedef struct __attribute__ ((packed))
{
    /* data terminal rate in bits per second */
    uint32_t dwDTERate;

    /* stop bits */
    uint8_t bCharFormat;

    /* Parity */
    uint8_t bParityType;

    /* Data bits */
    uint8_t bDataBits;

} USB_CDC_LINE_CODING;

// *****************************************************************************
/* CDC control line state.

  Summary:
    Identifies the CDC control line state.

  Description:
    This type identifies the CDC control line state information. This structure
    is as per the USB protocol. Used for
    SET_CONTROL_LINE_STATE/GET_CONTROL_LINE_STATE

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    /* indicates to DCE(device/modem) if DTE(host) is present or not*/
    uint8_t dtr:1;
    
    /* Activate/deactivate carrier (RTS)*/
    uint8_t carrier:1;
    
} USB_CDC_CONTROL_LINE_STATE;

// *****************************************************************************
/* CDC serial state.

  Summary:
    Identifies the CDC serial state.

  Description:
    This type identifies the CDC serial state.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bRxCarrier  :1;
    uint8_t bTxCarrier  :1;
    uint8_t bBreak      :1;
    uint8_t bRingSignal :1;
    uint8_t bFraming    :1;
    uint8_t bParity     :1;
    uint8_t bOverRun    :1;
    uint8_t             :1;
    uint8_t             :8;

} USB_CDC_SERIAL_STATE;

// *****************************************************************************
/* CDC serial state response.

  Summary:
    Identifies the CDC serial state response.

  Description:
    This type identifies the CDC serial state response. Sent via the interrupt
    IN end-point whenever there is a state change.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bmRequestType;
    uint8_t bNotification;
    uint16_t wValue;
    uint16_t wIndex;
    uint16_t wLength;
    USB_CDC_SERIAL_STATE stSerial;
    
} USB_CDC_SERIAL_STATE_RESPONSE;

// *****************************************************************************
/* CDC serial response available information.

  Summary:
    Contains the CDC serial response available information.

  Description:
    This type forms the CDC serial response available. Sent via the interrupt IN
    end-point whenever there is a response available.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    uint8_t bmRequestType;
    uint8_t bNotification;
    uint16_t wValue;
    uint16_t wIndex;
    uint16_t wLength;

} USB_CDC_SERIAL_RESPONSE_AVAILABLE;

// *****************************************************************************
/* CDC header functional descriptor.

  Summary:
    Identifies the CDC header functional descriptor.

  Description:
    This type identifies the CDC header functional descriptor. This structure 
    is as per the USB protocol.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    /* Size of this descriptor in bytes */
    uint8_t bFunctionLength;

    /* Descriptor type */
    uint8_t bDescriptorType;

    /* functional descriptor sub-type */
    uint8_t bDescriptorSubtype;

    /* CDC specification release number */
    uint16_t bcdCDC;

} USB_CDC_HEADER_FUNCTIONAL_DESCRIPTOR;

// *****************************************************************************
/* CDC union functional descriptor.

  Summary:
    Identifies the CDC union functional descriptor.

  Description:
    This type identifies the CDC union functional descriptor. This structure 
    is as per the USB protocol.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    /* Size of this descriptor in bytes */
    uint8_t bFunctionLength;

    /* Descriptor type */
    uint8_t bDescriptorType;

    /* functional descriptor sub-type */
    uint8_t bDescriptorSubtype;

    /* controlling interface for the union */
    uint8_t bControllInterface;

} USB_CDC_UNION_FUNCTIONAL_DESCRIPTOR_HEADER;

typedef uint8_t USB_CDC_UNION_FUNCTIONAL_DESCRIPTOR_SUBORDINATE;

// *****************************************************************************
/* CDC ACM functional descriptor.

  Summary:
    Identifies the CDC ACM functional descriptor.

  Description:
    This type identifies the CDC ACM functional descriptor. This structure is as
    per the USB protocol.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    /* Size of this descriptor in bytes */
    uint8_t bFunctionLength;

    /* Descriptor type */
    uint8_t bDescriptorType;

    /* functional descriptor sub-type */
    uint8_t bDescriptorSubtype;

    /* The capabilities that this configuration supports */
    uint8_t bmCapabilities;

} USB_CDC_ACM_FUNCTIONAL_DESCRIPTOR;

// *****************************************************************************
/* CDC Call Management functional descriptor.

  Summary:
    Identifies the CDC Call Management functional descriptor.

  Description:
    This type identifies the CDC Call Management functional descriptor.  This
    structure is as per the USB protocol.

  Remarks:
    Need to be packed always.
*/

typedef struct __attribute__ ((packed))
{
    /* Size of this descriptor in bytes */
    uint8_t bFunctionLength;
    
    /* Descriptor type */
    uint8_t bDescriptorType;
    
    /* functional descriptor sub-type */
    uint8_t bDescriptorSubtype;
    
    /* The capabilities that this configuration supports */
    uint8_t bmCapabilities;
    
    /* Interface number of Data Class interface optionally used for call management */
    uint8_t bDataInterface;
    
} USB_CDC_CALL_MANAGEMENT_DESCRIPTOR;

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif
