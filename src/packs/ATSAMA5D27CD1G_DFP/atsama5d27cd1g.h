/**
 * \brief Header file for ATSAMA5D27CD1G
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

/* file generated from device description version 2020-05-04T06:27:27Z */
#ifndef _SAMA5D27CD1G_H_
#define _SAMA5D27CD1G_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAMA5D27CD1G_definitions SAMA5D27CD1G definitions
  This file defines all structures and symbols for SAMA5D27CD1G:
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
/*   CMSIS DEFINITIONS FOR SAMA5D27CD1G                                       */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-A5 Processor Exceptions Numbers ******************************/
/******  SAMA5D27CD1G specific Interrupt Numbers ***********************************/
  SAIC_IRQn                 =   0, /**< 0   Advanced Interrupt Controller (SAIC) */
  PMU_IRQn                  =   2, /**< 2   PMU (PMU)                           */
  PIT_IRQn                  =   3, /**< 3   Periodic Interval Timer (PIT)       */
  WDT_IRQn                  =   4, /**< 4   Watchdog Timer (WDT)                */
  GMAC_IRQn                 =   5, /**< 5   Gigabit Ethernet MAC (GMAC)         */
  XDMAC0_IRQn               =   6, /**< 6   Extensible DMA Controller (XDMAC0)  */
  XDMAC1_IRQn               =   7, /**< 7   Extensible DMA Controller (XDMAC1)  */
  ICM_IRQn                  =   8, /**< 8   Integrity Check Monitor (ICM)       */
  AES_IRQn                  =   9, /**< 9   Advanced Encryption Standard (AES)  */
  AESB_IRQn                 =  10, /**< 10  Advanced Encryption Standard Bridge (AESB) */
  TDES_IRQn                 =  11, /**< 11  Triple Data Encryption Standard (TDES) */
  SHA_IRQn                  =  12, /**< 12  Secure Hash Algorithm (SHA)         */
  MPDDRC_IRQn               =  13, /**< 13  AHB Multiport DDR-SDRAM Controller (MPDDRC) */
  MATRIX1_IRQn              =  14, /**< 14  AHB Bus Matrix (MATRIX1)            */
  MATRIX0_IRQn              =  15, /**< 15  AHB Bus Matrix (MATRIX0)            */
  SECUMOD_IRQn              =  16, /**< 16  Security Module (SECUMOD)           */
  HSMC_IRQn                 =  17, /**< 17  HSMC (HSMC)                         */
  PIOA_IRQn                 =  18, /**< 18  Parallel Input/Output Controller (PIOA) */
  FLEXCOM0_IRQn             =  19, /**< 19  Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             =  20, /**< 20  Flexible Serial Communication (FLEXCOM1) */
  FLEXCOM2_IRQn             =  21, /**< 21  Flexible Serial Communication (FLEXCOM2) */
  FLEXCOM3_IRQn             =  22, /**< 22  Flexible Serial Communication (FLEXCOM3) */
  FLEXCOM4_IRQn             =  23, /**< 23  Flexible Serial Communication (FLEXCOM4) */
  UART0_IRQn                =  24, /**< 24  Universal Asynchronous Receiver Transmitter (UART0) */
  UART1_IRQn                =  25, /**< 25  Universal Asynchronous Receiver Transmitter (UART1) */
  UART2_IRQn                =  26, /**< 26  Universal Asynchronous Receiver Transmitter (UART2) */
  UART3_IRQn                =  27, /**< 27  Universal Asynchronous Receiver Transmitter (UART3) */
  UART4_IRQn                =  28, /**< 28  Universal Asynchronous Receiver Transmitter (UART4) */
  TWIHS0_IRQn               =  29, /**< 29  Two-wire Interface High Speed (TWIHS0) */
  TWIHS1_IRQn               =  30, /**< 30  Two-wire Interface High Speed (TWIHS1) */
  SDMMC0_IRQn               =  31, /**< 31  Secure Digital MultiMedia Card Controller (SDMMC0) */
  SDMMC1_IRQn               =  32, /**< 32  Secure Digital MultiMedia Card Controller (SDMMC1) */
  SPI0_IRQn                 =  33, /**< 33  Serial Peripheral Interface (SPI0)  */
  SPI1_IRQn                 =  34, /**< 34  Serial Peripheral Interface (SPI1)  */
  TC0_IRQn                  =  35, /**< 35  Timer Counter (TC0)                 */
  TC1_IRQn                  =  36, /**< 36  Timer Counter (TC1)                 */
  PWM_IRQn                  =  38, /**< 38  Pulse Width Modulation Controller (PWM) */
  ADC_IRQn                  =  40, /**< 40  Analog-to-Digital Converter (ADC)   */
  UHPHS_IRQn                =  41, /**< 41  UHPHS (UHPHS)                       */
  UDPHS_IRQn                =  42, /**< 42  USB High Speed Device Port (UDPHS)  */
  SSC0_IRQn                 =  43, /**< 43  Synchronous Serial Controller (SSC0) */
  SSC1_IRQn                 =  44, /**< 44  Synchronous Serial Controller (SSC1) */
  LCDC_IRQn                 =  45, /**< 45  LCD Controller (LCDC)               */
  ISC_IRQn                  =  46, /**< 46  Image Sensor Controller (ISC)       */
  TRNG_IRQn                 =  47, /**< 47  True Random Number Generator (TRNG) */
  PDMIC_IRQn                =  48, /**< 48  Pulse Density Modulation Interface Controller (PDMIC) */
  AIC_IRQn                  =  49, /**< 49  Advanced Interrupt Controller (AIC) */
  SFC_IRQn                  =  50, /**< 50  Secure Fuse Controller (SFC)        */
  SECURAM_IRQn              =  51, /**< 51  SECURAM (SECURAM)                   */
  QSPI0_IRQn                =  52, /**< 52  Quad Serial Peripheral Interface (QSPI0) */
  QSPI1_IRQn                =  53, /**< 53  Quad Serial Peripheral Interface (QSPI1) */
  I2SC0_IRQn                =  54, /**< 54  Inter-IC Sound Controller (I2SC0)   */
  I2SC1_IRQn                =  55, /**< 55  Inter-IC Sound Controller (I2SC1)   */
  MCAN0_INT0_IRQn           =  56, /**< 56  Controller Area Network (MCAN0)     */
  MCAN1_INT0_IRQn           =  57, /**< 57  Controller Area Network (MCAN1)     */
  PTC_IRQn                  =  58, /**< 58  Peripheral Touch Controller (PTC)   */
  CLASSD_IRQn               =  59, /**< 59  Audio Class D Amplifier (CLASSD) (CLASSD) */
  L2CC_IRQn                 =  63, /**< 63  L2 Cache Controller (L2CC)          */
  MCAN0_INT1_IRQn           =  64, /**< 64  Controller Area Network (MCAN0)     */
  MCAN1_INT1_IRQn           =  65, /**< 65  Controller Area Network (MCAN1)     */
  GMAC_Q1_IRQn              =  66, /**< 66  Gigabit Ethernet MAC (GMAC)         */
  GMAC_Q2_IRQn              =  67, /**< 67  Gigabit Ethernet MAC (GMAC)         */
  PIOB_IRQn                 =  68, /**< 68  Parallel Input/Output Controller (PIOB) */
  PIOC_IRQn                 =  69, /**< 69  Parallel Input/Output Controller (PIOC) */
  PIOD_IRQn                 =  70, /**< 70  Parallel Input/Output Controller (PIOD) */
  SDMMC0_TIMER_IRQn         =  71, /**< 71  Secure Digital MultiMedia Card Controller (SDMMC0) */
  SDMMC1_TIMER_IRQn         =  72, /**< 72  Secure Digital MultiMedia Card Controller (SDMMC1) */
  RSTC_IRQn                 =  74, /**< 74  Shared between PMC RSTC RTC (RSTC)  */
  RTC_IRQn                  =  74, /**< 74  Shared between PMC RSTC RTC (RTC)   */
  PMC_IRQn                  =  74, /**< 74  Shared between PMC RSTC RTC (PMC)   */
  ACC_IRQn                  =  75, /**< 75  Analog Comparator Controller (ACC)  */
  RXLP_IRQn                 =  76, /**< 76  Low Power Asynchronous Receiver (RXLP) */

  PERIPH_MAX_IRQn           =  76  /**< Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-A5 exception handlers */
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void SAIC_Handler                  ( void );
void PIT_Handler                   ( void );
void WDT_Handler                   ( void );
void GMAC_Handler                  ( void );
void XDMAC0_Handler                ( void );
void XDMAC1_Handler                ( void );
void ICM_Handler                   ( void );
void AES_Handler                   ( void );
void AESB_Handler                  ( void );
void TDES_Handler                  ( void );
void SHA_Handler                   ( void );
void MPDDRC_Handler                ( void );
void MATRIX1_Handler               ( void );
void MATRIX0_Handler               ( void );
void SECUMOD_Handler               ( void );
void PIOA_Handler                  ( void );
void FLEXCOM0_Handler              ( void );
void FLEXCOM1_Handler              ( void );
void FLEXCOM2_Handler              ( void );
void FLEXCOM3_Handler              ( void );
void FLEXCOM4_Handler              ( void );
void UART0_Handler                 ( void );
void UART1_Handler                 ( void );
void UART2_Handler                 ( void );
void UART3_Handler                 ( void );
void UART4_Handler                 ( void );
void TWIHS0_Handler                ( void );
void TWIHS1_Handler                ( void );
void SDMMC0_Handler                ( void );
void SDMMC1_Handler                ( void );
void SPI0_Handler                  ( void );
void SPI1_Handler                  ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void PWM_Handler                   ( void );
void ADC_Handler                   ( void );
void UDPHS_Handler                 ( void );
void SSC0_Handler                  ( void );
void SSC1_Handler                  ( void );
void LCDC_Handler                  ( void );
void ISC_Handler                   ( void );
void TRNG_Handler                  ( void );
void PDMIC_Handler                 ( void );
void AIC_Handler                   ( void );
void SFC_Handler                   ( void );
void QSPI0_Handler                 ( void );
void QSPI1_Handler                 ( void );
void I2SC0_Handler                 ( void );
void I2SC1_Handler                 ( void );
void MCAN0_INT0_Handler            ( void );
void MCAN1_INT0_Handler            ( void );
void PTC_Handler                   ( void );
void CLASSD_Handler                ( void );
void L2CC_Handler                  ( void );
void MCAN0_INT1_Handler            ( void );
void MCAN1_INT1_Handler            ( void );
void GMAC_Q1_Handler               ( void );
void GMAC_Q2_Handler               ( void );
void PIOB_Handler                  ( void );
void PIOC_Handler                  ( void );
void PIOD_Handler                  ( void );
void SDMMC0_TIMER_Handler          ( void );
void SDMMC1_TIMER_Handler          ( void );
void SYSC_Handler                  ( void );
void ACC_Handler                   ( void );
void RXLP_Handler                  ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief Configuration of the CORTEX-A5 Processor and Core Peripherals */
#define __CA_REV                  0x0001 /**< CA5 Core Revision                                                         */
#define __CORTEX_A                     5 /**< Core type number (Cortex-A5)                                              */
#define __FPU_PRESENT                  1 /**< FPU is present on core                                                    */
#define __GIC_PRESENT                  0 /**< GIC is present on core                                                    */
#define __TIM_PRESENT                  0 /**< Private Timer is present on core                                          */

/*
 * \brief CMSIS includes
 */
#include "core_ca.h"
#if defined USE_CMSIS_INIT
#include "system_sama5d2.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAMA5D27CD1G_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMA5D27CD1G                      */
/* ************************************************************************** */
#include "component/acc.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/aesb.h"
#include "component/aic.h"
#include "component/aximx.h"
#include "component/chipid.h"
#include "component/classd.h"
#include "component/flexcom.h"
#include "component/gmac.h"
#include "component/i2sc.h"
#include "component/icm.h"
#include "component/isc.h"
#include "component/l2cc.h"
#include "component/lcdc.h"
#include "component/matrix.h"
#include "component/mcan.h"
#include "component/mpddrc.h"
#include "component/pdmic.h"
#include "component/pio.h"
#include "component/pit.h"
#include "component/pmc.h"
#include "component/ptc.h"
#include "component/pwm.h"
#include "component/qspi.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rxlp.h"
#include "component/sckc.h"
#include "component/sdmmc.h"
#include "component/secumod.h"
#include "component/sfc.h"
#include "component/sfr.h"
#include "component/sfrbu.h"
#include "component/sha.h"
#include "component/shdwc.h"
#include "component/smc.h"
#include "component/spi.h"
#include "component/ssc.h"
#include "component/tc.h"
#include "component/tdes.h"
#include "component/trng.h"
#include "component/twihs.h"
#include "component/uart.h"
#include "component/udphs.h"
#include "component/uhphs.h"
#include "component/wdt.h"
#include "component/xdmac.h"
/** @}  end of Peripheral Software API */

/** \addtogroup SAMA5D27CD1G_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMA5D27CD1G                                */
/* ************************************************************************** */
#define ID_PIT           (  3) /**< \brief Periodic Interval Timer (PIT) */
#define ID_WDT           (  4) /**< \brief Watchdog Timer (WDT) */
#define ID_GMAC          (  5) /**< \brief Gigabit Ethernet MAC (GMAC) */
#define ID_XDMAC0        (  6) /**< \brief Extensible DMA Controller (XDMAC0) */
#define ID_XDMAC1        (  7) /**< \brief Extensible DMA Controller (XDMAC1) */
#define ID_ICM           (  8) /**< \brief Integrity Check Monitor (ICM) */
#define ID_AES           (  9) /**< \brief Advanced Encryption Standard (AES) */
#define ID_AESB          ( 10) /**< \brief Advanced Encryption Standard Bridge (AESB) */
#define ID_TDES          ( 11) /**< \brief Triple Data Encryption Standard (TDES) */
#define ID_SHA           ( 12) /**< \brief Secure Hash Algorithm (SHA) */
#define ID_MPDDRC        ( 13) /**< \brief AHB Multiport DDR-SDRAM Controller (MPDDRC) */
#define ID_MATRIX1       ( 14) /**< \brief AHB Bus Matrix (MATRIX1) */
#define ID_MATRIX0       ( 15) /**< \brief AHB Bus Matrix (MATRIX0) */
#define ID_SECUMOD       ( 16) /**< \brief Security Module (SECUMOD) */
#define ID_SMC           ( 17) /**< \brief Static Memory Controller (SMC) */
#define ID_PIOA          ( 18) /**< \brief Parallel Input/Output Controller (PIOA) */
#define ID_FLEXCOM0      ( 19) /**< \brief Flexible Serial Communication (FLEXCOM0) */
#define ID_FLEXCOM1      ( 20) /**< \brief Flexible Serial Communication (FLEXCOM1) */
#define ID_FLEXCOM2      ( 21) /**< \brief Flexible Serial Communication (FLEXCOM2) */
#define ID_FLEXCOM3      ( 22) /**< \brief Flexible Serial Communication (FLEXCOM3) */
#define ID_FLEXCOM4      ( 23) /**< \brief Flexible Serial Communication (FLEXCOM4) */
#define ID_UART0         ( 24) /**< \brief Universal Asynchronous Receiver Transmitter (UART0) */
#define ID_UART1         ( 25) /**< \brief Universal Asynchronous Receiver Transmitter (UART1) */
#define ID_UART2         ( 26) /**< \brief Universal Asynchronous Receiver Transmitter (UART2) */
#define ID_UART3         ( 27) /**< \brief Universal Asynchronous Receiver Transmitter (UART3) */
#define ID_UART4         ( 28) /**< \brief Universal Asynchronous Receiver Transmitter (UART4) */
#define ID_TWIHS0        ( 29) /**< \brief Two-wire Interface High Speed (TWIHS0) */
#define ID_TWIHS1        ( 30) /**< \brief Two-wire Interface High Speed (TWIHS1) */
#define ID_SDMMC0        ( 31) /**< \brief Secure Digital MultiMedia Card Controller (SDMMC0) */
#define ID_SDMMC1        ( 32) /**< \brief Secure Digital MultiMedia Card Controller (SDMMC1) */
#define ID_SPI0          ( 33) /**< \brief Serial Peripheral Interface (SPI0) */
#define ID_SPI1          ( 34) /**< \brief Serial Peripheral Interface (SPI1) */
#define ID_TC0           ( 35) /**< \brief Timer Counter (TC0) */
#define ID_TC1           ( 36) /**< \brief Timer Counter (TC1) */
#define ID_PWM           ( 38) /**< \brief Pulse Width Modulation Controller (PWM) */
#define ID_ADC           ( 40) /**< \brief Analog-to-Digital Converter (ADC) */
#define ID_UDPHS         ( 42) /**< \brief USB High Speed Device Port (UDPHS) */
#define ID_SSC0          ( 43) /**< \brief Synchronous Serial Controller (SSC0) */
#define ID_SSC1          ( 44) /**< \brief Synchronous Serial Controller (SSC1) */
#define ID_LCDC          ( 45) /**< \brief LCD Controller (LCDC) */
#define ID_ISC           ( 46) /**< \brief Image Sensor Controller (ISC) */
#define ID_TRNG          ( 47) /**< \brief True Random Number Generator (TRNG) */
#define ID_PDMIC         ( 48) /**< \brief Pulse Density Modulation Interface Controller (PDMIC) */
#define ID_SFC           ( 50) /**< \brief Secure Fuse Controller (SFC) */
#define ID_QSPI0         ( 52) /**< \brief Quad Serial Peripheral Interface (QSPI0) */
#define ID_QSPI1         ( 53) /**< \brief Quad Serial Peripheral Interface (QSPI1) */
#define ID_I2SC0         ( 54) /**< \brief Inter-IC Sound Controller (I2SC0) */
#define ID_I2SC1         ( 55) /**< \brief Inter-IC Sound Controller (I2SC1) */
#define ID_MCAN0         ( 56) /**< \brief Controller Area Network (MCAN0) */
#define ID_MCAN1         ( 57) /**< \brief Controller Area Network (MCAN1) */
#define ID_PTC           ( 58) /**< \brief Peripheral Touch Controller (PTC) */
#define ID_CLASSD        ( 59) /**< \brief Audio Class D Amplifier (CLASSD) (CLASSD) */
#define ID_SFR           ( 60) /**< \brief Special Function Registers (SFR) */
#define ID_SAIC          ( 61) /**< \brief Advanced Interrupt Controller (SAIC) */
#define ID_AIC           ( 62) /**< \brief Advanced Interrupt Controller (AIC) */
#define ID_L2CC          ( 63) /**< \brief L2 Cache Controller (L2CC) */
#define ID_PIOB          ( 68) /**< \brief Parallel Input/Output Controller (PIOB) */
#define ID_PIOC          ( 69) /**< \brief Parallel Input/Output Controller (PIOC) */
#define ID_PIOD          ( 70) /**< \brief Parallel Input/Output Controller (PIOD) */
#define ID_ACC           ( 75) /**< \brief Analog Comparator Controller (ACC) */
#define ID_RXLP          ( 76) /**< \brief Low Power Asynchronous Receiver (RXLP) */
#define ID_SFRBU         ( 77) /**< \brief Special Function Registers Backup (SFRBU) */
#define ID_CHIPID        ( 78) /**< \brief Chip Identifier (CHIPID) */

#define ID_PERIPH_MAX    ( 78) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAMA5D27CD1G_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMA5D27CD1G                  */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ACC_REGS                         ((acc_registers_t*)0xf804a000)                /**< \brief ACC Registers Address        */
#define ADC_REGS                         ((adc_registers_t*)0xfc030000)                /**< \brief ADC Registers Address        */
#define AES_REGS                         ((aes_registers_t*)0xf002c000)                /**< \brief AES Registers Address        */
#define AESB_REGS                        ((aesb_registers_t*)0xf001c000)               /**< \brief AESB Registers Address       */
#define AIC_REGS                         ((aic_registers_t*)0xfc020000)                /**< \brief AIC Registers Address        */
#define SAIC_REGS                        ((aic_registers_t*)0xf803c000)                /**< \brief SAIC Registers Address       */
#define AXIMX_REGS                       ((aximx_registers_t*)0x00600000)              /**< \brief AXIMX Registers Address      */
#define CHIPID_REGS                      ((chipid_registers_t*)0xfc069000)             /**< \brief CHIPID Registers Address     */
#define CLASSD_REGS                      ((classd_registers_t*)0xfc048000)             /**< \brief CLASSD Registers Address     */
#define FLEXCOM0_REGS                    ((flexcom_registers_t*)0xf8034000)            /**< \brief FLEXCOM0 Registers Address   */
#define FLEXCOM1_REGS                    ((flexcom_registers_t*)0xf8038000)            /**< \brief FLEXCOM1 Registers Address   */
#define FLEXCOM2_REGS                    ((flexcom_registers_t*)0xfc010000)            /**< \brief FLEXCOM2 Registers Address   */
#define FLEXCOM3_REGS                    ((flexcom_registers_t*)0xfc014000)            /**< \brief FLEXCOM3 Registers Address   */
#define FLEXCOM4_REGS                    ((flexcom_registers_t*)0xfc018000)            /**< \brief FLEXCOM4 Registers Address   */
#define GMAC_REGS                        ((gmac_registers_t*)0xf8008000)               /**< \brief GMAC Registers Address       */
#define I2SC0_REGS                       ((i2sc_registers_t*)0xf8050000)               /**< \brief I2SC0 Registers Address      */
#define I2SC1_REGS                       ((i2sc_registers_t*)0xfc04c000)               /**< \brief I2SC1 Registers Address      */
#define ICM_REGS                         ((icm_registers_t*)0xf8040000)                /**< \brief ICM Registers Address        */
#define ISC_REGS                         ((isc_registers_t*)0xf0008000)                /**< \brief ISC Registers Address        */
#define L2CC_REGS                        ((l2cc_registers_t*)0x00a00000)               /**< \brief L2CC Registers Address       */
#define LCDC_REGS                        ((lcdc_registers_t*)0xf0000000)               /**< \brief LCDC Registers Address       */
#define MATRIX0_REGS                     ((matrix_registers_t*)0xf0018000)             /**< \brief MATRIX0 Registers Address    */
#define MATRIX1_REGS                     ((matrix_registers_t*)0xfc03c000)             /**< \brief MATRIX1 Registers Address    */
#define MCAN0_REGS                       ((mcan_registers_t*)0xf8054000)               /**< \brief MCAN0 Registers Address      */
#define MCAN1_REGS                       ((mcan_registers_t*)0xfc050000)               /**< \brief MCAN1 Registers Address      */
#define MPDDRC_REGS                      ((mpddrc_registers_t*)0xf000c000)             /**< \brief MPDDRC Registers Address     */
#define PDMIC_REGS                       ((pdmic_registers_t*)0xf8018000)              /**< \brief PDMIC Registers Address      */
#define PIO_REGS                         ((pio_registers_t*)0xfc038000)                /**< \brief PIO Registers Address        */
#define PIT_REGS                         ((pit_registers_t*)0xf8048030)                /**< \brief PIT Registers Address        */
#define PMC_REGS                         ((pmc_registers_t*)0xf0014000)                /**< \brief PMC Registers Address        */
#define PTC_REGS                         ((ptc_registers_t*)0xfc060000)                /**< \brief PTC Registers Address        */
#define PWM_REGS                         ((pwm_registers_t*)0xf802c000)                /**< \brief PWM Registers Address        */
#define QSPI0_REGS                       ((qspi_registers_t*)0xf0020000)               /**< \brief QSPI0 Registers Address      */
#define QSPI1_REGS                       ((qspi_registers_t*)0xf0024000)               /**< \brief QSPI1 Registers Address      */
#define RSTC_REGS                        ((rstc_registers_t*)0xf8048000)               /**< \brief RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0xf80480b0)                /**< \brief RTC Registers Address        */
#define RXLP_REGS                        ((rxlp_registers_t*)0xf8049000)               /**< \brief RXLP Registers Address       */
#define SCKC_REGS                        ((sckc_registers_t*)0xf8048050)               /**< \brief SCKC Registers Address       */
#define SDMMC0_REGS                      ((sdmmc_registers_t*)0xa0000000)              /**< \brief SDMMC0 Registers Address     */
#define SDMMC1_REGS                      ((sdmmc_registers_t*)0xb0000000)              /**< \brief SDMMC1 Registers Address     */
#define SECUMOD_REGS                     ((secumod_registers_t*)0xfc040000)            /**< \brief SECUMOD Registers Address    */
#define SFC_REGS                         ((sfc_registers_t*)0xf804c000)                /**< \brief SFC Registers Address        */
#define SFR_REGS                         ((sfr_registers_t*)0xf8030000)                /**< \brief SFR Registers Address        */
#define SFRBU_REGS                       ((sfrbu_registers_t*)0xfc05c000)              /**< \brief SFRBU Registers Address      */
#define SHA_REGS                         ((sha_registers_t*)0xf0028000)                /**< \brief SHA Registers Address        */
#define SHDWC_REGS                       ((shdwc_registers_t*)0xf8048010)              /**< \brief SHDWC Registers Address      */
#define HSMC_REGS                        ((smc_registers_t*)0xf8014000)                /**< \brief SMC Registers Address        */
#define SPI0_REGS                        ((spi_registers_t*)0xf8000000)                /**< \brief SPI0 Registers Address       */
#define SPI1_REGS                        ((spi_registers_t*)0xfc000000)                /**< \brief SPI1 Registers Address       */
#define SSC0_REGS                        ((ssc_registers_t*)0xf8004000)                /**< \brief SSC0 Registers Address       */
#define SSC1_REGS                        ((ssc_registers_t*)0xfc004000)                /**< \brief SSC1 Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0xf800c000)                 /**< \brief TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0xf8010000)                 /**< \brief TC1 Registers Address        */
#define TDES_REGS                        ((tdes_registers_t*)0xfc044000)               /**< \brief TDES Registers Address       */
#define TRNG_REGS                        ((trng_registers_t*)0xfc01c000)               /**< \brief TRNG Registers Address       */
#define TWIHS0_REGS                      ((twihs_registers_t*)0xf8028000)              /**< \brief TWIHS0 Registers Address     */
#define TWIHS1_REGS                      ((twihs_registers_t*)0xfc028000)              /**< \brief TWIHS1 Registers Address     */
#define UART0_REGS                       ((uart_registers_t*)0xf801c000)               /**< \brief UART0 Registers Address      */
#define UART1_REGS                       ((uart_registers_t*)0xf8020000)               /**< \brief UART1 Registers Address      */
#define UART2_REGS                       ((uart_registers_t*)0xf8024000)               /**< \brief UART2 Registers Address      */
#define UART3_REGS                       ((uart_registers_t*)0xfc008000)               /**< \brief UART3 Registers Address      */
#define UART4_REGS                       ((uart_registers_t*)0xfc00c000)               /**< \brief UART4 Registers Address      */
#define UDPHS_REGS                       ((udphs_registers_t*)0xfc02c000)              /**< \brief UDPHS Registers Address      */
#define WDT_REGS                         ((wdt_registers_t*)0xf8048040)                /**< \brief WDT Registers Address        */
#define XDMAC0_REGS                      ((xdmac_registers_t*)0xf0010000)              /**< \brief XDMAC0 Registers Address     */
#define XDMAC1_REGS                      ((xdmac_registers_t*)0xf0004000)              /**< \brief XDMAC1 Registers Address     */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMA5D27CD1G_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMA5D27CD1G                                */
/* ************************************************************************** */
#define ACC_BASE_ADDRESS                 _UL_(0xf804a000)                              /**< \brief ACC Base Address */
#define ADC_BASE_ADDRESS                 _UL_(0xfc030000)                              /**< \brief ADC Base Address */
#define AES_BASE_ADDRESS                 _UL_(0xf002c000)                              /**< \brief AES Base Address */
#define AESB_BASE_ADDRESS                _UL_(0xf001c000)                              /**< \brief AESB Base Address */
#define AIC_BASE_ADDRESS                 _UL_(0xfc020000)                              /**< \brief AIC Base Address */
#define SAIC_BASE_ADDRESS                _UL_(0xf803c000)                              /**< \brief SAIC Base Address */
#define AXIMX_BASE_ADDRESS               _UL_(0x00600000)                              /**< \brief AXIMX Base Address */
#define CHIPID_BASE_ADDRESS              _UL_(0xfc069000)                              /**< \brief CHIPID Base Address */
#define CLASSD_BASE_ADDRESS              _UL_(0xfc048000)                              /**< \brief CLASSD Base Address */
#define FLEXCOM0_BASE_ADDRESS            _UL_(0xf8034000)                              /**< \brief FLEXCOM0 Base Address */
#define FLEXCOM1_BASE_ADDRESS            _UL_(0xf8038000)                              /**< \brief FLEXCOM1 Base Address */
#define FLEXCOM2_BASE_ADDRESS            _UL_(0xfc010000)                              /**< \brief FLEXCOM2 Base Address */
#define FLEXCOM3_BASE_ADDRESS            _UL_(0xfc014000)                              /**< \brief FLEXCOM3 Base Address */
#define FLEXCOM4_BASE_ADDRESS            _UL_(0xfc018000)                              /**< \brief FLEXCOM4 Base Address */
#define GMAC_BASE_ADDRESS                _UL_(0xf8008000)                              /**< \brief GMAC Base Address */
#define I2SC0_BASE_ADDRESS               _UL_(0xf8050000)                              /**< \brief I2SC0 Base Address */
#define I2SC1_BASE_ADDRESS               _UL_(0xfc04c000)                              /**< \brief I2SC1 Base Address */
#define ICM_BASE_ADDRESS                 _UL_(0xf8040000)                              /**< \brief ICM Base Address */
#define ISC_BASE_ADDRESS                 _UL_(0xf0008000)                              /**< \brief ISC Base Address */
#define L2CC_BASE_ADDRESS                _UL_(0x00a00000)                              /**< \brief L2CC Base Address */
#define LCDC_BASE_ADDRESS                _UL_(0xf0000000)                              /**< \brief LCDC Base Address */
#define MATRIX0_BASE_ADDRESS             _UL_(0xf0018000)                              /**< \brief MATRIX0 Base Address */
#define MATRIX1_BASE_ADDRESS             _UL_(0xfc03c000)                              /**< \brief MATRIX1 Base Address */
#define MCAN0_BASE_ADDRESS               _UL_(0xf8054000)                              /**< \brief MCAN0 Base Address */
#define MCAN1_BASE_ADDRESS               _UL_(0xfc050000)                              /**< \brief MCAN1 Base Address */
#define MPDDRC_BASE_ADDRESS              _UL_(0xf000c000)                              /**< \brief MPDDRC Base Address */
#define PDMIC_BASE_ADDRESS               _UL_(0xf8018000)                              /**< \brief PDMIC Base Address */
#define PIO_BASE_ADDRESS                 _UL_(0xfc038000)                              /**< \brief PIO Base Address */
#define PIT_BASE_ADDRESS                 _UL_(0xf8048030)                              /**< \brief PIT Base Address */
#define PMC_BASE_ADDRESS                 _UL_(0xf0014000)                              /**< \brief PMC Base Address */
#define PTC_BASE_ADDRESS                 _UL_(0xfc060000)                              /**< \brief PTC Base Address */
#define PWM_BASE_ADDRESS                 _UL_(0xf802c000)                              /**< \brief PWM Base Address */
#define QSPI0_BASE_ADDRESS               _UL_(0xf0020000)                              /**< \brief QSPI0 Base Address */
#define QSPI1_BASE_ADDRESS               _UL_(0xf0024000)                              /**< \brief QSPI1 Base Address */
#define RSTC_BASE_ADDRESS                _UL_(0xf8048000)                              /**< \brief RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0xf80480b0)                              /**< \brief RTC Base Address */
#define RXLP_BASE_ADDRESS                _UL_(0xf8049000)                              /**< \brief RXLP Base Address */
#define SCKC_BASE_ADDRESS                _UL_(0xf8048050)                              /**< \brief SCKC Base Address */
#define SDMMC0_BASE_ADDRESS              _UL_(0xa0000000)                              /**< \brief SDMMC0 Base Address */
#define SDMMC1_BASE_ADDRESS              _UL_(0xb0000000)                              /**< \brief SDMMC1 Base Address */
#define SECUMOD_BASE_ADDRESS             _UL_(0xfc040000)                              /**< \brief SECUMOD Base Address */
#define SFC_BASE_ADDRESS                 _UL_(0xf804c000)                              /**< \brief SFC Base Address */
#define SFR_BASE_ADDRESS                 _UL_(0xf8030000)                              /**< \brief SFR Base Address */
#define SFRBU_BASE_ADDRESS               _UL_(0xfc05c000)                              /**< \brief SFRBU Base Address */
#define SHA_BASE_ADDRESS                 _UL_(0xf0028000)                              /**< \brief SHA Base Address */
#define SHDWC_BASE_ADDRESS               _UL_(0xf8048010)                              /**< \brief SHDWC Base Address */
#define HSMC_BASE_ADDRESS                _UL_(0xf8014000)                              /**< \brief SMC Base Address */
#define SPI0_BASE_ADDRESS                _UL_(0xf8000000)                              /**< \brief SPI0 Base Address */
#define SPI1_BASE_ADDRESS                _UL_(0xfc000000)                              /**< \brief SPI1 Base Address */
#define SSC0_BASE_ADDRESS                _UL_(0xf8004000)                              /**< \brief SSC0 Base Address */
#define SSC1_BASE_ADDRESS                _UL_(0xfc004000)                              /**< \brief SSC1 Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0xf800c000)                              /**< \brief TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0xf8010000)                              /**< \brief TC1 Base Address */
#define TDES_BASE_ADDRESS                _UL_(0xfc044000)                              /**< \brief TDES Base Address */
#define TRNG_BASE_ADDRESS                _UL_(0xfc01c000)                              /**< \brief TRNG Base Address */
#define TWIHS0_BASE_ADDRESS              _UL_(0xf8028000)                              /**< \brief TWIHS0 Base Address */
#define TWIHS1_BASE_ADDRESS              _UL_(0xfc028000)                              /**< \brief TWIHS1 Base Address */
#define UART0_BASE_ADDRESS               _UL_(0xf801c000)                              /**< \brief UART0 Base Address */
#define UART1_BASE_ADDRESS               _UL_(0xf8020000)                              /**< \brief UART1 Base Address */
#define UART2_BASE_ADDRESS               _UL_(0xf8024000)                              /**< \brief UART2 Base Address */
#define UART3_BASE_ADDRESS               _UL_(0xfc008000)                              /**< \brief UART3 Base Address */
#define UART4_BASE_ADDRESS               _UL_(0xfc00c000)                              /**< \brief UART4 Base Address */
#define UDPHS_BASE_ADDRESS               _UL_(0xfc02c000)                              /**< \brief UDPHS Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0xf8048040)                              /**< \brief WDT Base Address */
#define XDMAC0_BASE_ADDRESS              _UL_(0xf0010000)                              /**< \brief XDMAC0 Base Address */
#define XDMAC1_BASE_ADDRESS              _UL_(0xf0004000)                              /**< \brief XDMAC1 Base Address */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMA5D27CD1G_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMA5D27CD1G                                         */
/* ************************************************************************** */
#include "pio/sama5d27cd1g.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMA5D27CD1G                              */
/* ************************************************************************** */

#define EBI_CS0_SIZE                   _UL_(0x10000000)    /* 262144kB Memory segment type: other */
#define DDR_CS_SIZE                    _UL_(0x20000000)    /* 524288kB Memory segment type: other */
#define DDR_AES_CS_SIZE                _UL_(0x20000000)    /* 524288kB Memory segment type: other */
#define EBI_CS1_SIZE                   _UL_(0x10000000)    /* 262144kB Memory segment type: other */
#define EBI_CS2_SIZE                   _UL_(0x10000000)    /* 262144kB Memory segment type: other */
#define EBI_CS3_SIZE                   _UL_(0x08000000)    /* 131072kB Memory segment type: other */
#define QSPI_AES0_SIZE                 _UL_(0x08000000)    /* 131072kB Memory segment type: other */
#define QSPI_AES1_SIZE                 _UL_(0x08000000)    /* 131072kB Memory segment type: other */
#define SDMMC0_SIZE                    _UL_(0x00001000)    /*    4kB Memory segment type: other */
#define SDMMC1_SIZE                    _UL_(0x00001000)    /*    4kB Memory segment type: other */
#define NFC_SIZE                       _UL_(0x10000000)    /* 262144kB Memory segment type: other */
#define QSPI0MEM_SIZE                  _UL_(0x08000000)    /* 131072kB Memory segment type: other */
#define QSPI1MEM_SIZE                  _UL_(0x08000000)    /* 131072kB Memory segment type: other */
#define PERIPHERALS_SIZE               _UL_(0x10000000)    /* 262144kB Memory segment type: io */
#define IROM_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: rom */
#define ECC_ROM_SIZE                   _UL_(0x00018000)    /*   96kB Memory segment type: other */
#define NFC_RAM_SIZE                   _UL_(0x00002400)    /*    9kB Memory segment type: other */
#define SRAM0_SIZE                     _UL_(0x00020000)    /*  128kB Memory segment type: other */
#define SRAM1_SIZE                     _UL_(0x00020000)    /*  128kB Memory segment type: other */
#define UDPHS_RAM_SIZE                 _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define UHPHS_OHCI_SIZE                _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define UHPHS_EHCI_SIZE                _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define AXIMX_SIZE                     _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define DAP_SIZE                       _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define PTCMEM_SIZE                    _UL_(0x00100000)    /* 1024kB Memory segment type: other */
#define SECURAM_SIZE                   _UL_(0x00004000)    /*   16kB Memory segment type: other */

#define EBI_CS0_ADDR                   _UL_(0x10000000)    /**< EBI_CS0 base address (type: other)*/
#define DDR_CS_ADDR                    _UL_(0x20000000)    /**< DDR_CS base address (type: other)*/
#define DDR_AES_CS_ADDR                _UL_(0x40000000)    /**< DDR_AES_CS base address (type: other)*/
#define EBI_CS1_ADDR                   _UL_(0x60000000)    /**< EBI_CS1 base address (type: other)*/
#define EBI_CS2_ADDR                   _UL_(0x70000000)    /**< EBI_CS2 base address (type: other)*/
#define EBI_CS3_ADDR                   _UL_(0x80000000)    /**< EBI_CS3 base address (type: other)*/
#define QSPI_AES0_ADDR                 _UL_(0x90000000)    /**< QSPI_AES0 base address (type: other)*/
#define QSPI_AES1_ADDR                 _UL_(0x98000000)    /**< QSPI_AES1 base address (type: other)*/
#define SDMMC0_ADDR                    _UL_(0xa0000000)    /**< SDMMC0 base address (type: other)*/
#define SDMMC1_ADDR                    _UL_(0xb0000000)    /**< SDMMC1 base address (type: other)*/
#define NFC_ADDR                       _UL_(0xc0000000)    /**< NFC base address (type: other)*/
#define QSPI0MEM_ADDR                  _UL_(0xd0000000)    /**< QSPI0MEM base address (type: other)*/
#define QSPI1MEM_ADDR                  _UL_(0xd8000000)    /**< QSPI1MEM base address (type: other)*/
#define PERIPHERALS_ADDR               _UL_(0xf0000000)    /**< PERIPHERALS base address (type: io)*/
#define IROM_ADDR                      _UL_(0x00000000)    /**< IROM base address (type: rom)*/
#define ECC_ROM_ADDR                   _UL_(0x00040000)    /**< ECC_ROM base address (type: other)*/
#define NFC_RAM_ADDR                   _UL_(0x00100000)    /**< NFC_RAM base address (type: other)*/
#define SRAM0_ADDR                     _UL_(0x00200000)    /**< SRAM0 base address (type: other)*/
#define SRAM1_ADDR                     _UL_(0x00220000)    /**< SRAM1 base address (type: other)*/
#define UDPHS_RAM_ADDR                 _UL_(0x00300000)    /**< UDPHS_RAM base address (type: other)*/
#define UHPHS_OHCI_ADDR                _UL_(0x00400000)    /**< UHPHS_OHCI base address (type: other)*/
#define UHPHS_EHCI_ADDR                _UL_(0x00500000)    /**< UHPHS_EHCI base address (type: other)*/
#define AXIMX_ADDR                     _UL_(0x00600000)    /**< AXIMX base address (type: other)*/
#define DAP_ADDR                       _UL_(0x00700000)    /**< DAP base address (type: other)*/
#define PTCMEM_ADDR                    _UL_(0x00800000)    /**< PTCMEM base address (type: other)*/
#define SECURAM_ADDR                   _UL_(0xf8044000)    /**< SECURAM base address (type: other)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMA5D27CD1G                                       */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UL_(0X05B3F03F)
#define CHIP_CIDR                      _UL_(0X8A5C08C2)
#define CHIP_EXID                      _UL_(0X00000033)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMA5D27CD1G                                  */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

/** @}  end of SAMA5D27CD1G definitions */


#endif /* _SAMA5D27CD1G_H_ */

