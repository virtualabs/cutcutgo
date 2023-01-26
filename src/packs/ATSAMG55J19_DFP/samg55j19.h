/*
 * Header file for ATSAMG55J19
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

/* File generated from device description version 2021-07-26T14:35:51Z */
#ifndef _SAMG55J19_H_
#define _SAMG55J19_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/* SAMG55J19 definitions
  This file defines all structures and symbols for SAMG55J19:
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
#  if defined(_U_) || defined(_L_) || defined(_UL_)
#    error "Integer Literals macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#  define _U_(x) (x ## U)    /* C code: Unsigned integer literal constant value */
#  define _L_(x) (x ## L)    /* C code: Long integer literal constant value */
#  define _UL_(x) (x ## UL)  /* C code: Unsigned Long integer literal constant value */

#else /* Assembler */

#  define _U_(x) x    /* Assembler: Unsigned integer literal constant value */
#  define _L_(x) x    /* Assembler: Long integer literal constant value */
#  define _UL_(x) x   /* Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/* CMSIS DEFINITIONS FOR SAMG55J19                                          */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  MemoryManagement_IRQn     = -12, /* -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  BusFault_IRQn             = -11, /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  UsageFault_IRQn           = -10, /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  DebugMonitor_IRQn         =  -4, /* -4  Debug Monitor                       */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/******  SAMG55J19 specific Interrupt Numbers ***********************************/
  SUPC_IRQn                 =   0, /* 0   Supply Controller (SUPC)            */
  RSTC_IRQn                 =   1, /* 1   Reset Controller (RSTC)             */
  RTC_IRQn                  =   2, /* 2   Real-time Clock (RTC)               */
  RTT_IRQn                  =   3, /* 3   Real-time Timer (RTT)               */
  WDT_IRQn                  =   4, /* 4   Watchdog Timer (WDT)                */
  PMC_IRQn                  =   5, /* 5   Power Management Controller (PMC)   */
  EFC_IRQn                  =   6, /* 6   Embedded Flash Controller (EFC)     */
  FLEXCOM7_IRQn             =   7, /* 7   Flexible Serial Communication (FLEXCOM7) */
  FLEXCOM0_IRQn             =   8, /* 8   Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             =   9, /* 9   Flexible Serial Communication (FLEXCOM1) */
  PIOA_IRQn                 =  11, /* 11  Parallel Input/Output Controller (PIOA) */
  PIOB_IRQn                 =  12, /* 12  Parallel Input/Output Controller (PIOB) */
  PDMIC0_IRQn               =  13, /* 13  Pulse Density Modulation Interface Controller (PDMIC0) */
  FLEXCOM2_IRQn             =  14, /* 14  Flexible Serial Communication (FLEXCOM2) */
  MEM2MEM_IRQn              =  15, /* 15  Memory to Memory (MEM2MEM)          */
  I2SC0_IRQn                =  16, /* 16  Inter-IC Sound Controller (I2SC0)   */
  I2SC1_IRQn                =  17, /* 17  Inter-IC Sound Controller (I2SC1)   */
  PDMIC1_IRQn               =  18, /* 18  Pulse Density Modulation Interface Controller (PDMIC1) */
  FLEXCOM3_IRQn             =  19, /* 19  Flexible Serial Communication (FLEXCOM3) */
  FLEXCOM4_IRQn             =  20, /* 20  Flexible Serial Communication (FLEXCOM4) */
  FLEXCOM5_IRQn             =  21, /* 21  Flexible Serial Communication (FLEXCOM5) */
  FLEXCOM6_IRQn             =  22, /* 22  Flexible Serial Communication (FLEXCOM6) */
  TC0_CH0_IRQn              =  23, /* 23  Timer/Counter 0 Channel 0 (TC0)     */
  TC0_CH1_IRQn              =  24, /* 24  Timer/Counter 0 Channel 1 (TC0)     */
  TC0_CH2_IRQn              =  25, /* 25  Timer/Counter 0 Channel 2 (TC0)     */
  TC1_CH0_IRQn              =  26, /* 26  Timer/Counter 1 Channel 0 (TC1)     */
  TC1_CH1_IRQn              =  27, /* 27  Timer/Counter 1 Channel 1 (TC1)     */
  TC1_CH2_IRQn              =  28, /* 28  Timer/Counter 1 Channel 2 (TC1)     */
  ADC_IRQn                  =  29, /* 29  Analog-to-Digital Converter (ADC)   */
  UHP_IRQn                  =  47, /* 47  USB Host Port (UHP)                 */
  UDP_IRQn                  =  48, /* 48  USB Device Port (UDP)               */
  CRCCU_IRQn                =  49, /* 49  Cyclic Redundancy Check Calculation Unit (CRCCU) */

  PERIPH_MAX_IRQn           =  49  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M4 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pfnMemoryManagement_Handler;             /* -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  void* pfnBusFault_Handler;                     /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  void* pfnUsageFault_Handler;                   /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pfnDebugMonitor_Handler;                 /*  -4 Debug Monitor */
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnSUPC_Handler;                         /*   0 Supply Controller (SUPC) */
  void* pfnRSTC_Handler;                         /*   1 Reset Controller (RSTC) */
  void* pfnRTC_Handler;                          /*   2 Real-time Clock (RTC) */
  void* pfnRTT_Handler;                          /*   3 Real-time Timer (RTT) */
  void* pfnWDT_Handler;                          /*   4 Watchdog Timer (WDT) */
  void* pfnPMC_Handler;                          /*   5 Power Management Controller (PMC) */
  void* pfnEFC_Handler;                          /*   6 Embedded Flash Controller (EFC) */
  void* pfnFLEXCOM7_Handler;                     /*   7 Flexible Serial Communication (FLEXCOM7) */
  void* pfnFLEXCOM0_Handler;                     /*   8 Flexible Serial Communication (FLEXCOM0) */
  void* pfnFLEXCOM1_Handler;                     /*   9 Flexible Serial Communication (FLEXCOM1) */
  void* pvReserved10;
  void* pfnPIOA_Handler;                         /*  11 Parallel Input/Output Controller (PIOA) */
  void* pfnPIOB_Handler;                         /*  12 Parallel Input/Output Controller (PIOB) */
  void* pfnPDMIC0_Handler;                       /*  13 Pulse Density Modulation Interface Controller (PDMIC0) */
  void* pfnFLEXCOM2_Handler;                     /*  14 Flexible Serial Communication (FLEXCOM2) */
  void* pfnMEM2MEM_Handler;                      /*  15 Memory to Memory (MEM2MEM) */
  void* pfnI2SC0_Handler;                        /*  16 Inter-IC Sound Controller (I2SC0) */
  void* pfnI2SC1_Handler;                        /*  17 Inter-IC Sound Controller (I2SC1) */
  void* pfnPDMIC1_Handler;                       /*  18 Pulse Density Modulation Interface Controller (PDMIC1) */
  void* pfnFLEXCOM3_Handler;                     /*  19 Flexible Serial Communication (FLEXCOM3) */
  void* pfnFLEXCOM4_Handler;                     /*  20 Flexible Serial Communication (FLEXCOM4) */
  void* pfnFLEXCOM5_Handler;                     /*  21 Flexible Serial Communication (FLEXCOM5) */
  void* pfnFLEXCOM6_Handler;                     /*  22 Flexible Serial Communication (FLEXCOM6) */
  void* pfnTC0_CH0_Handler;                      /*  23 Timer/Counter 0 Channel 0 (TC0) */
  void* pfnTC0_CH1_Handler;                      /*  24 Timer/Counter 0 Channel 1 (TC0) */
  void* pfnTC0_CH2_Handler;                      /*  25 Timer/Counter 0 Channel 2 (TC0) */
  void* pfnTC1_CH0_Handler;                      /*  26 Timer/Counter 1 Channel 0 (TC1) */
  void* pfnTC1_CH1_Handler;                      /*  27 Timer/Counter 1 Channel 1 (TC1) */
  void* pfnTC1_CH2_Handler;                      /*  28 Timer/Counter 1 Channel 2 (TC1) */
  void* pfnADC_Handler;                          /*  29 Analog-to-Digital Converter (ADC) */
  void* pvReserved30;
  void* pvReserved31;
  void* pvReserved32;
  void* pvReserved33;
  void* pvReserved34;
  void* pvReserved35;
  void* pvReserved36;
  void* pvReserved37;
  void* pvReserved38;
  void* pvReserved39;
  void* pvReserved40;
  void* pvReserved41;
  void* pvReserved42;
  void* pvReserved43;
  void* pvReserved44;
  void* pvReserved45;
  void* pvReserved46;
  void* pfnUHP_Handler;                          /*  47 USB Host Port (UHP) */
  void* pfnUDP_Handler;                          /*  48 USB Device Port (UDP) */
  void* pfnCRCCU_Handler;                        /*  49 Cyclic Redundancy Check Calculation Unit (CRCCU) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M4 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void MemoryManagement_Handler      ( void );
void BusFault_Handler              ( void );
void UsageFault_Handler            ( void );
void SVCall_Handler                ( void );
void DebugMonitor_Handler          ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void SUPC_Handler                  ( void );
void RSTC_Handler                  ( void );
void RTC_Handler                   ( void );
void RTT_Handler                   ( void );
void WDT_Handler                   ( void );
void PMC_Handler                   ( void );
void EFC_Handler                   ( void );
void FLEXCOM7_Handler              ( void );
void FLEXCOM0_Handler              ( void );
void FLEXCOM1_Handler              ( void );
void PIOA_Handler                  ( void );
void PIOB_Handler                  ( void );
void PDMIC0_Handler                ( void );
void FLEXCOM2_Handler              ( void );
void MEM2MEM_Handler               ( void );
void I2SC0_Handler                 ( void );
void I2SC1_Handler                 ( void );
void PDMIC1_Handler                ( void );
void FLEXCOM3_Handler              ( void );
void FLEXCOM4_Handler              ( void );
void FLEXCOM5_Handler              ( void );
void FLEXCOM6_Handler              ( void );
void TC0_CH0_Handler               ( void );
void TC0_CH1_Handler               ( void );
void TC0_CH2_Handler               ( void );
void TC1_CH0_Handler               ( void );
void TC1_CH1_Handler               ( void );
void TC1_CH2_Handler               ( void );
void ADC_Handler                   ( void );
void UHP_Handler                   ( void );
void UDP_Handler                   ( void );
void CRCCU_Handler                 ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M4 Processor and Core Peripherals */
#define __CM4_REV                     0x0001 /* CM4 Core Revision                                                         */
#define __NVIC_PRIO_BITS                   4 /* Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __MPU_PRESENT                      1 /* MPU present or not                                                        */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Register present or not                               */
#define __FPU_PRESENT                      1 /* FPU present or not                                                        */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
#include "system_samg55.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR SAMG55J19                         */
/* ************************************************************************** */
#include "component/adc.h"
#include "component/chipid.h"
#include "component/cmcc.h"
#include "component/crccu.h"
#include "component/efc.h"
#include "component/flexcom.h"
#include "component/fuses.h"
#include "component/gpbr.h"
#include "component/i2sc.h"
#include "component/matrix.h"
#include "component/mem2mem.h"
#include "component/pdc.h"
#include "component/pdmic.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/spi.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/twi.h"
#include "component/udp.h"
#include "component/uhp.h"
#include "component/usart.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAMG55J19 */
/* ************************************************************************** */
#include "instance/adc.h"
#include "instance/chipid.h"
#include "instance/cmcc.h"
#include "instance/crccu.h"
#include "instance/efc.h"
#include "instance/flexcom0.h"
#include "instance/flexcom1.h"
#include "instance/flexcom2.h"
#include "instance/flexcom3.h"
#include "instance/flexcom4.h"
#include "instance/flexcom5.h"
#include "instance/flexcom6.h"
#include "instance/flexcom7.h"
#include "instance/fuses.h"
#include "instance/gpbr.h"
#include "instance/i2sc0.h"
#include "instance/i2sc1.h"
#include "instance/matrix.h"
#include "instance/mem2mem.h"
#include "instance/pdmic0.h"
#include "instance/pdmic1.h"
#include "instance/pioa.h"
#include "instance/piob.h"
#include "instance/pmc.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/rtt.h"
#include "instance/spi0.h"
#include "instance/spi1.h"
#include "instance/spi2.h"
#include "instance/spi3.h"
#include "instance/spi4.h"
#include "instance/spi5.h"
#include "instance/spi6.h"
#include "instance/spi7.h"
#include "instance/supc.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/twi0.h"
#include "instance/twi1.h"
#include "instance/twi2.h"
#include "instance/twi3.h"
#include "instance/twi4.h"
#include "instance/twi5.h"
#include "instance/twi6.h"
#include "instance/twi7.h"
#include "instance/udp.h"
#include "instance/uhp.h"
#include "instance/usart0.h"
#include "instance/usart1.h"
#include "instance/usart2.h"
#include "instance/usart3.h"
#include "instance/usart4.h"
#include "instance/usart5.h"
#include "instance/usart6.h"
#include "instance/usart7.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMG55J19                                   */
/* ************************************************************************** */
#define ID_SUPC          (  0) /* Supply Controller (SUPC) */
#define ID_RSTC          (  1) /* Reset Controller (RSTC) */
#define ID_RTC           (  2) /* Real-time Clock (RTC) */
#define ID_RTT           (  3) /* Real-time Timer (RTT) */
#define ID_WDT           (  4) /* Watchdog Timer (WDT) */
#define ID_PMC           (  5) /* Power Management Controller (PMC) */
#define ID_EFC           (  6) /* Embedded Flash Controller (EFC) */
#define ID_FLEXCOM7      (  7) /* Flexible Serial Communication (FLEXCOM7) */
#define ID_FLEXCOM0      (  8) /* Flexible Serial Communication (FLEXCOM0) */
#define ID_FLEXCOM1      (  9) /* Flexible Serial Communication (FLEXCOM1) */
#define ID_PIOA          ( 11) /* Parallel Input/Output Controller (PIOA) */
#define ID_PIOB          ( 12) /* Parallel Input/Output Controller (PIOB) */
#define ID_PDMIC0        ( 13) /* Pulse Density Modulation Interface Controller (PDMIC0) */
#define ID_FLEXCOM2      ( 14) /* Flexible Serial Communication (FLEXCOM2) */
#define ID_MEM2MEM       ( 15) /* Memory to Memory (MEM2MEM) */
#define ID_I2SC0         ( 16) /* Inter-IC Sound Controller (I2SC0) */
#define ID_I2SC1         ( 17) /* Inter-IC Sound Controller (I2SC1) */
#define ID_PDMIC1        ( 18) /* Pulse Density Modulation Interface Controller (PDMIC1) */
#define ID_FLEXCOM3      ( 19) /* Flexible Serial Communication (FLEXCOM3) */
#define ID_FLEXCOM4      ( 20) /* Flexible Serial Communication (FLEXCOM4) */
#define ID_FLEXCOM5      ( 21) /* Flexible Serial Communication (FLEXCOM5) */
#define ID_FLEXCOM6      ( 22) /* Flexible Serial Communication (FLEXCOM6) */
#define ID_TC0_CHANNEL0  ( 23) /* Timer Counter (TC0_CHANNEL0) */
#define ID_TC0_CHANNEL1  ( 24) /* Timer Counter (TC0_CHANNEL1) */
#define ID_TC0_CHANNEL2  ( 25) /* Timer Counter (TC0_CHANNEL2) */
#define ID_TC1_CHANNEL0  ( 26) /* Timer Counter (TC1_CHANNEL0) */
#define ID_TC1_CHANNEL1  ( 27) /* Timer Counter (TC1_CHANNEL1) */
#define ID_TC1_CHANNEL2  ( 28) /* Timer Counter (TC1_CHANNEL2) */
#define ID_ADC           ( 29) /* Analog-to-Digital Converter (ADC) */
#define ID_UHP           ( 47) /* USB Host Port (UHP) */
#define ID_UDP           ( 48) /* USB Device Port (UDP) */
#define ID_CRCCU         ( 49) /* Cyclic Redundancy Check Calculation Unit (CRCCU) */

#define ID_PERIPH_MAX    ( 49) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMG55J19                     */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ADC_REGS                         ((adc_registers_t*)0x40038000)                /* ADC Registers Address        */
#define CHIPID_REGS                      ((chipid_registers_t*)0x400e0740)             /* CHIPID Registers Address     */
#define CMCC_REGS                        ((cmcc_registers_t*)0x4003c000)               /* CMCC Registers Address       */
#define CRCCU_REGS                       ((crccu_registers_t*)0x40048000)              /* CRCCU Registers Address      */
#define EFC_REGS                         ((efc_registers_t*)0x400e0a00)                /* EFC Registers Address        */
#define FLEXCOM0_REGS                    ((flexcom_registers_t*)0x4000c000)            /* FLEXCOM0 Registers Address   */
#define FLEXCOM1_REGS                    ((flexcom_registers_t*)0x40020000)            /* FLEXCOM1 Registers Address   */
#define FLEXCOM2_REGS                    ((flexcom_registers_t*)0x40024000)            /* FLEXCOM2 Registers Address   */
#define FLEXCOM3_REGS                    ((flexcom_registers_t*)0x40018000)            /* FLEXCOM3 Registers Address   */
#define FLEXCOM4_REGS                    ((flexcom_registers_t*)0x4001c000)            /* FLEXCOM4 Registers Address   */
#define FLEXCOM5_REGS                    ((flexcom_registers_t*)0x40008000)            /* FLEXCOM5 Registers Address   */
#define FLEXCOM6_REGS                    ((flexcom_registers_t*)0x40040000)            /* FLEXCOM6 Registers Address   */
#define FLEXCOM7_REGS                    ((flexcom_registers_t*)0x40034000)            /* FLEXCOM7 Registers Address   */
#define GPBR_REGS                        ((gpbr_registers_t*)0x400e1490)               /* GPBR Registers Address       */
#define I2SC0_REGS                       ((i2sc_registers_t*)0x40000000)               /* I2SC0 Registers Address      */
#define I2SC1_REGS                       ((i2sc_registers_t*)0x40004000)               /* I2SC1 Registers Address      */
#define MATRIX_REGS                      ((matrix_registers_t*)0x400e0200)             /* MATRIX Registers Address     */
#define MEM2MEM_REGS                     ((mem2mem_registers_t*)0x40028000)            /* MEM2MEM Registers Address    */
#define PDMIC0_REGS                      ((pdmic_registers_t*)0x4002c000)              /* PDMIC0 Registers Address     */
#define PDMIC1_REGS                      ((pdmic_registers_t*)0x40030000)              /* PDMIC1 Registers Address     */
#define PIOA_REGS                        ((pio_registers_t*)0x400e0e00)                /* PIOA Registers Address       */
#define PIOB_REGS                        ((pio_registers_t*)0x400e1000)                /* PIOB Registers Address       */
#define PMC_REGS                         ((pmc_registers_t*)0x400e0400)                /* PMC Registers Address        */
#define RSTC_REGS                        ((rstc_registers_t*)0x400e1400)               /* RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x400e1460)                /* RTC Registers Address        */
#define RTT_REGS                         ((rtt_registers_t*)0x400e1430)                /* RTT Registers Address        */
#define SPI0_REGS                        ((spi_registers_t*)0x4000c400)                /* SPI0 Registers Address       */
#define SPI1_REGS                        ((spi_registers_t*)0x40020400)                /* SPI1 Registers Address       */
#define SPI2_REGS                        ((spi_registers_t*)0x40024400)                /* SPI2 Registers Address       */
#define SPI3_REGS                        ((spi_registers_t*)0x40018400)                /* SPI3 Registers Address       */
#define SPI4_REGS                        ((spi_registers_t*)0x4001c400)                /* SPI4 Registers Address       */
#define SPI5_REGS                        ((spi_registers_t*)0x40008400)                /* SPI5 Registers Address       */
#define SPI6_REGS                        ((spi_registers_t*)0x40040400)                /* SPI6 Registers Address       */
#define SPI7_REGS                        ((spi_registers_t*)0x40034400)                /* SPI7 Registers Address       */
#define SUPC_REGS                        ((supc_registers_t*)0x400e1410)               /* SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x40010000)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x40014000)                 /* TC1 Registers Address        */
#define TWI0_REGS                        ((twi_registers_t*)0x4000c600)                /* TWI0 Registers Address       */
#define TWI1_REGS                        ((twi_registers_t*)0x40020600)                /* TWI1 Registers Address       */
#define TWI2_REGS                        ((twi_registers_t*)0x40024600)                /* TWI2 Registers Address       */
#define TWI3_REGS                        ((twi_registers_t*)0x40018600)                /* TWI3 Registers Address       */
#define TWI4_REGS                        ((twi_registers_t*)0x4001c600)                /* TWI4 Registers Address       */
#define TWI5_REGS                        ((twi_registers_t*)0x40008600)                /* TWI5 Registers Address       */
#define TWI6_REGS                        ((twi_registers_t*)0x40040600)                /* TWI6 Registers Address       */
#define TWI7_REGS                        ((twi_registers_t*)0x40034600)                /* TWI7 Registers Address       */
#define UDP_REGS                         ((udp_registers_t*)0x40044000)                /* UDP Registers Address        */
#define UHP_REGS                         ((uhp_registers_t*)0x20400000)                /* UHP Registers Address        */
#define USART0_REGS                      ((usart_registers_t*)0x4000c200)              /* USART0 Registers Address     */
#define USART1_REGS                      ((usart_registers_t*)0x40020200)              /* USART1 Registers Address     */
#define USART2_REGS                      ((usart_registers_t*)0x40024200)              /* USART2 Registers Address     */
#define USART3_REGS                      ((usart_registers_t*)0x40018200)              /* USART3 Registers Address     */
#define USART4_REGS                      ((usart_registers_t*)0x4001c200)              /* USART4 Registers Address     */
#define USART5_REGS                      ((usart_registers_t*)0x40008200)              /* USART5 Registers Address     */
#define USART6_REGS                      ((usart_registers_t*)0x40040200)              /* USART6 Registers Address     */
#define USART7_REGS                      ((usart_registers_t*)0x40034200)              /* USART7 Registers Address     */
#define WDT_REGS                         ((wdt_registers_t*)0x400e1450)                /* WDT Registers Address        */
#define GPNVMBITS_REGS                   ((fuses_gpnvmbits_registers_t*)0x00000000)    /* FUSES Registers Address      */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMG55J19                                   */
/* ************************************************************************** */
#define ADC_BASE_ADDRESS                 _UL_(0x40038000)                              /* ADC Base Address */
#define CHIPID_BASE_ADDRESS              _UL_(0x400e0740)                              /* CHIPID Base Address */
#define CMCC_BASE_ADDRESS                _UL_(0x4003c000)                              /* CMCC Base Address */
#define CRCCU_BASE_ADDRESS               _UL_(0x40048000)                              /* CRCCU Base Address */
#define EFC_BASE_ADDRESS                 _UL_(0x400e0a00)                              /* EFC Base Address */
#define FLEXCOM0_BASE_ADDRESS            _UL_(0x4000c000)                              /* FLEXCOM0 Base Address */
#define FLEXCOM1_BASE_ADDRESS            _UL_(0x40020000)                              /* FLEXCOM1 Base Address */
#define FLEXCOM2_BASE_ADDRESS            _UL_(0x40024000)                              /* FLEXCOM2 Base Address */
#define FLEXCOM3_BASE_ADDRESS            _UL_(0x40018000)                              /* FLEXCOM3 Base Address */
#define FLEXCOM4_BASE_ADDRESS            _UL_(0x4001c000)                              /* FLEXCOM4 Base Address */
#define FLEXCOM5_BASE_ADDRESS            _UL_(0x40008000)                              /* FLEXCOM5 Base Address */
#define FLEXCOM6_BASE_ADDRESS            _UL_(0x40040000)                              /* FLEXCOM6 Base Address */
#define FLEXCOM7_BASE_ADDRESS            _UL_(0x40034000)                              /* FLEXCOM7 Base Address */
#define GPBR_BASE_ADDRESS                _UL_(0x400e1490)                              /* GPBR Base Address */
#define I2SC0_BASE_ADDRESS               _UL_(0x40000000)                              /* I2SC0 Base Address */
#define I2SC1_BASE_ADDRESS               _UL_(0x40004000)                              /* I2SC1 Base Address */
#define MATRIX_BASE_ADDRESS              _UL_(0x400e0200)                              /* MATRIX Base Address */
#define MEM2MEM_BASE_ADDRESS             _UL_(0x40028000)                              /* MEM2MEM Base Address */
#define PDMIC0_BASE_ADDRESS              _UL_(0x4002c000)                              /* PDMIC0 Base Address */
#define PDMIC1_BASE_ADDRESS              _UL_(0x40030000)                              /* PDMIC1 Base Address */
#define PIOA_BASE_ADDRESS                _UL_(0x400e0e00)                              /* PIOA Base Address */
#define PIOB_BASE_ADDRESS                _UL_(0x400e1000)                              /* PIOB Base Address */
#define PMC_BASE_ADDRESS                 _UL_(0x400e0400)                              /* PMC Base Address */
#define RSTC_BASE_ADDRESS                _UL_(0x400e1400)                              /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x400e1460)                              /* RTC Base Address */
#define RTT_BASE_ADDRESS                 _UL_(0x400e1430)                              /* RTT Base Address */
#define SPI0_BASE_ADDRESS                _UL_(0x4000c400)                              /* SPI0 Base Address */
#define SPI1_BASE_ADDRESS                _UL_(0x40020400)                              /* SPI1 Base Address */
#define SPI2_BASE_ADDRESS                _UL_(0x40024400)                              /* SPI2 Base Address */
#define SPI3_BASE_ADDRESS                _UL_(0x40018400)                              /* SPI3 Base Address */
#define SPI4_BASE_ADDRESS                _UL_(0x4001c400)                              /* SPI4 Base Address */
#define SPI5_BASE_ADDRESS                _UL_(0x40008400)                              /* SPI5 Base Address */
#define SPI6_BASE_ADDRESS                _UL_(0x40040400)                              /* SPI6 Base Address */
#define SPI7_BASE_ADDRESS                _UL_(0x40034400)                              /* SPI7 Base Address */
#define SUPC_BASE_ADDRESS                _UL_(0x400e1410)                              /* SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0x40010000)                              /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x40014000)                              /* TC1 Base Address */
#define TWI0_BASE_ADDRESS                _UL_(0x4000c600)                              /* TWI0 Base Address */
#define TWI1_BASE_ADDRESS                _UL_(0x40020600)                              /* TWI1 Base Address */
#define TWI2_BASE_ADDRESS                _UL_(0x40024600)                              /* TWI2 Base Address */
#define TWI3_BASE_ADDRESS                _UL_(0x40018600)                              /* TWI3 Base Address */
#define TWI4_BASE_ADDRESS                _UL_(0x4001c600)                              /* TWI4 Base Address */
#define TWI5_BASE_ADDRESS                _UL_(0x40008600)                              /* TWI5 Base Address */
#define TWI6_BASE_ADDRESS                _UL_(0x40040600)                              /* TWI6 Base Address */
#define TWI7_BASE_ADDRESS                _UL_(0x40034600)                              /* TWI7 Base Address */
#define UDP_BASE_ADDRESS                 _UL_(0x40044000)                              /* UDP Base Address */
#define UHP_BASE_ADDRESS                 _UL_(0x20400000)                              /* UHP Base Address */
#define USART0_BASE_ADDRESS              _UL_(0x4000c200)                              /* USART0 Base Address */
#define USART1_BASE_ADDRESS              _UL_(0x40020200)                              /* USART1 Base Address */
#define USART2_BASE_ADDRESS              _UL_(0x40024200)                              /* USART2 Base Address */
#define USART3_BASE_ADDRESS              _UL_(0x40018200)                              /* USART3 Base Address */
#define USART4_BASE_ADDRESS              _UL_(0x4001c200)                              /* USART4 Base Address */
#define USART5_BASE_ADDRESS              _UL_(0x40008200)                              /* USART5 Base Address */
#define USART6_BASE_ADDRESS              _UL_(0x40040200)                              /* USART6 Base Address */
#define USART7_BASE_ADDRESS              _UL_(0x40034200)                              /* USART7 Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x400e1450)                              /* WDT Base Address */
#define GPNVMBITS_BASE_ADDRESS           _UL_(0x00000000)                              /* FUSES Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMG55J19                                            */
/* ************************************************************************** */
#include "pio/samg55j19.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMG55J19                                 */
/* ************************************************************************** */

#define PERIPHERALS_SIZE               _UL_(0x20000000)    /* 524288kB Memory segment type: io */
#define SYSTEM_SIZE                    _UL_(0x10000000)    /* 262144kB Memory segment type: io */
#define IFLASH_SIZE                    _UL_(0x00080000)    /*  512kB Memory segment type: flash */
#define IFLASH_PAGE_SIZE               _UL_(       512)
#define IFLASH_NB_OF_PAGES             _UL_(      1024)

#define IROM_SIZE                      _UL_(0x00400000)    /* 4096kB Memory segment type: rom */
#define IRAM_SIZE                      _UL_(0x00028000)    /*  160kB Memory segment type: ram */
#define CMCC_SIZE                      _UL_(0x00004000)    /*   16kB Memory segment type: other */

#define PERIPHERALS_ADDR               _UL_(0x40000000)    /* PERIPHERALS base address (type: io)*/
#define SYSTEM_ADDR                    _UL_(0xe0000000)    /* SYSTEM base address (type: io)*/
#define IFLASH_ADDR                    _UL_(0x00400000)    /* IFLASH base address (type: flash)*/
#define IROM_ADDR                      _UL_(0x00800000)    /* IROM base address (type: rom)*/
#define IRAM_ADDR                      _UL_(0x20000000)    /* IRAM base address (type: ram)*/
#define CMCC_ADDR                      _UL_(0x1fc00000)    /* CMCC base address (type: other)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR SAMG55J19                                          */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UL_(0X05B3E03F)
#define CHIP_CIDR                      _UL_(0X24570AE0)
#define CHIP_EXID                      _UL_(0X00000000)

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR SAMG55J19                                     */
/* ************************************************************************** */
#define CHIP_FREQ_SLCK_RC_MIN          _UL_(20000)         
#define CHIP_FREQ_SLCK_RC              _UL_(32000)         /* Typical Slow Clock Internal RC frequency */
#define CHIP_FREQ_SLCK_RC_MAX          _UL_(44000)         
#define CHIP_FREQ_MAINCK_RC_8MHZ       _UL_(8000000)       
#define CHIP_FREQ_MAINCK_RC_16MHZ      _UL_(16000000)      
#define CHIP_FREQ_MAINCK_RC_24MHZ      _UL_(24000000)      
#define CHIP_FREQ_CPU_MAX              _UL_(120000000)     
#define CHIP_FREQ_XTAL_32K             _UL_(32768)         
#define CHIP_FLASH_WRITE_WAIT_STATE    _UL_(8)             /* Embedded Flash Write Wait State */
#define CHIP_FREQ_FWS_0                _UL_(14000000)      /* Maximum operating frequency when FWS is 0 */
#define CHIP_FREQ_FWS_1                _UL_(28000000)      /* Maximum operating frequency when FWS is 1 */
#define CHIP_FREQ_FWS_2                _UL_(42000000)      /* Maximum operating frequency when FWS is 2 */
#define CHIP_FREQ_FWS_3                _UL_(56000000)      /* Maximum operating frequency when FWS is 3 */
#define CHIP_FREQ_FWS_4                _UL_(70000000)      /* Maximum operating frequency when FWS is 4 */
#define CHIP_FREQ_FWS_5                _UL_(84000000)      /* Maximum operating frequency when FWS is 5 */
#define CHIP_FREQ_FWS_6                _UL_(96000000)      /* Maximum operating frequency when FWS is 6 */
#define CHIP_FREQ_FWS_7                _UL_(108000000)     /* Maximum operating frequency when FWS is 7 */
#define CHIP_FREQ_FWS_8                _UL_(120000000)     /* Maximum operating frequency when FWS is 8 */
#define CHIP_FREQ_FWS_NUMBER           _UL_(9)             /* Number of FWS ranges */



#ifdef __cplusplus
}
#endif

#endif /* _SAMG55J19_H_ */

