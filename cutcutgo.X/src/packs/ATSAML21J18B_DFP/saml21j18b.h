/**
 * \brief Header file for ATSAML21J18B
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2020-11-19T08:59:39Z */
#ifndef _SAML21J18B_H_
#define _SAML21J18B_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAML21J18B_definitions SAML21J18B definitions
  This file defines all structures and symbols for SAML21J18B:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
 *  @{
 */

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_U_) || defined(_L_) || defined(_UL_)
#    error "Integer Literals macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#  define _U_(x) (x ## U)    /**< C code: Unsigned integer literal constant value */
#  define _L_(x) (x ## L)    /**< C code: Long integer literal constant value */
#  define _UL_(x) (x ## UL)  /**< C code: Unsigned Long integer literal constant value */

#else /* Assembler */

#  define _U_(x) x    /**< Assembler: Unsigned integer literal constant value */
#  define _L_(x) x    /**< Assembler: Long integer literal constant value */
#  define _UL_(x) x   /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */
/** @}  end of Atmel Global Defines */

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAML21J18B                                         */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0PLUS Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /**< -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /**< -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /**< -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /**< -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /**< -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /**< -1  System Tick Timer                   */
/******  SAML21J18B specific Interrupt Numbers ***********************************/
  OSC32KCTRL_IRQn           =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (OSC32KCTRL) */
  OSCCTRL_IRQn              =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (OSCCTRL) */
  MCLK_IRQn                 =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (MCLK) */
  PAC_IRQn                  =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (PAC) */
  SUPC_IRQn                 =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (SUPC) */
  PM_IRQn                   =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (PM) */
  WDT_IRQn                  =   1, /**< 1   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   2, /**< 2   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   3, /**< 3   External Interrupt Controller (EIC) */
  NVMCTRL_IRQn              =   4, /**< 4   Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                 =   5, /**< 5   Direct Memory Access Controller (DMAC) */
  USB_IRQn                  =   6, /**< 6   Universal Serial Bus (USB)          */
  EVSYS_IRQn                =   7, /**< 7   Event System Interface (EVSYS)      */
  SERCOM0_IRQn              =   8, /**< 8   Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =   9, /**< 9   Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              =  10, /**< 10  Serial Communication Interface (SERCOM2) */
  SERCOM3_IRQn              =  11, /**< 11  Serial Communication Interface (SERCOM3) */
  SERCOM4_IRQn              =  12, /**< 12  Serial Communication Interface (SERCOM4) */
  SERCOM5_IRQn              =  13, /**< 13  Serial Communication Interface (SERCOM5) */
  TCC0_IRQn                 =  14, /**< 14  Timer Counter Control (TCC0)        */
  TCC1_IRQn                 =  15, /**< 15  Timer Counter Control (TCC1)        */
  TCC2_IRQn                 =  16, /**< 16  Timer Counter Control (TCC2)        */
  TC0_IRQn                  =  17, /**< 17  Basic Timer Counter (TC0)           */
  TC1_IRQn                  =  18, /**< 18  Basic Timer Counter (TC1)           */
  TC2_IRQn                  =  19, /**< 19  Basic Timer Counter (TC2)           */
  TC3_IRQn                  =  20, /**< 20  Basic Timer Counter (TC3)           */
  TC4_IRQn                  =  21, /**< 21  Basic Timer Counter (TC4)           */
  ADC_IRQn                  =  22, /**< 22  Analog Digital Converter (ADC)      */
  AC_IRQn                   =  23, /**< 23  Analog Comparators (AC)             */
  DAC_IRQn                  =  24, /**< 24  Digital-to-Analog Converter (DAC)   */
  PTC_IRQn                  =  25, /**< 25  Peripheral Touch Controller (PTC)   */
  AES_IRQn                  =  26, /**< 26  Advanced Encryption Standard (AES)  */
  TRNG_IRQn                 =  27, /**< 27  True Random Generator (TRNG)        */

  PERIPH_MAX_IRQn           =  27  /**< Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M0PLUS handlers */
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
  void* pfnSYSTEM_Handler;                       /*   0 System peripherals shared interrupt (MCLK OSCCTRL OSC32KCTRL PAC PM SUPC) */
  void* pfnWDT_Handler;                          /*   1 Watchdog Timer (WDT) */
  void* pfnRTC_Handler;                          /*   2 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /*   3 External Interrupt Controller (EIC) */
  void* pfnNVMCTRL_Handler;                      /*   4 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnDMAC_Handler;                         /*   5 Direct Memory Access Controller (DMAC) */
  void* pfnUSB_Handler;                          /*   6 Universal Serial Bus (USB) */
  void* pfnEVSYS_Handler;                        /*   7 Event System Interface (EVSYS) */
  void* pfnSERCOM0_Handler;                      /*   8 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*   9 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /*  10 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_Handler;                      /*  11 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM4_Handler;                      /*  12 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_Handler;                      /*  13 Serial Communication Interface (SERCOM5) */
  void* pfnTCC0_Handler;                         /*  14 Timer Counter Control (TCC0) */
  void* pfnTCC1_Handler;                         /*  15 Timer Counter Control (TCC1) */
  void* pfnTCC2_Handler;                         /*  16 Timer Counter Control (TCC2) */
  void* pfnTC0_Handler;                          /*  17 Basic Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /*  18 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /*  19 Basic Timer Counter (TC2) */
  void* pfnTC3_Handler;                          /*  20 Basic Timer Counter (TC3) */
  void* pfnTC4_Handler;                          /*  21 Basic Timer Counter (TC4) */
  void* pfnADC_Handler;                          /*  22 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /*  23 Analog Comparators (AC) */
  void* pfnDAC_Handler;                          /*  24 Digital-to-Analog Converter (DAC) */
  void* pfnPTC_Handler;                          /*  25 Peripheral Touch Controller (PTC) */
  void* pfnAES_Handler;                          /*  26 Advanced Encryption Standard (AES) */
  void* pfnTRNG_Handler;                         /*  27 True Random Generator (TRNG) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M0PLUS exception handlers */
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
void EIC_Handler                   ( void );
void NVMCTRL_Handler               ( void );
void DMAC_Handler                  ( void );
void USB_Handler                   ( void );
void EVSYS_Handler                 ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void SERCOM2_Handler               ( void );
void SERCOM3_Handler               ( void );
void SERCOM4_Handler               ( void );
void SERCOM5_Handler               ( void );
void TCC0_Handler                  ( void );
void TCC1_Handler                  ( void );
void TCC2_Handler                  ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TC3_Handler                   ( void );
void TC4_Handler                   ( void );
void ADC_Handler                   ( void );
void AC_Handler                    ( void );
void DAC_Handler                   ( void );
void PTC_Handler                   ( void );
void AES_Handler                   ( void );
void TRNG_Handler                  ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief Configuration of the CORTEX-M0PLUS Processor and Core Peripherals */
#define __CM0PLUS_REV             0x0001 /**< Cortex-M0+ Core Revision                                                  */
#define __MPU_PRESENT                  0 /**< MPU present or not                                                        */
#define __NVIC_PRIO_BITS               2 /**< Number of Bits used for Priority Levels                                   */
#define __VTOR_PRESENT                 1 /**< Vector Table Offset Register present or not                               */
#define __Vendor_SysTickConfig         0 /**< Set to 1 if different SysTick Config is used                              */
#define __ARCH_ARM                     1
#define __ARCH_ARM_CORTEX_M            1

/*
 * \brief CMSIS includes
 */
#include "core_cm0plus.h"
#if defined USE_CMSIS_INIT
#include "system_saml21.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAML21J18B_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAML21J18B                        */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/ccl.h"
#include "component/dac.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/gclk.h"
#include "component/mclk.h"
#include "component/mtb.h"
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
#include "component/trng.h"
#include "component/usb.h"
#include "component/wdt.h"
/** @}  end of Peripheral Software API */

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAML21J18B */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/aes.h"
#include "instance/ccl.h"
#include "instance/dac.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/gclk.h"
#include "instance/mclk.h"
#include "instance/mtb.h"
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
#include "instance/tc3.h"
#include "instance/tc4.h"
#include "instance/tcc0.h"
#include "instance/tcc1.h"
#include "instance/tcc2.h"
#include "instance/trng.h"
#include "instance/usb.h"
#include "instance/wdt.h"

/** \addtogroup SAML21J18B_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAML21J18B                                  */
/* ************************************************************************** */
#define ID_PM            (  0) /**< \brief Power Manager (PM) */
#define ID_MCLK          (  1) /**< \brief Main Clock (MCLK) */
#define ID_RSTC          (  2) /**< \brief Reset Controller (RSTC) */
#define ID_OSCCTRL       (  3) /**< \brief Oscillators Control (OSCCTRL) */
#define ID_OSC32KCTRL    (  4) /**< \brief 32k Oscillators Control (OSC32KCTRL) */
#define ID_SUPC          (  5) /**< \brief Supply Controller (SUPC) */
#define ID_GCLK          (  6) /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT           (  7) /**< \brief Watchdog Timer (WDT) */
#define ID_RTC           (  8) /**< \brief Real-Time Counter (RTC) */
#define ID_EIC           (  9) /**< \brief External Interrupt Controller (EIC) */
#define ID_PORT          ( 10) /**< \brief Port Module (PORT) */
#define ID_USB           ( 32) /**< \brief Universal Serial Bus (USB) */
#define ID_DSU           ( 33) /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       ( 34) /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_MTB           ( 35) /**< \brief Cortex-M0+ Micro-Trace Buffer (MTB) */
#define ID_SERCOM0       ( 64) /**< \brief Serial Communication Interface (SERCOM0) */
#define ID_SERCOM1       ( 65) /**< \brief Serial Communication Interface (SERCOM1) */
#define ID_SERCOM2       ( 66) /**< \brief Serial Communication Interface (SERCOM2) */
#define ID_SERCOM3       ( 67) /**< \brief Serial Communication Interface (SERCOM3) */
#define ID_SERCOM4       ( 68) /**< \brief Serial Communication Interface (SERCOM4) */
#define ID_TCC0          ( 69) /**< \brief Timer Counter Control (TCC0) */
#define ID_TCC1          ( 70) /**< \brief Timer Counter Control (TCC1) */
#define ID_TCC2          ( 71) /**< \brief Timer Counter Control (TCC2) */
#define ID_TC0           ( 72) /**< \brief Basic Timer Counter (TC0) */
#define ID_TC1           ( 73) /**< \brief Basic Timer Counter (TC1) */
#define ID_TC2           ( 74) /**< \brief Basic Timer Counter (TC2) */
#define ID_TC3           ( 75) /**< \brief Basic Timer Counter (TC3) */
#define ID_DAC           ( 76) /**< \brief Digital-to-Analog Converter (DAC) */
#define ID_AES           ( 77) /**< \brief Advanced Encryption Standard (AES) */
#define ID_TRNG          ( 78) /**< \brief True Random Generator (TRNG) */
#define ID_EVSYS         ( 96) /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM5       ( 97) /**< \brief Serial Communication Interface (SERCOM5) */
#define ID_TC4           ( 98) /**< \brief Basic Timer Counter (TC4) */
#define ID_ADC           ( 99) /**< \brief Analog Digital Converter (ADC) */
#define ID_AC            (100) /**< \brief Analog Comparators (AC) */
#define ID_PTC           (101) /**< \brief Peripheral Touch Controller (PTC) */
#define ID_OPAMP         (102) /**< \brief Operational Amplifier (OPAMP) */
#define ID_CCL           (103) /**< \brief Configurable Custom Logic (CCL) */
#define ID_PAC           (128) /**< \brief Peripheral Access Controller (PAC) */
#define ID_DMAC          (129) /**< \brief Direct Memory Access Controller (DMAC) */

#define ID_PERIPH_MAX    (129) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAML21J18B_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAML21J18B                    */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x43001000)                 /**< \brief AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x43000c00)                /**< \brief ADC Registers Address        */
#define AES_REGS                         ((aes_registers_t*)0x42003400)                /**< \brief AES Registers Address        */
#define CCL_REGS                         ((ccl_registers_t*)0x43001c00)                /**< \brief CCL Registers Address        */
#define DAC_REGS                         ((dac_registers_t*)0x42003000)                /**< \brief DAC Registers Address        */
#define DMAC_REGS                        ((dmac_registers_t*)0x44000400)               /**< \brief DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /**< \brief DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40002400)                /**< \brief EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x43000000)              /**< \brief EVSYS Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40001800)               /**< \brief GCLK Registers Address       */
#define MCLK_REGS                        ((mclk_registers_t*)0x40000400)               /**< \brief MCLK Registers Address       */
#define MTB_REGS                         ((mtb_registers_t*)0x41006000)                /**< \brief MTB Registers Address        */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /**< \brief NVMCTRL Registers Address    */
#define OPAMP_REGS                       ((opamp_registers_t*)0x43001800)              /**< \brief OPAMP Registers Address      */
#define OSCCTRL_REGS                     ((oscctrl_registers_t*)0x40000c00)            /**< \brief OSCCTRL Registers Address    */
#define OSC32KCTRL_REGS                  ((osc32kctrl_registers_t*)0x40001000)         /**< \brief OSC32KCTRL Registers Address */
#define PAC_REGS                         ((pac_registers_t*)0x44000000)                /**< \brief PAC Registers Address        */
#define PM_REGS                          ((pm_registers_t*)0x40000000)                 /**< \brief PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x40002800)               /**< \brief PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x60000000)               /**< \brief PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x43001400)                /**< \brief PTC Registers Address        */
#define RSTC_REGS                        ((rstc_registers_t*)0x40000800)               /**< \brief RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x40002000)                /**< \brief RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000000)             /**< \brief SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000400)             /**< \brief SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x42000800)             /**< \brief SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x42000c00)             /**< \brief SERCOM3 Registers Address    */
#define SERCOM4_REGS                     ((sercom_registers_t*)0x42001000)             /**< \brief SERCOM4 Registers Address    */
#define SERCOM5_REGS                     ((sercom_registers_t*)0x43000400)             /**< \brief SERCOM5 Registers Address    */
#define SUPC_REGS                        ((supc_registers_t*)0x40001400)               /**< \brief SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x42002000)                 /**< \brief TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x42002400)                 /**< \brief TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x42002800)                 /**< \brief TC2 Registers Address        */
#define TC3_REGS                         ((tc_registers_t*)0x42002c00)                 /**< \brief TC3 Registers Address        */
#define TC4_REGS                         ((tc_registers_t*)0x43000800)                 /**< \brief TC4 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x42001400)                /**< \brief TCC0 Registers Address       */
#define TCC1_REGS                        ((tcc_registers_t*)0x42001800)                /**< \brief TCC1 Registers Address       */
#define TCC2_REGS                        ((tcc_registers_t*)0x42001c00)                /**< \brief TCC2 Registers Address       */
#define TRNG_REGS                        ((trng_registers_t*)0x42003800)               /**< \brief TRNG Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x41000000)                /**< \brief USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x40001c00)                /**< \brief WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAML21J18B_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAML21J18B                                  */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UL_(0x43001000)                              /* AC Base Address */
#define ADC_BASE_ADDRESS                 _UL_(0x43000c00)                              /* ADC Base Address */
#define AES_BASE_ADDRESS                 _UL_(0x42003400)                              /* AES Base Address */
#define CCL_BASE_ADDRESS                 _UL_(0x43001c00)                              /* CCL Base Address */
#define DAC_BASE_ADDRESS                 _UL_(0x42003000)                              /* DAC Base Address */
#define DMAC_BASE_ADDRESS                _UL_(0x44000400)                              /* DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UL_(0x41002000)                              /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UL_(0x40002400)                              /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UL_(0x43000000)                              /* EVSYS Base Address */
#define GCLK_BASE_ADDRESS                _UL_(0x40001800)                              /* GCLK Base Address */
#define MCLK_BASE_ADDRESS                _UL_(0x40000400)                              /* MCLK Base Address */
#define MTB_BASE_ADDRESS                 _UL_(0x41006000)                              /* MTB Base Address */
#define NVMCTRL_BASE_ADDRESS             _UL_(0x41004000)                              /* NVMCTRL Base Address */
#define OPAMP_BASE_ADDRESS               _UL_(0x43001800)                              /* OPAMP Base Address */
#define OSCCTRL_BASE_ADDRESS             _UL_(0x40000c00)                              /* OSCCTRL Base Address */
#define OSC32KCTRL_BASE_ADDRESS          _UL_(0x40001000)                              /* OSC32KCTRL Base Address */
#define PAC_BASE_ADDRESS                 _UL_(0x44000000)                              /* PAC Base Address */
#define PM_BASE_ADDRESS                  _UL_(0x40000000)                              /* PM Base Address */
#define PORT_BASE_ADDRESS                _UL_(0x40002800)                              /* PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UL_(0x60000000)                              /* PORT Base Address */
#define PTC_BASE_ADDRESS                 _UL_(0x43001400)                              /* PTC Base Address */
#define RSTC_BASE_ADDRESS                _UL_(0x40000800)                              /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x40002000)                              /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UL_(0x42000000)                              /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UL_(0x42000400)                              /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UL_(0x42000800)                              /* SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UL_(0x42000c00)                              /* SERCOM3 Base Address */
#define SERCOM4_BASE_ADDRESS             _UL_(0x42001000)                              /* SERCOM4 Base Address */
#define SERCOM5_BASE_ADDRESS             _UL_(0x43000400)                              /* SERCOM5 Base Address */
#define SUPC_BASE_ADDRESS                _UL_(0x40001400)                              /* SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0x42002000)                              /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x42002400)                              /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UL_(0x42002800)                              /* TC2 Base Address */
#define TC3_BASE_ADDRESS                 _UL_(0x42002c00)                              /* TC3 Base Address */
#define TC4_BASE_ADDRESS                 _UL_(0x43000800)                              /* TC4 Base Address */
#define TCC0_BASE_ADDRESS                _UL_(0x42001400)                              /* TCC0 Base Address */
#define TCC1_BASE_ADDRESS                _UL_(0x42001800)                              /* TCC1 Base Address */
#define TCC2_BASE_ADDRESS                _UL_(0x42001c00)                              /* TCC2 Base Address */
#define TRNG_BASE_ADDRESS                _UL_(0x42003800)                              /* TRNG Base Address */
#define USB_BASE_ADDRESS                 _UL_(0x41000000)                              /* USB Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x40001c00)                              /* WDT Base Address */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAML21J18B_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAML21J18B                                           */
/* ************************************************************************** */
#include "pio/saml21j18b.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAML21J18B                                */
/* ************************************************************************** */

#define FLASH_SIZE                     _UL_(0x00040000)    /*  256kB Memory segment type: flash */
#define FLASH_PAGE_SIZE                _UL_(        64)
#define FLASH_NB_OF_PAGES              _UL_(      4096)

#define CAL_SIZE                       _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define LOCKBIT_SIZE                   _UL_(0x00000004)    /*    0kB Memory segment type: fuses */
#define OTP1_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP2_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP3_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP4_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP5_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define TEMP_LOG_SIZE                  _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define USER_PAGE_SIZE                 _UL_(0x00000100)    /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE            _UL_(        64)
#define USER_PAGE_NB_OF_PAGES          _UL_(         4)

#define RWW_SIZE                       _UL_(0x00002000)    /*    8kB Memory segment type: flash */
#define RWW_PAGE_SIZE                  _UL_(        64)
#define RWW_NB_OF_PAGES                _UL_(       128)

#define HSRAM_SIZE                     _UL_(0x00008000)    /*   32kB Memory segment type: ram */
#define LPRAM_SIZE                     _UL_(0x00002000)    /*    8kB Memory segment type: ram */
#define HPB0_SIZE                      _UL_(0x00004000)    /*   16kB Memory segment type: io */
#define HPB1_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB2_SIZE                      _UL_(0x00008000)    /*   32kB Memory segment type: io */
#define HPB3_SIZE                      _UL_(0x00002000)    /*    8kB Memory segment type: io */
#define HPB4_SIZE                      _UL_(0x00001000)    /*    4kB Memory segment type: io */
#define PPB_SIZE                       _UL_(0x00100000)    /* 1024kB Memory segment type: io */
#define SCS_SIZE                       _UL_(0x00001000)    /*    4kB Memory segment type: io */
#define PERIPHERALS_SIZE               _UL_(0x20000000)    /* 524288kB Memory segment type: io */

#define FLASH_ADDR                     _UL_(0x00000000)    /**< FLASH base address (type: flash)*/
#define CAL_ADDR                       _UL_(0x00800000)    /**< CAL base address (type: fuses)*/
#define LOCKBIT_ADDR                   _UL_(0x00802000)    /**< LOCKBIT base address (type: fuses)*/
#define OTP1_ADDR                      _UL_(0x00806000)    /**< OTP1 base address (type: fuses)*/
#define OTP2_ADDR                      _UL_(0x00806008)    /**< OTP2 base address (type: fuses)*/
#define OTP3_ADDR                      _UL_(0x00806010)    /**< OTP3 base address (type: fuses)*/
#define OTP4_ADDR                      _UL_(0x00806018)    /**< OTP4 base address (type: fuses)*/
#define OTP5_ADDR                      _UL_(0x00806020)    /**< OTP5 base address (type: fuses)*/
#define TEMP_LOG_ADDR                  _UL_(0x00806030)    /**< TEMP_LOG base address (type: fuses)*/
#define USER_PAGE_ADDR                 _UL_(0x00804000)    /**< USER_PAGE base address (type: user_page)*/
#define RWW_ADDR                       _UL_(0x00400000)    /**< RWW base address (type: flash)*/
#define HSRAM_ADDR                     _UL_(0x20000000)    /**< HSRAM base address (type: ram)*/
#define LPRAM_ADDR                     _UL_(0x30000000)    /**< LPRAM base address (type: ram)*/
#define HPB0_ADDR                      _UL_(0x40000000)    /**< HPB0 base address (type: io)*/
#define HPB1_ADDR                      _UL_(0x41000000)    /**< HPB1 base address (type: io)*/
#define HPB2_ADDR                      _UL_(0x42000000)    /**< HPB2 base address (type: io)*/
#define HPB3_ADDR                      _UL_(0x43000000)    /**< HPB3 base address (type: io)*/
#define HPB4_ADDR                      _UL_(0x44000000)    /**< HPB4 base address (type: io)*/
#define PPB_ADDR                       _UL_(0xe0000000)    /**< PPB base address (type: io)*/
#define SCS_ADDR                       _UL_(0xe000e000)    /**< SCS base address (type: io)*/
#define PERIPHERALS_ADDR               _UL_(0x40000000)    /**< PERIPHERALS base address (type: io)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAML21J18B                                         */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UL_(0X1081020F)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAML21J18B                                    */
/* ************************************************************************** */

/* ************************************************************************** */
/** Event Generator IDs for SAML21J18B */
/* ************************************************************************** */
#define EVENT_ID_GEN_RTC_CMP_0                            1 /**< ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                            2 /**< ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_OVF                              3 /**< ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PER_0                            4 /**< ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            5 /**< ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            6 /**< ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                            7 /**< ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                            8 /**< ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                            9 /**< ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           10 /**< ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           11 /**< ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_EIC_EXTINT_0                        12 /**< ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        13 /**< ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        14 /**< ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        15 /**< ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        16 /**< ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        17 /**< ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        18 /**< ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        19 /**< ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        20 /**< ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        21 /**< ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       22 /**< ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       23 /**< ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       24 /**< ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       25 /**< ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       26 /**< ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       27 /**< ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_DMAC_CH_0                           28 /**< ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           29 /**< ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           30 /**< ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           31 /**< ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_DMAC_CH_4                           32 /**< ID for DMAC event generator CH_4 */
#define EVENT_ID_GEN_DMAC_CH_5                           33 /**< ID for DMAC event generator CH_5 */
#define EVENT_ID_GEN_DMAC_CH_6                           34 /**< ID for DMAC event generator CH_6 */
#define EVENT_ID_GEN_DMAC_CH_7                           35 /**< ID for DMAC event generator CH_7 */
#define EVENT_ID_GEN_TCC0_OVF                            36 /**< ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            37 /**< ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            38 /**< ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC_0                           39 /**< ID for TCC0 event generator MC_0 */
#define EVENT_ID_GEN_TCC0_MC_1                           40 /**< ID for TCC0 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_MC_2                           41 /**< ID for TCC0 event generator MC_2 */
#define EVENT_ID_GEN_TCC0_MC_3                           42 /**< ID for TCC0 event generator MC_3 */
#define EVENT_ID_GEN_TCC1_OVF                            43 /**< ID for TCC1 event generator OVF */
#define EVENT_ID_GEN_TCC1_TRG                            44 /**< ID for TCC1 event generator TRG */
#define EVENT_ID_GEN_TCC1_CNT                            45 /**< ID for TCC1 event generator CNT */
#define EVENT_ID_GEN_TCC1_MC_0                           46 /**< ID for TCC1 event generator MC_0 */
#define EVENT_ID_GEN_TCC1_MC_1                           47 /**< ID for TCC1 event generator MC_1 */
#define EVENT_ID_GEN_TCC2_OVF                            48 /**< ID for TCC2 event generator OVF */
#define EVENT_ID_GEN_TCC2_TRG                            49 /**< ID for TCC2 event generator TRG */
#define EVENT_ID_GEN_TCC2_CNT                            50 /**< ID for TCC2 event generator CNT */
#define EVENT_ID_GEN_TCC2_MC_0                           51 /**< ID for TCC2 event generator MC_0 */
#define EVENT_ID_GEN_TCC2_MC_1                           52 /**< ID for TCC2 event generator MC_1 */
#define EVENT_ID_GEN_TC0_OVF                             53 /**< ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MC_0                            54 /**< ID for TC0 event generator MC_0 */
#define EVENT_ID_GEN_TC0_MC_1                            55 /**< ID for TC0 event generator MC_1 */
#define EVENT_ID_GEN_TC1_OVF                             56 /**< ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MC_0                            57 /**< ID for TC1 event generator MC_0 */
#define EVENT_ID_GEN_TC1_MC_1                            58 /**< ID for TC1 event generator MC_1 */
#define EVENT_ID_GEN_TC2_OVF                             59 /**< ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MC_0                            60 /**< ID for TC2 event generator MC_0 */
#define EVENT_ID_GEN_TC2_MC_1                            61 /**< ID for TC2 event generator MC_1 */
#define EVENT_ID_GEN_TC3_OVF                             62 /**< ID for TC3 event generator OVF */
#define EVENT_ID_GEN_TC3_MC_0                            63 /**< ID for TC3 event generator MC_0 */
#define EVENT_ID_GEN_TC3_MC_1                            64 /**< ID for TC3 event generator MC_1 */
#define EVENT_ID_GEN_TC4_OVF                             65 /**< ID for TC4 event generator OVF */
#define EVENT_ID_GEN_TC4_MC_0                            66 /**< ID for TC4 event generator MC_0 */
#define EVENT_ID_GEN_TC4_MC_1                            67 /**< ID for TC4 event generator MC_1 */
#define EVENT_ID_GEN_ADC_RESRDY                          68 /**< ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          69 /**< ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           70 /**< ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           71 /**< ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            72 /**< ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_DAC_EMPTY_0                         73 /**< ID for DAC event generator EMPTY_0 */
#define EVENT_ID_GEN_DAC_EMPTY_1                         74 /**< ID for DAC event generator EMPTY_1 */
#define EVENT_ID_GEN_TRNG_READY                          77 /**< ID for TRNG event generator READY */
#define EVENT_ID_GEN_CCL_LUTOUT_0                        78 /**< ID for CCL event generator LUTOUT_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_1                        79 /**< ID for CCL event generator LUTOUT_1 */
#define EVENT_ID_GEN_CCL_LUTOUT_2                        80 /**< ID for CCL event generator LUTOUT_2 */
#define EVENT_ID_GEN_CCL_LUTOUT_3                        81 /**< ID for CCL event generator LUTOUT_3 */
#define EVENT_ID_GEN_PAC_ACCERR                          82 /**< ID for PAC event generator ACCERR */

/* ************************************************************************** */
/** Event User IDs for SAML21J18B */
/* ************************************************************************** */
#define EVENT_ID_USER_PORT_EV_0                           0 /**< ID for PORT event user EV_0 */
#define EVENT_ID_USER_PORT_EV_1                           1 /**< ID for PORT event user EV_1 */
#define EVENT_ID_USER_PORT_EV_2                           2 /**< ID for PORT event user EV_2 */
#define EVENT_ID_USER_PORT_EV_3                           3 /**< ID for PORT event user EV_3 */
#define EVENT_ID_USER_DMAC_CH_0                           4 /**< ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           5 /**< ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           6 /**< ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                           7 /**< ID for DMAC event user CH_3 */
#define EVENT_ID_USER_DMAC_CH_4                           8 /**< ID for DMAC event user CH_4 */
#define EVENT_ID_USER_DMAC_CH_5                           9 /**< ID for DMAC event user CH_5 */
#define EVENT_ID_USER_DMAC_CH_6                          10 /**< ID for DMAC event user CH_6 */
#define EVENT_ID_USER_DMAC_CH_7                          11 /**< ID for DMAC event user CH_7 */
#define EVENT_ID_USER_TCC0_EV_0                          12 /**< ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                          13 /**< ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                          14 /**< ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                          15 /**< ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                          16 /**< ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                          17 /**< ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_TCC1_EV_0                          18 /**< ID for TCC1 event user EV_0 */
#define EVENT_ID_USER_TCC1_EV_1                          19 /**< ID for TCC1 event user EV_1 */
#define EVENT_ID_USER_TCC1_MC_0                          20 /**< ID for TCC1 event user MC_0 */
#define EVENT_ID_USER_TCC1_MC_1                          21 /**< ID for TCC1 event user MC_1 */
#define EVENT_ID_USER_TCC2_EV_0                          22 /**< ID for TCC2 event user EV_0 */
#define EVENT_ID_USER_TCC2_EV_1                          23 /**< ID for TCC2 event user EV_1 */
#define EVENT_ID_USER_TCC2_MC_0                          24 /**< ID for TCC2 event user MC_0 */
#define EVENT_ID_USER_TCC2_MC_1                          25 /**< ID for TCC2 event user MC_1 */
#define EVENT_ID_USER_TC0_EVU                            26 /**< ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                            27 /**< ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                            28 /**< ID for TC2 event user EVU */
#define EVENT_ID_USER_TC3_EVU                            29 /**< ID for TC3 event user EVU */
#define EVENT_ID_USER_TC4_EVU                            30 /**< ID for TC4 event user EVU */
#define EVENT_ID_USER_ADC_START                          31 /**< ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                           32 /**< ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           33 /**< ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           34 /**< ID for AC event user SOC_1 */
#define EVENT_ID_USER_DAC_START_0                        35 /**< ID for DAC event user START_0 */
#define EVENT_ID_USER_DAC_START_1                        36 /**< ID for DAC event user START_1 */
#define EVENT_ID_USER_CCL_LUTIN_0                        38 /**< ID for CCL event user LUTIN_0 */
#define EVENT_ID_USER_CCL_LUTIN_1                        39 /**< ID for CCL event user LUTIN_1 */
#define EVENT_ID_USER_CCL_LUTIN_2                        40 /**< ID for CCL event user LUTIN_2 */
#define EVENT_ID_USER_CCL_LUTIN_3                        41 /**< ID for CCL event user LUTIN_3 */
#define EVENT_ID_USER_MTB_START                          43 /**< ID for MTB event user START */
#define EVENT_ID_USER_MTB_STOP                           44 /**< ID for MTB event user STOP */

#ifdef __cplusplus
}
#endif

/** @}  end of SAML21J18B definitions */


#endif /* _SAML21J18B_H_ */

