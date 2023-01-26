/*
 * Component description for TWI
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
#ifndef _SAMG55_TWI_COMPONENT_H_
#define _SAMG55_TWI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TWI                                          */
/* ************************************************************************** */

/* -------- TWI_CR : (TWI Offset: 0x00) ( /W 32) Control Register -------- */
#define TWI_CR_START_Pos                      _U_(0)                                               /**< (TWI_CR) Send a START Condition Position */
#define TWI_CR_START_Msk                      (_U_(0x1) << TWI_CR_START_Pos)                       /**< (TWI_CR) Send a START Condition Mask */
#define TWI_CR_START(value)                   (TWI_CR_START_Msk & ((value) << TWI_CR_START_Pos))  
#define TWI_CR_STOP_Pos                       _U_(1)                                               /**< (TWI_CR) Send a STOP Condition Position */
#define TWI_CR_STOP_Msk                       (_U_(0x1) << TWI_CR_STOP_Pos)                        /**< (TWI_CR) Send a STOP Condition Mask */
#define TWI_CR_STOP(value)                    (TWI_CR_STOP_Msk & ((value) << TWI_CR_STOP_Pos))    
#define TWI_CR_MSEN_Pos                       _U_(2)                                               /**< (TWI_CR) TWI Master Mode Enabled Position */
#define TWI_CR_MSEN_Msk                       (_U_(0x1) << TWI_CR_MSEN_Pos)                        /**< (TWI_CR) TWI Master Mode Enabled Mask */
#define TWI_CR_MSEN(value)                    (TWI_CR_MSEN_Msk & ((value) << TWI_CR_MSEN_Pos))    
#define TWI_CR_MSDIS_Pos                      _U_(3)                                               /**< (TWI_CR) TWI Master Mode Disabled Position */
#define TWI_CR_MSDIS_Msk                      (_U_(0x1) << TWI_CR_MSDIS_Pos)                       /**< (TWI_CR) TWI Master Mode Disabled Mask */
#define TWI_CR_MSDIS(value)                   (TWI_CR_MSDIS_Msk & ((value) << TWI_CR_MSDIS_Pos))  
#define TWI_CR_SVEN_Pos                       _U_(4)                                               /**< (TWI_CR) TWI Slave Mode Enabled Position */
#define TWI_CR_SVEN_Msk                       (_U_(0x1) << TWI_CR_SVEN_Pos)                        /**< (TWI_CR) TWI Slave Mode Enabled Mask */
#define TWI_CR_SVEN(value)                    (TWI_CR_SVEN_Msk & ((value) << TWI_CR_SVEN_Pos))    
#define TWI_CR_SVDIS_Pos                      _U_(5)                                               /**< (TWI_CR) TWI Slave Mode Disabled Position */
#define TWI_CR_SVDIS_Msk                      (_U_(0x1) << TWI_CR_SVDIS_Pos)                       /**< (TWI_CR) TWI Slave Mode Disabled Mask */
#define TWI_CR_SVDIS(value)                   (TWI_CR_SVDIS_Msk & ((value) << TWI_CR_SVDIS_Pos))  
#define TWI_CR_QUICK_Pos                      _U_(6)                                               /**< (TWI_CR) SMBus Quick Command Position */
#define TWI_CR_QUICK_Msk                      (_U_(0x1) << TWI_CR_QUICK_Pos)                       /**< (TWI_CR) SMBus Quick Command Mask */
#define TWI_CR_QUICK(value)                   (TWI_CR_QUICK_Msk & ((value) << TWI_CR_QUICK_Pos))  
#define TWI_CR_SWRST_Pos                      _U_(7)                                               /**< (TWI_CR) Software Reset Position */
#define TWI_CR_SWRST_Msk                      (_U_(0x1) << TWI_CR_SWRST_Pos)                       /**< (TWI_CR) Software Reset Mask */
#define TWI_CR_SWRST(value)                   (TWI_CR_SWRST_Msk & ((value) << TWI_CR_SWRST_Pos))  
#define TWI_CR_HSEN_Pos                       _U_(8)                                               /**< (TWI_CR) TWI High-Speed Mode Enabled Position */
#define TWI_CR_HSEN_Msk                       (_U_(0x1) << TWI_CR_HSEN_Pos)                        /**< (TWI_CR) TWI High-Speed Mode Enabled Mask */
#define TWI_CR_HSEN(value)                    (TWI_CR_HSEN_Msk & ((value) << TWI_CR_HSEN_Pos))    
#define TWI_CR_HSDIS_Pos                      _U_(9)                                               /**< (TWI_CR) TWI High-Speed Mode Disabled Position */
#define TWI_CR_HSDIS_Msk                      (_U_(0x1) << TWI_CR_HSDIS_Pos)                       /**< (TWI_CR) TWI High-Speed Mode Disabled Mask */
#define TWI_CR_HSDIS(value)                   (TWI_CR_HSDIS_Msk & ((value) << TWI_CR_HSDIS_Pos))  
#define TWI_CR_SMBEN_Pos                      _U_(10)                                              /**< (TWI_CR) SMBus Mode Enabled Position */
#define TWI_CR_SMBEN_Msk                      (_U_(0x1) << TWI_CR_SMBEN_Pos)                       /**< (TWI_CR) SMBus Mode Enabled Mask */
#define TWI_CR_SMBEN(value)                   (TWI_CR_SMBEN_Msk & ((value) << TWI_CR_SMBEN_Pos))  
#define TWI_CR_SMBDIS_Pos                     _U_(11)                                              /**< (TWI_CR) SMBus Mode Disabled Position */
#define TWI_CR_SMBDIS_Msk                     (_U_(0x1) << TWI_CR_SMBDIS_Pos)                      /**< (TWI_CR) SMBus Mode Disabled Mask */
#define TWI_CR_SMBDIS(value)                  (TWI_CR_SMBDIS_Msk & ((value) << TWI_CR_SMBDIS_Pos))
#define TWI_CR_PECEN_Pos                      _U_(12)                                              /**< (TWI_CR) Packet Error Checking Enable Position */
#define TWI_CR_PECEN_Msk                      (_U_(0x1) << TWI_CR_PECEN_Pos)                       /**< (TWI_CR) Packet Error Checking Enable Mask */
#define TWI_CR_PECEN(value)                   (TWI_CR_PECEN_Msk & ((value) << TWI_CR_PECEN_Pos))  
#define TWI_CR_PECDIS_Pos                     _U_(13)                                              /**< (TWI_CR) Packet Error Checking Disable Position */
#define TWI_CR_PECDIS_Msk                     (_U_(0x1) << TWI_CR_PECDIS_Pos)                      /**< (TWI_CR) Packet Error Checking Disable Mask */
#define TWI_CR_PECDIS(value)                  (TWI_CR_PECDIS_Msk & ((value) << TWI_CR_PECDIS_Pos))
#define TWI_CR_PECRQ_Pos                      _U_(14)                                              /**< (TWI_CR) PEC Request Position */
#define TWI_CR_PECRQ_Msk                      (_U_(0x1) << TWI_CR_PECRQ_Pos)                       /**< (TWI_CR) PEC Request Mask */
#define TWI_CR_PECRQ(value)                   (TWI_CR_PECRQ_Msk & ((value) << TWI_CR_PECRQ_Pos))  
#define TWI_CR_CLEAR_Pos                      _U_(15)                                              /**< (TWI_CR) Bus CLEAR Command Position */
#define TWI_CR_CLEAR_Msk                      (_U_(0x1) << TWI_CR_CLEAR_Pos)                       /**< (TWI_CR) Bus CLEAR Command Mask */
#define TWI_CR_CLEAR(value)                   (TWI_CR_CLEAR_Msk & ((value) << TWI_CR_CLEAR_Pos))  
#define TWI_CR_ACMEN_Pos                      _U_(16)                                              /**< (TWI_CR) Alternative Command Mode Enable Position */
#define TWI_CR_ACMEN_Msk                      (_U_(0x1) << TWI_CR_ACMEN_Pos)                       /**< (TWI_CR) Alternative Command Mode Enable Mask */
#define TWI_CR_ACMEN(value)                   (TWI_CR_ACMEN_Msk & ((value) << TWI_CR_ACMEN_Pos))  
#define TWI_CR_ACMDIS_Pos                     _U_(17)                                              /**< (TWI_CR) Alternative Command Mode Disable Position */
#define TWI_CR_ACMDIS_Msk                     (_U_(0x1) << TWI_CR_ACMDIS_Pos)                      /**< (TWI_CR) Alternative Command Mode Disable Mask */
#define TWI_CR_ACMDIS(value)                  (TWI_CR_ACMDIS_Msk & ((value) << TWI_CR_ACMDIS_Pos))
#define TWI_CR_THRCLR_Pos                     _U_(24)                                              /**< (TWI_CR) Transmit Holding Register Clear Position */
#define TWI_CR_THRCLR_Msk                     (_U_(0x1) << TWI_CR_THRCLR_Pos)                      /**< (TWI_CR) Transmit Holding Register Clear Mask */
#define TWI_CR_THRCLR(value)                  (TWI_CR_THRCLR_Msk & ((value) << TWI_CR_THRCLR_Pos))
#define TWI_CR_LOCKCLR_Pos                    _U_(26)                                              /**< (TWI_CR) Lock Clear Position */
#define TWI_CR_LOCKCLR_Msk                    (_U_(0x1) << TWI_CR_LOCKCLR_Pos)                     /**< (TWI_CR) Lock Clear Mask */
#define TWI_CR_LOCKCLR(value)                 (TWI_CR_LOCKCLR_Msk & ((value) << TWI_CR_LOCKCLR_Pos))
#define TWI_CR_Msk                            _U_(0x0503FFFF)                                      /**< (TWI_CR) Register Mask  */


/* -------- TWI_MMR : (TWI Offset: 0x04) (R/W 32) Master Mode Register -------- */
#define TWI_MMR_IADRSZ_Pos                    _U_(8)                                               /**< (TWI_MMR) Internal Device Address Size Position */
#define TWI_MMR_IADRSZ_Msk                    (_U_(0x3) << TWI_MMR_IADRSZ_Pos)                     /**< (TWI_MMR) Internal Device Address Size Mask */
#define TWI_MMR_IADRSZ(value)                 (TWI_MMR_IADRSZ_Msk & ((value) << TWI_MMR_IADRSZ_Pos))
#define   TWI_MMR_IADRSZ_NONE_Val             _U_(0x0)                                             /**< (TWI_MMR) No internal device address  */
#define   TWI_MMR_IADRSZ_1_BYTE_Val           _U_(0x1)                                             /**< (TWI_MMR) One-byte internal device address  */
#define   TWI_MMR_IADRSZ_2_BYTE_Val           _U_(0x2)                                             /**< (TWI_MMR) Two-byte internal device address  */
#define   TWI_MMR_IADRSZ_3_BYTE_Val           _U_(0x3)                                             /**< (TWI_MMR) Three-byte internal device address  */
#define TWI_MMR_IADRSZ_NONE                   (TWI_MMR_IADRSZ_NONE_Val << TWI_MMR_IADRSZ_Pos)      /**< (TWI_MMR) No internal device address Position  */
#define TWI_MMR_IADRSZ_1_BYTE                 (TWI_MMR_IADRSZ_1_BYTE_Val << TWI_MMR_IADRSZ_Pos)    /**< (TWI_MMR) One-byte internal device address Position  */
#define TWI_MMR_IADRSZ_2_BYTE                 (TWI_MMR_IADRSZ_2_BYTE_Val << TWI_MMR_IADRSZ_Pos)    /**< (TWI_MMR) Two-byte internal device address Position  */
#define TWI_MMR_IADRSZ_3_BYTE                 (TWI_MMR_IADRSZ_3_BYTE_Val << TWI_MMR_IADRSZ_Pos)    /**< (TWI_MMR) Three-byte internal device address Position  */
#define TWI_MMR_MREAD_Pos                     _U_(12)                                              /**< (TWI_MMR) Master Read Direction Position */
#define TWI_MMR_MREAD_Msk                     (_U_(0x1) << TWI_MMR_MREAD_Pos)                      /**< (TWI_MMR) Master Read Direction Mask */
#define TWI_MMR_MREAD(value)                  (TWI_MMR_MREAD_Msk & ((value) << TWI_MMR_MREAD_Pos))
#define TWI_MMR_DADR_Pos                      _U_(16)                                              /**< (TWI_MMR) Device Address Position */
#define TWI_MMR_DADR_Msk                      (_U_(0x7F) << TWI_MMR_DADR_Pos)                      /**< (TWI_MMR) Device Address Mask */
#define TWI_MMR_DADR(value)                   (TWI_MMR_DADR_Msk & ((value) << TWI_MMR_DADR_Pos))  
#define TWI_MMR_Msk                           _U_(0x007F1300)                                      /**< (TWI_MMR) Register Mask  */


/* -------- TWI_SMR : (TWI Offset: 0x08) (R/W 32) Slave Mode Register -------- */
#define TWI_SMR_NACKEN_Pos                    _U_(0)                                               /**< (TWI_SMR) Slave Receiver Data Phase NACK Enable Position */
#define TWI_SMR_NACKEN_Msk                    (_U_(0x1) << TWI_SMR_NACKEN_Pos)                     /**< (TWI_SMR) Slave Receiver Data Phase NACK Enable Mask */
#define TWI_SMR_NACKEN(value)                 (TWI_SMR_NACKEN_Msk & ((value) << TWI_SMR_NACKEN_Pos))
#define TWI_SMR_SMDA_Pos                      _U_(2)                                               /**< (TWI_SMR) SMBus Default Address Position */
#define TWI_SMR_SMDA_Msk                      (_U_(0x1) << TWI_SMR_SMDA_Pos)                       /**< (TWI_SMR) SMBus Default Address Mask */
#define TWI_SMR_SMDA(value)                   (TWI_SMR_SMDA_Msk & ((value) << TWI_SMR_SMDA_Pos))  
#define TWI_SMR_SMHH_Pos                      _U_(3)                                               /**< (TWI_SMR) SMBus Host Header Position */
#define TWI_SMR_SMHH_Msk                      (_U_(0x1) << TWI_SMR_SMHH_Pos)                       /**< (TWI_SMR) SMBus Host Header Mask */
#define TWI_SMR_SMHH(value)                   (TWI_SMR_SMHH_Msk & ((value) << TWI_SMR_SMHH_Pos))  
#define TWI_SMR_SCLWSDIS_Pos                  _U_(6)                                               /**< (TWI_SMR) Clock Wait State Disable Position */
#define TWI_SMR_SCLWSDIS_Msk                  (_U_(0x1) << TWI_SMR_SCLWSDIS_Pos)                   /**< (TWI_SMR) Clock Wait State Disable Mask */
#define TWI_SMR_SCLWSDIS(value)               (TWI_SMR_SCLWSDIS_Msk & ((value) << TWI_SMR_SCLWSDIS_Pos))
#define TWI_SMR_MASK_Pos                      _U_(8)                                               /**< (TWI_SMR) Slave Address Mask Position */
#define TWI_SMR_MASK_Msk                      (_U_(0x7F) << TWI_SMR_MASK_Pos)                      /**< (TWI_SMR) Slave Address Mask Mask */
#define TWI_SMR_MASK(value)                   (TWI_SMR_MASK_Msk & ((value) << TWI_SMR_MASK_Pos))  
#define TWI_SMR_SADR_Pos                      _U_(16)                                              /**< (TWI_SMR) Slave Address Position */
#define TWI_SMR_SADR_Msk                      (_U_(0x7F) << TWI_SMR_SADR_Pos)                      /**< (TWI_SMR) Slave Address Mask */
#define TWI_SMR_SADR(value)                   (TWI_SMR_SADR_Msk & ((value) << TWI_SMR_SADR_Pos))  
#define TWI_SMR_SADR1EN_Pos                   _U_(28)                                              /**< (TWI_SMR) Slave Address 1 Enable Position */
#define TWI_SMR_SADR1EN_Msk                   (_U_(0x1) << TWI_SMR_SADR1EN_Pos)                    /**< (TWI_SMR) Slave Address 1 Enable Mask */
#define TWI_SMR_SADR1EN(value)                (TWI_SMR_SADR1EN_Msk & ((value) << TWI_SMR_SADR1EN_Pos))
#define TWI_SMR_SADR2EN_Pos                   _U_(29)                                              /**< (TWI_SMR) Slave Address 2 Enable Position */
#define TWI_SMR_SADR2EN_Msk                   (_U_(0x1) << TWI_SMR_SADR2EN_Pos)                    /**< (TWI_SMR) Slave Address 2 Enable Mask */
#define TWI_SMR_SADR2EN(value)                (TWI_SMR_SADR2EN_Msk & ((value) << TWI_SMR_SADR2EN_Pos))
#define TWI_SMR_SADR3EN_Pos                   _U_(30)                                              /**< (TWI_SMR) Slave Address 3 Enable Position */
#define TWI_SMR_SADR3EN_Msk                   (_U_(0x1) << TWI_SMR_SADR3EN_Pos)                    /**< (TWI_SMR) Slave Address 3 Enable Mask */
#define TWI_SMR_SADR3EN(value)                (TWI_SMR_SADR3EN_Msk & ((value) << TWI_SMR_SADR3EN_Pos))
#define TWI_SMR_DATAMEN_Pos                   _U_(31)                                              /**< (TWI_SMR) Data Matching Enable Position */
#define TWI_SMR_DATAMEN_Msk                   (_U_(0x1) << TWI_SMR_DATAMEN_Pos)                    /**< (TWI_SMR) Data Matching Enable Mask */
#define TWI_SMR_DATAMEN(value)                (TWI_SMR_DATAMEN_Msk & ((value) << TWI_SMR_DATAMEN_Pos))
#define TWI_SMR_Msk                           _U_(0xF07F7F4D)                                      /**< (TWI_SMR) Register Mask  */


/* -------- TWI_IADR : (TWI Offset: 0x0C) (R/W 32) Internal Address Register -------- */
#define TWI_IADR_IADR_Pos                     _U_(0)                                               /**< (TWI_IADR) Internal Address Position */
#define TWI_IADR_IADR_Msk                     (_U_(0xFFFFFF) << TWI_IADR_IADR_Pos)                 /**< (TWI_IADR) Internal Address Mask */
#define TWI_IADR_IADR(value)                  (TWI_IADR_IADR_Msk & ((value) << TWI_IADR_IADR_Pos))
#define TWI_IADR_Msk                          _U_(0x00FFFFFF)                                      /**< (TWI_IADR) Register Mask  */


/* -------- TWI_CWGR : (TWI Offset: 0x10) (R/W 32) Clock Waveform Generator Register -------- */
#define TWI_CWGR_CLDIV_Pos                    _U_(0)                                               /**< (TWI_CWGR) Clock Low Divider Position */
#define TWI_CWGR_CLDIV_Msk                    (_U_(0xFF) << TWI_CWGR_CLDIV_Pos)                    /**< (TWI_CWGR) Clock Low Divider Mask */
#define TWI_CWGR_CLDIV(value)                 (TWI_CWGR_CLDIV_Msk & ((value) << TWI_CWGR_CLDIV_Pos))
#define TWI_CWGR_CHDIV_Pos                    _U_(8)                                               /**< (TWI_CWGR) Clock High Divider Position */
#define TWI_CWGR_CHDIV_Msk                    (_U_(0xFF) << TWI_CWGR_CHDIV_Pos)                    /**< (TWI_CWGR) Clock High Divider Mask */
#define TWI_CWGR_CHDIV(value)                 (TWI_CWGR_CHDIV_Msk & ((value) << TWI_CWGR_CHDIV_Pos))
#define TWI_CWGR_CKDIV_Pos                    _U_(16)                                              /**< (TWI_CWGR) Clock Divider Position */
#define TWI_CWGR_CKDIV_Msk                    (_U_(0x7) << TWI_CWGR_CKDIV_Pos)                     /**< (TWI_CWGR) Clock Divider Mask */
#define TWI_CWGR_CKDIV(value)                 (TWI_CWGR_CKDIV_Msk & ((value) << TWI_CWGR_CKDIV_Pos))
#define TWI_CWGR_BRSRCCLK_Pos                 _U_(20)                                              /**< (TWI_CWGR) Bit Rate Source Clock Position */
#define TWI_CWGR_BRSRCCLK_Msk                 (_U_(0x1) << TWI_CWGR_BRSRCCLK_Pos)                  /**< (TWI_CWGR) Bit Rate Source Clock Mask */
#define TWI_CWGR_BRSRCCLK(value)              (TWI_CWGR_BRSRCCLK_Msk & ((value) << TWI_CWGR_BRSRCCLK_Pos))
#define   TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val    _U_(0x0)                                             /**< (TWI_CWGR) The peripheral clock is the source clock for the bit rate generation.  */
#define   TWI_CWGR_BRSRCCLK_PCK_Val           _U_(0x1)                                             /**< (TWI_CWGR) Programmable clock is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define TWI_CWGR_BRSRCCLK_PERIPH_CLK          (TWI_CWGR_BRSRCCLK_PERIPH_CLK_Val << TWI_CWGR_BRSRCCLK_Pos) /**< (TWI_CWGR) The peripheral clock is the source clock for the bit rate generation. Position  */
#define TWI_CWGR_BRSRCCLK_PCK                 (TWI_CWGR_BRSRCCLK_PCK_Val << TWI_CWGR_BRSRCCLK_Pos) /**< (TWI_CWGR) Programmable clock is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position  */
#define TWI_CWGR_HOLD_Pos                     _U_(24)                                              /**< (TWI_CWGR) TWD Hold Time Versus TWCK Falling Position */
#define TWI_CWGR_HOLD_Msk                     (_U_(0x1F) << TWI_CWGR_HOLD_Pos)                     /**< (TWI_CWGR) TWD Hold Time Versus TWCK Falling Mask */
#define TWI_CWGR_HOLD(value)                  (TWI_CWGR_HOLD_Msk & ((value) << TWI_CWGR_HOLD_Pos))
#define TWI_CWGR_Msk                          _U_(0x1F17FFFF)                                      /**< (TWI_CWGR) Register Mask  */


/* -------- TWI_SR : (TWI Offset: 0x20) ( R/ 32) Status Register -------- */
#define TWI_SR_TXCOMP_Pos                     _U_(0)                                               /**< (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Position */
#define TWI_SR_TXCOMP_Msk                     (_U_(0x1) << TWI_SR_TXCOMP_Pos)                      /**< (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXCOMP(value)                  (TWI_SR_TXCOMP_Msk & ((value) << TWI_SR_TXCOMP_Pos))
#define TWI_SR_RXRDY_Pos                      _U_(1)                                               /**< (TWI_SR) Receive Holding Register Ready (cleared when reading TWI_RHR) Position */
#define TWI_SR_RXRDY_Msk                      (_U_(0x1) << TWI_SR_RXRDY_Pos)                       /**< (TWI_SR) Receive Holding Register Ready (cleared when reading TWI_RHR) Mask */
#define TWI_SR_RXRDY(value)                   (TWI_SR_RXRDY_Msk & ((value) << TWI_SR_RXRDY_Pos))  
#define TWI_SR_TXRDY_Pos                      _U_(2)                                               /**< (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Position */
#define TWI_SR_TXRDY_Msk                      (_U_(0x1) << TWI_SR_TXRDY_Pos)                       /**< (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXRDY(value)                   (TWI_SR_TXRDY_Msk & ((value) << TWI_SR_TXRDY_Pos))  
#define TWI_SR_SVREAD_Pos                     _U_(3)                                               /**< (TWI_SR) Slave Read Position */
#define TWI_SR_SVREAD_Msk                     (_U_(0x1) << TWI_SR_SVREAD_Pos)                      /**< (TWI_SR) Slave Read Mask */
#define TWI_SR_SVREAD(value)                  (TWI_SR_SVREAD_Msk & ((value) << TWI_SR_SVREAD_Pos))
#define TWI_SR_SVACC_Pos                      _U_(4)                                               /**< (TWI_SR) Slave Access Position */
#define TWI_SR_SVACC_Msk                      (_U_(0x1) << TWI_SR_SVACC_Pos)                       /**< (TWI_SR) Slave Access Mask */
#define TWI_SR_SVACC(value)                   (TWI_SR_SVACC_Msk & ((value) << TWI_SR_SVACC_Pos))  
#define TWI_SR_GACC_Pos                       _U_(5)                                               /**< (TWI_SR) General Call Access (cleared on read) Position */
#define TWI_SR_GACC_Msk                       (_U_(0x1) << TWI_SR_GACC_Pos)                        /**< (TWI_SR) General Call Access (cleared on read) Mask */
#define TWI_SR_GACC(value)                    (TWI_SR_GACC_Msk & ((value) << TWI_SR_GACC_Pos))    
#define TWI_SR_OVRE_Pos                       _U_(6)                                               /**< (TWI_SR) Overrun Error (cleared on read) Position */
#define TWI_SR_OVRE_Msk                       (_U_(0x1) << TWI_SR_OVRE_Pos)                        /**< (TWI_SR) Overrun Error (cleared on read) Mask */
#define TWI_SR_OVRE(value)                    (TWI_SR_OVRE_Msk & ((value) << TWI_SR_OVRE_Pos))    
#define TWI_SR_UNRE_Pos                       _U_(7)                                               /**< (TWI_SR) Underrun Error (cleared on read) Position */
#define TWI_SR_UNRE_Msk                       (_U_(0x1) << TWI_SR_UNRE_Pos)                        /**< (TWI_SR) Underrun Error (cleared on read) Mask */
#define TWI_SR_UNRE(value)                    (TWI_SR_UNRE_Msk & ((value) << TWI_SR_UNRE_Pos))    
#define TWI_SR_NACK_Pos                       _U_(8)                                               /**< (TWI_SR) Not Acknowledged (cleared on read) Position */
#define TWI_SR_NACK_Msk                       (_U_(0x1) << TWI_SR_NACK_Pos)                        /**< (TWI_SR) Not Acknowledged (cleared on read) Mask */
#define TWI_SR_NACK(value)                    (TWI_SR_NACK_Msk & ((value) << TWI_SR_NACK_Pos))    
#define TWI_SR_ARBLST_Pos                     _U_(9)                                               /**< (TWI_SR) Arbitration Lost (cleared on read) Position */
#define TWI_SR_ARBLST_Msk                     (_U_(0x1) << TWI_SR_ARBLST_Pos)                      /**< (TWI_SR) Arbitration Lost (cleared on read) Mask */
#define TWI_SR_ARBLST(value)                  (TWI_SR_ARBLST_Msk & ((value) << TWI_SR_ARBLST_Pos))
#define TWI_SR_SCLWS_Pos                      _U_(10)                                              /**< (TWI_SR) Clock Wait State Position */
#define TWI_SR_SCLWS_Msk                      (_U_(0x1) << TWI_SR_SCLWS_Pos)                       /**< (TWI_SR) Clock Wait State Mask */
#define TWI_SR_SCLWS(value)                   (TWI_SR_SCLWS_Msk & ((value) << TWI_SR_SCLWS_Pos))  
#define TWI_SR_EOSACC_Pos                     _U_(11)                                              /**< (TWI_SR) End Of Slave Access (cleared on read) Position */
#define TWI_SR_EOSACC_Msk                     (_U_(0x1) << TWI_SR_EOSACC_Pos)                      /**< (TWI_SR) End Of Slave Access (cleared on read) Mask */
#define TWI_SR_EOSACC(value)                  (TWI_SR_EOSACC_Msk & ((value) << TWI_SR_EOSACC_Pos))
#define TWI_SR_ENDRX_Pos                      _U_(12)                                              /**< (TWI_SR) End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) Position */
#define TWI_SR_ENDRX_Msk                      (_U_(0x1) << TWI_SR_ENDRX_Pos)                       /**< (TWI_SR) End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) Mask */
#define TWI_SR_ENDRX(value)                   (TWI_SR_ENDRX_Msk & ((value) << TWI_SR_ENDRX_Pos))  
#define TWI_SR_ENDTX_Pos                      _U_(13)                                              /**< (TWI_SR) End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) Position */
#define TWI_SR_ENDTX_Msk                      (_U_(0x1) << TWI_SR_ENDTX_Pos)                       /**< (TWI_SR) End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) Mask */
#define TWI_SR_ENDTX(value)                   (TWI_SR_ENDTX_Msk & ((value) << TWI_SR_ENDTX_Pos))  
#define TWI_SR_RXBUFF_Pos                     _U_(14)                                              /**< (TWI_SR) RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) Position */
#define TWI_SR_RXBUFF_Msk                     (_U_(0x1) << TWI_SR_RXBUFF_Pos)                      /**< (TWI_SR) RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) Mask */
#define TWI_SR_RXBUFF(value)                  (TWI_SR_RXBUFF_Msk & ((value) << TWI_SR_RXBUFF_Pos))
#define TWI_SR_TXBUFE_Pos                     _U_(15)                                              /**< (TWI_SR) TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) Position */
#define TWI_SR_TXBUFE_Msk                     (_U_(0x1) << TWI_SR_TXBUFE_Pos)                      /**< (TWI_SR) TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) Mask */
#define TWI_SR_TXBUFE(value)                  (TWI_SR_TXBUFE_Msk & ((value) << TWI_SR_TXBUFE_Pos))
#define TWI_SR_MCACK_Pos                      _U_(16)                                              /**< (TWI_SR) Master Code Acknowledge (cleared on read) Position */
#define TWI_SR_MCACK_Msk                      (_U_(0x1) << TWI_SR_MCACK_Pos)                       /**< (TWI_SR) Master Code Acknowledge (cleared on read) Mask */
#define TWI_SR_MCACK(value)                   (TWI_SR_MCACK_Msk & ((value) << TWI_SR_MCACK_Pos))  
#define TWI_SR_TOUT_Pos                       _U_(18)                                              /**< (TWI_SR) Timeout Error (cleared on read) Position */
#define TWI_SR_TOUT_Msk                       (_U_(0x1) << TWI_SR_TOUT_Pos)                        /**< (TWI_SR) Timeout Error (cleared on read) Mask */
#define TWI_SR_TOUT(value)                    (TWI_SR_TOUT_Msk & ((value) << TWI_SR_TOUT_Pos))    
#define TWI_SR_PECERR_Pos                     _U_(19)                                              /**< (TWI_SR) PEC Error (cleared on read) Position */
#define TWI_SR_PECERR_Msk                     (_U_(0x1) << TWI_SR_PECERR_Pos)                      /**< (TWI_SR) PEC Error (cleared on read) Mask */
#define TWI_SR_PECERR(value)                  (TWI_SR_PECERR_Msk & ((value) << TWI_SR_PECERR_Pos))
#define TWI_SR_SMBDAM_Pos                     _U_(20)                                              /**< (TWI_SR) SMBus Default Address Match (cleared on read) Position */
#define TWI_SR_SMBDAM_Msk                     (_U_(0x1) << TWI_SR_SMBDAM_Pos)                      /**< (TWI_SR) SMBus Default Address Match (cleared on read) Mask */
#define TWI_SR_SMBDAM(value)                  (TWI_SR_SMBDAM_Msk & ((value) << TWI_SR_SMBDAM_Pos))
#define TWI_SR_SMBHHM_Pos                     _U_(21)                                              /**< (TWI_SR) SMBus Host Header Address Match (cleared on read) Position */
#define TWI_SR_SMBHHM_Msk                     (_U_(0x1) << TWI_SR_SMBHHM_Pos)                      /**< (TWI_SR) SMBus Host Header Address Match (cleared on read) Mask */
#define TWI_SR_SMBHHM(value)                  (TWI_SR_SMBHHM_Msk & ((value) << TWI_SR_SMBHHM_Pos))
#define TWI_SR_LOCK_Pos                       _U_(23)                                              /**< (TWI_SR) TWI Lock due to Frame Errors Position */
#define TWI_SR_LOCK_Msk                       (_U_(0x1) << TWI_SR_LOCK_Pos)                        /**< (TWI_SR) TWI Lock due to Frame Errors Mask */
#define TWI_SR_LOCK(value)                    (TWI_SR_LOCK_Msk & ((value) << TWI_SR_LOCK_Pos))    
#define TWI_SR_SCL_Pos                        _U_(24)                                              /**< (TWI_SR) SCL line value Position */
#define TWI_SR_SCL_Msk                        (_U_(0x1) << TWI_SR_SCL_Pos)                         /**< (TWI_SR) SCL line value Mask */
#define TWI_SR_SCL(value)                     (TWI_SR_SCL_Msk & ((value) << TWI_SR_SCL_Pos))      
#define TWI_SR_SDA_Pos                        _U_(25)                                              /**< (TWI_SR) SDA line value Position */
#define TWI_SR_SDA_Msk                        (_U_(0x1) << TWI_SR_SDA_Pos)                         /**< (TWI_SR) SDA line value Mask */
#define TWI_SR_SDA(value)                     (TWI_SR_SDA_Msk & ((value) << TWI_SR_SDA_Pos))      
#define TWI_SR_Msk                            _U_(0x03BDFFFF)                                      /**< (TWI_SR) Register Mask  */


/* -------- TWI_IER : (TWI Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define TWI_IER_TXCOMP_Pos                    _U_(0)                                               /**< (TWI_IER) Transmission Completed Interrupt Enable Position */
#define TWI_IER_TXCOMP_Msk                    (_U_(0x1) << TWI_IER_TXCOMP_Pos)                     /**< (TWI_IER) Transmission Completed Interrupt Enable Mask */
#define TWI_IER_TXCOMP(value)                 (TWI_IER_TXCOMP_Msk & ((value) << TWI_IER_TXCOMP_Pos))
#define TWI_IER_RXRDY_Pos                     _U_(1)                                               /**< (TWI_IER) Receive Holding Register Ready Interrupt Enable Position */
#define TWI_IER_RXRDY_Msk                     (_U_(0x1) << TWI_IER_RXRDY_Pos)                      /**< (TWI_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_RXRDY(value)                  (TWI_IER_RXRDY_Msk & ((value) << TWI_IER_RXRDY_Pos))
#define TWI_IER_TXRDY_Pos                     _U_(2)                                               /**< (TWI_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define TWI_IER_TXRDY_Msk                     (_U_(0x1) << TWI_IER_TXRDY_Pos)                      /**< (TWI_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_TXRDY(value)                  (TWI_IER_TXRDY_Msk & ((value) << TWI_IER_TXRDY_Pos))
#define TWI_IER_SVACC_Pos                     _U_(4)                                               /**< (TWI_IER) Slave Access Interrupt Enable Position */
#define TWI_IER_SVACC_Msk                     (_U_(0x1) << TWI_IER_SVACC_Pos)                      /**< (TWI_IER) Slave Access Interrupt Enable Mask */
#define TWI_IER_SVACC(value)                  (TWI_IER_SVACC_Msk & ((value) << TWI_IER_SVACC_Pos))
#define TWI_IER_GACC_Pos                      _U_(5)                                               /**< (TWI_IER) General Call Access Interrupt Enable Position */
#define TWI_IER_GACC_Msk                      (_U_(0x1) << TWI_IER_GACC_Pos)                       /**< (TWI_IER) General Call Access Interrupt Enable Mask */
#define TWI_IER_GACC(value)                   (TWI_IER_GACC_Msk & ((value) << TWI_IER_GACC_Pos))  
#define TWI_IER_OVRE_Pos                      _U_(6)                                               /**< (TWI_IER) Overrun Error Interrupt Enable Position */
#define TWI_IER_OVRE_Msk                      (_U_(0x1) << TWI_IER_OVRE_Pos)                       /**< (TWI_IER) Overrun Error Interrupt Enable Mask */
#define TWI_IER_OVRE(value)                   (TWI_IER_OVRE_Msk & ((value) << TWI_IER_OVRE_Pos))  
#define TWI_IER_UNRE_Pos                      _U_(7)                                               /**< (TWI_IER) Underrun Error Interrupt Enable Position */
#define TWI_IER_UNRE_Msk                      (_U_(0x1) << TWI_IER_UNRE_Pos)                       /**< (TWI_IER) Underrun Error Interrupt Enable Mask */
#define TWI_IER_UNRE(value)                   (TWI_IER_UNRE_Msk & ((value) << TWI_IER_UNRE_Pos))  
#define TWI_IER_NACK_Pos                      _U_(8)                                               /**< (TWI_IER) Not Acknowledge Interrupt Enable Position */
#define TWI_IER_NACK_Msk                      (_U_(0x1) << TWI_IER_NACK_Pos)                       /**< (TWI_IER) Not Acknowledge Interrupt Enable Mask */
#define TWI_IER_NACK(value)                   (TWI_IER_NACK_Msk & ((value) << TWI_IER_NACK_Pos))  
#define TWI_IER_ARBLST_Pos                    _U_(9)                                               /**< (TWI_IER) Arbitration Lost Interrupt Enable Position */
#define TWI_IER_ARBLST_Msk                    (_U_(0x1) << TWI_IER_ARBLST_Pos)                     /**< (TWI_IER) Arbitration Lost Interrupt Enable Mask */
#define TWI_IER_ARBLST(value)                 (TWI_IER_ARBLST_Msk & ((value) << TWI_IER_ARBLST_Pos))
#define TWI_IER_SCL_WS_Pos                    _U_(10)                                              /**< (TWI_IER) Clock Wait State Interrupt Enable Position */
#define TWI_IER_SCL_WS_Msk                    (_U_(0x1) << TWI_IER_SCL_WS_Pos)                     /**< (TWI_IER) Clock Wait State Interrupt Enable Mask */
#define TWI_IER_SCL_WS(value)                 (TWI_IER_SCL_WS_Msk & ((value) << TWI_IER_SCL_WS_Pos))
#define TWI_IER_EOSACC_Pos                    _U_(11)                                              /**< (TWI_IER) End Of Slave Access Interrupt Enable Position */
#define TWI_IER_EOSACC_Msk                    (_U_(0x1) << TWI_IER_EOSACC_Pos)                     /**< (TWI_IER) End Of Slave Access Interrupt Enable Mask */
#define TWI_IER_EOSACC(value)                 (TWI_IER_EOSACC_Msk & ((value) << TWI_IER_EOSACC_Pos))
#define TWI_IER_ENDRX_Pos                     _U_(12)                                              /**< (TWI_IER) End of Receive Buffer Interrupt Enable Position */
#define TWI_IER_ENDRX_Msk                     (_U_(0x1) << TWI_IER_ENDRX_Pos)                      /**< (TWI_IER) End of Receive Buffer Interrupt Enable Mask */
#define TWI_IER_ENDRX(value)                  (TWI_IER_ENDRX_Msk & ((value) << TWI_IER_ENDRX_Pos))
#define TWI_IER_ENDTX_Pos                     _U_(13)                                              /**< (TWI_IER) End of Transmit Buffer Interrupt Enable Position */
#define TWI_IER_ENDTX_Msk                     (_U_(0x1) << TWI_IER_ENDTX_Pos)                      /**< (TWI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define TWI_IER_ENDTX(value)                  (TWI_IER_ENDTX_Msk & ((value) << TWI_IER_ENDTX_Pos))
#define TWI_IER_RXBUFF_Pos                    _U_(14)                                              /**< (TWI_IER) Receive Buffer Full Interrupt Enable Position */
#define TWI_IER_RXBUFF_Msk                    (_U_(0x1) << TWI_IER_RXBUFF_Pos)                     /**< (TWI_IER) Receive Buffer Full Interrupt Enable Mask */
#define TWI_IER_RXBUFF(value)                 (TWI_IER_RXBUFF_Msk & ((value) << TWI_IER_RXBUFF_Pos))
#define TWI_IER_TXBUFE_Pos                    _U_(15)                                              /**< (TWI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define TWI_IER_TXBUFE_Msk                    (_U_(0x1) << TWI_IER_TXBUFE_Pos)                     /**< (TWI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define TWI_IER_TXBUFE(value)                 (TWI_IER_TXBUFE_Msk & ((value) << TWI_IER_TXBUFE_Pos))
#define TWI_IER_MCACK_Pos                     _U_(16)                                              /**< (TWI_IER) Master Code Acknowledge Interrupt Enable Position */
#define TWI_IER_MCACK_Msk                     (_U_(0x1) << TWI_IER_MCACK_Pos)                      /**< (TWI_IER) Master Code Acknowledge Interrupt Enable Mask */
#define TWI_IER_MCACK(value)                  (TWI_IER_MCACK_Msk & ((value) << TWI_IER_MCACK_Pos))
#define TWI_IER_TOUT_Pos                      _U_(18)                                              /**< (TWI_IER) Timeout Error Interrupt Enable Position */
#define TWI_IER_TOUT_Msk                      (_U_(0x1) << TWI_IER_TOUT_Pos)                       /**< (TWI_IER) Timeout Error Interrupt Enable Mask */
#define TWI_IER_TOUT(value)                   (TWI_IER_TOUT_Msk & ((value) << TWI_IER_TOUT_Pos))  
#define TWI_IER_PECERR_Pos                    _U_(19)                                              /**< (TWI_IER) PEC Error Interrupt Enable Position */
#define TWI_IER_PECERR_Msk                    (_U_(0x1) << TWI_IER_PECERR_Pos)                     /**< (TWI_IER) PEC Error Interrupt Enable Mask */
#define TWI_IER_PECERR(value)                 (TWI_IER_PECERR_Msk & ((value) << TWI_IER_PECERR_Pos))
#define TWI_IER_SMBDAM_Pos                    _U_(20)                                              /**< (TWI_IER) SMBus Default Address Match Interrupt Enable Position */
#define TWI_IER_SMBDAM_Msk                    (_U_(0x1) << TWI_IER_SMBDAM_Pos)                     /**< (TWI_IER) SMBus Default Address Match Interrupt Enable Mask */
#define TWI_IER_SMBDAM(value)                 (TWI_IER_SMBDAM_Msk & ((value) << TWI_IER_SMBDAM_Pos))
#define TWI_IER_SMBHHM_Pos                    _U_(21)                                              /**< (TWI_IER) SMBus Host Header Address Match Interrupt Enable Position */
#define TWI_IER_SMBHHM_Msk                    (_U_(0x1) << TWI_IER_SMBHHM_Pos)                     /**< (TWI_IER) SMBus Host Header Address Match Interrupt Enable Mask */
#define TWI_IER_SMBHHM(value)                 (TWI_IER_SMBHHM_Msk & ((value) << TWI_IER_SMBHHM_Pos))
#define TWI_IER_Msk                           _U_(0x003DFFF7)                                      /**< (TWI_IER) Register Mask  */


/* -------- TWI_IDR : (TWI Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define TWI_IDR_TXCOMP_Pos                    _U_(0)                                               /**< (TWI_IDR) Transmission Completed Interrupt Disable Position */
#define TWI_IDR_TXCOMP_Msk                    (_U_(0x1) << TWI_IDR_TXCOMP_Pos)                     /**< (TWI_IDR) Transmission Completed Interrupt Disable Mask */
#define TWI_IDR_TXCOMP(value)                 (TWI_IDR_TXCOMP_Msk & ((value) << TWI_IDR_TXCOMP_Pos))
#define TWI_IDR_RXRDY_Pos                     _U_(1)                                               /**< (TWI_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_RXRDY_Msk                     (_U_(0x1) << TWI_IDR_RXRDY_Pos)                      /**< (TWI_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_RXRDY(value)                  (TWI_IDR_RXRDY_Msk & ((value) << TWI_IDR_RXRDY_Pos))
#define TWI_IDR_TXRDY_Pos                     _U_(2)                                               /**< (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_TXRDY_Msk                     (_U_(0x1) << TWI_IDR_TXRDY_Pos)                      /**< (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_TXRDY(value)                  (TWI_IDR_TXRDY_Msk & ((value) << TWI_IDR_TXRDY_Pos))
#define TWI_IDR_SVACC_Pos                     _U_(4)                                               /**< (TWI_IDR) Slave Access Interrupt Disable Position */
#define TWI_IDR_SVACC_Msk                     (_U_(0x1) << TWI_IDR_SVACC_Pos)                      /**< (TWI_IDR) Slave Access Interrupt Disable Mask */
#define TWI_IDR_SVACC(value)                  (TWI_IDR_SVACC_Msk & ((value) << TWI_IDR_SVACC_Pos))
#define TWI_IDR_GACC_Pos                      _U_(5)                                               /**< (TWI_IDR) General Call Access Interrupt Disable Position */
#define TWI_IDR_GACC_Msk                      (_U_(0x1) << TWI_IDR_GACC_Pos)                       /**< (TWI_IDR) General Call Access Interrupt Disable Mask */
#define TWI_IDR_GACC(value)                   (TWI_IDR_GACC_Msk & ((value) << TWI_IDR_GACC_Pos))  
#define TWI_IDR_OVRE_Pos                      _U_(6)                                               /**< (TWI_IDR) Overrun Error Interrupt Disable Position */
#define TWI_IDR_OVRE_Msk                      (_U_(0x1) << TWI_IDR_OVRE_Pos)                       /**< (TWI_IDR) Overrun Error Interrupt Disable Mask */
#define TWI_IDR_OVRE(value)                   (TWI_IDR_OVRE_Msk & ((value) << TWI_IDR_OVRE_Pos))  
#define TWI_IDR_UNRE_Pos                      _U_(7)                                               /**< (TWI_IDR) Underrun Error Interrupt Disable Position */
#define TWI_IDR_UNRE_Msk                      (_U_(0x1) << TWI_IDR_UNRE_Pos)                       /**< (TWI_IDR) Underrun Error Interrupt Disable Mask */
#define TWI_IDR_UNRE(value)                   (TWI_IDR_UNRE_Msk & ((value) << TWI_IDR_UNRE_Pos))  
#define TWI_IDR_NACK_Pos                      _U_(8)                                               /**< (TWI_IDR) Not Acknowledge Interrupt Disable Position */
#define TWI_IDR_NACK_Msk                      (_U_(0x1) << TWI_IDR_NACK_Pos)                       /**< (TWI_IDR) Not Acknowledge Interrupt Disable Mask */
#define TWI_IDR_NACK(value)                   (TWI_IDR_NACK_Msk & ((value) << TWI_IDR_NACK_Pos))  
#define TWI_IDR_ARBLST_Pos                    _U_(9)                                               /**< (TWI_IDR) Arbitration Lost Interrupt Disable Position */
#define TWI_IDR_ARBLST_Msk                    (_U_(0x1) << TWI_IDR_ARBLST_Pos)                     /**< (TWI_IDR) Arbitration Lost Interrupt Disable Mask */
#define TWI_IDR_ARBLST(value)                 (TWI_IDR_ARBLST_Msk & ((value) << TWI_IDR_ARBLST_Pos))
#define TWI_IDR_SCL_WS_Pos                    _U_(10)                                              /**< (TWI_IDR) Clock Wait State Interrupt Disable Position */
#define TWI_IDR_SCL_WS_Msk                    (_U_(0x1) << TWI_IDR_SCL_WS_Pos)                     /**< (TWI_IDR) Clock Wait State Interrupt Disable Mask */
#define TWI_IDR_SCL_WS(value)                 (TWI_IDR_SCL_WS_Msk & ((value) << TWI_IDR_SCL_WS_Pos))
#define TWI_IDR_EOSACC_Pos                    _U_(11)                                              /**< (TWI_IDR) End Of Slave Access Interrupt Disable Position */
#define TWI_IDR_EOSACC_Msk                    (_U_(0x1) << TWI_IDR_EOSACC_Pos)                     /**< (TWI_IDR) End Of Slave Access Interrupt Disable Mask */
#define TWI_IDR_EOSACC(value)                 (TWI_IDR_EOSACC_Msk & ((value) << TWI_IDR_EOSACC_Pos))
#define TWI_IDR_ENDRX_Pos                     _U_(12)                                              /**< (TWI_IDR) End of Receive Buffer Interrupt Disable Position */
#define TWI_IDR_ENDRX_Msk                     (_U_(0x1) << TWI_IDR_ENDRX_Pos)                      /**< (TWI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDRX(value)                  (TWI_IDR_ENDRX_Msk & ((value) << TWI_IDR_ENDRX_Pos))
#define TWI_IDR_ENDTX_Pos                     _U_(13)                                              /**< (TWI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define TWI_IDR_ENDTX_Msk                     (_U_(0x1) << TWI_IDR_ENDTX_Pos)                      /**< (TWI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDTX(value)                  (TWI_IDR_ENDTX_Msk & ((value) << TWI_IDR_ENDTX_Pos))
#define TWI_IDR_RXBUFF_Pos                    _U_(14)                                              /**< (TWI_IDR) Receive Buffer Full Interrupt Disable Position */
#define TWI_IDR_RXBUFF_Msk                    (_U_(0x1) << TWI_IDR_RXBUFF_Pos)                     /**< (TWI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define TWI_IDR_RXBUFF(value)                 (TWI_IDR_RXBUFF_Msk & ((value) << TWI_IDR_RXBUFF_Pos))
#define TWI_IDR_TXBUFE_Pos                    _U_(15)                                              /**< (TWI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define TWI_IDR_TXBUFE_Msk                    (_U_(0x1) << TWI_IDR_TXBUFE_Pos)                     /**< (TWI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define TWI_IDR_TXBUFE(value)                 (TWI_IDR_TXBUFE_Msk & ((value) << TWI_IDR_TXBUFE_Pos))
#define TWI_IDR_MCACK_Pos                     _U_(16)                                              /**< (TWI_IDR) Master Code Acknowledge Interrupt Disable Position */
#define TWI_IDR_MCACK_Msk                     (_U_(0x1) << TWI_IDR_MCACK_Pos)                      /**< (TWI_IDR) Master Code Acknowledge Interrupt Disable Mask */
#define TWI_IDR_MCACK(value)                  (TWI_IDR_MCACK_Msk & ((value) << TWI_IDR_MCACK_Pos))
#define TWI_IDR_TOUT_Pos                      _U_(18)                                              /**< (TWI_IDR) Timeout Error Interrupt Disable Position */
#define TWI_IDR_TOUT_Msk                      (_U_(0x1) << TWI_IDR_TOUT_Pos)                       /**< (TWI_IDR) Timeout Error Interrupt Disable Mask */
#define TWI_IDR_TOUT(value)                   (TWI_IDR_TOUT_Msk & ((value) << TWI_IDR_TOUT_Pos))  
#define TWI_IDR_PECERR_Pos                    _U_(19)                                              /**< (TWI_IDR) PEC Error Interrupt Disable Position */
#define TWI_IDR_PECERR_Msk                    (_U_(0x1) << TWI_IDR_PECERR_Pos)                     /**< (TWI_IDR) PEC Error Interrupt Disable Mask */
#define TWI_IDR_PECERR(value)                 (TWI_IDR_PECERR_Msk & ((value) << TWI_IDR_PECERR_Pos))
#define TWI_IDR_SMBDAM_Pos                    _U_(20)                                              /**< (TWI_IDR) SMBus Default Address Match Interrupt Disable Position */
#define TWI_IDR_SMBDAM_Msk                    (_U_(0x1) << TWI_IDR_SMBDAM_Pos)                     /**< (TWI_IDR) SMBus Default Address Match Interrupt Disable Mask */
#define TWI_IDR_SMBDAM(value)                 (TWI_IDR_SMBDAM_Msk & ((value) << TWI_IDR_SMBDAM_Pos))
#define TWI_IDR_SMBHHM_Pos                    _U_(21)                                              /**< (TWI_IDR) SMBus Host Header Address Match Interrupt Disable Position */
#define TWI_IDR_SMBHHM_Msk                    (_U_(0x1) << TWI_IDR_SMBHHM_Pos)                     /**< (TWI_IDR) SMBus Host Header Address Match Interrupt Disable Mask */
#define TWI_IDR_SMBHHM(value)                 (TWI_IDR_SMBHHM_Msk & ((value) << TWI_IDR_SMBHHM_Pos))
#define TWI_IDR_Msk                           _U_(0x003DFFF7)                                      /**< (TWI_IDR) Register Mask  */


/* -------- TWI_IMR : (TWI Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define TWI_IMR_TXCOMP_Pos                    _U_(0)                                               /**< (TWI_IMR) Transmission Completed Interrupt Mask Position */
#define TWI_IMR_TXCOMP_Msk                    (_U_(0x1) << TWI_IMR_TXCOMP_Pos)                     /**< (TWI_IMR) Transmission Completed Interrupt Mask Mask */
#define TWI_IMR_TXCOMP(value)                 (TWI_IMR_TXCOMP_Msk & ((value) << TWI_IMR_TXCOMP_Pos))
#define TWI_IMR_RXRDY_Pos                     _U_(1)                                               /**< (TWI_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_RXRDY_Msk                     (_U_(0x1) << TWI_IMR_RXRDY_Pos)                      /**< (TWI_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_RXRDY(value)                  (TWI_IMR_RXRDY_Msk & ((value) << TWI_IMR_RXRDY_Pos))
#define TWI_IMR_TXRDY_Pos                     _U_(2)                                               /**< (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_TXRDY_Msk                     (_U_(0x1) << TWI_IMR_TXRDY_Pos)                      /**< (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_TXRDY(value)                  (TWI_IMR_TXRDY_Msk & ((value) << TWI_IMR_TXRDY_Pos))
#define TWI_IMR_SVACC_Pos                     _U_(4)                                               /**< (TWI_IMR) Slave Access Interrupt Mask Position */
#define TWI_IMR_SVACC_Msk                     (_U_(0x1) << TWI_IMR_SVACC_Pos)                      /**< (TWI_IMR) Slave Access Interrupt Mask Mask */
#define TWI_IMR_SVACC(value)                  (TWI_IMR_SVACC_Msk & ((value) << TWI_IMR_SVACC_Pos))
#define TWI_IMR_GACC_Pos                      _U_(5)                                               /**< (TWI_IMR) General Call Access Interrupt Mask Position */
#define TWI_IMR_GACC_Msk                      (_U_(0x1) << TWI_IMR_GACC_Pos)                       /**< (TWI_IMR) General Call Access Interrupt Mask Mask */
#define TWI_IMR_GACC(value)                   (TWI_IMR_GACC_Msk & ((value) << TWI_IMR_GACC_Pos))  
#define TWI_IMR_OVRE_Pos                      _U_(6)                                               /**< (TWI_IMR) Overrun Error Interrupt Mask Position */
#define TWI_IMR_OVRE_Msk                      (_U_(0x1) << TWI_IMR_OVRE_Pos)                       /**< (TWI_IMR) Overrun Error Interrupt Mask Mask */
#define TWI_IMR_OVRE(value)                   (TWI_IMR_OVRE_Msk & ((value) << TWI_IMR_OVRE_Pos))  
#define TWI_IMR_UNRE_Pos                      _U_(7)                                               /**< (TWI_IMR) Underrun Error Interrupt Mask Position */
#define TWI_IMR_UNRE_Msk                      (_U_(0x1) << TWI_IMR_UNRE_Pos)                       /**< (TWI_IMR) Underrun Error Interrupt Mask Mask */
#define TWI_IMR_UNRE(value)                   (TWI_IMR_UNRE_Msk & ((value) << TWI_IMR_UNRE_Pos))  
#define TWI_IMR_NACK_Pos                      _U_(8)                                               /**< (TWI_IMR) Not Acknowledge Interrupt Mask Position */
#define TWI_IMR_NACK_Msk                      (_U_(0x1) << TWI_IMR_NACK_Pos)                       /**< (TWI_IMR) Not Acknowledge Interrupt Mask Mask */
#define TWI_IMR_NACK(value)                   (TWI_IMR_NACK_Msk & ((value) << TWI_IMR_NACK_Pos))  
#define TWI_IMR_ARBLST_Pos                    _U_(9)                                               /**< (TWI_IMR) Arbitration Lost Interrupt Mask Position */
#define TWI_IMR_ARBLST_Msk                    (_U_(0x1) << TWI_IMR_ARBLST_Pos)                     /**< (TWI_IMR) Arbitration Lost Interrupt Mask Mask */
#define TWI_IMR_ARBLST(value)                 (TWI_IMR_ARBLST_Msk & ((value) << TWI_IMR_ARBLST_Pos))
#define TWI_IMR_SCL_WS_Pos                    _U_(10)                                              /**< (TWI_IMR) Clock Wait State Interrupt Mask Position */
#define TWI_IMR_SCL_WS_Msk                    (_U_(0x1) << TWI_IMR_SCL_WS_Pos)                     /**< (TWI_IMR) Clock Wait State Interrupt Mask Mask */
#define TWI_IMR_SCL_WS(value)                 (TWI_IMR_SCL_WS_Msk & ((value) << TWI_IMR_SCL_WS_Pos))
#define TWI_IMR_EOSACC_Pos                    _U_(11)                                              /**< (TWI_IMR) End Of Slave Access Interrupt Mask Position */
#define TWI_IMR_EOSACC_Msk                    (_U_(0x1) << TWI_IMR_EOSACC_Pos)                     /**< (TWI_IMR) End Of Slave Access Interrupt Mask Mask */
#define TWI_IMR_EOSACC(value)                 (TWI_IMR_EOSACC_Msk & ((value) << TWI_IMR_EOSACC_Pos))
#define TWI_IMR_ENDRX_Pos                     _U_(12)                                              /**< (TWI_IMR) End of Receive Buffer Interrupt Mask Position */
#define TWI_IMR_ENDRX_Msk                     (_U_(0x1) << TWI_IMR_ENDRX_Pos)                      /**< (TWI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDRX(value)                  (TWI_IMR_ENDRX_Msk & ((value) << TWI_IMR_ENDRX_Pos))
#define TWI_IMR_ENDTX_Pos                     _U_(13)                                              /**< (TWI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define TWI_IMR_ENDTX_Msk                     (_U_(0x1) << TWI_IMR_ENDTX_Pos)                      /**< (TWI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDTX(value)                  (TWI_IMR_ENDTX_Msk & ((value) << TWI_IMR_ENDTX_Pos))
#define TWI_IMR_RXBUFF_Pos                    _U_(14)                                              /**< (TWI_IMR) Receive Buffer Full Interrupt Mask Position */
#define TWI_IMR_RXBUFF_Msk                    (_U_(0x1) << TWI_IMR_RXBUFF_Pos)                     /**< (TWI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define TWI_IMR_RXBUFF(value)                 (TWI_IMR_RXBUFF_Msk & ((value) << TWI_IMR_RXBUFF_Pos))
#define TWI_IMR_TXBUFE_Pos                    _U_(15)                                              /**< (TWI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define TWI_IMR_TXBUFE_Msk                    (_U_(0x1) << TWI_IMR_TXBUFE_Pos)                     /**< (TWI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define TWI_IMR_TXBUFE(value)                 (TWI_IMR_TXBUFE_Msk & ((value) << TWI_IMR_TXBUFE_Pos))
#define TWI_IMR_MCACK_Pos                     _U_(16)                                              /**< (TWI_IMR) Master Code Acknowledge Interrupt Mask Position */
#define TWI_IMR_MCACK_Msk                     (_U_(0x1) << TWI_IMR_MCACK_Pos)                      /**< (TWI_IMR) Master Code Acknowledge Interrupt Mask Mask */
#define TWI_IMR_MCACK(value)                  (TWI_IMR_MCACK_Msk & ((value) << TWI_IMR_MCACK_Pos))
#define TWI_IMR_TOUT_Pos                      _U_(18)                                              /**< (TWI_IMR) Timeout Error Interrupt Mask Position */
#define TWI_IMR_TOUT_Msk                      (_U_(0x1) << TWI_IMR_TOUT_Pos)                       /**< (TWI_IMR) Timeout Error Interrupt Mask Mask */
#define TWI_IMR_TOUT(value)                   (TWI_IMR_TOUT_Msk & ((value) << TWI_IMR_TOUT_Pos))  
#define TWI_IMR_PECERR_Pos                    _U_(19)                                              /**< (TWI_IMR) PEC Error Interrupt Mask Position */
#define TWI_IMR_PECERR_Msk                    (_U_(0x1) << TWI_IMR_PECERR_Pos)                     /**< (TWI_IMR) PEC Error Interrupt Mask Mask */
#define TWI_IMR_PECERR(value)                 (TWI_IMR_PECERR_Msk & ((value) << TWI_IMR_PECERR_Pos))
#define TWI_IMR_SMBDAM_Pos                    _U_(20)                                              /**< (TWI_IMR) SMBus Default Address Match Interrupt Mask Position */
#define TWI_IMR_SMBDAM_Msk                    (_U_(0x1) << TWI_IMR_SMBDAM_Pos)                     /**< (TWI_IMR) SMBus Default Address Match Interrupt Mask Mask */
#define TWI_IMR_SMBDAM(value)                 (TWI_IMR_SMBDAM_Msk & ((value) << TWI_IMR_SMBDAM_Pos))
#define TWI_IMR_SMBHHM_Pos                    _U_(21)                                              /**< (TWI_IMR) SMBus Host Header Address Match Interrupt Mask Position */
#define TWI_IMR_SMBHHM_Msk                    (_U_(0x1) << TWI_IMR_SMBHHM_Pos)                     /**< (TWI_IMR) SMBus Host Header Address Match Interrupt Mask Mask */
#define TWI_IMR_SMBHHM(value)                 (TWI_IMR_SMBHHM_Msk & ((value) << TWI_IMR_SMBHHM_Pos))
#define TWI_IMR_Msk                           _U_(0x003DFFF7)                                      /**< (TWI_IMR) Register Mask  */


/* -------- TWI_RHR : (TWI Offset: 0x30) ( R/ 32) Receive Holding Register -------- */
#define TWI_RHR_RXDATA_Pos                    _U_(0)                                               /**< (TWI_RHR) Master or Slave Receive Holding Data Position */
#define TWI_RHR_RXDATA_Msk                    (_U_(0xFF) << TWI_RHR_RXDATA_Pos)                    /**< (TWI_RHR) Master or Slave Receive Holding Data Mask */
#define TWI_RHR_RXDATA(value)                 (TWI_RHR_RXDATA_Msk & ((value) << TWI_RHR_RXDATA_Pos))
#define TWI_RHR_Msk                           _U_(0x000000FF)                                      /**< (TWI_RHR) Register Mask  */


/* -------- TWI_THR : (TWI Offset: 0x34) ( /W 32) Transmit Holding Register -------- */
#define TWI_THR_TXDATA_Pos                    _U_(0)                                               /**< (TWI_THR) Master or Slave Transmit Holding Data Position */
#define TWI_THR_TXDATA_Msk                    (_U_(0xFF) << TWI_THR_TXDATA_Pos)                    /**< (TWI_THR) Master or Slave Transmit Holding Data Mask */
#define TWI_THR_TXDATA(value)                 (TWI_THR_TXDATA_Msk & ((value) << TWI_THR_TXDATA_Pos))
#define TWI_THR_Msk                           _U_(0x000000FF)                                      /**< (TWI_THR) Register Mask  */


/* -------- TWI_SMBTR : (TWI Offset: 0x38) (R/W 32) SMBus Timing Register -------- */
#define TWI_SMBTR_PRESC_Pos                   _U_(0)                                               /**< (TWI_SMBTR) SMBus Clock Prescaler Position */
#define TWI_SMBTR_PRESC_Msk                   (_U_(0xF) << TWI_SMBTR_PRESC_Pos)                    /**< (TWI_SMBTR) SMBus Clock Prescaler Mask */
#define TWI_SMBTR_PRESC(value)                (TWI_SMBTR_PRESC_Msk & ((value) << TWI_SMBTR_PRESC_Pos))
#define TWI_SMBTR_TLOWS_Pos                   _U_(8)                                               /**< (TWI_SMBTR) Slave Clock Stretch Maximum Cycles Position */
#define TWI_SMBTR_TLOWS_Msk                   (_U_(0xFF) << TWI_SMBTR_TLOWS_Pos)                   /**< (TWI_SMBTR) Slave Clock Stretch Maximum Cycles Mask */
#define TWI_SMBTR_TLOWS(value)                (TWI_SMBTR_TLOWS_Msk & ((value) << TWI_SMBTR_TLOWS_Pos))
#define TWI_SMBTR_TLOWM_Pos                   _U_(16)                                              /**< (TWI_SMBTR) Master Clock Stretch Maximum Cycles Position */
#define TWI_SMBTR_TLOWM_Msk                   (_U_(0xFF) << TWI_SMBTR_TLOWM_Pos)                   /**< (TWI_SMBTR) Master Clock Stretch Maximum Cycles Mask */
#define TWI_SMBTR_TLOWM(value)                (TWI_SMBTR_TLOWM_Msk & ((value) << TWI_SMBTR_TLOWM_Pos))
#define TWI_SMBTR_THMAX_Pos                   _U_(24)                                              /**< (TWI_SMBTR) Clock High Maximum Cycles Position */
#define TWI_SMBTR_THMAX_Msk                   (_U_(0xFF) << TWI_SMBTR_THMAX_Pos)                   /**< (TWI_SMBTR) Clock High Maximum Cycles Mask */
#define TWI_SMBTR_THMAX(value)                (TWI_SMBTR_THMAX_Msk & ((value) << TWI_SMBTR_THMAX_Pos))
#define TWI_SMBTR_Msk                         _U_(0xFFFFFF0F)                                      /**< (TWI_SMBTR) Register Mask  */


/* -------- TWI_ACR : (TWI Offset: 0x40) (R/W 32) Alternative Command Register -------- */
#define TWI_ACR_DATAL_Pos                     _U_(0)                                               /**< (TWI_ACR) Data Length Position */
#define TWI_ACR_DATAL_Msk                     (_U_(0xFF) << TWI_ACR_DATAL_Pos)                     /**< (TWI_ACR) Data Length Mask */
#define TWI_ACR_DATAL(value)                  (TWI_ACR_DATAL_Msk & ((value) << TWI_ACR_DATAL_Pos))
#define TWI_ACR_DIR_Pos                       _U_(8)                                               /**< (TWI_ACR) Transfer Direction Position */
#define TWI_ACR_DIR_Msk                       (_U_(0x1) << TWI_ACR_DIR_Pos)                        /**< (TWI_ACR) Transfer Direction Mask */
#define TWI_ACR_DIR(value)                    (TWI_ACR_DIR_Msk & ((value) << TWI_ACR_DIR_Pos))    
#define TWI_ACR_PEC_Pos                       _U_(9)                                               /**< (TWI_ACR) PEC Request (SMBus Mode only) Position */
#define TWI_ACR_PEC_Msk                       (_U_(0x1) << TWI_ACR_PEC_Pos)                        /**< (TWI_ACR) PEC Request (SMBus Mode only) Mask */
#define TWI_ACR_PEC(value)                    (TWI_ACR_PEC_Msk & ((value) << TWI_ACR_PEC_Pos))    
#define TWI_ACR_NDATAL_Pos                    _U_(16)                                              /**< (TWI_ACR) Next Data Length Position */
#define TWI_ACR_NDATAL_Msk                    (_U_(0xFF) << TWI_ACR_NDATAL_Pos)                    /**< (TWI_ACR) Next Data Length Mask */
#define TWI_ACR_NDATAL(value)                 (TWI_ACR_NDATAL_Msk & ((value) << TWI_ACR_NDATAL_Pos))
#define TWI_ACR_NDIR_Pos                      _U_(24)                                              /**< (TWI_ACR) Next Transfer Direction Position */
#define TWI_ACR_NDIR_Msk                      (_U_(0x1) << TWI_ACR_NDIR_Pos)                       /**< (TWI_ACR) Next Transfer Direction Mask */
#define TWI_ACR_NDIR(value)                   (TWI_ACR_NDIR_Msk & ((value) << TWI_ACR_NDIR_Pos))  
#define TWI_ACR_NPEC_Pos                      _U_(25)                                              /**< (TWI_ACR) Next PEC Request (SMBus Mode only) Position */
#define TWI_ACR_NPEC_Msk                      (_U_(0x1) << TWI_ACR_NPEC_Pos)                       /**< (TWI_ACR) Next PEC Request (SMBus Mode only) Mask */
#define TWI_ACR_NPEC(value)                   (TWI_ACR_NPEC_Msk & ((value) << TWI_ACR_NPEC_Pos))  
#define TWI_ACR_Msk                           _U_(0x03FF03FF)                                      /**< (TWI_ACR) Register Mask  */


/* -------- TWI_FILTR : (TWI Offset: 0x44) (R/W 32) Filter Register -------- */
#define TWI_FILTR_FILT_Pos                    _U_(0)                                               /**< (TWI_FILTR) RX Digital Filter Position */
#define TWI_FILTR_FILT_Msk                    (_U_(0x1) << TWI_FILTR_FILT_Pos)                     /**< (TWI_FILTR) RX Digital Filter Mask */
#define TWI_FILTR_FILT(value)                 (TWI_FILTR_FILT_Msk & ((value) << TWI_FILTR_FILT_Pos))
#define TWI_FILTR_PADFEN_Pos                  _U_(1)                                               /**< (TWI_FILTR) PAD Filter Enable Position */
#define TWI_FILTR_PADFEN_Msk                  (_U_(0x1) << TWI_FILTR_PADFEN_Pos)                   /**< (TWI_FILTR) PAD Filter Enable Mask */
#define TWI_FILTR_PADFEN(value)               (TWI_FILTR_PADFEN_Msk & ((value) << TWI_FILTR_PADFEN_Pos))
#define TWI_FILTR_PADFCFG_Pos                 _U_(2)                                               /**< (TWI_FILTR) PAD Filter Config Position */
#define TWI_FILTR_PADFCFG_Msk                 (_U_(0x1) << TWI_FILTR_PADFCFG_Pos)                  /**< (TWI_FILTR) PAD Filter Config Mask */
#define TWI_FILTR_PADFCFG(value)              (TWI_FILTR_PADFCFG_Msk & ((value) << TWI_FILTR_PADFCFG_Pos))
#define TWI_FILTR_THRES_Pos                   _U_(8)                                               /**< (TWI_FILTR) Digital Filter Threshold Position */
#define TWI_FILTR_THRES_Msk                   (_U_(0x7) << TWI_FILTR_THRES_Pos)                    /**< (TWI_FILTR) Digital Filter Threshold Mask */
#define TWI_FILTR_THRES(value)                (TWI_FILTR_THRES_Msk & ((value) << TWI_FILTR_THRES_Pos))
#define TWI_FILTR_Msk                         _U_(0x00000707)                                      /**< (TWI_FILTR) Register Mask  */


/* -------- TWI_SWMR : (TWI Offset: 0x4C) (R/W 32) SleepWalking Matching Register -------- */
#define TWI_SWMR_SADR1_Pos                    _U_(0)                                               /**< (TWI_SWMR) Slave Address 1 Position */
#define TWI_SWMR_SADR1_Msk                    (_U_(0x7F) << TWI_SWMR_SADR1_Pos)                    /**< (TWI_SWMR) Slave Address 1 Mask */
#define TWI_SWMR_SADR1(value)                 (TWI_SWMR_SADR1_Msk & ((value) << TWI_SWMR_SADR1_Pos))
#define TWI_SWMR_SADR2_Pos                    _U_(8)                                               /**< (TWI_SWMR) Slave Address 2 Position */
#define TWI_SWMR_SADR2_Msk                    (_U_(0x7F) << TWI_SWMR_SADR2_Pos)                    /**< (TWI_SWMR) Slave Address 2 Mask */
#define TWI_SWMR_SADR2(value)                 (TWI_SWMR_SADR2_Msk & ((value) << TWI_SWMR_SADR2_Pos))
#define TWI_SWMR_SADR3_Pos                    _U_(16)                                              /**< (TWI_SWMR) Slave Address 3 Position */
#define TWI_SWMR_SADR3_Msk                    (_U_(0x7F) << TWI_SWMR_SADR3_Pos)                    /**< (TWI_SWMR) Slave Address 3 Mask */
#define TWI_SWMR_SADR3(value)                 (TWI_SWMR_SADR3_Msk & ((value) << TWI_SWMR_SADR3_Pos))
#define TWI_SWMR_DATAM_Pos                    _U_(24)                                              /**< (TWI_SWMR) Data Match Position */
#define TWI_SWMR_DATAM_Msk                    (_U_(0xFF) << TWI_SWMR_DATAM_Pos)                    /**< (TWI_SWMR) Data Match Mask */
#define TWI_SWMR_DATAM(value)                 (TWI_SWMR_DATAM_Msk & ((value) << TWI_SWMR_DATAM_Pos))
#define TWI_SWMR_Msk                          _U_(0xFF7F7F7F)                                      /**< (TWI_SWMR) Register Mask  */


/* -------- TWI_WPMR : (TWI Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TWI_WPMR_WPEN_Pos                     _U_(0)                                               /**< (TWI_WPMR) Write Protection Enable Position */
#define TWI_WPMR_WPEN_Msk                     (_U_(0x1) << TWI_WPMR_WPEN_Pos)                      /**< (TWI_WPMR) Write Protection Enable Mask */
#define TWI_WPMR_WPEN(value)                  (TWI_WPMR_WPEN_Msk & ((value) << TWI_WPMR_WPEN_Pos))
#define TWI_WPMR_WPKEY_Pos                    _U_(8)                                               /**< (TWI_WPMR) Write Protection Key Position */
#define TWI_WPMR_WPKEY_Msk                    (_U_(0xFFFFFF) << TWI_WPMR_WPKEY_Pos)                /**< (TWI_WPMR) Write Protection Key Mask */
#define TWI_WPMR_WPKEY(value)                 (TWI_WPMR_WPKEY_Msk & ((value) << TWI_WPMR_WPKEY_Pos))
#define   TWI_WPMR_WPKEY_PASSWD_Val           _U_(0x545749)                                        /**< (TWI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define TWI_WPMR_WPKEY_PASSWD                 (TWI_WPMR_WPKEY_PASSWD_Val << TWI_WPMR_WPKEY_Pos)    /**< (TWI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define TWI_WPMR_Msk                          _U_(0xFFFFFF01)                                      /**< (TWI_WPMR) Register Mask  */


/* -------- TWI_WPSR : (TWI Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define TWI_WPSR_WPVS_Pos                     _U_(0)                                               /**< (TWI_WPSR) Write Protection Violation Status Position */
#define TWI_WPSR_WPVS_Msk                     (_U_(0x1) << TWI_WPSR_WPVS_Pos)                      /**< (TWI_WPSR) Write Protection Violation Status Mask */
#define TWI_WPSR_WPVS(value)                  (TWI_WPSR_WPVS_Msk & ((value) << TWI_WPSR_WPVS_Pos))
#define TWI_WPSR_WPVSRC_Pos                   _U_(8)                                               /**< (TWI_WPSR) Write Protection Violation Source Position */
#define TWI_WPSR_WPVSRC_Msk                   (_U_(0xFFFFFF) << TWI_WPSR_WPVSRC_Pos)               /**< (TWI_WPSR) Write Protection Violation Source Mask */
#define TWI_WPSR_WPVSRC(value)                (TWI_WPSR_WPVSRC_Msk & ((value) << TWI_WPSR_WPVSRC_Pos))
#define TWI_WPSR_Msk                          _U_(0xFFFFFF01)                                      /**< (TWI_WPSR) Register Mask  */


/* -------- TWI_RPR : (TWI Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define TWI_RPR_RXPTR_Pos                     _U_(0)                                               /**< (TWI_RPR) Receive Pointer Register Position */
#define TWI_RPR_RXPTR_Msk                     (_U_(0xFFFFFFFF) << TWI_RPR_RXPTR_Pos)               /**< (TWI_RPR) Receive Pointer Register Mask */
#define TWI_RPR_RXPTR(value)                  (TWI_RPR_RXPTR_Msk & ((value) << TWI_RPR_RXPTR_Pos))
#define TWI_RPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (TWI_RPR) Register Mask  */


/* -------- TWI_RCR : (TWI Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define TWI_RCR_RXCTR_Pos                     _U_(0)                                               /**< (TWI_RCR) Receive Counter Register Position */
#define TWI_RCR_RXCTR_Msk                     (_U_(0xFFFF) << TWI_RCR_RXCTR_Pos)                   /**< (TWI_RCR) Receive Counter Register Mask */
#define TWI_RCR_RXCTR(value)                  (TWI_RCR_RXCTR_Msk & ((value) << TWI_RCR_RXCTR_Pos))
#define TWI_RCR_Msk                           _U_(0x0000FFFF)                                      /**< (TWI_RCR) Register Mask  */


/* -------- TWI_TPR : (TWI Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define TWI_TPR_TXPTR_Pos                     _U_(0)                                               /**< (TWI_TPR) Transmit Counter Register Position */
#define TWI_TPR_TXPTR_Msk                     (_U_(0xFFFFFFFF) << TWI_TPR_TXPTR_Pos)               /**< (TWI_TPR) Transmit Counter Register Mask */
#define TWI_TPR_TXPTR(value)                  (TWI_TPR_TXPTR_Msk & ((value) << TWI_TPR_TXPTR_Pos))
#define TWI_TPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (TWI_TPR) Register Mask  */


/* -------- TWI_TCR : (TWI Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define TWI_TCR_TXCTR_Pos                     _U_(0)                                               /**< (TWI_TCR) Transmit Counter Register Position */
#define TWI_TCR_TXCTR_Msk                     (_U_(0xFFFF) << TWI_TCR_TXCTR_Pos)                   /**< (TWI_TCR) Transmit Counter Register Mask */
#define TWI_TCR_TXCTR(value)                  (TWI_TCR_TXCTR_Msk & ((value) << TWI_TCR_TXCTR_Pos))
#define TWI_TCR_Msk                           _U_(0x0000FFFF)                                      /**< (TWI_TCR) Register Mask  */


/* -------- TWI_RNPR : (TWI Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define TWI_RNPR_RXNPTR_Pos                   _U_(0)                                               /**< (TWI_RNPR) Receive Next Pointer Position */
#define TWI_RNPR_RXNPTR_Msk                   (_U_(0xFFFFFFFF) << TWI_RNPR_RXNPTR_Pos)             /**< (TWI_RNPR) Receive Next Pointer Mask */
#define TWI_RNPR_RXNPTR(value)                (TWI_RNPR_RXNPTR_Msk & ((value) << TWI_RNPR_RXNPTR_Pos))
#define TWI_RNPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (TWI_RNPR) Register Mask  */


/* -------- TWI_RNCR : (TWI Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define TWI_RNCR_RXNCTR_Pos                   _U_(0)                                               /**< (TWI_RNCR) Receive Next Counter Position */
#define TWI_RNCR_RXNCTR_Msk                   (_U_(0xFFFF) << TWI_RNCR_RXNCTR_Pos)                 /**< (TWI_RNCR) Receive Next Counter Mask */
#define TWI_RNCR_RXNCTR(value)                (TWI_RNCR_RXNCTR_Msk & ((value) << TWI_RNCR_RXNCTR_Pos))
#define TWI_RNCR_Msk                          _U_(0x0000FFFF)                                      /**< (TWI_RNCR) Register Mask  */


/* -------- TWI_TNPR : (TWI Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define TWI_TNPR_TXNPTR_Pos                   _U_(0)                                               /**< (TWI_TNPR) Transmit Next Pointer Position */
#define TWI_TNPR_TXNPTR_Msk                   (_U_(0xFFFFFFFF) << TWI_TNPR_TXNPTR_Pos)             /**< (TWI_TNPR) Transmit Next Pointer Mask */
#define TWI_TNPR_TXNPTR(value)                (TWI_TNPR_TXNPTR_Msk & ((value) << TWI_TNPR_TXNPTR_Pos))
#define TWI_TNPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (TWI_TNPR) Register Mask  */


/* -------- TWI_TNCR : (TWI Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define TWI_TNCR_TXNCTR_Pos                   _U_(0)                                               /**< (TWI_TNCR) Transmit Counter Next Position */
#define TWI_TNCR_TXNCTR_Msk                   (_U_(0xFFFF) << TWI_TNCR_TXNCTR_Pos)                 /**< (TWI_TNCR) Transmit Counter Next Mask */
#define TWI_TNCR_TXNCTR(value)                (TWI_TNCR_TXNCTR_Msk & ((value) << TWI_TNCR_TXNCTR_Pos))
#define TWI_TNCR_Msk                          _U_(0x0000FFFF)                                      /**< (TWI_TNCR) Register Mask  */


/* -------- TWI_PTCR : (TWI Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define TWI_PTCR_RXTEN_Pos                    _U_(0)                                               /**< (TWI_PTCR) Receiver Transfer Enable Position */
#define TWI_PTCR_RXTEN_Msk                    (_U_(0x1) << TWI_PTCR_RXTEN_Pos)                     /**< (TWI_PTCR) Receiver Transfer Enable Mask */
#define TWI_PTCR_RXTEN(value)                 (TWI_PTCR_RXTEN_Msk & ((value) << TWI_PTCR_RXTEN_Pos))
#define TWI_PTCR_RXTDIS_Pos                   _U_(1)                                               /**< (TWI_PTCR) Receiver Transfer Disable Position */
#define TWI_PTCR_RXTDIS_Msk                   (_U_(0x1) << TWI_PTCR_RXTDIS_Pos)                    /**< (TWI_PTCR) Receiver Transfer Disable Mask */
#define TWI_PTCR_RXTDIS(value)                (TWI_PTCR_RXTDIS_Msk & ((value) << TWI_PTCR_RXTDIS_Pos))
#define TWI_PTCR_TXTEN_Pos                    _U_(8)                                               /**< (TWI_PTCR) Transmitter Transfer Enable Position */
#define TWI_PTCR_TXTEN_Msk                    (_U_(0x1) << TWI_PTCR_TXTEN_Pos)                     /**< (TWI_PTCR) Transmitter Transfer Enable Mask */
#define TWI_PTCR_TXTEN(value)                 (TWI_PTCR_TXTEN_Msk & ((value) << TWI_PTCR_TXTEN_Pos))
#define TWI_PTCR_TXTDIS_Pos                   _U_(9)                                               /**< (TWI_PTCR) Transmitter Transfer Disable Position */
#define TWI_PTCR_TXTDIS_Msk                   (_U_(0x1) << TWI_PTCR_TXTDIS_Pos)                    /**< (TWI_PTCR) Transmitter Transfer Disable Mask */
#define TWI_PTCR_TXTDIS(value)                (TWI_PTCR_TXTDIS_Msk & ((value) << TWI_PTCR_TXTDIS_Pos))
#define TWI_PTCR_RXCBEN_Pos                   _U_(16)                                              /**< (TWI_PTCR) Receiver Circular Buffer Enable Position */
#define TWI_PTCR_RXCBEN_Msk                   (_U_(0x1) << TWI_PTCR_RXCBEN_Pos)                    /**< (TWI_PTCR) Receiver Circular Buffer Enable Mask */
#define TWI_PTCR_RXCBEN(value)                (TWI_PTCR_RXCBEN_Msk & ((value) << TWI_PTCR_RXCBEN_Pos))
#define TWI_PTCR_RXCBDIS_Pos                  _U_(17)                                              /**< (TWI_PTCR) Receiver Circular Buffer Disable Position */
#define TWI_PTCR_RXCBDIS_Msk                  (_U_(0x1) << TWI_PTCR_RXCBDIS_Pos)                   /**< (TWI_PTCR) Receiver Circular Buffer Disable Mask */
#define TWI_PTCR_RXCBDIS(value)               (TWI_PTCR_RXCBDIS_Msk & ((value) << TWI_PTCR_RXCBDIS_Pos))
#define TWI_PTCR_TXCBEN_Pos                   _U_(18)                                              /**< (TWI_PTCR) Transmitter Circular Buffer Enable Position */
#define TWI_PTCR_TXCBEN_Msk                   (_U_(0x1) << TWI_PTCR_TXCBEN_Pos)                    /**< (TWI_PTCR) Transmitter Circular Buffer Enable Mask */
#define TWI_PTCR_TXCBEN(value)                (TWI_PTCR_TXCBEN_Msk & ((value) << TWI_PTCR_TXCBEN_Pos))
#define TWI_PTCR_TXCBDIS_Pos                  _U_(19)                                              /**< (TWI_PTCR) Transmitter Circular Buffer Disable Position */
#define TWI_PTCR_TXCBDIS_Msk                  (_U_(0x1) << TWI_PTCR_TXCBDIS_Pos)                   /**< (TWI_PTCR) Transmitter Circular Buffer Disable Mask */
#define TWI_PTCR_TXCBDIS(value)               (TWI_PTCR_TXCBDIS_Msk & ((value) << TWI_PTCR_TXCBDIS_Pos))
#define TWI_PTCR_ERRCLR_Pos                   _U_(24)                                              /**< (TWI_PTCR) Transfer Bus Error Clear Position */
#define TWI_PTCR_ERRCLR_Msk                   (_U_(0x1) << TWI_PTCR_ERRCLR_Pos)                    /**< (TWI_PTCR) Transfer Bus Error Clear Mask */
#define TWI_PTCR_ERRCLR(value)                (TWI_PTCR_ERRCLR_Msk & ((value) << TWI_PTCR_ERRCLR_Pos))
#define TWI_PTCR_Msk                          _U_(0x010F0303)                                      /**< (TWI_PTCR) Register Mask  */


/* -------- TWI_PTSR : (TWI Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define TWI_PTSR_RXTEN_Pos                    _U_(0)                                               /**< (TWI_PTSR) Receiver Transfer Enable Position */
#define TWI_PTSR_RXTEN_Msk                    (_U_(0x1) << TWI_PTSR_RXTEN_Pos)                     /**< (TWI_PTSR) Receiver Transfer Enable Mask */
#define TWI_PTSR_RXTEN(value)                 (TWI_PTSR_RXTEN_Msk & ((value) << TWI_PTSR_RXTEN_Pos))
#define TWI_PTSR_TXTEN_Pos                    _U_(8)                                               /**< (TWI_PTSR) Transmitter Transfer Enable Position */
#define TWI_PTSR_TXTEN_Msk                    (_U_(0x1) << TWI_PTSR_TXTEN_Pos)                     /**< (TWI_PTSR) Transmitter Transfer Enable Mask */
#define TWI_PTSR_TXTEN(value)                 (TWI_PTSR_TXTEN_Msk & ((value) << TWI_PTSR_TXTEN_Pos))
#define TWI_PTSR_RXCBEN_Pos                   _U_(16)                                              /**< (TWI_PTSR) Receiver Circular Buffer Enable Position */
#define TWI_PTSR_RXCBEN_Msk                   (_U_(0x1) << TWI_PTSR_RXCBEN_Pos)                    /**< (TWI_PTSR) Receiver Circular Buffer Enable Mask */
#define TWI_PTSR_RXCBEN(value)                (TWI_PTSR_RXCBEN_Msk & ((value) << TWI_PTSR_RXCBEN_Pos))
#define TWI_PTSR_TXCBEN_Pos                   _U_(18)                                              /**< (TWI_PTSR) Transmitter Circular Buffer Enable Position */
#define TWI_PTSR_TXCBEN_Msk                   (_U_(0x1) << TWI_PTSR_TXCBEN_Pos)                    /**< (TWI_PTSR) Transmitter Circular Buffer Enable Mask */
#define TWI_PTSR_TXCBEN(value)                (TWI_PTSR_TXCBEN_Msk & ((value) << TWI_PTSR_TXCBEN_Pos))
#define TWI_PTSR_ERR_Pos                      _U_(24)                                              /**< (TWI_PTSR) Transfer Bus Error Position */
#define TWI_PTSR_ERR_Msk                      (_U_(0x1) << TWI_PTSR_ERR_Pos)                       /**< (TWI_PTSR) Transfer Bus Error Mask */
#define TWI_PTSR_ERR(value)                   (TWI_PTSR_ERR_Msk & ((value) << TWI_PTSR_ERR_Pos))  
#define TWI_PTSR_Msk                          _U_(0x01050101)                                      /**< (TWI_PTSR) Register Mask  */


/** \brief TWI register offsets definitions */
#define TWI_CR_REG_OFST                (0x00)              /**< (TWI_CR) Control Register Offset */
#define TWI_MMR_REG_OFST               (0x04)              /**< (TWI_MMR) Master Mode Register Offset */
#define TWI_SMR_REG_OFST               (0x08)              /**< (TWI_SMR) Slave Mode Register Offset */
#define TWI_IADR_REG_OFST              (0x0C)              /**< (TWI_IADR) Internal Address Register Offset */
#define TWI_CWGR_REG_OFST              (0x10)              /**< (TWI_CWGR) Clock Waveform Generator Register Offset */
#define TWI_SR_REG_OFST                (0x20)              /**< (TWI_SR) Status Register Offset */
#define TWI_IER_REG_OFST               (0x24)              /**< (TWI_IER) Interrupt Enable Register Offset */
#define TWI_IDR_REG_OFST               (0x28)              /**< (TWI_IDR) Interrupt Disable Register Offset */
#define TWI_IMR_REG_OFST               (0x2C)              /**< (TWI_IMR) Interrupt Mask Register Offset */
#define TWI_RHR_REG_OFST               (0x30)              /**< (TWI_RHR) Receive Holding Register Offset */
#define TWI_THR_REG_OFST               (0x34)              /**< (TWI_THR) Transmit Holding Register Offset */
#define TWI_SMBTR_REG_OFST             (0x38)              /**< (TWI_SMBTR) SMBus Timing Register Offset */
#define TWI_ACR_REG_OFST               (0x40)              /**< (TWI_ACR) Alternative Command Register Offset */
#define TWI_FILTR_REG_OFST             (0x44)              /**< (TWI_FILTR) Filter Register Offset */
#define TWI_SWMR_REG_OFST              (0x4C)              /**< (TWI_SWMR) SleepWalking Matching Register Offset */
#define TWI_WPMR_REG_OFST              (0xE4)              /**< (TWI_WPMR) Write Protection Mode Register Offset */
#define TWI_WPSR_REG_OFST              (0xE8)              /**< (TWI_WPSR) Write Protection Status Register Offset */
#define TWI_RPR_REG_OFST               (0x100)             /**< (TWI_RPR) Receive Pointer Register Offset */
#define TWI_RCR_REG_OFST               (0x104)             /**< (TWI_RCR) Receive Counter Register Offset */
#define TWI_TPR_REG_OFST               (0x108)             /**< (TWI_TPR) Transmit Pointer Register Offset */
#define TWI_TCR_REG_OFST               (0x10C)             /**< (TWI_TCR) Transmit Counter Register Offset */
#define TWI_RNPR_REG_OFST              (0x110)             /**< (TWI_RNPR) Receive Next Pointer Register Offset */
#define TWI_RNCR_REG_OFST              (0x114)             /**< (TWI_RNCR) Receive Next Counter Register Offset */
#define TWI_TNPR_REG_OFST              (0x118)             /**< (TWI_TNPR) Transmit Next Pointer Register Offset */
#define TWI_TNCR_REG_OFST              (0x11C)             /**< (TWI_TNCR) Transmit Next Counter Register Offset */
#define TWI_PTCR_REG_OFST              (0x120)             /**< (TWI_PTCR) Transfer Control Register Offset */
#define TWI_PTSR_REG_OFST              (0x124)             /**< (TWI_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TWI register API structure */
typedef struct
{
  __O   uint32_t                       TWI_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       TWI_MMR;            /**< Offset: 0x04 (R/W  32) Master Mode Register */
  __IO  uint32_t                       TWI_SMR;            /**< Offset: 0x08 (R/W  32) Slave Mode Register */
  __IO  uint32_t                       TWI_IADR;           /**< Offset: 0x0C (R/W  32) Internal Address Register */
  __IO  uint32_t                       TWI_CWGR;           /**< Offset: 0x10 (R/W  32) Clock Waveform Generator Register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       TWI_SR;             /**< Offset: 0x20 (R/   32) Status Register */
  __O   uint32_t                       TWI_IER;            /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       TWI_IDR;            /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       TWI_IMR;            /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       TWI_RHR;            /**< Offset: 0x30 (R/   32) Receive Holding Register */
  __O   uint32_t                       TWI_THR;            /**< Offset: 0x34 ( /W  32) Transmit Holding Register */
  __IO  uint32_t                       TWI_SMBTR;          /**< Offset: 0x38 (R/W  32) SMBus Timing Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       TWI_ACR;            /**< Offset: 0x40 (R/W  32) Alternative Command Register */
  __IO  uint32_t                       TWI_FILTR;          /**< Offset: 0x44 (R/W  32) Filter Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       TWI_SWMR;           /**< Offset: 0x4C (R/W  32) SleepWalking Matching Register */
  __I   uint8_t                        Reserved4[0x94];
  __IO  uint32_t                       TWI_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       TWI_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved5[0x14];
  __IO  uint32_t                       TWI_RPR;            /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       TWI_RCR;            /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       TWI_TPR;            /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       TWI_TCR;            /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       TWI_RNPR;           /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       TWI_RNCR;           /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       TWI_TNPR;           /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       TWI_TNCR;           /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       TWI_PTCR;           /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       TWI_PTSR;           /**< Offset: 0x124 (R/   32) Transfer Status Register */
} twi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_TWI_COMPONENT_H_ */
