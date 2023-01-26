/*
 * Component description for RTT
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
#ifndef _SAMG55_RTT_COMPONENT_H_
#define _SAMG55_RTT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RTT                                          */
/* ************************************************************************** */

/* -------- RTT_MR : (RTT Offset: 0x00) (R/W 32) Mode Register -------- */
#define RTT_MR_RTPRES_Pos                     _U_(0)                                               /**< (RTT_MR) Real-time Timer Prescaler Value Position */
#define RTT_MR_RTPRES_Msk                     (_U_(0xFFFF) << RTT_MR_RTPRES_Pos)                   /**< (RTT_MR) Real-time Timer Prescaler Value Mask */
#define RTT_MR_RTPRES(value)                  (RTT_MR_RTPRES_Msk & ((value) << RTT_MR_RTPRES_Pos))
#define RTT_MR_ALMIEN_Pos                     _U_(16)                                              /**< (RTT_MR) Alarm Interrupt Enable Position */
#define RTT_MR_ALMIEN_Msk                     (_U_(0x1) << RTT_MR_ALMIEN_Pos)                      /**< (RTT_MR) Alarm Interrupt Enable Mask */
#define RTT_MR_ALMIEN(value)                  (RTT_MR_ALMIEN_Msk & ((value) << RTT_MR_ALMIEN_Pos))
#define RTT_MR_RTTINCIEN_Pos                  _U_(17)                                              /**< (RTT_MR) Real-time Timer Increment Interrupt Enable Position */
#define RTT_MR_RTTINCIEN_Msk                  (_U_(0x1) << RTT_MR_RTTINCIEN_Pos)                   /**< (RTT_MR) Real-time Timer Increment Interrupt Enable Mask */
#define RTT_MR_RTTINCIEN(value)               (RTT_MR_RTTINCIEN_Msk & ((value) << RTT_MR_RTTINCIEN_Pos))
#define RTT_MR_RTTRST_Pos                     _U_(18)                                              /**< (RTT_MR) Real-time Timer Restart Position */
#define RTT_MR_RTTRST_Msk                     (_U_(0x1) << RTT_MR_RTTRST_Pos)                      /**< (RTT_MR) Real-time Timer Restart Mask */
#define RTT_MR_RTTRST(value)                  (RTT_MR_RTTRST_Msk & ((value) << RTT_MR_RTTRST_Pos))
#define RTT_MR_RTTDIS_Pos                     _U_(20)                                              /**< (RTT_MR) Real-time Timer Disable Position */
#define RTT_MR_RTTDIS_Msk                     (_U_(0x1) << RTT_MR_RTTDIS_Pos)                      /**< (RTT_MR) Real-time Timer Disable Mask */
#define RTT_MR_RTTDIS(value)                  (RTT_MR_RTTDIS_Msk & ((value) << RTT_MR_RTTDIS_Pos))
#define RTT_MR_INC2AEN_Pos                    _U_(21)                                              /**< (RTT_MR) RTTINC2 Alarm Enable Position */
#define RTT_MR_INC2AEN_Msk                    (_U_(0x1) << RTT_MR_INC2AEN_Pos)                     /**< (RTT_MR) RTTINC2 Alarm Enable Mask */
#define RTT_MR_INC2AEN(value)                 (RTT_MR_INC2AEN_Msk & ((value) << RTT_MR_INC2AEN_Pos))
#define RTT_MR_EVAEN_Pos                      _U_(22)                                              /**< (RTT_MR) Trigger Event Alarm Enable Position */
#define RTT_MR_EVAEN_Msk                      (_U_(0x1) << RTT_MR_EVAEN_Pos)                       /**< (RTT_MR) Trigger Event Alarm Enable Mask */
#define RTT_MR_EVAEN(value)                   (RTT_MR_EVAEN_Msk & ((value) << RTT_MR_EVAEN_Pos))  
#define RTT_MR_RTC1HZ_Pos                     _U_(24)                                              /**< (RTT_MR) Real-Time Clock 1Hz Clock Selection Position */
#define RTT_MR_RTC1HZ_Msk                     (_U_(0x1) << RTT_MR_RTC1HZ_Pos)                      /**< (RTT_MR) Real-Time Clock 1Hz Clock Selection Mask */
#define RTT_MR_RTC1HZ(value)                  (RTT_MR_RTC1HZ_Msk & ((value) << RTT_MR_RTC1HZ_Pos))
#define RTT_MR_Msk                            _U_(0x0177FFFF)                                      /**< (RTT_MR) Register Mask  */


/* -------- RTT_AR : (RTT Offset: 0x04) (R/W 32) Alarm Register -------- */
#define RTT_AR_ALMV_Pos                       _U_(0)                                               /**< (RTT_AR) Alarm Value Position */
#define RTT_AR_ALMV_Msk                       (_U_(0xFFFFFFFF) << RTT_AR_ALMV_Pos)                 /**< (RTT_AR) Alarm Value Mask */
#define RTT_AR_ALMV(value)                    (RTT_AR_ALMV_Msk & ((value) << RTT_AR_ALMV_Pos))    
#define RTT_AR_Msk                            _U_(0xFFFFFFFF)                                      /**< (RTT_AR) Register Mask  */


/* -------- RTT_VR : (RTT Offset: 0x08) ( R/ 32) Value Register -------- */
#define RTT_VR_CRTV_Pos                       _U_(0)                                               /**< (RTT_VR) Current Real-time Value Position */
#define RTT_VR_CRTV_Msk                       (_U_(0xFFFFFFFF) << RTT_VR_CRTV_Pos)                 /**< (RTT_VR) Current Real-time Value Mask */
#define RTT_VR_CRTV(value)                    (RTT_VR_CRTV_Msk & ((value) << RTT_VR_CRTV_Pos))    
#define RTT_VR_Msk                            _U_(0xFFFFFFFF)                                      /**< (RTT_VR) Register Mask  */


/* -------- RTT_SR : (RTT Offset: 0x0C) ( R/ 32) Status Register -------- */
#define RTT_SR_ALMS_Pos                       _U_(0)                                               /**< (RTT_SR) Real-time Alarm Status (cleared on read) Position */
#define RTT_SR_ALMS_Msk                       (_U_(0x1) << RTT_SR_ALMS_Pos)                        /**< (RTT_SR) Real-time Alarm Status (cleared on read) Mask */
#define RTT_SR_ALMS(value)                    (RTT_SR_ALMS_Msk & ((value) << RTT_SR_ALMS_Pos))    
#define RTT_SR_RTTINC_Pos                     _U_(1)                                               /**< (RTT_SR) Prescaler Roll-over Status (cleared on read) Position */
#define RTT_SR_RTTINC_Msk                     (_U_(0x1) << RTT_SR_RTTINC_Pos)                      /**< (RTT_SR) Prescaler Roll-over Status (cleared on read) Mask */
#define RTT_SR_RTTINC(value)                  (RTT_SR_RTTINC_Msk & ((value) << RTT_SR_RTTINC_Pos))
#define RTT_SR_RTTINC2_Pos                    _U_(2)                                               /**< (RTT_SR) Predefined Number of Prescaler Roll-over Status (cleared on read) Position */
#define RTT_SR_RTTINC2_Msk                    (_U_(0x1) << RTT_SR_RTTINC2_Pos)                     /**< (RTT_SR) Predefined Number of Prescaler Roll-over Status (cleared on read) Mask */
#define RTT_SR_RTTINC2(value)                 (RTT_SR_RTTINC2_Msk & ((value) << RTT_SR_RTTINC2_Pos))
#define RTT_SR_Msk                            _U_(0x00000007)                                      /**< (RTT_SR) Register Mask  */


/* -------- RTT_MODR : (RTT Offset: 0x10) (R/W 32) Modulo Selection Register -------- */
#define RTT_MODR_SELINC2_Pos                  _U_(0)                                               /**< (RTT_MODR) Selection of the 32-bit Counter Modulo to generate RTTINC2 flag Position */
#define RTT_MODR_SELINC2_Msk                  (_U_(0x7) << RTT_MODR_SELINC2_Pos)                   /**< (RTT_MODR) Selection of the 32-bit Counter Modulo to generate RTTINC2 flag Mask */
#define RTT_MODR_SELINC2(value)               (RTT_MODR_SELINC2_Msk & ((value) << RTT_MODR_SELINC2_Pos))
#define   RTT_MODR_SELINC2_NO_RTTINC2_Val     _U_(0x0)                                             /**< (RTT_MODR) The RTTINC2 flag never rises  */
#define   RTT_MODR_SELINC2_MOD64_Val          _U_(0x1)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 64 equals 0  */
#define   RTT_MODR_SELINC2_MOD128_Val         _U_(0x2)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 128 equals 0  */
#define   RTT_MODR_SELINC2_MOD256_Val         _U_(0x3)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 256 equals 0  */
#define   RTT_MODR_SELINC2_MOD512_Val         _U_(0x4)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 512 equals 0  */
#define   RTT_MODR_SELINC2_MOD1024_Val        _U_(0x5)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 1024 equals 0.Example: If RTPRES=32 then RTTINC2 flag rises once per second if the slow clock is 32.768 kHz.  */
#define   RTT_MODR_SELINC2_MOD2048_Val        _U_(0x6)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 2048 equals 0  */
#define   RTT_MODR_SELINC2_MOD4096_Val        _U_(0x7)                                             /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 4096 equals 0  */
#define RTT_MODR_SELINC2_NO_RTTINC2           (RTT_MODR_SELINC2_NO_RTTINC2_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag never rises Position  */
#define RTT_MODR_SELINC2_MOD64                (RTT_MODR_SELINC2_MOD64_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 64 equals 0 Position  */
#define RTT_MODR_SELINC2_MOD128               (RTT_MODR_SELINC2_MOD128_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 128 equals 0 Position  */
#define RTT_MODR_SELINC2_MOD256               (RTT_MODR_SELINC2_MOD256_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 256 equals 0 Position  */
#define RTT_MODR_SELINC2_MOD512               (RTT_MODR_SELINC2_MOD512_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 512 equals 0 Position  */
#define RTT_MODR_SELINC2_MOD1024              (RTT_MODR_SELINC2_MOD1024_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 1024 equals 0.Example: If RTPRES=32 then RTTINC2 flag rises once per second if the slow clock is 32.768 kHz. Position  */
#define RTT_MODR_SELINC2_MOD2048              (RTT_MODR_SELINC2_MOD2048_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 2048 equals 0 Position  */
#define RTT_MODR_SELINC2_MOD4096              (RTT_MODR_SELINC2_MOD4096_Val << RTT_MODR_SELINC2_Pos) /**< (RTT_MODR) The RTTINC2 flag is set when CRTV modulo 4096 equals 0 Position  */
#define RTT_MODR_SELTRGEV_Pos                 _U_(8)                                               /**< (RTT_MODR) Selection of the 32-bit Counter Modulo to generate the trigger event Position */
#define RTT_MODR_SELTRGEV_Msk                 (_U_(0x7) << RTT_MODR_SELTRGEV_Pos)                  /**< (RTT_MODR) Selection of the 32-bit Counter Modulo to generate the trigger event Mask */
#define RTT_MODR_SELTRGEV(value)              (RTT_MODR_SELTRGEV_Msk & ((value) << RTT_MODR_SELTRGEV_Pos))
#define   RTT_MODR_SELTRGEV_NO_EVENT_Val      _U_(0x0)                                             /**< (RTT_MODR) No event generated  */
#define   RTT_MODR_SELTRGEV_MOD2_Val          _U_(0x1)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 2 equals 0  */
#define   RTT_MODR_SELTRGEV_MOD4_Val          _U_(0x2)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 4 equals 0  */
#define   RTT_MODR_SELTRGEV_MOD8_Val          _U_(0x3)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 8 equals 0  */
#define   RTT_MODR_SELTRGEV_MOD16_Val         _U_(0x4)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 16 equals 0  */
#define   RTT_MODR_SELTRGEV_MOD32_Val         _U_(0x5)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 32 equals 0  */
#define   RTT_MODR_SELTRGEV_MOD64_Val         _U_(0x6)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 64 equals 0  */
#define   RTT_MODR_SELTRGEV_MOD128_Val        _U_(0x7)                                             /**< (RTT_MODR) Event occurs when CRTV modulo 128 equals 0  */
#define RTT_MODR_SELTRGEV_NO_EVENT            (RTT_MODR_SELTRGEV_NO_EVENT_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) No event generated Position  */
#define RTT_MODR_SELTRGEV_MOD2                (RTT_MODR_SELTRGEV_MOD2_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 2 equals 0 Position  */
#define RTT_MODR_SELTRGEV_MOD4                (RTT_MODR_SELTRGEV_MOD4_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 4 equals 0 Position  */
#define RTT_MODR_SELTRGEV_MOD8                (RTT_MODR_SELTRGEV_MOD8_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 8 equals 0 Position  */
#define RTT_MODR_SELTRGEV_MOD16               (RTT_MODR_SELTRGEV_MOD16_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 16 equals 0 Position  */
#define RTT_MODR_SELTRGEV_MOD32               (RTT_MODR_SELTRGEV_MOD32_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 32 equals 0 Position  */
#define RTT_MODR_SELTRGEV_MOD64               (RTT_MODR_SELTRGEV_MOD64_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 64 equals 0 Position  */
#define RTT_MODR_SELTRGEV_MOD128              (RTT_MODR_SELTRGEV_MOD128_Val << RTT_MODR_SELTRGEV_Pos) /**< (RTT_MODR) Event occurs when CRTV modulo 128 equals 0 Position  */
#define RTT_MODR_Msk                          _U_(0x00000707)                                      /**< (RTT_MODR) Register Mask  */


/** \brief RTT register offsets definitions */
#define RTT_MR_REG_OFST                (0x00)              /**< (RTT_MR) Mode Register Offset */
#define RTT_AR_REG_OFST                (0x04)              /**< (RTT_AR) Alarm Register Offset */
#define RTT_VR_REG_OFST                (0x08)              /**< (RTT_VR) Value Register Offset */
#define RTT_SR_REG_OFST                (0x0C)              /**< (RTT_SR) Status Register Offset */
#define RTT_MODR_REG_OFST              (0x10)              /**< (RTT_MODR) Modulo Selection Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RTT register API structure */
typedef struct
{
  __IO  uint32_t                       RTT_MR;             /**< Offset: 0x00 (R/W  32) Mode Register */
  __IO  uint32_t                       RTT_AR;             /**< Offset: 0x04 (R/W  32) Alarm Register */
  __I   uint32_t                       RTT_VR;             /**< Offset: 0x08 (R/   32) Value Register */
  __I   uint32_t                       RTT_SR;             /**< Offset: 0x0C (R/   32) Status Register */
  __IO  uint32_t                       RTT_MODR;           /**< Offset: 0x10 (R/W  32) Modulo Selection Register */
} rtt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_RTT_COMPONENT_H_ */
