/*
 * Component description for UDPHS
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
#ifndef _SAMA5D2_UDPHS_COMPONENT_H_
#define _SAMA5D2_UDPHS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UDPHS                                        */
/* ************************************************************************** */

/* -------- UDPHS_DMANXTDSC : (UDPHS Offset: 0x00) (R/W 32) UDPHS DMA Next Descriptor Address Register (channel = 0) -------- */
#define UDPHS_DMANXTDSC_NXT_DSC_ADD_Pos       _U_(0)                                               /**< (UDPHS_DMANXTDSC) Next Descriptor Address Position */
#define UDPHS_DMANXTDSC_NXT_DSC_ADD_Msk       (_U_(0xFFFFFFFF) << UDPHS_DMANXTDSC_NXT_DSC_ADD_Pos) /**< (UDPHS_DMANXTDSC) Next Descriptor Address Mask */
#define UDPHS_DMANXTDSC_NXT_DSC_ADD(value)    (UDPHS_DMANXTDSC_NXT_DSC_ADD_Msk & ((value) << UDPHS_DMANXTDSC_NXT_DSC_ADD_Pos))
#define UDPHS_DMANXTDSC_Msk                   _U_(0xFFFFFFFF)                                      /**< (UDPHS_DMANXTDSC) Register Mask  */


/* -------- UDPHS_DMAADDRESS : (UDPHS Offset: 0x04) (R/W 32) UDPHS DMA Channel Address Register (channel = 0) -------- */
#define UDPHS_DMAADDRESS_BUFF_ADD_Pos         _U_(0)                                               /**< (UDPHS_DMAADDRESS) Buffer Address Position */
#define UDPHS_DMAADDRESS_BUFF_ADD_Msk         (_U_(0xFFFFFFFF) << UDPHS_DMAADDRESS_BUFF_ADD_Pos)   /**< (UDPHS_DMAADDRESS) Buffer Address Mask */
#define UDPHS_DMAADDRESS_BUFF_ADD(value)      (UDPHS_DMAADDRESS_BUFF_ADD_Msk & ((value) << UDPHS_DMAADDRESS_BUFF_ADD_Pos))
#define UDPHS_DMAADDRESS_Msk                  _U_(0xFFFFFFFF)                                      /**< (UDPHS_DMAADDRESS) Register Mask  */


/* -------- UDPHS_DMACONTROL : (UDPHS Offset: 0x08) (R/W 32) UDPHS DMA Channel Control Register (channel = 0) -------- */
#define UDPHS_DMACONTROL_CHANN_ENB_Pos        _U_(0)                                               /**< (UDPHS_DMACONTROL) (Channel Enable Command) Position */
#define UDPHS_DMACONTROL_CHANN_ENB_Msk        (_U_(0x1) << UDPHS_DMACONTROL_CHANN_ENB_Pos)         /**< (UDPHS_DMACONTROL) (Channel Enable Command) Mask */
#define UDPHS_DMACONTROL_CHANN_ENB(value)     (UDPHS_DMACONTROL_CHANN_ENB_Msk & ((value) << UDPHS_DMACONTROL_CHANN_ENB_Pos))
#define UDPHS_DMACONTROL_LDNXT_DSC_Pos        _U_(1)                                               /**< (UDPHS_DMACONTROL) Load Next Channel Transfer Descriptor Enable (Command) Position */
#define UDPHS_DMACONTROL_LDNXT_DSC_Msk        (_U_(0x1) << UDPHS_DMACONTROL_LDNXT_DSC_Pos)         /**< (UDPHS_DMACONTROL) Load Next Channel Transfer Descriptor Enable (Command) Mask */
#define UDPHS_DMACONTROL_LDNXT_DSC(value)     (UDPHS_DMACONTROL_LDNXT_DSC_Msk & ((value) << UDPHS_DMACONTROL_LDNXT_DSC_Pos))
#define UDPHS_DMACONTROL_END_TR_EN_Pos        _U_(2)                                               /**< (UDPHS_DMACONTROL) End of Transfer Enable (Control) Position */
#define UDPHS_DMACONTROL_END_TR_EN_Msk        (_U_(0x1) << UDPHS_DMACONTROL_END_TR_EN_Pos)         /**< (UDPHS_DMACONTROL) End of Transfer Enable (Control) Mask */
#define UDPHS_DMACONTROL_END_TR_EN(value)     (UDPHS_DMACONTROL_END_TR_EN_Msk & ((value) << UDPHS_DMACONTROL_END_TR_EN_Pos))
#define UDPHS_DMACONTROL_END_B_EN_Pos         _U_(3)                                               /**< (UDPHS_DMACONTROL) End of Buffer Enable (Control) Position */
#define UDPHS_DMACONTROL_END_B_EN_Msk         (_U_(0x1) << UDPHS_DMACONTROL_END_B_EN_Pos)          /**< (UDPHS_DMACONTROL) End of Buffer Enable (Control) Mask */
#define UDPHS_DMACONTROL_END_B_EN(value)      (UDPHS_DMACONTROL_END_B_EN_Msk & ((value) << UDPHS_DMACONTROL_END_B_EN_Pos))
#define UDPHS_DMACONTROL_END_TR_IT_Pos        _U_(4)                                               /**< (UDPHS_DMACONTROL) End of Transfer Interrupt Enable Position */
#define UDPHS_DMACONTROL_END_TR_IT_Msk        (_U_(0x1) << UDPHS_DMACONTROL_END_TR_IT_Pos)         /**< (UDPHS_DMACONTROL) End of Transfer Interrupt Enable Mask */
#define UDPHS_DMACONTROL_END_TR_IT(value)     (UDPHS_DMACONTROL_END_TR_IT_Msk & ((value) << UDPHS_DMACONTROL_END_TR_IT_Pos))
#define UDPHS_DMACONTROL_END_BUFFIT_Pos       _U_(5)                                               /**< (UDPHS_DMACONTROL) End of Buffer Interrupt Enable Position */
#define UDPHS_DMACONTROL_END_BUFFIT_Msk       (_U_(0x1) << UDPHS_DMACONTROL_END_BUFFIT_Pos)        /**< (UDPHS_DMACONTROL) End of Buffer Interrupt Enable Mask */
#define UDPHS_DMACONTROL_END_BUFFIT(value)    (UDPHS_DMACONTROL_END_BUFFIT_Msk & ((value) << UDPHS_DMACONTROL_END_BUFFIT_Pos))
#define UDPHS_DMACONTROL_DESC_LD_IT_Pos       _U_(6)                                               /**< (UDPHS_DMACONTROL) Descriptor Loaded Interrupt Enable Position */
#define UDPHS_DMACONTROL_DESC_LD_IT_Msk       (_U_(0x1) << UDPHS_DMACONTROL_DESC_LD_IT_Pos)        /**< (UDPHS_DMACONTROL) Descriptor Loaded Interrupt Enable Mask */
#define UDPHS_DMACONTROL_DESC_LD_IT(value)    (UDPHS_DMACONTROL_DESC_LD_IT_Msk & ((value) << UDPHS_DMACONTROL_DESC_LD_IT_Pos))
#define UDPHS_DMACONTROL_BURST_LCK_Pos        _U_(7)                                               /**< (UDPHS_DMACONTROL) Burst Lock Enable Position */
#define UDPHS_DMACONTROL_BURST_LCK_Msk        (_U_(0x1) << UDPHS_DMACONTROL_BURST_LCK_Pos)         /**< (UDPHS_DMACONTROL) Burst Lock Enable Mask */
#define UDPHS_DMACONTROL_BURST_LCK(value)     (UDPHS_DMACONTROL_BURST_LCK_Msk & ((value) << UDPHS_DMACONTROL_BURST_LCK_Pos))
#define UDPHS_DMACONTROL_BUFF_LENGTH_Pos      _U_(16)                                              /**< (UDPHS_DMACONTROL) Buffer Byte Length (Write-only) Position */
#define UDPHS_DMACONTROL_BUFF_LENGTH_Msk      (_U_(0xFFFF) << UDPHS_DMACONTROL_BUFF_LENGTH_Pos)    /**< (UDPHS_DMACONTROL) Buffer Byte Length (Write-only) Mask */
#define UDPHS_DMACONTROL_BUFF_LENGTH(value)   (UDPHS_DMACONTROL_BUFF_LENGTH_Msk & ((value) << UDPHS_DMACONTROL_BUFF_LENGTH_Pos))
#define UDPHS_DMACONTROL_Msk                  _U_(0xFFFF00FF)                                      /**< (UDPHS_DMACONTROL) Register Mask  */


/* -------- UDPHS_DMASTATUS : (UDPHS Offset: 0x0C) (R/W 32) UDPHS DMA Channel Status Register (channel = 0) -------- */
#define UDPHS_DMASTATUS_CHANN_ENB_Pos         _U_(0)                                               /**< (UDPHS_DMASTATUS) Channel Enable Status Position */
#define UDPHS_DMASTATUS_CHANN_ENB_Msk         (_U_(0x1) << UDPHS_DMASTATUS_CHANN_ENB_Pos)          /**< (UDPHS_DMASTATUS) Channel Enable Status Mask */
#define UDPHS_DMASTATUS_CHANN_ENB(value)      (UDPHS_DMASTATUS_CHANN_ENB_Msk & ((value) << UDPHS_DMASTATUS_CHANN_ENB_Pos))
#define UDPHS_DMASTATUS_CHANN_ACT_Pos         _U_(1)                                               /**< (UDPHS_DMASTATUS) Channel Active Status Position */
#define UDPHS_DMASTATUS_CHANN_ACT_Msk         (_U_(0x1) << UDPHS_DMASTATUS_CHANN_ACT_Pos)          /**< (UDPHS_DMASTATUS) Channel Active Status Mask */
#define UDPHS_DMASTATUS_CHANN_ACT(value)      (UDPHS_DMASTATUS_CHANN_ACT_Msk & ((value) << UDPHS_DMASTATUS_CHANN_ACT_Pos))
#define UDPHS_DMASTATUS_END_TR_ST_Pos         _U_(4)                                               /**< (UDPHS_DMASTATUS) End of Channel Transfer Status Position */
#define UDPHS_DMASTATUS_END_TR_ST_Msk         (_U_(0x1) << UDPHS_DMASTATUS_END_TR_ST_Pos)          /**< (UDPHS_DMASTATUS) End of Channel Transfer Status Mask */
#define UDPHS_DMASTATUS_END_TR_ST(value)      (UDPHS_DMASTATUS_END_TR_ST_Msk & ((value) << UDPHS_DMASTATUS_END_TR_ST_Pos))
#define UDPHS_DMASTATUS_END_BF_ST_Pos         _U_(5)                                               /**< (UDPHS_DMASTATUS) End of Channel Buffer Status Position */
#define UDPHS_DMASTATUS_END_BF_ST_Msk         (_U_(0x1) << UDPHS_DMASTATUS_END_BF_ST_Pos)          /**< (UDPHS_DMASTATUS) End of Channel Buffer Status Mask */
#define UDPHS_DMASTATUS_END_BF_ST(value)      (UDPHS_DMASTATUS_END_BF_ST_Msk & ((value) << UDPHS_DMASTATUS_END_BF_ST_Pos))
#define UDPHS_DMASTATUS_DESC_LDST_Pos         _U_(6)                                               /**< (UDPHS_DMASTATUS) Descriptor Loaded Status Position */
#define UDPHS_DMASTATUS_DESC_LDST_Msk         (_U_(0x1) << UDPHS_DMASTATUS_DESC_LDST_Pos)          /**< (UDPHS_DMASTATUS) Descriptor Loaded Status Mask */
#define UDPHS_DMASTATUS_DESC_LDST(value)      (UDPHS_DMASTATUS_DESC_LDST_Msk & ((value) << UDPHS_DMASTATUS_DESC_LDST_Pos))
#define UDPHS_DMASTATUS_BUFF_COUNT_Pos        _U_(16)                                              /**< (UDPHS_DMASTATUS) Buffer Byte Count Position */
#define UDPHS_DMASTATUS_BUFF_COUNT_Msk        (_U_(0xFFFF) << UDPHS_DMASTATUS_BUFF_COUNT_Pos)      /**< (UDPHS_DMASTATUS) Buffer Byte Count Mask */
#define UDPHS_DMASTATUS_BUFF_COUNT(value)     (UDPHS_DMASTATUS_BUFF_COUNT_Msk & ((value) << UDPHS_DMASTATUS_BUFF_COUNT_Pos))
#define UDPHS_DMASTATUS_Msk                   _U_(0xFFFF0073)                                      /**< (UDPHS_DMASTATUS) Register Mask  */


/* -------- UDPHS_EPTCFG : (UDPHS Offset: 0x00) (R/W 32) UDPHS Endpoint Configuration Register (endpoint = 0) -------- */
#define UDPHS_EPTCFG_EPT_SIZE_Pos             _U_(0)                                               /**< (UDPHS_EPTCFG) Endpoint Size (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_SIZE_Msk             (_U_(0x7) << UDPHS_EPTCFG_EPT_SIZE_Pos)              /**< (UDPHS_EPTCFG) Endpoint Size (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_SIZE(value)          (UDPHS_EPTCFG_EPT_SIZE_Msk & ((value) << UDPHS_EPTCFG_EPT_SIZE_Pos))
#define   UDPHS_EPTCFG_EPT_SIZE_8_Val         _U_(0x0)                                             /**< (UDPHS_EPTCFG) 8 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_16_Val        _U_(0x1)                                             /**< (UDPHS_EPTCFG) 16 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_32_Val        _U_(0x2)                                             /**< (UDPHS_EPTCFG) 32 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_64_Val        _U_(0x3)                                             /**< (UDPHS_EPTCFG) 64 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_128_Val       _U_(0x4)                                             /**< (UDPHS_EPTCFG) 128 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_256_Val       _U_(0x5)                                             /**< (UDPHS_EPTCFG) 256 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_512_Val       _U_(0x6)                                             /**< (UDPHS_EPTCFG) 512 bytes  */
#define   UDPHS_EPTCFG_EPT_SIZE_1024_Val      _U_(0x7)                                             /**< (UDPHS_EPTCFG) 1024 bytes  */
#define UDPHS_EPTCFG_EPT_SIZE_8               (UDPHS_EPTCFG_EPT_SIZE_8_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 8 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_16              (UDPHS_EPTCFG_EPT_SIZE_16_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 16 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_32              (UDPHS_EPTCFG_EPT_SIZE_32_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 32 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_64              (UDPHS_EPTCFG_EPT_SIZE_64_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 64 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_128             (UDPHS_EPTCFG_EPT_SIZE_128_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 128 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_256             (UDPHS_EPTCFG_EPT_SIZE_256_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 256 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_512             (UDPHS_EPTCFG_EPT_SIZE_512_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 512 bytes Position  */
#define UDPHS_EPTCFG_EPT_SIZE_1024            (UDPHS_EPTCFG_EPT_SIZE_1024_Val << UDPHS_EPTCFG_EPT_SIZE_Pos) /**< (UDPHS_EPTCFG) 1024 bytes Position  */
#define UDPHS_EPTCFG_EPT_DIR_Pos              _U_(3)                                               /**< (UDPHS_EPTCFG) Endpoint Direction (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_DIR_Msk              (_U_(0x1) << UDPHS_EPTCFG_EPT_DIR_Pos)               /**< (UDPHS_EPTCFG) Endpoint Direction (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_DIR(value)           (UDPHS_EPTCFG_EPT_DIR_Msk & ((value) << UDPHS_EPTCFG_EPT_DIR_Pos))
#define UDPHS_EPTCFG_EPT_TYPE_Pos             _U_(4)                                               /**< (UDPHS_EPTCFG) Endpoint Type (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_TYPE_Msk             (_U_(0x3) << UDPHS_EPTCFG_EPT_TYPE_Pos)              /**< (UDPHS_EPTCFG) Endpoint Type (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_TYPE(value)          (UDPHS_EPTCFG_EPT_TYPE_Msk & ((value) << UDPHS_EPTCFG_EPT_TYPE_Pos))
#define   UDPHS_EPTCFG_EPT_TYPE_CTRL8_Val     _U_(0x0)                                             /**< (UDPHS_EPTCFG) Control endpoint  */
#define   UDPHS_EPTCFG_EPT_TYPE_ISO_Val       _U_(0x1)                                             /**< (UDPHS_EPTCFG) Isochronous endpoint  */
#define   UDPHS_EPTCFG_EPT_TYPE_BULK_Val      _U_(0x2)                                             /**< (UDPHS_EPTCFG) Bulk endpoint  */
#define   UDPHS_EPTCFG_EPT_TYPE_INT_Val       _U_(0x3)                                             /**< (UDPHS_EPTCFG) Interrupt endpoint  */
#define UDPHS_EPTCFG_EPT_TYPE_CTRL8           (UDPHS_EPTCFG_EPT_TYPE_CTRL8_Val << UDPHS_EPTCFG_EPT_TYPE_Pos) /**< (UDPHS_EPTCFG) Control endpoint Position  */
#define UDPHS_EPTCFG_EPT_TYPE_ISO             (UDPHS_EPTCFG_EPT_TYPE_ISO_Val << UDPHS_EPTCFG_EPT_TYPE_Pos) /**< (UDPHS_EPTCFG) Isochronous endpoint Position  */
#define UDPHS_EPTCFG_EPT_TYPE_BULK            (UDPHS_EPTCFG_EPT_TYPE_BULK_Val << UDPHS_EPTCFG_EPT_TYPE_Pos) /**< (UDPHS_EPTCFG) Bulk endpoint Position  */
#define UDPHS_EPTCFG_EPT_TYPE_INT             (UDPHS_EPTCFG_EPT_TYPE_INT_Val << UDPHS_EPTCFG_EPT_TYPE_Pos) /**< (UDPHS_EPTCFG) Interrupt endpoint Position  */
#define UDPHS_EPTCFG_BK_NUMBER_Pos            _U_(6)                                               /**< (UDPHS_EPTCFG) Number of Banks (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_BK_NUMBER_Msk            (_U_(0x3) << UDPHS_EPTCFG_BK_NUMBER_Pos)             /**< (UDPHS_EPTCFG) Number of Banks (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_BK_NUMBER(value)         (UDPHS_EPTCFG_BK_NUMBER_Msk & ((value) << UDPHS_EPTCFG_BK_NUMBER_Pos))
#define   UDPHS_EPTCFG_BK_NUMBER_0_Val        _U_(0x0)                                             /**< (UDPHS_EPTCFG) Zero bank, the endpoint is not mapped in memory  */
#define   UDPHS_EPTCFG_BK_NUMBER_1_Val        _U_(0x1)                                             /**< (UDPHS_EPTCFG) One bank (bank 0)  */
#define   UDPHS_EPTCFG_BK_NUMBER_2_Val        _U_(0x2)                                             /**< (UDPHS_EPTCFG) Double bank (Ping-Pong: bank0/bank1)  */
#define   UDPHS_EPTCFG_BK_NUMBER_3_Val        _U_(0x3)                                             /**< (UDPHS_EPTCFG) Triple bank (bank0/bank1/bank2)  */
#define UDPHS_EPTCFG_BK_NUMBER_0              (UDPHS_EPTCFG_BK_NUMBER_0_Val << UDPHS_EPTCFG_BK_NUMBER_Pos) /**< (UDPHS_EPTCFG) Zero bank, the endpoint is not mapped in memory Position  */
#define UDPHS_EPTCFG_BK_NUMBER_1              (UDPHS_EPTCFG_BK_NUMBER_1_Val << UDPHS_EPTCFG_BK_NUMBER_Pos) /**< (UDPHS_EPTCFG) One bank (bank 0) Position  */
#define UDPHS_EPTCFG_BK_NUMBER_2              (UDPHS_EPTCFG_BK_NUMBER_2_Val << UDPHS_EPTCFG_BK_NUMBER_Pos) /**< (UDPHS_EPTCFG) Double bank (Ping-Pong: bank0/bank1) Position  */
#define UDPHS_EPTCFG_BK_NUMBER_3              (UDPHS_EPTCFG_BK_NUMBER_3_Val << UDPHS_EPTCFG_BK_NUMBER_Pos) /**< (UDPHS_EPTCFG) Triple bank (bank0/bank1/bank2) Position  */
#define UDPHS_EPTCFG_NB_TRANS_Pos             _U_(8)                                               /**< (UDPHS_EPTCFG) Number Of Transaction per Microframe (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_NB_TRANS_Msk             (_U_(0x3) << UDPHS_EPTCFG_NB_TRANS_Pos)              /**< (UDPHS_EPTCFG) Number Of Transaction per Microframe (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_NB_TRANS(value)          (UDPHS_EPTCFG_NB_TRANS_Msk & ((value) << UDPHS_EPTCFG_NB_TRANS_Pos))
#define UDPHS_EPTCFG_EPT_MAPD_Pos             _U_(31)                                              /**< (UDPHS_EPTCFG) Endpoint Mapped (cleared upon USB reset) Position */
#define UDPHS_EPTCFG_EPT_MAPD_Msk             (_U_(0x1) << UDPHS_EPTCFG_EPT_MAPD_Pos)              /**< (UDPHS_EPTCFG) Endpoint Mapped (cleared upon USB reset) Mask */
#define UDPHS_EPTCFG_EPT_MAPD(value)          (UDPHS_EPTCFG_EPT_MAPD_Msk & ((value) << UDPHS_EPTCFG_EPT_MAPD_Pos))
#define UDPHS_EPTCFG_Msk                      _U_(0x800003FF)                                      /**< (UDPHS_EPTCFG) Register Mask  */


/* -------- UDPHS_EPTCTLENB : (UDPHS Offset: 0x04) ( /W 32) UDPHS Endpoint Control Enable Register (endpoint = 0) -------- */
#define UDPHS_EPTCTLENB_EPT_ENABL_Pos         _U_(0)                                               /**< (UDPHS_EPTCTLENB) Endpoint Enable Position */
#define UDPHS_EPTCTLENB_EPT_ENABL_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_EPT_ENABL_Pos)          /**< (UDPHS_EPTCTLENB) Endpoint Enable Mask */
#define UDPHS_EPTCTLENB_EPT_ENABL(value)      (UDPHS_EPTCTLENB_EPT_ENABL_Msk & ((value) << UDPHS_EPTCTLENB_EPT_ENABL_Pos))
#define UDPHS_EPTCTLENB_AUTO_VALID_Pos        _U_(1)                                               /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Position */
#define UDPHS_EPTCTLENB_AUTO_VALID_Msk        (_U_(0x1) << UDPHS_EPTCTLENB_AUTO_VALID_Pos)         /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Mask */
#define UDPHS_EPTCTLENB_AUTO_VALID(value)     (UDPHS_EPTCTLENB_AUTO_VALID_Msk & ((value) << UDPHS_EPTCTLENB_AUTO_VALID_Pos))
#define UDPHS_EPTCTLENB_INTDIS_DMA_Pos        _U_(3)                                               /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLENB_INTDIS_DMA_Msk        (_U_(0x1) << UDPHS_EPTCTLENB_INTDIS_DMA_Pos)         /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLENB_INTDIS_DMA(value)     (UDPHS_EPTCTLENB_INTDIS_DMA_Msk & ((value) << UDPHS_EPTCTLENB_INTDIS_DMA_Pos))
#define UDPHS_EPTCTLENB_NYET_DIS_Pos          _U_(4)                                               /**< (UDPHS_EPTCTLENB) NYET Disable (Only for High Speed Bulk OUT endpoints) Position */
#define UDPHS_EPTCTLENB_NYET_DIS_Msk          (_U_(0x1) << UDPHS_EPTCTLENB_NYET_DIS_Pos)           /**< (UDPHS_EPTCTLENB) NYET Disable (Only for High Speed Bulk OUT endpoints) Mask */
#define UDPHS_EPTCTLENB_NYET_DIS(value)       (UDPHS_EPTCTLENB_NYET_DIS_Msk & ((value) << UDPHS_EPTCTLENB_NYET_DIS_Pos))
#define UDPHS_EPTCTLENB_ERR_OVFLW_Pos         _U_(8)                                               /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ERR_OVFLW_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_ERR_OVFLW_Pos)          /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ERR_OVFLW(value)      (UDPHS_EPTCTLENB_ERR_OVFLW_Msk & ((value) << UDPHS_EPTCTLENB_ERR_OVFLW_Pos))
#define UDPHS_EPTCTLENB_RXRDY_TXKL_Pos        _U_(9)                                               /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Position */
#define UDPHS_EPTCTLENB_RXRDY_TXKL_Msk        (_U_(0x1) << UDPHS_EPTCTLENB_RXRDY_TXKL_Pos)         /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_RXRDY_TXKL(value)     (UDPHS_EPTCTLENB_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCTLENB_RXRDY_TXKL_Pos))
#define UDPHS_EPTCTLENB_TX_COMPLT_Pos         _U_(10)                                              /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Position */
#define UDPHS_EPTCTLENB_TX_COMPLT_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_TX_COMPLT_Pos)          /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_TX_COMPLT(value)      (UDPHS_EPTCTLENB_TX_COMPLT_Msk & ((value) << UDPHS_EPTCTLENB_TX_COMPLT_Pos))
#define UDPHS_EPTCTLENB_TXRDY_Pos             _U_(11)                                              /**< (UDPHS_EPTCTLENB) TX Packet Ready Interrupt Enable Position */
#define UDPHS_EPTCTLENB_TXRDY_Msk             (_U_(0x1) << UDPHS_EPTCTLENB_TXRDY_Pos)              /**< (UDPHS_EPTCTLENB) TX Packet Ready Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_TXRDY(value)          (UDPHS_EPTCTLENB_TXRDY_Msk & ((value) << UDPHS_EPTCTLENB_TXRDY_Pos))
#define UDPHS_EPTCTLENB_RX_SETUP_Pos          _U_(12)                                              /**< (UDPHS_EPTCTLENB) Received SETUP Position */
#define UDPHS_EPTCTLENB_RX_SETUP_Msk          (_U_(0x1) << UDPHS_EPTCTLENB_RX_SETUP_Pos)           /**< (UDPHS_EPTCTLENB) Received SETUP Mask */
#define UDPHS_EPTCTLENB_RX_SETUP(value)       (UDPHS_EPTCTLENB_RX_SETUP_Msk & ((value) << UDPHS_EPTCTLENB_RX_SETUP_Pos))
#define UDPHS_EPTCTLENB_STALL_SNT_Pos         _U_(13)                                              /**< (UDPHS_EPTCTLENB) Stall Sent Interrupt Enable Position */
#define UDPHS_EPTCTLENB_STALL_SNT_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_STALL_SNT_Pos)          /**< (UDPHS_EPTCTLENB) Stall Sent Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_STALL_SNT(value)      (UDPHS_EPTCTLENB_STALL_SNT_Msk & ((value) << UDPHS_EPTCTLENB_STALL_SNT_Pos))
#define UDPHS_EPTCTLENB_NAK_IN_Pos            _U_(14)                                              /**< (UDPHS_EPTCTLENB) NAKIN Interrupt Enable Position */
#define UDPHS_EPTCTLENB_NAK_IN_Msk            (_U_(0x1) << UDPHS_EPTCTLENB_NAK_IN_Pos)             /**< (UDPHS_EPTCTLENB) NAKIN Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_NAK_IN(value)         (UDPHS_EPTCTLENB_NAK_IN_Msk & ((value) << UDPHS_EPTCTLENB_NAK_IN_Pos))
#define UDPHS_EPTCTLENB_NAK_OUT_Pos           _U_(15)                                              /**< (UDPHS_EPTCTLENB) NAKOUT Interrupt Enable Position */
#define UDPHS_EPTCTLENB_NAK_OUT_Msk           (_U_(0x1) << UDPHS_EPTCTLENB_NAK_OUT_Pos)            /**< (UDPHS_EPTCTLENB) NAKOUT Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_NAK_OUT(value)        (UDPHS_EPTCTLENB_NAK_OUT_Msk & ((value) << UDPHS_EPTCTLENB_NAK_OUT_Pos))
#define UDPHS_EPTCTLENB_BUSY_BANK_Pos         _U_(18)                                              /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Position */
#define UDPHS_EPTCTLENB_BUSY_BANK_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_BUSY_BANK_Pos)          /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_BUSY_BANK(value)      (UDPHS_EPTCTLENB_BUSY_BANK_Msk & ((value) << UDPHS_EPTCTLENB_BUSY_BANK_Pos))
#define UDPHS_EPTCTLENB_SHRT_PCKT_Pos         _U_(31)                                              /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Position */
#define UDPHS_EPTCTLENB_SHRT_PCKT_Msk         (_U_(0x1) << UDPHS_EPTCTLENB_SHRT_PCKT_Pos)          /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_SHRT_PCKT(value)      (UDPHS_EPTCTLENB_SHRT_PCKT_Msk & ((value) << UDPHS_EPTCTLENB_SHRT_PCKT_Pos))
#define UDPHS_EPTCTLENB_Msk                   _U_(0x8004FF1B)                                      /**< (UDPHS_EPTCTLENB) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Pos _U_(0)                                               /**< (UDPHS_EPTCTLENB) Endpoint Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Pos) /**< (UDPHS_EPTCTLENB) Endpoint Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL(value) (UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_EPT_ENABL_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Pos _U_(1)                                               /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Pos) /**< (UDPHS_EPTCTLENB) Packet Auto-Valid Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID(value) (UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_AUTO_VALID_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Pos _U_(3)                                               /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Pos) /**< (UDPHS_EPTCTLENB) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA(value) (UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_INTDIS_DMA_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Pos _U_(6)                                               /**< (UDPHS_EPTCTLENB) DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Pos)  /**< (UDPHS_EPTCTLENB) DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX(value) (UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_DATAX_RX_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Pos _U_(7)                                               /**< (UDPHS_EPTCTLENB) MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Pos)  /**< (UDPHS_EPTCTLENB) MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX(value) (UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_MDATA_RX_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Pos _U_(8)                                               /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Pos) /**< (UDPHS_EPTCTLENB) Overflow Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW(value) (UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_ERR_OVFLW_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Pos _U_(9)                                               /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Pos) /**< (UDPHS_EPTCTLENB) Received OUT Data Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL(value) (UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_RXRDY_TXKL_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Pos _U_(10)                                              /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Pos) /**< (UDPHS_EPTCTLENB) Transmitted IN Data Complete Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT(value) (UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_TX_COMPLT_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Pos _U_(11)                                              /**< (UDPHS_EPTCTLENB) TX Packet Ready/Transaction Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Pos) /**< (UDPHS_EPTCTLENB) TX Packet Ready/Transaction Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER(value) (UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_TXRDY_TRER_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Pos _U_(12)                                              /**< (UDPHS_EPTCTLENB) Error Flow Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Pos) /**< (UDPHS_EPTCTLENB) Error Flow Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO(value) (UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_ERR_FL_ISO_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Pos _U_(13)                                              /**< (UDPHS_EPTCTLENB) ISO CRC Error/Number of Transaction Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Pos) /**< (UDPHS_EPTCTLENB) ISO CRC Error/Number of Transaction Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR(value) (UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_ERR_CRC_NTR_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Pos _U_(14)                                              /**< (UDPHS_EPTCTLENB) Bank Flush Error Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Pos) /**< (UDPHS_EPTCTLENB) Bank Flush Error Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH(value) (UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_ERR_FLUSH_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Pos _U_(18)                                              /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Pos) /**< (UDPHS_EPTCTLENB) Busy Bank Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK(value) (UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_BUSY_BANK_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Pos _U_(31)                                              /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Position */
#define UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Msk (_U_(0x1) << UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Pos) /**< (UDPHS_EPTCTLENB) Short Packet Send/Short Packet Interrupt Enable Mask */
#define UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT(value) (UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Msk & ((value) << UDPHS_EPTCTLENB_ISOENDPT_SHRT_PCKT_Pos))
#define UDPHS_EPTCTLENB_ISOENDPT_Msk          _U_(0x80047FCB)                                       /**< (UDPHS_EPTCTLENB_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTCTLDIS : (UDPHS Offset: 0x08) ( /W 32) UDPHS Endpoint Control Disable Register (endpoint = 0) -------- */
#define UDPHS_EPTCTLDIS_EPT_DISABL_Pos        _U_(0)                                               /**< (UDPHS_EPTCTLDIS) Endpoint Disable Position */
#define UDPHS_EPTCTLDIS_EPT_DISABL_Msk        (_U_(0x1) << UDPHS_EPTCTLDIS_EPT_DISABL_Pos)         /**< (UDPHS_EPTCTLDIS) Endpoint Disable Mask */
#define UDPHS_EPTCTLDIS_EPT_DISABL(value)     (UDPHS_EPTCTLDIS_EPT_DISABL_Msk & ((value) << UDPHS_EPTCTLDIS_EPT_DISABL_Pos))
#define UDPHS_EPTCTLDIS_AUTO_VALID_Pos        _U_(1)                                               /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Position */
#define UDPHS_EPTCTLDIS_AUTO_VALID_Msk        (_U_(0x1) << UDPHS_EPTCTLDIS_AUTO_VALID_Pos)         /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Mask */
#define UDPHS_EPTCTLDIS_AUTO_VALID(value)     (UDPHS_EPTCTLDIS_AUTO_VALID_Msk & ((value) << UDPHS_EPTCTLDIS_AUTO_VALID_Pos))
#define UDPHS_EPTCTLDIS_INTDIS_DMA_Pos        _U_(3)                                               /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLDIS_INTDIS_DMA_Msk        (_U_(0x1) << UDPHS_EPTCTLDIS_INTDIS_DMA_Pos)         /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLDIS_INTDIS_DMA(value)     (UDPHS_EPTCTLDIS_INTDIS_DMA_Msk & ((value) << UDPHS_EPTCTLDIS_INTDIS_DMA_Pos))
#define UDPHS_EPTCTLDIS_NYET_DIS_Pos          _U_(4)                                               /**< (UDPHS_EPTCTLDIS) NYET Enable (Only for High Speed Bulk OUT endpoints) Position */
#define UDPHS_EPTCTLDIS_NYET_DIS_Msk          (_U_(0x1) << UDPHS_EPTCTLDIS_NYET_DIS_Pos)           /**< (UDPHS_EPTCTLDIS) NYET Enable (Only for High Speed Bulk OUT endpoints) Mask */
#define UDPHS_EPTCTLDIS_NYET_DIS(value)       (UDPHS_EPTCTLDIS_NYET_DIS_Msk & ((value) << UDPHS_EPTCTLDIS_NYET_DIS_Pos))
#define UDPHS_EPTCTLDIS_ERR_OVFLW_Pos         _U_(8)                                               /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ERR_OVFLW_Msk         (_U_(0x1) << UDPHS_EPTCTLDIS_ERR_OVFLW_Pos)          /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ERR_OVFLW(value)      (UDPHS_EPTCTLDIS_ERR_OVFLW_Msk & ((value) << UDPHS_EPTCTLDIS_ERR_OVFLW_Pos))
#define UDPHS_EPTCTLDIS_RXRDY_TXKL_Pos        _U_(9)                                               /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_RXRDY_TXKL_Msk        (_U_(0x1) << UDPHS_EPTCTLDIS_RXRDY_TXKL_Pos)         /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_RXRDY_TXKL(value)     (UDPHS_EPTCTLDIS_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCTLDIS_RXRDY_TXKL_Pos))
#define UDPHS_EPTCTLDIS_TX_COMPLT_Pos         _U_(10)                                              /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_TX_COMPLT_Msk         (_U_(0x1) << UDPHS_EPTCTLDIS_TX_COMPLT_Pos)          /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_TX_COMPLT(value)      (UDPHS_EPTCTLDIS_TX_COMPLT_Msk & ((value) << UDPHS_EPTCTLDIS_TX_COMPLT_Pos))
#define UDPHS_EPTCTLDIS_TXRDY_Pos             _U_(11)                                              /**< (UDPHS_EPTCTLDIS) TX Packet Ready Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_TXRDY_Msk             (_U_(0x1) << UDPHS_EPTCTLDIS_TXRDY_Pos)              /**< (UDPHS_EPTCTLDIS) TX Packet Ready Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_TXRDY(value)          (UDPHS_EPTCTLDIS_TXRDY_Msk & ((value) << UDPHS_EPTCTLDIS_TXRDY_Pos))
#define UDPHS_EPTCTLDIS_RX_SETUP_Pos          _U_(12)                                              /**< (UDPHS_EPTCTLDIS) Received SETUP Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_RX_SETUP_Msk          (_U_(0x1) << UDPHS_EPTCTLDIS_RX_SETUP_Pos)           /**< (UDPHS_EPTCTLDIS) Received SETUP Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_RX_SETUP(value)       (UDPHS_EPTCTLDIS_RX_SETUP_Msk & ((value) << UDPHS_EPTCTLDIS_RX_SETUP_Pos))
#define UDPHS_EPTCTLDIS_STALL_SNT_Pos         _U_(13)                                              /**< (UDPHS_EPTCTLDIS) Stall Sent Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_STALL_SNT_Msk         (_U_(0x1) << UDPHS_EPTCTLDIS_STALL_SNT_Pos)          /**< (UDPHS_EPTCTLDIS) Stall Sent Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_STALL_SNT(value)      (UDPHS_EPTCTLDIS_STALL_SNT_Msk & ((value) << UDPHS_EPTCTLDIS_STALL_SNT_Pos))
#define UDPHS_EPTCTLDIS_NAK_IN_Pos            _U_(14)                                              /**< (UDPHS_EPTCTLDIS) NAKIN Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_NAK_IN_Msk            (_U_(0x1) << UDPHS_EPTCTLDIS_NAK_IN_Pos)             /**< (UDPHS_EPTCTLDIS) NAKIN Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_NAK_IN(value)         (UDPHS_EPTCTLDIS_NAK_IN_Msk & ((value) << UDPHS_EPTCTLDIS_NAK_IN_Pos))
#define UDPHS_EPTCTLDIS_NAK_OUT_Pos           _U_(15)                                              /**< (UDPHS_EPTCTLDIS) NAKOUT Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_NAK_OUT_Msk           (_U_(0x1) << UDPHS_EPTCTLDIS_NAK_OUT_Pos)            /**< (UDPHS_EPTCTLDIS) NAKOUT Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_NAK_OUT(value)        (UDPHS_EPTCTLDIS_NAK_OUT_Msk & ((value) << UDPHS_EPTCTLDIS_NAK_OUT_Pos))
#define UDPHS_EPTCTLDIS_BUSY_BANK_Pos         _U_(18)                                              /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_BUSY_BANK_Msk         (_U_(0x1) << UDPHS_EPTCTLDIS_BUSY_BANK_Pos)          /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_BUSY_BANK(value)      (UDPHS_EPTCTLDIS_BUSY_BANK_Msk & ((value) << UDPHS_EPTCTLDIS_BUSY_BANK_Pos))
#define UDPHS_EPTCTLDIS_SHRT_PCKT_Pos         _U_(31)                                              /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_SHRT_PCKT_Msk         (_U_(0x1) << UDPHS_EPTCTLDIS_SHRT_PCKT_Pos)          /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_SHRT_PCKT(value)      (UDPHS_EPTCTLDIS_SHRT_PCKT_Msk & ((value) << UDPHS_EPTCTLDIS_SHRT_PCKT_Pos))
#define UDPHS_EPTCTLDIS_Msk                   _U_(0x8004FF1B)                                      /**< (UDPHS_EPTCTLDIS) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Pos _U_(0)                                               /**< (UDPHS_EPTCTLDIS) Endpoint Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Pos) /**< (UDPHS_EPTCTLDIS) Endpoint Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL(value) (UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_EPT_DISABL_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Pos _U_(1)                                               /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Pos) /**< (UDPHS_EPTCTLDIS) Packet Auto-Valid Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID(value) (UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_AUTO_VALID_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Pos _U_(3)                                               /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Pos) /**< (UDPHS_EPTCTLDIS) Interrupts Disable DMA Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA(value) (UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_INTDIS_DMA_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Pos _U_(6)                                               /**< (UDPHS_EPTCTLDIS) DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Pos)  /**< (UDPHS_EPTCTLDIS) DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX(value) (UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_DATAX_RX_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Pos _U_(7)                                               /**< (UDPHS_EPTCTLDIS) MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Pos)  /**< (UDPHS_EPTCTLDIS) MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints) Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX(value) (UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_MDATA_RX_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Pos _U_(8)                                               /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Pos) /**< (UDPHS_EPTCTLDIS) Overflow Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW(value) (UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_OVFLW_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Pos _U_(9)                                               /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Pos) /**< (UDPHS_EPTCTLDIS) Received OUT Data Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL(value) (UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_RXRDY_TXKL_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Pos _U_(10)                                              /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Pos) /**< (UDPHS_EPTCTLDIS) Transmitted IN Data Complete Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT(value) (UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_TX_COMPLT_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Pos _U_(11)                                              /**< (UDPHS_EPTCTLDIS) TX Packet Ready/Transaction Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Pos) /**< (UDPHS_EPTCTLDIS) TX Packet Ready/Transaction Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER(value) (UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_TXRDY_TRER_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Pos _U_(12)                                              /**< (UDPHS_EPTCTLDIS) Error Flow Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Pos) /**< (UDPHS_EPTCTLDIS) Error Flow Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO(value) (UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_FL_ISO_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Pos _U_(13)                                              /**< (UDPHS_EPTCTLDIS) ISO CRC Error/Number of Transaction Error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Pos) /**< (UDPHS_EPTCTLDIS) ISO CRC Error/Number of Transaction Error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR(value) (UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_CRC_NTR_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Pos _U_(14)                                              /**< (UDPHS_EPTCTLDIS) bank flush error Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Pos) /**< (UDPHS_EPTCTLDIS) bank flush error Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH(value) (UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_ERR_FLUSH_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Pos _U_(18)                                              /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Pos) /**< (UDPHS_EPTCTLDIS) Busy Bank Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK(value) (UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_BUSY_BANK_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Pos _U_(31)                                              /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Position */
#define UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Msk (_U_(0x1) << UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Pos) /**< (UDPHS_EPTCTLDIS) Short Packet Interrupt Disable Mask */
#define UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT(value) (UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Msk & ((value) << UDPHS_EPTCTLDIS_ISOENDPT_SHRT_PCKT_Pos))
#define UDPHS_EPTCTLDIS_ISOENDPT_Msk          _U_(0x80047FCB)                                       /**< (UDPHS_EPTCTLDIS_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTCTL : (UDPHS Offset: 0x0C) ( R/ 32) UDPHS Endpoint Control Register (endpoint = 0) -------- */
#define UDPHS_EPTCTL_EPT_ENABL_Pos            _U_(0)                                               /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_EPT_ENABL_Msk            (_U_(0x1) << UDPHS_EPTCTL_EPT_ENABL_Pos)             /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_EPT_ENABL(value)         (UDPHS_EPTCTL_EPT_ENABL_Msk & ((value) << UDPHS_EPTCTL_EPT_ENABL_Pos))
#define UDPHS_EPTCTL_AUTO_VALID_Pos           _U_(1)                                               /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (Not for CONTROL Endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_AUTO_VALID_Msk           (_U_(0x1) << UDPHS_EPTCTL_AUTO_VALID_Pos)            /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (Not for CONTROL Endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_AUTO_VALID(value)        (UDPHS_EPTCTL_AUTO_VALID_Msk & ((value) << UDPHS_EPTCTL_AUTO_VALID_Pos))
#define UDPHS_EPTCTL_INTDIS_DMA_Pos           _U_(3)                                               /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_INTDIS_DMA_Msk           (_U_(0x1) << UDPHS_EPTCTL_INTDIS_DMA_Pos)            /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_INTDIS_DMA(value)        (UDPHS_EPTCTL_INTDIS_DMA_Msk & ((value) << UDPHS_EPTCTL_INTDIS_DMA_Pos))
#define UDPHS_EPTCTL_NYET_DIS_Pos             _U_(4)                                               /**< (UDPHS_EPTCTL) NYET Disable (Only for High Speed Bulk OUT Endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_NYET_DIS_Msk             (_U_(0x1) << UDPHS_EPTCTL_NYET_DIS_Pos)              /**< (UDPHS_EPTCTL) NYET Disable (Only for High Speed Bulk OUT Endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_NYET_DIS(value)          (UDPHS_EPTCTL_NYET_DIS_Msk & ((value) << UDPHS_EPTCTL_NYET_DIS_Pos))
#define UDPHS_EPTCTL_ERR_OVFLW_Pos            _U_(8)                                               /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ERR_OVFLW_Msk            (_U_(0x1) << UDPHS_EPTCTL_ERR_OVFLW_Pos)             /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ERR_OVFLW(value)         (UDPHS_EPTCTL_ERR_OVFLW_Msk & ((value) << UDPHS_EPTCTL_ERR_OVFLW_Pos))
#define UDPHS_EPTCTL_RXRDY_TXKL_Pos           _U_(9)                                               /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_RXRDY_TXKL_Msk           (_U_(0x1) << UDPHS_EPTCTL_RXRDY_TXKL_Pos)            /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_RXRDY_TXKL(value)        (UDPHS_EPTCTL_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCTL_RXRDY_TXKL_Pos))
#define UDPHS_EPTCTL_TX_COMPLT_Pos            _U_(10)                                              /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_TX_COMPLT_Msk            (_U_(0x1) << UDPHS_EPTCTL_TX_COMPLT_Pos)             /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_TX_COMPLT(value)         (UDPHS_EPTCTL_TX_COMPLT_Msk & ((value) << UDPHS_EPTCTL_TX_COMPLT_Pos))
#define UDPHS_EPTCTL_TXRDY_Pos                _U_(11)                                              /**< (UDPHS_EPTCTL) TX Packet Ready Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_TXRDY_Msk                (_U_(0x1) << UDPHS_EPTCTL_TXRDY_Pos)                 /**< (UDPHS_EPTCTL) TX Packet Ready Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_TXRDY(value)             (UDPHS_EPTCTL_TXRDY_Msk & ((value) << UDPHS_EPTCTL_TXRDY_Pos))
#define UDPHS_EPTCTL_RX_SETUP_Pos             _U_(12)                                              /**< (UDPHS_EPTCTL) Received SETUP Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_RX_SETUP_Msk             (_U_(0x1) << UDPHS_EPTCTL_RX_SETUP_Pos)              /**< (UDPHS_EPTCTL) Received SETUP Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_RX_SETUP(value)          (UDPHS_EPTCTL_RX_SETUP_Msk & ((value) << UDPHS_EPTCTL_RX_SETUP_Pos))
#define UDPHS_EPTCTL_STALL_SNT_Pos            _U_(13)                                              /**< (UDPHS_EPTCTL) Stall Sent Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_STALL_SNT_Msk            (_U_(0x1) << UDPHS_EPTCTL_STALL_SNT_Pos)             /**< (UDPHS_EPTCTL) Stall Sent Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_STALL_SNT(value)         (UDPHS_EPTCTL_STALL_SNT_Msk & ((value) << UDPHS_EPTCTL_STALL_SNT_Pos))
#define UDPHS_EPTCTL_NAK_IN_Pos               _U_(14)                                              /**< (UDPHS_EPTCTL) NAKIN Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_NAK_IN_Msk               (_U_(0x1) << UDPHS_EPTCTL_NAK_IN_Pos)                /**< (UDPHS_EPTCTL) NAKIN Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_NAK_IN(value)            (UDPHS_EPTCTL_NAK_IN_Msk & ((value) << UDPHS_EPTCTL_NAK_IN_Pos))
#define UDPHS_EPTCTL_NAK_OUT_Pos              _U_(15)                                              /**< (UDPHS_EPTCTL) NAKOUT Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_NAK_OUT_Msk              (_U_(0x1) << UDPHS_EPTCTL_NAK_OUT_Pos)               /**< (UDPHS_EPTCTL) NAKOUT Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_NAK_OUT(value)           (UDPHS_EPTCTL_NAK_OUT_Msk & ((value) << UDPHS_EPTCTL_NAK_OUT_Pos))
#define UDPHS_EPTCTL_BUSY_BANK_Pos            _U_(18)                                              /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_BUSY_BANK_Msk            (_U_(0x1) << UDPHS_EPTCTL_BUSY_BANK_Pos)             /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_BUSY_BANK(value)         (UDPHS_EPTCTL_BUSY_BANK_Msk & ((value) << UDPHS_EPTCTL_BUSY_BANK_Pos))
#define UDPHS_EPTCTL_SHRT_PCKT_Pos            _U_(31)                                              /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_SHRT_PCKT_Msk            (_U_(0x1) << UDPHS_EPTCTL_SHRT_PCKT_Pos)             /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_SHRT_PCKT(value)         (UDPHS_EPTCTL_SHRT_PCKT_Msk & ((value) << UDPHS_EPTCTL_SHRT_PCKT_Pos))
#define UDPHS_EPTCTL_Msk                      _U_(0x8004FF1B)                                      /**< (UDPHS_EPTCTL) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Pos   _U_(0)                                               /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Msk   (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Pos)    /**< (UDPHS_EPTCTL) Endpoint Enable (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_EPT_ENABL(value) (UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_EPT_ENABL_Pos))
#define UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Pos  _U_(1)                                               /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Pos)   /**< (UDPHS_EPTCTL) Packet Auto-Valid Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_AUTO_VALID(value) (UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_AUTO_VALID_Pos))
#define UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Pos  _U_(3)                                               /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Pos)   /**< (UDPHS_EPTCTL) Interrupt Disables DMA (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA(value) (UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_INTDIS_DMA_Pos))
#define UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Pos    _U_(6)                                               /**< (UDPHS_EPTCTL) DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Msk    (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Pos)     /**< (UDPHS_EPTCTL) DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_DATAX_RX(value) (UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_DATAX_RX_Pos))
#define UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Pos    _U_(7)                                               /**< (UDPHS_EPTCTL) MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Msk    (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Pos)     /**< (UDPHS_EPTCTL) MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints) (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_MDATA_RX(value) (UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_MDATA_RX_Pos))
#define UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Pos   _U_(8)                                               /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Msk   (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Pos)    /**< (UDPHS_EPTCTL) Overflow Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW(value) (UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_ERR_OVFLW_Pos))
#define UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Pos  _U_(9)                                               /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Pos)   /**< (UDPHS_EPTCTL) Received OUT Data Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL(value) (UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_RXRDY_TXKL_Pos))
#define UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Pos   _U_(10)                                              /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Msk   (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Pos)    /**< (UDPHS_EPTCTL) Transmitted IN Data Complete Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_TX_COMPLT(value) (UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_TX_COMPLT_Pos))
#define UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Pos  _U_(11)                                              /**< (UDPHS_EPTCTL) TX Packet Ready/Transaction Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Pos)   /**< (UDPHS_EPTCTL) TX Packet Ready/Transaction Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER(value) (UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_TXRDY_TRER_Pos))
#define UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Pos  _U_(12)                                              /**< (UDPHS_EPTCTL) Error Flow Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Msk  (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Pos)   /**< (UDPHS_EPTCTL) Error Flow Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO(value) (UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_ERR_FL_ISO_Pos))
#define UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Pos _U_(13)                                              /**< (UDPHS_EPTCTL) ISO CRC Error/Number of Transaction Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTCTL) ISO CRC Error/Number of Transaction Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR(value) (UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_ERR_CRC_NTR_Pos))
#define UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Pos   _U_(14)                                              /**< (UDPHS_EPTCTL) Bank Flush Error Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Msk   (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Pos)    /**< (UDPHS_EPTCTL) Bank Flush Error Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH(value) (UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_ERR_FLUSH_Pos))
#define UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Pos   _U_(18)                                              /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Msk   (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Pos)    /**< (UDPHS_EPTCTL) Busy Bank Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_BUSY_BANK(value) (UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_BUSY_BANK_Pos))
#define UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Pos   _U_(31)                                              /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Position */
#define UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Msk   (_U_(0x1) << UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Pos)    /**< (UDPHS_EPTCTL) Short Packet Interrupt Enabled (cleared upon USB reset) Mask */
#define UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT(value) (UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Msk & ((value) << UDPHS_EPTCTL_ISOENDPT_SHRT_PCKT_Pos))
#define UDPHS_EPTCTL_ISOENDPT_Msk             _U_(0x80047FCB)                                       /**< (UDPHS_EPTCTL_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTSETSTA : (UDPHS Offset: 0x14) ( /W 32) UDPHS Endpoint Set Status Register (endpoint = 0) -------- */
#define UDPHS_EPTSETSTA_FRCESTALL_Pos         _U_(5)                                               /**< (UDPHS_EPTSETSTA) Stall Handshake Request Set Position */
#define UDPHS_EPTSETSTA_FRCESTALL_Msk         (_U_(0x1) << UDPHS_EPTSETSTA_FRCESTALL_Pos)          /**< (UDPHS_EPTSETSTA) Stall Handshake Request Set Mask */
#define UDPHS_EPTSETSTA_FRCESTALL(value)      (UDPHS_EPTSETSTA_FRCESTALL_Msk & ((value) << UDPHS_EPTSETSTA_FRCESTALL_Pos))
#define UDPHS_EPTSETSTA_RXRDY_TXKL_Pos        _U_(9)                                               /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Position */
#define UDPHS_EPTSETSTA_RXRDY_TXKL_Msk        (_U_(0x1) << UDPHS_EPTSETSTA_RXRDY_TXKL_Pos)         /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Mask */
#define UDPHS_EPTSETSTA_RXRDY_TXKL(value)     (UDPHS_EPTSETSTA_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTSETSTA_RXRDY_TXKL_Pos))
#define UDPHS_EPTSETSTA_TXRDY_Pos             _U_(11)                                              /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Position */
#define UDPHS_EPTSETSTA_TXRDY_Msk             (_U_(0x1) << UDPHS_EPTSETSTA_TXRDY_Pos)              /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Mask */
#define UDPHS_EPTSETSTA_TXRDY(value)          (UDPHS_EPTSETSTA_TXRDY_Msk & ((value) << UDPHS_EPTSETSTA_TXRDY_Pos))
#define UDPHS_EPTSETSTA_Msk                   _U_(0x00000A20)                                      /**< (UDPHS_EPTSETSTA) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Pos _U_(9)                                               /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Position */
#define UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Pos) /**< (UDPHS_EPTSETSTA) KILL Bank Set (for IN Endpoint) Mask */
#define UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL(value) (UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTSETSTA_ISOENDPT_RXRDY_TXKL_Pos))
#define UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Pos _U_(11)                                              /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Position */
#define UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Msk (_U_(0x1) << UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Pos) /**< (UDPHS_EPTSETSTA) TX Packet Ready Set Mask */
#define UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER(value) (UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Msk & ((value) << UDPHS_EPTSETSTA_ISOENDPT_TXRDY_TRER_Pos))
#define UDPHS_EPTSETSTA_ISOENDPT_Msk          _U_(0x00000A00)                                       /**< (UDPHS_EPTSETSTA_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTCLRSTA : (UDPHS Offset: 0x18) ( /W 32) UDPHS Endpoint Clear Status Register (endpoint = 0) -------- */
#define UDPHS_EPTCLRSTA_FRCESTALL_Pos         _U_(5)                                               /**< (UDPHS_EPTCLRSTA) Stall Handshake Request Clear Position */
#define UDPHS_EPTCLRSTA_FRCESTALL_Msk         (_U_(0x1) << UDPHS_EPTCLRSTA_FRCESTALL_Pos)          /**< (UDPHS_EPTCLRSTA) Stall Handshake Request Clear Mask */
#define UDPHS_EPTCLRSTA_FRCESTALL(value)      (UDPHS_EPTCLRSTA_FRCESTALL_Msk & ((value) << UDPHS_EPTCLRSTA_FRCESTALL_Pos))
#define UDPHS_EPTCLRSTA_TOGGLESQ_Pos          _U_(6)                                               /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Position */
#define UDPHS_EPTCLRSTA_TOGGLESQ_Msk          (_U_(0x1) << UDPHS_EPTCLRSTA_TOGGLESQ_Pos)           /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Mask */
#define UDPHS_EPTCLRSTA_TOGGLESQ(value)       (UDPHS_EPTCLRSTA_TOGGLESQ_Msk & ((value) << UDPHS_EPTCLRSTA_TOGGLESQ_Pos))
#define UDPHS_EPTCLRSTA_RXRDY_TXKL_Pos        _U_(9)                                               /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Position */
#define UDPHS_EPTCLRSTA_RXRDY_TXKL_Msk        (_U_(0x1) << UDPHS_EPTCLRSTA_RXRDY_TXKL_Pos)         /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Mask */
#define UDPHS_EPTCLRSTA_RXRDY_TXKL(value)     (UDPHS_EPTCLRSTA_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCLRSTA_RXRDY_TXKL_Pos))
#define UDPHS_EPTCLRSTA_TX_COMPLT_Pos         _U_(10)                                              /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Position */
#define UDPHS_EPTCLRSTA_TX_COMPLT_Msk         (_U_(0x1) << UDPHS_EPTCLRSTA_TX_COMPLT_Pos)          /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Mask */
#define UDPHS_EPTCLRSTA_TX_COMPLT(value)      (UDPHS_EPTCLRSTA_TX_COMPLT_Msk & ((value) << UDPHS_EPTCLRSTA_TX_COMPLT_Pos))
#define UDPHS_EPTCLRSTA_RX_SETUP_Pos          _U_(12)                                              /**< (UDPHS_EPTCLRSTA) Received SETUP Clear Position */
#define UDPHS_EPTCLRSTA_RX_SETUP_Msk          (_U_(0x1) << UDPHS_EPTCLRSTA_RX_SETUP_Pos)           /**< (UDPHS_EPTCLRSTA) Received SETUP Clear Mask */
#define UDPHS_EPTCLRSTA_RX_SETUP(value)       (UDPHS_EPTCLRSTA_RX_SETUP_Msk & ((value) << UDPHS_EPTCLRSTA_RX_SETUP_Pos))
#define UDPHS_EPTCLRSTA_STALL_SNT_Pos         _U_(13)                                              /**< (UDPHS_EPTCLRSTA) Stall Sent Clear Position */
#define UDPHS_EPTCLRSTA_STALL_SNT_Msk         (_U_(0x1) << UDPHS_EPTCLRSTA_STALL_SNT_Pos)          /**< (UDPHS_EPTCLRSTA) Stall Sent Clear Mask */
#define UDPHS_EPTCLRSTA_STALL_SNT(value)      (UDPHS_EPTCLRSTA_STALL_SNT_Msk & ((value) << UDPHS_EPTCLRSTA_STALL_SNT_Pos))
#define UDPHS_EPTCLRSTA_NAK_IN_Pos            _U_(14)                                              /**< (UDPHS_EPTCLRSTA) NAKIN Clear Position */
#define UDPHS_EPTCLRSTA_NAK_IN_Msk            (_U_(0x1) << UDPHS_EPTCLRSTA_NAK_IN_Pos)             /**< (UDPHS_EPTCLRSTA) NAKIN Clear Mask */
#define UDPHS_EPTCLRSTA_NAK_IN(value)         (UDPHS_EPTCLRSTA_NAK_IN_Msk & ((value) << UDPHS_EPTCLRSTA_NAK_IN_Pos))
#define UDPHS_EPTCLRSTA_NAK_OUT_Pos           _U_(15)                                              /**< (UDPHS_EPTCLRSTA) NAKOUT Clear Position */
#define UDPHS_EPTCLRSTA_NAK_OUT_Msk           (_U_(0x1) << UDPHS_EPTCLRSTA_NAK_OUT_Pos)            /**< (UDPHS_EPTCLRSTA) NAKOUT Clear Mask */
#define UDPHS_EPTCLRSTA_NAK_OUT(value)        (UDPHS_EPTCLRSTA_NAK_OUT_Msk & ((value) << UDPHS_EPTCLRSTA_NAK_OUT_Pos))
#define UDPHS_EPTCLRSTA_Msk                   _U_(0x0000F660)                                      /**< (UDPHS_EPTCLRSTA) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Pos _U_(6)                                               /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Pos)  /**< (UDPHS_EPTCLRSTA) Data Toggle Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ(value) (UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Msk & ((value) << UDPHS_EPTCLRSTA_ISOENDPT_TOGGLESQ_Pos))
#define UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Pos _U_(9)                                               /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Pos) /**< (UDPHS_EPTCLRSTA) Received OUT Data Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL(value) (UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTCLRSTA_ISOENDPT_RXRDY_TXKL_Pos))
#define UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Pos _U_(10)                                              /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Pos) /**< (UDPHS_EPTCLRSTA) Transmitted IN Data Complete Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT(value) (UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Msk & ((value) << UDPHS_EPTCLRSTA_ISOENDPT_TX_COMPLT_Pos))
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Pos _U_(12)                                              /**< (UDPHS_EPTCLRSTA) Error Flow Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Pos) /**< (UDPHS_EPTCLRSTA) Error Flow Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO(value) (UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Msk & ((value) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_FL_ISO_Pos))
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Pos _U_(13)                                              /**< (UDPHS_EPTCLRSTA) Number of Transaction Error Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Pos) /**< (UDPHS_EPTCLRSTA) Number of Transaction Error Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR(value) (UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Msk & ((value) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_CRC_NTR_Pos))
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Pos _U_(14)                                              /**< (UDPHS_EPTCLRSTA) Bank Flush Error Clear Position */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Msk (_U_(0x1) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Pos) /**< (UDPHS_EPTCLRSTA) Bank Flush Error Clear Mask */
#define UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH(value) (UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Msk & ((value) << UDPHS_EPTCLRSTA_ISOENDPT_ERR_FLUSH_Pos))
#define UDPHS_EPTCLRSTA_ISOENDPT_Msk          _U_(0x00007640)                                       /**< (UDPHS_EPTCLRSTA_ISOENDPT) Register Mask  */


/* -------- UDPHS_EPTSTA : (UDPHS Offset: 0x1C) ( R/ 32) UDPHS Endpoint Status Register (endpoint = 0) -------- */
#define UDPHS_EPTSTA_FRCESTALL_Pos            _U_(5)                                               /**< (UDPHS_EPTSTA) Stall Handshake Request (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_FRCESTALL_Msk            (_U_(0x1) << UDPHS_EPTSTA_FRCESTALL_Pos)             /**< (UDPHS_EPTSTA) Stall Handshake Request (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_FRCESTALL(value)         (UDPHS_EPTSTA_FRCESTALL_Msk & ((value) << UDPHS_EPTSTA_FRCESTALL_Pos))
#define UDPHS_EPTSTA_TOGGLESQ_STA_Pos         _U_(6)                                               /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_TOGGLESQ_STA_Msk         (_U_(0x3) << UDPHS_EPTSTA_TOGGLESQ_STA_Pos)          /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_TOGGLESQ_STA(value)      (UDPHS_EPTSTA_TOGGLESQ_STA_Msk & ((value) << UDPHS_EPTSTA_TOGGLESQ_STA_Pos))
#define   UDPHS_EPTSTA_TOGGLESQ_STA_DATA0_Val _U_(0x0)                                             /**< (UDPHS_EPTSTA) DATA0  */
#define   UDPHS_EPTSTA_TOGGLESQ_STA_DATA1_Val _U_(0x1)                                             /**< (UDPHS_EPTSTA) DATA1  */
#define   UDPHS_EPTSTA_TOGGLESQ_STA_DATA2_Val _U_(0x2)                                             /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint  */
#define   UDPHS_EPTSTA_TOGGLESQ_STA_MDATA_Val _U_(0x3)                                             /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA0       (UDPHS_EPTSTA_TOGGLESQ_STA_DATA0_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) DATA0 Position  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA1       (UDPHS_EPTSTA_TOGGLESQ_STA_DATA1_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) DATA1 Position  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_DATA2       (UDPHS_EPTSTA_TOGGLESQ_STA_DATA2_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint Position  */
#define UDPHS_EPTSTA_TOGGLESQ_STA_MDATA       (UDPHS_EPTSTA_TOGGLESQ_STA_MDATA_Val << UDPHS_EPTSTA_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) Reserved for High Bandwidth Isochronous Endpoint Position  */
#define UDPHS_EPTSTA_ERR_OVFLW_Pos            _U_(8)                                               /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ERR_OVFLW_Msk            (_U_(0x1) << UDPHS_EPTSTA_ERR_OVFLW_Pos)             /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ERR_OVFLW(value)         (UDPHS_EPTSTA_ERR_OVFLW_Msk & ((value) << UDPHS_EPTSTA_ERR_OVFLW_Pos))
#define UDPHS_EPTSTA_RXRDY_TXKL_Pos           _U_(9)                                               /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_RXRDY_TXKL_Msk           (_U_(0x1) << UDPHS_EPTSTA_RXRDY_TXKL_Pos)            /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_RXRDY_TXKL(value)        (UDPHS_EPTSTA_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTSTA_RXRDY_TXKL_Pos))
#define UDPHS_EPTSTA_TX_COMPLT_Pos            _U_(10)                                              /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_TX_COMPLT_Msk            (_U_(0x1) << UDPHS_EPTSTA_TX_COMPLT_Pos)             /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_TX_COMPLT(value)         (UDPHS_EPTSTA_TX_COMPLT_Msk & ((value) << UDPHS_EPTSTA_TX_COMPLT_Pos))
#define UDPHS_EPTSTA_TXRDY_Pos                _U_(11)                                              /**< (UDPHS_EPTSTA) TX Packet Ready (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_TXRDY_Msk                (_U_(0x1) << UDPHS_EPTSTA_TXRDY_Pos)                 /**< (UDPHS_EPTSTA) TX Packet Ready (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_TXRDY(value)             (UDPHS_EPTSTA_TXRDY_Msk & ((value) << UDPHS_EPTSTA_TXRDY_Pos))
#define UDPHS_EPTSTA_RX_SETUP_Pos             _U_(12)                                              /**< (UDPHS_EPTSTA) Received SETUP (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_RX_SETUP_Msk             (_U_(0x1) << UDPHS_EPTSTA_RX_SETUP_Pos)              /**< (UDPHS_EPTSTA) Received SETUP (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_RX_SETUP(value)          (UDPHS_EPTSTA_RX_SETUP_Msk & ((value) << UDPHS_EPTSTA_RX_SETUP_Pos))
#define UDPHS_EPTSTA_STALL_SNT_Pos            _U_(13)                                              /**< (UDPHS_EPTSTA) Stall Sent (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_STALL_SNT_Msk            (_U_(0x1) << UDPHS_EPTSTA_STALL_SNT_Pos)             /**< (UDPHS_EPTSTA) Stall Sent (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_STALL_SNT(value)         (UDPHS_EPTSTA_STALL_SNT_Msk & ((value) << UDPHS_EPTSTA_STALL_SNT_Pos))
#define UDPHS_EPTSTA_NAK_IN_Pos               _U_(14)                                              /**< (UDPHS_EPTSTA) NAK IN (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_NAK_IN_Msk               (_U_(0x1) << UDPHS_EPTSTA_NAK_IN_Pos)                /**< (UDPHS_EPTSTA) NAK IN (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_NAK_IN(value)            (UDPHS_EPTSTA_NAK_IN_Msk & ((value) << UDPHS_EPTSTA_NAK_IN_Pos))
#define UDPHS_EPTSTA_NAK_OUT_Pos              _U_(15)                                              /**< (UDPHS_EPTSTA) NAK OUT (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_NAK_OUT_Msk              (_U_(0x1) << UDPHS_EPTSTA_NAK_OUT_Pos)               /**< (UDPHS_EPTSTA) NAK OUT (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_NAK_OUT(value)           (UDPHS_EPTSTA_NAK_OUT_Msk & ((value) << UDPHS_EPTSTA_NAK_OUT_Pos))
#define UDPHS_EPTSTA_CURBK_CTLDIR_Pos         _U_(16)                                              /**< (UDPHS_EPTSTA) Current Bank/Control Direction (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_CURBK_CTLDIR_Msk         (_U_(0x3) << UDPHS_EPTSTA_CURBK_CTLDIR_Pos)          /**< (UDPHS_EPTSTA) Current Bank/Control Direction (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_CURBK_CTLDIR(value)      (UDPHS_EPTSTA_CURBK_CTLDIR_Msk & ((value) << UDPHS_EPTSTA_CURBK_CTLDIR_Pos))
#define UDPHS_EPTSTA_BUSY_BANK_STA_Pos        _U_(18)                                              /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_BUSY_BANK_STA_Msk        (_U_(0x3) << UDPHS_EPTSTA_BUSY_BANK_STA_Pos)         /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_BUSY_BANK_STA(value)     (UDPHS_EPTSTA_BUSY_BANK_STA_Msk & ((value) << UDPHS_EPTSTA_BUSY_BANK_STA_Pos))
#define   UDPHS_EPTSTA_BUSY_BANK_STA_0BUSYBANK_Val _U_(0x0)                                             /**< (UDPHS_EPTSTA) All banks are free  */
#define   UDPHS_EPTSTA_BUSY_BANK_STA_1BUSYBANK_Val _U_(0x1)                                             /**< (UDPHS_EPTSTA) 1 busy bank  */
#define   UDPHS_EPTSTA_BUSY_BANK_STA_2BUSYBANKS_Val _U_(0x2)                                             /**< (UDPHS_EPTSTA) 2 busy banks  */
#define   UDPHS_EPTSTA_BUSY_BANK_STA_3BUSYBANKS_Val _U_(0x3)                                             /**< (UDPHS_EPTSTA) 3 busy banks  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_0BUSYBANK  (UDPHS_EPTSTA_BUSY_BANK_STA_0BUSYBANK_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) All banks are free Position  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_1BUSYBANK  (UDPHS_EPTSTA_BUSY_BANK_STA_1BUSYBANK_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) 1 busy bank Position  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_2BUSYBANKS (UDPHS_EPTSTA_BUSY_BANK_STA_2BUSYBANKS_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) 2 busy banks Position  */
#define UDPHS_EPTSTA_BUSY_BANK_STA_3BUSYBANKS (UDPHS_EPTSTA_BUSY_BANK_STA_3BUSYBANKS_Val << UDPHS_EPTSTA_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) 3 busy banks Position  */
#define UDPHS_EPTSTA_BYTE_COUNT_Pos           _U_(20)                                              /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_BYTE_COUNT_Msk           (_U_(0x7FF) << UDPHS_EPTSTA_BYTE_COUNT_Pos)          /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_BYTE_COUNT(value)        (UDPHS_EPTSTA_BYTE_COUNT_Msk & ((value) << UDPHS_EPTSTA_BYTE_COUNT_Pos))
#define UDPHS_EPTSTA_SHRT_PCKT_Pos            _U_(31)                                              /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_SHRT_PCKT_Msk            (_U_(0x1) << UDPHS_EPTSTA_SHRT_PCKT_Pos)             /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_SHRT_PCKT(value)         (UDPHS_EPTSTA_SHRT_PCKT_Msk & ((value) << UDPHS_EPTSTA_SHRT_PCKT_Pos))
#define UDPHS_EPTSTA_Msk                      _U_(0xFFFFFFE0)                                      /**< (UDPHS_EPTSTA) Register Mask  */

/* ISOENDPT mode */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos _U_(6)                                               /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Msk (_U_(0x3) << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) Toggle Sequencing (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA(value) (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos))
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA0_Val _U_(0x0)                                             /**< (UDPHS_EPTSTA) DATA0  */
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA1_Val _U_(0x1)                                             /**< (UDPHS_EPTSTA) DATA1  */
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA2_Val _U_(0x2)                                             /**< (UDPHS_EPTSTA) Data2 (only for High Bandwidth Isochronous Endpoint)  */
#define   UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_MDATA_Val _U_(0x3)                                             /**< (UDPHS_EPTSTA) MData (only for High Bandwidth Isochronous Endpoint)  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA0 (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA0_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) DATA0 Position  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA1 (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA1_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) DATA1 Position  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA2 (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_DATA2_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) Data2 (only for High Bandwidth Isochronous Endpoint) Position  */
#define UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_MDATA (UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_MDATA_Val << UDPHS_EPTSTA_ISOENDPT_TOGGLESQ_STA_Pos) /**< (UDPHS_EPTSTA) MData (only for High Bandwidth Isochronous Endpoint) Position  */
#define UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Pos   _U_(8)                                               /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Msk   (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Pos)    /**< (UDPHS_EPTSTA) Overflow Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW(value) (UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_ERR_OVFLW_Pos))
#define UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Pos  _U_(9)                                               /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Msk  (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Pos)   /**< (UDPHS_EPTSTA) Received OUT Data/KILL Bank (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL(value) (UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_RXRDY_TXKL_Pos))
#define UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Pos   _U_(10)                                              /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Msk   (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Pos)    /**< (UDPHS_EPTSTA) Transmitted IN Data Complete (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_TX_COMPLT(value) (UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_TX_COMPLT_Pos))
#define UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Pos  _U_(11)                                              /**< (UDPHS_EPTSTA) TX Packet Ready/Transaction Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Msk  (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Pos)   /**< (UDPHS_EPTSTA) TX Packet Ready/Transaction Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER(value) (UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_TXRDY_TRER_Pos))
#define UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Pos  _U_(12)                                              /**< (UDPHS_EPTSTA) Error Flow (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Msk  (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Pos)   /**< (UDPHS_EPTSTA) Error Flow (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO(value) (UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_ERR_FL_ISO_Pos))
#define UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Pos _U_(13)                                              /**< (UDPHS_EPTSTA) CRC ISO Error/Number of Transaction Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Msk (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Pos)  /**< (UDPHS_EPTSTA) CRC ISO Error/Number of Transaction Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR(value) (UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_ERR_CRC_NTR_Pos))
#define UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Pos   _U_(14)                                              /**< (UDPHS_EPTSTA) Bank Flush Error (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Msk   (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Pos)    /**< (UDPHS_EPTSTA) Bank Flush Error (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH(value) (UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_ERR_FLUSH_Pos))
#define UDPHS_EPTSTA_ISOENDPT_CURBK_Pos       _U_(16)                                              /**< (UDPHS_EPTSTA) Current Bank (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_Msk       (_U_(0x3) << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos)        /**< (UDPHS_EPTSTA) Current Bank (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_CURBK(value)    (UDPHS_EPTSTA_ISOENDPT_CURBK_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos))
#define   UDPHS_EPTSTA_ISOENDPT_CURBK_BANK0_Val _U_(0x0)                                             /**< (UDPHS_EPTSTA) Bank 0 (or single bank)  */
#define   UDPHS_EPTSTA_ISOENDPT_CURBK_BANK1_Val _U_(0x1)                                             /**< (UDPHS_EPTSTA) Bank 1  */
#define   UDPHS_EPTSTA_ISOENDPT_CURBK_BANK2_Val _U_(0x2)                                             /**< (UDPHS_EPTSTA) Bank 2  */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_BANK0     (UDPHS_EPTSTA_ISOENDPT_CURBK_BANK0_Val << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos) /**< (UDPHS_EPTSTA) Bank 0 (or single bank) Position  */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_BANK1     (UDPHS_EPTSTA_ISOENDPT_CURBK_BANK1_Val << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos) /**< (UDPHS_EPTSTA) Bank 1 Position  */
#define UDPHS_EPTSTA_ISOENDPT_CURBK_BANK2     (UDPHS_EPTSTA_ISOENDPT_CURBK_BANK2_Val << UDPHS_EPTSTA_ISOENDPT_CURBK_Pos) /**< (UDPHS_EPTSTA) Bank 2 Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos _U_(18)                                              /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Msk (_U_(0x3) << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) Busy Bank Number (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA(value) (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos))
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_0BUSYBANK_Val _U_(0x0)                                             /**< (UDPHS_EPTSTA) All banks are free  */
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_1BUSYBANK_Val _U_(0x1)                                             /**< (UDPHS_EPTSTA) 1 busy bank  */
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_2BUSYBANKS_Val _U_(0x2)                                             /**< (UDPHS_EPTSTA) 2 busy banks  */
#define   UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_3BUSYBANKS_Val _U_(0x3)                                             /**< (UDPHS_EPTSTA) 3 busy banks  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_0BUSYBANK (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_0BUSYBANK_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) All banks are free Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_1BUSYBANK (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_1BUSYBANK_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) 1 busy bank Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_2BUSYBANKS (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_2BUSYBANKS_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) 2 busy banks Position  */
#define UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_3BUSYBANKS (UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_3BUSYBANKS_Val << UDPHS_EPTSTA_ISOENDPT_BUSY_BANK_STA_Pos) /**< (UDPHS_EPTSTA) 3 busy banks Position  */
#define UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Pos  _U_(20)                                              /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Msk  (_U_(0x7FF) << UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Pos) /**< (UDPHS_EPTSTA) UDPHS Byte Count (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT(value) (UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_BYTE_COUNT_Pos))
#define UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Pos   _U_(31)                                              /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Position */
#define UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Msk   (_U_(0x1) << UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Pos)    /**< (UDPHS_EPTSTA) Short Packet (cleared upon USB reset) Mask */
#define UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT(value) (UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Msk & ((value) << UDPHS_EPTSTA_ISOENDPT_SHRT_PCKT_Pos))
#define UDPHS_EPTSTA_ISOENDPT_Msk             _U_(0xFFFF7FC0)                                       /**< (UDPHS_EPTSTA_ISOENDPT) Register Mask  */


/* -------- UDPHS_CTRL : (UDPHS Offset: 0x00) (R/W 32) UDPHS Control Register -------- */
#define UDPHS_CTRL_DEV_ADDR_Pos               _U_(0)                                               /**< (UDPHS_CTRL) UDPHS Address (cleared upon USB reset) Position */
#define UDPHS_CTRL_DEV_ADDR_Msk               (_U_(0x7F) << UDPHS_CTRL_DEV_ADDR_Pos)               /**< (UDPHS_CTRL) UDPHS Address (cleared upon USB reset) Mask */
#define UDPHS_CTRL_DEV_ADDR(value)            (UDPHS_CTRL_DEV_ADDR_Msk & ((value) << UDPHS_CTRL_DEV_ADDR_Pos))
#define UDPHS_CTRL_FADDR_EN_Pos               _U_(7)                                               /**< (UDPHS_CTRL) Function Address Enable (cleared upon USB reset) Position */
#define UDPHS_CTRL_FADDR_EN_Msk               (_U_(0x1) << UDPHS_CTRL_FADDR_EN_Pos)                /**< (UDPHS_CTRL) Function Address Enable (cleared upon USB reset) Mask */
#define UDPHS_CTRL_FADDR_EN(value)            (UDPHS_CTRL_FADDR_EN_Msk & ((value) << UDPHS_CTRL_FADDR_EN_Pos))
#define UDPHS_CTRL_EN_UDPHS_Pos               _U_(8)                                               /**< (UDPHS_CTRL) UDPHS Enable Position */
#define UDPHS_CTRL_EN_UDPHS_Msk               (_U_(0x1) << UDPHS_CTRL_EN_UDPHS_Pos)                /**< (UDPHS_CTRL) UDPHS Enable Mask */
#define UDPHS_CTRL_EN_UDPHS(value)            (UDPHS_CTRL_EN_UDPHS_Msk & ((value) << UDPHS_CTRL_EN_UDPHS_Pos))
#define UDPHS_CTRL_DETACH_Pos                 _U_(9)                                               /**< (UDPHS_CTRL) Detach Command Position */
#define UDPHS_CTRL_DETACH_Msk                 (_U_(0x1) << UDPHS_CTRL_DETACH_Pos)                  /**< (UDPHS_CTRL) Detach Command Mask */
#define UDPHS_CTRL_DETACH(value)              (UDPHS_CTRL_DETACH_Msk & ((value) << UDPHS_CTRL_DETACH_Pos))
#define UDPHS_CTRL_REWAKEUP_Pos               _U_(10)                                              /**< (UDPHS_CTRL) Send Remote Wakeup (cleared upon USB reset) Position */
#define UDPHS_CTRL_REWAKEUP_Msk               (_U_(0x1) << UDPHS_CTRL_REWAKEUP_Pos)                /**< (UDPHS_CTRL) Send Remote Wakeup (cleared upon USB reset) Mask */
#define UDPHS_CTRL_REWAKEUP(value)            (UDPHS_CTRL_REWAKEUP_Msk & ((value) << UDPHS_CTRL_REWAKEUP_Pos))
#define UDPHS_CTRL_PULLD_DIS_Pos              _U_(11)                                              /**< (UDPHS_CTRL) Pulldown Disable (cleared upon USB reset) Position */
#define UDPHS_CTRL_PULLD_DIS_Msk              (_U_(0x1) << UDPHS_CTRL_PULLD_DIS_Pos)               /**< (UDPHS_CTRL) Pulldown Disable (cleared upon USB reset) Mask */
#define UDPHS_CTRL_PULLD_DIS(value)           (UDPHS_CTRL_PULLD_DIS_Msk & ((value) << UDPHS_CTRL_PULLD_DIS_Pos))
#define UDPHS_CTRL_Msk                        _U_(0x00000FFF)                                      /**< (UDPHS_CTRL) Register Mask  */


/* -------- UDPHS_FNUM : (UDPHS Offset: 0x04) ( R/ 32) UDPHS Frame Number Register -------- */
#define UDPHS_FNUM_MICRO_FRAME_NUM_Pos        _U_(0)                                               /**< (UDPHS_FNUM) Microframe Number (cleared upon USB reset) Position */
#define UDPHS_FNUM_MICRO_FRAME_NUM_Msk        (_U_(0x7) << UDPHS_FNUM_MICRO_FRAME_NUM_Pos)         /**< (UDPHS_FNUM) Microframe Number (cleared upon USB reset) Mask */
#define UDPHS_FNUM_MICRO_FRAME_NUM(value)     (UDPHS_FNUM_MICRO_FRAME_NUM_Msk & ((value) << UDPHS_FNUM_MICRO_FRAME_NUM_Pos))
#define UDPHS_FNUM_FRAME_NUMBER_Pos           _U_(3)                                               /**< (UDPHS_FNUM) Frame Number as defined in the Packet Field Formats (cleared upon USB reset) Position */
#define UDPHS_FNUM_FRAME_NUMBER_Msk           (_U_(0x7FF) << UDPHS_FNUM_FRAME_NUMBER_Pos)          /**< (UDPHS_FNUM) Frame Number as defined in the Packet Field Formats (cleared upon USB reset) Mask */
#define UDPHS_FNUM_FRAME_NUMBER(value)        (UDPHS_FNUM_FRAME_NUMBER_Msk & ((value) << UDPHS_FNUM_FRAME_NUMBER_Pos))
#define UDPHS_FNUM_FNUM_ERR_Pos               _U_(31)                                              /**< (UDPHS_FNUM) Frame Number CRC Error (cleared upon USB reset) Position */
#define UDPHS_FNUM_FNUM_ERR_Msk               (_U_(0x1) << UDPHS_FNUM_FNUM_ERR_Pos)                /**< (UDPHS_FNUM) Frame Number CRC Error (cleared upon USB reset) Mask */
#define UDPHS_FNUM_FNUM_ERR(value)            (UDPHS_FNUM_FNUM_ERR_Msk & ((value) << UDPHS_FNUM_FNUM_ERR_Pos))
#define UDPHS_FNUM_Msk                        _U_(0x80003FFF)                                      /**< (UDPHS_FNUM) Register Mask  */


/* -------- UDPHS_IEN : (UDPHS Offset: 0x10) (R/W 32) UDPHS Interrupt Enable Register -------- */
#define UDPHS_IEN_DET_SUSPD_Pos               _U_(1)                                               /**< (UDPHS_IEN) Suspend Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DET_SUSPD_Msk               (_U_(0x1) << UDPHS_IEN_DET_SUSPD_Pos)                /**< (UDPHS_IEN) Suspend Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DET_SUSPD(value)            (UDPHS_IEN_DET_SUSPD_Msk & ((value) << UDPHS_IEN_DET_SUSPD_Pos))
#define UDPHS_IEN_MICRO_SOF_Pos               _U_(2)                                               /**< (UDPHS_IEN) Micro-SOF Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_MICRO_SOF_Msk               (_U_(0x1) << UDPHS_IEN_MICRO_SOF_Pos)                /**< (UDPHS_IEN) Micro-SOF Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_MICRO_SOF(value)            (UDPHS_IEN_MICRO_SOF_Msk & ((value) << UDPHS_IEN_MICRO_SOF_Pos))
#define UDPHS_IEN_INT_SOF_Pos                 _U_(3)                                               /**< (UDPHS_IEN) SOF Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_INT_SOF_Msk                 (_U_(0x1) << UDPHS_IEN_INT_SOF_Pos)                  /**< (UDPHS_IEN) SOF Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_INT_SOF(value)              (UDPHS_IEN_INT_SOF_Msk & ((value) << UDPHS_IEN_INT_SOF_Pos))
#define UDPHS_IEN_ENDRESET_Pos                _U_(4)                                               /**< (UDPHS_IEN) End Of Reset Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_ENDRESET_Msk                (_U_(0x1) << UDPHS_IEN_ENDRESET_Pos)                 /**< (UDPHS_IEN) End Of Reset Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_ENDRESET(value)             (UDPHS_IEN_ENDRESET_Msk & ((value) << UDPHS_IEN_ENDRESET_Pos))
#define UDPHS_IEN_WAKE_UP_Pos                 _U_(5)                                               /**< (UDPHS_IEN) Wake Up CPU Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_WAKE_UP_Msk                 (_U_(0x1) << UDPHS_IEN_WAKE_UP_Pos)                  /**< (UDPHS_IEN) Wake Up CPU Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_WAKE_UP(value)              (UDPHS_IEN_WAKE_UP_Msk & ((value) << UDPHS_IEN_WAKE_UP_Pos))
#define UDPHS_IEN_ENDOFRSM_Pos                _U_(6)                                               /**< (UDPHS_IEN) End Of Resume Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_ENDOFRSM_Msk                (_U_(0x1) << UDPHS_IEN_ENDOFRSM_Pos)                 /**< (UDPHS_IEN) End Of Resume Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_ENDOFRSM(value)             (UDPHS_IEN_ENDOFRSM_Msk & ((value) << UDPHS_IEN_ENDOFRSM_Pos))
#define UDPHS_IEN_UPSTR_RES_Pos               _U_(7)                                               /**< (UDPHS_IEN) Upstream Resume Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_UPSTR_RES_Msk               (_U_(0x1) << UDPHS_IEN_UPSTR_RES_Pos)                /**< (UDPHS_IEN) Upstream Resume Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_UPSTR_RES(value)            (UDPHS_IEN_UPSTR_RES_Msk & ((value) << UDPHS_IEN_UPSTR_RES_Pos))
#define UDPHS_IEN_EPT_0_Pos                   _U_(8)                                               /**< (UDPHS_IEN) Endpoint 0 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_0_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_0_Pos)                    /**< (UDPHS_IEN) Endpoint 0 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_0(value)                (UDPHS_IEN_EPT_0_Msk & ((value) << UDPHS_IEN_EPT_0_Pos))
#define UDPHS_IEN_EPT_1_Pos                   _U_(9)                                               /**< (UDPHS_IEN) Endpoint 1 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_1_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_1_Pos)                    /**< (UDPHS_IEN) Endpoint 1 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_1(value)                (UDPHS_IEN_EPT_1_Msk & ((value) << UDPHS_IEN_EPT_1_Pos))
#define UDPHS_IEN_EPT_2_Pos                   _U_(10)                                              /**< (UDPHS_IEN) Endpoint 2 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_2_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_2_Pos)                    /**< (UDPHS_IEN) Endpoint 2 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_2(value)                (UDPHS_IEN_EPT_2_Msk & ((value) << UDPHS_IEN_EPT_2_Pos))
#define UDPHS_IEN_EPT_3_Pos                   _U_(11)                                              /**< (UDPHS_IEN) Endpoint 3 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_3_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_3_Pos)                    /**< (UDPHS_IEN) Endpoint 3 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_3(value)                (UDPHS_IEN_EPT_3_Msk & ((value) << UDPHS_IEN_EPT_3_Pos))
#define UDPHS_IEN_EPT_4_Pos                   _U_(12)                                              /**< (UDPHS_IEN) Endpoint 4 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_4_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_4_Pos)                    /**< (UDPHS_IEN) Endpoint 4 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_4(value)                (UDPHS_IEN_EPT_4_Msk & ((value) << UDPHS_IEN_EPT_4_Pos))
#define UDPHS_IEN_EPT_5_Pos                   _U_(13)                                              /**< (UDPHS_IEN) Endpoint 5 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_5_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_5_Pos)                    /**< (UDPHS_IEN) Endpoint 5 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_5(value)                (UDPHS_IEN_EPT_5_Msk & ((value) << UDPHS_IEN_EPT_5_Pos))
#define UDPHS_IEN_EPT_6_Pos                   _U_(14)                                              /**< (UDPHS_IEN) Endpoint 6 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_6_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_6_Pos)                    /**< (UDPHS_IEN) Endpoint 6 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_6(value)                (UDPHS_IEN_EPT_6_Msk & ((value) << UDPHS_IEN_EPT_6_Pos))
#define UDPHS_IEN_EPT_7_Pos                   _U_(15)                                              /**< (UDPHS_IEN) Endpoint 7 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_7_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_7_Pos)                    /**< (UDPHS_IEN) Endpoint 7 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_7(value)                (UDPHS_IEN_EPT_7_Msk & ((value) << UDPHS_IEN_EPT_7_Pos))
#define UDPHS_IEN_EPT_8_Pos                   _U_(16)                                              /**< (UDPHS_IEN) Endpoint 8 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_8_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_8_Pos)                    /**< (UDPHS_IEN) Endpoint 8 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_8(value)                (UDPHS_IEN_EPT_8_Msk & ((value) << UDPHS_IEN_EPT_8_Pos))
#define UDPHS_IEN_EPT_9_Pos                   _U_(17)                                              /**< (UDPHS_IEN) Endpoint 9 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_9_Msk                   (_U_(0x1) << UDPHS_IEN_EPT_9_Pos)                    /**< (UDPHS_IEN) Endpoint 9 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_9(value)                (UDPHS_IEN_EPT_9_Msk & ((value) << UDPHS_IEN_EPT_9_Pos))
#define UDPHS_IEN_EPT_10_Pos                  _U_(18)                                              /**< (UDPHS_IEN) Endpoint 10 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_10_Msk                  (_U_(0x1) << UDPHS_IEN_EPT_10_Pos)                   /**< (UDPHS_IEN) Endpoint 10 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_10(value)               (UDPHS_IEN_EPT_10_Msk & ((value) << UDPHS_IEN_EPT_10_Pos))
#define UDPHS_IEN_EPT_11_Pos                  _U_(19)                                              /**< (UDPHS_IEN) Endpoint 11 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_11_Msk                  (_U_(0x1) << UDPHS_IEN_EPT_11_Pos)                   /**< (UDPHS_IEN) Endpoint 11 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_11(value)               (UDPHS_IEN_EPT_11_Msk & ((value) << UDPHS_IEN_EPT_11_Pos))
#define UDPHS_IEN_EPT_12_Pos                  _U_(20)                                              /**< (UDPHS_IEN) Endpoint 12 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_12_Msk                  (_U_(0x1) << UDPHS_IEN_EPT_12_Pos)                   /**< (UDPHS_IEN) Endpoint 12 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_12(value)               (UDPHS_IEN_EPT_12_Msk & ((value) << UDPHS_IEN_EPT_12_Pos))
#define UDPHS_IEN_EPT_13_Pos                  _U_(21)                                              /**< (UDPHS_IEN) Endpoint 13 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_13_Msk                  (_U_(0x1) << UDPHS_IEN_EPT_13_Pos)                   /**< (UDPHS_IEN) Endpoint 13 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_13(value)               (UDPHS_IEN_EPT_13_Msk & ((value) << UDPHS_IEN_EPT_13_Pos))
#define UDPHS_IEN_EPT_14_Pos                  _U_(22)                                              /**< (UDPHS_IEN) Endpoint 14 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_14_Msk                  (_U_(0x1) << UDPHS_IEN_EPT_14_Pos)                   /**< (UDPHS_IEN) Endpoint 14 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_14(value)               (UDPHS_IEN_EPT_14_Msk & ((value) << UDPHS_IEN_EPT_14_Pos))
#define UDPHS_IEN_EPT_15_Pos                  _U_(23)                                              /**< (UDPHS_IEN) Endpoint 15 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_EPT_15_Msk                  (_U_(0x1) << UDPHS_IEN_EPT_15_Pos)                   /**< (UDPHS_IEN) Endpoint 15 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_EPT_15(value)               (UDPHS_IEN_EPT_15_Msk & ((value) << UDPHS_IEN_EPT_15_Pos))
#define UDPHS_IEN_DMA_1_Pos                   _U_(25)                                              /**< (UDPHS_IEN) DMA Channel 1 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_1_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_1_Pos)                    /**< (UDPHS_IEN) DMA Channel 1 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_1(value)                (UDPHS_IEN_DMA_1_Msk & ((value) << UDPHS_IEN_DMA_1_Pos))
#define UDPHS_IEN_DMA_2_Pos                   _U_(26)                                              /**< (UDPHS_IEN) DMA Channel 2 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_2_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_2_Pos)                    /**< (UDPHS_IEN) DMA Channel 2 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_2(value)                (UDPHS_IEN_DMA_2_Msk & ((value) << UDPHS_IEN_DMA_2_Pos))
#define UDPHS_IEN_DMA_3_Pos                   _U_(27)                                              /**< (UDPHS_IEN) DMA Channel 3 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_3_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_3_Pos)                    /**< (UDPHS_IEN) DMA Channel 3 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_3(value)                (UDPHS_IEN_DMA_3_Msk & ((value) << UDPHS_IEN_DMA_3_Pos))
#define UDPHS_IEN_DMA_4_Pos                   _U_(28)                                              /**< (UDPHS_IEN) DMA Channel 4 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_4_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_4_Pos)                    /**< (UDPHS_IEN) DMA Channel 4 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_4(value)                (UDPHS_IEN_DMA_4_Msk & ((value) << UDPHS_IEN_DMA_4_Pos))
#define UDPHS_IEN_DMA_5_Pos                   _U_(29)                                              /**< (UDPHS_IEN) DMA Channel 5 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_5_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_5_Pos)                    /**< (UDPHS_IEN) DMA Channel 5 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_5(value)                (UDPHS_IEN_DMA_5_Msk & ((value) << UDPHS_IEN_DMA_5_Pos))
#define UDPHS_IEN_DMA_6_Pos                   _U_(30)                                              /**< (UDPHS_IEN) DMA Channel 6 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_6_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_6_Pos)                    /**< (UDPHS_IEN) DMA Channel 6 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_6(value)                (UDPHS_IEN_DMA_6_Msk & ((value) << UDPHS_IEN_DMA_6_Pos))
#define UDPHS_IEN_DMA_7_Pos                   _U_(31)                                              /**< (UDPHS_IEN) DMA Channel 7 Interrupt Enable (cleared upon USB reset) Position */
#define UDPHS_IEN_DMA_7_Msk                   (_U_(0x1) << UDPHS_IEN_DMA_7_Pos)                    /**< (UDPHS_IEN) DMA Channel 7 Interrupt Enable (cleared upon USB reset) Mask */
#define UDPHS_IEN_DMA_7(value)                (UDPHS_IEN_DMA_7_Msk & ((value) << UDPHS_IEN_DMA_7_Pos))
#define UDPHS_IEN_Msk                         _U_(0xFEFFFFFE)                                      /**< (UDPHS_IEN) Register Mask  */

#define UDPHS_IEN_EPT__Pos                    _U_(8)                                               /**< (UDPHS_IEN Position) Endpoint x Interrupt Enable (cleared upon USB reset) */
#define UDPHS_IEN_EPT__Msk                    (_U_(0xFFFF) << UDPHS_IEN_EPT__Pos)                  /**< (UDPHS_IEN Mask) EPT_ */
#define UDPHS_IEN_EPT_(value)                 (UDPHS_IEN_EPT__Msk & ((value) << UDPHS_IEN_EPT__Pos)) 
#define UDPHS_IEN_DMA__Pos                    _U_(25)                                              /**< (UDPHS_IEN Position) DMA Channel 7 Interrupt Enable (cleared upon USB reset) */
#define UDPHS_IEN_DMA__Msk                    (_U_(0x7F) << UDPHS_IEN_DMA__Pos)                    /**< (UDPHS_IEN Mask) DMA_ */
#define UDPHS_IEN_DMA_(value)                 (UDPHS_IEN_DMA__Msk & ((value) << UDPHS_IEN_DMA__Pos)) 

/* -------- UDPHS_INTSTA : (UDPHS Offset: 0x14) ( R/ 32) UDPHS Interrupt Status Register -------- */
#define UDPHS_INTSTA_SPEED_Pos                _U_(0)                                               /**< (UDPHS_INTSTA) Speed Status Position */
#define UDPHS_INTSTA_SPEED_Msk                (_U_(0x1) << UDPHS_INTSTA_SPEED_Pos)                 /**< (UDPHS_INTSTA) Speed Status Mask */
#define UDPHS_INTSTA_SPEED(value)             (UDPHS_INTSTA_SPEED_Msk & ((value) << UDPHS_INTSTA_SPEED_Pos))
#define UDPHS_INTSTA_DET_SUSPD_Pos            _U_(1)                                               /**< (UDPHS_INTSTA) Suspend Interrupt Position */
#define UDPHS_INTSTA_DET_SUSPD_Msk            (_U_(0x1) << UDPHS_INTSTA_DET_SUSPD_Pos)             /**< (UDPHS_INTSTA) Suspend Interrupt Mask */
#define UDPHS_INTSTA_DET_SUSPD(value)         (UDPHS_INTSTA_DET_SUSPD_Msk & ((value) << UDPHS_INTSTA_DET_SUSPD_Pos))
#define UDPHS_INTSTA_MICRO_SOF_Pos            _U_(2)                                               /**< (UDPHS_INTSTA) Micro Start Of Frame Interrupt Position */
#define UDPHS_INTSTA_MICRO_SOF_Msk            (_U_(0x1) << UDPHS_INTSTA_MICRO_SOF_Pos)             /**< (UDPHS_INTSTA) Micro Start Of Frame Interrupt Mask */
#define UDPHS_INTSTA_MICRO_SOF(value)         (UDPHS_INTSTA_MICRO_SOF_Msk & ((value) << UDPHS_INTSTA_MICRO_SOF_Pos))
#define UDPHS_INTSTA_INT_SOF_Pos              _U_(3)                                               /**< (UDPHS_INTSTA) Start Of Frame Interrupt Position */
#define UDPHS_INTSTA_INT_SOF_Msk              (_U_(0x1) << UDPHS_INTSTA_INT_SOF_Pos)               /**< (UDPHS_INTSTA) Start Of Frame Interrupt Mask */
#define UDPHS_INTSTA_INT_SOF(value)           (UDPHS_INTSTA_INT_SOF_Msk & ((value) << UDPHS_INTSTA_INT_SOF_Pos))
#define UDPHS_INTSTA_ENDRESET_Pos             _U_(4)                                               /**< (UDPHS_INTSTA) End Of Reset Interrupt Position */
#define UDPHS_INTSTA_ENDRESET_Msk             (_U_(0x1) << UDPHS_INTSTA_ENDRESET_Pos)              /**< (UDPHS_INTSTA) End Of Reset Interrupt Mask */
#define UDPHS_INTSTA_ENDRESET(value)          (UDPHS_INTSTA_ENDRESET_Msk & ((value) << UDPHS_INTSTA_ENDRESET_Pos))
#define UDPHS_INTSTA_WAKE_UP_Pos              _U_(5)                                               /**< (UDPHS_INTSTA) Wake Up CPU Interrupt Position */
#define UDPHS_INTSTA_WAKE_UP_Msk              (_U_(0x1) << UDPHS_INTSTA_WAKE_UP_Pos)               /**< (UDPHS_INTSTA) Wake Up CPU Interrupt Mask */
#define UDPHS_INTSTA_WAKE_UP(value)           (UDPHS_INTSTA_WAKE_UP_Msk & ((value) << UDPHS_INTSTA_WAKE_UP_Pos))
#define UDPHS_INTSTA_ENDOFRSM_Pos             _U_(6)                                               /**< (UDPHS_INTSTA) End Of Resume Interrupt Position */
#define UDPHS_INTSTA_ENDOFRSM_Msk             (_U_(0x1) << UDPHS_INTSTA_ENDOFRSM_Pos)              /**< (UDPHS_INTSTA) End Of Resume Interrupt Mask */
#define UDPHS_INTSTA_ENDOFRSM(value)          (UDPHS_INTSTA_ENDOFRSM_Msk & ((value) << UDPHS_INTSTA_ENDOFRSM_Pos))
#define UDPHS_INTSTA_UPSTR_RES_Pos            _U_(7)                                               /**< (UDPHS_INTSTA) Upstream Resume Interrupt Position */
#define UDPHS_INTSTA_UPSTR_RES_Msk            (_U_(0x1) << UDPHS_INTSTA_UPSTR_RES_Pos)             /**< (UDPHS_INTSTA) Upstream Resume Interrupt Mask */
#define UDPHS_INTSTA_UPSTR_RES(value)         (UDPHS_INTSTA_UPSTR_RES_Msk & ((value) << UDPHS_INTSTA_UPSTR_RES_Pos))
#define UDPHS_INTSTA_EPT_0_Pos                _U_(8)                                               /**< (UDPHS_INTSTA) Endpoint 0 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_0_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_0_Pos)                 /**< (UDPHS_INTSTA) Endpoint 0 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_0(value)             (UDPHS_INTSTA_EPT_0_Msk & ((value) << UDPHS_INTSTA_EPT_0_Pos))
#define UDPHS_INTSTA_EPT_1_Pos                _U_(9)                                               /**< (UDPHS_INTSTA) Endpoint 1 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_1_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_1_Pos)                 /**< (UDPHS_INTSTA) Endpoint 1 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_1(value)             (UDPHS_INTSTA_EPT_1_Msk & ((value) << UDPHS_INTSTA_EPT_1_Pos))
#define UDPHS_INTSTA_EPT_2_Pos                _U_(10)                                              /**< (UDPHS_INTSTA) Endpoint 2 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_2_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_2_Pos)                 /**< (UDPHS_INTSTA) Endpoint 2 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_2(value)             (UDPHS_INTSTA_EPT_2_Msk & ((value) << UDPHS_INTSTA_EPT_2_Pos))
#define UDPHS_INTSTA_EPT_3_Pos                _U_(11)                                              /**< (UDPHS_INTSTA) Endpoint 3 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_3_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_3_Pos)                 /**< (UDPHS_INTSTA) Endpoint 3 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_3(value)             (UDPHS_INTSTA_EPT_3_Msk & ((value) << UDPHS_INTSTA_EPT_3_Pos))
#define UDPHS_INTSTA_EPT_4_Pos                _U_(12)                                              /**< (UDPHS_INTSTA) Endpoint 4 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_4_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_4_Pos)                 /**< (UDPHS_INTSTA) Endpoint 4 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_4(value)             (UDPHS_INTSTA_EPT_4_Msk & ((value) << UDPHS_INTSTA_EPT_4_Pos))
#define UDPHS_INTSTA_EPT_5_Pos                _U_(13)                                              /**< (UDPHS_INTSTA) Endpoint 5 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_5_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_5_Pos)                 /**< (UDPHS_INTSTA) Endpoint 5 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_5(value)             (UDPHS_INTSTA_EPT_5_Msk & ((value) << UDPHS_INTSTA_EPT_5_Pos))
#define UDPHS_INTSTA_EPT_6_Pos                _U_(14)                                              /**< (UDPHS_INTSTA) Endpoint 6 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_6_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_6_Pos)                 /**< (UDPHS_INTSTA) Endpoint 6 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_6(value)             (UDPHS_INTSTA_EPT_6_Msk & ((value) << UDPHS_INTSTA_EPT_6_Pos))
#define UDPHS_INTSTA_EPT_7_Pos                _U_(15)                                              /**< (UDPHS_INTSTA) Endpoint 7 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_7_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_7_Pos)                 /**< (UDPHS_INTSTA) Endpoint 7 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_7(value)             (UDPHS_INTSTA_EPT_7_Msk & ((value) << UDPHS_INTSTA_EPT_7_Pos))
#define UDPHS_INTSTA_EPT_8_Pos                _U_(16)                                              /**< (UDPHS_INTSTA) Endpoint 8 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_8_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_8_Pos)                 /**< (UDPHS_INTSTA) Endpoint 8 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_8(value)             (UDPHS_INTSTA_EPT_8_Msk & ((value) << UDPHS_INTSTA_EPT_8_Pos))
#define UDPHS_INTSTA_EPT_9_Pos                _U_(17)                                              /**< (UDPHS_INTSTA) Endpoint 9 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_9_Msk                (_U_(0x1) << UDPHS_INTSTA_EPT_9_Pos)                 /**< (UDPHS_INTSTA) Endpoint 9 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_9(value)             (UDPHS_INTSTA_EPT_9_Msk & ((value) << UDPHS_INTSTA_EPT_9_Pos))
#define UDPHS_INTSTA_EPT_10_Pos               _U_(18)                                              /**< (UDPHS_INTSTA) Endpoint 10 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_10_Msk               (_U_(0x1) << UDPHS_INTSTA_EPT_10_Pos)                /**< (UDPHS_INTSTA) Endpoint 10 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_10(value)            (UDPHS_INTSTA_EPT_10_Msk & ((value) << UDPHS_INTSTA_EPT_10_Pos))
#define UDPHS_INTSTA_EPT_11_Pos               _U_(19)                                              /**< (UDPHS_INTSTA) Endpoint 11 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_11_Msk               (_U_(0x1) << UDPHS_INTSTA_EPT_11_Pos)                /**< (UDPHS_INTSTA) Endpoint 11 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_11(value)            (UDPHS_INTSTA_EPT_11_Msk & ((value) << UDPHS_INTSTA_EPT_11_Pos))
#define UDPHS_INTSTA_EPT_12_Pos               _U_(20)                                              /**< (UDPHS_INTSTA) Endpoint 12 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_12_Msk               (_U_(0x1) << UDPHS_INTSTA_EPT_12_Pos)                /**< (UDPHS_INTSTA) Endpoint 12 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_12(value)            (UDPHS_INTSTA_EPT_12_Msk & ((value) << UDPHS_INTSTA_EPT_12_Pos))
#define UDPHS_INTSTA_EPT_13_Pos               _U_(21)                                              /**< (UDPHS_INTSTA) Endpoint 13 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_13_Msk               (_U_(0x1) << UDPHS_INTSTA_EPT_13_Pos)                /**< (UDPHS_INTSTA) Endpoint 13 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_13(value)            (UDPHS_INTSTA_EPT_13_Msk & ((value) << UDPHS_INTSTA_EPT_13_Pos))
#define UDPHS_INTSTA_EPT_14_Pos               _U_(22)                                              /**< (UDPHS_INTSTA) Endpoint 14 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_14_Msk               (_U_(0x1) << UDPHS_INTSTA_EPT_14_Pos)                /**< (UDPHS_INTSTA) Endpoint 14 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_14(value)            (UDPHS_INTSTA_EPT_14_Msk & ((value) << UDPHS_INTSTA_EPT_14_Pos))
#define UDPHS_INTSTA_EPT_15_Pos               _U_(23)                                              /**< (UDPHS_INTSTA) Endpoint 15 Interrupt (cleared upon USB reset) Position */
#define UDPHS_INTSTA_EPT_15_Msk               (_U_(0x1) << UDPHS_INTSTA_EPT_15_Pos)                /**< (UDPHS_INTSTA) Endpoint 15 Interrupt (cleared upon USB reset) Mask */
#define UDPHS_INTSTA_EPT_15(value)            (UDPHS_INTSTA_EPT_15_Msk & ((value) << UDPHS_INTSTA_EPT_15_Pos))
#define UDPHS_INTSTA_DMA_1_Pos                _U_(25)                                              /**< (UDPHS_INTSTA) DMA Channel 1 Interrupt Position */
#define UDPHS_INTSTA_DMA_1_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_1_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 1 Interrupt Mask */
#define UDPHS_INTSTA_DMA_1(value)             (UDPHS_INTSTA_DMA_1_Msk & ((value) << UDPHS_INTSTA_DMA_1_Pos))
#define UDPHS_INTSTA_DMA_2_Pos                _U_(26)                                              /**< (UDPHS_INTSTA) DMA Channel 2 Interrupt Position */
#define UDPHS_INTSTA_DMA_2_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_2_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 2 Interrupt Mask */
#define UDPHS_INTSTA_DMA_2(value)             (UDPHS_INTSTA_DMA_2_Msk & ((value) << UDPHS_INTSTA_DMA_2_Pos))
#define UDPHS_INTSTA_DMA_3_Pos                _U_(27)                                              /**< (UDPHS_INTSTA) DMA Channel 3 Interrupt Position */
#define UDPHS_INTSTA_DMA_3_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_3_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 3 Interrupt Mask */
#define UDPHS_INTSTA_DMA_3(value)             (UDPHS_INTSTA_DMA_3_Msk & ((value) << UDPHS_INTSTA_DMA_3_Pos))
#define UDPHS_INTSTA_DMA_4_Pos                _U_(28)                                              /**< (UDPHS_INTSTA) DMA Channel 4 Interrupt Position */
#define UDPHS_INTSTA_DMA_4_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_4_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 4 Interrupt Mask */
#define UDPHS_INTSTA_DMA_4(value)             (UDPHS_INTSTA_DMA_4_Msk & ((value) << UDPHS_INTSTA_DMA_4_Pos))
#define UDPHS_INTSTA_DMA_5_Pos                _U_(29)                                              /**< (UDPHS_INTSTA) DMA Channel 5 Interrupt Position */
#define UDPHS_INTSTA_DMA_5_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_5_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 5 Interrupt Mask */
#define UDPHS_INTSTA_DMA_5(value)             (UDPHS_INTSTA_DMA_5_Msk & ((value) << UDPHS_INTSTA_DMA_5_Pos))
#define UDPHS_INTSTA_DMA_6_Pos                _U_(30)                                              /**< (UDPHS_INTSTA) DMA Channel 6 Interrupt Position */
#define UDPHS_INTSTA_DMA_6_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_6_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 6 Interrupt Mask */
#define UDPHS_INTSTA_DMA_6(value)             (UDPHS_INTSTA_DMA_6_Msk & ((value) << UDPHS_INTSTA_DMA_6_Pos))
#define UDPHS_INTSTA_DMA_7_Pos                _U_(31)                                              /**< (UDPHS_INTSTA) DMA Channel 7 Interrupt Position */
#define UDPHS_INTSTA_DMA_7_Msk                (_U_(0x1) << UDPHS_INTSTA_DMA_7_Pos)                 /**< (UDPHS_INTSTA) DMA Channel 7 Interrupt Mask */
#define UDPHS_INTSTA_DMA_7(value)             (UDPHS_INTSTA_DMA_7_Msk & ((value) << UDPHS_INTSTA_DMA_7_Pos))
#define UDPHS_INTSTA_Msk                      _U_(0xFEFFFFFF)                                      /**< (UDPHS_INTSTA) Register Mask  */

#define UDPHS_INTSTA_EPT__Pos                 _U_(8)                                               /**< (UDPHS_INTSTA Position) Endpoint x Interrupt (cleared upon USB reset) */
#define UDPHS_INTSTA_EPT__Msk                 (_U_(0xFFFF) << UDPHS_INTSTA_EPT__Pos)               /**< (UDPHS_INTSTA Mask) EPT_ */
#define UDPHS_INTSTA_EPT_(value)              (UDPHS_INTSTA_EPT__Msk & ((value) << UDPHS_INTSTA_EPT__Pos)) 
#define UDPHS_INTSTA_DMA__Pos                 _U_(25)                                              /**< (UDPHS_INTSTA Position) DMA Channel 7 Interrupt */
#define UDPHS_INTSTA_DMA__Msk                 (_U_(0x7F) << UDPHS_INTSTA_DMA__Pos)                 /**< (UDPHS_INTSTA Mask) DMA_ */
#define UDPHS_INTSTA_DMA_(value)              (UDPHS_INTSTA_DMA__Msk & ((value) << UDPHS_INTSTA_DMA__Pos)) 

/* -------- UDPHS_CLRINT : (UDPHS Offset: 0x18) ( /W 32) UDPHS Clear Interrupt Register -------- */
#define UDPHS_CLRINT_DET_SUSPD_Pos            _U_(1)                                               /**< (UDPHS_CLRINT) Suspend Interrupt Clear Position */
#define UDPHS_CLRINT_DET_SUSPD_Msk            (_U_(0x1) << UDPHS_CLRINT_DET_SUSPD_Pos)             /**< (UDPHS_CLRINT) Suspend Interrupt Clear Mask */
#define UDPHS_CLRINT_DET_SUSPD(value)         (UDPHS_CLRINT_DET_SUSPD_Msk & ((value) << UDPHS_CLRINT_DET_SUSPD_Pos))
#define UDPHS_CLRINT_MICRO_SOF_Pos            _U_(2)                                               /**< (UDPHS_CLRINT) Micro Start Of Frame Interrupt Clear Position */
#define UDPHS_CLRINT_MICRO_SOF_Msk            (_U_(0x1) << UDPHS_CLRINT_MICRO_SOF_Pos)             /**< (UDPHS_CLRINT) Micro Start Of Frame Interrupt Clear Mask */
#define UDPHS_CLRINT_MICRO_SOF(value)         (UDPHS_CLRINT_MICRO_SOF_Msk & ((value) << UDPHS_CLRINT_MICRO_SOF_Pos))
#define UDPHS_CLRINT_INT_SOF_Pos              _U_(3)                                               /**< (UDPHS_CLRINT) Start Of Frame Interrupt Clear Position */
#define UDPHS_CLRINT_INT_SOF_Msk              (_U_(0x1) << UDPHS_CLRINT_INT_SOF_Pos)               /**< (UDPHS_CLRINT) Start Of Frame Interrupt Clear Mask */
#define UDPHS_CLRINT_INT_SOF(value)           (UDPHS_CLRINT_INT_SOF_Msk & ((value) << UDPHS_CLRINT_INT_SOF_Pos))
#define UDPHS_CLRINT_ENDRESET_Pos             _U_(4)                                               /**< (UDPHS_CLRINT) End Of Reset Interrupt Clear Position */
#define UDPHS_CLRINT_ENDRESET_Msk             (_U_(0x1) << UDPHS_CLRINT_ENDRESET_Pos)              /**< (UDPHS_CLRINT) End Of Reset Interrupt Clear Mask */
#define UDPHS_CLRINT_ENDRESET(value)          (UDPHS_CLRINT_ENDRESET_Msk & ((value) << UDPHS_CLRINT_ENDRESET_Pos))
#define UDPHS_CLRINT_WAKE_UP_Pos              _U_(5)                                               /**< (UDPHS_CLRINT) Wake Up CPU Interrupt Clear Position */
#define UDPHS_CLRINT_WAKE_UP_Msk              (_U_(0x1) << UDPHS_CLRINT_WAKE_UP_Pos)               /**< (UDPHS_CLRINT) Wake Up CPU Interrupt Clear Mask */
#define UDPHS_CLRINT_WAKE_UP(value)           (UDPHS_CLRINT_WAKE_UP_Msk & ((value) << UDPHS_CLRINT_WAKE_UP_Pos))
#define UDPHS_CLRINT_ENDOFRSM_Pos             _U_(6)                                               /**< (UDPHS_CLRINT) End Of Resume Interrupt Clear Position */
#define UDPHS_CLRINT_ENDOFRSM_Msk             (_U_(0x1) << UDPHS_CLRINT_ENDOFRSM_Pos)              /**< (UDPHS_CLRINT) End Of Resume Interrupt Clear Mask */
#define UDPHS_CLRINT_ENDOFRSM(value)          (UDPHS_CLRINT_ENDOFRSM_Msk & ((value) << UDPHS_CLRINT_ENDOFRSM_Pos))
#define UDPHS_CLRINT_UPSTR_RES_Pos            _U_(7)                                               /**< (UDPHS_CLRINT) Upstream Resume Interrupt Clear Position */
#define UDPHS_CLRINT_UPSTR_RES_Msk            (_U_(0x1) << UDPHS_CLRINT_UPSTR_RES_Pos)             /**< (UDPHS_CLRINT) Upstream Resume Interrupt Clear Mask */
#define UDPHS_CLRINT_UPSTR_RES(value)         (UDPHS_CLRINT_UPSTR_RES_Msk & ((value) << UDPHS_CLRINT_UPSTR_RES_Pos))
#define UDPHS_CLRINT_Msk                      _U_(0x000000FE)                                      /**< (UDPHS_CLRINT) Register Mask  */


/* -------- UDPHS_EPTRST : (UDPHS Offset: 0x1C) ( /W 32) UDPHS Endpoints Reset Register -------- */
#define UDPHS_EPTRST_EPT_0_Pos                _U_(0)                                               /**< (UDPHS_EPTRST) Endpoint 0 Reset Position */
#define UDPHS_EPTRST_EPT_0_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_0_Pos)                 /**< (UDPHS_EPTRST) Endpoint 0 Reset Mask */
#define UDPHS_EPTRST_EPT_0(value)             (UDPHS_EPTRST_EPT_0_Msk & ((value) << UDPHS_EPTRST_EPT_0_Pos))
#define UDPHS_EPTRST_EPT_1_Pos                _U_(1)                                               /**< (UDPHS_EPTRST) Endpoint 1 Reset Position */
#define UDPHS_EPTRST_EPT_1_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_1_Pos)                 /**< (UDPHS_EPTRST) Endpoint 1 Reset Mask */
#define UDPHS_EPTRST_EPT_1(value)             (UDPHS_EPTRST_EPT_1_Msk & ((value) << UDPHS_EPTRST_EPT_1_Pos))
#define UDPHS_EPTRST_EPT_2_Pos                _U_(2)                                               /**< (UDPHS_EPTRST) Endpoint 2 Reset Position */
#define UDPHS_EPTRST_EPT_2_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_2_Pos)                 /**< (UDPHS_EPTRST) Endpoint 2 Reset Mask */
#define UDPHS_EPTRST_EPT_2(value)             (UDPHS_EPTRST_EPT_2_Msk & ((value) << UDPHS_EPTRST_EPT_2_Pos))
#define UDPHS_EPTRST_EPT_3_Pos                _U_(3)                                               /**< (UDPHS_EPTRST) Endpoint 3 Reset Position */
#define UDPHS_EPTRST_EPT_3_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_3_Pos)                 /**< (UDPHS_EPTRST) Endpoint 3 Reset Mask */
#define UDPHS_EPTRST_EPT_3(value)             (UDPHS_EPTRST_EPT_3_Msk & ((value) << UDPHS_EPTRST_EPT_3_Pos))
#define UDPHS_EPTRST_EPT_4_Pos                _U_(4)                                               /**< (UDPHS_EPTRST) Endpoint 4 Reset Position */
#define UDPHS_EPTRST_EPT_4_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_4_Pos)                 /**< (UDPHS_EPTRST) Endpoint 4 Reset Mask */
#define UDPHS_EPTRST_EPT_4(value)             (UDPHS_EPTRST_EPT_4_Msk & ((value) << UDPHS_EPTRST_EPT_4_Pos))
#define UDPHS_EPTRST_EPT_5_Pos                _U_(5)                                               /**< (UDPHS_EPTRST) Endpoint 5 Reset Position */
#define UDPHS_EPTRST_EPT_5_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_5_Pos)                 /**< (UDPHS_EPTRST) Endpoint 5 Reset Mask */
#define UDPHS_EPTRST_EPT_5(value)             (UDPHS_EPTRST_EPT_5_Msk & ((value) << UDPHS_EPTRST_EPT_5_Pos))
#define UDPHS_EPTRST_EPT_6_Pos                _U_(6)                                               /**< (UDPHS_EPTRST) Endpoint 6 Reset Position */
#define UDPHS_EPTRST_EPT_6_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_6_Pos)                 /**< (UDPHS_EPTRST) Endpoint 6 Reset Mask */
#define UDPHS_EPTRST_EPT_6(value)             (UDPHS_EPTRST_EPT_6_Msk & ((value) << UDPHS_EPTRST_EPT_6_Pos))
#define UDPHS_EPTRST_EPT_7_Pos                _U_(7)                                               /**< (UDPHS_EPTRST) Endpoint 7 Reset Position */
#define UDPHS_EPTRST_EPT_7_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_7_Pos)                 /**< (UDPHS_EPTRST) Endpoint 7 Reset Mask */
#define UDPHS_EPTRST_EPT_7(value)             (UDPHS_EPTRST_EPT_7_Msk & ((value) << UDPHS_EPTRST_EPT_7_Pos))
#define UDPHS_EPTRST_EPT_8_Pos                _U_(8)                                               /**< (UDPHS_EPTRST) Endpoint 8 Reset Position */
#define UDPHS_EPTRST_EPT_8_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_8_Pos)                 /**< (UDPHS_EPTRST) Endpoint 8 Reset Mask */
#define UDPHS_EPTRST_EPT_8(value)             (UDPHS_EPTRST_EPT_8_Msk & ((value) << UDPHS_EPTRST_EPT_8_Pos))
#define UDPHS_EPTRST_EPT_9_Pos                _U_(9)                                               /**< (UDPHS_EPTRST) Endpoint 9 Reset Position */
#define UDPHS_EPTRST_EPT_9_Msk                (_U_(0x1) << UDPHS_EPTRST_EPT_9_Pos)                 /**< (UDPHS_EPTRST) Endpoint 9 Reset Mask */
#define UDPHS_EPTRST_EPT_9(value)             (UDPHS_EPTRST_EPT_9_Msk & ((value) << UDPHS_EPTRST_EPT_9_Pos))
#define UDPHS_EPTRST_EPT_10_Pos               _U_(10)                                              /**< (UDPHS_EPTRST) Endpoint 10 Reset Position */
#define UDPHS_EPTRST_EPT_10_Msk               (_U_(0x1) << UDPHS_EPTRST_EPT_10_Pos)                /**< (UDPHS_EPTRST) Endpoint 10 Reset Mask */
#define UDPHS_EPTRST_EPT_10(value)            (UDPHS_EPTRST_EPT_10_Msk & ((value) << UDPHS_EPTRST_EPT_10_Pos))
#define UDPHS_EPTRST_EPT_11_Pos               _U_(11)                                              /**< (UDPHS_EPTRST) Endpoint 11 Reset Position */
#define UDPHS_EPTRST_EPT_11_Msk               (_U_(0x1) << UDPHS_EPTRST_EPT_11_Pos)                /**< (UDPHS_EPTRST) Endpoint 11 Reset Mask */
#define UDPHS_EPTRST_EPT_11(value)            (UDPHS_EPTRST_EPT_11_Msk & ((value) << UDPHS_EPTRST_EPT_11_Pos))
#define UDPHS_EPTRST_EPT_12_Pos               _U_(12)                                              /**< (UDPHS_EPTRST) Endpoint 12 Reset Position */
#define UDPHS_EPTRST_EPT_12_Msk               (_U_(0x1) << UDPHS_EPTRST_EPT_12_Pos)                /**< (UDPHS_EPTRST) Endpoint 12 Reset Mask */
#define UDPHS_EPTRST_EPT_12(value)            (UDPHS_EPTRST_EPT_12_Msk & ((value) << UDPHS_EPTRST_EPT_12_Pos))
#define UDPHS_EPTRST_EPT_13_Pos               _U_(13)                                              /**< (UDPHS_EPTRST) Endpoint 13 Reset Position */
#define UDPHS_EPTRST_EPT_13_Msk               (_U_(0x1) << UDPHS_EPTRST_EPT_13_Pos)                /**< (UDPHS_EPTRST) Endpoint 13 Reset Mask */
#define UDPHS_EPTRST_EPT_13(value)            (UDPHS_EPTRST_EPT_13_Msk & ((value) << UDPHS_EPTRST_EPT_13_Pos))
#define UDPHS_EPTRST_EPT_14_Pos               _U_(14)                                              /**< (UDPHS_EPTRST) Endpoint 14 Reset Position */
#define UDPHS_EPTRST_EPT_14_Msk               (_U_(0x1) << UDPHS_EPTRST_EPT_14_Pos)                /**< (UDPHS_EPTRST) Endpoint 14 Reset Mask */
#define UDPHS_EPTRST_EPT_14(value)            (UDPHS_EPTRST_EPT_14_Msk & ((value) << UDPHS_EPTRST_EPT_14_Pos))
#define UDPHS_EPTRST_EPT_15_Pos               _U_(15)                                              /**< (UDPHS_EPTRST) Endpoint 15 Reset Position */
#define UDPHS_EPTRST_EPT_15_Msk               (_U_(0x1) << UDPHS_EPTRST_EPT_15_Pos)                /**< (UDPHS_EPTRST) Endpoint 15 Reset Mask */
#define UDPHS_EPTRST_EPT_15(value)            (UDPHS_EPTRST_EPT_15_Msk & ((value) << UDPHS_EPTRST_EPT_15_Pos))
#define UDPHS_EPTRST_Msk                      _U_(0x0000FFFF)                                      /**< (UDPHS_EPTRST) Register Mask  */

#define UDPHS_EPTRST_EPT__Pos                 _U_(0)                                               /**< (UDPHS_EPTRST Position) Endpoint x5 Reset */
#define UDPHS_EPTRST_EPT__Msk                 (_U_(0xFFFF) << UDPHS_EPTRST_EPT__Pos)               /**< (UDPHS_EPTRST Mask) EPT_ */
#define UDPHS_EPTRST_EPT_(value)              (UDPHS_EPTRST_EPT__Msk & ((value) << UDPHS_EPTRST_EPT__Pos)) 

/* -------- UDPHS_TST : (UDPHS Offset: 0xE0) (R/W 32) UDPHS Test Register -------- */
#define UDPHS_TST_SPEED_CFG_Pos               _U_(0)                                               /**< (UDPHS_TST) Speed Configuration Position */
#define UDPHS_TST_SPEED_CFG_Msk               (_U_(0x3) << UDPHS_TST_SPEED_CFG_Pos)                /**< (UDPHS_TST) Speed Configuration Mask */
#define UDPHS_TST_SPEED_CFG(value)            (UDPHS_TST_SPEED_CFG_Msk & ((value) << UDPHS_TST_SPEED_CFG_Pos))
#define   UDPHS_TST_SPEED_CFG_NORMAL_Val      _U_(0x0)                                             /**< (UDPHS_TST) Normal mode: The macro is in Full Speed mode, ready to make a High Speed identification, if the host supports it and then to automatically switch to High Speed mode.  */
#define   UDPHS_TST_SPEED_CFG_HIGH_SPEED_Val  _U_(0x2)                                             /**< (UDPHS_TST) Force High Speed: Set this value to force the hardware to work in High Speed mode. Only for debug or test purpose.  */
#define   UDPHS_TST_SPEED_CFG_FULL_SPEED_Val  _U_(0x3)                                             /**< (UDPHS_TST) Force Full Speed: Set this value to force the hardware to work only in Full Speed mode. In this configuration, the macro will not respond to a High Speed reset handshake.  */
#define UDPHS_TST_SPEED_CFG_NORMAL            (UDPHS_TST_SPEED_CFG_NORMAL_Val << UDPHS_TST_SPEED_CFG_Pos) /**< (UDPHS_TST) Normal mode: The macro is in Full Speed mode, ready to make a High Speed identification, if the host supports it and then to automatically switch to High Speed mode. Position  */
#define UDPHS_TST_SPEED_CFG_HIGH_SPEED        (UDPHS_TST_SPEED_CFG_HIGH_SPEED_Val << UDPHS_TST_SPEED_CFG_Pos) /**< (UDPHS_TST) Force High Speed: Set this value to force the hardware to work in High Speed mode. Only for debug or test purpose. Position  */
#define UDPHS_TST_SPEED_CFG_FULL_SPEED        (UDPHS_TST_SPEED_CFG_FULL_SPEED_Val << UDPHS_TST_SPEED_CFG_Pos) /**< (UDPHS_TST) Force Full Speed: Set this value to force the hardware to work only in Full Speed mode. In this configuration, the macro will not respond to a High Speed reset handshake. Position  */
#define UDPHS_TST_TST_J_Pos                   _U_(2)                                               /**< (UDPHS_TST) Test J Mode Position */
#define UDPHS_TST_TST_J_Msk                   (_U_(0x1) << UDPHS_TST_TST_J_Pos)                    /**< (UDPHS_TST) Test J Mode Mask */
#define UDPHS_TST_TST_J(value)                (UDPHS_TST_TST_J_Msk & ((value) << UDPHS_TST_TST_J_Pos))
#define UDPHS_TST_TST_K_Pos                   _U_(3)                                               /**< (UDPHS_TST) Test K Mode Position */
#define UDPHS_TST_TST_K_Msk                   (_U_(0x1) << UDPHS_TST_TST_K_Pos)                    /**< (UDPHS_TST) Test K Mode Mask */
#define UDPHS_TST_TST_K(value)                (UDPHS_TST_TST_K_Msk & ((value) << UDPHS_TST_TST_K_Pos))
#define UDPHS_TST_TST_PKT_Pos                 _U_(4)                                               /**< (UDPHS_TST) Test Packet Mode Position */
#define UDPHS_TST_TST_PKT_Msk                 (_U_(0x1) << UDPHS_TST_TST_PKT_Pos)                  /**< (UDPHS_TST) Test Packet Mode Mask */
#define UDPHS_TST_TST_PKT(value)              (UDPHS_TST_TST_PKT_Msk & ((value) << UDPHS_TST_TST_PKT_Pos))
#define UDPHS_TST_OPMODE2_Pos                 _U_(5)                                               /**< (UDPHS_TST) OpMode2 Position */
#define UDPHS_TST_OPMODE2_Msk                 (_U_(0x1) << UDPHS_TST_OPMODE2_Pos)                  /**< (UDPHS_TST) OpMode2 Mask */
#define UDPHS_TST_OPMODE2(value)              (UDPHS_TST_OPMODE2_Msk & ((value) << UDPHS_TST_OPMODE2_Pos))
#define UDPHS_TST_Msk                         _U_(0x0000003F)                                      /**< (UDPHS_TST) Register Mask  */

#define UDPHS_TST_OPMODE_Pos                  _U_(5)                                               /**< (UDPHS_TST Position) OpMode2 */
#define UDPHS_TST_OPMODE_Msk                  (_U_(0x1) << UDPHS_TST_OPMODE_Pos)                   /**< (UDPHS_TST Mask) OPMODE */
#define UDPHS_TST_OPMODE(value)               (UDPHS_TST_OPMODE_Msk & ((value) << UDPHS_TST_OPMODE_Pos)) 

/* -------- UDPHS_ADDRSIZE : (UDPHS Offset: 0xEC) ( R/ 32) UDPHS IP Address Size Register -------- */
#define UDPHS_ADDRSIZE_ADDRSIZE_Pos           _U_(0)                                               /**< (UDPHS_ADDRSIZE) Peripheral Bus Address Size Position */
#define UDPHS_ADDRSIZE_ADDRSIZE_Msk           (_U_(0xFFFFFFFF) << UDPHS_ADDRSIZE_ADDRSIZE_Pos)     /**< (UDPHS_ADDRSIZE) Peripheral Bus Address Size Mask */
#define UDPHS_ADDRSIZE_ADDRSIZE(value)        (UDPHS_ADDRSIZE_ADDRSIZE_Msk & ((value) << UDPHS_ADDRSIZE_ADDRSIZE_Pos))
#define UDPHS_ADDRSIZE_Msk                    _U_(0xFFFFFFFF)                                      /**< (UDPHS_ADDRSIZE) Register Mask  */


/* -------- UDPHS_IPNAME : (UDPHS Offset: 0xF0) ( R/ 32) UDPHS IP Name1 Register -------- */
#define UDPHS_IPNAME_IPNAME_Pos               _U_(0)                                               /**< (UDPHS_IPNAME) IP Name in ASCII Format Position */
#define UDPHS_IPNAME_IPNAME_Msk               (_U_(0xFFFFFFFF) << UDPHS_IPNAME_IPNAME_Pos)         /**< (UDPHS_IPNAME) IP Name in ASCII Format Mask */
#define UDPHS_IPNAME_IPNAME(value)            (UDPHS_IPNAME_IPNAME_Msk & ((value) << UDPHS_IPNAME_IPNAME_Pos))
#define UDPHS_IPNAME_Msk                      _U_(0xFFFFFFFF)                                      /**< (UDPHS_IPNAME) Register Mask  */


/* -------- UDPHS_FEATURES : (UDPHS Offset: 0xF8) ( R/ 32) UDPHS Features Register -------- */
#define UDPHS_FEATURES_Msk                    _U_(0x00000000)                                      /**< (UDPHS_FEATURES) Register Mask  */


/** \brief UDPHS register offsets definitions */
#define UDPHS_DMANXTDSC_REG_OFST       (0x00)              /**< (UDPHS_DMANXTDSC) UDPHS DMA Next Descriptor Address Register (channel = 0) Offset */
#define UDPHS_DMAADDRESS_REG_OFST      (0x04)              /**< (UDPHS_DMAADDRESS) UDPHS DMA Channel Address Register (channel = 0) Offset */
#define UDPHS_DMACONTROL_REG_OFST      (0x08)              /**< (UDPHS_DMACONTROL) UDPHS DMA Channel Control Register (channel = 0) Offset */
#define UDPHS_DMASTATUS_REG_OFST       (0x0C)              /**< (UDPHS_DMASTATUS) UDPHS DMA Channel Status Register (channel = 0) Offset */
#define UDPHS_EPTCFG_REG_OFST          (0x00)              /**< (UDPHS_EPTCFG) UDPHS Endpoint Configuration Register (endpoint = 0) Offset */
#define UDPHS_EPTCTLENB_REG_OFST       (0x04)              /**< (UDPHS_EPTCTLENB) UDPHS Endpoint Control Enable Register (endpoint = 0) Offset */
#define UDPHS_EPTCTLDIS_REG_OFST       (0x08)              /**< (UDPHS_EPTCTLDIS) UDPHS Endpoint Control Disable Register (endpoint = 0) Offset */
#define UDPHS_EPTCTL_REG_OFST          (0x0C)              /**< (UDPHS_EPTCTL) UDPHS Endpoint Control Register (endpoint = 0) Offset */
#define UDPHS_EPTSETSTA_REG_OFST       (0x14)              /**< (UDPHS_EPTSETSTA) UDPHS Endpoint Set Status Register (endpoint = 0) Offset */
#define UDPHS_EPTCLRSTA_REG_OFST       (0x18)              /**< (UDPHS_EPTCLRSTA) UDPHS Endpoint Clear Status Register (endpoint = 0) Offset */
#define UDPHS_EPTSTA_REG_OFST          (0x1C)              /**< (UDPHS_EPTSTA) UDPHS Endpoint Status Register (endpoint = 0) Offset */
#define UDPHS_CTRL_REG_OFST            (0x00)              /**< (UDPHS_CTRL) UDPHS Control Register Offset */
#define UDPHS_FNUM_REG_OFST            (0x04)              /**< (UDPHS_FNUM) UDPHS Frame Number Register Offset */
#define UDPHS_IEN_REG_OFST             (0x10)              /**< (UDPHS_IEN) UDPHS Interrupt Enable Register Offset */
#define UDPHS_INTSTA_REG_OFST          (0x14)              /**< (UDPHS_INTSTA) UDPHS Interrupt Status Register Offset */
#define UDPHS_CLRINT_REG_OFST          (0x18)              /**< (UDPHS_CLRINT) UDPHS Clear Interrupt Register Offset */
#define UDPHS_EPTRST_REG_OFST          (0x1C)              /**< (UDPHS_EPTRST) UDPHS Endpoints Reset Register Offset */
#define UDPHS_TST_REG_OFST             (0xE0)              /**< (UDPHS_TST) UDPHS Test Register Offset */
#define UDPHS_ADDRSIZE_REG_OFST        (0xEC)              /**< (UDPHS_ADDRSIZE) UDPHS IP Address Size Register Offset */
#define UDPHS_IPNAME_REG_OFST          (0xF0)              /**< (UDPHS_IPNAME) UDPHS IP Name1 Register Offset */
#define UDPHS_IPNAME0_REG_OFST         (0xF0)              /**< (UDPHS_IPNAME0) UDPHS IP Name1 Register Offset */
#define UDPHS_IPNAME1_REG_OFST         (0xF4)              /**< (UDPHS_IPNAME1) UDPHS IP Name1 Register Offset */
#define UDPHS_FEATURES_REG_OFST        (0xF8)              /**< (UDPHS_FEATURES) UDPHS Features Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UDPHS_DMA register API structure */
typedef struct
{
  __IO  uint32_t                       UDPHS_DMANXTDSC;    /**< Offset: 0x00 (R/W  32) UDPHS DMA Next Descriptor Address Register (channel = 0) */
  __IO  uint32_t                       UDPHS_DMAADDRESS;   /**< Offset: 0x04 (R/W  32) UDPHS DMA Channel Address Register (channel = 0) */
  __IO  uint32_t                       UDPHS_DMACONTROL;   /**< Offset: 0x08 (R/W  32) UDPHS DMA Channel Control Register (channel = 0) */
  __IO  uint32_t                       UDPHS_DMASTATUS;    /**< Offset: 0x0C (R/W  32) UDPHS DMA Channel Status Register (channel = 0) */
} udphs_dma_registers_t;

/** \brief UDPHS_EPT register API structure */
typedef struct
{
  __IO  uint32_t                       UDPHS_EPTCFG;       /**< Offset: 0x00 (R/W  32) UDPHS Endpoint Configuration Register (endpoint = 0) */
  __O   uint32_t                       UDPHS_EPTCTLENB;    /**< Offset: 0x04 ( /W  32) UDPHS Endpoint Control Enable Register (endpoint = 0) */
  __O   uint32_t                       UDPHS_EPTCTLDIS;    /**< Offset: 0x08 ( /W  32) UDPHS Endpoint Control Disable Register (endpoint = 0) */
  __I   uint32_t                       UDPHS_EPTCTL;       /**< Offset: 0x0C (R/   32) UDPHS Endpoint Control Register (endpoint = 0) */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       UDPHS_EPTSETSTA;    /**< Offset: 0x14 ( /W  32) UDPHS Endpoint Set Status Register (endpoint = 0) */
  __O   uint32_t                       UDPHS_EPTCLRSTA;    /**< Offset: 0x18 ( /W  32) UDPHS Endpoint Clear Status Register (endpoint = 0) */
  __I   uint32_t                       UDPHS_EPTSTA;       /**< Offset: 0x1C (R/   32) UDPHS Endpoint Status Register (endpoint = 0) */
} udphs_ept_registers_t;

#define UDPHS_EPT_NUMBER _U_(16)

#define UDPHS_DMA_NUMBER _U_(7)

/** \brief UDPHS register API structure */
typedef struct
{
  __IO  uint32_t                       UDPHS_CTRL;         /**< Offset: 0x00 (R/W  32) UDPHS Control Register */
  __I   uint32_t                       UDPHS_FNUM;         /**< Offset: 0x04 (R/   32) UDPHS Frame Number Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       UDPHS_IEN;          /**< Offset: 0x10 (R/W  32) UDPHS Interrupt Enable Register */
  __I   uint32_t                       UDPHS_INTSTA;       /**< Offset: 0x14 (R/   32) UDPHS Interrupt Status Register */
  __O   uint32_t                       UDPHS_CLRINT;       /**< Offset: 0x18 ( /W  32) UDPHS Clear Interrupt Register */
  __O   uint32_t                       UDPHS_EPTRST;       /**< Offset: 0x1C ( /W  32) UDPHS Endpoints Reset Register */
  __I   uint8_t                        Reserved2[0xC0];
  __IO  uint32_t                       UDPHS_TST;          /**< Offset: 0xE0 (R/W  32) UDPHS Test Register */
  __I   uint8_t                        Reserved3[0x08];
  __I   uint32_t                       UDPHS_ADDRSIZE;     /**< Offset: 0xEC (R/   32) UDPHS IP Address Size Register */
  __I   uint32_t                       UDPHS_IPNAME[2];    /**< Offset: 0xF0 (R/   32) UDPHS IP Name1 Register */
  __I   uint32_t                       UDPHS_FEATURES;     /**< Offset: 0xF8 (R/   32) UDPHS Features Register */
  __I   uint8_t                        Reserved4[0x04];
        udphs_ept_registers_t          UDPHS_EPT[UDPHS_EPT_NUMBER]; /**< Offset: 0x100  */
        udphs_dma_registers_t          UDPHS_DMA[UDPHS_DMA_NUMBER]; /**< Offset: 0x300  */
} udphs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_UDPHS_COMPONENT_H_ */
