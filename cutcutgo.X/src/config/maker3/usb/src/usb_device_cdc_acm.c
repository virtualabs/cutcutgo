/*******************************************************************************
 USB CDC ACM SubClass

  Company:
    Microchip Technology Inc.

  File Name:
    usb_device_cdc_acm.c

  Summary:
    USB CDC ACM SubClass

  Description:
    USB CDC ACM SubClass
 *******************************************************************************/

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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section lists the other files that are included in this file.
 */
#include <stdio.h>
#include <stdint.h>
#include "usb/usb_cdc.h"
#include "usb/usb_device_cdc.h"
#include "usb/src/usb_device_cdc_local.h"

// *****************************************************************************
// *****************************************************************************
// Section: File Scope or Global Constants
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: File Scope or Global Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: File Scope Functions
// *****************************************************************************
// *****************************************************************************

//******************************************************************************
/* Function:
    void _USB_DEVICE_CDC_ACMSetUpPacketHandler ( USB_DEVICE_CDC_INSTANCE *instance,
                                                    uint16_t value )

  Summary:
    Handles ACM sub class specific requests.

  Description:
    This function handles ACM sub class specific requests.

  Remarks:
    Called by the CDC function driver.
 */

void _USB_DEVICE_CDC_ACMSetUpPacketHandler 
(
    SYS_MODULE_INDEX iCDC ,
    USB_DEVICE_CDC_INSTANCE * thisCDCDevice,
    USB_SETUP_PACKET * setupRequest
)
{
    
    /* Check the request */
    switch (setupRequest->bRequest )
    {
        case USB_CDC_REQUEST_SET_LINE_CODING:

            /* Send this event to application. The application
             * should issues a control receive request to receive
             * the data from the host. */

            if(thisCDCDevice->appEventCallBack != NULL)
            {
                thisCDCDevice->appEventCallBack(iCDC, 
                        USB_DEVICE_CDC_EVENT_SET_LINE_CODING, 
                        NULL, thisCDCDevice->userData);
            }

            break;

        case USB_CDC_REQUEST_GET_LINE_CODING:

            /* Send this event to application. The application should
             * issue a control send request to send this request to 
             * the host. */

            if(thisCDCDevice->appEventCallBack != NULL)
            {
                thisCDCDevice->appEventCallBack(iCDC, 
                        USB_DEVICE_CDC_EVENT_GET_LINE_CODING, 
                        NULL, thisCDCDevice->userData);
            }

            break;

        case USB_CDC_REQUEST_SET_CONTROL_LINE_STATE:

            /* In this event, the data is available in the
             * setup packet. Send it to the application */

            if(thisCDCDevice->appEventCallBack != NULL)
            {
                thisCDCDevice->appEventCallBack(iCDC,
                        USB_DEVICE_CDC_EVENT_SET_CONTROL_LINE_STATE,
                        (USB_CDC_CONTROL_LINE_STATE *)(&setupRequest->wValue),
                        thisCDCDevice->userData);
            }

            break;

            /* AT commands */
        case USB_CDC_REQUEST_SEND_ENCAPSULATED_COMMAND:
        case USB_CDC_REQUEST_GET_ENCAPSULATED_RESPONSE:

            /* AT commands are not supported */
            USB_DEVICE_ControlStatus(thisCDCDevice->deviceHandle, 
                    USB_DEVICE_CONTROL_STATUS_ERROR);
            break;

            /* break request */
        case USB_CDC_REQUEST_SEND_BREAK:

            /* In this event, the data is available in the
             * setup packet. Send it to the application */

            if(thisCDCDevice->appEventCallBack != NULL)
            {
                thisCDCDevice->appEventCallBack(iCDC,
                        USB_DEVICE_CDC_EVENT_SEND_BREAK,
                        (uint16_t *)(&setupRequest->wValue), thisCDCDevice->userData);
            }

            break;

            /* requests that do not belog to ACM sub class */
        case USB_CDC_REQUEST_SET_COMM_FEATURE:
        case USB_CDC_REQUEST_GET_COMM_FEATURE:
        case USB_CDC_REQUEST_CLEAR_COMM_FEATURE:
        case USB_CDC_REQUEST_SET_AUX_LINE_STATE:
        case USB_CDC_REQUEST_SET_HOOK_STATE:
        case USB_CDC_REQUEST_PULSE_SETUP:
        case USB_CDC_REQUEST_SEND_PULSE:
        case USB_CDC_REQUEST_SET_PULSE_TIME:
        case USB_CDC_REQUEST_RING_AUX_JACK:
        case USB_CDC_REQUEST_SET_RINGER_PARMS:
        case USB_CDC_REQUEST_GET_RINGER_PARMS:
        case USB_CDC_REQUEST_SET_OPERATIONAL_PARMS:
        case USB_CDC_REQUEST_GET_OPERATIONAL_PARMS:
        case USB_CDC_REQUEST_SET_LINE_PARMS:
        case USB_CDC_REQUEST_GET_LINE_PARMS:
        case USB_CDC_REQUEST_DIAL_DIGITS:
        case USB_CDC_REQUEST_SET_UNIT_PARAMETER:
        case USB_CDC_REQUEST_GET_UNIT_PARAMETER:
        case USB_CDC_REQUEST_CLEAR_UNIT_PARAMETER:
        case USB_CDC_REQUEST_GET_PROFILE:
        case USB_CDC_REQUEST_SET_ETHERNET_MULTICAST_FILTERS:
        case USB_CDC_REQUEST_SET_ETHERNET_POWER_MANAGEMENT_FILTER:
        case USB_CDC_REQUEST_GET_ETHERNET_POWER_MANAGEMENT_FILTER:
        case USB_CDC_REQUEST_SET_ETHERNET_PACKET_FILTER:
        case USB_CDC_REQUEST_GET_ETHERNET_STATISTIC:
        case USB_CDC_REQUEST_SET_ATM_DATA_FORMAT:
        case USB_CDC_REQUEST_GET_ATM_DEVICE_STATISTICS:
        case USB_CDC_REQUEST_SET_ATM_DEFAULT_VC:
        case USB_CDC_REQUEST_GET_ATM_VC_STATISTICS:
        default:

            /* These request are not supported */

            USB_DEVICE_ControlStatus(thisCDCDevice->deviceHandle,
                       USB_DEVICE_CONTROL_STATUS_ERROR);

            break;
    }
}



/*******************************************************************************
 End of File
 */
