/*
 * Component description for SECUMOD
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
#ifndef _SAMA5D2_SECUMOD_COMPONENT_H_
#define _SAMA5D2_SECUMOD_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SECUMOD                                      */
/* ************************************************************************** */

/* -------- SECUMOD_CR : (SECUMOD Offset: 0x00) ( /W 32) Control Register -------- */
#define SECUMOD_CR_BACKUP_Pos                 _U_(0)                                               /**< (SECUMOD_CR) Backup Mode Position */
#define SECUMOD_CR_BACKUP_Msk                 (_U_(0x1) << SECUMOD_CR_BACKUP_Pos)                  /**< (SECUMOD_CR) Backup Mode Mask */
#define SECUMOD_CR_BACKUP(value)              (SECUMOD_CR_BACKUP_Msk & ((value) << SECUMOD_CR_BACKUP_Pos))
#define SECUMOD_CR_NORMAL_Pos                 _U_(1)                                               /**< (SECUMOD_CR) Normal Mode Position */
#define SECUMOD_CR_NORMAL_Msk                 (_U_(0x1) << SECUMOD_CR_NORMAL_Pos)                  /**< (SECUMOD_CR) Normal Mode Mask */
#define SECUMOD_CR_NORMAL(value)              (SECUMOD_CR_NORMAL_Msk & ((value) << SECUMOD_CR_NORMAL_Pos))
#define SECUMOD_CR_SWPROT_Pos                 _U_(2)                                               /**< (SECUMOD_CR) Software Protection Position */
#define SECUMOD_CR_SWPROT_Msk                 (_U_(0x1) << SECUMOD_CR_SWPROT_Pos)                  /**< (SECUMOD_CR) Software Protection Mask */
#define SECUMOD_CR_SWPROT(value)              (SECUMOD_CR_SWPROT_Msk & ((value) << SECUMOD_CR_SWPROT_Pos))
#define SECUMOD_CR_SCRAMB_Pos                 _U_(9)                                               /**< (SECUMOD_CR) Memory Scrambling Enable Position */
#define SECUMOD_CR_SCRAMB_Msk                 (_U_(0x3) << SECUMOD_CR_SCRAMB_Pos)                  /**< (SECUMOD_CR) Memory Scrambling Enable Mask */
#define SECUMOD_CR_SCRAMB(value)              (SECUMOD_CR_SCRAMB_Msk & ((value) << SECUMOD_CR_SCRAMB_Pos))
#define SECUMOD_CR_KEY_Pos                    _U_(16)                                              /**< (SECUMOD_CR) Password Position */
#define SECUMOD_CR_KEY_Msk                    (_U_(0xFFFF) << SECUMOD_CR_KEY_Pos)                  /**< (SECUMOD_CR) Password Mask */
#define SECUMOD_CR_KEY(value)                 (SECUMOD_CR_KEY_Msk & ((value) << SECUMOD_CR_KEY_Pos))
#define SECUMOD_CR_Msk                        _U_(0xFFFF0607)                                      /**< (SECUMOD_CR) Register Mask  */


/* -------- SECUMOD_SYSR : (SECUMOD Offset: 0x04) (R/W 32) System Status Register -------- */
#define SECUMOD_SYSR_ERASE_DONE_Pos           _U_(0)                                               /**< (SECUMOD_SYSR) Erasable Memories State (RW) Position */
#define SECUMOD_SYSR_ERASE_DONE_Msk           (_U_(0x1) << SECUMOD_SYSR_ERASE_DONE_Pos)            /**< (SECUMOD_SYSR) Erasable Memories State (RW) Mask */
#define SECUMOD_SYSR_ERASE_DONE(value)        (SECUMOD_SYSR_ERASE_DONE_Msk & ((value) << SECUMOD_SYSR_ERASE_DONE_Pos))
#define SECUMOD_SYSR_ERASE_ON_Pos             _U_(1)                                               /**< (SECUMOD_SYSR) Erase Process Ongoing (RO) Position */
#define SECUMOD_SYSR_ERASE_ON_Msk             (_U_(0x1) << SECUMOD_SYSR_ERASE_ON_Pos)              /**< (SECUMOD_SYSR) Erase Process Ongoing (RO) Mask */
#define SECUMOD_SYSR_ERASE_ON(value)          (SECUMOD_SYSR_ERASE_ON_Msk & ((value) << SECUMOD_SYSR_ERASE_ON_Pos))
#define SECUMOD_SYSR_BACKUP_Pos               _U_(2)                                               /**< (SECUMOD_SYSR) Backup Mode (RO) Position */
#define SECUMOD_SYSR_BACKUP_Msk               (_U_(0x1) << SECUMOD_SYSR_BACKUP_Pos)                /**< (SECUMOD_SYSR) Backup Mode (RO) Mask */
#define SECUMOD_SYSR_BACKUP(value)            (SECUMOD_SYSR_BACKUP_Msk & ((value) << SECUMOD_SYSR_BACKUP_Pos))
#define SECUMOD_SYSR_SWKUP_Pos                _U_(3)                                               /**< (SECUMOD_SYSR) SWKUP State (RO) Position */
#define SECUMOD_SYSR_SWKUP_Msk                (_U_(0x1) << SECUMOD_SYSR_SWKUP_Pos)                 /**< (SECUMOD_SYSR) SWKUP State (RO) Mask */
#define SECUMOD_SYSR_SWKUP(value)             (SECUMOD_SYSR_SWKUP_Msk & ((value) << SECUMOD_SYSR_SWKUP_Pos))
#define SECUMOD_SYSR_AUTOBKP_Pos              _U_(6)                                               /**< (SECUMOD_SYSR) Automatic Backup Mode Enabled (RO) Position */
#define SECUMOD_SYSR_AUTOBKP_Msk              (_U_(0x1) << SECUMOD_SYSR_AUTOBKP_Pos)               /**< (SECUMOD_SYSR) Automatic Backup Mode Enabled (RO) Mask */
#define SECUMOD_SYSR_AUTOBKP(value)           (SECUMOD_SYSR_AUTOBKP_Msk & ((value) << SECUMOD_SYSR_AUTOBKP_Pos))
#define SECUMOD_SYSR_SCRAMB_Pos               _U_(7)                                               /**< (SECUMOD_SYSR) Scrambling Enabled (RO) Position */
#define SECUMOD_SYSR_SCRAMB_Msk               (_U_(0x1) << SECUMOD_SYSR_SCRAMB_Pos)                /**< (SECUMOD_SYSR) Scrambling Enabled (RO) Mask */
#define SECUMOD_SYSR_SCRAMB(value)            (SECUMOD_SYSR_SCRAMB_Msk & ((value) << SECUMOD_SYSR_SCRAMB_Pos))
#define SECUMOD_SYSR_Msk                      _U_(0x000000CF)                                      /**< (SECUMOD_SYSR) Register Mask  */


/* -------- SECUMOD_SR : (SECUMOD Offset: 0x08) ( R/ 32) Status Register -------- */
#define SECUMOD_SR_DET0_Pos                   _U_(16)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET0_Msk                   (_U_(0x1) << SECUMOD_SR_DET0_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET0(value)                (SECUMOD_SR_DET0_Msk & ((value) << SECUMOD_SR_DET0_Pos))
#define SECUMOD_SR_DET1_Pos                   _U_(17)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET1_Msk                   (_U_(0x1) << SECUMOD_SR_DET1_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET1(value)                (SECUMOD_SR_DET1_Msk & ((value) << SECUMOD_SR_DET1_Pos))
#define SECUMOD_SR_DET2_Pos                   _U_(18)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET2_Msk                   (_U_(0x1) << SECUMOD_SR_DET2_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET2(value)                (SECUMOD_SR_DET2_Msk & ((value) << SECUMOD_SR_DET2_Pos))
#define SECUMOD_SR_DET3_Pos                   _U_(19)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET3_Msk                   (_U_(0x1) << SECUMOD_SR_DET3_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET3(value)                (SECUMOD_SR_DET3_Msk & ((value) << SECUMOD_SR_DET3_Pos))
#define SECUMOD_SR_DET4_Pos                   _U_(20)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET4_Msk                   (_U_(0x1) << SECUMOD_SR_DET4_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET4(value)                (SECUMOD_SR_DET4_Msk & ((value) << SECUMOD_SR_DET4_Pos))
#define SECUMOD_SR_DET5_Pos                   _U_(21)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET5_Msk                   (_U_(0x1) << SECUMOD_SR_DET5_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET5(value)                (SECUMOD_SR_DET5_Msk & ((value) << SECUMOD_SR_DET5_Pos))
#define SECUMOD_SR_DET6_Pos                   _U_(22)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET6_Msk                   (_U_(0x1) << SECUMOD_SR_DET6_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET6(value)                (SECUMOD_SR_DET6_Msk & ((value) << SECUMOD_SR_DET6_Pos))
#define SECUMOD_SR_DET7_Pos                   _U_(23)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET7_Msk                   (_U_(0x1) << SECUMOD_SR_DET7_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET7(value)                (SECUMOD_SR_DET7_Msk & ((value) << SECUMOD_SR_DET7_Pos))
#define SECUMOD_SR_Msk                        _U_(0x00FF0000)                                      /**< (SECUMOD_SR) Register Mask  */

#define SECUMOD_SR_DET_Pos                    _U_(16)                                              /**< (SECUMOD_SR Position) PIOBU Intrusion Detector */
#define SECUMOD_SR_DET_Msk                    (_U_(0xFF) << SECUMOD_SR_DET_Pos)                    /**< (SECUMOD_SR Mask) DET */
#define SECUMOD_SR_DET(value)                 (SECUMOD_SR_DET_Msk & ((value) << SECUMOD_SR_DET_Pos)) 

/* -------- SECUMOD_SCR : (SECUMOD Offset: 0x10) ( /W 32) Status Clear Register -------- */
#define SECUMOD_SCR_DET0_Pos                  _U_(16)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET0_Msk                  (_U_(0x1) << SECUMOD_SCR_DET0_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET0(value)               (SECUMOD_SCR_DET0_Msk & ((value) << SECUMOD_SCR_DET0_Pos))
#define SECUMOD_SCR_DET1_Pos                  _U_(17)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET1_Msk                  (_U_(0x1) << SECUMOD_SCR_DET1_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET1(value)               (SECUMOD_SCR_DET1_Msk & ((value) << SECUMOD_SCR_DET1_Pos))
#define SECUMOD_SCR_DET2_Pos                  _U_(18)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET2_Msk                  (_U_(0x1) << SECUMOD_SCR_DET2_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET2(value)               (SECUMOD_SCR_DET2_Msk & ((value) << SECUMOD_SCR_DET2_Pos))
#define SECUMOD_SCR_DET3_Pos                  _U_(19)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET3_Msk                  (_U_(0x1) << SECUMOD_SCR_DET3_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET3(value)               (SECUMOD_SCR_DET3_Msk & ((value) << SECUMOD_SCR_DET3_Pos))
#define SECUMOD_SCR_DET4_Pos                  _U_(20)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET4_Msk                  (_U_(0x1) << SECUMOD_SCR_DET4_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET4(value)               (SECUMOD_SCR_DET4_Msk & ((value) << SECUMOD_SCR_DET4_Pos))
#define SECUMOD_SCR_DET5_Pos                  _U_(21)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET5_Msk                  (_U_(0x1) << SECUMOD_SCR_DET5_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET5(value)               (SECUMOD_SCR_DET5_Msk & ((value) << SECUMOD_SCR_DET5_Pos))
#define SECUMOD_SCR_DET6_Pos                  _U_(22)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET6_Msk                  (_U_(0x1) << SECUMOD_SCR_DET6_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET6(value)               (SECUMOD_SCR_DET6_Msk & ((value) << SECUMOD_SCR_DET6_Pos))
#define SECUMOD_SCR_DET7_Pos                  _U_(23)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET7_Msk                  (_U_(0x1) << SECUMOD_SCR_DET7_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET7(value)               (SECUMOD_SCR_DET7_Msk & ((value) << SECUMOD_SCR_DET7_Pos))
#define SECUMOD_SCR_Msk                       _U_(0x00FF0000)                                      /**< (SECUMOD_SCR) Register Mask  */

#define SECUMOD_SCR_DET_Pos                   _U_(16)                                              /**< (SECUMOD_SCR Position) PIOBU Intrusion Detector */
#define SECUMOD_SCR_DET_Msk                   (_U_(0xFF) << SECUMOD_SCR_DET_Pos)                   /**< (SECUMOD_SCR Mask) DET */
#define SECUMOD_SCR_DET(value)                (SECUMOD_SCR_DET_Msk & ((value) << SECUMOD_SCR_DET_Pos)) 

/* -------- SECUMOD_RAMRDY : (SECUMOD Offset: 0x14) ( R/ 32) RAM Access Ready Register -------- */
#define SECUMOD_RAMRDY_READY_Pos              _U_(0)                                               /**< (SECUMOD_RAMRDY) Ready for system access flag Position */
#define SECUMOD_RAMRDY_READY_Msk              (_U_(0x1) << SECUMOD_RAMRDY_READY_Pos)               /**< (SECUMOD_RAMRDY) Ready for system access flag Mask */
#define SECUMOD_RAMRDY_READY(value)           (SECUMOD_RAMRDY_READY_Msk & ((value) << SECUMOD_RAMRDY_READY_Pos))
#define SECUMOD_RAMRDY_Msk                    _U_(0x00000001)                                      /**< (SECUMOD_RAMRDY) Register Mask  */


/* -------- SECUMOD_PIOBU : (SECUMOD Offset: 0x18) (R/W 32) PIO Backup Register -------- */
#define SECUMOD_PIOBU_PIOBU_AFV_Pos           _U_(0)                                               /**< (SECUMOD_PIOBU) PIOBU Alarm Filter Value Position */
#define SECUMOD_PIOBU_PIOBU_AFV_Msk           (_U_(0xF) << SECUMOD_PIOBU_PIOBU_AFV_Pos)            /**< (SECUMOD_PIOBU) PIOBU Alarm Filter Value Mask */
#define SECUMOD_PIOBU_PIOBU_AFV(value)        (SECUMOD_PIOBU_PIOBU_AFV_Msk & ((value) << SECUMOD_PIOBU_PIOBU_AFV_Pos))
#define SECUMOD_PIOBU_PIOBU_RFV_Pos           _U_(4)                                               /**< (SECUMOD_PIOBU) PIOBUx Reset Filter Value Position */
#define SECUMOD_PIOBU_PIOBU_RFV_Msk           (_U_(0xF) << SECUMOD_PIOBU_PIOBU_RFV_Pos)            /**< (SECUMOD_PIOBU) PIOBUx Reset Filter Value Mask */
#define SECUMOD_PIOBU_PIOBU_RFV(value)        (SECUMOD_PIOBU_PIOBU_RFV_Msk & ((value) << SECUMOD_PIOBU_PIOBU_RFV_Pos))
#define SECUMOD_PIOBU_OUTPUT_Pos              _U_(8)                                               /**< (SECUMOD_PIOBU) Configure I/O Line in Input/Output Position */
#define SECUMOD_PIOBU_OUTPUT_Msk              (_U_(0x1) << SECUMOD_PIOBU_OUTPUT_Pos)               /**< (SECUMOD_PIOBU) Configure I/O Line in Input/Output Mask */
#define SECUMOD_PIOBU_OUTPUT(value)           (SECUMOD_PIOBU_OUTPUT_Msk & ((value) << SECUMOD_PIOBU_OUTPUT_Pos))
#define SECUMOD_PIOBU_PIO_SOD_Pos             _U_(9)                                               /**< (SECUMOD_PIOBU) Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) Position */
#define SECUMOD_PIOBU_PIO_SOD_Msk             (_U_(0x1) << SECUMOD_PIOBU_PIO_SOD_Pos)              /**< (SECUMOD_PIOBU) Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) Mask */
#define SECUMOD_PIOBU_PIO_SOD(value)          (SECUMOD_PIOBU_PIO_SOD_Msk & ((value) << SECUMOD_PIOBU_PIO_SOD_Pos))
#define SECUMOD_PIOBU_PIO_PDS_Pos             _U_(10)                                              /**< (SECUMOD_PIOBU) Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) Position */
#define SECUMOD_PIOBU_PIO_PDS_Msk             (_U_(0x1) << SECUMOD_PIOBU_PIO_PDS_Pos)              /**< (SECUMOD_PIOBU) Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) Mask */
#define SECUMOD_PIOBU_PIO_PDS(value)          (SECUMOD_PIOBU_PIO_PDS_Msk & ((value) << SECUMOD_PIOBU_PIO_PDS_Pos))
#define SECUMOD_PIOBU_PULLUP_Pos              _U_(12)                                              /**< (SECUMOD_PIOBU) Programmable Pull-up State Position */
#define SECUMOD_PIOBU_PULLUP_Msk              (_U_(0x3) << SECUMOD_PIOBU_PULLUP_Pos)               /**< (SECUMOD_PIOBU) Programmable Pull-up State Mask */
#define SECUMOD_PIOBU_PULLUP(value)           (SECUMOD_PIOBU_PULLUP_Msk & ((value) << SECUMOD_PIOBU_PULLUP_Pos))
#define SECUMOD_PIOBU_SCHEDULE_Pos            _U_(14)                                              /**< (SECUMOD_PIOBU) Pull-up/Down Scheduled Position */
#define SECUMOD_PIOBU_SCHEDULE_Msk            (_U_(0x1) << SECUMOD_PIOBU_SCHEDULE_Pos)             /**< (SECUMOD_PIOBU) Pull-up/Down Scheduled Mask */
#define SECUMOD_PIOBU_SCHEDULE(value)         (SECUMOD_PIOBU_SCHEDULE_Msk & ((value) << SECUMOD_PIOBU_SCHEDULE_Pos))
#define SECUMOD_PIOBU_SWITCH_Pos              _U_(15)                                              /**< (SECUMOD_PIOBU) Switch State for Intrusion Detection Position */
#define SECUMOD_PIOBU_SWITCH_Msk              (_U_(0x1) << SECUMOD_PIOBU_SWITCH_Pos)               /**< (SECUMOD_PIOBU) Switch State for Intrusion Detection Mask */
#define SECUMOD_PIOBU_SWITCH(value)           (SECUMOD_PIOBU_SWITCH_Msk & ((value) << SECUMOD_PIOBU_SWITCH_Pos))
#define SECUMOD_PIOBU_Msk                     _U_(0x0000F7FF)                                      /**< (SECUMOD_PIOBU) Register Mask  */


/* -------- SECUMOD_JTAGCR : (SECUMOD Offset: 0x68) (R/W 32) JTAG Protection Control Register -------- */
#define SECUMOD_JTAGCR_FNTRST_Pos             _U_(0)                                               /**< (SECUMOD_JTAGCR) Force NTRST Position */
#define SECUMOD_JTAGCR_FNTRST_Msk             (_U_(0x1) << SECUMOD_JTAGCR_FNTRST_Pos)              /**< (SECUMOD_JTAGCR) Force NTRST Mask */
#define SECUMOD_JTAGCR_FNTRST(value)          (SECUMOD_JTAGCR_FNTRST_Msk & ((value) << SECUMOD_JTAGCR_FNTRST_Pos))
#define SECUMOD_JTAGCR_CA5_DEBUG_MODE_Pos     _U_(1)                                               /**< (SECUMOD_JTAGCR) Cortex-A5 Invasive/Non-Invasive Secure/Non-Secure Debug Permissions Position */
#define SECUMOD_JTAGCR_CA5_DEBUG_MODE_Msk     (_U_(0x7) << SECUMOD_JTAGCR_CA5_DEBUG_MODE_Pos)      /**< (SECUMOD_JTAGCR) Cortex-A5 Invasive/Non-Invasive Secure/Non-Secure Debug Permissions Mask */
#define SECUMOD_JTAGCR_CA5_DEBUG_MODE(value)  (SECUMOD_JTAGCR_CA5_DEBUG_MODE_Msk & ((value) << SECUMOD_JTAGCR_CA5_DEBUG_MODE_Pos))
#define SECUMOD_JTAGCR_WZO_Pos                _U_(4)                                               /**< (SECUMOD_JTAGCR) Write ZERO Position */
#define SECUMOD_JTAGCR_WZO_Msk                (_U_(0x1) << SECUMOD_JTAGCR_WZO_Pos)                 /**< (SECUMOD_JTAGCR) Write ZERO Mask */
#define SECUMOD_JTAGCR_WZO(value)             (SECUMOD_JTAGCR_WZO_Msk & ((value) << SECUMOD_JTAGCR_WZO_Pos))
#define SECUMOD_JTAGCR_Msk                    _U_(0x0000001F)                                      /**< (SECUMOD_JTAGCR) Register Mask  */


/* -------- SECUMOD_SCRKEY : (SECUMOD Offset: 0x70) (R/W 32) Scrambling Key Register -------- */
#define SECUMOD_SCRKEY_SCRKEY_Pos             _U_(0)                                               /**< (SECUMOD_SCRKEY) Scrambling Key Value Position */
#define SECUMOD_SCRKEY_SCRKEY_Msk             (_U_(0xFFFFFFFF) << SECUMOD_SCRKEY_SCRKEY_Pos)       /**< (SECUMOD_SCRKEY) Scrambling Key Value Mask */
#define SECUMOD_SCRKEY_SCRKEY(value)          (SECUMOD_SCRKEY_SCRKEY_Msk & ((value) << SECUMOD_SCRKEY_SCRKEY_Pos))
#define SECUMOD_SCRKEY_Msk                    _U_(0xFFFFFFFF)                                      /**< (SECUMOD_SCRKEY) Register Mask  */


/* -------- SECUMOD_RAMACC : (SECUMOD Offset: 0x74) (R/W 32) RAM Access Rights Register -------- */
#define SECUMOD_RAMACC_RW0_Pos                _U_(0)                                               /**< (SECUMOD_RAMACC) Access right for RAM region [0; 1 Kbyte] Position */
#define SECUMOD_RAMACC_RW0_Msk                (_U_(0x3) << SECUMOD_RAMACC_RW0_Pos)                 /**< (SECUMOD_RAMACC) Access right for RAM region [0; 1 Kbyte] Mask */
#define SECUMOD_RAMACC_RW0(value)             (SECUMOD_RAMACC_RW0_Msk & ((value) << SECUMOD_RAMACC_RW0_Pos))
#define SECUMOD_RAMACC_RW1_Pos                _U_(2)                                               /**< (SECUMOD_RAMACC) Access right for RAM region [1 Kbyte; 2 Kbytes] Position */
#define SECUMOD_RAMACC_RW1_Msk                (_U_(0x3) << SECUMOD_RAMACC_RW1_Pos)                 /**< (SECUMOD_RAMACC) Access right for RAM region [1 Kbyte; 2 Kbytes] Mask */
#define SECUMOD_RAMACC_RW1(value)             (SECUMOD_RAMACC_RW1_Msk & ((value) << SECUMOD_RAMACC_RW1_Pos))
#define SECUMOD_RAMACC_RW2_Pos                _U_(4)                                               /**< (SECUMOD_RAMACC) Access right for RAM region [2 Kbytes; 3 Kbytes] Position */
#define SECUMOD_RAMACC_RW2_Msk                (_U_(0x3) << SECUMOD_RAMACC_RW2_Pos)                 /**< (SECUMOD_RAMACC) Access right for RAM region [2 Kbytes; 3 Kbytes] Mask */
#define SECUMOD_RAMACC_RW2(value)             (SECUMOD_RAMACC_RW2_Msk & ((value) << SECUMOD_RAMACC_RW2_Pos))
#define SECUMOD_RAMACC_RW3_Pos                _U_(6)                                               /**< (SECUMOD_RAMACC) Access right for RAM region [3 Kbytes; 4 Kbytes] Position */
#define SECUMOD_RAMACC_RW3_Msk                (_U_(0x3) << SECUMOD_RAMACC_RW3_Pos)                 /**< (SECUMOD_RAMACC) Access right for RAM region [3 Kbytes; 4 Kbytes] Mask */
#define SECUMOD_RAMACC_RW3(value)             (SECUMOD_RAMACC_RW3_Msk & ((value) << SECUMOD_RAMACC_RW3_Pos))
#define SECUMOD_RAMACC_RW4_Pos                _U_(8)                                               /**< (SECUMOD_RAMACC) Access right for RAM region [4 Kbytes; 5 Kbytes] Position */
#define SECUMOD_RAMACC_RW4_Msk                (_U_(0x3) << SECUMOD_RAMACC_RW4_Pos)                 /**< (SECUMOD_RAMACC) Access right for RAM region [4 Kbytes; 5 Kbytes] Mask */
#define SECUMOD_RAMACC_RW4(value)             (SECUMOD_RAMACC_RW4_Msk & ((value) << SECUMOD_RAMACC_RW4_Pos))
#define SECUMOD_RAMACC_RW5_Pos                _U_(10)                                              /**< (SECUMOD_RAMACC) Access right for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Position */
#define SECUMOD_RAMACC_RW5_Msk                (_U_(0x3) << SECUMOD_RAMACC_RW5_Pos)                 /**< (SECUMOD_RAMACC) Access right for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Mask */
#define SECUMOD_RAMACC_RW5(value)             (SECUMOD_RAMACC_RW5_Msk & ((value) << SECUMOD_RAMACC_RW5_Pos))
#define SECUMOD_RAMACC_Msk                    _U_(0x00000FFF)                                      /**< (SECUMOD_RAMACC) Register Mask  */


/* -------- SECUMOD_RAMACCSR : (SECUMOD Offset: 0x78) (R/W 32) RAM Access Rights Status Register -------- */
#define SECUMOD_RAMACCSR_RW0_Pos              _U_(0)                                               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [0; 1 Kbyte] Position */
#define SECUMOD_RAMACCSR_RW0_Msk              (_U_(0x3) << SECUMOD_RAMACCSR_RW0_Pos)               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [0; 1 Kbyte] Mask */
#define SECUMOD_RAMACCSR_RW0(value)           (SECUMOD_RAMACCSR_RW0_Msk & ((value) << SECUMOD_RAMACCSR_RW0_Pos))
#define SECUMOD_RAMACCSR_RW1_Pos              _U_(2)                                               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [1 Kbytes; 2 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW1_Msk              (_U_(0x3) << SECUMOD_RAMACCSR_RW1_Pos)               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [1 Kbytes; 2 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW1(value)           (SECUMOD_RAMACCSR_RW1_Msk & ((value) << SECUMOD_RAMACCSR_RW1_Pos))
#define SECUMOD_RAMACCSR_RW2_Pos              _U_(4)                                               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [2 Kbytes; 3 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW2_Msk              (_U_(0x3) << SECUMOD_RAMACCSR_RW2_Pos)               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [2 Kbytes; 3 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW2(value)           (SECUMOD_RAMACCSR_RW2_Msk & ((value) << SECUMOD_RAMACCSR_RW2_Pos))
#define SECUMOD_RAMACCSR_RW3_Pos              _U_(6)                                               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [3 Kbytes; 4 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW3_Msk              (_U_(0x3) << SECUMOD_RAMACCSR_RW3_Pos)               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [3 Kbytes; 4 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW3(value)           (SECUMOD_RAMACCSR_RW3_Msk & ((value) << SECUMOD_RAMACCSR_RW3_Pos))
#define SECUMOD_RAMACCSR_RW4_Pos              _U_(8)                                               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [4 Kbytes; 5 Kbytes] Position */
#define SECUMOD_RAMACCSR_RW4_Msk              (_U_(0x3) << SECUMOD_RAMACCSR_RW4_Pos)               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [4 Kbytes; 5 Kbytes] Mask */
#define SECUMOD_RAMACCSR_RW4(value)           (SECUMOD_RAMACCSR_RW4_Msk & ((value) << SECUMOD_RAMACCSR_RW4_Pos))
#define SECUMOD_RAMACCSR_RW5_Pos              _U_(10)                                              /**< (SECUMOD_RAMACCSR) Access right status for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Position */
#define SECUMOD_RAMACCSR_RW5_Msk              (_U_(0x3) << SECUMOD_RAMACCSR_RW5_Pos)               /**< (SECUMOD_RAMACCSR) Access right status for RAM region [5 Kbytes; 6 Kbytes] (register bank BUREG256b) Mask */
#define SECUMOD_RAMACCSR_RW5(value)           (SECUMOD_RAMACCSR_RW5_Msk & ((value) << SECUMOD_RAMACCSR_RW5_Pos))
#define SECUMOD_RAMACCSR_Msk                  _U_(0x00000FFF)                                      /**< (SECUMOD_RAMACCSR) Register Mask  */


/* -------- SECUMOD_BMPR : (SECUMOD Offset: 0x7C) (R/W 32) Backup Mode Protection Register -------- */
#define SECUMOD_BMPR_DET0_Pos                 _U_(16)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET0_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET0_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET0(value)              (SECUMOD_BMPR_DET0_Msk & ((value) << SECUMOD_BMPR_DET0_Pos))
#define SECUMOD_BMPR_DET1_Pos                 _U_(17)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET1_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET1_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET1(value)              (SECUMOD_BMPR_DET1_Msk & ((value) << SECUMOD_BMPR_DET1_Pos))
#define SECUMOD_BMPR_DET2_Pos                 _U_(18)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET2_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET2_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET2(value)              (SECUMOD_BMPR_DET2_Msk & ((value) << SECUMOD_BMPR_DET2_Pos))
#define SECUMOD_BMPR_DET3_Pos                 _U_(19)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET3_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET3_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET3(value)              (SECUMOD_BMPR_DET3_Msk & ((value) << SECUMOD_BMPR_DET3_Pos))
#define SECUMOD_BMPR_DET4_Pos                 _U_(20)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET4_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET4_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET4(value)              (SECUMOD_BMPR_DET4_Msk & ((value) << SECUMOD_BMPR_DET4_Pos))
#define SECUMOD_BMPR_DET5_Pos                 _U_(21)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET5_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET5_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET5(value)              (SECUMOD_BMPR_DET5_Msk & ((value) << SECUMOD_BMPR_DET5_Pos))
#define SECUMOD_BMPR_DET6_Pos                 _U_(22)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET6_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET6_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET6(value)              (SECUMOD_BMPR_DET6_Msk & ((value) << SECUMOD_BMPR_DET6_Pos))
#define SECUMOD_BMPR_DET7_Pos                 _U_(23)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET7_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET7_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET7(value)              (SECUMOD_BMPR_DET7_Msk & ((value) << SECUMOD_BMPR_DET7_Pos))
#define SECUMOD_BMPR_Msk                      _U_(0x00FF0000)                                      /**< (SECUMOD_BMPR) Register Mask  */

#define SECUMOD_BMPR_DET_Pos                  _U_(16)                                              /**< (SECUMOD_BMPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_BMPR_DET_Msk                  (_U_(0xFF) << SECUMOD_BMPR_DET_Pos)                  /**< (SECUMOD_BMPR Mask) DET */
#define SECUMOD_BMPR_DET(value)               (SECUMOD_BMPR_DET_Msk & ((value) << SECUMOD_BMPR_DET_Pos)) 

/* -------- SECUMOD_NMPR : (SECUMOD Offset: 0x80) (R/W 32) Normal Mode Protection Register -------- */
#define SECUMOD_NMPR_DET0_Pos                 _U_(16)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET0_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET0_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET0(value)              (SECUMOD_NMPR_DET0_Msk & ((value) << SECUMOD_NMPR_DET0_Pos))
#define SECUMOD_NMPR_DET1_Pos                 _U_(17)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET1_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET1_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET1(value)              (SECUMOD_NMPR_DET1_Msk & ((value) << SECUMOD_NMPR_DET1_Pos))
#define SECUMOD_NMPR_DET2_Pos                 _U_(18)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET2_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET2_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET2(value)              (SECUMOD_NMPR_DET2_Msk & ((value) << SECUMOD_NMPR_DET2_Pos))
#define SECUMOD_NMPR_DET3_Pos                 _U_(19)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET3_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET3_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET3(value)              (SECUMOD_NMPR_DET3_Msk & ((value) << SECUMOD_NMPR_DET3_Pos))
#define SECUMOD_NMPR_DET4_Pos                 _U_(20)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET4_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET4_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET4(value)              (SECUMOD_NMPR_DET4_Msk & ((value) << SECUMOD_NMPR_DET4_Pos))
#define SECUMOD_NMPR_DET5_Pos                 _U_(21)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET5_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET5_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET5(value)              (SECUMOD_NMPR_DET5_Msk & ((value) << SECUMOD_NMPR_DET5_Pos))
#define SECUMOD_NMPR_DET6_Pos                 _U_(22)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET6_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET6_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET6(value)              (SECUMOD_NMPR_DET6_Msk & ((value) << SECUMOD_NMPR_DET6_Pos))
#define SECUMOD_NMPR_DET7_Pos                 _U_(23)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET7_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET7_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET7(value)              (SECUMOD_NMPR_DET7_Msk & ((value) << SECUMOD_NMPR_DET7_Pos))
#define SECUMOD_NMPR_Msk                      _U_(0x00FF0000)                                      /**< (SECUMOD_NMPR) Register Mask  */

#define SECUMOD_NMPR_DET_Pos                  _U_(16)                                              /**< (SECUMOD_NMPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_NMPR_DET_Msk                  (_U_(0xFF) << SECUMOD_NMPR_DET_Pos)                  /**< (SECUMOD_NMPR Mask) DET */
#define SECUMOD_NMPR_DET(value)               (SECUMOD_NMPR_DET_Msk & ((value) << SECUMOD_NMPR_DET_Pos)) 

/* -------- SECUMOD_NIEPR : (SECUMOD Offset: 0x84) ( /W 32) Normal Interrupt Enable Protection Register -------- */
#define SECUMOD_NIEPR_DET0_Pos                _U_(16)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET0_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET0_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET0(value)             (SECUMOD_NIEPR_DET0_Msk & ((value) << SECUMOD_NIEPR_DET0_Pos))
#define SECUMOD_NIEPR_DET1_Pos                _U_(17)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET1_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET1_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET1(value)             (SECUMOD_NIEPR_DET1_Msk & ((value) << SECUMOD_NIEPR_DET1_Pos))
#define SECUMOD_NIEPR_DET2_Pos                _U_(18)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET2_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET2_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET2(value)             (SECUMOD_NIEPR_DET2_Msk & ((value) << SECUMOD_NIEPR_DET2_Pos))
#define SECUMOD_NIEPR_DET3_Pos                _U_(19)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET3_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET3_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET3(value)             (SECUMOD_NIEPR_DET3_Msk & ((value) << SECUMOD_NIEPR_DET3_Pos))
#define SECUMOD_NIEPR_DET4_Pos                _U_(20)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET4_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET4_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET4(value)             (SECUMOD_NIEPR_DET4_Msk & ((value) << SECUMOD_NIEPR_DET4_Pos))
#define SECUMOD_NIEPR_DET5_Pos                _U_(21)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET5_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET5_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET5(value)             (SECUMOD_NIEPR_DET5_Msk & ((value) << SECUMOD_NIEPR_DET5_Pos))
#define SECUMOD_NIEPR_DET6_Pos                _U_(22)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET6_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET6_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET6(value)             (SECUMOD_NIEPR_DET6_Msk & ((value) << SECUMOD_NIEPR_DET6_Pos))
#define SECUMOD_NIEPR_DET7_Pos                _U_(23)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET7_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET7_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET7(value)             (SECUMOD_NIEPR_DET7_Msk & ((value) << SECUMOD_NIEPR_DET7_Pos))
#define SECUMOD_NIEPR_Msk                     _U_(0x00FF0000)                                      /**< (SECUMOD_NIEPR) Register Mask  */

#define SECUMOD_NIEPR_DET_Pos                 _U_(16)                                              /**< (SECUMOD_NIEPR Position) PIOBU Intrusion Detector Protection Interrupt Enable */
#define SECUMOD_NIEPR_DET_Msk                 (_U_(0xFF) << SECUMOD_NIEPR_DET_Pos)                 /**< (SECUMOD_NIEPR Mask) DET */
#define SECUMOD_NIEPR_DET(value)              (SECUMOD_NIEPR_DET_Msk & ((value) << SECUMOD_NIEPR_DET_Pos)) 

/* -------- SECUMOD_NIDPR : (SECUMOD Offset: 0x88) ( /W 32) Normal Interrupt Disable Protection Register -------- */
#define SECUMOD_NIDPR_DET0_Pos                _U_(16)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET0_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET0_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET0(value)             (SECUMOD_NIDPR_DET0_Msk & ((value) << SECUMOD_NIDPR_DET0_Pos))
#define SECUMOD_NIDPR_DET1_Pos                _U_(17)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET1_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET1_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET1(value)             (SECUMOD_NIDPR_DET1_Msk & ((value) << SECUMOD_NIDPR_DET1_Pos))
#define SECUMOD_NIDPR_DET2_Pos                _U_(18)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET2_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET2_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET2(value)             (SECUMOD_NIDPR_DET2_Msk & ((value) << SECUMOD_NIDPR_DET2_Pos))
#define SECUMOD_NIDPR_DET3_Pos                _U_(19)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET3_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET3_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET3(value)             (SECUMOD_NIDPR_DET3_Msk & ((value) << SECUMOD_NIDPR_DET3_Pos))
#define SECUMOD_NIDPR_DET4_Pos                _U_(20)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET4_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET4_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET4(value)             (SECUMOD_NIDPR_DET4_Msk & ((value) << SECUMOD_NIDPR_DET4_Pos))
#define SECUMOD_NIDPR_DET5_Pos                _U_(21)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET5_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET5_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET5(value)             (SECUMOD_NIDPR_DET5_Msk & ((value) << SECUMOD_NIDPR_DET5_Pos))
#define SECUMOD_NIDPR_DET6_Pos                _U_(22)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET6_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET6_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET6(value)             (SECUMOD_NIDPR_DET6_Msk & ((value) << SECUMOD_NIDPR_DET6_Pos))
#define SECUMOD_NIDPR_DET7_Pos                _U_(23)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET7_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET7_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET7(value)             (SECUMOD_NIDPR_DET7_Msk & ((value) << SECUMOD_NIDPR_DET7_Pos))
#define SECUMOD_NIDPR_Msk                     _U_(0x00FF0000)                                      /**< (SECUMOD_NIDPR) Register Mask  */

#define SECUMOD_NIDPR_DET_Pos                 _U_(16)                                              /**< (SECUMOD_NIDPR Position) PIOBU Intrusion Detector Protection Interrupt Disable */
#define SECUMOD_NIDPR_DET_Msk                 (_U_(0xFF) << SECUMOD_NIDPR_DET_Pos)                 /**< (SECUMOD_NIDPR Mask) DET */
#define SECUMOD_NIDPR_DET(value)              (SECUMOD_NIDPR_DET_Msk & ((value) << SECUMOD_NIDPR_DET_Pos)) 

/* -------- SECUMOD_NIMPR : (SECUMOD Offset: 0x8C) ( R/ 32) Normal Interrupt Mask Protection Register -------- */
#define SECUMOD_NIMPR_DET0_Pos                _U_(16)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET0_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET0_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET0(value)             (SECUMOD_NIMPR_DET0_Msk & ((value) << SECUMOD_NIMPR_DET0_Pos))
#define SECUMOD_NIMPR_DET1_Pos                _U_(17)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET1_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET1_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET1(value)             (SECUMOD_NIMPR_DET1_Msk & ((value) << SECUMOD_NIMPR_DET1_Pos))
#define SECUMOD_NIMPR_DET2_Pos                _U_(18)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET2_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET2_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET2(value)             (SECUMOD_NIMPR_DET2_Msk & ((value) << SECUMOD_NIMPR_DET2_Pos))
#define SECUMOD_NIMPR_DET3_Pos                _U_(19)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET3_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET3_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET3(value)             (SECUMOD_NIMPR_DET3_Msk & ((value) << SECUMOD_NIMPR_DET3_Pos))
#define SECUMOD_NIMPR_DET4_Pos                _U_(20)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET4_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET4_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET4(value)             (SECUMOD_NIMPR_DET4_Msk & ((value) << SECUMOD_NIMPR_DET4_Pos))
#define SECUMOD_NIMPR_DET5_Pos                _U_(21)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET5_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET5_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET5(value)             (SECUMOD_NIMPR_DET5_Msk & ((value) << SECUMOD_NIMPR_DET5_Pos))
#define SECUMOD_NIMPR_DET6_Pos                _U_(22)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET6_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET6_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET6(value)             (SECUMOD_NIMPR_DET6_Msk & ((value) << SECUMOD_NIMPR_DET6_Pos))
#define SECUMOD_NIMPR_DET7_Pos                _U_(23)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET7_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET7_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET7(value)             (SECUMOD_NIMPR_DET7_Msk & ((value) << SECUMOD_NIMPR_DET7_Pos))
#define SECUMOD_NIMPR_Msk                     _U_(0x00FF0000)                                      /**< (SECUMOD_NIMPR) Register Mask  */

#define SECUMOD_NIMPR_DET_Pos                 _U_(16)                                              /**< (SECUMOD_NIMPR Position) PIOBU Intrusion Detector Protection Interrupt Mask */
#define SECUMOD_NIMPR_DET_Msk                 (_U_(0xFF) << SECUMOD_NIMPR_DET_Pos)                 /**< (SECUMOD_NIMPR Mask) DET */
#define SECUMOD_NIMPR_DET(value)              (SECUMOD_NIMPR_DET_Msk & ((value) << SECUMOD_NIMPR_DET_Pos)) 

/* -------- SECUMOD_WKPR : (SECUMOD Offset: 0x90) (R/W 32) Wakeup Protection Register -------- */
#define SECUMOD_WKPR_DET0_Pos                 _U_(16)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET0_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET0_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET0(value)              (SECUMOD_WKPR_DET0_Msk & ((value) << SECUMOD_WKPR_DET0_Pos))
#define SECUMOD_WKPR_DET1_Pos                 _U_(17)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET1_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET1_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET1(value)              (SECUMOD_WKPR_DET1_Msk & ((value) << SECUMOD_WKPR_DET1_Pos))
#define SECUMOD_WKPR_DET2_Pos                 _U_(18)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET2_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET2_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET2(value)              (SECUMOD_WKPR_DET2_Msk & ((value) << SECUMOD_WKPR_DET2_Pos))
#define SECUMOD_WKPR_DET3_Pos                 _U_(19)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET3_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET3_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET3(value)              (SECUMOD_WKPR_DET3_Msk & ((value) << SECUMOD_WKPR_DET3_Pos))
#define SECUMOD_WKPR_DET4_Pos                 _U_(20)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET4_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET4_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET4(value)              (SECUMOD_WKPR_DET4_Msk & ((value) << SECUMOD_WKPR_DET4_Pos))
#define SECUMOD_WKPR_DET5_Pos                 _U_(21)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET5_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET5_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET5(value)              (SECUMOD_WKPR_DET5_Msk & ((value) << SECUMOD_WKPR_DET5_Pos))
#define SECUMOD_WKPR_DET6_Pos                 _U_(22)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET6_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET6_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET6(value)              (SECUMOD_WKPR_DET6_Msk & ((value) << SECUMOD_WKPR_DET6_Pos))
#define SECUMOD_WKPR_DET7_Pos                 _U_(23)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET7_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET7_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET7(value)              (SECUMOD_WKPR_DET7_Msk & ((value) << SECUMOD_WKPR_DET7_Pos))
#define SECUMOD_WKPR_Msk                      _U_(0x00FF0000)                                      /**< (SECUMOD_WKPR) Register Mask  */

#define SECUMOD_WKPR_DET_Pos                  _U_(16)                                              /**< (SECUMOD_WKPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_WKPR_DET_Msk                  (_U_(0xFF) << SECUMOD_WKPR_DET_Pos)                  /**< (SECUMOD_WKPR Mask) DET */
#define SECUMOD_WKPR_DET(value)               (SECUMOD_WKPR_DET_Msk & ((value) << SECUMOD_WKPR_DET_Pos)) 

/** \brief SECUMOD register offsets definitions */
#define SECUMOD_CR_REG_OFST            (0x00)              /**< (SECUMOD_CR) Control Register Offset */
#define SECUMOD_SYSR_REG_OFST          (0x04)              /**< (SECUMOD_SYSR) System Status Register Offset */
#define SECUMOD_SR_REG_OFST            (0x08)              /**< (SECUMOD_SR) Status Register Offset */
#define SECUMOD_SCR_REG_OFST           (0x10)              /**< (SECUMOD_SCR) Status Clear Register Offset */
#define SECUMOD_RAMRDY_REG_OFST        (0x14)              /**< (SECUMOD_RAMRDY) RAM Access Ready Register Offset */
#define SECUMOD_PIOBU_REG_OFST         (0x18)              /**< (SECUMOD_PIOBU) PIO Backup Register Offset */
#define SECUMOD_PIOBU0_REG_OFST        (0x18)              /**< (SECUMOD_PIOBU0) PIO Backup Register Offset */
#define SECUMOD_PIOBU1_REG_OFST        (0x1C)              /**< (SECUMOD_PIOBU1) PIO Backup Register Offset */
#define SECUMOD_PIOBU2_REG_OFST        (0x20)              /**< (SECUMOD_PIOBU2) PIO Backup Register Offset */
#define SECUMOD_PIOBU3_REG_OFST        (0x24)              /**< (SECUMOD_PIOBU3) PIO Backup Register Offset */
#define SECUMOD_PIOBU4_REG_OFST        (0x28)              /**< (SECUMOD_PIOBU4) PIO Backup Register Offset */
#define SECUMOD_PIOBU5_REG_OFST        (0x2C)              /**< (SECUMOD_PIOBU5) PIO Backup Register Offset */
#define SECUMOD_PIOBU6_REG_OFST        (0x30)              /**< (SECUMOD_PIOBU6) PIO Backup Register Offset */
#define SECUMOD_PIOBU7_REG_OFST        (0x34)              /**< (SECUMOD_PIOBU7) PIO Backup Register Offset */
#define SECUMOD_JTAGCR_REG_OFST        (0x68)              /**< (SECUMOD_JTAGCR) JTAG Protection Control Register Offset */
#define SECUMOD_SCRKEY_REG_OFST        (0x70)              /**< (SECUMOD_SCRKEY) Scrambling Key Register Offset */
#define SECUMOD_RAMACC_REG_OFST        (0x74)              /**< (SECUMOD_RAMACC) RAM Access Rights Register Offset */
#define SECUMOD_RAMACCSR_REG_OFST      (0x78)              /**< (SECUMOD_RAMACCSR) RAM Access Rights Status Register Offset */
#define SECUMOD_BMPR_REG_OFST          (0x7C)              /**< (SECUMOD_BMPR) Backup Mode Protection Register Offset */
#define SECUMOD_NMPR_REG_OFST          (0x80)              /**< (SECUMOD_NMPR) Normal Mode Protection Register Offset */
#define SECUMOD_NIEPR_REG_OFST         (0x84)              /**< (SECUMOD_NIEPR) Normal Interrupt Enable Protection Register Offset */
#define SECUMOD_NIDPR_REG_OFST         (0x88)              /**< (SECUMOD_NIDPR) Normal Interrupt Disable Protection Register Offset */
#define SECUMOD_NIMPR_REG_OFST         (0x8C)              /**< (SECUMOD_NIMPR) Normal Interrupt Mask Protection Register Offset */
#define SECUMOD_WKPR_REG_OFST          (0x90)              /**< (SECUMOD_WKPR) Wakeup Protection Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SECUMOD register API structure */
typedef struct
{
  __O   uint32_t                       SECUMOD_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SECUMOD_SYSR;       /**< Offset: 0x04 (R/W  32) System Status Register */
  __I   uint32_t                       SECUMOD_SR;         /**< Offset: 0x08 (R/   32) Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       SECUMOD_SCR;        /**< Offset: 0x10 ( /W  32) Status Clear Register */
  __I   uint32_t                       SECUMOD_RAMRDY;     /**< Offset: 0x14 (R/   32) RAM Access Ready Register */
  __IO  uint32_t                       SECUMOD_PIOBU[8];   /**< Offset: 0x18 (R/W  32) PIO Backup Register */
  __I   uint8_t                        Reserved2[0x30];
  __IO  uint32_t                       SECUMOD_JTAGCR;     /**< Offset: 0x68 (R/W  32) JTAG Protection Control Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       SECUMOD_SCRKEY;     /**< Offset: 0x70 (R/W  32) Scrambling Key Register */
  __IO  uint32_t                       SECUMOD_RAMACC;     /**< Offset: 0x74 (R/W  32) RAM Access Rights Register */
  __IO  uint32_t                       SECUMOD_RAMACCSR;   /**< Offset: 0x78 (R/W  32) RAM Access Rights Status Register */
  __IO  uint32_t                       SECUMOD_BMPR;       /**< Offset: 0x7C (R/W  32) Backup Mode Protection Register */
  __IO  uint32_t                       SECUMOD_NMPR;       /**< Offset: 0x80 (R/W  32) Normal Mode Protection Register */
  __O   uint32_t                       SECUMOD_NIEPR;      /**< Offset: 0x84 ( /W  32) Normal Interrupt Enable Protection Register */
  __O   uint32_t                       SECUMOD_NIDPR;      /**< Offset: 0x88 ( /W  32) Normal Interrupt Disable Protection Register */
  __I   uint32_t                       SECUMOD_NIMPR;      /**< Offset: 0x8C (R/   32) Normal Interrupt Mask Protection Register */
  __IO  uint32_t                       SECUMOD_WKPR;       /**< Offset: 0x90 (R/W  32) Wakeup Protection Register */
} secumod_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SECUMOD_COMPONENT_H_ */
