/*
 * Component description for I2SC
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
#ifndef _SAMG55_I2SC_COMPONENT_H_
#define _SAMG55_I2SC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR I2SC                                         */
/* ************************************************************************** */

/* -------- I2SC_CR : (I2SC Offset: 0x00) ( /W 32) Control Register -------- */
#define I2SC_CR_RXEN_Pos                      _U_(0)                                               /**< (I2SC_CR) Receiver Enable Position */
#define I2SC_CR_RXEN_Msk                      (_U_(0x1) << I2SC_CR_RXEN_Pos)                       /**< (I2SC_CR) Receiver Enable Mask */
#define I2SC_CR_RXEN(value)                   (I2SC_CR_RXEN_Msk & ((value) << I2SC_CR_RXEN_Pos))  
#define I2SC_CR_RXDIS_Pos                     _U_(1)                                               /**< (I2SC_CR) Receiver Disable Position */
#define I2SC_CR_RXDIS_Msk                     (_U_(0x1) << I2SC_CR_RXDIS_Pos)                      /**< (I2SC_CR) Receiver Disable Mask */
#define I2SC_CR_RXDIS(value)                  (I2SC_CR_RXDIS_Msk & ((value) << I2SC_CR_RXDIS_Pos))
#define I2SC_CR_CKEN_Pos                      _U_(2)                                               /**< (I2SC_CR) Clocks Enable Position */
#define I2SC_CR_CKEN_Msk                      (_U_(0x1) << I2SC_CR_CKEN_Pos)                       /**< (I2SC_CR) Clocks Enable Mask */
#define I2SC_CR_CKEN(value)                   (I2SC_CR_CKEN_Msk & ((value) << I2SC_CR_CKEN_Pos))  
#define I2SC_CR_CKDIS_Pos                     _U_(3)                                               /**< (I2SC_CR) Clocks Disable Position */
#define I2SC_CR_CKDIS_Msk                     (_U_(0x1) << I2SC_CR_CKDIS_Pos)                      /**< (I2SC_CR) Clocks Disable Mask */
#define I2SC_CR_CKDIS(value)                  (I2SC_CR_CKDIS_Msk & ((value) << I2SC_CR_CKDIS_Pos))
#define I2SC_CR_TXEN_Pos                      _U_(4)                                               /**< (I2SC_CR) Transmitter Enable Position */
#define I2SC_CR_TXEN_Msk                      (_U_(0x1) << I2SC_CR_TXEN_Pos)                       /**< (I2SC_CR) Transmitter Enable Mask */
#define I2SC_CR_TXEN(value)                   (I2SC_CR_TXEN_Msk & ((value) << I2SC_CR_TXEN_Pos))  
#define I2SC_CR_TXDIS_Pos                     _U_(5)                                               /**< (I2SC_CR) Transmitter Disable Position */
#define I2SC_CR_TXDIS_Msk                     (_U_(0x1) << I2SC_CR_TXDIS_Pos)                      /**< (I2SC_CR) Transmitter Disable Mask */
#define I2SC_CR_TXDIS(value)                  (I2SC_CR_TXDIS_Msk & ((value) << I2SC_CR_TXDIS_Pos))
#define I2SC_CR_SWRST_Pos                     _U_(7)                                               /**< (I2SC_CR) Software Reset Position */
#define I2SC_CR_SWRST_Msk                     (_U_(0x1) << I2SC_CR_SWRST_Pos)                      /**< (I2SC_CR) Software Reset Mask */
#define I2SC_CR_SWRST(value)                  (I2SC_CR_SWRST_Msk & ((value) << I2SC_CR_SWRST_Pos))
#define I2SC_CR_Msk                           _U_(0x000000BF)                                      /**< (I2SC_CR) Register Mask  */


/* -------- I2SC_MR : (I2SC Offset: 0x04) (R/W 32) Mode Register -------- */
#define I2SC_MR_MODE_Pos                      _U_(0)                                               /**< (I2SC_MR) Inter-IC Sound Controller Mode Position */
#define I2SC_MR_MODE_Msk                      (_U_(0x1) << I2SC_MR_MODE_Pos)                       /**< (I2SC_MR) Inter-IC Sound Controller Mode Mask */
#define I2SC_MR_MODE(value)                   (I2SC_MR_MODE_Msk & ((value) << I2SC_MR_MODE_Pos))  
#define   I2SC_MR_MODE_SLAVE_Val              _U_(0x0)                                             /**< (I2SC_MR) I2SCK and i2SWS pin inputs used as bit clock and word select/frame synchronization.  */
#define   I2SC_MR_MODE_MASTER_Val             _U_(0x1)                                             /**< (I2SC_MR) Bit clock and word select/frame synchronization generated by I2SC from MCK and output to I2SCK and I2SWS pins. MCK is output as master clock on I2SMCK if I2SC_MR.IMCKMODE is set.  */
#define I2SC_MR_MODE_SLAVE                    (I2SC_MR_MODE_SLAVE_Val << I2SC_MR_MODE_Pos)         /**< (I2SC_MR) I2SCK and i2SWS pin inputs used as bit clock and word select/frame synchronization. Position  */
#define I2SC_MR_MODE_MASTER                   (I2SC_MR_MODE_MASTER_Val << I2SC_MR_MODE_Pos)        /**< (I2SC_MR) Bit clock and word select/frame synchronization generated by I2SC from MCK and output to I2SCK and I2SWS pins. MCK is output as master clock on I2SMCK if I2SC_MR.IMCKMODE is set. Position  */
#define I2SC_MR_DATALENGTH_Pos                _U_(2)                                               /**< (I2SC_MR) Data Word Length Position */
#define I2SC_MR_DATALENGTH_Msk                (_U_(0x7) << I2SC_MR_DATALENGTH_Pos)                 /**< (I2SC_MR) Data Word Length Mask */
#define I2SC_MR_DATALENGTH(value)             (I2SC_MR_DATALENGTH_Msk & ((value) << I2SC_MR_DATALENGTH_Pos))
#define   I2SC_MR_DATALENGTH_32_BITS_Val      _U_(0x0)                                             /**< (I2SC_MR) Data length is set to 32 bits  */
#define   I2SC_MR_DATALENGTH_24_BITS_Val      _U_(0x1)                                             /**< (I2SC_MR) Data length is set to 24 bits  */
#define   I2SC_MR_DATALENGTH_20_BITS_Val      _U_(0x2)                                             /**< (I2SC_MR) Data length is set to 20 bits  */
#define   I2SC_MR_DATALENGTH_18_BITS_Val      _U_(0x3)                                             /**< (I2SC_MR) Data length is set to 18 bits  */
#define   I2SC_MR_DATALENGTH_16_BITS_Val      _U_(0x4)                                             /**< (I2SC_MR) Data length is set to 16 bits  */
#define   I2SC_MR_DATALENGTH_16_BITS_COMPACT_Val _U_(0x5)                                             /**< (I2SC_MR) Data length is set to 16-bit compact stereo. Left sample in bits 15:0 and right sample in bits 31:16 of same word.  */
#define   I2SC_MR_DATALENGTH_8_BITS_Val       _U_(0x6)                                             /**< (I2SC_MR) Data length is set to 8 bits  */
#define   I2SC_MR_DATALENGTH_8_BITS_COMPACT_Val _U_(0x7)                                             /**< (I2SC_MR) Data length is set to 8-bit compact stereo. Left sample in bits 7:0 and right sample in bits 15:8 of the same word.  */
#define I2SC_MR_DATALENGTH_32_BITS            (I2SC_MR_DATALENGTH_32_BITS_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 32 bits Position  */
#define I2SC_MR_DATALENGTH_24_BITS            (I2SC_MR_DATALENGTH_24_BITS_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 24 bits Position  */
#define I2SC_MR_DATALENGTH_20_BITS            (I2SC_MR_DATALENGTH_20_BITS_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 20 bits Position  */
#define I2SC_MR_DATALENGTH_18_BITS            (I2SC_MR_DATALENGTH_18_BITS_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 18 bits Position  */
#define I2SC_MR_DATALENGTH_16_BITS            (I2SC_MR_DATALENGTH_16_BITS_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 16 bits Position  */
#define I2SC_MR_DATALENGTH_16_BITS_COMPACT    (I2SC_MR_DATALENGTH_16_BITS_COMPACT_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 16-bit compact stereo. Left sample in bits 15:0 and right sample in bits 31:16 of same word. Position  */
#define I2SC_MR_DATALENGTH_8_BITS             (I2SC_MR_DATALENGTH_8_BITS_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 8 bits Position  */
#define I2SC_MR_DATALENGTH_8_BITS_COMPACT     (I2SC_MR_DATALENGTH_8_BITS_COMPACT_Val << I2SC_MR_DATALENGTH_Pos) /**< (I2SC_MR) Data length is set to 8-bit compact stereo. Left sample in bits 7:0 and right sample in bits 15:8 of the same word. Position  */
#define I2SC_MR_RXMONO_Pos                    _U_(8)                                               /**< (I2SC_MR) Receive Mono Position */
#define I2SC_MR_RXMONO_Msk                    (_U_(0x1) << I2SC_MR_RXMONO_Pos)                     /**< (I2SC_MR) Receive Mono Mask */
#define I2SC_MR_RXMONO(value)                 (I2SC_MR_RXMONO_Msk & ((value) << I2SC_MR_RXMONO_Pos))
#define I2SC_MR_RXDMA_Pos                     _U_(9)                                               /**< (I2SC_MR) Single or Multiple PDC Channels for Receiver Position */
#define I2SC_MR_RXDMA_Msk                     (_U_(0x1) << I2SC_MR_RXDMA_Pos)                      /**< (I2SC_MR) Single or Multiple PDC Channels for Receiver Mask */
#define I2SC_MR_RXDMA(value)                  (I2SC_MR_RXDMA_Msk & ((value) << I2SC_MR_RXDMA_Pos))
#define I2SC_MR_RXLOOP_Pos                    _U_(10)                                              /**< (I2SC_MR) Loop-back Test Mode Position */
#define I2SC_MR_RXLOOP_Msk                    (_U_(0x1) << I2SC_MR_RXLOOP_Pos)                     /**< (I2SC_MR) Loop-back Test Mode Mask */
#define I2SC_MR_RXLOOP(value)                 (I2SC_MR_RXLOOP_Msk & ((value) << I2SC_MR_RXLOOP_Pos))
#define I2SC_MR_TXMONO_Pos                    _U_(12)                                              /**< (I2SC_MR) Transmit Mono Position */
#define I2SC_MR_TXMONO_Msk                    (_U_(0x1) << I2SC_MR_TXMONO_Pos)                     /**< (I2SC_MR) Transmit Mono Mask */
#define I2SC_MR_TXMONO(value)                 (I2SC_MR_TXMONO_Msk & ((value) << I2SC_MR_TXMONO_Pos))
#define I2SC_MR_TXDMA_Pos                     _U_(13)                                              /**< (I2SC_MR) Single or Multiple PDC Channels for Transmitter Position */
#define I2SC_MR_TXDMA_Msk                     (_U_(0x1) << I2SC_MR_TXDMA_Pos)                      /**< (I2SC_MR) Single or Multiple PDC Channels for Transmitter Mask */
#define I2SC_MR_TXDMA(value)                  (I2SC_MR_TXDMA_Msk & ((value) << I2SC_MR_TXDMA_Pos))
#define I2SC_MR_TXSAME_Pos                    _U_(14)                                              /**< (I2SC_MR) Transmit Data when Underrun Position */
#define I2SC_MR_TXSAME_Msk                    (_U_(0x1) << I2SC_MR_TXSAME_Pos)                     /**< (I2SC_MR) Transmit Data when Underrun Mask */
#define I2SC_MR_TXSAME(value)                 (I2SC_MR_TXSAME_Msk & ((value) << I2SC_MR_TXSAME_Pos))
#define I2SC_MR_IMCKDIV_Pos                   _U_(16)                                              /**< (I2SC_MR) Selected Clock to I2SC Master Clock Ratio Position */
#define I2SC_MR_IMCKDIV_Msk                   (_U_(0x3F) << I2SC_MR_IMCKDIV_Pos)                   /**< (I2SC_MR) Selected Clock to I2SC Master Clock Ratio Mask */
#define I2SC_MR_IMCKDIV(value)                (I2SC_MR_IMCKDIV_Msk & ((value) << I2SC_MR_IMCKDIV_Pos))
#define I2SC_MR_IMCKFS_Pos                    _U_(24)                                              /**< (I2SC_MR) Master Clock to fs Ratio Position */
#define I2SC_MR_IMCKFS_Msk                    (_U_(0x3F) << I2SC_MR_IMCKFS_Pos)                    /**< (I2SC_MR) Master Clock to fs Ratio Mask */
#define I2SC_MR_IMCKFS(value)                 (I2SC_MR_IMCKFS_Msk & ((value) << I2SC_MR_IMCKFS_Pos))
#define   I2SC_MR_IMCKFS_M2SF32_Val           _U_(0x0)                                             /**< (I2SC_MR) Sample frequency ratio set to 32  */
#define   I2SC_MR_IMCKFS_M2SF64_Val           _U_(0x1)                                             /**< (I2SC_MR) Sample frequency ratio set to 64  */
#define   I2SC_MR_IMCKFS_M2SF96_Val           _U_(0x2)                                             /**< (I2SC_MR) Sample frequency ratio set to 96  */
#define   I2SC_MR_IMCKFS_M2SF128_Val          _U_(0x3)                                             /**< (I2SC_MR) Sample frequency ratio set to 128  */
#define   I2SC_MR_IMCKFS_M2SF192_Val          _U_(0x5)                                             /**< (I2SC_MR) Sample frequency ratio set to 192  */
#define   I2SC_MR_IMCKFS_M2SF256_Val          _U_(0x7)                                             /**< (I2SC_MR) Sample frequency ratio set to 256  */
#define   I2SC_MR_IMCKFS_M2SF384_Val          _U_(0xB)                                             /**< (I2SC_MR) Sample frequency ratio set to 384  */
#define   I2SC_MR_IMCKFS_M2SF512_Val          _U_(0xF)                                             /**< (I2SC_MR) Sample frequency ratio set to 512  */
#define   I2SC_MR_IMCKFS_M2SF768_Val          _U_(0x17)                                            /**< (I2SC_MR) Sample frequency ratio set to 768  */
#define   I2SC_MR_IMCKFS_M2SF1024_Val         _U_(0x1F)                                            /**< (I2SC_MR) Sample frequency ratio set to 1024  */
#define   I2SC_MR_IMCKFS_M2SF1536_Val         _U_(0x2F)                                            /**< (I2SC_MR) Sample frequency ratio set to 1536  */
#define   I2SC_MR_IMCKFS_M2SF2048_Val         _U_(0x3F)                                            /**< (I2SC_MR) Sample frequency ratio set to 2048  */
#define I2SC_MR_IMCKFS_M2SF32                 (I2SC_MR_IMCKFS_M2SF32_Val << I2SC_MR_IMCKFS_Pos)    /**< (I2SC_MR) Sample frequency ratio set to 32 Position  */
#define I2SC_MR_IMCKFS_M2SF64                 (I2SC_MR_IMCKFS_M2SF64_Val << I2SC_MR_IMCKFS_Pos)    /**< (I2SC_MR) Sample frequency ratio set to 64 Position  */
#define I2SC_MR_IMCKFS_M2SF96                 (I2SC_MR_IMCKFS_M2SF96_Val << I2SC_MR_IMCKFS_Pos)    /**< (I2SC_MR) Sample frequency ratio set to 96 Position  */
#define I2SC_MR_IMCKFS_M2SF128                (I2SC_MR_IMCKFS_M2SF128_Val << I2SC_MR_IMCKFS_Pos)   /**< (I2SC_MR) Sample frequency ratio set to 128 Position  */
#define I2SC_MR_IMCKFS_M2SF192                (I2SC_MR_IMCKFS_M2SF192_Val << I2SC_MR_IMCKFS_Pos)   /**< (I2SC_MR) Sample frequency ratio set to 192 Position  */
#define I2SC_MR_IMCKFS_M2SF256                (I2SC_MR_IMCKFS_M2SF256_Val << I2SC_MR_IMCKFS_Pos)   /**< (I2SC_MR) Sample frequency ratio set to 256 Position  */
#define I2SC_MR_IMCKFS_M2SF384                (I2SC_MR_IMCKFS_M2SF384_Val << I2SC_MR_IMCKFS_Pos)   /**< (I2SC_MR) Sample frequency ratio set to 384 Position  */
#define I2SC_MR_IMCKFS_M2SF512                (I2SC_MR_IMCKFS_M2SF512_Val << I2SC_MR_IMCKFS_Pos)   /**< (I2SC_MR) Sample frequency ratio set to 512 Position  */
#define I2SC_MR_IMCKFS_M2SF768                (I2SC_MR_IMCKFS_M2SF768_Val << I2SC_MR_IMCKFS_Pos)   /**< (I2SC_MR) Sample frequency ratio set to 768 Position  */
#define I2SC_MR_IMCKFS_M2SF1024               (I2SC_MR_IMCKFS_M2SF1024_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 1024 Position  */
#define I2SC_MR_IMCKFS_M2SF1536               (I2SC_MR_IMCKFS_M2SF1536_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 1536 Position  */
#define I2SC_MR_IMCKFS_M2SF2048               (I2SC_MR_IMCKFS_M2SF2048_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 2048 Position  */
#define I2SC_MR_IMCKMODE_Pos                  _U_(30)                                              /**< (I2SC_MR) Master Clock Mode Position */
#define I2SC_MR_IMCKMODE_Msk                  (_U_(0x1) << I2SC_MR_IMCKMODE_Pos)                   /**< (I2SC_MR) Master Clock Mode Mask */
#define I2SC_MR_IMCKMODE(value)               (I2SC_MR_IMCKMODE_Msk & ((value) << I2SC_MR_IMCKMODE_Pos))
#define I2SC_MR_IWS_Pos                       _U_(31)                                              /**< (I2SC_MR) I2SWS TDM Slot Width Position */
#define I2SC_MR_IWS_Msk                       (_U_(0x1) << I2SC_MR_IWS_Pos)                        /**< (I2SC_MR) I2SWS TDM Slot Width Mask */
#define I2SC_MR_IWS(value)                    (I2SC_MR_IWS_Msk & ((value) << I2SC_MR_IWS_Pos))    
#define I2SC_MR_Msk                           _U_(0xFF3F771D)                                      /**< (I2SC_MR) Register Mask  */


/* -------- I2SC_SR : (I2SC Offset: 0x08) ( R/ 32) Status Register -------- */
#define I2SC_SR_RXEN_Pos                      _U_(0)                                               /**< (I2SC_SR) Receiver Enabled Position */
#define I2SC_SR_RXEN_Msk                      (_U_(0x1) << I2SC_SR_RXEN_Pos)                       /**< (I2SC_SR) Receiver Enabled Mask */
#define I2SC_SR_RXEN(value)                   (I2SC_SR_RXEN_Msk & ((value) << I2SC_SR_RXEN_Pos))  
#define I2SC_SR_RXRDY_Pos                     _U_(1)                                               /**< (I2SC_SR) Receive Ready Position */
#define I2SC_SR_RXRDY_Msk                     (_U_(0x1) << I2SC_SR_RXRDY_Pos)                      /**< (I2SC_SR) Receive Ready Mask */
#define I2SC_SR_RXRDY(value)                  (I2SC_SR_RXRDY_Msk & ((value) << I2SC_SR_RXRDY_Pos))
#define I2SC_SR_RXOR_Pos                      _U_(2)                                               /**< (I2SC_SR) Receive Overrun Position */
#define I2SC_SR_RXOR_Msk                      (_U_(0x1) << I2SC_SR_RXOR_Pos)                       /**< (I2SC_SR) Receive Overrun Mask */
#define I2SC_SR_RXOR(value)                   (I2SC_SR_RXOR_Msk & ((value) << I2SC_SR_RXOR_Pos))  
#define I2SC_SR_ENDRX_Pos                     _U_(3)                                               /**< (I2SC_SR) End of Receiver Transfer Position */
#define I2SC_SR_ENDRX_Msk                     (_U_(0x1) << I2SC_SR_ENDRX_Pos)                      /**< (I2SC_SR) End of Receiver Transfer Mask */
#define I2SC_SR_ENDRX(value)                  (I2SC_SR_ENDRX_Msk & ((value) << I2SC_SR_ENDRX_Pos))
#define I2SC_SR_TXEN_Pos                      _U_(4)                                               /**< (I2SC_SR) Transmitter Enabled Position */
#define I2SC_SR_TXEN_Msk                      (_U_(0x1) << I2SC_SR_TXEN_Pos)                       /**< (I2SC_SR) Transmitter Enabled Mask */
#define I2SC_SR_TXEN(value)                   (I2SC_SR_TXEN_Msk & ((value) << I2SC_SR_TXEN_Pos))  
#define I2SC_SR_TXRDY_Pos                     _U_(5)                                               /**< (I2SC_SR) Transmit Ready Position */
#define I2SC_SR_TXRDY_Msk                     (_U_(0x1) << I2SC_SR_TXRDY_Pos)                      /**< (I2SC_SR) Transmit Ready Mask */
#define I2SC_SR_TXRDY(value)                  (I2SC_SR_TXRDY_Msk & ((value) << I2SC_SR_TXRDY_Pos))
#define I2SC_SR_TXUR_Pos                      _U_(6)                                               /**< (I2SC_SR) Transmit Underrun Position */
#define I2SC_SR_TXUR_Msk                      (_U_(0x1) << I2SC_SR_TXUR_Pos)                       /**< (I2SC_SR) Transmit Underrun Mask */
#define I2SC_SR_TXUR(value)                   (I2SC_SR_TXUR_Msk & ((value) << I2SC_SR_TXUR_Pos))  
#define I2SC_SR_ENDTX_Pos                     _U_(7)                                               /**< (I2SC_SR) End of Transmitter Transfer Position */
#define I2SC_SR_ENDTX_Msk                     (_U_(0x1) << I2SC_SR_ENDTX_Pos)                      /**< (I2SC_SR) End of Transmitter Transfer Mask */
#define I2SC_SR_ENDTX(value)                  (I2SC_SR_ENDTX_Msk & ((value) << I2SC_SR_ENDTX_Pos))
#define I2SC_SR_RXORCH_Pos                    _U_(8)                                               /**< (I2SC_SR) Receive Overrun Channel Position */
#define I2SC_SR_RXORCH_Msk                    (_U_(0x3) << I2SC_SR_RXORCH_Pos)                     /**< (I2SC_SR) Receive Overrun Channel Mask */
#define I2SC_SR_RXORCH(value)                 (I2SC_SR_RXORCH_Msk & ((value) << I2SC_SR_RXORCH_Pos))
#define I2SC_SR_RXBUFF_Pos                    _U_(19)                                              /**< (I2SC_SR) Receive Buffer Full Position */
#define I2SC_SR_RXBUFF_Msk                    (_U_(0x1) << I2SC_SR_RXBUFF_Pos)                     /**< (I2SC_SR) Receive Buffer Full Mask */
#define I2SC_SR_RXBUFF(value)                 (I2SC_SR_RXBUFF_Msk & ((value) << I2SC_SR_RXBUFF_Pos))
#define I2SC_SR_TXURCH_Pos                    _U_(20)                                              /**< (I2SC_SR) Transmit Underrun Channel Position */
#define I2SC_SR_TXURCH_Msk                    (_U_(0x3) << I2SC_SR_TXURCH_Pos)                     /**< (I2SC_SR) Transmit Underrun Channel Mask */
#define I2SC_SR_TXURCH(value)                 (I2SC_SR_TXURCH_Msk & ((value) << I2SC_SR_TXURCH_Pos))
#define I2SC_SR_TXBUFE_Pos                    _U_(31)                                              /**< (I2SC_SR) Transmit Buffer Empty Position */
#define I2SC_SR_TXBUFE_Msk                    (_U_(0x1) << I2SC_SR_TXBUFE_Pos)                     /**< (I2SC_SR) Transmit Buffer Empty Mask */
#define I2SC_SR_TXBUFE(value)                 (I2SC_SR_TXBUFE_Msk & ((value) << I2SC_SR_TXBUFE_Pos))
#define I2SC_SR_Msk                           _U_(0x803803FF)                                      /**< (I2SC_SR) Register Mask  */


/* -------- I2SC_SCR : (I2SC Offset: 0x0C) ( /W 32) Status Clear Register -------- */
#define I2SC_SCR_RXOR_Pos                     _U_(2)                                               /**< (I2SC_SCR) Receive Overrun Status Clear Position */
#define I2SC_SCR_RXOR_Msk                     (_U_(0x1) << I2SC_SCR_RXOR_Pos)                      /**< (I2SC_SCR) Receive Overrun Status Clear Mask */
#define I2SC_SCR_RXOR(value)                  (I2SC_SCR_RXOR_Msk & ((value) << I2SC_SCR_RXOR_Pos))
#define I2SC_SCR_TXUR_Pos                     _U_(6)                                               /**< (I2SC_SCR) Transmit Underrun Status Clear Position */
#define I2SC_SCR_TXUR_Msk                     (_U_(0x1) << I2SC_SCR_TXUR_Pos)                      /**< (I2SC_SCR) Transmit Underrun Status Clear Mask */
#define I2SC_SCR_TXUR(value)                  (I2SC_SCR_TXUR_Msk & ((value) << I2SC_SCR_TXUR_Pos))
#define I2SC_SCR_RXORCH_Pos                   _U_(8)                                               /**< (I2SC_SCR) Receive Overrun Per Channel Status Clear Position */
#define I2SC_SCR_RXORCH_Msk                   (_U_(0x3) << I2SC_SCR_RXORCH_Pos)                    /**< (I2SC_SCR) Receive Overrun Per Channel Status Clear Mask */
#define I2SC_SCR_RXORCH(value)                (I2SC_SCR_RXORCH_Msk & ((value) << I2SC_SCR_RXORCH_Pos))
#define I2SC_SCR_TXURCH_Pos                   _U_(20)                                              /**< (I2SC_SCR) Transmit Underrun Per Channel Status Clear Position */
#define I2SC_SCR_TXURCH_Msk                   (_U_(0x3) << I2SC_SCR_TXURCH_Pos)                    /**< (I2SC_SCR) Transmit Underrun Per Channel Status Clear Mask */
#define I2SC_SCR_TXURCH(value)                (I2SC_SCR_TXURCH_Msk & ((value) << I2SC_SCR_TXURCH_Pos))
#define I2SC_SCR_Msk                          _U_(0x00300344)                                      /**< (I2SC_SCR) Register Mask  */


/* -------- I2SC_SSR : (I2SC Offset: 0x10) ( /W 32) Status Set Register -------- */
#define I2SC_SSR_RXOR_Pos                     _U_(2)                                               /**< (I2SC_SSR) Receive Overrun Status Set Position */
#define I2SC_SSR_RXOR_Msk                     (_U_(0x1) << I2SC_SSR_RXOR_Pos)                      /**< (I2SC_SSR) Receive Overrun Status Set Mask */
#define I2SC_SSR_RXOR(value)                  (I2SC_SSR_RXOR_Msk & ((value) << I2SC_SSR_RXOR_Pos))
#define I2SC_SSR_TXUR_Pos                     _U_(6)                                               /**< (I2SC_SSR) Transmit Underrun Status Set Position */
#define I2SC_SSR_TXUR_Msk                     (_U_(0x1) << I2SC_SSR_TXUR_Pos)                      /**< (I2SC_SSR) Transmit Underrun Status Set Mask */
#define I2SC_SSR_TXUR(value)                  (I2SC_SSR_TXUR_Msk & ((value) << I2SC_SSR_TXUR_Pos))
#define I2SC_SSR_RXORCH_Pos                   _U_(8)                                               /**< (I2SC_SSR) Receive Overrun Per Channel Status Set Position */
#define I2SC_SSR_RXORCH_Msk                   (_U_(0x3) << I2SC_SSR_RXORCH_Pos)                    /**< (I2SC_SSR) Receive Overrun Per Channel Status Set Mask */
#define I2SC_SSR_RXORCH(value)                (I2SC_SSR_RXORCH_Msk & ((value) << I2SC_SSR_RXORCH_Pos))
#define I2SC_SSR_TXURCH_Pos                   _U_(20)                                              /**< (I2SC_SSR) Transmit Underrun Per Channel Status Set Position */
#define I2SC_SSR_TXURCH_Msk                   (_U_(0x3) << I2SC_SSR_TXURCH_Pos)                    /**< (I2SC_SSR) Transmit Underrun Per Channel Status Set Mask */
#define I2SC_SSR_TXURCH(value)                (I2SC_SSR_TXURCH_Msk & ((value) << I2SC_SSR_TXURCH_Pos))
#define I2SC_SSR_Msk                          _U_(0x00300344)                                      /**< (I2SC_SSR) Register Mask  */


/* -------- I2SC_IER : (I2SC Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define I2SC_IER_RXRDY_Pos                    _U_(1)                                               /**< (I2SC_IER) Receiver Ready Interrupt Enable Position */
#define I2SC_IER_RXRDY_Msk                    (_U_(0x1) << I2SC_IER_RXRDY_Pos)                     /**< (I2SC_IER) Receiver Ready Interrupt Enable Mask */
#define I2SC_IER_RXRDY(value)                 (I2SC_IER_RXRDY_Msk & ((value) << I2SC_IER_RXRDY_Pos))
#define I2SC_IER_RXOR_Pos                     _U_(2)                                               /**< (I2SC_IER) Receiver Overrun Interrupt Enable Position */
#define I2SC_IER_RXOR_Msk                     (_U_(0x1) << I2SC_IER_RXOR_Pos)                      /**< (I2SC_IER) Receiver Overrun Interrupt Enable Mask */
#define I2SC_IER_RXOR(value)                  (I2SC_IER_RXOR_Msk & ((value) << I2SC_IER_RXOR_Pos))
#define I2SC_IER_ENDRX_Pos                    _U_(3)                                               /**< (I2SC_IER) End of Reception Interrupt Enable Position */
#define I2SC_IER_ENDRX_Msk                    (_U_(0x1) << I2SC_IER_ENDRX_Pos)                     /**< (I2SC_IER) End of Reception Interrupt Enable Mask */
#define I2SC_IER_ENDRX(value)                 (I2SC_IER_ENDRX_Msk & ((value) << I2SC_IER_ENDRX_Pos))
#define I2SC_IER_TXRDY_Pos                    _U_(5)                                               /**< (I2SC_IER) Transmit Ready Interrupt Enable Position */
#define I2SC_IER_TXRDY_Msk                    (_U_(0x1) << I2SC_IER_TXRDY_Pos)                     /**< (I2SC_IER) Transmit Ready Interrupt Enable Mask */
#define I2SC_IER_TXRDY(value)                 (I2SC_IER_TXRDY_Msk & ((value) << I2SC_IER_TXRDY_Pos))
#define I2SC_IER_TXUR_Pos                     _U_(6)                                               /**< (I2SC_IER) Transmit Underflow Interrupt Enable Position */
#define I2SC_IER_TXUR_Msk                     (_U_(0x1) << I2SC_IER_TXUR_Pos)                      /**< (I2SC_IER) Transmit Underflow Interrupt Enable Mask */
#define I2SC_IER_TXUR(value)                  (I2SC_IER_TXUR_Msk & ((value) << I2SC_IER_TXUR_Pos))
#define I2SC_IER_ENDTX_Pos                    _U_(7)                                               /**< (I2SC_IER) End of Transmission Interrupt Enable Position */
#define I2SC_IER_ENDTX_Msk                    (_U_(0x1) << I2SC_IER_ENDTX_Pos)                     /**< (I2SC_IER) End of Transmission Interrupt Enable Mask */
#define I2SC_IER_ENDTX(value)                 (I2SC_IER_ENDTX_Msk & ((value) << I2SC_IER_ENDTX_Pos))
#define I2SC_IER_RXFULL_Pos                   _U_(19)                                              /**< (I2SC_IER) Receive Buffer Full Interrupt Enable Position */
#define I2SC_IER_RXFULL_Msk                   (_U_(0x1) << I2SC_IER_RXFULL_Pos)                    /**< (I2SC_IER) Receive Buffer Full Interrupt Enable Mask */
#define I2SC_IER_RXFULL(value)                (I2SC_IER_RXFULL_Msk & ((value) << I2SC_IER_RXFULL_Pos))
#define I2SC_IER_TXEMPTY_Pos                  _U_(31)                                              /**< (I2SC_IER) Transmit Buffer Empty Interrupt Enable Position */
#define I2SC_IER_TXEMPTY_Msk                  (_U_(0x1) << I2SC_IER_TXEMPTY_Pos)                   /**< (I2SC_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define I2SC_IER_TXEMPTY(value)               (I2SC_IER_TXEMPTY_Msk & ((value) << I2SC_IER_TXEMPTY_Pos))
#define I2SC_IER_Msk                          _U_(0x800800EE)                                      /**< (I2SC_IER) Register Mask  */


/* -------- I2SC_IDR : (I2SC Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define I2SC_IDR_RXRDY_Pos                    _U_(1)                                               /**< (I2SC_IDR) Receiver Ready Interrupt Disable Position */
#define I2SC_IDR_RXRDY_Msk                    (_U_(0x1) << I2SC_IDR_RXRDY_Pos)                     /**< (I2SC_IDR) Receiver Ready Interrupt Disable Mask */
#define I2SC_IDR_RXRDY(value)                 (I2SC_IDR_RXRDY_Msk & ((value) << I2SC_IDR_RXRDY_Pos))
#define I2SC_IDR_RXOR_Pos                     _U_(2)                                               /**< (I2SC_IDR) Receiver Overrun Interrupt Disable Position */
#define I2SC_IDR_RXOR_Msk                     (_U_(0x1) << I2SC_IDR_RXOR_Pos)                      /**< (I2SC_IDR) Receiver Overrun Interrupt Disable Mask */
#define I2SC_IDR_RXOR(value)                  (I2SC_IDR_RXOR_Msk & ((value) << I2SC_IDR_RXOR_Pos))
#define I2SC_IDR_ENDRX_Pos                    _U_(3)                                               /**< (I2SC_IDR) End of Reception Interrupt Disable Position */
#define I2SC_IDR_ENDRX_Msk                    (_U_(0x1) << I2SC_IDR_ENDRX_Pos)                     /**< (I2SC_IDR) End of Reception Interrupt Disable Mask */
#define I2SC_IDR_ENDRX(value)                 (I2SC_IDR_ENDRX_Msk & ((value) << I2SC_IDR_ENDRX_Pos))
#define I2SC_IDR_TXRDY_Pos                    _U_(5)                                               /**< (I2SC_IDR) Transmit Ready Interrupt Disable Position */
#define I2SC_IDR_TXRDY_Msk                    (_U_(0x1) << I2SC_IDR_TXRDY_Pos)                     /**< (I2SC_IDR) Transmit Ready Interrupt Disable Mask */
#define I2SC_IDR_TXRDY(value)                 (I2SC_IDR_TXRDY_Msk & ((value) << I2SC_IDR_TXRDY_Pos))
#define I2SC_IDR_TXUR_Pos                     _U_(6)                                               /**< (I2SC_IDR) Transmit Underflow Interrupt Disable Position */
#define I2SC_IDR_TXUR_Msk                     (_U_(0x1) << I2SC_IDR_TXUR_Pos)                      /**< (I2SC_IDR) Transmit Underflow Interrupt Disable Mask */
#define I2SC_IDR_TXUR(value)                  (I2SC_IDR_TXUR_Msk & ((value) << I2SC_IDR_TXUR_Pos))
#define I2SC_IDR_ENDTX_Pos                    _U_(7)                                               /**< (I2SC_IDR) End of Transmission Interrupt Disable Position */
#define I2SC_IDR_ENDTX_Msk                    (_U_(0x1) << I2SC_IDR_ENDTX_Pos)                     /**< (I2SC_IDR) End of Transmission Interrupt Disable Mask */
#define I2SC_IDR_ENDTX(value)                 (I2SC_IDR_ENDTX_Msk & ((value) << I2SC_IDR_ENDTX_Pos))
#define I2SC_IDR_RXFULL_Pos                   _U_(19)                                              /**< (I2SC_IDR) Receive Buffer Full Interrupt Disable Position */
#define I2SC_IDR_RXFULL_Msk                   (_U_(0x1) << I2SC_IDR_RXFULL_Pos)                    /**< (I2SC_IDR) Receive Buffer Full Interrupt Disable Mask */
#define I2SC_IDR_RXFULL(value)                (I2SC_IDR_RXFULL_Msk & ((value) << I2SC_IDR_RXFULL_Pos))
#define I2SC_IDR_TXEMPTY_Pos                  _U_(31)                                              /**< (I2SC_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define I2SC_IDR_TXEMPTY_Msk                  (_U_(0x1) << I2SC_IDR_TXEMPTY_Pos)                   /**< (I2SC_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define I2SC_IDR_TXEMPTY(value)               (I2SC_IDR_TXEMPTY_Msk & ((value) << I2SC_IDR_TXEMPTY_Pos))
#define I2SC_IDR_Msk                          _U_(0x800800EE)                                      /**< (I2SC_IDR) Register Mask  */


/* -------- I2SC_IMR : (I2SC Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define I2SC_IMR_RXRDY_Pos                    _U_(1)                                               /**< (I2SC_IMR) Receiver Ready Interrupt Disable Position */
#define I2SC_IMR_RXRDY_Msk                    (_U_(0x1) << I2SC_IMR_RXRDY_Pos)                     /**< (I2SC_IMR) Receiver Ready Interrupt Disable Mask */
#define I2SC_IMR_RXRDY(value)                 (I2SC_IMR_RXRDY_Msk & ((value) << I2SC_IMR_RXRDY_Pos))
#define I2SC_IMR_RXOR_Pos                     _U_(2)                                               /**< (I2SC_IMR) Receiver Overrun Interrupt Disable Position */
#define I2SC_IMR_RXOR_Msk                     (_U_(0x1) << I2SC_IMR_RXOR_Pos)                      /**< (I2SC_IMR) Receiver Overrun Interrupt Disable Mask */
#define I2SC_IMR_RXOR(value)                  (I2SC_IMR_RXOR_Msk & ((value) << I2SC_IMR_RXOR_Pos))
#define I2SC_IMR_ENDRX_Pos                    _U_(3)                                               /**< (I2SC_IMR) End of Reception Interrupt Disable Position */
#define I2SC_IMR_ENDRX_Msk                    (_U_(0x1) << I2SC_IMR_ENDRX_Pos)                     /**< (I2SC_IMR) End of Reception Interrupt Disable Mask */
#define I2SC_IMR_ENDRX(value)                 (I2SC_IMR_ENDRX_Msk & ((value) << I2SC_IMR_ENDRX_Pos))
#define I2SC_IMR_TXRDY_Pos                    _U_(5)                                               /**< (I2SC_IMR) Transmit Ready Interrupt Disable Position */
#define I2SC_IMR_TXRDY_Msk                    (_U_(0x1) << I2SC_IMR_TXRDY_Pos)                     /**< (I2SC_IMR) Transmit Ready Interrupt Disable Mask */
#define I2SC_IMR_TXRDY(value)                 (I2SC_IMR_TXRDY_Msk & ((value) << I2SC_IMR_TXRDY_Pos))
#define I2SC_IMR_TXUR_Pos                     _U_(6)                                               /**< (I2SC_IMR) Transmit Underflow Interrupt Disable Position */
#define I2SC_IMR_TXUR_Msk                     (_U_(0x1) << I2SC_IMR_TXUR_Pos)                      /**< (I2SC_IMR) Transmit Underflow Interrupt Disable Mask */
#define I2SC_IMR_TXUR(value)                  (I2SC_IMR_TXUR_Msk & ((value) << I2SC_IMR_TXUR_Pos))
#define I2SC_IMR_ENDTX_Pos                    _U_(7)                                               /**< (I2SC_IMR) End of Transmission Interrupt Disable Position */
#define I2SC_IMR_ENDTX_Msk                    (_U_(0x1) << I2SC_IMR_ENDTX_Pos)                     /**< (I2SC_IMR) End of Transmission Interrupt Disable Mask */
#define I2SC_IMR_ENDTX(value)                 (I2SC_IMR_ENDTX_Msk & ((value) << I2SC_IMR_ENDTX_Pos))
#define I2SC_IMR_RXFULL_Pos                   _U_(19)                                              /**< (I2SC_IMR) Receive Buffer Full Interrupt Disable Position */
#define I2SC_IMR_RXFULL_Msk                   (_U_(0x1) << I2SC_IMR_RXFULL_Pos)                    /**< (I2SC_IMR) Receive Buffer Full Interrupt Disable Mask */
#define I2SC_IMR_RXFULL(value)                (I2SC_IMR_RXFULL_Msk & ((value) << I2SC_IMR_RXFULL_Pos))
#define I2SC_IMR_TXEMPTY_Pos                  _U_(31)                                              /**< (I2SC_IMR) Transmit Buffer Empty Interrupt Disable Position */
#define I2SC_IMR_TXEMPTY_Msk                  (_U_(0x1) << I2SC_IMR_TXEMPTY_Pos)                   /**< (I2SC_IMR) Transmit Buffer Empty Interrupt Disable Mask */
#define I2SC_IMR_TXEMPTY(value)               (I2SC_IMR_TXEMPTY_Msk & ((value) << I2SC_IMR_TXEMPTY_Pos))
#define I2SC_IMR_Msk                          _U_(0x800800EE)                                      /**< (I2SC_IMR) Register Mask  */


/* -------- I2SC_RHR : (I2SC Offset: 0x20) ( R/ 32) Receiver Holding Register -------- */
#define I2SC_RHR_RHR_Pos                      _U_(0)                                               /**< (I2SC_RHR) Receiver Holding Register Position */
#define I2SC_RHR_RHR_Msk                      (_U_(0xFFFFFFFF) << I2SC_RHR_RHR_Pos)                /**< (I2SC_RHR) Receiver Holding Register Mask */
#define I2SC_RHR_RHR(value)                   (I2SC_RHR_RHR_Msk & ((value) << I2SC_RHR_RHR_Pos))  
#define I2SC_RHR_Msk                          _U_(0xFFFFFFFF)                                      /**< (I2SC_RHR) Register Mask  */


/* -------- I2SC_THR : (I2SC Offset: 0x24) ( /W 32) Transmitter Holding Register -------- */
#define I2SC_THR_THR_Pos                      _U_(0)                                               /**< (I2SC_THR) Transmitter Holding Register Position */
#define I2SC_THR_THR_Msk                      (_U_(0xFFFFFFFF) << I2SC_THR_THR_Pos)                /**< (I2SC_THR) Transmitter Holding Register Mask */
#define I2SC_THR_THR(value)                   (I2SC_THR_THR_Msk & ((value) << I2SC_THR_THR_Pos))  
#define I2SC_THR_Msk                          _U_(0xFFFFFFFF)                                      /**< (I2SC_THR) Register Mask  */


/* -------- I2SC_RPR : (I2SC Offset: 0x100) (R/W 32) Receive Pointer Register - Left side -------- */
#define I2SC_RPR_RXPTR_Pos                    _U_(0)                                               /**< (I2SC_RPR) Receive Pointer Register Position */
#define I2SC_RPR_RXPTR_Msk                    (_U_(0xFFFFFFFF) << I2SC_RPR_RXPTR_Pos)              /**< (I2SC_RPR) Receive Pointer Register Mask */
#define I2SC_RPR_RXPTR(value)                 (I2SC_RPR_RXPTR_Msk & ((value) << I2SC_RPR_RXPTR_Pos))
#define I2SC_RPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (I2SC_RPR) Register Mask  */


/* -------- I2SC_RCR : (I2SC Offset: 0x104) (R/W 32) Receive Counter Register - Left side -------- */
#define I2SC_RCR_RXCTR_Pos                    _U_(0)                                               /**< (I2SC_RCR) Receive Counter Register Position */
#define I2SC_RCR_RXCTR_Msk                    (_U_(0xFFFF) << I2SC_RCR_RXCTR_Pos)                  /**< (I2SC_RCR) Receive Counter Register Mask */
#define I2SC_RCR_RXCTR(value)                 (I2SC_RCR_RXCTR_Msk & ((value) << I2SC_RCR_RXCTR_Pos))
#define I2SC_RCR_Msk                          _U_(0x0000FFFF)                                      /**< (I2SC_RCR) Register Mask  */


/* -------- I2SC_TPR : (I2SC Offset: 0x108) (R/W 32) Transmit Pointer Register - Left side -------- */
#define I2SC_TPR_TXPTR_Pos                    _U_(0)                                               /**< (I2SC_TPR) Transmit Counter Register Position */
#define I2SC_TPR_TXPTR_Msk                    (_U_(0xFFFFFFFF) << I2SC_TPR_TXPTR_Pos)              /**< (I2SC_TPR) Transmit Counter Register Mask */
#define I2SC_TPR_TXPTR(value)                 (I2SC_TPR_TXPTR_Msk & ((value) << I2SC_TPR_TXPTR_Pos))
#define I2SC_TPR_Msk                          _U_(0xFFFFFFFF)                                      /**< (I2SC_TPR) Register Mask  */


/* -------- I2SC_TCR : (I2SC Offset: 0x10C) (R/W 32) Transmit Counter Register - Left side -------- */
#define I2SC_TCR_TXCTR_Pos                    _U_(0)                                               /**< (I2SC_TCR) Transmit Counter Register Position */
#define I2SC_TCR_TXCTR_Msk                    (_U_(0xFFFF) << I2SC_TCR_TXCTR_Pos)                  /**< (I2SC_TCR) Transmit Counter Register Mask */
#define I2SC_TCR_TXCTR(value)                 (I2SC_TCR_TXCTR_Msk & ((value) << I2SC_TCR_TXCTR_Pos))
#define I2SC_TCR_Msk                          _U_(0x0000FFFF)                                      /**< (I2SC_TCR) Register Mask  */


/* -------- I2SC_RNPR : (I2SC Offset: 0x110) (R/W 32) Receive Next Pointer Register - Left side -------- */
#define I2SC_RNPR_RXNPTR_Pos                  _U_(0)                                               /**< (I2SC_RNPR) Receive Next Pointer Position */
#define I2SC_RNPR_RXNPTR_Msk                  (_U_(0xFFFFFFFF) << I2SC_RNPR_RXNPTR_Pos)            /**< (I2SC_RNPR) Receive Next Pointer Mask */
#define I2SC_RNPR_RXNPTR(value)               (I2SC_RNPR_RXNPTR_Msk & ((value) << I2SC_RNPR_RXNPTR_Pos))
#define I2SC_RNPR_Msk                         _U_(0xFFFFFFFF)                                      /**< (I2SC_RNPR) Register Mask  */


/* -------- I2SC_RNCR : (I2SC Offset: 0x114) (R/W 32) Receive Next Counter Register - Left side -------- */
#define I2SC_RNCR_RXNCTR_Pos                  _U_(0)                                               /**< (I2SC_RNCR) Receive Next Counter Position */
#define I2SC_RNCR_RXNCTR_Msk                  (_U_(0xFFFF) << I2SC_RNCR_RXNCTR_Pos)                /**< (I2SC_RNCR) Receive Next Counter Mask */
#define I2SC_RNCR_RXNCTR(value)               (I2SC_RNCR_RXNCTR_Msk & ((value) << I2SC_RNCR_RXNCTR_Pos))
#define I2SC_RNCR_Msk                         _U_(0x0000FFFF)                                      /**< (I2SC_RNCR) Register Mask  */


/* -------- I2SC_TNPR : (I2SC Offset: 0x118) (R/W 32) Transmit Next Pointer Register - Left side -------- */
#define I2SC_TNPR_TXNPTR_Pos                  _U_(0)                                               /**< (I2SC_TNPR) Transmit Next Pointer Position */
#define I2SC_TNPR_TXNPTR_Msk                  (_U_(0xFFFFFFFF) << I2SC_TNPR_TXNPTR_Pos)            /**< (I2SC_TNPR) Transmit Next Pointer Mask */
#define I2SC_TNPR_TXNPTR(value)               (I2SC_TNPR_TXNPTR_Msk & ((value) << I2SC_TNPR_TXNPTR_Pos))
#define I2SC_TNPR_Msk                         _U_(0xFFFFFFFF)                                      /**< (I2SC_TNPR) Register Mask  */


/* -------- I2SC_TNCR : (I2SC Offset: 0x11C) (R/W 32) Transmit Next Counter Register - Left side -------- */
#define I2SC_TNCR_TXNCTR_Pos                  _U_(0)                                               /**< (I2SC_TNCR) Transmit Counter Next Position */
#define I2SC_TNCR_TXNCTR_Msk                  (_U_(0xFFFF) << I2SC_TNCR_TXNCTR_Pos)                /**< (I2SC_TNCR) Transmit Counter Next Mask */
#define I2SC_TNCR_TXNCTR(value)               (I2SC_TNCR_TXNCTR_Msk & ((value) << I2SC_TNCR_TXNCTR_Pos))
#define I2SC_TNCR_Msk                         _U_(0x0000FFFF)                                      /**< (I2SC_TNCR) Register Mask  */


/* -------- I2SC_PTCR : (I2SC Offset: 0x120) ( /W 32) Transfer Control Register - Left side -------- */
#define I2SC_PTCR_RXTEN_Pos                   _U_(0)                                               /**< (I2SC_PTCR) Receiver Transfer Enable Position */
#define I2SC_PTCR_RXTEN_Msk                   (_U_(0x1) << I2SC_PTCR_RXTEN_Pos)                    /**< (I2SC_PTCR) Receiver Transfer Enable Mask */
#define I2SC_PTCR_RXTEN(value)                (I2SC_PTCR_RXTEN_Msk & ((value) << I2SC_PTCR_RXTEN_Pos))
#define I2SC_PTCR_RXTDIS_Pos                  _U_(1)                                               /**< (I2SC_PTCR) Receiver Transfer Disable Position */
#define I2SC_PTCR_RXTDIS_Msk                  (_U_(0x1) << I2SC_PTCR_RXTDIS_Pos)                   /**< (I2SC_PTCR) Receiver Transfer Disable Mask */
#define I2SC_PTCR_RXTDIS(value)               (I2SC_PTCR_RXTDIS_Msk & ((value) << I2SC_PTCR_RXTDIS_Pos))
#define I2SC_PTCR_TXTEN_Pos                   _U_(8)                                               /**< (I2SC_PTCR) Transmitter Transfer Enable Position */
#define I2SC_PTCR_TXTEN_Msk                   (_U_(0x1) << I2SC_PTCR_TXTEN_Pos)                    /**< (I2SC_PTCR) Transmitter Transfer Enable Mask */
#define I2SC_PTCR_TXTEN(value)                (I2SC_PTCR_TXTEN_Msk & ((value) << I2SC_PTCR_TXTEN_Pos))
#define I2SC_PTCR_TXTDIS_Pos                  _U_(9)                                               /**< (I2SC_PTCR) Transmitter Transfer Disable Position */
#define I2SC_PTCR_TXTDIS_Msk                  (_U_(0x1) << I2SC_PTCR_TXTDIS_Pos)                   /**< (I2SC_PTCR) Transmitter Transfer Disable Mask */
#define I2SC_PTCR_TXTDIS(value)               (I2SC_PTCR_TXTDIS_Msk & ((value) << I2SC_PTCR_TXTDIS_Pos))
#define I2SC_PTCR_RXCBEN_Pos                  _U_(16)                                              /**< (I2SC_PTCR) Receiver Circular Buffer Enable Position */
#define I2SC_PTCR_RXCBEN_Msk                  (_U_(0x1) << I2SC_PTCR_RXCBEN_Pos)                   /**< (I2SC_PTCR) Receiver Circular Buffer Enable Mask */
#define I2SC_PTCR_RXCBEN(value)               (I2SC_PTCR_RXCBEN_Msk & ((value) << I2SC_PTCR_RXCBEN_Pos))
#define I2SC_PTCR_RXCBDIS_Pos                 _U_(17)                                              /**< (I2SC_PTCR) Receiver Circular Buffer Disable Position */
#define I2SC_PTCR_RXCBDIS_Msk                 (_U_(0x1) << I2SC_PTCR_RXCBDIS_Pos)                  /**< (I2SC_PTCR) Receiver Circular Buffer Disable Mask */
#define I2SC_PTCR_RXCBDIS(value)              (I2SC_PTCR_RXCBDIS_Msk & ((value) << I2SC_PTCR_RXCBDIS_Pos))
#define I2SC_PTCR_TXCBEN_Pos                  _U_(18)                                              /**< (I2SC_PTCR) Transmitter Circular Buffer Enable Position */
#define I2SC_PTCR_TXCBEN_Msk                  (_U_(0x1) << I2SC_PTCR_TXCBEN_Pos)                   /**< (I2SC_PTCR) Transmitter Circular Buffer Enable Mask */
#define I2SC_PTCR_TXCBEN(value)               (I2SC_PTCR_TXCBEN_Msk & ((value) << I2SC_PTCR_TXCBEN_Pos))
#define I2SC_PTCR_TXCBDIS_Pos                 _U_(19)                                              /**< (I2SC_PTCR) Transmitter Circular Buffer Disable Position */
#define I2SC_PTCR_TXCBDIS_Msk                 (_U_(0x1) << I2SC_PTCR_TXCBDIS_Pos)                  /**< (I2SC_PTCR) Transmitter Circular Buffer Disable Mask */
#define I2SC_PTCR_TXCBDIS(value)              (I2SC_PTCR_TXCBDIS_Msk & ((value) << I2SC_PTCR_TXCBDIS_Pos))
#define I2SC_PTCR_ERRCLR_Pos                  _U_(24)                                              /**< (I2SC_PTCR) Transfer Bus Error Clear Position */
#define I2SC_PTCR_ERRCLR_Msk                  (_U_(0x1) << I2SC_PTCR_ERRCLR_Pos)                   /**< (I2SC_PTCR) Transfer Bus Error Clear Mask */
#define I2SC_PTCR_ERRCLR(value)               (I2SC_PTCR_ERRCLR_Msk & ((value) << I2SC_PTCR_ERRCLR_Pos))
#define I2SC_PTCR_Msk                         _U_(0x010F0303)                                      /**< (I2SC_PTCR) Register Mask  */


/* -------- I2SC_PTSR : (I2SC Offset: 0x124) ( R/ 32) Transfer Status Register - Left side -------- */
#define I2SC_PTSR_RXTEN_Pos                   _U_(0)                                               /**< (I2SC_PTSR) Receiver Transfer Enable Position */
#define I2SC_PTSR_RXTEN_Msk                   (_U_(0x1) << I2SC_PTSR_RXTEN_Pos)                    /**< (I2SC_PTSR) Receiver Transfer Enable Mask */
#define I2SC_PTSR_RXTEN(value)                (I2SC_PTSR_RXTEN_Msk & ((value) << I2SC_PTSR_RXTEN_Pos))
#define I2SC_PTSR_TXTEN_Pos                   _U_(8)                                               /**< (I2SC_PTSR) Transmitter Transfer Enable Position */
#define I2SC_PTSR_TXTEN_Msk                   (_U_(0x1) << I2SC_PTSR_TXTEN_Pos)                    /**< (I2SC_PTSR) Transmitter Transfer Enable Mask */
#define I2SC_PTSR_TXTEN(value)                (I2SC_PTSR_TXTEN_Msk & ((value) << I2SC_PTSR_TXTEN_Pos))
#define I2SC_PTSR_RXCBEN_Pos                  _U_(16)                                              /**< (I2SC_PTSR) Receiver Circular Buffer Enable Position */
#define I2SC_PTSR_RXCBEN_Msk                  (_U_(0x1) << I2SC_PTSR_RXCBEN_Pos)                   /**< (I2SC_PTSR) Receiver Circular Buffer Enable Mask */
#define I2SC_PTSR_RXCBEN(value)               (I2SC_PTSR_RXCBEN_Msk & ((value) << I2SC_PTSR_RXCBEN_Pos))
#define I2SC_PTSR_TXCBEN_Pos                  _U_(18)                                              /**< (I2SC_PTSR) Transmitter Circular Buffer Enable Position */
#define I2SC_PTSR_TXCBEN_Msk                  (_U_(0x1) << I2SC_PTSR_TXCBEN_Pos)                   /**< (I2SC_PTSR) Transmitter Circular Buffer Enable Mask */
#define I2SC_PTSR_TXCBEN(value)               (I2SC_PTSR_TXCBEN_Msk & ((value) << I2SC_PTSR_TXCBEN_Pos))
#define I2SC_PTSR_ERR_Pos                     _U_(24)                                              /**< (I2SC_PTSR) Transfer Bus Error Position */
#define I2SC_PTSR_ERR_Msk                     (_U_(0x1) << I2SC_PTSR_ERR_Pos)                      /**< (I2SC_PTSR) Transfer Bus Error Mask */
#define I2SC_PTSR_ERR(value)                  (I2SC_PTSR_ERR_Msk & ((value) << I2SC_PTSR_ERR_Pos))
#define I2SC_PTSR_Msk                         _U_(0x01050101)                                      /**< (I2SC_PTSR) Register Mask  */


/* -------- I2SC_RPR_RIGHT : (I2SC Offset: 0x200) (R/W 32) Receive Pointer Register - Right side -------- */
#define I2SC_RPR_RIGHT_RXPTR_Pos              _U_(0)                                               /**< (I2SC_RPR_RIGHT) Receive Pointer Register Position */
#define I2SC_RPR_RIGHT_RXPTR_Msk              (_U_(0xFFFFFFFF) << I2SC_RPR_RIGHT_RXPTR_Pos)        /**< (I2SC_RPR_RIGHT) Receive Pointer Register Mask */
#define I2SC_RPR_RIGHT_RXPTR(value)           (I2SC_RPR_RIGHT_RXPTR_Msk & ((value) << I2SC_RPR_RIGHT_RXPTR_Pos))
#define I2SC_RPR_RIGHT_Msk                    _U_(0xFFFFFFFF)                                      /**< (I2SC_RPR_RIGHT) Register Mask  */


/* -------- I2SC_RCR_RIGHT : (I2SC Offset: 0x204) (R/W 32) Receive Counter Register - Right side -------- */
#define I2SC_RCR_RIGHT_RXCTR_Pos              _U_(0)                                               /**< (I2SC_RCR_RIGHT) Receive Counter Register Position */
#define I2SC_RCR_RIGHT_RXCTR_Msk              (_U_(0xFFFF) << I2SC_RCR_RIGHT_RXCTR_Pos)            /**< (I2SC_RCR_RIGHT) Receive Counter Register Mask */
#define I2SC_RCR_RIGHT_RXCTR(value)           (I2SC_RCR_RIGHT_RXCTR_Msk & ((value) << I2SC_RCR_RIGHT_RXCTR_Pos))
#define I2SC_RCR_RIGHT_Msk                    _U_(0x0000FFFF)                                      /**< (I2SC_RCR_RIGHT) Register Mask  */


/* -------- I2SC_TPR_RIGHT : (I2SC Offset: 0x208) (R/W 32) Transmit Pointer Register - Right side -------- */
#define I2SC_TPR_RIGHT_TXPTR_Pos              _U_(0)                                               /**< (I2SC_TPR_RIGHT) Transmit Counter Register Position */
#define I2SC_TPR_RIGHT_TXPTR_Msk              (_U_(0xFFFFFFFF) << I2SC_TPR_RIGHT_TXPTR_Pos)        /**< (I2SC_TPR_RIGHT) Transmit Counter Register Mask */
#define I2SC_TPR_RIGHT_TXPTR(value)           (I2SC_TPR_RIGHT_TXPTR_Msk & ((value) << I2SC_TPR_RIGHT_TXPTR_Pos))
#define I2SC_TPR_RIGHT_Msk                    _U_(0xFFFFFFFF)                                      /**< (I2SC_TPR_RIGHT) Register Mask  */


/* -------- I2SC_TCR_RIGHT : (I2SC Offset: 0x20C) (R/W 32) Transmit Counter Register - Right side -------- */
#define I2SC_TCR_RIGHT_TXCTR_Pos              _U_(0)                                               /**< (I2SC_TCR_RIGHT) Transmit Counter Register Position */
#define I2SC_TCR_RIGHT_TXCTR_Msk              (_U_(0xFFFF) << I2SC_TCR_RIGHT_TXCTR_Pos)            /**< (I2SC_TCR_RIGHT) Transmit Counter Register Mask */
#define I2SC_TCR_RIGHT_TXCTR(value)           (I2SC_TCR_RIGHT_TXCTR_Msk & ((value) << I2SC_TCR_RIGHT_TXCTR_Pos))
#define I2SC_TCR_RIGHT_Msk                    _U_(0x0000FFFF)                                      /**< (I2SC_TCR_RIGHT) Register Mask  */


/* -------- I2SC_RNPR_RIGHT : (I2SC Offset: 0x210) (R/W 32) Receive Next Pointer Register - Right side -------- */
#define I2SC_RNPR_RIGHT_RXNPTR_Pos            _U_(0)                                               /**< (I2SC_RNPR_RIGHT) Receive Next Pointer Position */
#define I2SC_RNPR_RIGHT_RXNPTR_Msk            (_U_(0xFFFFFFFF) << I2SC_RNPR_RIGHT_RXNPTR_Pos)      /**< (I2SC_RNPR_RIGHT) Receive Next Pointer Mask */
#define I2SC_RNPR_RIGHT_RXNPTR(value)         (I2SC_RNPR_RIGHT_RXNPTR_Msk & ((value) << I2SC_RNPR_RIGHT_RXNPTR_Pos))
#define I2SC_RNPR_RIGHT_Msk                   _U_(0xFFFFFFFF)                                      /**< (I2SC_RNPR_RIGHT) Register Mask  */


/* -------- I2SC_RNCR_RIGHT : (I2SC Offset: 0x214) (R/W 32) Receive Next Counter Register - Right side -------- */
#define I2SC_RNCR_RIGHT_RXNCTR_Pos            _U_(0)                                               /**< (I2SC_RNCR_RIGHT) Receive Next Counter Position */
#define I2SC_RNCR_RIGHT_RXNCTR_Msk            (_U_(0xFFFF) << I2SC_RNCR_RIGHT_RXNCTR_Pos)          /**< (I2SC_RNCR_RIGHT) Receive Next Counter Mask */
#define I2SC_RNCR_RIGHT_RXNCTR(value)         (I2SC_RNCR_RIGHT_RXNCTR_Msk & ((value) << I2SC_RNCR_RIGHT_RXNCTR_Pos))
#define I2SC_RNCR_RIGHT_Msk                   _U_(0x0000FFFF)                                      /**< (I2SC_RNCR_RIGHT) Register Mask  */


/* -------- I2SC_TNPR_RIGHT : (I2SC Offset: 0x218) (R/W 32) Transmit Next Pointer Register - Right side -------- */
#define I2SC_TNPR_RIGHT_TXNPTR_Pos            _U_(0)                                               /**< (I2SC_TNPR_RIGHT) Transmit Next Pointer Position */
#define I2SC_TNPR_RIGHT_TXNPTR_Msk            (_U_(0xFFFFFFFF) << I2SC_TNPR_RIGHT_TXNPTR_Pos)      /**< (I2SC_TNPR_RIGHT) Transmit Next Pointer Mask */
#define I2SC_TNPR_RIGHT_TXNPTR(value)         (I2SC_TNPR_RIGHT_TXNPTR_Msk & ((value) << I2SC_TNPR_RIGHT_TXNPTR_Pos))
#define I2SC_TNPR_RIGHT_Msk                   _U_(0xFFFFFFFF)                                      /**< (I2SC_TNPR_RIGHT) Register Mask  */


/* -------- I2SC_TNCR_RIGHT : (I2SC Offset: 0x21C) (R/W 32) Transmit Next Counter Register - Right side -------- */
#define I2SC_TNCR_RIGHT_TXNCTR_Pos            _U_(0)                                               /**< (I2SC_TNCR_RIGHT) Transmit Counter Next Position */
#define I2SC_TNCR_RIGHT_TXNCTR_Msk            (_U_(0xFFFF) << I2SC_TNCR_RIGHT_TXNCTR_Pos)          /**< (I2SC_TNCR_RIGHT) Transmit Counter Next Mask */
#define I2SC_TNCR_RIGHT_TXNCTR(value)         (I2SC_TNCR_RIGHT_TXNCTR_Msk & ((value) << I2SC_TNCR_RIGHT_TXNCTR_Pos))
#define I2SC_TNCR_RIGHT_Msk                   _U_(0x0000FFFF)                                      /**< (I2SC_TNCR_RIGHT) Register Mask  */


/* -------- I2SC_PTCR_RIGHT : (I2SC Offset: 0x220) ( /W 32) Transfer Control Register - Right side -------- */
#define I2SC_PTCR_RIGHT_RXTEN_Pos             _U_(0)                                               /**< (I2SC_PTCR_RIGHT) Receiver Transfer Enable Position */
#define I2SC_PTCR_RIGHT_RXTEN_Msk             (_U_(0x1) << I2SC_PTCR_RIGHT_RXTEN_Pos)              /**< (I2SC_PTCR_RIGHT) Receiver Transfer Enable Mask */
#define I2SC_PTCR_RIGHT_RXTEN(value)          (I2SC_PTCR_RIGHT_RXTEN_Msk & ((value) << I2SC_PTCR_RIGHT_RXTEN_Pos))
#define I2SC_PTCR_RIGHT_RXTDIS_Pos            _U_(1)                                               /**< (I2SC_PTCR_RIGHT) Receiver Transfer Disable Position */
#define I2SC_PTCR_RIGHT_RXTDIS_Msk            (_U_(0x1) << I2SC_PTCR_RIGHT_RXTDIS_Pos)             /**< (I2SC_PTCR_RIGHT) Receiver Transfer Disable Mask */
#define I2SC_PTCR_RIGHT_RXTDIS(value)         (I2SC_PTCR_RIGHT_RXTDIS_Msk & ((value) << I2SC_PTCR_RIGHT_RXTDIS_Pos))
#define I2SC_PTCR_RIGHT_TXTEN_Pos             _U_(8)                                               /**< (I2SC_PTCR_RIGHT) Transmitter Transfer Enable Position */
#define I2SC_PTCR_RIGHT_TXTEN_Msk             (_U_(0x1) << I2SC_PTCR_RIGHT_TXTEN_Pos)              /**< (I2SC_PTCR_RIGHT) Transmitter Transfer Enable Mask */
#define I2SC_PTCR_RIGHT_TXTEN(value)          (I2SC_PTCR_RIGHT_TXTEN_Msk & ((value) << I2SC_PTCR_RIGHT_TXTEN_Pos))
#define I2SC_PTCR_RIGHT_TXTDIS_Pos            _U_(9)                                               /**< (I2SC_PTCR_RIGHT) Transmitter Transfer Disable Position */
#define I2SC_PTCR_RIGHT_TXTDIS_Msk            (_U_(0x1) << I2SC_PTCR_RIGHT_TXTDIS_Pos)             /**< (I2SC_PTCR_RIGHT) Transmitter Transfer Disable Mask */
#define I2SC_PTCR_RIGHT_TXTDIS(value)         (I2SC_PTCR_RIGHT_TXTDIS_Msk & ((value) << I2SC_PTCR_RIGHT_TXTDIS_Pos))
#define I2SC_PTCR_RIGHT_RXCBEN_Pos            _U_(16)                                              /**< (I2SC_PTCR_RIGHT) Receiver Circular Buffer Enable Position */
#define I2SC_PTCR_RIGHT_RXCBEN_Msk            (_U_(0x1) << I2SC_PTCR_RIGHT_RXCBEN_Pos)             /**< (I2SC_PTCR_RIGHT) Receiver Circular Buffer Enable Mask */
#define I2SC_PTCR_RIGHT_RXCBEN(value)         (I2SC_PTCR_RIGHT_RXCBEN_Msk & ((value) << I2SC_PTCR_RIGHT_RXCBEN_Pos))
#define I2SC_PTCR_RIGHT_RXCBDIS_Pos           _U_(17)                                              /**< (I2SC_PTCR_RIGHT) Receiver Circular Buffer Disable Position */
#define I2SC_PTCR_RIGHT_RXCBDIS_Msk           (_U_(0x1) << I2SC_PTCR_RIGHT_RXCBDIS_Pos)            /**< (I2SC_PTCR_RIGHT) Receiver Circular Buffer Disable Mask */
#define I2SC_PTCR_RIGHT_RXCBDIS(value)        (I2SC_PTCR_RIGHT_RXCBDIS_Msk & ((value) << I2SC_PTCR_RIGHT_RXCBDIS_Pos))
#define I2SC_PTCR_RIGHT_TXCBEN_Pos            _U_(18)                                              /**< (I2SC_PTCR_RIGHT) Transmitter Circular Buffer Enable Position */
#define I2SC_PTCR_RIGHT_TXCBEN_Msk            (_U_(0x1) << I2SC_PTCR_RIGHT_TXCBEN_Pos)             /**< (I2SC_PTCR_RIGHT) Transmitter Circular Buffer Enable Mask */
#define I2SC_PTCR_RIGHT_TXCBEN(value)         (I2SC_PTCR_RIGHT_TXCBEN_Msk & ((value) << I2SC_PTCR_RIGHT_TXCBEN_Pos))
#define I2SC_PTCR_RIGHT_TXCBDIS_Pos           _U_(19)                                              /**< (I2SC_PTCR_RIGHT) Transmitter Circular Buffer Disable Position */
#define I2SC_PTCR_RIGHT_TXCBDIS_Msk           (_U_(0x1) << I2SC_PTCR_RIGHT_TXCBDIS_Pos)            /**< (I2SC_PTCR_RIGHT) Transmitter Circular Buffer Disable Mask */
#define I2SC_PTCR_RIGHT_TXCBDIS(value)        (I2SC_PTCR_RIGHT_TXCBDIS_Msk & ((value) << I2SC_PTCR_RIGHT_TXCBDIS_Pos))
#define I2SC_PTCR_RIGHT_ERRCLR_Pos            _U_(24)                                              /**< (I2SC_PTCR_RIGHT) Transfer Bus Error Clear Position */
#define I2SC_PTCR_RIGHT_ERRCLR_Msk            (_U_(0x1) << I2SC_PTCR_RIGHT_ERRCLR_Pos)             /**< (I2SC_PTCR_RIGHT) Transfer Bus Error Clear Mask */
#define I2SC_PTCR_RIGHT_ERRCLR(value)         (I2SC_PTCR_RIGHT_ERRCLR_Msk & ((value) << I2SC_PTCR_RIGHT_ERRCLR_Pos))
#define I2SC_PTCR_RIGHT_Msk                   _U_(0x010F0303)                                      /**< (I2SC_PTCR_RIGHT) Register Mask  */


/* -------- I2SC_PTSR_RIGHT : (I2SC Offset: 0x224) ( R/ 32) Transfer Status Register - Right side -------- */
#define I2SC_PTSR_RIGHT_RXTEN_Pos             _U_(0)                                               /**< (I2SC_PTSR_RIGHT) Receiver Transfer Enable Position */
#define I2SC_PTSR_RIGHT_RXTEN_Msk             (_U_(0x1) << I2SC_PTSR_RIGHT_RXTEN_Pos)              /**< (I2SC_PTSR_RIGHT) Receiver Transfer Enable Mask */
#define I2SC_PTSR_RIGHT_RXTEN(value)          (I2SC_PTSR_RIGHT_RXTEN_Msk & ((value) << I2SC_PTSR_RIGHT_RXTEN_Pos))
#define I2SC_PTSR_RIGHT_TXTEN_Pos             _U_(8)                                               /**< (I2SC_PTSR_RIGHT) Transmitter Transfer Enable Position */
#define I2SC_PTSR_RIGHT_TXTEN_Msk             (_U_(0x1) << I2SC_PTSR_RIGHT_TXTEN_Pos)              /**< (I2SC_PTSR_RIGHT) Transmitter Transfer Enable Mask */
#define I2SC_PTSR_RIGHT_TXTEN(value)          (I2SC_PTSR_RIGHT_TXTEN_Msk & ((value) << I2SC_PTSR_RIGHT_TXTEN_Pos))
#define I2SC_PTSR_RIGHT_RXCBEN_Pos            _U_(16)                                              /**< (I2SC_PTSR_RIGHT) Receiver Circular Buffer Enable Position */
#define I2SC_PTSR_RIGHT_RXCBEN_Msk            (_U_(0x1) << I2SC_PTSR_RIGHT_RXCBEN_Pos)             /**< (I2SC_PTSR_RIGHT) Receiver Circular Buffer Enable Mask */
#define I2SC_PTSR_RIGHT_RXCBEN(value)         (I2SC_PTSR_RIGHT_RXCBEN_Msk & ((value) << I2SC_PTSR_RIGHT_RXCBEN_Pos))
#define I2SC_PTSR_RIGHT_TXCBEN_Pos            _U_(18)                                              /**< (I2SC_PTSR_RIGHT) Transmitter Circular Buffer Enable Position */
#define I2SC_PTSR_RIGHT_TXCBEN_Msk            (_U_(0x1) << I2SC_PTSR_RIGHT_TXCBEN_Pos)             /**< (I2SC_PTSR_RIGHT) Transmitter Circular Buffer Enable Mask */
#define I2SC_PTSR_RIGHT_TXCBEN(value)         (I2SC_PTSR_RIGHT_TXCBEN_Msk & ((value) << I2SC_PTSR_RIGHT_TXCBEN_Pos))
#define I2SC_PTSR_RIGHT_ERR_Pos               _U_(24)                                              /**< (I2SC_PTSR_RIGHT) Transfer Bus Error Position */
#define I2SC_PTSR_RIGHT_ERR_Msk               (_U_(0x1) << I2SC_PTSR_RIGHT_ERR_Pos)                /**< (I2SC_PTSR_RIGHT) Transfer Bus Error Mask */
#define I2SC_PTSR_RIGHT_ERR(value)            (I2SC_PTSR_RIGHT_ERR_Msk & ((value) << I2SC_PTSR_RIGHT_ERR_Pos))
#define I2SC_PTSR_RIGHT_Msk                   _U_(0x01050101)                                      /**< (I2SC_PTSR_RIGHT) Register Mask  */


/** \brief I2SC register offsets definitions */
#define I2SC_CR_REG_OFST               (0x00)              /**< (I2SC_CR) Control Register Offset */
#define I2SC_MR_REG_OFST               (0x04)              /**< (I2SC_MR) Mode Register Offset */
#define I2SC_SR_REG_OFST               (0x08)              /**< (I2SC_SR) Status Register Offset */
#define I2SC_SCR_REG_OFST              (0x0C)              /**< (I2SC_SCR) Status Clear Register Offset */
#define I2SC_SSR_REG_OFST              (0x10)              /**< (I2SC_SSR) Status Set Register Offset */
#define I2SC_IER_REG_OFST              (0x14)              /**< (I2SC_IER) Interrupt Enable Register Offset */
#define I2SC_IDR_REG_OFST              (0x18)              /**< (I2SC_IDR) Interrupt Disable Register Offset */
#define I2SC_IMR_REG_OFST              (0x1C)              /**< (I2SC_IMR) Interrupt Mask Register Offset */
#define I2SC_RHR_REG_OFST              (0x20)              /**< (I2SC_RHR) Receiver Holding Register Offset */
#define I2SC_THR_REG_OFST              (0x24)              /**< (I2SC_THR) Transmitter Holding Register Offset */
#define I2SC_RPR_REG_OFST              (0x100)             /**< (I2SC_RPR) Receive Pointer Register - Left side Offset */
#define I2SC_RCR_REG_OFST              (0x104)             /**< (I2SC_RCR) Receive Counter Register - Left side Offset */
#define I2SC_TPR_REG_OFST              (0x108)             /**< (I2SC_TPR) Transmit Pointer Register - Left side Offset */
#define I2SC_TCR_REG_OFST              (0x10C)             /**< (I2SC_TCR) Transmit Counter Register - Left side Offset */
#define I2SC_RNPR_REG_OFST             (0x110)             /**< (I2SC_RNPR) Receive Next Pointer Register - Left side Offset */
#define I2SC_RNCR_REG_OFST             (0x114)             /**< (I2SC_RNCR) Receive Next Counter Register - Left side Offset */
#define I2SC_TNPR_REG_OFST             (0x118)             /**< (I2SC_TNPR) Transmit Next Pointer Register - Left side Offset */
#define I2SC_TNCR_REG_OFST             (0x11C)             /**< (I2SC_TNCR) Transmit Next Counter Register - Left side Offset */
#define I2SC_PTCR_REG_OFST             (0x120)             /**< (I2SC_PTCR) Transfer Control Register - Left side Offset */
#define I2SC_PTSR_REG_OFST             (0x124)             /**< (I2SC_PTSR) Transfer Status Register - Left side Offset */
#define I2SC_RPR_RIGHT_REG_OFST        (0x200)             /**< (I2SC_RPR_RIGHT) Receive Pointer Register - Right side Offset */
#define I2SC_RCR_RIGHT_REG_OFST        (0x204)             /**< (I2SC_RCR_RIGHT) Receive Counter Register - Right side Offset */
#define I2SC_TPR_RIGHT_REG_OFST        (0x208)             /**< (I2SC_TPR_RIGHT) Transmit Pointer Register - Right side Offset */
#define I2SC_TCR_RIGHT_REG_OFST        (0x20C)             /**< (I2SC_TCR_RIGHT) Transmit Counter Register - Right side Offset */
#define I2SC_RNPR_RIGHT_REG_OFST       (0x210)             /**< (I2SC_RNPR_RIGHT) Receive Next Pointer Register - Right side Offset */
#define I2SC_RNCR_RIGHT_REG_OFST       (0x214)             /**< (I2SC_RNCR_RIGHT) Receive Next Counter Register - Right side Offset */
#define I2SC_TNPR_RIGHT_REG_OFST       (0x218)             /**< (I2SC_TNPR_RIGHT) Transmit Next Pointer Register - Right side Offset */
#define I2SC_TNCR_RIGHT_REG_OFST       (0x21C)             /**< (I2SC_TNCR_RIGHT) Transmit Next Counter Register - Right side Offset */
#define I2SC_PTCR_RIGHT_REG_OFST       (0x220)             /**< (I2SC_PTCR_RIGHT) Transfer Control Register - Right side Offset */
#define I2SC_PTSR_RIGHT_REG_OFST       (0x224)             /**< (I2SC_PTSR_RIGHT) Transfer Status Register - Right side Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief I2SC register API structure */
typedef struct
{
  __O   uint32_t                       I2SC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       I2SC_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       I2SC_SR;            /**< Offset: 0x08 (R/   32) Status Register */
  __O   uint32_t                       I2SC_SCR;           /**< Offset: 0x0C ( /W  32) Status Clear Register */
  __O   uint32_t                       I2SC_SSR;           /**< Offset: 0x10 ( /W  32) Status Set Register */
  __O   uint32_t                       I2SC_IER;           /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       I2SC_IDR;           /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       I2SC_IMR;           /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       I2SC_RHR;           /**< Offset: 0x20 (R/   32) Receiver Holding Register */
  __O   uint32_t                       I2SC_THR;           /**< Offset: 0x24 ( /W  32) Transmitter Holding Register */
  __I   uint8_t                        Reserved1[0xD8];
  __IO  uint32_t                       I2SC_RPR;           /**< Offset: 0x100 (R/W  32) Receive Pointer Register - Left side */
  __IO  uint32_t                       I2SC_RCR;           /**< Offset: 0x104 (R/W  32) Receive Counter Register - Left side */
  __IO  uint32_t                       I2SC_TPR;           /**< Offset: 0x108 (R/W  32) Transmit Pointer Register - Left side */
  __IO  uint32_t                       I2SC_TCR;           /**< Offset: 0x10C (R/W  32) Transmit Counter Register - Left side */
  __IO  uint32_t                       I2SC_RNPR;          /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register - Left side */
  __IO  uint32_t                       I2SC_RNCR;          /**< Offset: 0x114 (R/W  32) Receive Next Counter Register - Left side */
  __IO  uint32_t                       I2SC_TNPR;          /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register - Left side */
  __IO  uint32_t                       I2SC_TNCR;          /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register - Left side */
  __O   uint32_t                       I2SC_PTCR;          /**< Offset: 0x120 ( /W  32) Transfer Control Register - Left side */
  __I   uint32_t                       I2SC_PTSR;          /**< Offset: 0x124 (R/   32) Transfer Status Register - Left side */
  __I   uint8_t                        Reserved2[0xD8];
  __IO  uint32_t                       I2SC_RPR_RIGHT;     /**< Offset: 0x200 (R/W  32) Receive Pointer Register - Right side */
  __IO  uint32_t                       I2SC_RCR_RIGHT;     /**< Offset: 0x204 (R/W  32) Receive Counter Register - Right side */
  __IO  uint32_t                       I2SC_TPR_RIGHT;     /**< Offset: 0x208 (R/W  32) Transmit Pointer Register - Right side */
  __IO  uint32_t                       I2SC_TCR_RIGHT;     /**< Offset: 0x20C (R/W  32) Transmit Counter Register - Right side */
  __IO  uint32_t                       I2SC_RNPR_RIGHT;    /**< Offset: 0x210 (R/W  32) Receive Next Pointer Register - Right side */
  __IO  uint32_t                       I2SC_RNCR_RIGHT;    /**< Offset: 0x214 (R/W  32) Receive Next Counter Register - Right side */
  __IO  uint32_t                       I2SC_TNPR_RIGHT;    /**< Offset: 0x218 (R/W  32) Transmit Next Pointer Register - Right side */
  __IO  uint32_t                       I2SC_TNCR_RIGHT;    /**< Offset: 0x21C (R/W  32) Transmit Next Counter Register - Right side */
  __O   uint32_t                       I2SC_PTCR_RIGHT;    /**< Offset: 0x220 ( /W  32) Transfer Control Register - Right side */
  __I   uint32_t                       I2SC_PTSR_RIGHT;    /**< Offset: 0x224 (R/   32) Transfer Status Register - Right side */
} i2sc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_I2SC_COMPONENT_H_ */
