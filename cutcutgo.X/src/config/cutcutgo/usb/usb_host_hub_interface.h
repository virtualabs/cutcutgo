/******************************************************************************
  PIC32 USB Host Hub Interface Header File

  Company:
    Microchip Technology Inc.
    
  File Name:
    drv_usb.h
	
  Summary:
    PIC32 USB Host Hub Interface Header File
	
  Description:
    This file contains defintions and structure that implement the interface
    between the USB Host Layer and an external Hub.
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

#ifndef _USB_HOST_HUB_INTERFACE_H_
#define _USB_HOST_HUB_INTERFACE_H_


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END  

// *****************************************************************************
/* USB Hub Port API Interface

  Summary:
    Group of function pointers to the USB Hub Port Functions.

  Description:
    This structure is a group of function pointers pointing to the USB Hub Port
    API routines. The USB Hub or USB root hub should export this group of
    functions so that the Host and device layer can access the port
    functionality.

  Remarks:
    None.
*/

typedef struct
{
    /* This is a pointer to the port reset function */
    USB_ERROR (*hubPortReset)(uintptr_t hubAddress, uint8_t port);

    /* This is pointer to the port reset completion status inquiry function */
    bool (*hubPortResetIsComplete)(uintptr_t hubAddress, uint8_t port);

    /* This is pointer to the port suspend function */
    USB_ERROR(*hubPortSuspend)(uintptr_t hubAddress, uint8_t port);

    /* This is a pointer to the port resume function */
    USB_ERROR(*hubPortResume)(uintptr_t hubAddress, uint8_t port);

    /* This is a pointer to the port speed get function */
    USB_SPEED(*hubPortSpeedGet)(uintptr_t hubAddress, uint8_t port);

} USB_HUB_INTERFACE;


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif

