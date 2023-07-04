/*******************************************************************************
  USB stack external dependencies file

  Company:
    Microchip Technology Inc.

  File Name:
    drv_usb_external_dependencies.h

  Summary:
    USB Driver external dependencies file

  Description:
    USB Driver external dependencies file. 
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

#ifndef _DRV_USB_EXTERNAL_DEPENDENCIES_H
#define _DRV_USB_EXTERNAL_DEPENDENCIES_H

#include <string.h>
#include "system/system_common.h"
#include "configuration.h"
#include "definitions.h"
#include "system/system_module.h"

#if  !defined(SYS_DEBUG_ENABLE) 

    #if  !defined(SYS_DEBUG_PRINT)
        #define SYS_DEBUG_PRINT(level, format, ...) 
    #endif

    #if  !defined(SYS_DEBUG_MESSAGE)
        #define SYS_DEBUG_MESSAGE(a,b, ...)   
    #endif

    #if  !defined(SYS_DEBUG)
        #define SYS_DEBUG(a,b)
    #endif 
#endif 
#endif /* End of #ifndef _DRV_USB_EXTERNAL_DEPENDENCIES_H */ 
/*******************************************************************************
 End of File
*/
