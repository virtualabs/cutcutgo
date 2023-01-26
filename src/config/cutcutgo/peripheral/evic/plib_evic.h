/*******************************************************************************
  EVIC PLIB Header

  Company:
    Microchip Technology Inc.

  File Name:
    plib_evic.h

  Summary:
    PIC32MZ Interrupt Module PLIB Header File

  Description:
    None

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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

#ifndef PLIB_EVIC_H
#define PLIB_EVIC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <device.h>
#include <stddef.h>
#include <stdbool.h>
#include <device.h>

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

typedef enum
{
    INT_SOURCE_CORE_TIMER = _CORE_TIMER_IRQ,

    INT_SOURCE_CORE_SOFTWARE_0 = _CORE_SOFTWARE_0_IRQ,

    INT_SOURCE_CORE_SOFTWARE_1 = _CORE_SOFTWARE_1_IRQ,

    INT_SOURCE_EXTERNAL_0 = _EXTERNAL_0_IRQ,

    INT_SOURCE_TIMER_1 = _TIMER_1_IRQ,

    INT_SOURCE_INPUT_CAPTURE_ERROR_1 = _INPUT_CAPTURE_ERROR_1_IRQ,

    INT_SOURCE_INPUT_CAPTURE_1 = _INPUT_CAPTURE_1_IRQ,

    INT_SOURCE_OUTPUT_COMPARE_1 = _OUTPUT_COMPARE_1_IRQ,

    INT_SOURCE_EXTERNAL_1 = _EXTERNAL_1_IRQ,

    INT_SOURCE_TIMER_2 = _TIMER_2_IRQ,

    INT_SOURCE_INPUT_CAPTURE_ERROR_2 = _INPUT_CAPTURE_ERROR_2_IRQ,

    INT_SOURCE_INPUT_CAPTURE_2 = _INPUT_CAPTURE_2_IRQ,

    INT_SOURCE_OUTPUT_COMPARE_2 = _OUTPUT_COMPARE_2_IRQ,

    INT_SOURCE_EXTERNAL_2 = _EXTERNAL_2_IRQ,

    INT_SOURCE_TIMER_3 = _TIMER_3_IRQ,

    INT_SOURCE_INPUT_CAPTURE_ERROR_3 = _INPUT_CAPTURE_ERROR_3_IRQ,

    INT_SOURCE_INPUT_CAPTURE_3 = _INPUT_CAPTURE_3_IRQ,

    INT_SOURCE_OUTPUT_COMPARE_3 = _OUTPUT_COMPARE_3_IRQ,

    INT_SOURCE_EXTERNAL_3 = _EXTERNAL_3_IRQ,

    INT_SOURCE_TIMER_4 = _TIMER_4_IRQ,

    INT_SOURCE_INPUT_CAPTURE_ERROR_4 = _INPUT_CAPTURE_ERROR_4_IRQ,

    INT_SOURCE_INPUT_CAPTURE_4 = _INPUT_CAPTURE_4_IRQ,

    INT_SOURCE_OUTPUT_COMPARE_4 = _OUTPUT_COMPARE_4_IRQ,

    INT_SOURCE_EXTERNAL_4 = _EXTERNAL_4_IRQ,

    INT_SOURCE_TIMER_5 = _TIMER_5_IRQ,

    INT_SOURCE_INPUT_CAPTURE_ERROR_5 = _INPUT_CAPTURE_ERROR_5_IRQ,

    INT_SOURCE_INPUT_CAPTURE_5 = _INPUT_CAPTURE_5_IRQ,

    INT_SOURCE_OUTPUT_COMPARE_5 = _OUTPUT_COMPARE_5_IRQ,

    INT_SOURCE_ADC = _ADC_IRQ,

    INT_SOURCE_FAIL_SAFE_MONITOR = _FAIL_SAFE_MONITOR_IRQ,

    INT_SOURCE_RTCC = _RTCC_IRQ,

    INT_SOURCE_FLASH_CONTROL = _FLASH_CONTROL_IRQ,

    INT_SOURCE_COMPARATOR_1 = _COMPARATOR_1_IRQ,

    INT_SOURCE_COMPARATOR_2 = _COMPARATOR_2_IRQ,

    INT_SOURCE_USB = _USB_IRQ,

    INT_SOURCE_SPI1_ERR = _SPI1_ERR_IRQ,

    INT_SOURCE_SPI1_RX = _SPI1_RX_IRQ,

    INT_SOURCE_SPI1_TX = _SPI1_TX_IRQ,

    INT_SOURCE_UART1_ERR = _UART1_ERR_IRQ,

    INT_SOURCE_UART1_RX = _UART1_RX_IRQ,

    INT_SOURCE_UART1_TX = _UART1_TX_IRQ,

    INT_SOURCE_I2C1_BUS = _I2C1_BUS_IRQ,

    INT_SOURCE_I2C1_SLAVE = _I2C1_SLAVE_IRQ,

    INT_SOURCE_I2C1_MASTER = _I2C1_MASTER_IRQ,

    INT_SOURCE_CHANGE_NOTICE_A = _CHANGE_NOTICE_A_IRQ,

    INT_SOURCE_CHANGE_NOTICE_B = _CHANGE_NOTICE_B_IRQ,

    INT_SOURCE_CHANGE_NOTICE_C = _CHANGE_NOTICE_C_IRQ,

    INT_SOURCE_CHANGE_NOTICE_D = _CHANGE_NOTICE_D_IRQ,

    INT_SOURCE_CHANGE_NOTICE_E = _CHANGE_NOTICE_E_IRQ,

    INT_SOURCE_CHANGE_NOTICE_F = _CHANGE_NOTICE_F_IRQ,

    INT_SOURCE_CHANGE_NOTICE_G = _CHANGE_NOTICE_G_IRQ,

    INT_SOURCE_PMP = _PMP_IRQ,

    INT_SOURCE_PMP_ERROR = _PMP_ERROR_IRQ,

    INT_SOURCE_SPI2_ERR = _SPI2_ERR_IRQ,

    INT_SOURCE_SPI2_RX = _SPI2_RX_IRQ,

    INT_SOURCE_SPI2_TX = _SPI2_TX_IRQ,

    INT_SOURCE_UART2_ERR = _UART2_ERR_IRQ,

    INT_SOURCE_UART2_RX = _UART2_RX_IRQ,

    INT_SOURCE_UART2_TX = _UART2_TX_IRQ,

    INT_SOURCE_I2C2_BUS = _I2C2_BUS_IRQ,

    INT_SOURCE_I2C2_SLAVE = _I2C2_SLAVE_IRQ,

    INT_SOURCE_I2C2_MASTER = _I2C2_MASTER_IRQ,

    INT_SOURCE_UART3_ERR = _UART3_ERR_IRQ,

    INT_SOURCE_UART3_RX = _UART3_RX_IRQ,

    INT_SOURCE_UART3_TX = _UART3_TX_IRQ,

    INT_SOURCE_UART4_ERR = _UART4_ERR_IRQ,

    INT_SOURCE_UART4_RX = _UART4_RX_IRQ,

    INT_SOURCE_UART4_TX = _UART4_TX_IRQ,

    INT_SOURCE_CTMU = _CTMU_IRQ,

    INT_SOURCE_DMA0 = _DMA0_IRQ,

    INT_SOURCE_DMA1 = _DMA1_IRQ,

    INT_SOURCE_DMA2 = _DMA2_IRQ,

    INT_SOURCE_DMA3 = _DMA3_IRQ,

} INT_SOURCE;


// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

void EVIC_Initialize ( void );

void EVIC_SourceEnable( INT_SOURCE source );

void EVIC_SourceDisable( INT_SOURCE source );

bool EVIC_SourceIsEnabled( INT_SOURCE source );

bool EVIC_SourceStatusGet( INT_SOURCE source );

void EVIC_SourceStatusSet( INT_SOURCE source );

void EVIC_SourceStatusClear( INT_SOURCE source );

void EVIC_INT_Enable( void );

bool EVIC_INT_Disable( void );

void EVIC_INT_Restore( bool state );


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END

#endif // PLIB_EVIC_H
