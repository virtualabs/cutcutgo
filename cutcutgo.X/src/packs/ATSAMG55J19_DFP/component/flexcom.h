/*
 * Component description for FLEXCOM
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

/* file generated from device description version 2021-07-26T14:35:51Z */
#ifndef _SAMG55_FLEXCOM_COMPONENT_H_
#define _SAMG55_FLEXCOM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FLEXCOM                                      */
/* ************************************************************************** */

/* -------- FLEXCOM_MR : (FLEXCOM Offset: 0x00) (R/W 32) FLEXCOM Mode register -------- */
#define FLEXCOM_MR_OPMODE_Pos                 _U_(0)                                               /**< (FLEXCOM_MR) FLEXCOM Operating Mode Position */
#define FLEXCOM_MR_OPMODE_Msk                 (_U_(0x3) << FLEXCOM_MR_OPMODE_Pos)                  /**< (FLEXCOM_MR) FLEXCOM Operating Mode Mask */
#define FLEXCOM_MR_OPMODE(value)              (FLEXCOM_MR_OPMODE_Msk & ((value) << FLEXCOM_MR_OPMODE_Pos))
#define   FLEXCOM_MR_OPMODE_NO_COM_Val        _U_(0x0)                                             /**< (FLEXCOM_MR) No communication  */
#define   FLEXCOM_MR_OPMODE_USART_Val         _U_(0x1)                                             /**< (FLEXCOM_MR) All related USART related protocols are selected (RS232, RS485, IrDA, ISO7816, LIN,)All SPI/TWI related registers are not accessible and have no impact on IOs.  */
#define   FLEXCOM_MR_OPMODE_SPI_Val           _U_(0x2)                                             /**< (FLEXCOM_MR) SPI operating mode is selected.All USART/TWI related registers are not accessible and have no impact on IOs.  */
#define   FLEXCOM_MR_OPMODE_TWI_Val           _U_(0x3)                                             /**< (FLEXCOM_MR) All related TWI protocols are selected (TWI, SMBUS). All USART/SPI related registers are not accessible and have no impact on IOs.  */
#define FLEXCOM_MR_OPMODE_NO_COM              (FLEXCOM_MR_OPMODE_NO_COM_Val << FLEXCOM_MR_OPMODE_Pos) /**< (FLEXCOM_MR) No communication Position  */
#define FLEXCOM_MR_OPMODE_USART               (FLEXCOM_MR_OPMODE_USART_Val << FLEXCOM_MR_OPMODE_Pos) /**< (FLEXCOM_MR) All related USART related protocols are selected (RS232, RS485, IrDA, ISO7816, LIN,)All SPI/TWI related registers are not accessible and have no impact on IOs. Position  */
#define FLEXCOM_MR_OPMODE_SPI                 (FLEXCOM_MR_OPMODE_SPI_Val << FLEXCOM_MR_OPMODE_Pos) /**< (FLEXCOM_MR) SPI operating mode is selected.All USART/TWI related registers are not accessible and have no impact on IOs. Position  */
#define FLEXCOM_MR_OPMODE_TWI                 (FLEXCOM_MR_OPMODE_TWI_Val << FLEXCOM_MR_OPMODE_Pos) /**< (FLEXCOM_MR) All related TWI protocols are selected (TWI, SMBUS). All USART/SPI related registers are not accessible and have no impact on IOs. Position  */
#define FLEXCOM_MR_Msk                        _U_(0x00000003)                                      /**< (FLEXCOM_MR) Register Mask  */


/* -------- FLEXCOM_RHR : (FLEXCOM Offset: 0x10) ( R/ 32) FLEXCOM Receive Holding Register -------- */
#define FLEXCOM_RHR_RXDATA_Pos                _U_(0)                                               /**< (FLEXCOM_RHR) Receive Data Position */
#define FLEXCOM_RHR_RXDATA_Msk                (_U_(0xFFFF) << FLEXCOM_RHR_RXDATA_Pos)              /**< (FLEXCOM_RHR) Receive Data Mask */
#define FLEXCOM_RHR_RXDATA(value)             (FLEXCOM_RHR_RXDATA_Msk & ((value) << FLEXCOM_RHR_RXDATA_Pos))
#define FLEXCOM_RHR_Msk                       _U_(0x0000FFFF)                                      /**< (FLEXCOM_RHR) Register Mask  */


/* -------- FLEXCOM_THR : (FLEXCOM Offset: 0x20) (R/W 32) FLEXCOM Transmit Holding Register -------- */
#define FLEXCOM_THR_TXDATA_Pos                _U_(0)                                               /**< (FLEXCOM_THR) Transmit Data Position */
#define FLEXCOM_THR_TXDATA_Msk                (_U_(0xFFFF) << FLEXCOM_THR_TXDATA_Pos)              /**< (FLEXCOM_THR) Transmit Data Mask */
#define FLEXCOM_THR_TXDATA(value)             (FLEXCOM_THR_TXDATA_Msk & ((value) << FLEXCOM_THR_TXDATA_Pos))
#define FLEXCOM_THR_Msk                       _U_(0x0000FFFF)                                      /**< (FLEXCOM_THR) Register Mask  */


/** \brief FLEXCOM register offsets definitions */
#define FLEXCOM_MR_REG_OFST            (0x00)              /**< (FLEXCOM_MR) FLEXCOM Mode register Offset */
#define FLEXCOM_RHR_REG_OFST           (0x10)              /**< (FLEXCOM_RHR) FLEXCOM Receive Holding Register Offset */
#define FLEXCOM_THR_REG_OFST           (0x20)              /**< (FLEXCOM_THR) FLEXCOM Transmit Holding Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief FLEXCOM register API structure */
typedef struct
{
  __IO  uint32_t                       FLEXCOM_MR;         /**< Offset: 0x00 (R/W  32) FLEXCOM Mode register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       FLEXCOM_RHR;        /**< Offset: 0x10 (R/   32) FLEXCOM Receive Holding Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       FLEXCOM_THR;        /**< Offset: 0x20 (R/W  32) FLEXCOM Transmit Holding Register */
} flexcom_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_FLEXCOM_COMPONENT_H_ */
