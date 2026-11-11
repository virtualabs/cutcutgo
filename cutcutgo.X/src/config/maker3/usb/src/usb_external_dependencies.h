/*******************************************************************************
  USB stack external dependencies file

  Company:
    Microchip Technology Inc.

  File Name:
    usb_external_dependencies.h

  Summary:
    USB stack external dependencies file

  Description:
    USB stack external dependencies file. 
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

#ifndef _USB_EXTERNAL_DEPENDENCIES_H
#define _USB_EXTERNAL_DEPENDENCIES_H

#include <string.h>
#include "system/system_common.h"
#include "configuration.h"
#include "system/system_module.h"

#if defined (USB_HOST_DEVICES_NUMBER) &&  (USB_HOST_DEVICES_NUMBER > 0)
#include "system/time/sys_time.h"
#define SYS_TMR_HANDLE_INVALID SYS_TIME_HANDLE_INVALID
#define SYS_TMR_CallbackSingle(delay,context,callback) SYS_TIME_CallbackRegisterMS(callback,context,delay, SYS_TIME_SINGLE)
#endif 

#ifndef SYS_DEBUG_ENABLE

	#define SYS_DEBUG_PRINT(level, format, ...) 
	#define SYS_DEBUG_MESSAGE(a,b, ...)     
	#define SYS_DEBUG(a,b)
#else
    #include "system/debug/sys_debug.h"
#endif 
#endif 
/*******************************************************************************
 End of File
*/