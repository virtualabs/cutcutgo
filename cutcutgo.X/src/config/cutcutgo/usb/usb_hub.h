/*******************************************************************************
  USB HOST HUB driver Interface Definition

  Company:
    Microchip Technology Inc.

  File Name:
    usb_hub.h

  Summary:
    USB HUB Layer Interface Header

  Description:
    This header file contains the function prototypes and definitions of the
    data types and constants that make up the interface to the USB HOST HUB
    driver
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

#ifndef _USB_HOST_HUB_H
#define _USB_HOST_HUB_H

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "system/system_common.h"
#include "driver/driver_common.h"
#include "usb/usb_host.h"
#include "usb/usb_host_client_driver.h"

// *****************************************************************************
// *****************************************************************************
// Section: USB HOST HUB CLASS DRIVER Constants
// *****************************************************************************
// *****************************************************************************

/* HUB Class codes as defined by USB */
#define USB_HUB_CLASS_CODE  0x09

/* bDescriptorType for Hub Descriptors */
#define USB_HUB_DESCRIPTOR_TYPE 0x29     

// *****************************************************************************
/* USB Hub Port Indicator Colors

  Summary:
    Enumerates the color of the Port Indicators.

  Description:
    This enumeration lists the possible Hub Port Indicator Colors.

  Remarks:
    None.
*/

typedef enum
{
    /* Port Indicator Color Green */ 
    USB_HUB_PORT_INDICATOR_COLOR_GREEN,

    /* Port Indicator Color Amber */
    USB_HUB_PORT_INDICATOR_COLOR_AMBER

} USB_HUB_PORT_INDICATOR_COLOR;

// *****************************************************************************
/* USB Hub Port Indicator State

  Summary:
    Enumerates the state of the Port Indicators.

  Description:
    This enumeration lists the possible Hub Port Indicator states.

  Remarks:
    None.
*/

typedef enum
{
    /* Port Indicator should be off */
    USB_HUB_PORT_INDICATOR_STATE_OFF,

    /* Port Indicator should be on */
    USB_HUB_PORT_INDICATOR_STATE_ON,

    /* Port Indicator should be blinking */
    USB_HUB_PORT_INDICATOR_STATE_BLINKING,

} USB_HUB_PORT_INDICATOR_STATE;

// *****************************************************************************
/* USB Hub Port Status

  Summary:
    This is the Hub port status.

  Description:
    This data type defines the Hub Port Status. This is the type of data that is
    received from the Hub in reponse to a Hub Port Status Control Request.

  Remarks:
    None.
*/

typedef struct __attribute__ ((packed))
{
    union 
    {
         struct __attribute__ ((packed))
         {
            uint16_t currentConnectStatus :1 ; 
            uint16_t portEnabledDisabled :1 ;
            uint16_t suspend :1 ;
            uint16_t overCurrent :1 ;
            uint16_t reset :1 ;
            uint16_t reserved :3 ;
            uint16_t portPower :1 ;
            uint16_t lowSpeedDeviceAttached :1 ;
            uint16_t highSpeedDeviceAttached :1 ;
            uint16_t portTestMode :1 ;
            uint16_t portIndicatorControl :1 ;
            uint16_t reserved1:3;
         };
         uint16_t    wPortStatus;
    };
    
    union 
    {
         struct __attribute__ ((packed))
         {
            uint16_t connectStatusChange:1 ; 
            uint16_t portEnableDisableChange:1 ;
            uint16_t suspendChange :1 ;
            uint16_t overCurrentIndicatorChange:1 ;
            uint16_t resetChange:1 ;
      
         };
         uint16_t    wPortChange;
    };
      
} USB_HOST_PORT_STATUS;

// *****************************************************************************
/* USB Hub Status

  Summary:
    This is the Hub status data type.

  Description:
    This data type defines the Hub Status. This is the type of data that is
    received from the Hub in reponse to a Hub Status Control Request.

  Remarks:
    None.
*/

typedef struct __attribute__ ((packed))
{
    union 
    {
         struct __attribute__ ((packed))
         {
            uint16_t localPowerSource :1 ; 
            uint16_t overCurrent :1 ;
         };
         uint16_t    wHubStatus;
    };
    
    union 
    {
         struct __attribute__ ((packed))
         {
             uint16_t localPowerStatusChange:1 ; 
             uint16_t overCurrentChange:1 ;
         };
         uint16_t    wHubChange;
    };

} USB_HUB_STATUS;

// *****************************************************************************
/* USB Hub Class Request Codes

  Summary:
    This is an enumeration of different Hub Class Request Codes.

  Description:
    This enumeration defines the possible Hub Class Request Codes. This is
    defined in table 11-16 of the USB 2.0 specification.

  Remarks:
    None.
*/

typedef enum
{
    USB_HUB_CLASS_REQUEST_GET_STATUS     = 0x0,
    USB_HUB_CLASS_REQUEST_CLEAR_FEATURE  = 0x1,
    USB_HUB_CLASS_REQUEST_SET_FEATURE    = 0x3,
    USB_HUB_CLASS_REQUEST_GET_DESCRIPTOR = 0x6,
    USB_HUB_CLASS_REQUEST_SET_DESCRIPTOR = 0x7,
    USB_HUB_CLASS_REQUEST_CLEAR_TT_BUFFER = 0x8

} USB_HOST_CLASS_REQUEST;

// *****************************************************************************
/* USB Hub Class Feature Selectors

  Summary:
    This is an enumeration of different Hub Class Feature Selectors.

  Description:
    This enumeration defines the possible Hub Class Feature Selectors. This is
    defined in table 11-17 of the USB 2.0 specification.

  Remarks:
    None.
*/

typedef enum
{
    USB_HUB_CLASS_FEATURE_C_HUB_LOCAL_POWER = 0,
    USB_HUB_CLASS_FEATURE_C_HUB_OVER_CURRENT = 1,
    USB_HUB_CLASS_FEATURE_PORT_CONNECTION = 0,
    USB_HUB_CLASS_FEATURE_PORT_ENABLE = 1,
    USB_HUB_CLASS_FEATURE_PORT_SUSPEND = 2,
    USB_HUB_CLASS_FEATURE_PORT_OVER_CURRENT = 3,
    USB_HUB_CLASS_FEATURE_PORT_RESET = 4,
    USB_HUB_CLASS_FEATURE_PORT_POWER = 8,
    USB_HUB_CLASS_FEATURE_PORT_LOW_SPEED = 9,
    USB_HUB_CLASS_FEATURE_C_PORT_CONNECTION = 16,
    USB_HUB_CLASS_FEATURE_C_PORT_ENABLE = 17,
    USB_HUB_CLASS_FEATURE_C_PORT_SUSPEND = 18,
    USB_HUB_CLASS_FEATURE_C_PORT_OVER_CURRENT = 19,
    USB_HUB_CLASS_FEATURE_C_PORT_RESET = 20,
    USB_HUB_CLASS_FEATURE_PORT_TEST = 21,
    USB_HUB_CLASS_FEATURE_PORT_INDICATOR = 22

} USB_HUB_CLASS_FEATURE;
 
//*****************************************************************************
/* USB Host Hub Descriptor

  Summary:
    Defines the USB Hub Descriptor.

  Description:
    This structure defines USB Hub Descriptor. This as per Table 11-13 of the
    USB 2.0 specification.

  Remarks:
    None.
*/

typedef struct __attribute__((packed)) 
{
    uint8_t  bDescLength;        
    uint8_t  bDescriptorType;    
    uint8_t  bNbrPorts;          
    uint16_t wHubCharacteristics;    
    uint8_t  bPwrOn2PwrGood;     
    uint8_t  bHubContrCurrent;   
    uint8_t  DeviceRemovable;    
    uint8_t  PortPwrCtrlMask;    
    
} USB_HUB_DESCRIPTOR;

#endif

