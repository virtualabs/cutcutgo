/**
 * \brief Header file for ATSAMD11D14AM
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

/* file generated from device description version 2019-11-25T07:00:45Z */
#ifndef _SAMD11D14AM_H_
#define _SAMD11D14AM_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAMD11D14AM_definitions SAMD11D14AM definitions
  This file defines all structures and symbols for SAMD11D14AM:
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
/*   CMSIS DEFINITIONS FOR SAMD11D14AM                                        */
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
/******  SAMD11D14AM specific Interrupt Numbers ***********************************/
  PM_IRQn                   =   0, /**< 0   Power Manager (PM)                  */
  SYSCTRL_IRQn              =   1, /**< 1   System Control (SYSCTRL)            */
  WDT_IRQn                  =   2, /**< 2   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   3, /**< 3   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   4, /**< 4   External Interrupt Controller (EIC) */
  NVMCTRL_IRQn              =   5, /**< 5   Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                 =   6, /**< 6   Direct Memory Access Controller (DMAC) */
  USB_IRQn                  =   7, /**< 7   Universal Serial Bus (USB)          */
  EVSYS_IRQn                =   8, /**< 8   Event System Interface (EVSYS)      */
  SERCOM0_IRQn              =   9, /**< 9   Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =  10, /**< 10  Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              =  11, /**< 11  Serial Communication Interface (SERCOM2) */
  TCC0_IRQn                 =  12, /**< 12  Timer Counter Control (TCC0)        */
  TC1_IRQn                  =  13, /**< 13  Basic Timer Counter (TC1)           */
  TC2_IRQn                  =  14, /**< 14  Basic Timer Counter (TC2)           */
  ADC_IRQn                  =  15, /**< 15  Analog Digital Converter (ADC)      */
  AC_IRQn                   =  16, /**< 16  Analog Comparators (AC)             */
  DAC_IRQn                  =  17, /**< 17  Digital Analog Converter (DAC)      */
  PTC_IRQn                  =  18, /**< 18  Peripheral Touch Controller (PTC)   */

  PERIPH_MAX_IRQn           =  18  /**< Max peripheral ID */
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
  void* pfnPM_Handler;                           /*   0 Power Manager (PM) */
  void* pfnSYSCTRL_Handler;                      /*   1 System Control (SYSCTRL) */
  void* pfnWDT_Handler;                          /*   2 Watchdog Timer (WDT) */
  void* pfnRTC_Handler;                          /*   3 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /*   4 External Interrupt Controller (EIC) */
  void* pfnNVMCTRL_Handler;                      /*   5 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnDMAC_Handler;                         /*   6 Direct Memory Access Controller (DMAC) */
  void* pfnUSB_Handler;                          /*   7 Universal Serial Bus (USB) */
  void* pfnEVSYS_Handler;                        /*   8 Event System Interface (EVSYS) */
  void* pfnSERCOM0_Handler;                      /*   9 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*  10 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /*  11 Serial Communication Interface (SERCOM2) */
  void* pfnTCC0_Handler;                         /*  12 Timer Counter Control (TCC0) */
  void* pfnTC1_Handler;                          /*  13 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /*  14 Basic Timer Counter (TC2) */
  void* pfnADC_Handler;                          /*  15 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /*  16 Analog Comparators (AC) */
  void* pfnDAC_Handler;                          /*  17 Digital Analog Converter (DAC) */
  void* pfnPTC_Handler;                          /*  18 Peripheral Touch Controller (PTC) */
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
void PM_Handler                    ( void );
void SYSCTRL_Handler               ( void );
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
void TCC0_Handler                  ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void ADC_Handler                   ( void );
void AC_Handler                    ( void );
void DAC_Handler                   ( void );
void PTC_Handler                   ( void );
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
#include "system_samd11.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAMD11D14AM_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMD11D14AM                       */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/dac.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/gclk.h"
#include "component/hmatrixb.h"
#include "component/mtb.h"
#include "component/nvmctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/sysctrl.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/usb.h"
#include "component/wdt.h"
/** @}  end of Peripheral Software API */

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAMD11D14AM */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/dac.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/gclk.h"
#include "instance/mtb.h"
#include "instance/nvmctrl.h"
#include "instance/pac0.h"
#include "instance/pac1.h"
#include "instance/pac2.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rtc.h"
#include "instance/sbmatrix.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sysctrl.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tcc0.h"
#include "instance/usb.h"
#include "instance/wdt.h"

/** \addtogroup SAMD11D14AM_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMD11D14AM                                 */
/* ************************************************************************** */
#define ID_PAC0          (  0) /**< \brief Peripheral Access Controller (PAC0) */
#define ID_PM            (  1) /**< \brief Power Manager (PM) */
#define ID_SYSCTRL       (  2) /**< \brief System Control (SYSCTRL) */
#define ID_GCLK          (  3) /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT           (  4) /**< \brief Watchdog Timer (WDT) */
#define ID_RTC           (  5) /**< \brief Real-Time Counter (RTC) */
#define ID_EIC           (  6) /**< \brief External Interrupt Controller (EIC) */
#define ID_PAC1          ( 32) /**< \brief Peripheral Access Controller (PAC1) */
#define ID_DSU           ( 33) /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       ( 34) /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_PORT          ( 35) /**< \brief Port Module (PORT) */
#define ID_DMAC          ( 36) /**< \brief Direct Memory Access Controller (DMAC) */
#define ID_USB           ( 37) /**< \brief Universal Serial Bus (USB) */
#define ID_MTB           ( 38) /**< \brief Cortex-M0+ Micro-Trace Buffer (MTB) */
#define ID_SBMATRIX      ( 39) /**< \brief HSB Matrix (SBMATRIX) */
#define ID_PAC2          ( 64) /**< \brief Peripheral Access Controller (PAC2) */
#define ID_EVSYS         ( 65) /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM0       ( 66) /**< \brief Serial Communication Interface (SERCOM0) */
#define ID_SERCOM1       ( 67) /**< \brief Serial Communication Interface (SERCOM1) */
#define ID_SERCOM2       ( 68) /**< \brief Serial Communication Interface (SERCOM2) */
#define ID_TCC0          ( 69) /**< \brief Timer Counter Control (TCC0) */
#define ID_TC1           ( 70) /**< \brief Basic Timer Counter (TC1) */
#define ID_TC2           ( 71) /**< \brief Basic Timer Counter (TC2) */
#define ID_ADC           ( 72) /**< \brief Analog Digital Converter (ADC) */
#define ID_AC            ( 73) /**< \brief Analog Comparators (AC) */
#define ID_DAC           ( 74) /**< \brief Digital Analog Converter (DAC) */
#define ID_PTC           ( 75) /**< \brief Peripheral Touch Controller (PTC) */

#define ID_PERIPH_MAX    ( 75) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAMD11D14AM_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMD11D14AM                   */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x42002400)                 /**< \brief AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x42002000)                /**< \brief ADC Registers Address        */
#define DAC_REGS                         ((dac_registers_t*)0x42002800)                /**< \brief DAC Registers Address        */
#define DMAC_REGS                        ((dmac_registers_t*)0x41004800)               /**< \brief DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /**< \brief DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40001800)                /**< \brief EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x42000400)              /**< \brief EVSYS Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40000c00)               /**< \brief GCLK Registers Address       */
#define SBMATRIX_REGS                    ((hmatrixb_registers_t*)0x41007000)           /**< \brief SBMATRIX Registers Address   */
#define MTB_REGS                         ((mtb_registers_t*)0x41006000)                /**< \brief MTB Registers Address        */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /**< \brief NVMCTRL Registers Address    */
#define PAC0_REGS                        ((pac_registers_t*)0x40000000)                /**< \brief PAC0 Registers Address       */
#define PAC1_REGS                        ((pac_registers_t*)0x41000000)                /**< \brief PAC1 Registers Address       */
#define PAC2_REGS                        ((pac_registers_t*)0x42000000)                /**< \brief PAC2 Registers Address       */
#define PM_REGS                          ((pm_registers_t*)0x40000400)                 /**< \brief PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x41004400)               /**< \brief PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x60000000)               /**< \brief PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x42002c00)                /**< \brief PTC Registers Address        */
#define RTC_REGS                         ((rtc_registers_t*)0x40001400)                /**< \brief RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000800)             /**< \brief SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000c00)             /**< \brief SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x42001000)             /**< \brief SERCOM2 Registers Address    */
#define SYSCTRL_REGS                     ((sysctrl_registers_t*)0x40000800)            /**< \brief SYSCTRL Registers Address    */
#define TC1_REGS                         ((tc_registers_t*)0x42001800)                 /**< \brief TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x42001c00)                 /**< \brief TC2 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x42001400)                /**< \brief TCC0 Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x41005000)                /**< \brief USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x40001000)                /**< \brief WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMD11D14AM_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMD11D14AM                                 */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UL_(0x42002400)                              /* AC Base Address */
#define ADC_BASE_ADDRESS                 _UL_(0x42002000)                              /* ADC Base Address */
#define DAC_BASE_ADDRESS                 _UL_(0x42002800)                              /* DAC Base Address */
#define DMAC_BASE_ADDRESS                _UL_(0x41004800)                              /* DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UL_(0x41002000)                              /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UL_(0x40001800)                              /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UL_(0x42000400)                              /* EVSYS Base Address */
#define GCLK_BASE_ADDRESS                _UL_(0x40000c00)                              /* GCLK Base Address */
#define SBMATRIX_BASE_ADDRESS            _UL_(0x41007000)                              /* SBMATRIX Base Address */
#define MTB_BASE_ADDRESS                 _UL_(0x41006000)                              /* MTB Base Address */
#define NVMCTRL_BASE_ADDRESS             _UL_(0x41004000)                              /* NVMCTRL Base Address */
#define PAC0_BASE_ADDRESS                _UL_(0x40000000)                              /* PAC0 Base Address */
#define PAC1_BASE_ADDRESS                _UL_(0x41000000)                              /* PAC1 Base Address */
#define PAC2_BASE_ADDRESS                _UL_(0x42000000)                              /* PAC2 Base Address */
#define PM_BASE_ADDRESS                  _UL_(0x40000400)                              /* PM Base Address */
#define PORT_BASE_ADDRESS                _UL_(0x41004400)                              /* PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UL_(0x60000000)                              /* PORT Base Address */
#define PTC_BASE_ADDRESS                 _UL_(0x42002c00)                              /* PTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x40001400)                              /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UL_(0x42000800)                              /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UL_(0x42000c00)                              /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UL_(0x42001000)                              /* SERCOM2 Base Address */
#define SYSCTRL_BASE_ADDRESS             _UL_(0x40000800)                              /* SYSCTRL Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x42001800)                              /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UL_(0x42001c00)                              /* TC2 Base Address */
#define TCC0_BASE_ADDRESS                _UL_(0x42001400)                              /* TCC0 Base Address */
#define USB_BASE_ADDRESS                 _UL_(0x41005000)                              /* USB Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x40001000)                              /* WDT Base Address */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMD11D14AM_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMD11D14AM                                          */
/* ************************************************************************** */
#include "pio/samd11d14am.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMD11D14AM                               */
/* ************************************************************************** */

#define FLASH_SIZE                     _UL_(0x00004000)    /*   16kB Memory segment type: flash */
#define FLASH_PAGE_SIZE                _UL_(        64)
#define FLASH_NB_OF_PAGES              _UL_(       256)

#define CAL_SIZE                       _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define LOCKBIT_SIZE                   _UL_(0x00000004)    /*    0kB Memory segment type: fuses */
#define OTP1_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP2_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP4_SIZE                      _UL_(0x000000e0)    /*    0kB Memory segment type: fuses */
#define OTP4_PAGE_SIZE                 _UL_(        64)
#define OTP4_NB_OF_PAGES               _UL_(         3)

#define TEMP_LOG_SIZE                  _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define USER_PAGE_SIZE                 _UL_(0x00000100)    /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE            _UL_(        64)
#define USER_PAGE_NB_OF_PAGES          _UL_(         4)

#define HMCRAMC0_SIZE                  _UL_(0x00001000)    /*    4kB Memory segment type: ram */
#define HPB0_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB1_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB2_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define PPB_SIZE                       _UL_(0x00100000)    /* 1024kB Memory segment type: io */
#define SCS_SIZE                       _UL_(0x00001000)    /*    4kB Memory segment type: io */
#define PERIPHERALS_SIZE               _UL_(0x20000000)    /* 524288kB Memory segment type: io */

#define FLASH_ADDR                     _UL_(0x00000000)    /**< FLASH base address (type: flash)*/
#define CAL_ADDR                       _UL_(0x00800000)    /**< CAL base address (type: fuses)*/
#define LOCKBIT_ADDR                   _UL_(0x00802000)    /**< LOCKBIT base address (type: fuses)*/
#define OTP1_ADDR                      _UL_(0x00806000)    /**< OTP1 base address (type: fuses)*/
#define OTP2_ADDR                      _UL_(0x00806008)    /**< OTP2 base address (type: fuses)*/
#define OTP4_ADDR                      _UL_(0x00806020)    /**< OTP4 base address (type: fuses)*/
#define TEMP_LOG_ADDR                  _UL_(0x00806030)    /**< TEMP_LOG base address (type: fuses)*/
#define USER_PAGE_ADDR                 _UL_(0x00804000)    /**< USER_PAGE base address (type: user_page)*/
#define HMCRAMC0_ADDR                  _UL_(0x20000000)    /**< HMCRAMC0 base address (type: ram)*/
#define HPB0_ADDR                      _UL_(0x40000000)    /**< HPB0 base address (type: io)*/
#define HPB1_ADDR                      _UL_(0x41000000)    /**< HPB1 base address (type: io)*/
#define HPB2_ADDR                      _UL_(0x42000000)    /**< HPB2 base address (type: io)*/
#define PPB_ADDR                       _UL_(0xe0000000)    /**< PPB base address (type: io)*/
#define SCS_ADDR                       _UL_(0xe000e000)    /**< SCS base address (type: io)*/
#define PERIPHERALS_ADDR               _UL_(0x40000000)    /**< PERIPHERALS base address (type: io)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMD11D14AM                                        */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UL_(0X10030100)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMD11D14AM                                   */
/* ************************************************************************** */

/* ************************************************************************** */
/** Event Generator IDs for SAMD11D14AM */
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
#define EVENT_ID_GEN_DMAC_CH_0                           20 /**< ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           21 /**< ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           22 /**< ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           23 /**< ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_TCC0_OVF                            24 /**< ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            25 /**< ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            26 /**< ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC_0                           27 /**< ID for TCC0 event generator MC_0 */
#define EVENT_ID_GEN_TCC0_MC_1                           28 /**< ID for TCC0 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_MC_2                           29 /**< ID for TCC0 event generator MC_2 */
#define EVENT_ID_GEN_TCC0_MC_3                           30 /**< ID for TCC0 event generator MC_3 */
#define EVENT_ID_GEN_TC1_OVF                             31 /**< ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MC_0                            32 /**< ID for TC1 event generator MC_0 */
#define EVENT_ID_GEN_TC1_MC_1                            33 /**< ID for TC1 event generator MC_1 */
#define EVENT_ID_GEN_TC2_OVF                             34 /**< ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MC_0                            35 /**< ID for TC2 event generator MC_0 */
#define EVENT_ID_GEN_TC2_MC_1                            36 /**< ID for TC2 event generator MC_1 */
#define EVENT_ID_GEN_ADC_RESRDY                          37 /**< ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          38 /**< ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           39 /**< ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           40 /**< ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            41 /**< ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_DAC_EMPTY                           42 /**< ID for DAC event generator EMPTY */

/* ************************************************************************** */
/** Event User IDs for SAMD11D14AM */
/* ************************************************************************** */
#define EVENT_ID_USER_DMAC_CH_0                           0 /**< ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           1 /**< ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           2 /**< ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                           3 /**< ID for DMAC event user CH_3 */
#define EVENT_ID_USER_TCC0_EV_0                           4 /**< ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                           5 /**< ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                           6 /**< ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                           7 /**< ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                           8 /**< ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                           9 /**< ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_TC1_EVU                            10 /**< ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                            11 /**< ID for TC2 event user EVU */
#define EVENT_ID_USER_ADC_START                          12 /**< ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                           13 /**< ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           14 /**< ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           15 /**< ID for AC event user SOC_1 */
#define EVENT_ID_USER_DAC_START                          16 /**< ID for DAC event user START */

#ifdef __cplusplus
}
#endif

/** @}  end of SAMD11D14AM definitions */


#endif /* _SAMD11D14AM_H_ */

