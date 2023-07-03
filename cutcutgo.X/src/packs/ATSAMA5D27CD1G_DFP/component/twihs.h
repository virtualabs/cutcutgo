/*
 * Component description for TWIHS
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

/* file generated from device description version 2021-06-28T09:00:02Z */
#ifndef _SAMA5D2_TWIHS_COMPONENT_H_
#define _SAMA5D2_TWIHS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TWIHS                                        */
/* ************************************************************************** */

/* -------- TWIHS_CR : (TWIHS Offset: 0x00) ( /W 32) Control Register -------- */
#define TWIHS_CR_START_Pos                    _U_(0)                                               /**< (TWIHS_CR) Send a START Condition Position */
#define TWIHS_CR_START_Msk                    (_U_(0x1) << TWIHS_CR_START_Pos)                     /**< (TWIHS_CR) Send a START Condition Mask */
#define TWIHS_CR_START(value)                 (TWIHS_CR_START_Msk & ((value) << TWIHS_CR_START_Pos))
#define TWIHS_CR_STOP_Pos                     _U_(1)                                               /**< (TWIHS_CR) Send a STOP Condition Position */
#define TWIHS_CR_STOP_Msk                     (_U_(0x1) << TWIHS_CR_STOP_Pos)                      /**< (TWIHS_CR) Send a STOP Condition Mask */
#define TWIHS_CR_STOP(value)                  (TWIHS_CR_STOP_Msk & ((value) << TWIHS_CR_STOP_Pos))
#define TWIHS_CR_MSEN_Pos                     _U_(2)                                               /**< (TWIHS_CR) TWIHS Master Mode Enabled Position */
#define TWIHS_CR_MSEN_Msk                     (_U_(0x1) << TWIHS_CR_MSEN_Pos)                      /**< (TWIHS_CR) TWIHS Master Mode Enabled Mask */
#define TWIHS_CR_MSEN(value)                  (TWIHS_CR_MSEN_Msk & ((value) << TWIHS_CR_MSEN_Pos))
#define TWIHS_CR_MSDIS_Pos                    _U_(3)                                               /**< (TWIHS_CR) TWIHS Master Mode Disabled Position */
#define TWIHS_CR_MSDIS_Msk                    (_U_(0x1) << TWIHS_CR_MSDIS_Pos)                     /**< (TWIHS_CR) TWIHS Master Mode Disabled Mask */
#define TWIHS_CR_MSDIS(value)                 (TWIHS_CR_MSDIS_Msk & ((value) << TWIHS_CR_MSDIS_Pos))
#define TWIHS_CR_SVEN_Pos                     _U_(4)                                               /**< (TWIHS_CR) TWIHS Slave Mode Enabled Position */
#define TWIHS_CR_SVEN_Msk                     (_U_(0x1) << TWIHS_CR_SVEN_Pos)                      /**< (TWIHS_CR) TWIHS Slave Mode Enabled Mask */
#define TWIHS_CR_SVEN(value)                  (TWIHS_CR_SVEN_Msk & ((value) << TWIHS_CR_SVEN_Pos))
#define TWIHS_CR_SVDIS_Pos                    _U_(5)                                               /**< (TWIHS_CR) TWIHS Slave Mode Disabled Position */
#define TWIHS_CR_SVDIS_Msk                    (_U_(0x1) << TWIHS_CR_SVDIS_Pos)                     /**< (TWIHS_CR) TWIHS Slave Mode Disabled Mask */
#define TWIHS_CR_SVDIS(value)                 (TWIHS_CR_SVDIS_Msk & ((value) << TWIHS_CR_SVDIS_Pos))
#define TWIHS_CR_QUICK_Pos                    _U_(6)                                               /**< (TWIHS_CR) SMBus Quick Command Position */
#define TWIHS_CR_QUICK_Msk                    (_U_(0x1) << TWIHS_CR_QUICK_Pos)                     /**< (TWIHS_CR) SMBus Quick Command Mask */
#define TWIHS_CR_QUICK(value)                 (TWIHS_CR_QUICK_Msk & ((value) << TWIHS_CR_QUICK_Pos))
#define TWIHS_CR_SWRST_Pos                    _U_(7)                                               /**< (TWIHS_CR) Software Reset Position */
#define TWIHS_CR_SWRST_Msk                    (_U_(0x1) << TWIHS_CR_SWRST_Pos)                     /**< (TWIHS_CR) Software Reset Mask */
#define TWIHS_CR_SWRST(value)                 (TWIHS_CR_SWRST_Msk & ((value) << TWIHS_CR_SWRST_Pos))
#define TWIHS_CR_HSEN_Pos                     _U_(8)                                               /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Position */
#define TWIHS_CR_HSEN_Msk                     (_U_(0x1) << TWIHS_CR_HSEN_Pos)                      /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Mask */
#define TWIHS_CR_HSEN(value)                  (TWIHS_CR_HSEN_Msk & ((value) << TWIHS_CR_HSEN_Pos))
#define TWIHS_CR_HSDIS_Pos                    _U_(9)                                               /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Position */
#define TWIHS_CR_HSDIS_Msk                    (_U_(0x1) << TWIHS_CR_HSDIS_Pos)                     /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Mask */
#define TWIHS_CR_HSDIS(value)                 (TWIHS_CR_HSDIS_Msk & ((value) << TWIHS_CR_HSDIS_Pos))
#define TWIHS_CR_SMBEN_Pos                    _U_(10)                                              /**< (TWIHS_CR) SMBus Mode Enabled Position */
#define TWIHS_CR_SMBEN_Msk                    (_U_(0x1) << TWIHS_CR_SMBEN_Pos)                     /**< (TWIHS_CR) SMBus Mode Enabled Mask */
#define TWIHS_CR_SMBEN(value)                 (TWIHS_CR_SMBEN_Msk & ((value) << TWIHS_CR_SMBEN_Pos))
#define TWIHS_CR_SMBDIS_Pos                   _U_(11)                                              /**< (TWIHS_CR) SMBus Mode Disabled Position */
#define TWIHS_CR_SMBDIS_Msk                   (_U_(0x1) << TWIHS_CR_SMBDIS_Pos)                    /**< (TWIHS_CR) SMBus Mode Disabled Mask */
#define TWIHS_CR_SMBDIS(value)                (TWIHS_CR_SMBDIS_Msk & ((value) << TWIHS_CR_SMBDIS_Pos))
#define TWIHS_CR_PECEN_Pos                    _U_(12)                                              /**< (TWIHS_CR) Packet Error Checking Enable Position */
#define TWIHS_CR_PECEN_Msk                    (_U_(0x1) << TWIHS_CR_PECEN_Pos)                     /**< (TWIHS_CR) Packet Error Checking Enable Mask */
#define TWIHS_CR_PECEN(value)                 (TWIHS_CR_PECEN_Msk & ((value) << TWIHS_CR_PECEN_Pos))
#define TWIHS_CR_PECDIS_Pos                   _U_(13)                                              /**< (TWIHS_CR) Packet Error Checking Disable Position */
#define TWIHS_CR_PECDIS_Msk                   (_U_(0x1) << TWIHS_CR_PECDIS_Pos)                    /**< (TWIHS_CR) Packet Error Checking Disable Mask */
#define TWIHS_CR_PECDIS(value)                (TWIHS_CR_PECDIS_Msk & ((value) << TWIHS_CR_PECDIS_Pos))
#define TWIHS_CR_PECRQ_Pos                    _U_(14)                                              /**< (TWIHS_CR) PEC Request Position */
#define TWIHS_CR_PECRQ_Msk                    (_U_(0x1) << TWIHS_CR_PECRQ_Pos)                     /**< (TWIHS_CR) PEC Request Mask */
#define TWIHS_CR_PECRQ(value)                 (TWIHS_CR_PECRQ_Msk & ((value) << TWIHS_CR_PECRQ_Pos))
#define TWIHS_CR_CLEAR_Pos                    _U_(15)                                              /**< (TWIHS_CR) Bus CLEAR Command Position */
#define TWIHS_CR_CLEAR_Msk                    (_U_(0x1) << TWIHS_CR_CLEAR_Pos)                     /**< (TWIHS_CR) Bus CLEAR Command Mask */
#define TWIHS_CR_CLEAR(value)                 (TWIHS_CR_CLEAR_Msk & ((value) << TWIHS_CR_CLEAR_Pos))
#define TWIHS_CR_ACMEN_Pos                    _U_(16)                                              /**< (TWIHS_CR) Alternative Command Mode Enable Position */
#define TWIHS_CR_ACMEN_Msk                    (_U_(0x1) << TWIHS_CR_ACMEN_Pos)                     /**< (TWIHS_CR) Alternative Command Mode Enable Mask */
#define TWIHS_CR_ACMEN(value)                 (TWIHS_CR_ACMEN_Msk & ((value) << TWIHS_CR_ACMEN_Pos))
#define TWIHS_CR_ACMDIS_Pos                   _U_(17)                                              /**< (TWIHS_CR) Alternative Command Mode Disable Position */
#define TWIHS_CR_ACMDIS_Msk                   (_U_(0x1) << TWIHS_CR_ACMDIS_Pos)                    /**< (TWIHS_CR) Alternative Command Mode Disable Mask */
#define TWIHS_CR_ACMDIS(value)                (TWIHS_CR_ACMDIS_Msk & ((value) << TWIHS_CR_ACMDIS_Pos))
#define TWIHS_CR_THRCLR_Pos                   _U_(24)                                              /**< (TWIHS_CR) Transmit Holding Register Clear Position */
#define TWIHS_CR_THRCLR_Msk                   (_U_(0x1) << TWIHS_CR_THRCLR_Pos)                    /**< (TWIHS_CR) Transmit Holding Register Clear Mask */
#define TWIHS_CR_THRCLR(value)                (TWIHS_CR_THRCLR_Msk & ((value) << TWIHS_CR_THRCLR_Pos))
#define TWIHS_CR_LOCKCLR_Pos                  _U_(26)                                              /**< (TWIHS_CR) Lock Clear Position */
#define TWIHS_CR_LOCKCLR_Msk                  (_U_(0x1) << TWIHS_CR_LOCKCLR_Pos)                   /**< (TWIHS_CR) Lock Clear Mask */
#define TWIHS_CR_LOCKCLR(value)               (TWIHS_CR_LOCKCLR_Msk & ((value) << TWIHS_CR_LOCKCLR_Pos))
#define TWIHS_CR_FIFOEN_Pos                   _U_(28)                                              /**< (TWIHS_CR) FIFO Enable Position */
#define TWIHS_CR_FIFOEN_Msk                   (_U_(0x1) << TWIHS_CR_FIFOEN_Pos)                    /**< (TWIHS_CR) FIFO Enable Mask */
#define TWIHS_CR_FIFOEN(value)                (TWIHS_CR_FIFOEN_Msk & ((value) << TWIHS_CR_FIFOEN_Pos))
#define TWIHS_CR_FIFODIS_Pos                  _U_(29)                                              /**< (TWIHS_CR) FIFO Disable Position */
#define TWIHS_CR_FIFODIS_Msk                  (_U_(0x1) << TWIHS_CR_FIFODIS_Pos)                   /**< (TWIHS_CR) FIFO Disable Mask */
#define TWIHS_CR_FIFODIS(value)               (TWIHS_CR_FIFODIS_Msk & ((value) << TWIHS_CR_FIFODIS_Pos))
#define TWIHS_CR_Msk                          _U_(0x3503FFFF)                                      /**< (TWIHS_CR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_CR_FIFO_ENABLED_START_Pos       _U_(0)                                               /**< (TWIHS_CR) Send a START Condition Position */
#define TWIHS_CR_FIFO_ENABLED_START_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_START_Pos)        /**< (TWIHS_CR) Send a START Condition Mask */
#define TWIHS_CR_FIFO_ENABLED_START(value)    (TWIHS_CR_FIFO_ENABLED_START_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_START_Pos))
#define TWIHS_CR_FIFO_ENABLED_STOP_Pos        _U_(1)                                               /**< (TWIHS_CR) Send a STOP Condition Position */
#define TWIHS_CR_FIFO_ENABLED_STOP_Msk        (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_STOP_Pos)         /**< (TWIHS_CR) Send a STOP Condition Mask */
#define TWIHS_CR_FIFO_ENABLED_STOP(value)     (TWIHS_CR_FIFO_ENABLED_STOP_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_STOP_Pos))
#define TWIHS_CR_FIFO_ENABLED_MSEN_Pos        _U_(2)                                               /**< (TWIHS_CR) TWIHS Master Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_MSEN_Msk        (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_MSEN_Pos)         /**< (TWIHS_CR) TWIHS Master Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_MSEN(value)     (TWIHS_CR_FIFO_ENABLED_MSEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_MSEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_MSDIS_Pos       _U_(3)                                               /**< (TWIHS_CR) TWIHS Master Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_MSDIS_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_MSDIS_Pos)        /**< (TWIHS_CR) TWIHS Master Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_MSDIS(value)    (TWIHS_CR_FIFO_ENABLED_MSDIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_MSDIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_SVEN_Pos        _U_(4)                                               /**< (TWIHS_CR) TWIHS Slave Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_SVEN_Msk        (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SVEN_Pos)         /**< (TWIHS_CR) TWIHS Slave Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SVEN(value)     (TWIHS_CR_FIFO_ENABLED_SVEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_SVEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_SVDIS_Pos       _U_(5)                                               /**< (TWIHS_CR) TWIHS Slave Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_SVDIS_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SVDIS_Pos)        /**< (TWIHS_CR) TWIHS Slave Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SVDIS(value)    (TWIHS_CR_FIFO_ENABLED_SVDIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_SVDIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_QUICK_Pos       _U_(6)                                               /**< (TWIHS_CR) SMBus Quick Command Position */
#define TWIHS_CR_FIFO_ENABLED_QUICK_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_QUICK_Pos)        /**< (TWIHS_CR) SMBus Quick Command Mask */
#define TWIHS_CR_FIFO_ENABLED_QUICK(value)    (TWIHS_CR_FIFO_ENABLED_QUICK_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_QUICK_Pos))
#define TWIHS_CR_FIFO_ENABLED_SWRST_Pos       _U_(7)                                               /**< (TWIHS_CR) Software Reset Position */
#define TWIHS_CR_FIFO_ENABLED_SWRST_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SWRST_Pos)        /**< (TWIHS_CR) Software Reset Mask */
#define TWIHS_CR_FIFO_ENABLED_SWRST(value)    (TWIHS_CR_FIFO_ENABLED_SWRST_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_SWRST_Pos))
#define TWIHS_CR_FIFO_ENABLED_HSEN_Pos        _U_(8)                                               /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_HSEN_Msk        (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_HSEN_Pos)         /**< (TWIHS_CR) TWIHS High-Speed Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_HSEN(value)     (TWIHS_CR_FIFO_ENABLED_HSEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_HSEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_HSDIS_Pos       _U_(9)                                               /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_HSDIS_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_HSDIS_Pos)        /**< (TWIHS_CR) TWIHS High-Speed Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_HSDIS(value)    (TWIHS_CR_FIFO_ENABLED_HSDIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_HSDIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_SMBEN_Pos       _U_(10)                                              /**< (TWIHS_CR) SMBus Mode Enabled Position */
#define TWIHS_CR_FIFO_ENABLED_SMBEN_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SMBEN_Pos)        /**< (TWIHS_CR) SMBus Mode Enabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SMBEN(value)    (TWIHS_CR_FIFO_ENABLED_SMBEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_SMBEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_SMBDIS_Pos      _U_(11)                                              /**< (TWIHS_CR) SMBus Mode Disabled Position */
#define TWIHS_CR_FIFO_ENABLED_SMBDIS_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_SMBDIS_Pos)       /**< (TWIHS_CR) SMBus Mode Disabled Mask */
#define TWIHS_CR_FIFO_ENABLED_SMBDIS(value)   (TWIHS_CR_FIFO_ENABLED_SMBDIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_SMBDIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_PECEN_Pos       _U_(12)                                              /**< (TWIHS_CR) Packet Error Checking Enable Position */
#define TWIHS_CR_FIFO_ENABLED_PECEN_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_PECEN_Pos)        /**< (TWIHS_CR) Packet Error Checking Enable Mask */
#define TWIHS_CR_FIFO_ENABLED_PECEN(value)    (TWIHS_CR_FIFO_ENABLED_PECEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_PECEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_PECDIS_Pos      _U_(13)                                              /**< (TWIHS_CR) Packet Error Checking Disable Position */
#define TWIHS_CR_FIFO_ENABLED_PECDIS_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_PECDIS_Pos)       /**< (TWIHS_CR) Packet Error Checking Disable Mask */
#define TWIHS_CR_FIFO_ENABLED_PECDIS(value)   (TWIHS_CR_FIFO_ENABLED_PECDIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_PECDIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_PECRQ_Pos       _U_(14)                                              /**< (TWIHS_CR) PEC Request Position */
#define TWIHS_CR_FIFO_ENABLED_PECRQ_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_PECRQ_Pos)        /**< (TWIHS_CR) PEC Request Mask */
#define TWIHS_CR_FIFO_ENABLED_PECRQ(value)    (TWIHS_CR_FIFO_ENABLED_PECRQ_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_PECRQ_Pos))
#define TWIHS_CR_FIFO_ENABLED_CLEAR_Pos       _U_(15)                                              /**< (TWIHS_CR) Bus CLEAR Command Position */
#define TWIHS_CR_FIFO_ENABLED_CLEAR_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_CLEAR_Pos)        /**< (TWIHS_CR) Bus CLEAR Command Mask */
#define TWIHS_CR_FIFO_ENABLED_CLEAR(value)    (TWIHS_CR_FIFO_ENABLED_CLEAR_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_CLEAR_Pos))
#define TWIHS_CR_FIFO_ENABLED_ACMEN_Pos       _U_(16)                                              /**< (TWIHS_CR) Alternative Command Mode Enable Position */
#define TWIHS_CR_FIFO_ENABLED_ACMEN_Msk       (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_ACMEN_Pos)        /**< (TWIHS_CR) Alternative Command Mode Enable Mask */
#define TWIHS_CR_FIFO_ENABLED_ACMEN(value)    (TWIHS_CR_FIFO_ENABLED_ACMEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_ACMEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_ACMDIS_Pos      _U_(17)                                              /**< (TWIHS_CR) Alternative Command Mode Disable Position */
#define TWIHS_CR_FIFO_ENABLED_ACMDIS_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_ACMDIS_Pos)       /**< (TWIHS_CR) Alternative Command Mode Disable Mask */
#define TWIHS_CR_FIFO_ENABLED_ACMDIS(value)   (TWIHS_CR_FIFO_ENABLED_ACMDIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_ACMDIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_TXFCLR_Pos      _U_(24)                                              /**< (TWIHS_CR) Transmit FIFO Clear Position */
#define TWIHS_CR_FIFO_ENABLED_TXFCLR_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_TXFCLR_Pos)       /**< (TWIHS_CR) Transmit FIFO Clear Mask */
#define TWIHS_CR_FIFO_ENABLED_TXFCLR(value)   (TWIHS_CR_FIFO_ENABLED_TXFCLR_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_TXFCLR_Pos))
#define TWIHS_CR_FIFO_ENABLED_RXFCLR_Pos      _U_(25)                                              /**< (TWIHS_CR) Receive FIFO Clear Position */
#define TWIHS_CR_FIFO_ENABLED_RXFCLR_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_RXFCLR_Pos)       /**< (TWIHS_CR) Receive FIFO Clear Mask */
#define TWIHS_CR_FIFO_ENABLED_RXFCLR(value)   (TWIHS_CR_FIFO_ENABLED_RXFCLR_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_RXFCLR_Pos))
#define TWIHS_CR_FIFO_ENABLED_TXFLCLR_Pos     _U_(26)                                              /**< (TWIHS_CR) Transmit FIFO Lock CLEAR Position */
#define TWIHS_CR_FIFO_ENABLED_TXFLCLR_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_TXFLCLR_Pos)      /**< (TWIHS_CR) Transmit FIFO Lock CLEAR Mask */
#define TWIHS_CR_FIFO_ENABLED_TXFLCLR(value)  (TWIHS_CR_FIFO_ENABLED_TXFLCLR_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_TXFLCLR_Pos))
#define TWIHS_CR_FIFO_ENABLED_FIFOEN_Pos      _U_(28)                                              /**< (TWIHS_CR) FIFO Enable Position */
#define TWIHS_CR_FIFO_ENABLED_FIFOEN_Msk      (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_FIFOEN_Pos)       /**< (TWIHS_CR) FIFO Enable Mask */
#define TWIHS_CR_FIFO_ENABLED_FIFOEN(value)   (TWIHS_CR_FIFO_ENABLED_FIFOEN_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_FIFOEN_Pos))
#define TWIHS_CR_FIFO_ENABLED_FIFODIS_Pos     _U_(29)                                              /**< (TWIHS_CR) FIFO Disable Position */
#define TWIHS_CR_FIFO_ENABLED_FIFODIS_Msk     (_U_(0x1) << TWIHS_CR_FIFO_ENABLED_FIFODIS_Pos)      /**< (TWIHS_CR) FIFO Disable Mask */
#define TWIHS_CR_FIFO_ENABLED_FIFODIS(value)  (TWIHS_CR_FIFO_ENABLED_FIFODIS_Msk & ((value) << TWIHS_CR_FIFO_ENABLED_FIFODIS_Pos))
#define TWIHS_CR_FIFO_ENABLED_Msk             _U_(0x3703FFFF)                                       /**< (TWIHS_CR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_MMR : (TWIHS Offset: 0x04) (R/W 32) Master Mode Register -------- */
#define TWIHS_MMR_IADRSZ_Pos                  _U_(8)                                               /**< (TWIHS_MMR) Internal Device Address Size Position */
#define TWIHS_MMR_IADRSZ_Msk                  (_U_(0x3) << TWIHS_MMR_IADRSZ_Pos)                   /**< (TWIHS_MMR) Internal Device Address Size Mask */
#define TWIHS_MMR_IADRSZ(value)               (TWIHS_MMR_IADRSZ_Msk & ((value) << TWIHS_MMR_IADRSZ_Pos))
#define   TWIHS_MMR_IADRSZ_NONE_Val           _U_(0x0)                                             /**< (TWIHS_MMR) No internal device address  */
#define   TWIHS_MMR_IADRSZ_1_BYTE_Val         _U_(0x1)                                             /**< (TWIHS_MMR) One-byte internal device address  */
#define   TWIHS_MMR_IADRSZ_2_BYTE_Val         _U_(0x2)                                             /**< (TWIHS_MMR) Two-byte internal device address  */
#define   TWIHS_MMR_IADRSZ_3_BYTE_Val         _U_(0x3)                                             /**< (TWIHS_MMR) Three-byte internal device address  */
#define TWIHS_MMR_IADRSZ_NONE                 (TWIHS_MMR_IADRSZ_NONE_Val << TWIHS_MMR_IADRSZ_Pos)  /**< (TWIHS_MMR) No internal device address Position  */
#define TWIHS_MMR_IADRSZ_1_BYTE               (TWIHS_MMR_IADRSZ_1_BYTE_Val << TWIHS_MMR_IADRSZ_Pos) /**< (TWIHS_MMR) One-byte internal device address Position  */
#define TWIHS_MMR_IADRSZ_2_BYTE               (TWIHS_MMR_IADRSZ_2_BYTE_Val << TWIHS_MMR_IADRSZ_Pos) /**< (TWIHS_MMR) Two-byte internal device address Position  */
#define TWIHS_MMR_IADRSZ_3_BYTE               (TWIHS_MMR_IADRSZ_3_BYTE_Val << TWIHS_MMR_IADRSZ_Pos) /**< (TWIHS_MMR) Three-byte internal device address Position  */
#define TWIHS_MMR_MREAD_Pos                   _U_(12)                                              /**< (TWIHS_MMR) Master Read Direction Position */
#define TWIHS_MMR_MREAD_Msk                   (_U_(0x1) << TWIHS_MMR_MREAD_Pos)                    /**< (TWIHS_MMR) Master Read Direction Mask */
#define TWIHS_MMR_MREAD(value)                (TWIHS_MMR_MREAD_Msk & ((value) << TWIHS_MMR_MREAD_Pos))
#define TWIHS_MMR_DADR_Pos                    _U_(16)                                              /**< (TWIHS_MMR) Device Address Position */
#define TWIHS_MMR_DADR_Msk                    (_U_(0x7F) << TWIHS_MMR_DADR_Pos)                    /**< (TWIHS_MMR) Device Address Mask */
#define TWIHS_MMR_DADR(value)                 (TWIHS_MMR_DADR_Msk & ((value) << TWIHS_MMR_DADR_Pos))
#define TWIHS_MMR_Msk                         _U_(0x007F1300)                                      /**< (TWIHS_MMR) Register Mask  */


/* -------- TWIHS_SMR : (TWIHS Offset: 0x08) (R/W 32) Slave Mode Register -------- */
#define TWIHS_SMR_NACKEN_Pos                  _U_(0)                                               /**< (TWIHS_SMR) Slave Receiver Data Phase NACK enable Position */
#define TWIHS_SMR_NACKEN_Msk                  (_U_(0x1) << TWIHS_SMR_NACKEN_Pos)                   /**< (TWIHS_SMR) Slave Receiver Data Phase NACK enable Mask */
#define TWIHS_SMR_NACKEN(value)               (TWIHS_SMR_NACKEN_Msk & ((value) << TWIHS_SMR_NACKEN_Pos))
#define TWIHS_SMR_SMDA_Pos                    _U_(2)                                               /**< (TWIHS_SMR) SMBus Default Address Position */
#define TWIHS_SMR_SMDA_Msk                    (_U_(0x1) << TWIHS_SMR_SMDA_Pos)                     /**< (TWIHS_SMR) SMBus Default Address Mask */
#define TWIHS_SMR_SMDA(value)                 (TWIHS_SMR_SMDA_Msk & ((value) << TWIHS_SMR_SMDA_Pos))
#define TWIHS_SMR_SMHH_Pos                    _U_(3)                                               /**< (TWIHS_SMR) SMBus Host Header Position */
#define TWIHS_SMR_SMHH_Msk                    (_U_(0x1) << TWIHS_SMR_SMHH_Pos)                     /**< (TWIHS_SMR) SMBus Host Header Mask */
#define TWIHS_SMR_SMHH(value)                 (TWIHS_SMR_SMHH_Msk & ((value) << TWIHS_SMR_SMHH_Pos))
#define TWIHS_SMR_SCLWSDIS_Pos                _U_(6)                                               /**< (TWIHS_SMR) Clock Wait State Disable Position */
#define TWIHS_SMR_SCLWSDIS_Msk                (_U_(0x1) << TWIHS_SMR_SCLWSDIS_Pos)                 /**< (TWIHS_SMR) Clock Wait State Disable Mask */
#define TWIHS_SMR_SCLWSDIS(value)             (TWIHS_SMR_SCLWSDIS_Msk & ((value) << TWIHS_SMR_SCLWSDIS_Pos))
#define TWIHS_SMR_MASK_Pos                    _U_(8)                                               /**< (TWIHS_SMR) Slave Address Mask Position */
#define TWIHS_SMR_MASK_Msk                    (_U_(0x7F) << TWIHS_SMR_MASK_Pos)                    /**< (TWIHS_SMR) Slave Address Mask Mask */
#define TWIHS_SMR_MASK(value)                 (TWIHS_SMR_MASK_Msk & ((value) << TWIHS_SMR_MASK_Pos))
#define TWIHS_SMR_SADR_Pos                    _U_(16)                                              /**< (TWIHS_SMR) Slave Address Position */
#define TWIHS_SMR_SADR_Msk                    (_U_(0x7F) << TWIHS_SMR_SADR_Pos)                    /**< (TWIHS_SMR) Slave Address Mask */
#define TWIHS_SMR_SADR(value)                 (TWIHS_SMR_SADR_Msk & ((value) << TWIHS_SMR_SADR_Pos))
#define TWIHS_SMR_SADR1EN_Pos                 _U_(28)                                              /**< (TWIHS_SMR) Slave Address 1 Enable Position */
#define TWIHS_SMR_SADR1EN_Msk                 (_U_(0x1) << TWIHS_SMR_SADR1EN_Pos)                  /**< (TWIHS_SMR) Slave Address 1 Enable Mask */
#define TWIHS_SMR_SADR1EN(value)              (TWIHS_SMR_SADR1EN_Msk & ((value) << TWIHS_SMR_SADR1EN_Pos))
#define TWIHS_SMR_SADR2EN_Pos                 _U_(29)                                              /**< (TWIHS_SMR) Slave Address 2 Enable Position */
#define TWIHS_SMR_SADR2EN_Msk                 (_U_(0x1) << TWIHS_SMR_SADR2EN_Pos)                  /**< (TWIHS_SMR) Slave Address 2 Enable Mask */
#define TWIHS_SMR_SADR2EN(value)              (TWIHS_SMR_SADR2EN_Msk & ((value) << TWIHS_SMR_SADR2EN_Pos))
#define TWIHS_SMR_SADR3EN_Pos                 _U_(30)                                              /**< (TWIHS_SMR) Slave Address 3 Enable Position */
#define TWIHS_SMR_SADR3EN_Msk                 (_U_(0x1) << TWIHS_SMR_SADR3EN_Pos)                  /**< (TWIHS_SMR) Slave Address 3 Enable Mask */
#define TWIHS_SMR_SADR3EN(value)              (TWIHS_SMR_SADR3EN_Msk & ((value) << TWIHS_SMR_SADR3EN_Pos))
#define TWIHS_SMR_DATAMEN_Pos                 _U_(31)                                              /**< (TWIHS_SMR) Data Matching Enable Position */
#define TWIHS_SMR_DATAMEN_Msk                 (_U_(0x1) << TWIHS_SMR_DATAMEN_Pos)                  /**< (TWIHS_SMR) Data Matching Enable Mask */
#define TWIHS_SMR_DATAMEN(value)              (TWIHS_SMR_DATAMEN_Msk & ((value) << TWIHS_SMR_DATAMEN_Pos))
#define TWIHS_SMR_Msk                         _U_(0xF07F7F4D)                                      /**< (TWIHS_SMR) Register Mask  */


/* -------- TWIHS_IADR : (TWIHS Offset: 0x0C) (R/W 32) Internal Address Register -------- */
#define TWIHS_IADR_IADR_Pos                   _U_(0)                                               /**< (TWIHS_IADR) Internal Address Position */
#define TWIHS_IADR_IADR_Msk                   (_U_(0xFFFFFF) << TWIHS_IADR_IADR_Pos)               /**< (TWIHS_IADR) Internal Address Mask */
#define TWIHS_IADR_IADR(value)                (TWIHS_IADR_IADR_Msk & ((value) << TWIHS_IADR_IADR_Pos))
#define TWIHS_IADR_Msk                        _U_(0x00FFFFFF)                                      /**< (TWIHS_IADR) Register Mask  */


/* -------- TWIHS_CWGR : (TWIHS Offset: 0x10) (R/W 32) Clock Waveform Generator Register -------- */
#define TWIHS_CWGR_CLDIV_Pos                  _U_(0)                                               /**< (TWIHS_CWGR) Clock Low Divider Position */
#define TWIHS_CWGR_CLDIV_Msk                  (_U_(0xFF) << TWIHS_CWGR_CLDIV_Pos)                  /**< (TWIHS_CWGR) Clock Low Divider Mask */
#define TWIHS_CWGR_CLDIV(value)               (TWIHS_CWGR_CLDIV_Msk & ((value) << TWIHS_CWGR_CLDIV_Pos))
#define TWIHS_CWGR_CHDIV_Pos                  _U_(8)                                               /**< (TWIHS_CWGR) Clock High Divider Position */
#define TWIHS_CWGR_CHDIV_Msk                  (_U_(0xFF) << TWIHS_CWGR_CHDIV_Pos)                  /**< (TWIHS_CWGR) Clock High Divider Mask */
#define TWIHS_CWGR_CHDIV(value)               (TWIHS_CWGR_CHDIV_Msk & ((value) << TWIHS_CWGR_CHDIV_Pos))
#define TWIHS_CWGR_CKDIV_Pos                  _U_(16)                                              /**< (TWIHS_CWGR) Clock Divider Position */
#define TWIHS_CWGR_CKDIV_Msk                  (_U_(0x7) << TWIHS_CWGR_CKDIV_Pos)                   /**< (TWIHS_CWGR) Clock Divider Mask */
#define TWIHS_CWGR_CKDIV(value)               (TWIHS_CWGR_CKDIV_Msk & ((value) << TWIHS_CWGR_CKDIV_Pos))
#define TWIHS_CWGR_CKSRC_Pos                  _U_(20)                                              /**< (TWIHS_CWGR) Transfer Rate Clock Source Position */
#define TWIHS_CWGR_CKSRC_Msk                  (_U_(0x1) << TWIHS_CWGR_CKSRC_Pos)                   /**< (TWIHS_CWGR) Transfer Rate Clock Source Mask */
#define TWIHS_CWGR_CKSRC(value)               (TWIHS_CWGR_CKSRC_Msk & ((value) << TWIHS_CWGR_CKSRC_Pos))
#define   TWIHS_CWGR_CKSRC_PERIPH_CK_Val      _U_(0x0)                                             /**< (TWIHS_CWGR) Peripheral clock is used to generate the TWIHS baud rate.  */
#define   TWIHS_CWGR_CKSRC_GCLK_Val           _U_(0x1)                                             /**< (TWIHS_CWGR) GCLK is used to generate the TWIHS baud rate.  */
#define TWIHS_CWGR_CKSRC_PERIPH_CK            (TWIHS_CWGR_CKSRC_PERIPH_CK_Val << TWIHS_CWGR_CKSRC_Pos) /**< (TWIHS_CWGR) Peripheral clock is used to generate the TWIHS baud rate. Position  */
#define TWIHS_CWGR_CKSRC_GCLK                 (TWIHS_CWGR_CKSRC_GCLK_Val << TWIHS_CWGR_CKSRC_Pos)  /**< (TWIHS_CWGR) GCLK is used to generate the TWIHS baud rate. Position  */
#define TWIHS_CWGR_HOLD_Pos                   _U_(24)                                              /**< (TWIHS_CWGR) TWD Hold Time Versus TWCK Falling Position */
#define TWIHS_CWGR_HOLD_Msk                   (_U_(0x1F) << TWIHS_CWGR_HOLD_Pos)                   /**< (TWIHS_CWGR) TWD Hold Time Versus TWCK Falling Mask */
#define TWIHS_CWGR_HOLD(value)                (TWIHS_CWGR_HOLD_Msk & ((value) << TWIHS_CWGR_HOLD_Pos))
#define TWIHS_CWGR_Msk                        _U_(0x1F17FFFF)                                      /**< (TWIHS_CWGR) Register Mask  */


/* -------- TWIHS_SR : (TWIHS Offset: 0x20) ( R/ 32) Status Register -------- */
#define TWIHS_SR_TXCOMP_Pos                   _U_(0)                                               /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_TXCOMP_Msk                   (_U_(0x1) << TWIHS_SR_TXCOMP_Pos)                    /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_TXCOMP(value)                (TWIHS_SR_TXCOMP_Msk & ((value) << TWIHS_SR_TXCOMP_Pos))
#define TWIHS_SR_RXRDY_Pos                    _U_(1)                                               /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Position */
#define TWIHS_SR_RXRDY_Msk                    (_U_(0x1) << TWIHS_SR_RXRDY_Pos)                     /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Mask */
#define TWIHS_SR_RXRDY(value)                 (TWIHS_SR_RXRDY_Msk & ((value) << TWIHS_SR_RXRDY_Pos))
#define TWIHS_SR_TXRDY_Pos                    _U_(2)                                               /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_TXRDY_Msk                    (_U_(0x1) << TWIHS_SR_TXRDY_Pos)                     /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_TXRDY(value)                 (TWIHS_SR_TXRDY_Msk & ((value) << TWIHS_SR_TXRDY_Pos))
#define TWIHS_SR_SVREAD_Pos                   _U_(3)                                               /**< (TWIHS_SR) Slave Read Position */
#define TWIHS_SR_SVREAD_Msk                   (_U_(0x1) << TWIHS_SR_SVREAD_Pos)                    /**< (TWIHS_SR) Slave Read Mask */
#define TWIHS_SR_SVREAD(value)                (TWIHS_SR_SVREAD_Msk & ((value) << TWIHS_SR_SVREAD_Pos))
#define TWIHS_SR_SVACC_Pos                    _U_(4)                                               /**< (TWIHS_SR) Slave Access Position */
#define TWIHS_SR_SVACC_Msk                    (_U_(0x1) << TWIHS_SR_SVACC_Pos)                     /**< (TWIHS_SR) Slave Access Mask */
#define TWIHS_SR_SVACC(value)                 (TWIHS_SR_SVACC_Msk & ((value) << TWIHS_SR_SVACC_Pos))
#define TWIHS_SR_GACC_Pos                     _U_(5)                                               /**< (TWIHS_SR) General Call Access (cleared on read) Position */
#define TWIHS_SR_GACC_Msk                     (_U_(0x1) << TWIHS_SR_GACC_Pos)                      /**< (TWIHS_SR) General Call Access (cleared on read) Mask */
#define TWIHS_SR_GACC(value)                  (TWIHS_SR_GACC_Msk & ((value) << TWIHS_SR_GACC_Pos))
#define TWIHS_SR_OVRE_Pos                     _U_(6)                                               /**< (TWIHS_SR) Overrun Error (cleared on read) Position */
#define TWIHS_SR_OVRE_Msk                     (_U_(0x1) << TWIHS_SR_OVRE_Pos)                      /**< (TWIHS_SR) Overrun Error (cleared on read) Mask */
#define TWIHS_SR_OVRE(value)                  (TWIHS_SR_OVRE_Msk & ((value) << TWIHS_SR_OVRE_Pos))
#define TWIHS_SR_UNRE_Pos                     _U_(7)                                               /**< (TWIHS_SR) Underrun Error (cleared on read) Position */
#define TWIHS_SR_UNRE_Msk                     (_U_(0x1) << TWIHS_SR_UNRE_Pos)                      /**< (TWIHS_SR) Underrun Error (cleared on read) Mask */
#define TWIHS_SR_UNRE(value)                  (TWIHS_SR_UNRE_Msk & ((value) << TWIHS_SR_UNRE_Pos))
#define TWIHS_SR_NACK_Pos                     _U_(8)                                               /**< (TWIHS_SR) Not Acknowledged (cleared on read) Position */
#define TWIHS_SR_NACK_Msk                     (_U_(0x1) << TWIHS_SR_NACK_Pos)                      /**< (TWIHS_SR) Not Acknowledged (cleared on read) Mask */
#define TWIHS_SR_NACK(value)                  (TWIHS_SR_NACK_Msk & ((value) << TWIHS_SR_NACK_Pos))
#define TWIHS_SR_ARBLST_Pos                   _U_(9)                                               /**< (TWIHS_SR) Arbitration Lost (cleared on read) Position */
#define TWIHS_SR_ARBLST_Msk                   (_U_(0x1) << TWIHS_SR_ARBLST_Pos)                    /**< (TWIHS_SR) Arbitration Lost (cleared on read) Mask */
#define TWIHS_SR_ARBLST(value)                (TWIHS_SR_ARBLST_Msk & ((value) << TWIHS_SR_ARBLST_Pos))
#define TWIHS_SR_SCLWS_Pos                    _U_(10)                                              /**< (TWIHS_SR) Clock Wait State Position */
#define TWIHS_SR_SCLWS_Msk                    (_U_(0x1) << TWIHS_SR_SCLWS_Pos)                     /**< (TWIHS_SR) Clock Wait State Mask */
#define TWIHS_SR_SCLWS(value)                 (TWIHS_SR_SCLWS_Msk & ((value) << TWIHS_SR_SCLWS_Pos))
#define TWIHS_SR_EOSACC_Pos                   _U_(11)                                              /**< (TWIHS_SR) End Of Slave Access (cleared on read) Position */
#define TWIHS_SR_EOSACC_Msk                   (_U_(0x1) << TWIHS_SR_EOSACC_Pos)                    /**< (TWIHS_SR) End Of Slave Access (cleared on read) Mask */
#define TWIHS_SR_EOSACC(value)                (TWIHS_SR_EOSACC_Msk & ((value) << TWIHS_SR_EOSACC_Pos))
#define TWIHS_SR_MCACK_Pos                    _U_(16)                                              /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Position */
#define TWIHS_SR_MCACK_Msk                    (_U_(0x1) << TWIHS_SR_MCACK_Pos)                     /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Mask */
#define TWIHS_SR_MCACK(value)                 (TWIHS_SR_MCACK_Msk & ((value) << TWIHS_SR_MCACK_Pos))
#define TWIHS_SR_TOUT_Pos                     _U_(18)                                              /**< (TWIHS_SR) Timeout Error (cleared on read) Position */
#define TWIHS_SR_TOUT_Msk                     (_U_(0x1) << TWIHS_SR_TOUT_Pos)                      /**< (TWIHS_SR) Timeout Error (cleared on read) Mask */
#define TWIHS_SR_TOUT(value)                  (TWIHS_SR_TOUT_Msk & ((value) << TWIHS_SR_TOUT_Pos))
#define TWIHS_SR_PECERR_Pos                   _U_(19)                                              /**< (TWIHS_SR) PEC Error (cleared on read) Position */
#define TWIHS_SR_PECERR_Msk                   (_U_(0x1) << TWIHS_SR_PECERR_Pos)                    /**< (TWIHS_SR) PEC Error (cleared on read) Mask */
#define TWIHS_SR_PECERR(value)                (TWIHS_SR_PECERR_Msk & ((value) << TWIHS_SR_PECERR_Pos))
#define TWIHS_SR_SMBDAM_Pos                   _U_(20)                                              /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Position */
#define TWIHS_SR_SMBDAM_Msk                   (_U_(0x1) << TWIHS_SR_SMBDAM_Pos)                    /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWIHS_SR_SMBDAM(value)                (TWIHS_SR_SMBDAM_Msk & ((value) << TWIHS_SR_SMBDAM_Pos))
#define TWIHS_SR_SMBHHM_Pos                   _U_(21)                                              /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWIHS_SR_SMBHHM_Msk                   (_U_(0x1) << TWIHS_SR_SMBHHM_Pos)                    /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWIHS_SR_SMBHHM(value)                (TWIHS_SR_SMBHHM_Msk & ((value) << TWIHS_SR_SMBHHM_Pos))
#define TWIHS_SR_LOCK_Pos                     _U_(23)                                              /**< (TWIHS_SR) TWIHS Lock due to Frame Errors (cleared by writing a one to bit LOCKCLR in TWIHS_CR) Position */
#define TWIHS_SR_LOCK_Msk                     (_U_(0x1) << TWIHS_SR_LOCK_Pos)                      /**< (TWIHS_SR) TWIHS Lock due to Frame Errors (cleared by writing a one to bit LOCKCLR in TWIHS_CR) Mask */
#define TWIHS_SR_LOCK(value)                  (TWIHS_SR_LOCK_Msk & ((value) << TWIHS_SR_LOCK_Pos))
#define TWIHS_SR_SCL_Pos                      _U_(24)                                              /**< (TWIHS_SR) SCL Line Value Position */
#define TWIHS_SR_SCL_Msk                      (_U_(0x1) << TWIHS_SR_SCL_Pos)                       /**< (TWIHS_SR) SCL Line Value Mask */
#define TWIHS_SR_SCL(value)                   (TWIHS_SR_SCL_Msk & ((value) << TWIHS_SR_SCL_Pos))  
#define TWIHS_SR_SDA_Pos                      _U_(25)                                              /**< (TWIHS_SR) SDA Line Value Position */
#define TWIHS_SR_SDA_Msk                      (_U_(0x1) << TWIHS_SR_SDA_Pos)                       /**< (TWIHS_SR) SDA Line Value Mask */
#define TWIHS_SR_SDA(value)                   (TWIHS_SR_SDA_Msk & ((value) << TWIHS_SR_SDA_Pos))  
#define TWIHS_SR_Msk                          _U_(0x03BD0FFF)                                      /**< (TWIHS_SR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_SR_FIFO_ENABLED_TXCOMP_Pos      _U_(0)                                               /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_FIFO_ENABLED_TXCOMP_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TXCOMP_Pos)       /**< (TWIHS_SR) Transmission Completed (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_FIFO_ENABLED_TXCOMP(value)   (TWIHS_SR_FIFO_ENABLED_TXCOMP_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_TXCOMP_Pos))
#define TWIHS_SR_FIFO_ENABLED_RXRDY_Pos       _U_(1)                                               /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Position */
#define TWIHS_SR_FIFO_ENABLED_RXRDY_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_RXRDY_Pos)        /**< (TWIHS_SR) Receive Holding Register Ready (cleared by reading TWIHS_RHR) Mask */
#define TWIHS_SR_FIFO_ENABLED_RXRDY(value)    (TWIHS_SR_FIFO_ENABLED_RXRDY_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_RXRDY_Pos))
#define TWIHS_SR_FIFO_ENABLED_TXRDY_Pos       _U_(2)                                               /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Position */
#define TWIHS_SR_FIFO_ENABLED_TXRDY_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TXRDY_Pos)        /**< (TWIHS_SR) Transmit Holding Register Ready (cleared by writing TWIHS_THR) Mask */
#define TWIHS_SR_FIFO_ENABLED_TXRDY(value)    (TWIHS_SR_FIFO_ENABLED_TXRDY_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_TXRDY_Pos))
#define TWIHS_SR_FIFO_ENABLED_SVREAD_Pos      _U_(3)                                               /**< (TWIHS_SR) Slave Read Position */
#define TWIHS_SR_FIFO_ENABLED_SVREAD_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SVREAD_Pos)       /**< (TWIHS_SR) Slave Read Mask */
#define TWIHS_SR_FIFO_ENABLED_SVREAD(value)   (TWIHS_SR_FIFO_ENABLED_SVREAD_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SVREAD_Pos))
#define TWIHS_SR_FIFO_ENABLED_SVACC_Pos       _U_(4)                                               /**< (TWIHS_SR) Slave Access Position */
#define TWIHS_SR_FIFO_ENABLED_SVACC_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SVACC_Pos)        /**< (TWIHS_SR) Slave Access Mask */
#define TWIHS_SR_FIFO_ENABLED_SVACC(value)    (TWIHS_SR_FIFO_ENABLED_SVACC_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SVACC_Pos))
#define TWIHS_SR_FIFO_ENABLED_GACC_Pos        _U_(5)                                               /**< (TWIHS_SR) General Call Access (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_GACC_Msk        (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_GACC_Pos)         /**< (TWIHS_SR) General Call Access (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_GACC(value)     (TWIHS_SR_FIFO_ENABLED_GACC_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_GACC_Pos))
#define TWIHS_SR_FIFO_ENABLED_OVRE_Pos        _U_(6)                                               /**< (TWIHS_SR) Overrun Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_OVRE_Msk        (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_OVRE_Pos)         /**< (TWIHS_SR) Overrun Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_OVRE(value)     (TWIHS_SR_FIFO_ENABLED_OVRE_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_OVRE_Pos))
#define TWIHS_SR_FIFO_ENABLED_UNRE_Pos        _U_(7)                                               /**< (TWIHS_SR) Underrun Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_UNRE_Msk        (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_UNRE_Pos)         /**< (TWIHS_SR) Underrun Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_UNRE(value)     (TWIHS_SR_FIFO_ENABLED_UNRE_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_UNRE_Pos))
#define TWIHS_SR_FIFO_ENABLED_NACK_Pos        _U_(8)                                               /**< (TWIHS_SR) Not Acknowledged (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_NACK_Msk        (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_NACK_Pos)         /**< (TWIHS_SR) Not Acknowledged (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_NACK(value)     (TWIHS_SR_FIFO_ENABLED_NACK_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_NACK_Pos))
#define TWIHS_SR_FIFO_ENABLED_ARBLST_Pos      _U_(9)                                               /**< (TWIHS_SR) Arbitration Lost (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_ARBLST_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_ARBLST_Pos)       /**< (TWIHS_SR) Arbitration Lost (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_ARBLST(value)   (TWIHS_SR_FIFO_ENABLED_ARBLST_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_ARBLST_Pos))
#define TWIHS_SR_FIFO_ENABLED_SCLWS_Pos       _U_(10)                                              /**< (TWIHS_SR) Clock Wait State Position */
#define TWIHS_SR_FIFO_ENABLED_SCLWS_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SCLWS_Pos)        /**< (TWIHS_SR) Clock Wait State Mask */
#define TWIHS_SR_FIFO_ENABLED_SCLWS(value)    (TWIHS_SR_FIFO_ENABLED_SCLWS_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SCLWS_Pos))
#define TWIHS_SR_FIFO_ENABLED_EOSACC_Pos      _U_(11)                                              /**< (TWIHS_SR) End Of Slave Access (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_EOSACC_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_EOSACC_Pos)       /**< (TWIHS_SR) End Of Slave Access (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_EOSACC(value)   (TWIHS_SR_FIFO_ENABLED_EOSACC_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_EOSACC_Pos))
#define TWIHS_SR_FIFO_ENABLED_MCACK_Pos       _U_(16)                                              /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_MCACK_Msk       (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_MCACK_Pos)        /**< (TWIHS_SR) Master Code Acknowledge (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_MCACK(value)    (TWIHS_SR_FIFO_ENABLED_MCACK_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_MCACK_Pos))
#define TWIHS_SR_FIFO_ENABLED_TOUT_Pos        _U_(18)                                              /**< (TWIHS_SR) Timeout Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_TOUT_Msk        (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TOUT_Pos)         /**< (TWIHS_SR) Timeout Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_TOUT(value)     (TWIHS_SR_FIFO_ENABLED_TOUT_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_TOUT_Pos))
#define TWIHS_SR_FIFO_ENABLED_PECERR_Pos      _U_(19)                                              /**< (TWIHS_SR) PEC Error (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_PECERR_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_PECERR_Pos)       /**< (TWIHS_SR) PEC Error (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_PECERR(value)   (TWIHS_SR_FIFO_ENABLED_PECERR_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_PECERR_Pos))
#define TWIHS_SR_FIFO_ENABLED_SMBDAM_Pos      _U_(20)                                              /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_SMBDAM_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SMBDAM_Pos)       /**< (TWIHS_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_SMBDAM(value)   (TWIHS_SR_FIFO_ENABLED_SMBDAM_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SMBDAM_Pos))
#define TWIHS_SR_FIFO_ENABLED_SMBHHM_Pos      _U_(21)                                              /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWIHS_SR_FIFO_ENABLED_SMBHHM_Msk      (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SMBHHM_Pos)       /**< (TWIHS_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWIHS_SR_FIFO_ENABLED_SMBHHM(value)   (TWIHS_SR_FIFO_ENABLED_SMBHHM_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SMBHHM_Pos))
#define TWIHS_SR_FIFO_ENABLED_TXFLOCK_Pos     _U_(23)                                              /**< (TWIHS_SR) Transmit FIFO Lock Position */
#define TWIHS_SR_FIFO_ENABLED_TXFLOCK_Msk     (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_TXFLOCK_Pos)      /**< (TWIHS_SR) Transmit FIFO Lock Mask */
#define TWIHS_SR_FIFO_ENABLED_TXFLOCK(value)  (TWIHS_SR_FIFO_ENABLED_TXFLOCK_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_TXFLOCK_Pos))
#define TWIHS_SR_FIFO_ENABLED_SCL_Pos         _U_(24)                                              /**< (TWIHS_SR) SCL Line Value Position */
#define TWIHS_SR_FIFO_ENABLED_SCL_Msk         (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SCL_Pos)          /**< (TWIHS_SR) SCL Line Value Mask */
#define TWIHS_SR_FIFO_ENABLED_SCL(value)      (TWIHS_SR_FIFO_ENABLED_SCL_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SCL_Pos))
#define TWIHS_SR_FIFO_ENABLED_SDA_Pos         _U_(25)                                              /**< (TWIHS_SR) SDA Line Value Position */
#define TWIHS_SR_FIFO_ENABLED_SDA_Msk         (_U_(0x1) << TWIHS_SR_FIFO_ENABLED_SDA_Pos)          /**< (TWIHS_SR) SDA Line Value Mask */
#define TWIHS_SR_FIFO_ENABLED_SDA(value)      (TWIHS_SR_FIFO_ENABLED_SDA_Msk & ((value) << TWIHS_SR_FIFO_ENABLED_SDA_Pos))
#define TWIHS_SR_FIFO_ENABLED_Msk             _U_(0x03BD0FFF)                                       /**< (TWIHS_SR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_IER : (TWIHS Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define TWIHS_IER_TXCOMP_Pos                  _U_(0)                                               /**< (TWIHS_IER) Transmission Completed Interrupt Enable Position */
#define TWIHS_IER_TXCOMP_Msk                  (_U_(0x1) << TWIHS_IER_TXCOMP_Pos)                   /**< (TWIHS_IER) Transmission Completed Interrupt Enable Mask */
#define TWIHS_IER_TXCOMP(value)               (TWIHS_IER_TXCOMP_Msk & ((value) << TWIHS_IER_TXCOMP_Pos))
#define TWIHS_IER_RXRDY_Pos                   _U_(1)                                               /**< (TWIHS_IER) Receive Holding Register Ready Interrupt Enable Position */
#define TWIHS_IER_RXRDY_Msk                   (_U_(0x1) << TWIHS_IER_RXRDY_Pos)                    /**< (TWIHS_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define TWIHS_IER_RXRDY(value)                (TWIHS_IER_RXRDY_Msk & ((value) << TWIHS_IER_RXRDY_Pos))
#define TWIHS_IER_TXRDY_Pos                   _U_(2)                                               /**< (TWIHS_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define TWIHS_IER_TXRDY_Msk                   (_U_(0x1) << TWIHS_IER_TXRDY_Pos)                    /**< (TWIHS_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define TWIHS_IER_TXRDY(value)                (TWIHS_IER_TXRDY_Msk & ((value) << TWIHS_IER_TXRDY_Pos))
#define TWIHS_IER_SVACC_Pos                   _U_(4)                                               /**< (TWIHS_IER) Slave Access Interrupt Enable Position */
#define TWIHS_IER_SVACC_Msk                   (_U_(0x1) << TWIHS_IER_SVACC_Pos)                    /**< (TWIHS_IER) Slave Access Interrupt Enable Mask */
#define TWIHS_IER_SVACC(value)                (TWIHS_IER_SVACC_Msk & ((value) << TWIHS_IER_SVACC_Pos))
#define TWIHS_IER_GACC_Pos                    _U_(5)                                               /**< (TWIHS_IER) General Call Access Interrupt Enable Position */
#define TWIHS_IER_GACC_Msk                    (_U_(0x1) << TWIHS_IER_GACC_Pos)                     /**< (TWIHS_IER) General Call Access Interrupt Enable Mask */
#define TWIHS_IER_GACC(value)                 (TWIHS_IER_GACC_Msk & ((value) << TWIHS_IER_GACC_Pos))
#define TWIHS_IER_OVRE_Pos                    _U_(6)                                               /**< (TWIHS_IER) Overrun Error Interrupt Enable Position */
#define TWIHS_IER_OVRE_Msk                    (_U_(0x1) << TWIHS_IER_OVRE_Pos)                     /**< (TWIHS_IER) Overrun Error Interrupt Enable Mask */
#define TWIHS_IER_OVRE(value)                 (TWIHS_IER_OVRE_Msk & ((value) << TWIHS_IER_OVRE_Pos))
#define TWIHS_IER_UNRE_Pos                    _U_(7)                                               /**< (TWIHS_IER) Underrun Error Interrupt Enable Position */
#define TWIHS_IER_UNRE_Msk                    (_U_(0x1) << TWIHS_IER_UNRE_Pos)                     /**< (TWIHS_IER) Underrun Error Interrupt Enable Mask */
#define TWIHS_IER_UNRE(value)                 (TWIHS_IER_UNRE_Msk & ((value) << TWIHS_IER_UNRE_Pos))
#define TWIHS_IER_NACK_Pos                    _U_(8)                                               /**< (TWIHS_IER) Not Acknowledge Interrupt Enable Position */
#define TWIHS_IER_NACK_Msk                    (_U_(0x1) << TWIHS_IER_NACK_Pos)                     /**< (TWIHS_IER) Not Acknowledge Interrupt Enable Mask */
#define TWIHS_IER_NACK(value)                 (TWIHS_IER_NACK_Msk & ((value) << TWIHS_IER_NACK_Pos))
#define TWIHS_IER_ARBLST_Pos                  _U_(9)                                               /**< (TWIHS_IER) Arbitration Lost Interrupt Enable Position */
#define TWIHS_IER_ARBLST_Msk                  (_U_(0x1) << TWIHS_IER_ARBLST_Pos)                   /**< (TWIHS_IER) Arbitration Lost Interrupt Enable Mask */
#define TWIHS_IER_ARBLST(value)               (TWIHS_IER_ARBLST_Msk & ((value) << TWIHS_IER_ARBLST_Pos))
#define TWIHS_IER_SCL_WS_Pos                  _U_(10)                                              /**< (TWIHS_IER) Clock Wait State Interrupt Enable Position */
#define TWIHS_IER_SCL_WS_Msk                  (_U_(0x1) << TWIHS_IER_SCL_WS_Pos)                   /**< (TWIHS_IER) Clock Wait State Interrupt Enable Mask */
#define TWIHS_IER_SCL_WS(value)               (TWIHS_IER_SCL_WS_Msk & ((value) << TWIHS_IER_SCL_WS_Pos))
#define TWIHS_IER_EOSACC_Pos                  _U_(11)                                              /**< (TWIHS_IER) End Of Slave Access Interrupt Enable Position */
#define TWIHS_IER_EOSACC_Msk                  (_U_(0x1) << TWIHS_IER_EOSACC_Pos)                   /**< (TWIHS_IER) End Of Slave Access Interrupt Enable Mask */
#define TWIHS_IER_EOSACC(value)               (TWIHS_IER_EOSACC_Msk & ((value) << TWIHS_IER_EOSACC_Pos))
#define TWIHS_IER_MCACK_Pos                   _U_(16)                                              /**< (TWIHS_IER) Master Code Acknowledge Interrupt Enable Position */
#define TWIHS_IER_MCACK_Msk                   (_U_(0x1) << TWIHS_IER_MCACK_Pos)                    /**< (TWIHS_IER) Master Code Acknowledge Interrupt Enable Mask */
#define TWIHS_IER_MCACK(value)                (TWIHS_IER_MCACK_Msk & ((value) << TWIHS_IER_MCACK_Pos))
#define TWIHS_IER_TOUT_Pos                    _U_(18)                                              /**< (TWIHS_IER) Timeout Error Interrupt Enable Position */
#define TWIHS_IER_TOUT_Msk                    (_U_(0x1) << TWIHS_IER_TOUT_Pos)                     /**< (TWIHS_IER) Timeout Error Interrupt Enable Mask */
#define TWIHS_IER_TOUT(value)                 (TWIHS_IER_TOUT_Msk & ((value) << TWIHS_IER_TOUT_Pos))
#define TWIHS_IER_PECERR_Pos                  _U_(19)                                              /**< (TWIHS_IER) PEC Error Interrupt Enable Position */
#define TWIHS_IER_PECERR_Msk                  (_U_(0x1) << TWIHS_IER_PECERR_Pos)                   /**< (TWIHS_IER) PEC Error Interrupt Enable Mask */
#define TWIHS_IER_PECERR(value)               (TWIHS_IER_PECERR_Msk & ((value) << TWIHS_IER_PECERR_Pos))
#define TWIHS_IER_SMBDAM_Pos                  _U_(20)                                              /**< (TWIHS_IER) SMBus Default Address Match Interrupt Enable Position */
#define TWIHS_IER_SMBDAM_Msk                  (_U_(0x1) << TWIHS_IER_SMBDAM_Pos)                   /**< (TWIHS_IER) SMBus Default Address Match Interrupt Enable Mask */
#define TWIHS_IER_SMBDAM(value)               (TWIHS_IER_SMBDAM_Msk & ((value) << TWIHS_IER_SMBDAM_Pos))
#define TWIHS_IER_SMBHHM_Pos                  _U_(21)                                              /**< (TWIHS_IER) SMBus Host Header Address Match Interrupt Enable Position */
#define TWIHS_IER_SMBHHM_Msk                  (_U_(0x1) << TWIHS_IER_SMBHHM_Pos)                   /**< (TWIHS_IER) SMBus Host Header Address Match Interrupt Enable Mask */
#define TWIHS_IER_SMBHHM(value)               (TWIHS_IER_SMBHHM_Msk & ((value) << TWIHS_IER_SMBHHM_Pos))
#define TWIHS_IER_Msk                         _U_(0x003D0FF7)                                      /**< (TWIHS_IER) Register Mask  */


/* -------- TWIHS_IDR : (TWIHS Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define TWIHS_IDR_TXCOMP_Pos                  _U_(0)                                               /**< (TWIHS_IDR) Transmission Completed Interrupt Disable Position */
#define TWIHS_IDR_TXCOMP_Msk                  (_U_(0x1) << TWIHS_IDR_TXCOMP_Pos)                   /**< (TWIHS_IDR) Transmission Completed Interrupt Disable Mask */
#define TWIHS_IDR_TXCOMP(value)               (TWIHS_IDR_TXCOMP_Msk & ((value) << TWIHS_IDR_TXCOMP_Pos))
#define TWIHS_IDR_RXRDY_Pos                   _U_(1)                                               /**< (TWIHS_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define TWIHS_IDR_RXRDY_Msk                   (_U_(0x1) << TWIHS_IDR_RXRDY_Pos)                    /**< (TWIHS_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define TWIHS_IDR_RXRDY(value)                (TWIHS_IDR_RXRDY_Msk & ((value) << TWIHS_IDR_RXRDY_Pos))
#define TWIHS_IDR_TXRDY_Pos                   _U_(2)                                               /**< (TWIHS_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define TWIHS_IDR_TXRDY_Msk                   (_U_(0x1) << TWIHS_IDR_TXRDY_Pos)                    /**< (TWIHS_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define TWIHS_IDR_TXRDY(value)                (TWIHS_IDR_TXRDY_Msk & ((value) << TWIHS_IDR_TXRDY_Pos))
#define TWIHS_IDR_SVACC_Pos                   _U_(4)                                               /**< (TWIHS_IDR) Slave Access Interrupt Disable Position */
#define TWIHS_IDR_SVACC_Msk                   (_U_(0x1) << TWIHS_IDR_SVACC_Pos)                    /**< (TWIHS_IDR) Slave Access Interrupt Disable Mask */
#define TWIHS_IDR_SVACC(value)                (TWIHS_IDR_SVACC_Msk & ((value) << TWIHS_IDR_SVACC_Pos))
#define TWIHS_IDR_GACC_Pos                    _U_(5)                                               /**< (TWIHS_IDR) General Call Access Interrupt Disable Position */
#define TWIHS_IDR_GACC_Msk                    (_U_(0x1) << TWIHS_IDR_GACC_Pos)                     /**< (TWIHS_IDR) General Call Access Interrupt Disable Mask */
#define TWIHS_IDR_GACC(value)                 (TWIHS_IDR_GACC_Msk & ((value) << TWIHS_IDR_GACC_Pos))
#define TWIHS_IDR_OVRE_Pos                    _U_(6)                                               /**< (TWIHS_IDR) Overrun Error Interrupt Disable Position */
#define TWIHS_IDR_OVRE_Msk                    (_U_(0x1) << TWIHS_IDR_OVRE_Pos)                     /**< (TWIHS_IDR) Overrun Error Interrupt Disable Mask */
#define TWIHS_IDR_OVRE(value)                 (TWIHS_IDR_OVRE_Msk & ((value) << TWIHS_IDR_OVRE_Pos))
#define TWIHS_IDR_UNRE_Pos                    _U_(7)                                               /**< (TWIHS_IDR) Underrun Error Interrupt Disable Position */
#define TWIHS_IDR_UNRE_Msk                    (_U_(0x1) << TWIHS_IDR_UNRE_Pos)                     /**< (TWIHS_IDR) Underrun Error Interrupt Disable Mask */
#define TWIHS_IDR_UNRE(value)                 (TWIHS_IDR_UNRE_Msk & ((value) << TWIHS_IDR_UNRE_Pos))
#define TWIHS_IDR_NACK_Pos                    _U_(8)                                               /**< (TWIHS_IDR) Not Acknowledge Interrupt Disable Position */
#define TWIHS_IDR_NACK_Msk                    (_U_(0x1) << TWIHS_IDR_NACK_Pos)                     /**< (TWIHS_IDR) Not Acknowledge Interrupt Disable Mask */
#define TWIHS_IDR_NACK(value)                 (TWIHS_IDR_NACK_Msk & ((value) << TWIHS_IDR_NACK_Pos))
#define TWIHS_IDR_ARBLST_Pos                  _U_(9)                                               /**< (TWIHS_IDR) Arbitration Lost Interrupt Disable Position */
#define TWIHS_IDR_ARBLST_Msk                  (_U_(0x1) << TWIHS_IDR_ARBLST_Pos)                   /**< (TWIHS_IDR) Arbitration Lost Interrupt Disable Mask */
#define TWIHS_IDR_ARBLST(value)               (TWIHS_IDR_ARBLST_Msk & ((value) << TWIHS_IDR_ARBLST_Pos))
#define TWIHS_IDR_SCL_WS_Pos                  _U_(10)                                              /**< (TWIHS_IDR) Clock Wait State Interrupt Disable Position */
#define TWIHS_IDR_SCL_WS_Msk                  (_U_(0x1) << TWIHS_IDR_SCL_WS_Pos)                   /**< (TWIHS_IDR) Clock Wait State Interrupt Disable Mask */
#define TWIHS_IDR_SCL_WS(value)               (TWIHS_IDR_SCL_WS_Msk & ((value) << TWIHS_IDR_SCL_WS_Pos))
#define TWIHS_IDR_EOSACC_Pos                  _U_(11)                                              /**< (TWIHS_IDR) End Of Slave Access Interrupt Disable Position */
#define TWIHS_IDR_EOSACC_Msk                  (_U_(0x1) << TWIHS_IDR_EOSACC_Pos)                   /**< (TWIHS_IDR) End Of Slave Access Interrupt Disable Mask */
#define TWIHS_IDR_EOSACC(value)               (TWIHS_IDR_EOSACC_Msk & ((value) << TWIHS_IDR_EOSACC_Pos))
#define TWIHS_IDR_MCACK_Pos                   _U_(16)                                              /**< (TWIHS_IDR) Master Code Acknowledge Interrupt Disable Position */
#define TWIHS_IDR_MCACK_Msk                   (_U_(0x1) << TWIHS_IDR_MCACK_Pos)                    /**< (TWIHS_IDR) Master Code Acknowledge Interrupt Disable Mask */
#define TWIHS_IDR_MCACK(value)                (TWIHS_IDR_MCACK_Msk & ((value) << TWIHS_IDR_MCACK_Pos))
#define TWIHS_IDR_TOUT_Pos                    _U_(18)                                              /**< (TWIHS_IDR) Timeout Error Interrupt Disable Position */
#define TWIHS_IDR_TOUT_Msk                    (_U_(0x1) << TWIHS_IDR_TOUT_Pos)                     /**< (TWIHS_IDR) Timeout Error Interrupt Disable Mask */
#define TWIHS_IDR_TOUT(value)                 (TWIHS_IDR_TOUT_Msk & ((value) << TWIHS_IDR_TOUT_Pos))
#define TWIHS_IDR_PECERR_Pos                  _U_(19)                                              /**< (TWIHS_IDR) PEC Error Interrupt Disable Position */
#define TWIHS_IDR_PECERR_Msk                  (_U_(0x1) << TWIHS_IDR_PECERR_Pos)                   /**< (TWIHS_IDR) PEC Error Interrupt Disable Mask */
#define TWIHS_IDR_PECERR(value)               (TWIHS_IDR_PECERR_Msk & ((value) << TWIHS_IDR_PECERR_Pos))
#define TWIHS_IDR_SMBDAM_Pos                  _U_(20)                                              /**< (TWIHS_IDR) SMBus Default Address Match Interrupt Disable Position */
#define TWIHS_IDR_SMBDAM_Msk                  (_U_(0x1) << TWIHS_IDR_SMBDAM_Pos)                   /**< (TWIHS_IDR) SMBus Default Address Match Interrupt Disable Mask */
#define TWIHS_IDR_SMBDAM(value)               (TWIHS_IDR_SMBDAM_Msk & ((value) << TWIHS_IDR_SMBDAM_Pos))
#define TWIHS_IDR_SMBHHM_Pos                  _U_(21)                                              /**< (TWIHS_IDR) SMBus Host Header Address Match Interrupt Disable Position */
#define TWIHS_IDR_SMBHHM_Msk                  (_U_(0x1) << TWIHS_IDR_SMBHHM_Pos)                   /**< (TWIHS_IDR) SMBus Host Header Address Match Interrupt Disable Mask */
#define TWIHS_IDR_SMBHHM(value)               (TWIHS_IDR_SMBHHM_Msk & ((value) << TWIHS_IDR_SMBHHM_Pos))
#define TWIHS_IDR_Msk                         _U_(0x003D0FF7)                                      /**< (TWIHS_IDR) Register Mask  */


/* -------- TWIHS_IMR : (TWIHS Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define TWIHS_IMR_TXCOMP_Pos                  _U_(0)                                               /**< (TWIHS_IMR) Transmission Completed Interrupt Mask Position */
#define TWIHS_IMR_TXCOMP_Msk                  (_U_(0x1) << TWIHS_IMR_TXCOMP_Pos)                   /**< (TWIHS_IMR) Transmission Completed Interrupt Mask Mask */
#define TWIHS_IMR_TXCOMP(value)               (TWIHS_IMR_TXCOMP_Msk & ((value) << TWIHS_IMR_TXCOMP_Pos))
#define TWIHS_IMR_RXRDY_Pos                   _U_(1)                                               /**< (TWIHS_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define TWIHS_IMR_RXRDY_Msk                   (_U_(0x1) << TWIHS_IMR_RXRDY_Pos)                    /**< (TWIHS_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define TWIHS_IMR_RXRDY(value)                (TWIHS_IMR_RXRDY_Msk & ((value) << TWIHS_IMR_RXRDY_Pos))
#define TWIHS_IMR_TXRDY_Pos                   _U_(2)                                               /**< (TWIHS_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define TWIHS_IMR_TXRDY_Msk                   (_U_(0x1) << TWIHS_IMR_TXRDY_Pos)                    /**< (TWIHS_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define TWIHS_IMR_TXRDY(value)                (TWIHS_IMR_TXRDY_Msk & ((value) << TWIHS_IMR_TXRDY_Pos))
#define TWIHS_IMR_SVACC_Pos                   _U_(4)                                               /**< (TWIHS_IMR) Slave Access Interrupt Mask Position */
#define TWIHS_IMR_SVACC_Msk                   (_U_(0x1) << TWIHS_IMR_SVACC_Pos)                    /**< (TWIHS_IMR) Slave Access Interrupt Mask Mask */
#define TWIHS_IMR_SVACC(value)                (TWIHS_IMR_SVACC_Msk & ((value) << TWIHS_IMR_SVACC_Pos))
#define TWIHS_IMR_GACC_Pos                    _U_(5)                                               /**< (TWIHS_IMR) General Call Access Interrupt Mask Position */
#define TWIHS_IMR_GACC_Msk                    (_U_(0x1) << TWIHS_IMR_GACC_Pos)                     /**< (TWIHS_IMR) General Call Access Interrupt Mask Mask */
#define TWIHS_IMR_GACC(value)                 (TWIHS_IMR_GACC_Msk & ((value) << TWIHS_IMR_GACC_Pos))
#define TWIHS_IMR_OVRE_Pos                    _U_(6)                                               /**< (TWIHS_IMR) Overrun Error Interrupt Mask Position */
#define TWIHS_IMR_OVRE_Msk                    (_U_(0x1) << TWIHS_IMR_OVRE_Pos)                     /**< (TWIHS_IMR) Overrun Error Interrupt Mask Mask */
#define TWIHS_IMR_OVRE(value)                 (TWIHS_IMR_OVRE_Msk & ((value) << TWIHS_IMR_OVRE_Pos))
#define TWIHS_IMR_UNRE_Pos                    _U_(7)                                               /**< (TWIHS_IMR) Underrun Error Interrupt Mask Position */
#define TWIHS_IMR_UNRE_Msk                    (_U_(0x1) << TWIHS_IMR_UNRE_Pos)                     /**< (TWIHS_IMR) Underrun Error Interrupt Mask Mask */
#define TWIHS_IMR_UNRE(value)                 (TWIHS_IMR_UNRE_Msk & ((value) << TWIHS_IMR_UNRE_Pos))
#define TWIHS_IMR_NACK_Pos                    _U_(8)                                               /**< (TWIHS_IMR) Not Acknowledge Interrupt Mask Position */
#define TWIHS_IMR_NACK_Msk                    (_U_(0x1) << TWIHS_IMR_NACK_Pos)                     /**< (TWIHS_IMR) Not Acknowledge Interrupt Mask Mask */
#define TWIHS_IMR_NACK(value)                 (TWIHS_IMR_NACK_Msk & ((value) << TWIHS_IMR_NACK_Pos))
#define TWIHS_IMR_ARBLST_Pos                  _U_(9)                                               /**< (TWIHS_IMR) Arbitration Lost Interrupt Mask Position */
#define TWIHS_IMR_ARBLST_Msk                  (_U_(0x1) << TWIHS_IMR_ARBLST_Pos)                   /**< (TWIHS_IMR) Arbitration Lost Interrupt Mask Mask */
#define TWIHS_IMR_ARBLST(value)               (TWIHS_IMR_ARBLST_Msk & ((value) << TWIHS_IMR_ARBLST_Pos))
#define TWIHS_IMR_SCL_WS_Pos                  _U_(10)                                              /**< (TWIHS_IMR) Clock Wait State Interrupt Mask Position */
#define TWIHS_IMR_SCL_WS_Msk                  (_U_(0x1) << TWIHS_IMR_SCL_WS_Pos)                   /**< (TWIHS_IMR) Clock Wait State Interrupt Mask Mask */
#define TWIHS_IMR_SCL_WS(value)               (TWIHS_IMR_SCL_WS_Msk & ((value) << TWIHS_IMR_SCL_WS_Pos))
#define TWIHS_IMR_EOSACC_Pos                  _U_(11)                                              /**< (TWIHS_IMR) End Of Slave Access Interrupt Mask Position */
#define TWIHS_IMR_EOSACC_Msk                  (_U_(0x1) << TWIHS_IMR_EOSACC_Pos)                   /**< (TWIHS_IMR) End Of Slave Access Interrupt Mask Mask */
#define TWIHS_IMR_EOSACC(value)               (TWIHS_IMR_EOSACC_Msk & ((value) << TWIHS_IMR_EOSACC_Pos))
#define TWIHS_IMR_MCACK_Pos                   _U_(16)                                              /**< (TWIHS_IMR) Master Code Acknowledge Interrupt Mask Position */
#define TWIHS_IMR_MCACK_Msk                   (_U_(0x1) << TWIHS_IMR_MCACK_Pos)                    /**< (TWIHS_IMR) Master Code Acknowledge Interrupt Mask Mask */
#define TWIHS_IMR_MCACK(value)                (TWIHS_IMR_MCACK_Msk & ((value) << TWIHS_IMR_MCACK_Pos))
#define TWIHS_IMR_TOUT_Pos                    _U_(18)                                              /**< (TWIHS_IMR) Timeout Error Interrupt Mask Position */
#define TWIHS_IMR_TOUT_Msk                    (_U_(0x1) << TWIHS_IMR_TOUT_Pos)                     /**< (TWIHS_IMR) Timeout Error Interrupt Mask Mask */
#define TWIHS_IMR_TOUT(value)                 (TWIHS_IMR_TOUT_Msk & ((value) << TWIHS_IMR_TOUT_Pos))
#define TWIHS_IMR_PECERR_Pos                  _U_(19)                                              /**< (TWIHS_IMR) PEC Error Interrupt Mask Position */
#define TWIHS_IMR_PECERR_Msk                  (_U_(0x1) << TWIHS_IMR_PECERR_Pos)                   /**< (TWIHS_IMR) PEC Error Interrupt Mask Mask */
#define TWIHS_IMR_PECERR(value)               (TWIHS_IMR_PECERR_Msk & ((value) << TWIHS_IMR_PECERR_Pos))
#define TWIHS_IMR_SMBDAM_Pos                  _U_(20)                                              /**< (TWIHS_IMR) SMBus Default Address Match Interrupt Mask Position */
#define TWIHS_IMR_SMBDAM_Msk                  (_U_(0x1) << TWIHS_IMR_SMBDAM_Pos)                   /**< (TWIHS_IMR) SMBus Default Address Match Interrupt Mask Mask */
#define TWIHS_IMR_SMBDAM(value)               (TWIHS_IMR_SMBDAM_Msk & ((value) << TWIHS_IMR_SMBDAM_Pos))
#define TWIHS_IMR_SMBHHM_Pos                  _U_(21)                                              /**< (TWIHS_IMR) SMBus Host Header Address Match Interrupt Mask Position */
#define TWIHS_IMR_SMBHHM_Msk                  (_U_(0x1) << TWIHS_IMR_SMBHHM_Pos)                   /**< (TWIHS_IMR) SMBus Host Header Address Match Interrupt Mask Mask */
#define TWIHS_IMR_SMBHHM(value)               (TWIHS_IMR_SMBHHM_Msk & ((value) << TWIHS_IMR_SMBHHM_Pos))
#define TWIHS_IMR_Msk                         _U_(0x003D0FF7)                                      /**< (TWIHS_IMR) Register Mask  */


/* -------- TWIHS_RHR : (TWIHS Offset: 0x30) ( R/ 32) Receive Holding Register -------- */
#define TWIHS_RHR_RXDATA_Pos                  _U_(0)                                               /**< (TWIHS_RHR) Master or Slave Receive Holding Data Position */
#define TWIHS_RHR_RXDATA_Msk                  (_U_(0xFF) << TWIHS_RHR_RXDATA_Pos)                  /**< (TWIHS_RHR) Master or Slave Receive Holding Data Mask */
#define TWIHS_RHR_RXDATA(value)               (TWIHS_RHR_RXDATA_Msk & ((value) << TWIHS_RHR_RXDATA_Pos))
#define TWIHS_RHR_Msk                         _U_(0x000000FF)                                      /**< (TWIHS_RHR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA0_Pos    _U_(0)                                               /**< (TWIHS_RHR) Master or Slave Receive Holding Data 0 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA0_Msk    (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA0_Pos)    /**< (TWIHS_RHR) Master or Slave Receive Holding Data 0 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA0(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA0_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA0_Pos))
#define TWIHS_RHR_FIFO_ENABLED_RXDATA1_Pos    _U_(8)                                               /**< (TWIHS_RHR) Master or Slave Receive Holding Data 1 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA1_Msk    (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA1_Pos)    /**< (TWIHS_RHR) Master or Slave Receive Holding Data 1 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA1(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA1_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA1_Pos))
#define TWIHS_RHR_FIFO_ENABLED_RXDATA2_Pos    _U_(16)                                              /**< (TWIHS_RHR) Master or Slave Receive Holding Data 2 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA2_Msk    (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA2_Pos)    /**< (TWIHS_RHR) Master or Slave Receive Holding Data 2 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA2(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA2_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA2_Pos))
#define TWIHS_RHR_FIFO_ENABLED_RXDATA3_Pos    _U_(24)                                              /**< (TWIHS_RHR) Master or Slave Receive Holding Data 3 Position */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA3_Msk    (_U_(0xFF) << TWIHS_RHR_FIFO_ENABLED_RXDATA3_Pos)    /**< (TWIHS_RHR) Master or Slave Receive Holding Data 3 Mask */
#define TWIHS_RHR_FIFO_ENABLED_RXDATA3(value) (TWIHS_RHR_FIFO_ENABLED_RXDATA3_Msk & ((value) << TWIHS_RHR_FIFO_ENABLED_RXDATA3_Pos))
#define TWIHS_RHR_FIFO_ENABLED_Msk            _U_(0xFFFFFFFF)                                       /**< (TWIHS_RHR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_THR : (TWIHS Offset: 0x34) ( /W 32) Transmit Holding Register -------- */
#define TWIHS_THR_TXDATA_Pos                  _U_(0)                                               /**< (TWIHS_THR) Master or Slave Transmit Holding Data Position */
#define TWIHS_THR_TXDATA_Msk                  (_U_(0xFF) << TWIHS_THR_TXDATA_Pos)                  /**< (TWIHS_THR) Master or Slave Transmit Holding Data Mask */
#define TWIHS_THR_TXDATA(value)               (TWIHS_THR_TXDATA_Msk & ((value) << TWIHS_THR_TXDATA_Pos))
#define TWIHS_THR_Msk                         _U_(0x000000FF)                                      /**< (TWIHS_THR) Register Mask  */

/* FIFO_ENABLED mode */
#define TWIHS_THR_FIFO_ENABLED_TXDATA0_Pos    _U_(0)                                               /**< (TWIHS_THR) Master or Slave Transmit Holding Data 02 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA0_Msk    (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA0_Pos)    /**< (TWIHS_THR) Master or Slave Transmit Holding Data 02 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA0(value) (TWIHS_THR_FIFO_ENABLED_TXDATA0_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA0_Pos))
#define TWIHS_THR_FIFO_ENABLED_TXDATA1_Pos    _U_(8)                                               /**< (TWIHS_THR) Master or Slave Transmit Holding Data 1 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA1_Msk    (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA1_Pos)    /**< (TWIHS_THR) Master or Slave Transmit Holding Data 1 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA1(value) (TWIHS_THR_FIFO_ENABLED_TXDATA1_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA1_Pos))
#define TWIHS_THR_FIFO_ENABLED_TXDATA2_Pos    _U_(16)                                              /**< (TWIHS_THR) Master or Slave Transmit Holding Data 2 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA2_Msk    (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA2_Pos)    /**< (TWIHS_THR) Master or Slave Transmit Holding Data 2 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA2(value) (TWIHS_THR_FIFO_ENABLED_TXDATA2_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA2_Pos))
#define TWIHS_THR_FIFO_ENABLED_TXDATA3_Pos    _U_(24)                                              /**< (TWIHS_THR) Master or Slave Transmit Holding Data 3 Position */
#define TWIHS_THR_FIFO_ENABLED_TXDATA3_Msk    (_U_(0xFF) << TWIHS_THR_FIFO_ENABLED_TXDATA3_Pos)    /**< (TWIHS_THR) Master or Slave Transmit Holding Data 3 Mask */
#define TWIHS_THR_FIFO_ENABLED_TXDATA3(value) (TWIHS_THR_FIFO_ENABLED_TXDATA3_Msk & ((value) << TWIHS_THR_FIFO_ENABLED_TXDATA3_Pos))
#define TWIHS_THR_FIFO_ENABLED_Msk            _U_(0xFFFFFFFF)                                       /**< (TWIHS_THR_FIFO_ENABLED) Register Mask  */


/* -------- TWIHS_SMBTR : (TWIHS Offset: 0x38) (R/W 32) SMBus Timing Register -------- */
#define TWIHS_SMBTR_PRESC_Pos                 _U_(0)                                               /**< (TWIHS_SMBTR) SMBus Clock Prescaler Position */
#define TWIHS_SMBTR_PRESC_Msk                 (_U_(0xF) << TWIHS_SMBTR_PRESC_Pos)                  /**< (TWIHS_SMBTR) SMBus Clock Prescaler Mask */
#define TWIHS_SMBTR_PRESC(value)              (TWIHS_SMBTR_PRESC_Msk & ((value) << TWIHS_SMBTR_PRESC_Pos))
#define TWIHS_SMBTR_TLOWS_Pos                 _U_(8)                                               /**< (TWIHS_SMBTR) Slave Clock Stretch Maximum Cycles Position */
#define TWIHS_SMBTR_TLOWS_Msk                 (_U_(0xFF) << TWIHS_SMBTR_TLOWS_Pos)                 /**< (TWIHS_SMBTR) Slave Clock Stretch Maximum Cycles Mask */
#define TWIHS_SMBTR_TLOWS(value)              (TWIHS_SMBTR_TLOWS_Msk & ((value) << TWIHS_SMBTR_TLOWS_Pos))
#define TWIHS_SMBTR_TLOWM_Pos                 _U_(16)                                              /**< (TWIHS_SMBTR) Master Clock Stretch Maximum Cycles Position */
#define TWIHS_SMBTR_TLOWM_Msk                 (_U_(0xFF) << TWIHS_SMBTR_TLOWM_Pos)                 /**< (TWIHS_SMBTR) Master Clock Stretch Maximum Cycles Mask */
#define TWIHS_SMBTR_TLOWM(value)              (TWIHS_SMBTR_TLOWM_Msk & ((value) << TWIHS_SMBTR_TLOWM_Pos))
#define TWIHS_SMBTR_THMAX_Pos                 _U_(24)                                              /**< (TWIHS_SMBTR) Clock High Maximum Cycles Position */
#define TWIHS_SMBTR_THMAX_Msk                 (_U_(0xFF) << TWIHS_SMBTR_THMAX_Pos)                 /**< (TWIHS_SMBTR) Clock High Maximum Cycles Mask */
#define TWIHS_SMBTR_THMAX(value)              (TWIHS_SMBTR_THMAX_Msk & ((value) << TWIHS_SMBTR_THMAX_Pos))
#define TWIHS_SMBTR_Msk                       _U_(0xFFFFFF0F)                                      /**< (TWIHS_SMBTR) Register Mask  */


/* -------- TWIHS_ACR : (TWIHS Offset: 0x40) (R/W 32) Alternative Command Register -------- */
#define TWIHS_ACR_DATAL_Pos                   _U_(0)                                               /**< (TWIHS_ACR) Data Length Position */
#define TWIHS_ACR_DATAL_Msk                   (_U_(0xFF) << TWIHS_ACR_DATAL_Pos)                   /**< (TWIHS_ACR) Data Length Mask */
#define TWIHS_ACR_DATAL(value)                (TWIHS_ACR_DATAL_Msk & ((value) << TWIHS_ACR_DATAL_Pos))
#define TWIHS_ACR_DIR_Pos                     _U_(8)                                               /**< (TWIHS_ACR) Transfer Direction Position */
#define TWIHS_ACR_DIR_Msk                     (_U_(0x1) << TWIHS_ACR_DIR_Pos)                      /**< (TWIHS_ACR) Transfer Direction Mask */
#define TWIHS_ACR_DIR(value)                  (TWIHS_ACR_DIR_Msk & ((value) << TWIHS_ACR_DIR_Pos))
#define TWIHS_ACR_PEC_Pos                     _U_(9)                                               /**< (TWIHS_ACR) PEC Request (SMBus Mode only) Position */
#define TWIHS_ACR_PEC_Msk                     (_U_(0x1) << TWIHS_ACR_PEC_Pos)                      /**< (TWIHS_ACR) PEC Request (SMBus Mode only) Mask */
#define TWIHS_ACR_PEC(value)                  (TWIHS_ACR_PEC_Msk & ((value) << TWIHS_ACR_PEC_Pos))
#define TWIHS_ACR_NDATAL_Pos                  _U_(16)                                              /**< (TWIHS_ACR) Next Data Length Position */
#define TWIHS_ACR_NDATAL_Msk                  (_U_(0xFF) << TWIHS_ACR_NDATAL_Pos)                  /**< (TWIHS_ACR) Next Data Length Mask */
#define TWIHS_ACR_NDATAL(value)               (TWIHS_ACR_NDATAL_Msk & ((value) << TWIHS_ACR_NDATAL_Pos))
#define TWIHS_ACR_NDIR_Pos                    _U_(24)                                              /**< (TWIHS_ACR) Next Transfer Direction Position */
#define TWIHS_ACR_NDIR_Msk                    (_U_(0x1) << TWIHS_ACR_NDIR_Pos)                     /**< (TWIHS_ACR) Next Transfer Direction Mask */
#define TWIHS_ACR_NDIR(value)                 (TWIHS_ACR_NDIR_Msk & ((value) << TWIHS_ACR_NDIR_Pos))
#define TWIHS_ACR_NPEC_Pos                    _U_(25)                                              /**< (TWIHS_ACR) Next PEC Request (SMBus Mode only) Position */
#define TWIHS_ACR_NPEC_Msk                    (_U_(0x1) << TWIHS_ACR_NPEC_Pos)                     /**< (TWIHS_ACR) Next PEC Request (SMBus Mode only) Mask */
#define TWIHS_ACR_NPEC(value)                 (TWIHS_ACR_NPEC_Msk & ((value) << TWIHS_ACR_NPEC_Pos))
#define TWIHS_ACR_Msk                         _U_(0x03FF03FF)                                      /**< (TWIHS_ACR) Register Mask  */


/* -------- TWIHS_FILTR : (TWIHS Offset: 0x44) (R/W 32) Filter Register -------- */
#define TWIHS_FILTR_FILT_Pos                  _U_(0)                                               /**< (TWIHS_FILTR) RX Digital Filter Position */
#define TWIHS_FILTR_FILT_Msk                  (_U_(0x1) << TWIHS_FILTR_FILT_Pos)                   /**< (TWIHS_FILTR) RX Digital Filter Mask */
#define TWIHS_FILTR_FILT(value)               (TWIHS_FILTR_FILT_Msk & ((value) << TWIHS_FILTR_FILT_Pos))
#define TWIHS_FILTR_PADFEN_Pos                _U_(1)                                               /**< (TWIHS_FILTR) PAD Filter Enable Position */
#define TWIHS_FILTR_PADFEN_Msk                (_U_(0x1) << TWIHS_FILTR_PADFEN_Pos)                 /**< (TWIHS_FILTR) PAD Filter Enable Mask */
#define TWIHS_FILTR_PADFEN(value)             (TWIHS_FILTR_PADFEN_Msk & ((value) << TWIHS_FILTR_PADFEN_Pos))
#define TWIHS_FILTR_PADFCFG_Pos               _U_(2)                                               /**< (TWIHS_FILTR) PAD Filter Config Position */
#define TWIHS_FILTR_PADFCFG_Msk               (_U_(0x1) << TWIHS_FILTR_PADFCFG_Pos)                /**< (TWIHS_FILTR) PAD Filter Config Mask */
#define TWIHS_FILTR_PADFCFG(value)            (TWIHS_FILTR_PADFCFG_Msk & ((value) << TWIHS_FILTR_PADFCFG_Pos))
#define TWIHS_FILTR_THRES_Pos                 _U_(8)                                               /**< (TWIHS_FILTR) Digital Filter Threshold Position */
#define TWIHS_FILTR_THRES_Msk                 (_U_(0x7) << TWIHS_FILTR_THRES_Pos)                  /**< (TWIHS_FILTR) Digital Filter Threshold Mask */
#define TWIHS_FILTR_THRES(value)              (TWIHS_FILTR_THRES_Msk & ((value) << TWIHS_FILTR_THRES_Pos))
#define TWIHS_FILTR_Msk                       _U_(0x00000707)                                      /**< (TWIHS_FILTR) Register Mask  */


/* -------- TWIHS_SWMR : (TWIHS Offset: 0x4C) (R/W 32) SleepWalking Matching Register -------- */
#define TWIHS_SWMR_SADR1_Pos                  _U_(0)                                               /**< (TWIHS_SWMR) Slave Address 1 Position */
#define TWIHS_SWMR_SADR1_Msk                  (_U_(0x7F) << TWIHS_SWMR_SADR1_Pos)                  /**< (TWIHS_SWMR) Slave Address 1 Mask */
#define TWIHS_SWMR_SADR1(value)               (TWIHS_SWMR_SADR1_Msk & ((value) << TWIHS_SWMR_SADR1_Pos))
#define TWIHS_SWMR_SADR2_Pos                  _U_(8)                                               /**< (TWIHS_SWMR) Slave Address 2 Position */
#define TWIHS_SWMR_SADR2_Msk                  (_U_(0x7F) << TWIHS_SWMR_SADR2_Pos)                  /**< (TWIHS_SWMR) Slave Address 2 Mask */
#define TWIHS_SWMR_SADR2(value)               (TWIHS_SWMR_SADR2_Msk & ((value) << TWIHS_SWMR_SADR2_Pos))
#define TWIHS_SWMR_SADR3_Pos                  _U_(16)                                              /**< (TWIHS_SWMR) Slave Address 3 Position */
#define TWIHS_SWMR_SADR3_Msk                  (_U_(0x7F) << TWIHS_SWMR_SADR3_Pos)                  /**< (TWIHS_SWMR) Slave Address 3 Mask */
#define TWIHS_SWMR_SADR3(value)               (TWIHS_SWMR_SADR3_Msk & ((value) << TWIHS_SWMR_SADR3_Pos))
#define TWIHS_SWMR_DATAM_Pos                  _U_(24)                                              /**< (TWIHS_SWMR) Data Match Position */
#define TWIHS_SWMR_DATAM_Msk                  (_U_(0xFF) << TWIHS_SWMR_DATAM_Pos)                  /**< (TWIHS_SWMR) Data Match Mask */
#define TWIHS_SWMR_DATAM(value)               (TWIHS_SWMR_DATAM_Msk & ((value) << TWIHS_SWMR_DATAM_Pos))
#define TWIHS_SWMR_Msk                        _U_(0xFF7F7F7F)                                      /**< (TWIHS_SWMR) Register Mask  */


/* -------- TWIHS_FMR : (TWIHS Offset: 0x50) (R/W 32) FIFO Mode Register -------- */
#define TWIHS_FMR_TXRDYM_Pos                  _U_(0)                                               /**< (TWIHS_FMR) Transmitter Ready Mode Position */
#define TWIHS_FMR_TXRDYM_Msk                  (_U_(0x3) << TWIHS_FMR_TXRDYM_Pos)                   /**< (TWIHS_FMR) Transmitter Ready Mode Mask */
#define TWIHS_FMR_TXRDYM(value)               (TWIHS_FMR_TXRDYM_Msk & ((value) << TWIHS_FMR_TXRDYM_Pos))
#define   TWIHS_FMR_TXRDYM_ONE_DATA_Val       _U_(0x0)                                             /**< (TWIHS_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO  */
#define   TWIHS_FMR_TXRDYM_TWO_DATA_Val       _U_(0x1)                                             /**< (TWIHS_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO  */
#define   TWIHS_FMR_TXRDYM_FOUR_DATA_Val      _U_(0x2)                                             /**< (TWIHS_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO  */
#define TWIHS_FMR_TXRDYM_ONE_DATA             (TWIHS_FMR_TXRDYM_ONE_DATA_Val << TWIHS_FMR_TXRDYM_Pos) /**< (TWIHS_FMR) TXRDY will be at level '1' when at least one data can be written in the Transmit FIFO Position  */
#define TWIHS_FMR_TXRDYM_TWO_DATA             (TWIHS_FMR_TXRDYM_TWO_DATA_Val << TWIHS_FMR_TXRDYM_Pos) /**< (TWIHS_FMR) TXRDY will be at level '1' when at least two data can be written in the Transmit FIFO Position  */
#define TWIHS_FMR_TXRDYM_FOUR_DATA            (TWIHS_FMR_TXRDYM_FOUR_DATA_Val << TWIHS_FMR_TXRDYM_Pos) /**< (TWIHS_FMR) TXRDY will be at level '1' when at least four data can be written in the Transmit FIFO Position  */
#define TWIHS_FMR_RXRDYM_Pos                  _U_(4)                                               /**< (TWIHS_FMR) Receiver Ready Mode Position */
#define TWIHS_FMR_RXRDYM_Msk                  (_U_(0x3) << TWIHS_FMR_RXRDYM_Pos)                   /**< (TWIHS_FMR) Receiver Ready Mode Mask */
#define TWIHS_FMR_RXRDYM(value)               (TWIHS_FMR_RXRDYM_Msk & ((value) << TWIHS_FMR_RXRDYM_Pos))
#define   TWIHS_FMR_RXRDYM_ONE_DATA_Val       _U_(0x0)                                             /**< (TWIHS_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO  */
#define   TWIHS_FMR_RXRDYM_TWO_DATA_Val       _U_(0x1)                                             /**< (TWIHS_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO  */
#define   TWIHS_FMR_RXRDYM_FOUR_DATA_Val      _U_(0x2)                                             /**< (TWIHS_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO  */
#define TWIHS_FMR_RXRDYM_ONE_DATA             (TWIHS_FMR_RXRDYM_ONE_DATA_Val << TWIHS_FMR_RXRDYM_Pos) /**< (TWIHS_FMR) RXRDY will be at level '1' when at least one unread data is in the Receive FIFO Position  */
#define TWIHS_FMR_RXRDYM_TWO_DATA             (TWIHS_FMR_RXRDYM_TWO_DATA_Val << TWIHS_FMR_RXRDYM_Pos) /**< (TWIHS_FMR) RXRDY will be at level '1' when at least two unread data are in the Receive FIFO Position  */
#define TWIHS_FMR_RXRDYM_FOUR_DATA            (TWIHS_FMR_RXRDYM_FOUR_DATA_Val << TWIHS_FMR_RXRDYM_Pos) /**< (TWIHS_FMR) RXRDY will be at level '1' when at least four unread data are in the Receive FIFO Position  */
#define TWIHS_FMR_TXFTHRES_Pos                _U_(16)                                              /**< (TWIHS_FMR) Transmit FIFO Threshold Position */
#define TWIHS_FMR_TXFTHRES_Msk                (_U_(0x3F) << TWIHS_FMR_TXFTHRES_Pos)                /**< (TWIHS_FMR) Transmit FIFO Threshold Mask */
#define TWIHS_FMR_TXFTHRES(value)             (TWIHS_FMR_TXFTHRES_Msk & ((value) << TWIHS_FMR_TXFTHRES_Pos))
#define TWIHS_FMR_RXFTHRES_Pos                _U_(24)                                              /**< (TWIHS_FMR) Receive FIFO Threshold Position */
#define TWIHS_FMR_RXFTHRES_Msk                (_U_(0x3F) << TWIHS_FMR_RXFTHRES_Pos)                /**< (TWIHS_FMR) Receive FIFO Threshold Mask */
#define TWIHS_FMR_RXFTHRES(value)             (TWIHS_FMR_RXFTHRES_Msk & ((value) << TWIHS_FMR_RXFTHRES_Pos))
#define TWIHS_FMR_Msk                         _U_(0x3F3F0033)                                      /**< (TWIHS_FMR) Register Mask  */


/* -------- TWIHS_FLR : (TWIHS Offset: 0x54) ( R/ 32) FIFO Level Register -------- */
#define TWIHS_FLR_TXFL_Pos                    _U_(0)                                               /**< (TWIHS_FLR) Transmit FIFO Level Position */
#define TWIHS_FLR_TXFL_Msk                    (_U_(0x3F) << TWIHS_FLR_TXFL_Pos)                    /**< (TWIHS_FLR) Transmit FIFO Level Mask */
#define TWIHS_FLR_TXFL(value)                 (TWIHS_FLR_TXFL_Msk & ((value) << TWIHS_FLR_TXFL_Pos))
#define TWIHS_FLR_RXFL_Pos                    _U_(16)                                              /**< (TWIHS_FLR) Receive FIFO Level Position */
#define TWIHS_FLR_RXFL_Msk                    (_U_(0x3F) << TWIHS_FLR_RXFL_Pos)                    /**< (TWIHS_FLR) Receive FIFO Level Mask */
#define TWIHS_FLR_RXFL(value)                 (TWIHS_FLR_RXFL_Msk & ((value) << TWIHS_FLR_RXFL_Pos))
#define TWIHS_FLR_Msk                         _U_(0x003F003F)                                      /**< (TWIHS_FLR) Register Mask  */


/* -------- TWIHS_FSR : (TWIHS Offset: 0x60) ( R/ 32) FIFO Status Register -------- */
#define TWIHS_FSR_TXFEF_Pos                   _U_(0)                                               /**< (TWIHS_FSR) Transmit FIFO Empty Flag (cleared on read) Position */
#define TWIHS_FSR_TXFEF_Msk                   (_U_(0x1) << TWIHS_FSR_TXFEF_Pos)                    /**< (TWIHS_FSR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define TWIHS_FSR_TXFEF(value)                (TWIHS_FSR_TXFEF_Msk & ((value) << TWIHS_FSR_TXFEF_Pos))
#define TWIHS_FSR_TXFFF_Pos                   _U_(1)                                               /**< (TWIHS_FSR) Transmit FIFO Full Flag (cleared on read) Position */
#define TWIHS_FSR_TXFFF_Msk                   (_U_(0x1) << TWIHS_FSR_TXFFF_Pos)                    /**< (TWIHS_FSR) Transmit FIFO Full Flag (cleared on read) Mask */
#define TWIHS_FSR_TXFFF(value)                (TWIHS_FSR_TXFFF_Msk & ((value) << TWIHS_FSR_TXFFF_Pos))
#define TWIHS_FSR_TXFTHF_Pos                  _U_(2)                                               /**< (TWIHS_FSR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define TWIHS_FSR_TXFTHF_Msk                  (_U_(0x1) << TWIHS_FSR_TXFTHF_Pos)                   /**< (TWIHS_FSR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define TWIHS_FSR_TXFTHF(value)               (TWIHS_FSR_TXFTHF_Msk & ((value) << TWIHS_FSR_TXFTHF_Pos))
#define TWIHS_FSR_RXFEF_Pos                   _U_(3)                                               /**< (TWIHS_FSR) Receive FIFO Empty Flag Position */
#define TWIHS_FSR_RXFEF_Msk                   (_U_(0x1) << TWIHS_FSR_RXFEF_Pos)                    /**< (TWIHS_FSR) Receive FIFO Empty Flag Mask */
#define TWIHS_FSR_RXFEF(value)                (TWIHS_FSR_RXFEF_Msk & ((value) << TWIHS_FSR_RXFEF_Pos))
#define TWIHS_FSR_RXFFF_Pos                   _U_(4)                                               /**< (TWIHS_FSR) Receive FIFO Full Flag Position */
#define TWIHS_FSR_RXFFF_Msk                   (_U_(0x1) << TWIHS_FSR_RXFFF_Pos)                    /**< (TWIHS_FSR) Receive FIFO Full Flag Mask */
#define TWIHS_FSR_RXFFF(value)                (TWIHS_FSR_RXFFF_Msk & ((value) << TWIHS_FSR_RXFFF_Pos))
#define TWIHS_FSR_RXFTHF_Pos                  _U_(5)                                               /**< (TWIHS_FSR) Receive FIFO Threshold Flag Position */
#define TWIHS_FSR_RXFTHF_Msk                  (_U_(0x1) << TWIHS_FSR_RXFTHF_Pos)                   /**< (TWIHS_FSR) Receive FIFO Threshold Flag Mask */
#define TWIHS_FSR_RXFTHF(value)               (TWIHS_FSR_RXFTHF_Msk & ((value) << TWIHS_FSR_RXFTHF_Pos))
#define TWIHS_FSR_TXFPTEF_Pos                 _U_(6)                                               /**< (TWIHS_FSR) Transmit FIFO Pointer Error Flag Position */
#define TWIHS_FSR_TXFPTEF_Msk                 (_U_(0x1) << TWIHS_FSR_TXFPTEF_Pos)                  /**< (TWIHS_FSR) Transmit FIFO Pointer Error Flag Mask */
#define TWIHS_FSR_TXFPTEF(value)              (TWIHS_FSR_TXFPTEF_Msk & ((value) << TWIHS_FSR_TXFPTEF_Pos))
#define TWIHS_FSR_RXFPTEF_Pos                 _U_(7)                                               /**< (TWIHS_FSR) Receive FIFO Pointer Error Flag Position */
#define TWIHS_FSR_RXFPTEF_Msk                 (_U_(0x1) << TWIHS_FSR_RXFPTEF_Pos)                  /**< (TWIHS_FSR) Receive FIFO Pointer Error Flag Mask */
#define TWIHS_FSR_RXFPTEF(value)              (TWIHS_FSR_RXFPTEF_Msk & ((value) << TWIHS_FSR_RXFPTEF_Pos))
#define TWIHS_FSR_Msk                         _U_(0x000000FF)                                      /**< (TWIHS_FSR) Register Mask  */


/* -------- TWIHS_FIER : (TWIHS Offset: 0x64) ( /W 32) FIFO Interrupt Enable Register -------- */
#define TWIHS_FIER_TXFEF_Pos                  _U_(0)                                               /**< (TWIHS_FIER) TXFEF Interrupt Enable Position */
#define TWIHS_FIER_TXFEF_Msk                  (_U_(0x1) << TWIHS_FIER_TXFEF_Pos)                   /**< (TWIHS_FIER) TXFEF Interrupt Enable Mask */
#define TWIHS_FIER_TXFEF(value)               (TWIHS_FIER_TXFEF_Msk & ((value) << TWIHS_FIER_TXFEF_Pos))
#define TWIHS_FIER_TXFFF_Pos                  _U_(1)                                               /**< (TWIHS_FIER) TXFFF Interrupt Enable Position */
#define TWIHS_FIER_TXFFF_Msk                  (_U_(0x1) << TWIHS_FIER_TXFFF_Pos)                   /**< (TWIHS_FIER) TXFFF Interrupt Enable Mask */
#define TWIHS_FIER_TXFFF(value)               (TWIHS_FIER_TXFFF_Msk & ((value) << TWIHS_FIER_TXFFF_Pos))
#define TWIHS_FIER_TXFTHF_Pos                 _U_(2)                                               /**< (TWIHS_FIER) TXFTHF Interrupt Enable Position */
#define TWIHS_FIER_TXFTHF_Msk                 (_U_(0x1) << TWIHS_FIER_TXFTHF_Pos)                  /**< (TWIHS_FIER) TXFTHF Interrupt Enable Mask */
#define TWIHS_FIER_TXFTHF(value)              (TWIHS_FIER_TXFTHF_Msk & ((value) << TWIHS_FIER_TXFTHF_Pos))
#define TWIHS_FIER_RXFEF_Pos                  _U_(3)                                               /**< (TWIHS_FIER) RXFEF Interrupt Enable Position */
#define TWIHS_FIER_RXFEF_Msk                  (_U_(0x1) << TWIHS_FIER_RXFEF_Pos)                   /**< (TWIHS_FIER) RXFEF Interrupt Enable Mask */
#define TWIHS_FIER_RXFEF(value)               (TWIHS_FIER_RXFEF_Msk & ((value) << TWIHS_FIER_RXFEF_Pos))
#define TWIHS_FIER_RXFFF_Pos                  _U_(4)                                               /**< (TWIHS_FIER) RXFFF Interrupt Enable Position */
#define TWIHS_FIER_RXFFF_Msk                  (_U_(0x1) << TWIHS_FIER_RXFFF_Pos)                   /**< (TWIHS_FIER) RXFFF Interrupt Enable Mask */
#define TWIHS_FIER_RXFFF(value)               (TWIHS_FIER_RXFFF_Msk & ((value) << TWIHS_FIER_RXFFF_Pos))
#define TWIHS_FIER_RXFTHF_Pos                 _U_(5)                                               /**< (TWIHS_FIER) RXFTHF Interrupt Enable Position */
#define TWIHS_FIER_RXFTHF_Msk                 (_U_(0x1) << TWIHS_FIER_RXFTHF_Pos)                  /**< (TWIHS_FIER) RXFTHF Interrupt Enable Mask */
#define TWIHS_FIER_RXFTHF(value)              (TWIHS_FIER_RXFTHF_Msk & ((value) << TWIHS_FIER_RXFTHF_Pos))
#define TWIHS_FIER_TXFPTEF_Pos                _U_(6)                                               /**< (TWIHS_FIER) TXFPTEF Interrupt Enable Position */
#define TWIHS_FIER_TXFPTEF_Msk                (_U_(0x1) << TWIHS_FIER_TXFPTEF_Pos)                 /**< (TWIHS_FIER) TXFPTEF Interrupt Enable Mask */
#define TWIHS_FIER_TXFPTEF(value)             (TWIHS_FIER_TXFPTEF_Msk & ((value) << TWIHS_FIER_TXFPTEF_Pos))
#define TWIHS_FIER_RXFPTEF_Pos                _U_(7)                                               /**< (TWIHS_FIER) RXFPTEF Interrupt Enable Position */
#define TWIHS_FIER_RXFPTEF_Msk                (_U_(0x1) << TWIHS_FIER_RXFPTEF_Pos)                 /**< (TWIHS_FIER) RXFPTEF Interrupt Enable Mask */
#define TWIHS_FIER_RXFPTEF(value)             (TWIHS_FIER_RXFPTEF_Msk & ((value) << TWIHS_FIER_RXFPTEF_Pos))
#define TWIHS_FIER_Msk                        _U_(0x000000FF)                                      /**< (TWIHS_FIER) Register Mask  */


/* -------- TWIHS_FIDR : (TWIHS Offset: 0x68) ( /W 32) FIFO Interrupt Disable Register -------- */
#define TWIHS_FIDR_TXFEF_Pos                  _U_(0)                                               /**< (TWIHS_FIDR) TXFEF Interrupt Disable Position */
#define TWIHS_FIDR_TXFEF_Msk                  (_U_(0x1) << TWIHS_FIDR_TXFEF_Pos)                   /**< (TWIHS_FIDR) TXFEF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFEF(value)               (TWIHS_FIDR_TXFEF_Msk & ((value) << TWIHS_FIDR_TXFEF_Pos))
#define TWIHS_FIDR_TXFFF_Pos                  _U_(1)                                               /**< (TWIHS_FIDR) TXFFF Interrupt Disable Position */
#define TWIHS_FIDR_TXFFF_Msk                  (_U_(0x1) << TWIHS_FIDR_TXFFF_Pos)                   /**< (TWIHS_FIDR) TXFFF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFFF(value)               (TWIHS_FIDR_TXFFF_Msk & ((value) << TWIHS_FIDR_TXFFF_Pos))
#define TWIHS_FIDR_TXFTHF_Pos                 _U_(2)                                               /**< (TWIHS_FIDR) TXFTHF Interrupt Disable Position */
#define TWIHS_FIDR_TXFTHF_Msk                 (_U_(0x1) << TWIHS_FIDR_TXFTHF_Pos)                  /**< (TWIHS_FIDR) TXFTHF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFTHF(value)              (TWIHS_FIDR_TXFTHF_Msk & ((value) << TWIHS_FIDR_TXFTHF_Pos))
#define TWIHS_FIDR_RXFEF_Pos                  _U_(3)                                               /**< (TWIHS_FIDR) RXFEF Interrupt Disable Position */
#define TWIHS_FIDR_RXFEF_Msk                  (_U_(0x1) << TWIHS_FIDR_RXFEF_Pos)                   /**< (TWIHS_FIDR) RXFEF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFEF(value)               (TWIHS_FIDR_RXFEF_Msk & ((value) << TWIHS_FIDR_RXFEF_Pos))
#define TWIHS_FIDR_RXFFF_Pos                  _U_(4)                                               /**< (TWIHS_FIDR) RXFFF Interrupt Disable Position */
#define TWIHS_FIDR_RXFFF_Msk                  (_U_(0x1) << TWIHS_FIDR_RXFFF_Pos)                   /**< (TWIHS_FIDR) RXFFF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFFF(value)               (TWIHS_FIDR_RXFFF_Msk & ((value) << TWIHS_FIDR_RXFFF_Pos))
#define TWIHS_FIDR_RXFTHF_Pos                 _U_(5)                                               /**< (TWIHS_FIDR) RXFTHF Interrupt Disable Position */
#define TWIHS_FIDR_RXFTHF_Msk                 (_U_(0x1) << TWIHS_FIDR_RXFTHF_Pos)                  /**< (TWIHS_FIDR) RXFTHF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFTHF(value)              (TWIHS_FIDR_RXFTHF_Msk & ((value) << TWIHS_FIDR_RXFTHF_Pos))
#define TWIHS_FIDR_TXFPTEF_Pos                _U_(6)                                               /**< (TWIHS_FIDR) TXFPTEF Interrupt Disable Position */
#define TWIHS_FIDR_TXFPTEF_Msk                (_U_(0x1) << TWIHS_FIDR_TXFPTEF_Pos)                 /**< (TWIHS_FIDR) TXFPTEF Interrupt Disable Mask */
#define TWIHS_FIDR_TXFPTEF(value)             (TWIHS_FIDR_TXFPTEF_Msk & ((value) << TWIHS_FIDR_TXFPTEF_Pos))
#define TWIHS_FIDR_RXFPTEF_Pos                _U_(7)                                               /**< (TWIHS_FIDR) RXFPTEF Interrupt Disable Position */
#define TWIHS_FIDR_RXFPTEF_Msk                (_U_(0x1) << TWIHS_FIDR_RXFPTEF_Pos)                 /**< (TWIHS_FIDR) RXFPTEF Interrupt Disable Mask */
#define TWIHS_FIDR_RXFPTEF(value)             (TWIHS_FIDR_RXFPTEF_Msk & ((value) << TWIHS_FIDR_RXFPTEF_Pos))
#define TWIHS_FIDR_Msk                        _U_(0x000000FF)                                      /**< (TWIHS_FIDR) Register Mask  */


/* -------- TWIHS_FIMR : (TWIHS Offset: 0x6C) ( R/ 32) FIFO Interrupt Mask Register -------- */
#define TWIHS_FIMR_TXFEF_Pos                  _U_(0)                                               /**< (TWIHS_FIMR) TXFEF Interrupt Mask Position */
#define TWIHS_FIMR_TXFEF_Msk                  (_U_(0x1) << TWIHS_FIMR_TXFEF_Pos)                   /**< (TWIHS_FIMR) TXFEF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFEF(value)               (TWIHS_FIMR_TXFEF_Msk & ((value) << TWIHS_FIMR_TXFEF_Pos))
#define TWIHS_FIMR_TXFFF_Pos                  _U_(1)                                               /**< (TWIHS_FIMR) TXFFF Interrupt Mask Position */
#define TWIHS_FIMR_TXFFF_Msk                  (_U_(0x1) << TWIHS_FIMR_TXFFF_Pos)                   /**< (TWIHS_FIMR) TXFFF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFFF(value)               (TWIHS_FIMR_TXFFF_Msk & ((value) << TWIHS_FIMR_TXFFF_Pos))
#define TWIHS_FIMR_TXFTHF_Pos                 _U_(2)                                               /**< (TWIHS_FIMR) TXFTHF Interrupt Mask Position */
#define TWIHS_FIMR_TXFTHF_Msk                 (_U_(0x1) << TWIHS_FIMR_TXFTHF_Pos)                  /**< (TWIHS_FIMR) TXFTHF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFTHF(value)              (TWIHS_FIMR_TXFTHF_Msk & ((value) << TWIHS_FIMR_TXFTHF_Pos))
#define TWIHS_FIMR_RXFEF_Pos                  _U_(3)                                               /**< (TWIHS_FIMR) RXFEF Interrupt Mask Position */
#define TWIHS_FIMR_RXFEF_Msk                  (_U_(0x1) << TWIHS_FIMR_RXFEF_Pos)                   /**< (TWIHS_FIMR) RXFEF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFEF(value)               (TWIHS_FIMR_RXFEF_Msk & ((value) << TWIHS_FIMR_RXFEF_Pos))
#define TWIHS_FIMR_RXFFF_Pos                  _U_(4)                                               /**< (TWIHS_FIMR) RXFFF Interrupt Mask Position */
#define TWIHS_FIMR_RXFFF_Msk                  (_U_(0x1) << TWIHS_FIMR_RXFFF_Pos)                   /**< (TWIHS_FIMR) RXFFF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFFF(value)               (TWIHS_FIMR_RXFFF_Msk & ((value) << TWIHS_FIMR_RXFFF_Pos))
#define TWIHS_FIMR_RXFTHF_Pos                 _U_(5)                                               /**< (TWIHS_FIMR) RXFTHF Interrupt Mask Position */
#define TWIHS_FIMR_RXFTHF_Msk                 (_U_(0x1) << TWIHS_FIMR_RXFTHF_Pos)                  /**< (TWIHS_FIMR) RXFTHF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFTHF(value)              (TWIHS_FIMR_RXFTHF_Msk & ((value) << TWIHS_FIMR_RXFTHF_Pos))
#define TWIHS_FIMR_TXFPTEF_Pos                _U_(6)                                               /**< (TWIHS_FIMR) TXFPTEF Interrupt Mask Position */
#define TWIHS_FIMR_TXFPTEF_Msk                (_U_(0x1) << TWIHS_FIMR_TXFPTEF_Pos)                 /**< (TWIHS_FIMR) TXFPTEF Interrupt Mask Mask */
#define TWIHS_FIMR_TXFPTEF(value)             (TWIHS_FIMR_TXFPTEF_Msk & ((value) << TWIHS_FIMR_TXFPTEF_Pos))
#define TWIHS_FIMR_RXFPTEF_Pos                _U_(7)                                               /**< (TWIHS_FIMR) RXFPTEF Interrupt Mask Position */
#define TWIHS_FIMR_RXFPTEF_Msk                (_U_(0x1) << TWIHS_FIMR_RXFPTEF_Pos)                 /**< (TWIHS_FIMR) RXFPTEF Interrupt Mask Mask */
#define TWIHS_FIMR_RXFPTEF(value)             (TWIHS_FIMR_RXFPTEF_Msk & ((value) << TWIHS_FIMR_RXFPTEF_Pos))
#define TWIHS_FIMR_Msk                        _U_(0x000000FF)                                      /**< (TWIHS_FIMR) Register Mask  */


/* -------- TWIHS_DR : (TWIHS Offset: 0xD0) ( R/ 32) Debug Register -------- */
#define TWIHS_DR_SWEN_Pos                     _U_(0)                                               /**< (TWIHS_DR) SleepWalking Enable Position */
#define TWIHS_DR_SWEN_Msk                     (_U_(0x1) << TWIHS_DR_SWEN_Pos)                      /**< (TWIHS_DR) SleepWalking Enable Mask */
#define TWIHS_DR_SWEN(value)                  (TWIHS_DR_SWEN_Msk & ((value) << TWIHS_DR_SWEN_Pos))
#define TWIHS_DR_CLKRQ_Pos                    _U_(1)                                               /**< (TWIHS_DR) Clock Request Position */
#define TWIHS_DR_CLKRQ_Msk                    (_U_(0x1) << TWIHS_DR_CLKRQ_Pos)                     /**< (TWIHS_DR) Clock Request Mask */
#define TWIHS_DR_CLKRQ(value)                 (TWIHS_DR_CLKRQ_Msk & ((value) << TWIHS_DR_CLKRQ_Pos))
#define TWIHS_DR_SWMATCH_Pos                  _U_(2)                                               /**< (TWIHS_DR) SleepWalking Match Position */
#define TWIHS_DR_SWMATCH_Msk                  (_U_(0x1) << TWIHS_DR_SWMATCH_Pos)                   /**< (TWIHS_DR) SleepWalking Match Mask */
#define TWIHS_DR_SWMATCH(value)               (TWIHS_DR_SWMATCH_Msk & ((value) << TWIHS_DR_SWMATCH_Pos))
#define TWIHS_DR_TRP_Pos                      _U_(3)                                               /**< (TWIHS_DR) Transfer Pending Position */
#define TWIHS_DR_TRP_Msk                      (_U_(0x1) << TWIHS_DR_TRP_Pos)                       /**< (TWIHS_DR) Transfer Pending Mask */
#define TWIHS_DR_TRP(value)                   (TWIHS_DR_TRP_Msk & ((value) << TWIHS_DR_TRP_Pos))  
#define TWIHS_DR_Msk                          _U_(0x0000000F)                                      /**< (TWIHS_DR) Register Mask  */


/* -------- TWIHS_WPMR : (TWIHS Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TWIHS_WPMR_WPEN_Pos                   _U_(0)                                               /**< (TWIHS_WPMR) Write Protection Enable Position */
#define TWIHS_WPMR_WPEN_Msk                   (_U_(0x1) << TWIHS_WPMR_WPEN_Pos)                    /**< (TWIHS_WPMR) Write Protection Enable Mask */
#define TWIHS_WPMR_WPEN(value)                (TWIHS_WPMR_WPEN_Msk & ((value) << TWIHS_WPMR_WPEN_Pos))
#define TWIHS_WPMR_WPKEY_Pos                  _U_(8)                                               /**< (TWIHS_WPMR) Write Protection Key Position */
#define TWIHS_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << TWIHS_WPMR_WPKEY_Pos)              /**< (TWIHS_WPMR) Write Protection Key Mask */
#define TWIHS_WPMR_WPKEY(value)               (TWIHS_WPMR_WPKEY_Msk & ((value) << TWIHS_WPMR_WPKEY_Pos))
#define   TWIHS_WPMR_WPKEY_PASSWD_Val         _U_(0x545749)                                        /**< (TWIHS_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define TWIHS_WPMR_WPKEY_PASSWD               (TWIHS_WPMR_WPKEY_PASSWD_Val << TWIHS_WPMR_WPKEY_Pos) /**< (TWIHS_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define TWIHS_WPMR_Msk                        _U_(0xFFFFFF01)                                      /**< (TWIHS_WPMR) Register Mask  */


/* -------- TWIHS_WPSR : (TWIHS Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define TWIHS_WPSR_WPVS_Pos                   _U_(0)                                               /**< (TWIHS_WPSR) Write Protection Violation Status Position */
#define TWIHS_WPSR_WPVS_Msk                   (_U_(0x1) << TWIHS_WPSR_WPVS_Pos)                    /**< (TWIHS_WPSR) Write Protection Violation Status Mask */
#define TWIHS_WPSR_WPVS(value)                (TWIHS_WPSR_WPVS_Msk & ((value) << TWIHS_WPSR_WPVS_Pos))
#define TWIHS_WPSR_WPVSRC_Pos                 _U_(8)                                               /**< (TWIHS_WPSR) Write Protection Violation Source Position */
#define TWIHS_WPSR_WPVSRC_Msk                 (_U_(0xFFFFFF) << TWIHS_WPSR_WPVSRC_Pos)             /**< (TWIHS_WPSR) Write Protection Violation Source Mask */
#define TWIHS_WPSR_WPVSRC(value)              (TWIHS_WPSR_WPVSRC_Msk & ((value) << TWIHS_WPSR_WPVSRC_Pos))
#define TWIHS_WPSR_Msk                        _U_(0xFFFFFF01)                                      /**< (TWIHS_WPSR) Register Mask  */


/** \brief TWIHS register offsets definitions */
#define TWIHS_CR_REG_OFST              (0x00)              /**< (TWIHS_CR) Control Register Offset */
#define TWIHS_MMR_REG_OFST             (0x04)              /**< (TWIHS_MMR) Master Mode Register Offset */
#define TWIHS_SMR_REG_OFST             (0x08)              /**< (TWIHS_SMR) Slave Mode Register Offset */
#define TWIHS_IADR_REG_OFST            (0x0C)              /**< (TWIHS_IADR) Internal Address Register Offset */
#define TWIHS_CWGR_REG_OFST            (0x10)              /**< (TWIHS_CWGR) Clock Waveform Generator Register Offset */
#define TWIHS_SR_REG_OFST              (0x20)              /**< (TWIHS_SR) Status Register Offset */
#define TWIHS_IER_REG_OFST             (0x24)              /**< (TWIHS_IER) Interrupt Enable Register Offset */
#define TWIHS_IDR_REG_OFST             (0x28)              /**< (TWIHS_IDR) Interrupt Disable Register Offset */
#define TWIHS_IMR_REG_OFST             (0x2C)              /**< (TWIHS_IMR) Interrupt Mask Register Offset */
#define TWIHS_RHR_REG_OFST             (0x30)              /**< (TWIHS_RHR) Receive Holding Register Offset */
#define TWIHS_THR_REG_OFST             (0x34)              /**< (TWIHS_THR) Transmit Holding Register Offset */
#define TWIHS_SMBTR_REG_OFST           (0x38)              /**< (TWIHS_SMBTR) SMBus Timing Register Offset */
#define TWIHS_ACR_REG_OFST             (0x40)              /**< (TWIHS_ACR) Alternative Command Register Offset */
#define TWIHS_FILTR_REG_OFST           (0x44)              /**< (TWIHS_FILTR) Filter Register Offset */
#define TWIHS_SWMR_REG_OFST            (0x4C)              /**< (TWIHS_SWMR) SleepWalking Matching Register Offset */
#define TWIHS_FMR_REG_OFST             (0x50)              /**< (TWIHS_FMR) FIFO Mode Register Offset */
#define TWIHS_FLR_REG_OFST             (0x54)              /**< (TWIHS_FLR) FIFO Level Register Offset */
#define TWIHS_FSR_REG_OFST             (0x60)              /**< (TWIHS_FSR) FIFO Status Register Offset */
#define TWIHS_FIER_REG_OFST            (0x64)              /**< (TWIHS_FIER) FIFO Interrupt Enable Register Offset */
#define TWIHS_FIDR_REG_OFST            (0x68)              /**< (TWIHS_FIDR) FIFO Interrupt Disable Register Offset */
#define TWIHS_FIMR_REG_OFST            (0x6C)              /**< (TWIHS_FIMR) FIFO Interrupt Mask Register Offset */
#define TWIHS_DR_REG_OFST              (0xD0)              /**< (TWIHS_DR) Debug Register Offset */
#define TWIHS_WPMR_REG_OFST            (0xE4)              /**< (TWIHS_WPMR) Write Protection Mode Register Offset */
#define TWIHS_WPSR_REG_OFST            (0xE8)              /**< (TWIHS_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TWIHS register API structure */
typedef struct
{
  __O   uint32_t                       TWIHS_CR;           /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       TWIHS_MMR;          /**< Offset: 0x04 (R/W  32) Master Mode Register */
  __IO  uint32_t                       TWIHS_SMR;          /**< Offset: 0x08 (R/W  32) Slave Mode Register */
  __IO  uint32_t                       TWIHS_IADR;         /**< Offset: 0x0C (R/W  32) Internal Address Register */
  __IO  uint32_t                       TWIHS_CWGR;         /**< Offset: 0x10 (R/W  32) Clock Waveform Generator Register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       TWIHS_SR;           /**< Offset: 0x20 (R/   32) Status Register */
  __O   uint32_t                       TWIHS_IER;          /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       TWIHS_IDR;          /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       TWIHS_IMR;          /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       TWIHS_RHR;          /**< Offset: 0x30 (R/   32) Receive Holding Register */
  __O   uint32_t                       TWIHS_THR;          /**< Offset: 0x34 ( /W  32) Transmit Holding Register */
  __IO  uint32_t                       TWIHS_SMBTR;        /**< Offset: 0x38 (R/W  32) SMBus Timing Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       TWIHS_ACR;          /**< Offset: 0x40 (R/W  32) Alternative Command Register */
  __IO  uint32_t                       TWIHS_FILTR;        /**< Offset: 0x44 (R/W  32) Filter Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       TWIHS_SWMR;         /**< Offset: 0x4C (R/W  32) SleepWalking Matching Register */
  __IO  uint32_t                       TWIHS_FMR;          /**< Offset: 0x50 (R/W  32) FIFO Mode Register */
  __I   uint32_t                       TWIHS_FLR;          /**< Offset: 0x54 (R/   32) FIFO Level Register */
  __I   uint8_t                        Reserved4[0x08];
  __I   uint32_t                       TWIHS_FSR;          /**< Offset: 0x60 (R/   32) FIFO Status Register */
  __O   uint32_t                       TWIHS_FIER;         /**< Offset: 0x64 ( /W  32) FIFO Interrupt Enable Register */
  __O   uint32_t                       TWIHS_FIDR;         /**< Offset: 0x68 ( /W  32) FIFO Interrupt Disable Register */
  __I   uint32_t                       TWIHS_FIMR;         /**< Offset: 0x6C (R/   32) FIFO Interrupt Mask Register */
  __I   uint8_t                        Reserved5[0x60];
  __I   uint32_t                       TWIHS_DR;           /**< Offset: 0xD0 (R/   32) Debug Register */
  __I   uint8_t                        Reserved6[0x10];
  __IO  uint32_t                       TWIHS_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       TWIHS_WPSR;         /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} twihs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_TWIHS_COMPONENT_H_ */
