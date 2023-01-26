/**
 * \brief Header file for ATSAML22N18A
 *
 * Copyright (c) 2020 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2020-08-25T05:26:06Z */
#ifndef _SAML22N18A_H_
#define _SAML22N18A_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAML22N18A_definitions b'SAML22N18A definitions
  This file defines all structures and symbols for SAML22N18A:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions'
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
/** @}  b'end of Atmel Global Defines' */

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAML22N18A                                         */
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
/******  SAML22N18A specific Interrupt Numbers ***********************************/
  OSC32KCTRL_IRQn           =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (OSC32KCTRL) */
  OSCCTRL_IRQn              =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (OSCCTRL) */
  MCLK_IRQn                 =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (MCLK) */
  PAC_IRQn                  =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (PAC) */
  SUPC_IRQn                 =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (SUPC) */
  PM_IRQn                   =   0, /**< 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC PM SUPC (PM) */
  WDT_IRQn                  =   1, /**< 1   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   2, /**< 2   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   3, /**< 3   External Interrupt Controller (EIC) */
  FREQM_IRQn                =   4, /**< 4   Frequency Meter (FREQM)             */
  USB_IRQn                  =   5, /**< 5   Universal Serial Bus (USB)          */
  NVMCTRL_IRQn              =   6, /**< 6   Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                 =   7, /**< 7   Direct Memory Access Controller (DMAC) */
  EVSYS_IRQn                =   8, /**< 8   Event System Interface (EVSYS)      */
  SERCOM0_IRQn              =   9, /**< 9   Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =  10, /**< 10  Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              =  11, /**< 11  Serial Communication Interface (SERCOM2) */
  SERCOM3_IRQn              =  12, /**< 12  Serial Communication Interface (SERCOM3) */
  SERCOM4_IRQn              =  13, /**< 13  Serial Communication Interface (SERCOM4) */
  SERCOM5_IRQn              =  14, /**< 14  Serial Communication Interface (SERCOM5) */
  TCC0_IRQn                 =  15, /**< 15  Timer Counter Control (TCC0)        */
  TC0_IRQn                  =  16, /**< 16  Basic Timer Counter (TC0)           */
  TC1_IRQn                  =  17, /**< 17  Basic Timer Counter (TC1)           */
  TC2_IRQn                  =  18, /**< 18  Basic Timer Counter (TC2)           */
  TC3_IRQn                  =  19, /**< 19  Basic Timer Counter (TC3)           */
  ADC_IRQn                  =  20, /**< 20  Analog Digital Converter (ADC)      */
  AC_IRQn                   =  21, /**< 21  Analog Comparators (AC)             */
  PTC_IRQn                  =  22, /**< 22  Peripheral Touch Controller (PTC)   */
  SLCD_IRQn                 =  23, /**< 23  Segment Liquid Crystal Display Controller (SLCD) */
  AES_IRQn                  =  24, /**< 24  Advanced Encryption Standard (AES)  */
  TRNG_IRQn                 =  25, /**< 25  True Random Generator (TRNG)        */

  PERIPH_MAX_IRQn           =  25  /**< Max peripheral ID */
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
  void* pfnFREQM_Handler;                        /*   4 Frequency Meter (FREQM) */
  void* pfnUSB_Handler;                          /*   5 Universal Serial Bus (USB) */
  void* pfnNVMCTRL_Handler;                      /*   6 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnDMAC_Handler;                         /*   7 Direct Memory Access Controller (DMAC) */
  void* pfnEVSYS_Handler;                        /*   8 Event System Interface (EVSYS) */
  void* pfnSERCOM0_Handler;                      /*   9 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*  10 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /*  11 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_Handler;                      /*  12 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM4_Handler;                      /*  13 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_Handler;                      /*  14 Serial Communication Interface (SERCOM5) */
  void* pfnTCC0_Handler;                         /*  15 Timer Counter Control (TCC0) */
  void* pfnTC0_Handler;                          /*  16 Basic Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /*  17 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /*  18 Basic Timer Counter (TC2) */
  void* pfnTC3_Handler;                          /*  19 Basic Timer Counter (TC3) */
  void* pfnADC_Handler;                          /*  20 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /*  21 Analog Comparators (AC) */
  void* pfnPTC_Handler;                          /*  22 Peripheral Touch Controller (PTC) */
  void* pfnSLCD_Handler;                         /*  23 Segment Liquid Crystal Display Controller (SLCD) */
  void* pfnAES_Handler;                          /*  24 Advanced Encryption Standard (AES) */
  void* pfnTRNG_Handler;                         /*  25 True Random Generator (TRNG) */
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
void FREQM_Handler                 ( void );
void USB_Handler                   ( void );
void NVMCTRL_Handler               ( void );
void DMAC_Handler                  ( void );
void EVSYS_Handler                 ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void SERCOM2_Handler               ( void );
void SERCOM3_Handler               ( void );
void SERCOM4_Handler               ( void );
void SERCOM5_Handler               ( void );
void TCC0_Handler                  ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TC3_Handler                   ( void );
void ADC_Handler                   ( void );
void AC_Handler                    ( void );
void PTC_Handler                   ( void );
void SLCD_Handler                  ( void );
void AES_Handler                   ( void );
void TRNG_Handler                  ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief Configuration of the CORTEX-M0PLUS Processor and Core Peripherals */
#define __CM0PLUS_REV             0x0001 /**< Cortex-M0+ Core Revision                                                  */
#define __MPU_PRESENT                  1 /**< MPU present or not                                                        */
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
#include "system_saml22.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAML22N18A_api b'Peripheral Software API'
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAML22N18A                        */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/ccl.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/freqm.h"
#include "component/gclk.h"
#include "component/mclk.h"
#include "component/mtb.h"
#include "component/nvmctrl.h"
#include "component/osc32kctrl.h"
#include "component/oscctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/slcd.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/trng.h"
#include "component/usb.h"
#include "component/wdt.h"
/** @}  b'end of Peripheral Software API' */

/** \addtogroup SAML22N18A_id b'Peripheral Ids Definitions'
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAML22N18A                                  */
/* ************************************************************************** */
#define ID_PAC           (  0) /**< \brief Peripheral Access Controller (PAC) */
#define ID_PM            (  1) /**< \brief Power Manager (PM) */
#define ID_MCLK          (  2) /**< \brief Main Clock (MCLK) */
#define ID_RSTC          (  3) /**< \brief Reset Controller (RSTC) */
#define ID_OSCCTRL       (  4) /**< \brief Oscillators Control (OSCCTRL) */
#define ID_OSC32KCTRL    (  5) /**< \brief 32k Oscillators Control (OSC32KCTRL) */
#define ID_SUPC          (  6) /**< \brief Supply Controller (SUPC) */
#define ID_GCLK          (  7) /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT           (  8) /**< \brief Watchdog Timer (WDT) */
#define ID_RTC           (  9) /**< \brief Real-Time Counter (RTC) */
#define ID_EIC           ( 10) /**< \brief External Interrupt Controller (EIC) */
#define ID_FREQM         ( 11) /**< \brief Frequency Meter (FREQM) */
#define ID_USB           ( 32) /**< \brief Universal Serial Bus (USB) */
#define ID_DSU           ( 33) /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       ( 34) /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_PORT          ( 35) /**< \brief Port Module (PORT) */
#define ID_DMAC          ( 36) /**< \brief Direct Memory Access Controller (DMAC) */
#define ID_MTB           ( 37) /**< \brief Cortex-M0+ Micro-Trace Buffer (MTB) */
#define ID_EVSYS         ( 64) /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM0       ( 65) /**< \brief Serial Communication Interface (SERCOM0) */
#define ID_SERCOM1       ( 66) /**< \brief Serial Communication Interface (SERCOM1) */
#define ID_SERCOM2       ( 67) /**< \brief Serial Communication Interface (SERCOM2) */
#define ID_SERCOM3       ( 68) /**< \brief Serial Communication Interface (SERCOM3) */
#define ID_SERCOM4       ( 69) /**< \brief Serial Communication Interface (SERCOM4) */
#define ID_SERCOM5       ( 70) /**< \brief Serial Communication Interface (SERCOM5) */
#define ID_TCC0          ( 71) /**< \brief Timer Counter Control (TCC0) */
#define ID_TC0           ( 72) /**< \brief Basic Timer Counter (TC0) */
#define ID_TC1           ( 73) /**< \brief Basic Timer Counter (TC1) */
#define ID_TC2           ( 74) /**< \brief Basic Timer Counter (TC2) */
#define ID_TC3           ( 75) /**< \brief Basic Timer Counter (TC3) */
#define ID_ADC           ( 76) /**< \brief Analog Digital Converter (ADC) */
#define ID_AC            ( 77) /**< \brief Analog Comparators (AC) */
#define ID_PTC           ( 78) /**< \brief Peripheral Touch Controller (PTC) */
#define ID_SLCD          ( 79) /**< \brief Segment Liquid Crystal Display Controller (SLCD) */
#define ID_AES           ( 80) /**< \brief Advanced Encryption Standard (AES) */
#define ID_TRNG          ( 81) /**< \brief True Random Generator (TRNG) */
#define ID_CCL           ( 82) /**< \brief Configurable Custom Logic (CCL) */

#define ID_PERIPH_MAX    ( 82) /**< \brief Number of peripheral IDs */
/** @}  b'end of Peripheral Ids Definitions' */

/** \addtogroup SAML22N18A_base b'Peripheral Base Address Definitions'
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAML22N18A                    */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x42003400)                 /**< \brief AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x42003000)                /**< \brief ADC Registers Address        */
#define AES_REGS                         ((aes_registers_t*)0x42004000)                /**< \brief AES Registers Address        */
#define CCL_REGS                         ((ccl_registers_t*)0x42004800)                /**< \brief CCL Registers Address        */
#define DMAC_REGS                        ((dmac_registers_t*)0x41008000)               /**< \brief DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /**< \brief DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40002800)                /**< \brief EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x42000000)              /**< \brief EVSYS Registers Address      */
#define FREQM_REGS                       ((freqm_registers_t*)0x40002c00)              /**< \brief FREQM Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40001c00)               /**< \brief GCLK Registers Address       */
#define MCLK_REGS                        ((mclk_registers_t*)0x40000800)               /**< \brief MCLK Registers Address       */
#define MTB_REGS                         ((mtb_registers_t*)0x4100a000)                /**< \brief MTB Registers Address        */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /**< \brief NVMCTRL Registers Address    */
#define OSCCTRL_REGS                     ((oscctrl_registers_t*)0x40001000)            /**< \brief OSCCTRL Registers Address    */
#define OSC32KCTRL_REGS                  ((osc32kctrl_registers_t*)0x40001400)         /**< \brief OSC32KCTRL Registers Address */
#define PAC_REGS                         ((pac_registers_t*)0x40000000)                /**< \brief PAC Registers Address        */
#define PM_REGS                          ((pm_registers_t*)0x40000400)                 /**< \brief PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x41006000)               /**< \brief PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x60000000)               /**< \brief PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x42003800)                /**< \brief PTC Registers Address        */
#define RSTC_REGS                        ((rstc_registers_t*)0x40000c00)               /**< \brief RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x40002400)                /**< \brief RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000400)             /**< \brief SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000800)             /**< \brief SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x42000c00)             /**< \brief SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x42001000)             /**< \brief SERCOM3 Registers Address    */
#define SERCOM4_REGS                     ((sercom_registers_t*)0x42001400)             /**< \brief SERCOM4 Registers Address    */
#define SERCOM5_REGS                     ((sercom_registers_t*)0x42001800)             /**< \brief SERCOM5 Registers Address    */
#define SLCD_REGS                        ((slcd_registers_t*)0x42003c00)               /**< \brief SLCD Registers Address       */
#define SUPC_REGS                        ((supc_registers_t*)0x40001800)               /**< \brief SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x42002000)                 /**< \brief TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x42002400)                 /**< \brief TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x42002800)                 /**< \brief TC2 Registers Address        */
#define TC3_REGS                         ((tc_registers_t*)0x42002c00)                 /**< \brief TC3 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x42001c00)                /**< \brief TCC0 Registers Address       */
#define TRNG_REGS                        ((trng_registers_t*)0x42004400)               /**< \brief TRNG Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x41000000)                /**< \brief USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x40002000)                /**< \brief WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Peripheral Base Address Definitions' */

/** \addtogroup SAML22N18A_base b'Peripheral Base Address Definitions'
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAML22N18A                                  */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UL_(0x42003400)                              /**< \brief AC Base Address */
#define ADC_BASE_ADDRESS                 _UL_(0x42003000)                              /**< \brief ADC Base Address */
#define AES_BASE_ADDRESS                 _UL_(0x42004000)                              /**< \brief AES Base Address */
#define CCL_BASE_ADDRESS                 _UL_(0x42004800)                              /**< \brief CCL Base Address */
#define DMAC_BASE_ADDRESS                _UL_(0x41008000)                              /**< \brief DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UL_(0x41002000)                              /**< \brief DSU Base Address */
#define EIC_BASE_ADDRESS                 _UL_(0x40002800)                              /**< \brief EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UL_(0x42000000)                              /**< \brief EVSYS Base Address */
#define FREQM_BASE_ADDRESS               _UL_(0x40002c00)                              /**< \brief FREQM Base Address */
#define GCLK_BASE_ADDRESS                _UL_(0x40001c00)                              /**< \brief GCLK Base Address */
#define MCLK_BASE_ADDRESS                _UL_(0x40000800)                              /**< \brief MCLK Base Address */
#define MTB_BASE_ADDRESS                 _UL_(0x4100a000)                              /**< \brief MTB Base Address */
#define NVMCTRL_BASE_ADDRESS             _UL_(0x41004000)                              /**< \brief NVMCTRL Base Address */
#define OSCCTRL_BASE_ADDRESS             _UL_(0x40001000)                              /**< \brief OSCCTRL Base Address */
#define OSC32KCTRL_BASE_ADDRESS          _UL_(0x40001400)                              /**< \brief OSC32KCTRL Base Address */
#define PAC_BASE_ADDRESS                 _UL_(0x40000000)                              /**< \brief PAC Base Address */
#define PM_BASE_ADDRESS                  _UL_(0x40000400)                              /**< \brief PM Base Address */
#define PORT_BASE_ADDRESS                _UL_(0x41006000)                              /**< \brief PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UL_(0x60000000)                              /**< \brief PORT Base Address */
#define PTC_BASE_ADDRESS                 _UL_(0x42003800)                              /**< \brief PTC Base Address */
#define RSTC_BASE_ADDRESS                _UL_(0x40000c00)                              /**< \brief RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x40002400)                              /**< \brief RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UL_(0x42000400)                              /**< \brief SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UL_(0x42000800)                              /**< \brief SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UL_(0x42000c00)                              /**< \brief SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UL_(0x42001000)                              /**< \brief SERCOM3 Base Address */
#define SERCOM4_BASE_ADDRESS             _UL_(0x42001400)                              /**< \brief SERCOM4 Base Address */
#define SERCOM5_BASE_ADDRESS             _UL_(0x42001800)                              /**< \brief SERCOM5 Base Address */
#define SLCD_BASE_ADDRESS                _UL_(0x42003c00)                              /**< \brief SLCD Base Address */
#define SUPC_BASE_ADDRESS                _UL_(0x40001800)                              /**< \brief SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0x42002000)                              /**< \brief TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x42002400)                              /**< \brief TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UL_(0x42002800)                              /**< \brief TC2 Base Address */
#define TC3_BASE_ADDRESS                 _UL_(0x42002c00)                              /**< \brief TC3 Base Address */
#define TCC0_BASE_ADDRESS                _UL_(0x42001c00)                              /**< \brief TCC0 Base Address */
#define TRNG_BASE_ADDRESS                _UL_(0x42004400)                              /**< \brief TRNG Base Address */
#define USB_BASE_ADDRESS                 _UL_(0x41000000)                              /**< \brief USB Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x40002000)                              /**< \brief WDT Base Address */
/** @}  b'end of Peripheral Base Address Definitions' */

/** \addtogroup SAML22N18A_pio b'Peripheral Pio Definitions'
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAML22N18A                                           */
/* ************************************************************************** */
#include "pio/saml22n18a.h"
/** @}  b'end of Peripheral Pio Definitions' */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAML22N18A                                */
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
#define USER_PAGE_SIZE                 _UL_(0x00000100)    /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE            _UL_(        64)
#define USER_PAGE_NB_OF_PAGES          _UL_(         4)

#define RWW_SIZE                       _UL_(0x00002000)    /*    8kB Memory segment type: flash */
#define RWW_PAGE_SIZE                  _UL_(        64)
#define RWW_NB_OF_PAGES                _UL_(       128)

#define HSRAM_SIZE                     _UL_(0x00008000)    /*   32kB Memory segment type: ram */
#define HPB0_SIZE                      _UL_(0x00004000)    /*   16kB Memory segment type: io */
#define HPB1_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB2_SIZE                      _UL_(0x00006000)    /*   24kB Memory segment type: io */
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
#define USER_PAGE_ADDR                 _UL_(0x00804000)    /**< USER_PAGE base address (type: user_page)*/
#define RWW_ADDR                       _UL_(0x00400000)    /**< RWW base address (type: flash)*/
#define HSRAM_ADDR                     _UL_(0x20000000)    /**< HSRAM base address (type: ram)*/
#define HPB0_ADDR                      _UL_(0x40000000)    /**< HPB0 base address (type: io)*/
#define HPB1_ADDR                      _UL_(0x41000000)    /**< HPB1 base address (type: io)*/
#define HPB2_ADDR                      _UL_(0x42000000)    /**< HPB2 base address (type: io)*/
#define PPB_ADDR                       _UL_(0xe0000000)    /**< PPB base address (type: io)*/
#define SCS_ADDR                       _UL_(0xe000e000)    /**< SCS base address (type: io)*/
#define PERIPHERALS_ADDR               _UL_(0x40000000)    /**< PERIPHERALS base address (type: io)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAML22N18A                                         */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UL_(0X10820100)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAML22N18A                                    */
/* ************************************************************************** */

/* ************************************************************************** */
/** Event Generator IDs for SAML22N18A */
/* ************************************************************************** */
#define EVENT_ID_GEN_OSCCTRL_XOSC_FAIL                    1 /**< ID for OSCCTRL event generator XOSC_FAIL */
#define EVENT_ID_GEN_OSC32KCTRL_XOSC32K_FAIL              2 /**< ID for OSC32KCTRL event generator XOSC32K_FAIL */
#define EVENT_ID_GEN_RTC_CMP_0                            3 /**< ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                            4 /**< ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_TAMPER                           5 /**< ID for RTC event generator TAMPER */
#define EVENT_ID_GEN_RTC_OVF                              6 /**< ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PER_0                            7 /**< ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            8 /**< ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            9 /**< ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                           10 /**< ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                           11 /**< ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                           12 /**< ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           13 /**< ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           14 /**< ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_EIC_EXTINT_0                        15 /**< ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        16 /**< ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        17 /**< ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        18 /**< ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        19 /**< ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        20 /**< ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        21 /**< ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        22 /**< ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        23 /**< ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        24 /**< ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       25 /**< ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       26 /**< ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       27 /**< ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       28 /**< ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       29 /**< ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       30 /**< ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_DMAC_CH_0                           31 /**< ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           32 /**< ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           33 /**< ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           34 /**< ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_TCC0_OVF                            35 /**< ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            36 /**< ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            37 /**< ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC_0                           38 /**< ID for TCC0 event generator MC_0 */
#define EVENT_ID_GEN_TCC0_MC_1                           39 /**< ID for TCC0 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_MC_2                           40 /**< ID for TCC0 event generator MC_2 */
#define EVENT_ID_GEN_TCC0_MC_3                           41 /**< ID for TCC0 event generator MC_3 */
#define EVENT_ID_GEN_TC0_OVF                             42 /**< ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MC_0                            43 /**< ID for TC0 event generator MC_0 */
#define EVENT_ID_GEN_TC0_MC_1                            44 /**< ID for TC0 event generator MC_1 */
#define EVENT_ID_GEN_TC1_OVF                             45 /**< ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MC_0                            46 /**< ID for TC1 event generator MC_0 */
#define EVENT_ID_GEN_TC1_MC_1                            47 /**< ID for TC1 event generator MC_1 */
#define EVENT_ID_GEN_TC2_OVF                             48 /**< ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MC_0                            49 /**< ID for TC2 event generator MC_0 */
#define EVENT_ID_GEN_TC2_MC_1                            50 /**< ID for TC2 event generator MC_1 */
#define EVENT_ID_GEN_TC3_OVF                             51 /**< ID for TC3 event generator OVF */
#define EVENT_ID_GEN_TC3_MC_0                            52 /**< ID for TC3 event generator MC_0 */
#define EVENT_ID_GEN_TC3_MC_1                            53 /**< ID for TC3 event generator MC_1 */
#define EVENT_ID_GEN_ADC_RESRDY                          54 /**< ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          55 /**< ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           56 /**< ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           57 /**< ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            58 /**< ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_SLCD_FC0OVERFLOW                    61 /**< ID for SLCD event generator FC0OVERFLOW */
#define EVENT_ID_GEN_SLCD_FC1OVERFLOW                    62 /**< ID for SLCD event generator FC1OVERFLOW */
#define EVENT_ID_GEN_SLCD_FC2OVERFLOW                    63 /**< ID for SLCD event generator FC2OVERFLOW */
#define EVENT_ID_GEN_SLCD_DT                             64 /**< ID for SLCD event generator DT */
#define EVENT_ID_GEN_TRNG_READY                          65 /**< ID for TRNG event generator READY */
#define EVENT_ID_GEN_CCL_LUTOUT_0                        66 /**< ID for CCL event generator LUTOUT_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_1                        67 /**< ID for CCL event generator LUTOUT_1 */
#define EVENT_ID_GEN_CCL_LUTOUT_2                        68 /**< ID for CCL event generator LUTOUT_2 */
#define EVENT_ID_GEN_CCL_LUTOUT_3                        69 /**< ID for CCL event generator LUTOUT_3 */
#define EVENT_ID_GEN_PAC_ACCERR                          70 /**< ID for PAC event generator ACCERR */

/* ************************************************************************** */
/** Event User IDs for SAML22N18A */
/* ************************************************************************** */
#define EVENT_ID_USER_RTC_TAMPER                          0 /**< ID for RTC event user TAMPER */
#define EVENT_ID_USER_PORT_EV_0                           1 /**< ID for PORT event user EV_0 */
#define EVENT_ID_USER_PORT_EV_1                           2 /**< ID for PORT event user EV_1 */
#define EVENT_ID_USER_PORT_EV_2                           3 /**< ID for PORT event user EV_2 */
#define EVENT_ID_USER_PORT_EV_3                           4 /**< ID for PORT event user EV_3 */
#define EVENT_ID_USER_DMAC_CH_0                           5 /**< ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           6 /**< ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           7 /**< ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                           8 /**< ID for DMAC event user CH_3 */
#define EVENT_ID_USER_TCC0_EV_0                           9 /**< ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                          10 /**< ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                          11 /**< ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                          12 /**< ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                          13 /**< ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                          14 /**< ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_TC0_EVU                            15 /**< ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                            16 /**< ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                            17 /**< ID for TC2 event user EVU */
#define EVENT_ID_USER_TC3_EVU                            18 /**< ID for TC3 event user EVU */
#define EVENT_ID_USER_ADC_START                          19 /**< ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                           20 /**< ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           21 /**< ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           22 /**< ID for AC event user SOC_1 */
#define EVENT_ID_USER_CCL_LUTIN_0                        24 /**< ID for CCL event user LUTIN_0 */
#define EVENT_ID_USER_CCL_LUTIN_1                        25 /**< ID for CCL event user LUTIN_1 */
#define EVENT_ID_USER_CCL_LUTIN_2                        26 /**< ID for CCL event user LUTIN_2 */
#define EVENT_ID_USER_CCL_LUTIN_3                        27 /**< ID for CCL event user LUTIN_3 */
#define EVENT_ID_USER_MTB_START                          29 /**< ID for MTB event user START */
#define EVENT_ID_USER_MTB_STOP                           30 /**< ID for MTB event user STOP */

#ifdef __cplusplus
}
#endif

/** @}  b'end of SAML22N18A definitions' */


#endif /* _SAML22N18A_H_ */

