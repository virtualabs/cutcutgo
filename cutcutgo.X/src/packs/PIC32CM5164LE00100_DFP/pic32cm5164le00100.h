/*
 * Header file for PIC32CM5164LE00100
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* File generated from device description version 2022-03-31T12:21:24Z */
#ifndef _PIC32CM5164LE00100_H_
#define _PIC32CM5164LE00100_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (0)

/* PIC32CM5164LE00100 definitions
  This file defines all structures and symbols for PIC32CM5164LE00100:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_UINT8_) || defined(_UINT16_) || defined(_UINT32_)
#    error "Integer constant value macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with sizes of integer constants for C/C++ */
#  define _UINT8_(x)   ((uint8_t)(x))    /* C code: 8-bits unsigned integer constant value */
#  define _UINT16_(x)  ((uint16_t)(x))   /* C code: 16-bits unsigned integer constant value */
#  define _UINT32_(x)  ((uint32_t)(x))   /* C code: 32-bits unsigned integer constant value */

#else /* Assembler */

#  define _UINT8_(x) x    /* Assembler: 8-bits unsigned integer constant value */
#  define _UINT16_(x) x   /* Assembler: 16-bits unsigned integer constant value */
#  define _UINT32_(x) x   /* Assembler: 32-bits unsigned integer constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/* CMSIS DEFINITIONS FOR PIC32CM5164LE00100                                 */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M23 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/******  PIC32CM5164LE00100 specific Interrupt Numbers ***********************************/
  MCLK_IRQn                 =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PM SUPC (MCLK) */
  OSCCTRL_IRQn              =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PM SUPC (OSCCTRL) */
  SUPC_IRQn                 =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PM SUPC (SUPC) */
  OSC32KCTRL_IRQn           =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PM SUPC (OSC32KCTRL) */
  PM_IRQn                   =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PM SUPC (PM) */
  WDT_IRQn                  =   1, /* 1   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   2, /* 2   Real-Time Counter (RTC)             */
  EIC_EXTINT_0_IRQn         =   3, /* 3   External Interrupt Controller (EIC) */
  EIC_EXTINT_1_IRQn         =   4, /* 4   External Interrupt Controller (EIC) */
  EIC_EXTINT_2_IRQn         =   5, /* 5   External Interrupt Controller (EIC) */
  EIC_EXTINT_3_IRQn         =   6, /* 6   External Interrupt Controller (EIC) */
  EIC_EXTINT_4_IRQn         =   7, /* 7   External Interrupt Controller (EIC) */
  EIC_EXTINT_5_IRQn         =   8, /* 8   External Interrupt Controller (EIC) */
  EIC_EXTINT_6_IRQn         =   9, /* 9   External Interrupt Controller (EIC) */
  EIC_EXTINT_7_IRQn         =  10, /* 10  External Interrupt Controller (EIC) */
  EIC_OTHER_IRQn            =  11, /* 11  External Interrupt Controller (EIC) */
  FREQM_IRQn                =  12, /* 12  Frequency Meter (FREQM)             */
  NVMCTRL_IRQn              =  13, /* 13  Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_0_IRQn               =  15, /* 15  Direct Memory Access Controller (DMAC) */
  DMAC_1_IRQn               =  16, /* 16  Direct Memory Access Controller (DMAC) */
  DMAC_2_IRQn               =  17, /* 17  Direct Memory Access Controller (DMAC) */
  DMAC_3_IRQn               =  18, /* 18  Direct Memory Access Controller (DMAC) */
  DMAC_OTHER_IRQn           =  19, /* 19  Direct Memory Access Controller (DMAC) */
  USB_IRQn                  =  20, /* 20  Universal Serial Bus (USB)          */
  EVSYS_0_IRQn              =  21, /* 21  Event System Interface (EVSYS)      */
  EVSYS_1_IRQn              =  22, /* 22  Event System Interface (EVSYS)      */
  EVSYS_2_IRQn              =  23, /* 23  Event System Interface (EVSYS)      */
  EVSYS_3_IRQn              =  24, /* 24  Event System Interface (EVSYS)      */
  EVSYS_4_IRQn              =  25, /* 25  Event System Interface (EVSYS)      */
  EVSYS_5_IRQn              =  26, /* 26  Event System Interface (EVSYS)      */
  EVSYS_6_IRQn              =  27, /* 27  Event System Interface (EVSYS)      */
  EVSYS_7_IRQn              =  28, /* 28  Event System Interface (EVSYS)      */
  PAC_IRQn                  =  30, /* 30  Peripheral Access Controller (PAC)  */
  SERCOM0_0_IRQn            =  31, /* 31  Serial Communication Interface (SERCOM0) */
  SERCOM0_1_IRQn            =  32, /* 32  Serial Communication Interface (SERCOM0) */
  SERCOM0_2_IRQn            =  33, /* 33  Serial Communication Interface (SERCOM0) */
  SERCOM0_OTHER_IRQn        =  34, /* 34  Serial Communication Interface (SERCOM0) */
  SERCOM1_0_IRQn            =  35, /* 35  Serial Communication Interface (SERCOM1) */
  SERCOM1_1_IRQn            =  36, /* 36  Serial Communication Interface (SERCOM1) */
  SERCOM1_2_IRQn            =  37, /* 37  Serial Communication Interface (SERCOM1) */
  SERCOM1_OTHER_IRQn        =  38, /* 38  Serial Communication Interface (SERCOM1) */
  SERCOM2_0_IRQn            =  39, /* 39  Serial Communication Interface (SERCOM2) */
  SERCOM2_1_IRQn            =  40, /* 40  Serial Communication Interface (SERCOM2) */
  SERCOM2_2_IRQn            =  41, /* 41  Serial Communication Interface (SERCOM2) */
  SERCOM2_OTHER_IRQn        =  42, /* 42  Serial Communication Interface (SERCOM2) */
  SERCOM3_0_IRQn            =  43, /* 43  Serial Communication Interface (SERCOM3) */
  SERCOM3_1_IRQn            =  44, /* 44  Serial Communication Interface (SERCOM3) */
  SERCOM3_2_IRQn            =  45, /* 45  Serial Communication Interface (SERCOM3) */
  SERCOM3_OTHER_IRQn        =  46, /* 46  Serial Communication Interface (SERCOM3) */
  SERCOM4_0_IRQn            =  47, /* 47  Serial Communication Interface (SERCOM4) */
  SERCOM4_1_IRQn            =  48, /* 48  Serial Communication Interface (SERCOM4) */
  SERCOM4_2_IRQn            =  49, /* 49  Serial Communication Interface (SERCOM4) */
  SERCOM4_OTHER_IRQn        =  50, /* 50  Serial Communication Interface (SERCOM4) */
  SERCOM5_0_IRQn            =  51, /* 51  Serial Communication Interface (SERCOM5) */
  SERCOM5_1_IRQn            =  52, /* 52  Serial Communication Interface (SERCOM5) */
  SERCOM5_2_IRQn            =  53, /* 53  Serial Communication Interface (SERCOM5) */
  SERCOM5_OTHER_IRQn        =  54, /* 54  Serial Communication Interface (SERCOM5) */
  TC0_IRQn                  =  55, /* 55  Basic Timer Counter (TC0)           */
  TC1_IRQn                  =  56, /* 56  Basic Timer Counter (TC1)           */
  TC2_IRQn                  =  57, /* 57  Basic Timer Counter (TC2)           */
  TCC0_IRQn                 =  58, /* 58  Timer Counter for Control Applications (TCC0) */
  TCC1_IRQn                 =  59, /* 59  Timer Counter for Control Applications (TCC1) */
  TCC2_IRQn                 =  60, /* 60  Timer Counter for Control Applications (TCC2) */
  TCC3_IRQn                 =  61, /* 61  Timer Counter for Control Applications (TCC3) */
  ADC_OTHER_IRQn            =  62, /* 62  Analog Digital Converter (ADC)      */
  ADC_RESRDY_IRQn           =  63, /* 63  Analog Digital Converter (ADC)      */
  AC_IRQn                   =  64, /* 64  Analog Comparators (AC)             */
  DAC_UNDERRUN_IRQn         =  65, /* 65  Digital-to-Analog Converter (DAC)   */
  DAC_EMPTY_IRQn            =  66, /* 66  Digital-to-Analog Converter (DAC)   */
  PTC_IRQn                  =  67, /* 67  Peripheral Touch Controller (PTC)   */
  TRNG_IRQn                 =  68, /* 68  True Random Generator (TRNG)        */
  I2S_IRQn                  =  69, /* 69  Inter-IC Sound Interface (I2S)      */
  TRAM_IRQn                 =  70, /* 70  TrustRAM (TRAM)                     */

  PERIPH_MAX_IRQn           =  70  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M23 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnSYSTEM_Handler;                       /*   0 System peripherals shared interrupt (MCLK OSCCTRL OSC32KCTRL PM SUPC) */
  void* pfnWDT_Handler;                          /*   1 Watchdog Timer (WDT) */
  void* pfnRTC_Handler;                          /*   2 Real-Time Counter (RTC) */
  void* pfnEIC_EXTINT_0_Handler;                 /*   3 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_1_Handler;                 /*   4 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_2_Handler;                 /*   5 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_3_Handler;                 /*   6 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_4_Handler;                 /*   7 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_5_Handler;                 /*   8 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_6_Handler;                 /*   9 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT_7_Handler;                 /*  10 External Interrupt Controller (EIC) */
  void* pfnEIC_OTHER_Handler;                    /*  11 External Interrupt Controller (EIC) */
  void* pfnFREQM_Handler;                        /*  12 Frequency Meter (FREQM) */
  void* pfnNVMCTRL_Handler;                      /*  13 Non-Volatile Memory Controller (NVMCTRL) */
  void* pvReserved14;
  void* pfnDMAC_0_Handler;                       /*  15 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_1_Handler;                       /*  16 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_2_Handler;                       /*  17 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_3_Handler;                       /*  18 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_OTHER_Handler;                   /*  19 Direct Memory Access Controller (DMAC) */
  void* pfnUSB_Handler;                          /*  20 Universal Serial Bus (USB) */
  void* pfnEVSYS_0_Handler;                      /*  21 Event System Interface (EVSYS) */
  void* pfnEVSYS_1_Handler;                      /*  22 Event System Interface (EVSYS) */
  void* pfnEVSYS_2_Handler;                      /*  23 Event System Interface (EVSYS) */
  void* pfnEVSYS_3_Handler;                      /*  24 Event System Interface (EVSYS) */
  void* pfnEVSYS_4_Handler;                      /*  25 Event System Interface (EVSYS) */
  void* pfnEVSYS_5_Handler;                      /*  26 Event System Interface (EVSYS) */
  void* pfnEVSYS_6_Handler;                      /*  27 Event System Interface (EVSYS) */
  void* pfnEVSYS_7_Handler;                      /*  28 Event System Interface (EVSYS) */
  void* pvReserved29;
  void* pfnPAC_Handler;                          /*  30 Peripheral Access Controller (PAC) */
  void* pfnSERCOM0_0_Handler;                    /*  31 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_1_Handler;                    /*  32 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_2_Handler;                    /*  33 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_OTHER_Handler;                /*  34 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_0_Handler;                    /*  35 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_1_Handler;                    /*  36 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_2_Handler;                    /*  37 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_OTHER_Handler;                /*  38 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_0_Handler;                    /*  39 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_1_Handler;                    /*  40 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_2_Handler;                    /*  41 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_OTHER_Handler;                /*  42 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_0_Handler;                    /*  43 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_1_Handler;                    /*  44 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_2_Handler;                    /*  45 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_OTHER_Handler;                /*  46 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM4_0_Handler;                    /*  47 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_1_Handler;                    /*  48 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_2_Handler;                    /*  49 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_OTHER_Handler;                /*  50 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_0_Handler;                    /*  51 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_1_Handler;                    /*  52 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_2_Handler;                    /*  53 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_OTHER_Handler;                /*  54 Serial Communication Interface (SERCOM5) */
  void* pfnTC0_Handler;                          /*  55 Basic Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /*  56 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /*  57 Basic Timer Counter (TC2) */
  void* pfnTCC0_Handler;                         /*  58 Timer Counter for Control Applications (TCC0) */
  void* pfnTCC1_Handler;                         /*  59 Timer Counter for Control Applications (TCC1) */
  void* pfnTCC2_Handler;                         /*  60 Timer Counter for Control Applications (TCC2) */
  void* pfnTCC3_Handler;                         /*  61 Timer Counter for Control Applications (TCC3) */
  void* pfnADC_OTHER_Handler;                    /*  62 Analog Digital Converter (ADC) */
  void* pfnADC_RESRDY_Handler;                   /*  63 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /*  64 Analog Comparators (AC) */
  void* pfnDAC_UNDERRUN_Handler;                 /*  65 Digital-to-Analog Converter (DAC) */
  void* pfnDAC_EMPTY_Handler;                    /*  66 Digital-to-Analog Converter (DAC) */
  void* pfnPTC_Handler;                          /*  67 Peripheral Touch Controller (PTC) */
  void* pfnTRNG_Handler;                         /*  68 True Random Generator (TRNG) */
  void* pfnI2S_Handler;                          /*  69 Inter-IC Sound Interface (I2S) */
  void* pfnTRAM_Handler;                         /*  70 TrustRAM (TRAM) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M23 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void SYSTEM_Handler                ( void );
void WDT_Handler                   ( void );
void RTC_Handler                   ( void );
void EIC_EXTINT_0_Handler          ( void );
void EIC_EXTINT_1_Handler          ( void );
void EIC_EXTINT_2_Handler          ( void );
void EIC_EXTINT_3_Handler          ( void );
void EIC_EXTINT_4_Handler          ( void );
void EIC_EXTINT_5_Handler          ( void );
void EIC_EXTINT_6_Handler          ( void );
void EIC_EXTINT_7_Handler          ( void );
void EIC_OTHER_Handler             ( void );
void FREQM_Handler                 ( void );
void NVMCTRL_Handler               ( void );
void DMAC_0_Handler                ( void );
void DMAC_1_Handler                ( void );
void DMAC_2_Handler                ( void );
void DMAC_3_Handler                ( void );
void DMAC_OTHER_Handler            ( void );
void USB_Handler                   ( void );
void EVSYS_0_Handler               ( void );
void EVSYS_1_Handler               ( void );
void EVSYS_2_Handler               ( void );
void EVSYS_3_Handler               ( void );
void EVSYS_4_Handler               ( void );
void EVSYS_5_Handler               ( void );
void EVSYS_6_Handler               ( void );
void EVSYS_7_Handler               ( void );
void PAC_Handler                   ( void );
void SERCOM0_0_Handler             ( void );
void SERCOM0_1_Handler             ( void );
void SERCOM0_2_Handler             ( void );
void SERCOM0_OTHER_Handler         ( void );
void SERCOM1_0_Handler             ( void );
void SERCOM1_1_Handler             ( void );
void SERCOM1_2_Handler             ( void );
void SERCOM1_OTHER_Handler         ( void );
void SERCOM2_0_Handler             ( void );
void SERCOM2_1_Handler             ( void );
void SERCOM2_2_Handler             ( void );
void SERCOM2_OTHER_Handler         ( void );
void SERCOM3_0_Handler             ( void );
void SERCOM3_1_Handler             ( void );
void SERCOM3_2_Handler             ( void );
void SERCOM3_OTHER_Handler         ( void );
void SERCOM4_0_Handler             ( void );
void SERCOM4_1_Handler             ( void );
void SERCOM4_2_Handler             ( void );
void SERCOM4_OTHER_Handler         ( void );
void SERCOM5_0_Handler             ( void );
void SERCOM5_1_Handler             ( void );
void SERCOM5_2_Handler             ( void );
void SERCOM5_OTHER_Handler         ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TCC0_Handler                  ( void );
void TCC1_Handler                  ( void );
void TCC2_Handler                  ( void );
void TCC3_Handler                  ( void );
void ADC_OTHER_Handler             ( void );
void ADC_RESRDY_Handler            ( void );
void AC_Handler                    ( void );
void DAC_UNDERRUN_Handler          ( void );
void DAC_EMPTY_Handler             ( void );
void PTC_Handler                   ( void );
void TRNG_Handler                  ( void );
void I2S_Handler                   ( void );
void TRAM_Handler                  ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M23 Processor and Core Peripherals */
#define __FPU_PRESENT                      0 /* FPU present or not                                                        */
#define __MPU_PRESENT                      1 /* MPU present or not                                                        */
#define __NVIC_PRIO_BITS                   2 /* Number of NVIC Priority bits                                              */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Register present or not                               */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm23.h"
#if defined USE_CMSIS_INIT
#include "system_pic32cmle00.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR PIC32CM5164LE00100                */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/ccl.h"
#include "component/dac.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/freqm.h"
#include "component/fuses.h"
#include "component/gclk.h"
#include "component/i2s.h"
#include "component/mclk.h"
#include "component/nvmctrl.h"
#include "component/opamp.h"
#include "component/osc32kctrl.h"
#include "component/oscctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/tram.h"
#include "component/trng.h"
#include "component/usb.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR PIC32CM5164LE00100 */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/ccl.h"
#include "instance/dac.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/freqm.h"
#include "instance/fuses.h"
#include "instance/gclk.h"
#include "instance/i2s.h"
#include "instance/mclk.h"
#include "instance/nvmctrl.h"
#include "instance/opamp.h"
#include "instance/osc32kctrl.h"
#include "instance/oscctrl.h"
#include "instance/pac.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sercom4.h"
#include "instance/sercom5.h"
#include "instance/supc.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tcc0.h"
#include "instance/tcc1.h"
#include "instance/tcc2.h"
#include "instance/tcc3.h"
#include "instance/tram.h"
#include "instance/trng.h"
#include "instance/usb.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR PIC32CM5164LE00100                          */
/* ************************************************************************** */
#define ID_PAC           (  0) /* Instance index for PAC (PAC) */
#define ID_PM            (  1) /* Instance index for PM (PM) */
#define ID_MCLK          (  2) /* Instance index for MCLK (MCLK) */
#define ID_RSTC          (  3) /* Instance index for RSTC (RSTC) */
#define ID_OSCCTRL       (  4) /* Instance index for OSCCTRL (OSCCTRL) */
#define ID_OSC32KCTRL    (  5) /* Instance index for OSC32KCTRL (OSC32KCTRL) */
#define ID_SUPC          (  6) /* Instance index for SUPC (SUPC) */
#define ID_GCLK          (  7) /* Instance index for GCLK (GCLK) */
#define ID_WDT           (  8) /* Instance index for WDT (WDT) */
#define ID_RTC           (  9) /* Instance index for RTC (RTC) */
#define ID_EIC           ( 10) /* Instance index for EIC (EIC) */
#define ID_FREQM         ( 11) /* Instance index for FREQM (FREQM) */
#define ID_PORT          ( 12) /* Instance index for PORT (PORT) */
#define ID_AC            ( 13) /* Instance index for AC (AC) */
#define ID_DSU           ( 33) /* Instance index for DSU (DSU) */
#define ID_NVMCTRL       ( 34) /* Instance index for NVMCTRL (NVMCTRL) */
#define ID_DMAC          ( 35) /* Instance index for DMAC (DMAC) */
#define ID_USB           ( 37) /* Instance index for USB (USB) */
#define ID_EVSYS         ( 64) /* Instance index for EVSYS (EVSYS) */
#define ID_SERCOM0       ( 65) /* Instance index for SERCOM0 (SERCOM0) */
#define ID_SERCOM1       ( 66) /* Instance index for SERCOM1 (SERCOM1) */
#define ID_SERCOM2       ( 67) /* Instance index for SERCOM2 (SERCOM2) */
#define ID_SERCOM3       ( 68) /* Instance index for SERCOM3 (SERCOM3) */
#define ID_SERCOM4       ( 69) /* Instance index for SERCOM4 (SERCOM4) */
#define ID_SERCOM5       ( 70) /* Instance index for SERCOM5 (SERCOM5) */
#define ID_TC0           ( 71) /* Instance index for TC0 (TC0) */
#define ID_TC1           ( 72) /* Instance index for TC1 (TC1) */
#define ID_TC2           ( 73) /* Instance index for TC2 (TC2) */
#define ID_TCC0          ( 74) /* Instance index for TCC0 (TCC0) */
#define ID_TCC1          ( 75) /* Instance index for TCC1 (TCC1) */
#define ID_TCC2          ( 76) /* Instance index for TCC2 (TCC2) */
#define ID_TCC3          ( 77) /* Instance index for TCC3 (TCC3) */
#define ID_ADC           ( 78) /* Instance index for ADC (ADC) */
#define ID_DAC           ( 79) /* Instance index for DAC (DAC) */
#define ID_PTC           ( 80) /* Instance index for PTC (PTC) */
#define ID_TRNG          ( 81) /* Instance index for TRNG (TRNG) */
#define ID_CCL           ( 82) /* Instance index for CCL (CCL) */
#define ID_I2S           ( 83) /* Instance index for I2S (I2S) */
#define ID_OPAMP         ( 84) /* Instance index for OPAMP (OPAMP) */
#define ID_TRAM          ( 85) /* Instance index for TRAM (TRAM) */

#define ID_PERIPH_MAX    ( 85) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CM5164LE00100            */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x40003400)                 /* AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x42003800)                /* ADC Registers Address        */
#define CCL_REGS                         ((ccl_registers_t*)0x42004800)                /* CCL Registers Address        */
#define DAC_REGS                         ((dac_registers_t*)0x42003c00)                /* DAC Registers Address        */
#define DMAC_REGS                        ((dmac_registers_t*)0x41006000)               /* DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /* DSU Registers Address        */
#define DSU_EXT_REGS                     ((dsu_registers_t*)0x41002100)                /* DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40002800)                /* EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x42000000)              /* EVSYS Registers Address      */
#define FREQM_REGS                       ((freqm_registers_t*)0x40002c00)              /* FREQM Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40001c00)               /* GCLK Registers Address       */
#define I2S_REGS                         ((i2s_registers_t*)0x42004c00)                /* I2S Registers Address        */
#define MCLK_REGS                        ((mclk_registers_t*)0x40000800)               /* MCLK Registers Address       */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /* NVMCTRL Registers Address    */
#define BOCOR_FUSES_REGS                 ((fuses_bocor_fuses_registers_t*)0x0080c000)  /* FUSES Registers Address      */
#define OTP1_FUSES_REGS                  ((fuses_otp1_fuses_registers_t*)0x00806000)   /* FUSES Registers Address      */
#define OTP2_FUSES_REGS                  ((fuses_otp2_fuses_registers_t*)0x00806008)   /* FUSES Registers Address      */
#define SW_CALIB_FUSES_REGS              ((fuses_sw_calib_fuses_registers_t*)0x00806020) /* FUSES Registers Address      */
#define USER_FUSES_REGS                  ((fuses_user_fuses_registers_t*)0x00804000)   /* FUSES Registers Address      */
#define OPAMP_REGS                       ((opamp_registers_t*)0x42005000)              /* OPAMP Registers Address      */
#define OSC32KCTRL_REGS                  ((osc32kctrl_registers_t*)0x40001400)         /* OSC32KCTRL Registers Address */
#define OSCCTRL_REGS                     ((oscctrl_registers_t*)0x40001000)            /* OSCCTRL Registers Address    */
#define PAC_REGS                         ((pac_registers_t*)0x40000000)                /* PAC Registers Address        */
#define PM_REGS                          ((pm_registers_t*)0x40000400)                 /* PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x40003000)               /* PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x60000000)               /* PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x42004000)                /* PTC Registers Address        */
#define RSTC_REGS                        ((rstc_registers_t*)0x40000c00)               /* RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x40002400)                /* RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000400)             /* SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000800)             /* SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x42000c00)             /* SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x42001000)             /* SERCOM3 Registers Address    */
#define SERCOM4_REGS                     ((sercom_registers_t*)0x42001400)             /* SERCOM4 Registers Address    */
#define SERCOM5_REGS                     ((sercom_registers_t*)0x42001800)             /* SERCOM5 Registers Address    */
#define SUPC_REGS                        ((supc_registers_t*)0x40001800)               /* SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x42001c00)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x42002000)                 /* TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x42002400)                 /* TC2 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x42002800)                /* TCC0 Registers Address       */
#define TCC1_REGS                        ((tcc_registers_t*)0x42002c00)                /* TCC1 Registers Address       */
#define TCC2_REGS                        ((tcc_registers_t*)0x42003000)                /* TCC2 Registers Address       */
#define TCC3_REGS                        ((tcc_registers_t*)0x42003400)                /* TCC3 Registers Address       */
#define TRAM_REGS                        ((tram_registers_t*)0x42005400)               /* TRAM Registers Address       */
#define TRNG_REGS                        ((trng_registers_t*)0x42004400)               /* TRNG Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x4100a000)                /* USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x40002000)                /* WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR PIC32CM5164LE00100                          */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UINT32_(0x40003400)                          /* AC Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0x42003800)                          /* ADC Base Address */
#define CCL_BASE_ADDRESS                 _UINT32_(0x42004800)                          /* CCL Base Address */
#define DAC_BASE_ADDRESS                 _UINT32_(0x42003c00)                          /* DAC Base Address */
#define DMAC_BASE_ADDRESS                _UINT32_(0x41006000)                          /* DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UINT32_(0x41002000)                          /* DSU Base Address */
#define DSU_EXT_BASE_ADDRESS             _UINT32_(0x41002100)                          /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UINT32_(0x40002800)                          /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UINT32_(0x42000000)                          /* EVSYS Base Address */
#define FREQM_BASE_ADDRESS               _UINT32_(0x40002c00)                          /* FREQM Base Address */
#define GCLK_BASE_ADDRESS                _UINT32_(0x40001c00)                          /* GCLK Base Address */
#define I2S_BASE_ADDRESS                 _UINT32_(0x42004c00)                          /* I2S Base Address */
#define MCLK_BASE_ADDRESS                _UINT32_(0x40000800)                          /* MCLK Base Address */
#define NVMCTRL_BASE_ADDRESS             _UINT32_(0x41004000)                          /* NVMCTRL Base Address */
#define BOCOR_FUSES_BASE_ADDRESS         _UINT32_(0x0080c000)                          /* FUSES Base Address */
#define OTP1_FUSES_BASE_ADDRESS          _UINT32_(0x00806000)                          /* FUSES Base Address */
#define OTP2_FUSES_BASE_ADDRESS          _UINT32_(0x00806008)                          /* FUSES Base Address */
#define SW_CALIB_FUSES_BASE_ADDRESS      _UINT32_(0x00806020)                          /* FUSES Base Address */
#define USER_FUSES_BASE_ADDRESS          _UINT32_(0x00804000)                          /* FUSES Base Address */
#define OPAMP_BASE_ADDRESS               _UINT32_(0x42005000)                          /* OPAMP Base Address */
#define OSC32KCTRL_BASE_ADDRESS          _UINT32_(0x40001400)                          /* OSC32KCTRL Base Address */
#define OSCCTRL_BASE_ADDRESS             _UINT32_(0x40001000)                          /* OSCCTRL Base Address */
#define PAC_BASE_ADDRESS                 _UINT32_(0x40000000)                          /* PAC Base Address */
#define PM_BASE_ADDRESS                  _UINT32_(0x40000400)                          /* PM Base Address */
#define PORT_BASE_ADDRESS                _UINT32_(0x40003000)                          /* PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UINT32_(0x60000000)                          /* PORT Base Address */
#define PTC_BASE_ADDRESS                 _UINT32_(0x42004000)                          /* PTC Base Address */
#define RSTC_BASE_ADDRESS                _UINT32_(0x40000c00)                          /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x40002400)                          /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UINT32_(0x42000400)                          /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UINT32_(0x42000800)                          /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UINT32_(0x42000c00)                          /* SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UINT32_(0x42001000)                          /* SERCOM3 Base Address */
#define SERCOM4_BASE_ADDRESS             _UINT32_(0x42001400)                          /* SERCOM4 Base Address */
#define SERCOM5_BASE_ADDRESS             _UINT32_(0x42001800)                          /* SERCOM5 Base Address */
#define SUPC_BASE_ADDRESS                _UINT32_(0x40001800)                          /* SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UINT32_(0x42001c00)                          /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UINT32_(0x42002000)                          /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UINT32_(0x42002400)                          /* TC2 Base Address */
#define TCC0_BASE_ADDRESS                _UINT32_(0x42002800)                          /* TCC0 Base Address */
#define TCC1_BASE_ADDRESS                _UINT32_(0x42002c00)                          /* TCC1 Base Address */
#define TCC2_BASE_ADDRESS                _UINT32_(0x42003000)                          /* TCC2 Base Address */
#define TCC3_BASE_ADDRESS                _UINT32_(0x42003400)                          /* TCC3 Base Address */
#define TRAM_BASE_ADDRESS                _UINT32_(0x42005400)                          /* TRAM Base Address */
#define TRNG_BASE_ADDRESS                _UINT32_(0x42004400)                          /* TRNG Base Address */
#define USB_BASE_ADDRESS                 _UINT32_(0x4100a000)                          /* USB Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40002000)                          /* WDT Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR PIC32CM5164LE00100                                   */
/* ************************************************************************** */
#include "pio/pic32cm5164le00100.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR PIC32CM5164LE00100                        */
/* ************************************************************************** */
#define FLASH_SIZE                     _UINT32_(0x00080000)    /*  512kB Memory segment type: flash */
#define FLASH_PAGE_SIZE                _UINT32_(        64)
#define FLASH_NB_OF_PAGES              _UINT32_(      8192)

#define AUX0_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX0_PAGE_SIZE                 _UINT32_(        64)
#define AUX0_NB_OF_PAGES               _UINT32_(         4)

#define AUX1_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX1_PAGE_SIZE                 _UINT32_(        64)
#define AUX1_NB_OF_PAGES               _UINT32_(         4)

#define AUX2_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX2_PAGE_SIZE                 _UINT32_(        64)
#define AUX2_NB_OF_PAGES               _UINT32_(         4)

#define AUX3_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX3_PAGE_SIZE                 _UINT32_(        64)
#define AUX3_NB_OF_PAGES               _UINT32_(         4)

#define AUX4_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX4_PAGE_SIZE                 _UINT32_(        64)
#define AUX4_NB_OF_PAGES               _UINT32_(         4)

#define AUX5_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX5_PAGE_SIZE                 _UINT32_(        64)
#define AUX5_NB_OF_PAGES               _UINT32_(         4)

#define BOCOR_SIZE                     _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define BOCOR_PAGE_SIZE                _UINT32_(        64)
#define BOCOR_NB_OF_PAGES              _UINT32_(         4)

#define BOCOR1_SIZE                    _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define CAL_SIZE                       _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define DATAFLASH_SIZE                 _UINT32_(0x00004000)    /*   16kB Memory segment type: flash */
#define DATAFLASH_PAGE_SIZE            _UINT32_(        64)
#define DATAFLASH_NB_OF_PAGES          _UINT32_(       256)

#define LOCKROW_SIZE                   _UINT32_(0x00000004)    /*    0kB Memory segment type: fuses */
#define OTP1_SIZE                      _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP2_SIZE                      _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP3_SIZE                      _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP4_SIZE                      _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define ROM_SIZE                       _UINT32_(0x00010000)    /*   64kB Memory segment type: fuses */
#define ROM_PAGE_SIZE                  _UINT32_(        64)
#define ROM_NB_OF_PAGES                _UINT32_(      1024)

#define SHADOW_SIZE                    _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define SW_CALIB_SIZE                  _UINT32_(0x00000004)    /*    0kB Memory segment type: fuses */
#define TLATCH_SIZE                    _UINT32_(0x00010000)    /*   64kB Memory segment type: fuses */
#define TLATCH_PAGE_SIZE               _UINT32_(        64)
#define TLATCH_NB_OF_PAGES             _UINT32_(      1024)

#define USER_PAGE_SIZE                 _UINT32_(0x00000100)    /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE            _UINT32_(        64)
#define USER_PAGE_NB_OF_PAGES          _UINT32_(         4)

#define HSRAM_SIZE                     _UINT32_(0x00010000)    /*   64kB Memory segment type: ram */
#define APBA_SIZE                      _UINT32_(0x00008000)    /*   32kB Memory segment type: io */
#define APBB_SIZE                      _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define APBC_SIZE                      _UINT32_(0x00006000)    /*   24kB Memory segment type: io */
#define PPB_SIZE                       _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */

#define FLASH_ADDR                     _UINT32_(0x00000000)    /* FLASH base address (type: flash)*/
#define AUX0_ADDR                      _UINT32_(0x00804000)    /* AUX0 base address (type: fuses)*/
#define AUX1_ADDR                      _UINT32_(0x00806000)    /* AUX1 base address (type: fuses)*/
#define AUX2_ADDR                      _UINT32_(0x00808000)    /* AUX2 base address (type: fuses)*/
#define AUX3_ADDR                      _UINT32_(0x0080a000)    /* AUX3 base address (type: fuses)*/
#define AUX4_ADDR                      _UINT32_(0x0080c000)    /* AUX4 base address (type: fuses)*/
#define AUX5_ADDR                      _UINT32_(0x0080e000)    /* AUX5 base address (type: fuses)*/
#define BOCOR_ADDR                     _UINT32_(0x0080c000)    /* BOCOR base address (type: fuses)*/
#define BOCOR1_ADDR                    _UINT32_(0x0080c008)    /* BOCOR1 base address (type: fuses)*/
#define CAL_ADDR                       _UINT32_(0x00800000)    /* CAL base address (type: fuses)*/
#define DATAFLASH_ADDR                 _UINT32_(0x00400000)    /* DATAFLASH base address (type: flash)*/
#define LOCKROW_ADDR                   _UINT32_(0x00802000)    /* LOCKROW base address (type: fuses)*/
#define OTP1_ADDR                      _UINT32_(0x00806000)    /* OTP1 base address (type: fuses)*/
#define OTP2_ADDR                      _UINT32_(0x00806008)    /* OTP2 base address (type: fuses)*/
#define OTP3_ADDR                      _UINT32_(0x00806010)    /* OTP3 base address (type: fuses)*/
#define OTP4_ADDR                      _UINT32_(0x00806018)    /* OTP4 base address (type: fuses)*/
#define ROM_ADDR                       _UINT32_(0x00830000)    /* ROM base address (type: fuses)*/
#define SHADOW_ADDR                    _UINT32_(0x00820000)    /* SHADOW base address (type: fuses)*/
#define SW_CALIB_ADDR                  _UINT32_(0x00806020)    /* SW_CALIB base address (type: fuses)*/
#define TLATCH_ADDR                    _UINT32_(0x00810000)    /* TLATCH base address (type: fuses)*/
#define USER_PAGE_ADDR                 _UINT32_(0x00804000)    /* USER_PAGE base address (type: user_page)*/
#define HSRAM_ADDR                     _UINT32_(0x20000000)    /* HSRAM base address (type: ram)*/
#define APBA_ADDR                      _UINT32_(0x40000000)    /* APBA base address (type: io)*/
#define APBB_ADDR                      _UINT32_(0x41000000)    /* APBB base address (type: io)*/
#define APBC_ADDR                      _UINT32_(0x42000000)    /* APBC base address (type: io)*/
#define PPB_ADDR                       _UINT32_(0xe0000000)    /* PPB base address (type: io)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR PIC32CM5164LE00100                                 */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UINT32_(0X20850000)

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR PIC32CM5164LE00100                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* Event Generator IDs for C32CM5164LE00100 */
/* ************************************************************************** */
#define EVENT_ID_GEN_OSCCTRL_XOSC_FAIL                    1 /* ID for OSCCTRL event generator XOSC_FAIL */
#define EVENT_ID_GEN_OSC32KCTRL_XOSC32K_FAIL              2 /* ID for OSC32KCTRL event generator XOSC32K_FAIL */
#define EVENT_ID_GEN_SUPC_BOD33DET                        3 /* ID for SUPC event generator BOD33DET */
#define EVENT_ID_GEN_RTC_PER_0                            4 /* ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            5 /* ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            6 /* ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                            7 /* ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                            8 /* ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                            9 /* ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           10 /* ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           11 /* ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_RTC_CMP_0                           12 /* ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                           13 /* ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_TAMPER                          14 /* ID for RTC event generator TAMPER */
#define EVENT_ID_GEN_RTC_OVF                             15 /* ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PERD                            16 /* ID for RTC event generator PERD */
#define EVENT_ID_GEN_EIC_EXTINT_0                        17 /* ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        18 /* ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        19 /* ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        20 /* ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        21 /* ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        22 /* ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        23 /* ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        24 /* ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        25 /* ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        26 /* ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       27 /* ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       28 /* ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       29 /* ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       30 /* ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       31 /* ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       32 /* ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_DMAC_CH_0                           33 /* ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           34 /* ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           35 /* ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           36 /* ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_DMAC_CH_4                           37 /* ID for DMAC event generator CH_4 */
#define EVENT_ID_GEN_DMAC_CH_5                           38 /* ID for DMAC event generator CH_5 */
#define EVENT_ID_GEN_DMAC_CH_6                           39 /* ID for DMAC event generator CH_6 */
#define EVENT_ID_GEN_DMAC_CH_7                           40 /* ID for DMAC event generator CH_7 */
#define EVENT_ID_GEN_TC0_OVF                             41 /* ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MC_0                            42 /* ID for TC0 event generator MC_0 */
#define EVENT_ID_GEN_TC0_MC_1                            43 /* ID for TC0 event generator MC_1 */
#define EVENT_ID_GEN_TC1_OVF                             44 /* ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MC_0                            45 /* ID for TC1 event generator MC_0 */
#define EVENT_ID_GEN_TC1_MC_1                            46 /* ID for TC1 event generator MC_1 */
#define EVENT_ID_GEN_TC2_OVF                             47 /* ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MC_0                            48 /* ID for TC2 event generator MC_0 */
#define EVENT_ID_GEN_TC2_MC_1                            49 /* ID for TC2 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_TRG                            50 /* ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            51 /* ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC_0                           52 /* ID for TCC0 event generator MC_0 */
#define EVENT_ID_GEN_TCC0_MC_1                           53 /* ID for TCC0 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_MC_2                           54 /* ID for TCC0 event generator MC_2 */
#define EVENT_ID_GEN_TCC0_MC_3                           55 /* ID for TCC0 event generator MC_3 */
#define EVENT_ID_GEN_TCC0_OVF                            56 /* ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC1_TRG                            57 /* ID for TCC1 event generator TRG */
#define EVENT_ID_GEN_TCC1_CNT                            58 /* ID for TCC1 event generator CNT */
#define EVENT_ID_GEN_TCC1_MC_0                           59 /* ID for TCC1 event generator MC_0 */
#define EVENT_ID_GEN_TCC1_MC_1                           60 /* ID for TCC1 event generator MC_1 */
#define EVENT_ID_GEN_TCC1_OVF                            61 /* ID for TCC1 event generator OVF */
#define EVENT_ID_GEN_TCC2_TRG                            62 /* ID for TCC2 event generator TRG */
#define EVENT_ID_GEN_TCC2_CNT                            63 /* ID for TCC2 event generator CNT */
#define EVENT_ID_GEN_TCC2_MC_0                           64 /* ID for TCC2 event generator MC_0 */
#define EVENT_ID_GEN_TCC2_MC_1                           65 /* ID for TCC2 event generator MC_1 */
#define EVENT_ID_GEN_TCC2_OVF                            66 /* ID for TCC2 event generator OVF */
#define EVENT_ID_GEN_TCC3_TRG                            67 /* ID for TCC3 event generator TRG */
#define EVENT_ID_GEN_TCC3_CNT                            68 /* ID for TCC3 event generator CNT */
#define EVENT_ID_GEN_TCC3_MC_0                           69 /* ID for TCC3 event generator MC_0 */
#define EVENT_ID_GEN_TCC3_MC_1                           70 /* ID for TCC3 event generator MC_1 */
#define EVENT_ID_GEN_TCC3_MC_2                           71 /* ID for TCC3 event generator MC_2 */
#define EVENT_ID_GEN_TCC3_MC_3                           72 /* ID for TCC3 event generator MC_3 */
#define EVENT_ID_GEN_TCC3_OVF                            73 /* ID for TCC3 event generator OVF */
#define EVENT_ID_GEN_ADC_RESRDY                          74 /* ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          75 /* ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           76 /* ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           77 /* ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_COMP_2                           78 /* ID for AC event generator COMP_2 */
#define EVENT_ID_GEN_AC_COMP_3                           79 /* ID for AC event generator COMP_3 */
#define EVENT_ID_GEN_AC_WIN_0                            80 /* ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_AC_WIN_1                            81 /* ID for AC event generator WIN_1 */
#define EVENT_ID_GEN_DAC_EMPTY_0                         82 /* ID for DAC event generator EMPTY_0 */
#define EVENT_ID_GEN_DAC_EMPTY_1                         83 /* ID for DAC event generator EMPTY_1 */
#define EVENT_ID_GEN_PTC_EOC                             84 /* ID for PTC event generator EOC */
#define EVENT_ID_GEN_PTC_WCOMP                           85 /* ID for PTC event generator WCOMP */
#define EVENT_ID_GEN_TRNG_READY                          86 /* ID for TRNG event generator READY */
#define EVENT_ID_GEN_CCL_LUTOUT_0                        87 /* ID for CCL event generator LUTOUT_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_1                        88 /* ID for CCL event generator LUTOUT_1 */
#define EVENT_ID_GEN_CCL_LUTOUT_2                        89 /* ID for CCL event generator LUTOUT_2 */
#define EVENT_ID_GEN_CCL_LUTOUT_3                        90 /* ID for CCL event generator LUTOUT_3 */
#define EVENT_ID_GEN_PAC_ACCERR                          91 /* ID for PAC event generator ACCERR */

/* ************************************************************************** */
/*  Event User IDs for C32CM5164LE00100 */
/* ************************************************************************** */
#define EVENT_ID_USER_OSCCTRL_TUNE                        0 /* ID for OSCCTRL event user TUNE */
#define EVENT_ID_USER_RTC_TAMPER                          1 /* ID for RTC event user TAMPER */
#define EVENT_ID_USER_NVMCTRL_PAGEW                       2 /* ID for NVMCTRL event user PAGEW */
#define EVENT_ID_USER_PORT_EV_0                           3 /* ID for PORT event user EV_0 */
#define EVENT_ID_USER_PORT_EV_1                           4 /* ID for PORT event user EV_1 */
#define EVENT_ID_USER_PORT_EV_2                           5 /* ID for PORT event user EV_2 */
#define EVENT_ID_USER_PORT_EV_3                           6 /* ID for PORT event user EV_3 */
#define EVENT_ID_USER_DMAC_CH_0                           7 /* ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           8 /* ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           9 /* ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                          10 /* ID for DMAC event user CH_3 */
#define EVENT_ID_USER_DMAC_CH_4                          11 /* ID for DMAC event user CH_4 */
#define EVENT_ID_USER_DMAC_CH_5                          12 /* ID for DMAC event user CH_5 */
#define EVENT_ID_USER_DMAC_CH_6                          13 /* ID for DMAC event user CH_6 */
#define EVENT_ID_USER_DMAC_CH_7                          14 /* ID for DMAC event user CH_7 */
#define EVENT_ID_USER_TC0_EVU                            15 /* ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                            16 /* ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                            17 /* ID for TC2 event user EVU */
#define EVENT_ID_USER_TCC0_EV_0                          18 /* ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                          19 /* ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                          20 /* ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                          21 /* ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                          22 /* ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                          23 /* ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_TCC1_EV_0                          24 /* ID for TCC1 event user EV_0 */
#define EVENT_ID_USER_TCC1_EV_1                          25 /* ID for TCC1 event user EV_1 */
#define EVENT_ID_USER_TCC1_MC_0                          26 /* ID for TCC1 event user MC_0 */
#define EVENT_ID_USER_TCC1_MC_1                          27 /* ID for TCC1 event user MC_1 */
#define EVENT_ID_USER_TCC2_EV_0                          28 /* ID for TCC2 event user EV_0 */
#define EVENT_ID_USER_TCC2_EV_1                          29 /* ID for TCC2 event user EV_1 */
#define EVENT_ID_USER_TCC2_MC_0                          30 /* ID for TCC2 event user MC_0 */
#define EVENT_ID_USER_TCC2_MC_1                          31 /* ID for TCC2 event user MC_1 */
#define EVENT_ID_USER_TCC3_EV_0                          32 /* ID for TCC3 event user EV_0 */
#define EVENT_ID_USER_TCC3_EV_1                          33 /* ID for TCC3 event user EV_1 */
#define EVENT_ID_USER_TCC3_MC_0                          34 /* ID for TCC3 event user MC_0 */
#define EVENT_ID_USER_TCC3_MC_1                          35 /* ID for TCC3 event user MC_1 */
#define EVENT_ID_USER_TCC3_MC_2                          36 /* ID for TCC3 event user MC_2 */
#define EVENT_ID_USER_TCC3_MC_3                          37 /* ID for TCC3 event user MC_3 */
#define EVENT_ID_USER_ADC_START                          38 /* ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                           39 /* ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           40 /* ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           41 /* ID for AC event user SOC_1 */
#define EVENT_ID_USER_AC_SOC_2                           42 /* ID for AC event user SOC_2 */
#define EVENT_ID_USER_AC_SOC_3                           43 /* ID for AC event user SOC_3 */
#define EVENT_ID_USER_DAC_START_0                        44 /* ID for DAC event user START_0 */
#define EVENT_ID_USER_DAC_START_1                        45 /* ID for DAC event user START_1 */
#define EVENT_ID_USER_PTC_STCONV                         46 /* ID for PTC event user STCONV */
#define EVENT_ID_USER_PTC_DSEQR                          47 /* ID for PTC event user DSEQR */
#define EVENT_ID_USER_CCL_LUTIN_0                        48 /* ID for CCL event user LUTIN_0 */
#define EVENT_ID_USER_CCL_LUTIN_1                        49 /* ID for CCL event user LUTIN_1 */
#define EVENT_ID_USER_CCL_LUTIN_2                        50 /* ID for CCL event user LUTIN_2 */
#define EVENT_ID_USER_CCL_LUTIN_3                        51 /* ID for CCL event user LUTIN_3 */

#ifdef __cplusplus
}
#endif

#endif /* _PIC32CM5164LE00100_H_ */

