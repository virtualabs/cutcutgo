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

/* file generated from device description version 2021-07-26T12:51:16Z */
#ifndef _SAMA7G_SECUMOD_COMPONENT_H_
#define _SAMA7G_SECUMOD_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SECUMOD                                      */
/* ************************************************************************** */

/* -------- SECUMOD_CR : (SECUMOD Offset: 0x00) ( /W 32) Control Register -------- */
#define SECUMOD_CR_BACKUP_Pos                 _U_(0)                                               /**< (SECUMOD_CR) Backup Mode Position */
#define SECUMOD_CR_BACKUP_Msk                 (_U_(0x1) << SECUMOD_CR_BACKUP_Pos)                  /**< (SECUMOD_CR) Backup Mode Mask */
#define SECUMOD_CR_BACKUP(value)              (SECUMOD_CR_BACKUP_Msk & ((value) << SECUMOD_CR_BACKUP_Pos))
#define   SECUMOD_CR_BACKUP_0_Val             _U_(0x0)                                             /**< (SECUMOD_CR) No effect.  */
#define   SECUMOD_CR_BACKUP_1_Val             _U_(0x1)                                             /**< (SECUMOD_CR) Switches to Backup mode.  */
#define SECUMOD_CR_BACKUP_0                   (SECUMOD_CR_BACKUP_0_Val << SECUMOD_CR_BACKUP_Pos)   /**< (SECUMOD_CR) No effect. Position  */
#define SECUMOD_CR_BACKUP_1                   (SECUMOD_CR_BACKUP_1_Val << SECUMOD_CR_BACKUP_Pos)   /**< (SECUMOD_CR) Switches to Backup mode. Position  */
#define SECUMOD_CR_NORMAL_Pos                 _U_(1)                                               /**< (SECUMOD_CR) Normal Mode Position */
#define SECUMOD_CR_NORMAL_Msk                 (_U_(0x1) << SECUMOD_CR_NORMAL_Pos)                  /**< (SECUMOD_CR) Normal Mode Mask */
#define SECUMOD_CR_NORMAL(value)              (SECUMOD_CR_NORMAL_Msk & ((value) << SECUMOD_CR_NORMAL_Pos))
#define   SECUMOD_CR_NORMAL_0_Val             _U_(0x0)                                             /**< (SECUMOD_CR) No effect.  */
#define   SECUMOD_CR_NORMAL_1_Val             _U_(0x1)                                             /**< (SECUMOD_CR) Switches to Normal mode.  */
#define SECUMOD_CR_NORMAL_0                   (SECUMOD_CR_NORMAL_0_Val << SECUMOD_CR_NORMAL_Pos)   /**< (SECUMOD_CR) No effect. Position  */
#define SECUMOD_CR_NORMAL_1                   (SECUMOD_CR_NORMAL_1_Val << SECUMOD_CR_NORMAL_Pos)   /**< (SECUMOD_CR) Switches to Normal mode. Position  */
#define SECUMOD_CR_SWPROT_Pos                 _U_(2)                                               /**< (SECUMOD_CR) Software Protection Position */
#define SECUMOD_CR_SWPROT_Msk                 (_U_(0x1) << SECUMOD_CR_SWPROT_Pos)                  /**< (SECUMOD_CR) Software Protection Mask */
#define SECUMOD_CR_SWPROT(value)              (SECUMOD_CR_SWPROT_Msk & ((value) << SECUMOD_CR_SWPROT_Pos))
#define   SECUMOD_CR_SWPROT_0_Val             _U_(0x0)                                             /**< (SECUMOD_CR) No effect.  */
#define   SECUMOD_CR_SWPROT_1_Val             _U_(0x1)                                             /**< (SECUMOD_CR) Starts the BUSRAM4KB and BUREG256b Clear content.  */
#define SECUMOD_CR_SWPROT_0                   (SECUMOD_CR_SWPROT_0_Val << SECUMOD_CR_SWPROT_Pos)   /**< (SECUMOD_CR) No effect. Position  */
#define SECUMOD_CR_SWPROT_1                   (SECUMOD_CR_SWPROT_1_Val << SECUMOD_CR_SWPROT_Pos)   /**< (SECUMOD_CR) Starts the BUSRAM4KB and BUREG256b Clear content. Position  */
#define SECUMOD_CR_NIMP_EN_Pos                _U_(3)                                               /**< (SECUMOD_CR) Non-Imprinting Enable Position */
#define SECUMOD_CR_NIMP_EN_Msk                (_U_(0x3) << SECUMOD_CR_NIMP_EN_Pos)                 /**< (SECUMOD_CR) Non-Imprinting Enable Mask */
#define SECUMOD_CR_NIMP_EN(value)             (SECUMOD_CR_NIMP_EN_Msk & ((value) << SECUMOD_CR_NIMP_EN_Pos))
#define   SECUMOD_CR_NIMP_EN_00_Val           _U_(0x0)                                             /**< (SECUMOD_CR) No effect.  */
#define   SECUMOD_CR_NIMP_EN_01_Val           _U_(0x1)                                             /**< (SECUMOD_CR) The non-imprinting mechanism is authorized to start when core power is off or ahb reset is asserted.  */
#define   SECUMOD_CR_NIMP_EN_10_Val           _U_(0x2)                                             /**< (SECUMOD_CR) The non-imprinting mechanism is disabled (default).  */
#define   SECUMOD_CR_NIMP_EN_11_Val           _U_(0x3)                                             /**< (SECUMOD_CR) The non-imprinting mechanism is authorized to start when core power is off or ahb reset is asserted or cpu is in idle.  */
#define SECUMOD_CR_NIMP_EN_00                 (SECUMOD_CR_NIMP_EN_00_Val << SECUMOD_CR_NIMP_EN_Pos) /**< (SECUMOD_CR) No effect. Position  */
#define SECUMOD_CR_NIMP_EN_01                 (SECUMOD_CR_NIMP_EN_01_Val << SECUMOD_CR_NIMP_EN_Pos) /**< (SECUMOD_CR) The non-imprinting mechanism is authorized to start when core power is off or ahb reset is asserted. Position  */
#define SECUMOD_CR_NIMP_EN_10                 (SECUMOD_CR_NIMP_EN_10_Val << SECUMOD_CR_NIMP_EN_Pos) /**< (SECUMOD_CR) The non-imprinting mechanism is disabled (default). Position  */
#define SECUMOD_CR_NIMP_EN_11                 (SECUMOD_CR_NIMP_EN_11_Val << SECUMOD_CR_NIMP_EN_Pos) /**< (SECUMOD_CR) The non-imprinting mechanism is authorized to start when core power is off or ahb reset is asserted or cpu is in idle. Position  */
#define SECUMOD_CR_AUTOBKP_Pos                _U_(5)                                               /**< (SECUMOD_CR) Automatic Normal to Backup Mode Switching Position */
#define SECUMOD_CR_AUTOBKP_Msk                (_U_(0x3) << SECUMOD_CR_AUTOBKP_Pos)                 /**< (SECUMOD_CR) Automatic Normal to Backup Mode Switching Mask */
#define SECUMOD_CR_AUTOBKP(value)             (SECUMOD_CR_AUTOBKP_Msk & ((value) << SECUMOD_CR_AUTOBKP_Pos))
#define   SECUMOD_CR_AUTOBKP_01_Val           _U_(0x1)                                             /**< (SECUMOD_CR) When in Normal mode, the powerdown of the core supply automatically switches to Backup mode simultaneously with core to backup isolation barrier activation (default).  */
#define   SECUMOD_CR_AUTOBKP_10_Val           _U_(0x2)                                             /**< (SECUMOD_CR) When in Normal mode, the software must switch to Backup mode before powering down the core.  */
#define SECUMOD_CR_AUTOBKP_01                 (SECUMOD_CR_AUTOBKP_01_Val << SECUMOD_CR_AUTOBKP_Pos) /**< (SECUMOD_CR) When in Normal mode, the powerdown of the core supply automatically switches to Backup mode simultaneously with core to backup isolation barrier activation (default). Position  */
#define SECUMOD_CR_AUTOBKP_10                 (SECUMOD_CR_AUTOBKP_10_Val << SECUMOD_CR_AUTOBKP_Pos) /**< (SECUMOD_CR) When in Normal mode, the software must switch to Backup mode before powering down the core. Position  */
#define SECUMOD_CR_RESERVED_Pos               _U_(7)                                               /**< (SECUMOD_CR) Reserved for test (write zero) Position */
#define SECUMOD_CR_RESERVED_Msk               (_U_(0x1) << SECUMOD_CR_RESERVED_Pos)                /**< (SECUMOD_CR) Reserved for test (write zero) Mask */
#define SECUMOD_CR_RESERVED(value)            (SECUMOD_CR_RESERVED_Msk & ((value) << SECUMOD_CR_RESERVED_Pos))
#define SECUMOD_CR_SCRAMB_Pos                 _U_(9)                                               /**< (SECUMOD_CR) Memory Scrambling Enable Position */
#define SECUMOD_CR_SCRAMB_Msk                 (_U_(0x3) << SECUMOD_CR_SCRAMB_Pos)                  /**< (SECUMOD_CR) Memory Scrambling Enable Mask */
#define SECUMOD_CR_SCRAMB(value)              (SECUMOD_CR_SCRAMB_Msk & ((value) << SECUMOD_CR_SCRAMB_Pos))
#define   SECUMOD_CR_SCRAMB_01_Val            _U_(0x1)                                             /**< (SECUMOD_CR) Memories are scrambled (default).  */
#define   SECUMOD_CR_SCRAMB_10_Val            _U_(0x2)                                             /**< (SECUMOD_CR) Memories are not scrambled.  */
#define SECUMOD_CR_SCRAMB_01                  (SECUMOD_CR_SCRAMB_01_Val << SECUMOD_CR_SCRAMB_Pos)  /**< (SECUMOD_CR) Memories are scrambled (default). Position  */
#define SECUMOD_CR_SCRAMB_10                  (SECUMOD_CR_SCRAMB_10_Val << SECUMOD_CR_SCRAMB_Pos)  /**< (SECUMOD_CR) Memories are not scrambled. Position  */
#define SECUMOD_CR_KEY_Pos                    _U_(16)                                              /**< (SECUMOD_CR) Password Position */
#define SECUMOD_CR_KEY_Msk                    (_U_(0xFFFF) << SECUMOD_CR_KEY_Pos)                  /**< (SECUMOD_CR) Password Mask */
#define SECUMOD_CR_KEY(value)                 (SECUMOD_CR_KEY_Msk & ((value) << SECUMOD_CR_KEY_Pos))
#define SECUMOD_CR_Msk                        _U_(0xFFFF06FF)                                      /**< (SECUMOD_CR) Register Mask  */


/* -------- SECUMOD_SYSR : (SECUMOD Offset: 0x04) (R/W 32) System Status Register -------- */
#define SECUMOD_SYSR_RESETVALUE               _U_(0xD4)                                            /**<  (SECUMOD_SYSR) System Status Register  Reset Value */

#define SECUMOD_SYSR_ERASE_DONE_Pos           _U_(0)                                               /**< (SECUMOD_SYSR) Erasable Memories State (RW) Position */
#define SECUMOD_SYSR_ERASE_DONE_Msk           (_U_(0x1) << SECUMOD_SYSR_ERASE_DONE_Pos)            /**< (SECUMOD_SYSR) Erasable Memories State (RW) Mask */
#define SECUMOD_SYSR_ERASE_DONE(value)        (SECUMOD_SYSR_ERASE_DONE_Msk & ((value) << SECUMOD_SYSR_ERASE_DONE_Pos))
#define   SECUMOD_SYSR_ERASE_DONE_0_Val       _U_(0x0)                                             /**< (SECUMOD_SYSR) Secure memories content has not been erased since the last clear.  */
#define   SECUMOD_SYSR_ERASE_DONE_1_Val       _U_(0x1)                                             /**< (SECUMOD_SYSR) Secure memories content has been erased since the last clear. The user must write '1' into this bit to clear this flag. Note that not clearing this flag does not prevent the next erase processes. This flag also activates the SECURAM interrupt line as long as it is not cleared.  */
#define SECUMOD_SYSR_ERASE_DONE_0             (SECUMOD_SYSR_ERASE_DONE_0_Val << SECUMOD_SYSR_ERASE_DONE_Pos) /**< (SECUMOD_SYSR) Secure memories content has not been erased since the last clear. Position  */
#define SECUMOD_SYSR_ERASE_DONE_1             (SECUMOD_SYSR_ERASE_DONE_1_Val << SECUMOD_SYSR_ERASE_DONE_Pos) /**< (SECUMOD_SYSR) Secure memories content has been erased since the last clear. The user must write '1' into this bit to clear this flag. Note that not clearing this flag does not prevent the next erase processes. This flag also activates the SECURAM interrupt line as long as it is not cleared. Position  */
#define SECUMOD_SYSR_ERASE_ON_Pos             _U_(1)                                               /**< (SECUMOD_SYSR) Erase Process Ongoing (RO) Position */
#define SECUMOD_SYSR_ERASE_ON_Msk             (_U_(0x1) << SECUMOD_SYSR_ERASE_ON_Pos)              /**< (SECUMOD_SYSR) Erase Process Ongoing (RO) Mask */
#define SECUMOD_SYSR_ERASE_ON(value)          (SECUMOD_SYSR_ERASE_ON_Msk & ((value) << SECUMOD_SYSR_ERASE_ON_Pos))
#define   SECUMOD_SYSR_ERASE_ON_0_Val         _U_(0x0)                                             /**< (SECUMOD_SYSR) Erase automaton is not running.  */
#define   SECUMOD_SYSR_ERASE_ON_1_Val         _U_(0x1)                                             /**< (SECUMOD_SYSR) Erase automaton is currently running, memories are not accessible.  */
#define SECUMOD_SYSR_ERASE_ON_0               (SECUMOD_SYSR_ERASE_ON_0_Val << SECUMOD_SYSR_ERASE_ON_Pos) /**< (SECUMOD_SYSR) Erase automaton is not running. Position  */
#define SECUMOD_SYSR_ERASE_ON_1               (SECUMOD_SYSR_ERASE_ON_1_Val << SECUMOD_SYSR_ERASE_ON_Pos) /**< (SECUMOD_SYSR) Erase automaton is currently running, memories are not accessible. Position  */
#define SECUMOD_SYSR_BACKUP_Pos               _U_(2)                                               /**< (SECUMOD_SYSR) Backup Mode (RO) Position */
#define SECUMOD_SYSR_BACKUP_Msk               (_U_(0x1) << SECUMOD_SYSR_BACKUP_Pos)                /**< (SECUMOD_SYSR) Backup Mode (RO) Mask */
#define SECUMOD_SYSR_BACKUP(value)            (SECUMOD_SYSR_BACKUP_Msk & ((value) << SECUMOD_SYSR_BACKUP_Pos))
#define   SECUMOD_SYSR_BACKUP_0_Val           _U_(0x0)                                             /**< (SECUMOD_SYSR) Normal mode active.  */
#define   SECUMOD_SYSR_BACKUP_1_Val           _U_(0x1)                                             /**< (SECUMOD_SYSR) Backup mode active.  */
#define SECUMOD_SYSR_BACKUP_0                 (SECUMOD_SYSR_BACKUP_0_Val << SECUMOD_SYSR_BACKUP_Pos) /**< (SECUMOD_SYSR) Normal mode active. Position  */
#define SECUMOD_SYSR_BACKUP_1                 (SECUMOD_SYSR_BACKUP_1_Val << SECUMOD_SYSR_BACKUP_Pos) /**< (SECUMOD_SYSR) Backup mode active. Position  */
#define SECUMOD_SYSR_SWKUP_Pos                _U_(3)                                               /**< (SECUMOD_SYSR) SWKUP State (RO) Position */
#define SECUMOD_SYSR_SWKUP_Msk                (_U_(0x1) << SECUMOD_SYSR_SWKUP_Pos)                 /**< (SECUMOD_SYSR) SWKUP State (RO) Mask */
#define SECUMOD_SYSR_SWKUP(value)             (SECUMOD_SYSR_SWKUP_Msk & ((value) << SECUMOD_SYSR_SWKUP_Pos))
#define   SECUMOD_SYSR_SWKUP_0_Val            _U_(0x0)                                             /**< (SECUMOD_SYSR) No SWKUP signal sent since the last clear.  */
#define   SECUMOD_SYSR_SWKUP_1_Val            _U_(0x1)                                             /**< (SECUMOD_SYSR) SWKUP signal has been sent since the last clear.  */
#define SECUMOD_SYSR_SWKUP_0                  (SECUMOD_SYSR_SWKUP_0_Val << SECUMOD_SYSR_SWKUP_Pos) /**< (SECUMOD_SYSR) No SWKUP signal sent since the last clear. Position  */
#define SECUMOD_SYSR_SWKUP_1                  (SECUMOD_SYSR_SWKUP_1_Val << SECUMOD_SYSR_SWKUP_Pos) /**< (SECUMOD_SYSR) SWKUP signal has been sent since the last clear. Position  */
#define SECUMOD_SYSR_NIMP_EN_Pos              _U_(5)                                               /**< (SECUMOD_SYSR) Non-Imprinting Enabled (RO) Position */
#define SECUMOD_SYSR_NIMP_EN_Msk              (_U_(0x1) << SECUMOD_SYSR_NIMP_EN_Pos)               /**< (SECUMOD_SYSR) Non-Imprinting Enabled (RO) Mask */
#define SECUMOD_SYSR_NIMP_EN(value)           (SECUMOD_SYSR_NIMP_EN_Msk & ((value) << SECUMOD_SYSR_NIMP_EN_Pos))
#define   SECUMOD_SYSR_NIMP_EN_0_Val          _U_(0x0)                                             /**< (SECUMOD_SYSR) Disabled.  */
#define   SECUMOD_SYSR_NIMP_EN_1_Val          _U_(0x1)                                             /**< (SECUMOD_SYSR) Enabled.  */
#define SECUMOD_SYSR_NIMP_EN_0                (SECUMOD_SYSR_NIMP_EN_0_Val << SECUMOD_SYSR_NIMP_EN_Pos) /**< (SECUMOD_SYSR) Disabled. Position  */
#define SECUMOD_SYSR_NIMP_EN_1                (SECUMOD_SYSR_NIMP_EN_1_Val << SECUMOD_SYSR_NIMP_EN_Pos) /**< (SECUMOD_SYSR) Enabled. Position  */
#define SECUMOD_SYSR_AUTOBKP_Pos              _U_(6)                                               /**< (SECUMOD_SYSR) Automatic Backup Mode Enabled (RO) Position */
#define SECUMOD_SYSR_AUTOBKP_Msk              (_U_(0x1) << SECUMOD_SYSR_AUTOBKP_Pos)               /**< (SECUMOD_SYSR) Automatic Backup Mode Enabled (RO) Mask */
#define SECUMOD_SYSR_AUTOBKP(value)           (SECUMOD_SYSR_AUTOBKP_Msk & ((value) << SECUMOD_SYSR_AUTOBKP_Pos))
#define   SECUMOD_SYSR_AUTOBKP_0_Val          _U_(0x0)                                             /**< (SECUMOD_SYSR) Disabled.  */
#define   SECUMOD_SYSR_AUTOBKP_1_Val          _U_(0x1)                                             /**< (SECUMOD_SYSR) Enabled.  */
#define SECUMOD_SYSR_AUTOBKP_0                (SECUMOD_SYSR_AUTOBKP_0_Val << SECUMOD_SYSR_AUTOBKP_Pos) /**< (SECUMOD_SYSR) Disabled. Position  */
#define SECUMOD_SYSR_AUTOBKP_1                (SECUMOD_SYSR_AUTOBKP_1_Val << SECUMOD_SYSR_AUTOBKP_Pos) /**< (SECUMOD_SYSR) Enabled. Position  */
#define SECUMOD_SYSR_SCRAMB_Pos               _U_(7)                                               /**< (SECUMOD_SYSR) Scrambling Enabled (RO) Position */
#define SECUMOD_SYSR_SCRAMB_Msk               (_U_(0x1) << SECUMOD_SYSR_SCRAMB_Pos)                /**< (SECUMOD_SYSR) Scrambling Enabled (RO) Mask */
#define SECUMOD_SYSR_SCRAMB(value)            (SECUMOD_SYSR_SCRAMB_Msk & ((value) << SECUMOD_SYSR_SCRAMB_Pos))
#define   SECUMOD_SYSR_SCRAMB_0_Val           _U_(0x0)                                             /**< (SECUMOD_SYSR) Disabled.  */
#define   SECUMOD_SYSR_SCRAMB_1_Val           _U_(0x1)                                             /**< (SECUMOD_SYSR) Enabled.  */
#define SECUMOD_SYSR_SCRAMB_0                 (SECUMOD_SYSR_SCRAMB_0_Val << SECUMOD_SYSR_SCRAMB_Pos) /**< (SECUMOD_SYSR) Disabled. Position  */
#define SECUMOD_SYSR_SCRAMB_1                 (SECUMOD_SYSR_SCRAMB_1_Val << SECUMOD_SYSR_SCRAMB_Pos) /**< (SECUMOD_SYSR) Enabled. Position  */
#define SECUMOD_SYSR_NIMP_IDLE_Pos            _U_(8)                                               /**< (SECUMOD_SYSR) "CPU in idle" preliminary condition for non-imprinting (RO) Position */
#define SECUMOD_SYSR_NIMP_IDLE_Msk            (_U_(0x1) << SECUMOD_SYSR_NIMP_IDLE_Pos)             /**< (SECUMOD_SYSR) "CPU in idle" preliminary condition for non-imprinting (RO) Mask */
#define SECUMOD_SYSR_NIMP_IDLE(value)         (SECUMOD_SYSR_NIMP_IDLE_Msk & ((value) << SECUMOD_SYSR_NIMP_IDLE_Pos))
#define   SECUMOD_SYSR_NIMP_IDLE_0_Val        _U_(0x0)                                             /**< (SECUMOD_SYSR) Idle is not part of preliminary conditions list.  */
#define   SECUMOD_SYSR_NIMP_IDLE_1_Val        _U_(0x1)                                             /**< (SECUMOD_SYSR) Idle is part of preliminary conditions list.  */
#define SECUMOD_SYSR_NIMP_IDLE_0              (SECUMOD_SYSR_NIMP_IDLE_0_Val << SECUMOD_SYSR_NIMP_IDLE_Pos) /**< (SECUMOD_SYSR) Idle is not part of preliminary conditions list. Position  */
#define SECUMOD_SYSR_NIMP_IDLE_1              (SECUMOD_SYSR_NIMP_IDLE_1_Val << SECUMOD_SYSR_NIMP_IDLE_Pos) /**< (SECUMOD_SYSR) Idle is part of preliminary conditions list. Position  */
#define SECUMOD_SYSR_Msk                      _U_(0x000001EF)                                      /**< (SECUMOD_SYSR) Register Mask  */


/* -------- SECUMOD_SR : (SECUMOD Offset: 0x08) ( R/ 32) Status Register -------- */
#define SECUMOD_SR_RESETVALUE                 _U_(0x00)                                            /**<  (SECUMOD_SR) Status Register  Reset Value */

#define SECUMOD_SR_DBLFM_Pos                  _U_(1)                                               /**< (SECUMOD_SR) Double Frequency Monitor Position */
#define SECUMOD_SR_DBLFM_Msk                  (_U_(0x1) << SECUMOD_SR_DBLFM_Pos)                   /**< (SECUMOD_SR) Double Frequency Monitor Mask */
#define SECUMOD_SR_DBLFM(value)               (SECUMOD_SR_DBLFM_Msk & ((value) << SECUMOD_SR_DBLFM_Pos))
#define SECUMOD_SR_TST_Pos                    _U_(2)                                               /**< (SECUMOD_SR) Test Pin Monitor Position */
#define SECUMOD_SR_TST_Msk                    (_U_(0x1) << SECUMOD_SR_TST_Pos)                     /**< (SECUMOD_SR) Test Pin Monitor Mask */
#define SECUMOD_SR_TST(value)                 (SECUMOD_SR_TST_Msk & ((value) << SECUMOD_SR_TST_Pos))
#define SECUMOD_SR_JTAG_Pos                   _U_(3)                                               /**< (SECUMOD_SR) JTAG Pins Monitor Position */
#define SECUMOD_SR_JTAG_Msk                   (_U_(0x1) << SECUMOD_SR_JTAG_Pos)                    /**< (SECUMOD_SR) JTAG Pins Monitor Mask */
#define SECUMOD_SR_JTAG(value)                (SECUMOD_SR_JTAG_Msk & ((value) << SECUMOD_SR_JTAG_Pos))
#define SECUMOD_SR_REGANA_Pos                 _U_(4)                                               /**< (SECUMOD_SR) VDDANA regulator Monitor Position */
#define SECUMOD_SR_REGANA_Msk                 (_U_(0x1) << SECUMOD_SR_REGANA_Pos)                  /**< (SECUMOD_SR) VDDANA regulator Monitor Mask */
#define SECUMOD_SR_REGANA(value)              (SECUMOD_SR_REGANA_Msk & ((value) << SECUMOD_SR_REGANA_Pos))
#define SECUMOD_SR_MCKM_Pos                   _U_(5)                                               /**< (SECUMOD_SR) Master Clock Monitor Position */
#define SECUMOD_SR_MCKM_Msk                   (_U_(0x1) << SECUMOD_SR_MCKM_Pos)                    /**< (SECUMOD_SR) Master Clock Monitor Mask */
#define SECUMOD_SR_MCKM(value)                (SECUMOD_SR_MCKM_Msk & ((value) << SECUMOD_SR_MCKM_Pos))
#define SECUMOD_SR_TPML_Pos                   _U_(6)                                               /**< (SECUMOD_SR) Low Temperature Monitor Position */
#define SECUMOD_SR_TPML_Msk                   (_U_(0x1) << SECUMOD_SR_TPML_Pos)                    /**< (SECUMOD_SR) Low Temperature Monitor Mask */
#define SECUMOD_SR_TPML(value)                (SECUMOD_SR_TPML_Msk & ((value) << SECUMOD_SR_TPML_Pos))
#define SECUMOD_SR_TPMH_Pos                   _U_(7)                                               /**< (SECUMOD_SR) High Temperature Monitor Position */
#define SECUMOD_SR_TPMH_Msk                   (_U_(0x1) << SECUMOD_SR_TPMH_Pos)                    /**< (SECUMOD_SR) High Temperature Monitor Mask */
#define SECUMOD_SR_TPMH(value)                (SECUMOD_SR_TPMH_Msk & ((value) << SECUMOD_SR_TPMH_Pos))
#define SECUMOD_SR_VBATL_Pos                  _U_(10)                                              /**< (SECUMOD_SR) Low VBAT Voltage Monitor Position */
#define SECUMOD_SR_VBATL_Msk                  (_U_(0x1) << SECUMOD_SR_VBATL_Pos)                   /**< (SECUMOD_SR) Low VBAT Voltage Monitor Mask */
#define SECUMOD_SR_VBATL(value)               (SECUMOD_SR_VBATL_Msk & ((value) << SECUMOD_SR_VBATL_Pos))
#define SECUMOD_SR_VBATH_Pos                  _U_(11)                                              /**< (SECUMOD_SR) High VBAT Voltage Monitor Position */
#define SECUMOD_SR_VBATH_Msk                  (_U_(0x1) << SECUMOD_SR_VBATH_Pos)                   /**< (SECUMOD_SR) High VBAT Voltage Monitor Mask */
#define SECUMOD_SR_VBATH(value)               (SECUMOD_SR_VBATH_Msk & ((value) << SECUMOD_SR_VBATH_Pos))
#define SECUMOD_SR_VDDCOREL_Pos               _U_(12)                                              /**< (SECUMOD_SR) Low VDDCORE Voltage Monitor Position */
#define SECUMOD_SR_VDDCOREL_Msk               (_U_(0x1) << SECUMOD_SR_VDDCOREL_Pos)                /**< (SECUMOD_SR) Low VDDCORE Voltage Monitor Mask */
#define SECUMOD_SR_VDDCOREL(value)            (SECUMOD_SR_VDDCOREL_Msk & ((value) << SECUMOD_SR_VDDCOREL_Pos))
#define SECUMOD_SR_VDDCPUL_Pos                _U_(13)                                              /**< (SECUMOD_SR) Low VDDCPU Voltage Monitor Position */
#define SECUMOD_SR_VDDCPUL_Msk                (_U_(0x1) << SECUMOD_SR_VDDCPUL_Pos)                 /**< (SECUMOD_SR) Low VDDCPU Voltage Monitor Mask */
#define SECUMOD_SR_VDDCPUL(value)             (SECUMOD_SR_VDDCPUL_Msk & ((value) << SECUMOD_SR_VDDCPUL_Pos))
#define SECUMOD_SR_VDDCOREH_Pos               _U_(14)                                              /**< (SECUMOD_SR) High VDDCORE Voltage Monitor Position */
#define SECUMOD_SR_VDDCOREH_Msk               (_U_(0x1) << SECUMOD_SR_VDDCOREH_Pos)                /**< (SECUMOD_SR) High VDDCORE Voltage Monitor Mask */
#define SECUMOD_SR_VDDCOREH(value)            (SECUMOD_SR_VDDCOREH_Msk & ((value) << SECUMOD_SR_VDDCOREH_Pos))
#define SECUMOD_SR_VDDCPUH_Pos                _U_(15)                                              /**< (SECUMOD_SR) High VDDCPU Voltage Monitor Position */
#define SECUMOD_SR_VDDCPUH_Msk                (_U_(0x1) << SECUMOD_SR_VDDCPUH_Pos)                 /**< (SECUMOD_SR) High VDDCPU Voltage Monitor Mask */
#define SECUMOD_SR_VDDCPUH(value)             (SECUMOD_SR_VDDCPUH_Msk & ((value) << SECUMOD_SR_VDDCPUH_Pos))
#define SECUMOD_SR_DET0_Pos                   _U_(18)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET0_Msk                   (_U_(0x1) << SECUMOD_SR_DET0_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET0(value)                (SECUMOD_SR_DET0_Msk & ((value) << SECUMOD_SR_DET0_Pos))
#define SECUMOD_SR_DET1_Pos                   _U_(19)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET1_Msk                   (_U_(0x1) << SECUMOD_SR_DET1_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET1(value)                (SECUMOD_SR_DET1_Msk & ((value) << SECUMOD_SR_DET1_Pos))
#define SECUMOD_SR_DET2_Pos                   _U_(20)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET2_Msk                   (_U_(0x1) << SECUMOD_SR_DET2_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET2(value)                (SECUMOD_SR_DET2_Msk & ((value) << SECUMOD_SR_DET2_Pos))
#define SECUMOD_SR_DET3_Pos                   _U_(21)                                              /**< (SECUMOD_SR) PIOBU Intrusion Detector Position */
#define SECUMOD_SR_DET3_Msk                   (_U_(0x1) << SECUMOD_SR_DET3_Pos)                    /**< (SECUMOD_SR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SR_DET3(value)                (SECUMOD_SR_DET3_Msk & ((value) << SECUMOD_SR_DET3_Pos))
#define SECUMOD_SR_Msk                        _U_(0x003CFCFE)                                      /**< (SECUMOD_SR) Register Mask  */

#define SECUMOD_SR_DET_Pos                    _U_(18)                                              /**< (SECUMOD_SR Position) PIOBU Intrusion Detector */
#define SECUMOD_SR_DET_Msk                    (_U_(0xF) << SECUMOD_SR_DET_Pos)                     /**< (SECUMOD_SR Mask) DET */
#define SECUMOD_SR_DET(value)                 (SECUMOD_SR_DET_Msk & ((value) << SECUMOD_SR_DET_Pos)) 

/* -------- SECUMOD_ASR : (SECUMOD Offset: 0x0C) ( R/ 32) Auxiliary Status Register -------- */
#define SECUMOD_ASR_RESETVALUE                _U_(0x00)                                            /**<  (SECUMOD_ASR) Auxiliary Status Register  Reset Value */

#define SECUMOD_ASR_MCKM_LO_Pos               _U_(0)                                               /**< (SECUMOD_ASR) Low frequency limit reached is the cause of MCKM flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_MCKM_LO_Msk               (_U_(0x1) << SECUMOD_ASR_MCKM_LO_Pos)                /**< (SECUMOD_ASR) Low frequency limit reached is the cause of MCKM flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_MCKM_LO(value)            (SECUMOD_ASR_MCKM_LO_Msk & ((value) << SECUMOD_ASR_MCKM_LO_Pos))
#define SECUMOD_ASR_MCKM_HI_Pos               _U_(1)                                               /**< (SECUMOD_ASR) High frequency limit reached is the cause of MCKM flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_MCKM_HI_Msk               (_U_(0x1) << SECUMOD_ASR_MCKM_HI_Pos)                /**< (SECUMOD_ASR) High frequency limit reached is the cause of MCKM flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_MCKM_HI(value)            (SECUMOD_ASR_MCKM_HI_Msk & ((value) << SECUMOD_ASR_MCKM_HI_Pos))
#define SECUMOD_ASR_REGANA_LO_Pos             _U_(2)                                               /**< (SECUMOD_ASR) Low voltage alarm from VDDANA regulator is the cause of REGANA flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_REGANA_LO_Msk             (_U_(0x1) << SECUMOD_ASR_REGANA_LO_Pos)              /**< (SECUMOD_ASR) Low voltage alarm from VDDANA regulator is the cause of REGANA flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_REGANA_LO(value)          (SECUMOD_ASR_REGANA_LO_Msk & ((value) << SECUMOD_ASR_REGANA_LO_Pos))
#define SECUMOD_ASR_REGANA_HI_Pos             _U_(3)                                               /**< (SECUMOD_ASR) High voltage alarm from VDDANA regulator is the cause of REGANA flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_REGANA_HI_Msk             (_U_(0x1) << SECUMOD_ASR_REGANA_HI_Pos)              /**< (SECUMOD_ASR) High voltage alarm from VDDANA regulator is the cause of REGANA flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_REGANA_HI(value)          (SECUMOD_ASR_REGANA_HI_Msk & ((value) << SECUMOD_ASR_REGANA_HI_Pos))
#define SECUMOD_ASR_JTAG_Pos                  _U_(4)                                               /**< (SECUMOD_ASR) JTAGSEL or processor debug acknowledge is the cause of JTAG flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_JTAG_Msk                  (_U_(0x1) << SECUMOD_ASR_JTAG_Pos)                   /**< (SECUMOD_ASR) JTAGSEL or processor debug acknowledge is the cause of JTAG flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_JTAG(value)               (SECUMOD_ASR_JTAG_Msk & ((value) << SECUMOD_ASR_JTAG_Pos))
#define SECUMOD_ASR_TCK_Pos                   _U_(5)                                               /**< (SECUMOD_ASR) TCK/TMS activity detected is the cause of JTAG flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_TCK_Msk                   (_U_(0x1) << SECUMOD_ASR_TCK_Pos)                    /**< (SECUMOD_ASR) TCK/TMS activity detected is the cause of JTAG flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_TCK(value)                (SECUMOD_ASR_TCK_Msk & ((value) << SECUMOD_ASR_TCK_Pos))
#define SECUMOD_ASR_BULO_Pos                  _U_(6)                                               /**< (SECUMOD_ASR) VBAT low alarm detected is the cause of VBATL flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_BULO_Msk                  (_U_(0x1) << SECUMOD_ASR_BULO_Pos)                   /**< (SECUMOD_ASR) VBAT low alarm detected is the cause of VBATL flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_BULO(value)               (SECUMOD_ASR_BULO_Msk & ((value) << SECUMOD_ASR_BULO_Pos))
#define SECUMOD_ASR_PSWLO_Pos                 _U_(7)                                               /**< (SECUMOD_ASR) VDDIN33 (used as secondary LDO power source through backup powerswitch) low alarm detected is the cause of VBATL flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_PSWLO_Msk                 (_U_(0x1) << SECUMOD_ASR_PSWLO_Pos)                  /**< (SECUMOD_ASR) VDDIN33 (used as secondary LDO power source through backup powerswitch) low alarm detected is the cause of VBATL flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_PSWLO(value)              (SECUMOD_ASR_PSWLO_Msk & ((value) << SECUMOD_ASR_PSWLO_Pos))
#define SECUMOD_ASR_BUHI_Pos                  _U_(8)                                               /**< (SECUMOD_ASR) VBAT high alarm detected is the cause of VBATH flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_BUHI_Msk                  (_U_(0x1) << SECUMOD_ASR_BUHI_Pos)                   /**< (SECUMOD_ASR) VBAT high alarm detected is the cause of VBATH flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_BUHI(value)               (SECUMOD_ASR_BUHI_Msk & ((value) << SECUMOD_ASR_BUHI_Pos))
#define SECUMOD_ASR_PSWHI_Pos                 _U_(9)                                               /**< (SECUMOD_ASR) VDDIN33 (used as secondary LDO power source through backup powerswitch) low alarm detected is the cause of VBATL flag in SECUMOD_SR. Position */
#define SECUMOD_ASR_PSWHI_Msk                 (_U_(0x1) << SECUMOD_ASR_PSWHI_Pos)                  /**< (SECUMOD_ASR) VDDIN33 (used as secondary LDO power source through backup powerswitch) low alarm detected is the cause of VBATL flag in SECUMOD_SR. Mask */
#define SECUMOD_ASR_PSWHI(value)              (SECUMOD_ASR_PSWHI_Msk & ((value) << SECUMOD_ASR_PSWHI_Pos))
#define SECUMOD_ASR_Msk                       _U_(0x000003FF)                                      /**< (SECUMOD_ASR) Register Mask  */


/* -------- SECUMOD_SCR : (SECUMOD Offset: 0x10) ( /W 32) Status Clear Register -------- */
#define SECUMOD_SCR_DBLFM_Pos                 _U_(1)                                               /**< (SECUMOD_SCR) Double Frequency Monitor Position */
#define SECUMOD_SCR_DBLFM_Msk                 (_U_(0x1) << SECUMOD_SCR_DBLFM_Pos)                  /**< (SECUMOD_SCR) Double Frequency Monitor Mask */
#define SECUMOD_SCR_DBLFM(value)              (SECUMOD_SCR_DBLFM_Msk & ((value) << SECUMOD_SCR_DBLFM_Pos))
#define SECUMOD_SCR_TST_Pos                   _U_(2)                                               /**< (SECUMOD_SCR) Test Pin Monitor Position */
#define SECUMOD_SCR_TST_Msk                   (_U_(0x1) << SECUMOD_SCR_TST_Pos)                    /**< (SECUMOD_SCR) Test Pin Monitor Mask */
#define SECUMOD_SCR_TST(value)                (SECUMOD_SCR_TST_Msk & ((value) << SECUMOD_SCR_TST_Pos))
#define SECUMOD_SCR_JTAG_Pos                  _U_(3)                                               /**< (SECUMOD_SCR) JTAG Pins Monitor Position */
#define SECUMOD_SCR_JTAG_Msk                  (_U_(0x1) << SECUMOD_SCR_JTAG_Pos)                   /**< (SECUMOD_SCR) JTAG Pins Monitor Mask */
#define SECUMOD_SCR_JTAG(value)               (SECUMOD_SCR_JTAG_Msk & ((value) << SECUMOD_SCR_JTAG_Pos))
#define SECUMOD_SCR_REGANA_Pos                _U_(4)                                               /**< (SECUMOD_SCR) VDDANA regulator Monitor Position */
#define SECUMOD_SCR_REGANA_Msk                (_U_(0x1) << SECUMOD_SCR_REGANA_Pos)                 /**< (SECUMOD_SCR) VDDANA regulator Monitor Mask */
#define SECUMOD_SCR_REGANA(value)             (SECUMOD_SCR_REGANA_Msk & ((value) << SECUMOD_SCR_REGANA_Pos))
#define SECUMOD_SCR_MCKM_Pos                  _U_(5)                                               /**< (SECUMOD_SCR) Master Clock Monitor Position */
#define SECUMOD_SCR_MCKM_Msk                  (_U_(0x1) << SECUMOD_SCR_MCKM_Pos)                   /**< (SECUMOD_SCR) Master Clock Monitor Mask */
#define SECUMOD_SCR_MCKM(value)               (SECUMOD_SCR_MCKM_Msk & ((value) << SECUMOD_SCR_MCKM_Pos))
#define SECUMOD_SCR_TPML_Pos                  _U_(6)                                               /**< (SECUMOD_SCR) Low Temperature Monitor Position */
#define SECUMOD_SCR_TPML_Msk                  (_U_(0x1) << SECUMOD_SCR_TPML_Pos)                   /**< (SECUMOD_SCR) Low Temperature Monitor Mask */
#define SECUMOD_SCR_TPML(value)               (SECUMOD_SCR_TPML_Msk & ((value) << SECUMOD_SCR_TPML_Pos))
#define SECUMOD_SCR_TPMH_Pos                  _U_(7)                                               /**< (SECUMOD_SCR) High Temperature Monitor Position */
#define SECUMOD_SCR_TPMH_Msk                  (_U_(0x1) << SECUMOD_SCR_TPMH_Pos)                   /**< (SECUMOD_SCR) High Temperature Monitor Mask */
#define SECUMOD_SCR_TPMH(value)               (SECUMOD_SCR_TPMH_Msk & ((value) << SECUMOD_SCR_TPMH_Pos))
#define SECUMOD_SCR_VBATL_Pos                 _U_(10)                                              /**< (SECUMOD_SCR) Low VBAT Voltage Monitor Position */
#define SECUMOD_SCR_VBATL_Msk                 (_U_(0x1) << SECUMOD_SCR_VBATL_Pos)                  /**< (SECUMOD_SCR) Low VBAT Voltage Monitor Mask */
#define SECUMOD_SCR_VBATL(value)              (SECUMOD_SCR_VBATL_Msk & ((value) << SECUMOD_SCR_VBATL_Pos))
#define SECUMOD_SCR_VBATH_Pos                 _U_(11)                                              /**< (SECUMOD_SCR) High VBAT Voltage Monitor Position */
#define SECUMOD_SCR_VBATH_Msk                 (_U_(0x1) << SECUMOD_SCR_VBATH_Pos)                  /**< (SECUMOD_SCR) High VBAT Voltage Monitor Mask */
#define SECUMOD_SCR_VBATH(value)              (SECUMOD_SCR_VBATH_Msk & ((value) << SECUMOD_SCR_VBATH_Pos))
#define SECUMOD_SCR_VDDCOREL_Pos              _U_(12)                                              /**< (SECUMOD_SCR) Low VDDCORE Voltage Monitor Position */
#define SECUMOD_SCR_VDDCOREL_Msk              (_U_(0x1) << SECUMOD_SCR_VDDCOREL_Pos)               /**< (SECUMOD_SCR) Low VDDCORE Voltage Monitor Mask */
#define SECUMOD_SCR_VDDCOREL(value)           (SECUMOD_SCR_VDDCOREL_Msk & ((value) << SECUMOD_SCR_VDDCOREL_Pos))
#define SECUMOD_SCR_VDDCPUL_Pos               _U_(13)                                              /**< (SECUMOD_SCR) Low VDDCPU Voltage Monitor Position */
#define SECUMOD_SCR_VDDCPUL_Msk               (_U_(0x1) << SECUMOD_SCR_VDDCPUL_Pos)                /**< (SECUMOD_SCR) Low VDDCPU Voltage Monitor Mask */
#define SECUMOD_SCR_VDDCPUL(value)            (SECUMOD_SCR_VDDCPUL_Msk & ((value) << SECUMOD_SCR_VDDCPUL_Pos))
#define SECUMOD_SCR_VDDCOREH_Pos              _U_(14)                                              /**< (SECUMOD_SCR) High VDDCORE Voltage Monitor Position */
#define SECUMOD_SCR_VDDCOREH_Msk              (_U_(0x1) << SECUMOD_SCR_VDDCOREH_Pos)               /**< (SECUMOD_SCR) High VDDCORE Voltage Monitor Mask */
#define SECUMOD_SCR_VDDCOREH(value)           (SECUMOD_SCR_VDDCOREH_Msk & ((value) << SECUMOD_SCR_VDDCOREH_Pos))
#define SECUMOD_SCR_VDDCPUH_Pos               _U_(15)                                              /**< (SECUMOD_SCR) High VDDCPU Voltage Monitor Position */
#define SECUMOD_SCR_VDDCPUH_Msk               (_U_(0x1) << SECUMOD_SCR_VDDCPUH_Pos)                /**< (SECUMOD_SCR) High VDDCPU Voltage Monitor Mask */
#define SECUMOD_SCR_VDDCPUH(value)            (SECUMOD_SCR_VDDCPUH_Msk & ((value) << SECUMOD_SCR_VDDCPUH_Pos))
#define SECUMOD_SCR_DET0_Pos                  _U_(18)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET0_Msk                  (_U_(0x1) << SECUMOD_SCR_DET0_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET0(value)               (SECUMOD_SCR_DET0_Msk & ((value) << SECUMOD_SCR_DET0_Pos))
#define SECUMOD_SCR_DET1_Pos                  _U_(19)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET1_Msk                  (_U_(0x1) << SECUMOD_SCR_DET1_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET1(value)               (SECUMOD_SCR_DET1_Msk & ((value) << SECUMOD_SCR_DET1_Pos))
#define SECUMOD_SCR_DET2_Pos                  _U_(20)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET2_Msk                  (_U_(0x1) << SECUMOD_SCR_DET2_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET2(value)               (SECUMOD_SCR_DET2_Msk & ((value) << SECUMOD_SCR_DET2_Pos))
#define SECUMOD_SCR_DET3_Pos                  _U_(21)                                              /**< (SECUMOD_SCR) PIOBU Intrusion Detector Position */
#define SECUMOD_SCR_DET3_Msk                  (_U_(0x1) << SECUMOD_SCR_DET3_Pos)                   /**< (SECUMOD_SCR) PIOBU Intrusion Detector Mask */
#define SECUMOD_SCR_DET3(value)               (SECUMOD_SCR_DET3_Msk & ((value) << SECUMOD_SCR_DET3_Pos))
#define SECUMOD_SCR_Msk                       _U_(0x003CFCFE)                                      /**< (SECUMOD_SCR) Register Mask  */

#define SECUMOD_SCR_DET_Pos                   _U_(18)                                              /**< (SECUMOD_SCR Position) PIOBU Intrusion Detector */
#define SECUMOD_SCR_DET_Msk                   (_U_(0xF) << SECUMOD_SCR_DET_Pos)                    /**< (SECUMOD_SCR Mask) DET */
#define SECUMOD_SCR_DET(value)                (SECUMOD_SCR_DET_Msk & ((value) << SECUMOD_SCR_DET_Pos)) 

/* -------- SECUMOD_RAMRDY : (SECUMOD Offset: 0x14) ( R/ 32) RAM Access Ready Register -------- */
#define SECUMOD_RAMRDY_READY_Pos              _U_(0)                                               /**< (SECUMOD_RAMRDY) Ready for system access flag Position */
#define SECUMOD_RAMRDY_READY_Msk              (_U_(0x1) << SECUMOD_RAMRDY_READY_Pos)               /**< (SECUMOD_RAMRDY) Ready for system access flag Mask */
#define SECUMOD_RAMRDY_READY(value)           (SECUMOD_RAMRDY_READY_Msk & ((value) << SECUMOD_RAMRDY_READY_Pos))
#define SECUMOD_RAMRDY_Msk                    _U_(0x00000001)                                      /**< (SECUMOD_RAMRDY) Register Mask  */


/* -------- SECUMOD_PIOBU : (SECUMOD Offset: 0x18) (R/W 32) PIO Backup Register x -------- */
#define SECUMOD_PIOBU_RESETVALUE              _U_(0x1000)                                          /**<  (SECUMOD_PIOBU) PIO Backup Register x  Reset Value */

#define SECUMOD_PIOBU_PIOBU_AFV_Pos           _U_(0)                                               /**< (SECUMOD_PIOBU) PIOBU Alarm Filter Value Position */
#define SECUMOD_PIOBU_PIOBU_AFV_Msk           (_U_(0xF) << SECUMOD_PIOBU_PIOBU_AFV_Pos)            /**< (SECUMOD_PIOBU) PIOBU Alarm Filter Value Mask */
#define SECUMOD_PIOBU_PIOBU_AFV(value)        (SECUMOD_PIOBU_PIOBU_AFV_Msk & ((value) << SECUMOD_PIOBU_PIOBU_AFV_Pos))
#define SECUMOD_PIOBU_PIOBU_RFV_Pos           _U_(4)                                               /**< (SECUMOD_PIOBU) PIOBUx Reset Filter Value Position */
#define SECUMOD_PIOBU_PIOBU_RFV_Msk           (_U_(0xF) << SECUMOD_PIOBU_PIOBU_RFV_Pos)            /**< (SECUMOD_PIOBU) PIOBUx Reset Filter Value Mask */
#define SECUMOD_PIOBU_PIOBU_RFV(value)        (SECUMOD_PIOBU_PIOBU_RFV_Msk & ((value) << SECUMOD_PIOBU_PIOBU_RFV_Pos))
#define SECUMOD_PIOBU_OUTPUT_Pos              _U_(8)                                               /**< (SECUMOD_PIOBU) Configure I/O Line in Input/Output Position */
#define SECUMOD_PIOBU_OUTPUT_Msk              (_U_(0x1) << SECUMOD_PIOBU_OUTPUT_Pos)               /**< (SECUMOD_PIOBU) Configure I/O Line in Input/Output Mask */
#define SECUMOD_PIOBU_OUTPUT(value)           (SECUMOD_PIOBU_OUTPUT_Msk & ((value) << SECUMOD_PIOBU_OUTPUT_Pos))
#define   SECUMOD_PIOBU_OUTPUT_0_Val          _U_(0x0)                                             /**< (SECUMOD_PIOBU) The I/O line is a pure input.  */
#define   SECUMOD_PIOBU_OUTPUT_1_Val          _U_(0x1)                                             /**< (SECUMOD_PIOBU) The I/O line is enabled in output.  */
#define SECUMOD_PIOBU_OUTPUT_0                (SECUMOD_PIOBU_OUTPUT_0_Val << SECUMOD_PIOBU_OUTPUT_Pos) /**< (SECUMOD_PIOBU) The I/O line is a pure input. Position  */
#define SECUMOD_PIOBU_OUTPUT_1                (SECUMOD_PIOBU_OUTPUT_1_Val << SECUMOD_PIOBU_OUTPUT_Pos) /**< (SECUMOD_PIOBU) The I/O line is enabled in output. Position  */
#define SECUMOD_PIOBU_PIO_SOD_Pos             _U_(9)                                               /**< (SECUMOD_PIOBU) Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) Position */
#define SECUMOD_PIOBU_PIO_SOD_Msk             (_U_(0x1) << SECUMOD_PIOBU_PIO_SOD_Pos)              /**< (SECUMOD_PIOBU) Set/Clear the I/O Line when configured in Output Mode (OUTPUT =1) Mask */
#define SECUMOD_PIOBU_PIO_SOD(value)          (SECUMOD_PIOBU_PIO_SOD_Msk & ((value) << SECUMOD_PIOBU_PIO_SOD_Pos))
#define   SECUMOD_PIOBU_PIO_SOD_0_Val         _U_(0x0)                                             /**< (SECUMOD_PIOBU) Clears the data to be driven on the I/O line.  */
#define   SECUMOD_PIOBU_PIO_SOD_1_Val         _U_(0x1)                                             /**< (SECUMOD_PIOBU) Sets the data to be driven on the I/O line.  */
#define SECUMOD_PIOBU_PIO_SOD_0               (SECUMOD_PIOBU_PIO_SOD_0_Val << SECUMOD_PIOBU_PIO_SOD_Pos) /**< (SECUMOD_PIOBU) Clears the data to be driven on the I/O line. Position  */
#define SECUMOD_PIOBU_PIO_SOD_1               (SECUMOD_PIOBU_PIO_SOD_1_Val << SECUMOD_PIOBU_PIO_SOD_Pos) /**< (SECUMOD_PIOBU) Sets the data to be driven on the I/O line. Position  */
#define SECUMOD_PIOBU_PIO_PDS_Pos             _U_(10)                                              /**< (SECUMOD_PIOBU) Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) Position */
#define SECUMOD_PIOBU_PIO_PDS_Msk             (_U_(0x1) << SECUMOD_PIOBU_PIO_PDS_Pos)              /**< (SECUMOD_PIOBU) Level on the Pin in Input Mode (OUTPUT = 0) (Read-only) Mask */
#define SECUMOD_PIOBU_PIO_PDS(value)          (SECUMOD_PIOBU_PIO_PDS_Msk & ((value) << SECUMOD_PIOBU_PIO_PDS_Pos))
#define   SECUMOD_PIOBU_PIO_PDS_0_Val         _U_(0x0)                                             /**< (SECUMOD_PIOBU) The I/O line is at level 0.  */
#define   SECUMOD_PIOBU_PIO_PDS_1_Val         _U_(0x1)                                             /**< (SECUMOD_PIOBU) The I/O line is at level 1.  */
#define SECUMOD_PIOBU_PIO_PDS_0               (SECUMOD_PIOBU_PIO_PDS_0_Val << SECUMOD_PIOBU_PIO_PDS_Pos) /**< (SECUMOD_PIOBU) The I/O line is at level 0. Position  */
#define SECUMOD_PIOBU_PIO_PDS_1               (SECUMOD_PIOBU_PIO_PDS_1_Val << SECUMOD_PIOBU_PIO_PDS_Pos) /**< (SECUMOD_PIOBU) The I/O line is at level 1. Position  */
#define SECUMOD_PIOBU_PULLUP_Pos              _U_(12)                                              /**< (SECUMOD_PIOBU) Programmable Pullup State Position */
#define SECUMOD_PIOBU_PULLUP_Msk              (_U_(0x3) << SECUMOD_PIOBU_PULLUP_Pos)               /**< (SECUMOD_PIOBU) Programmable Pullup State Mask */
#define SECUMOD_PIOBU_PULLUP(value)           (SECUMOD_PIOBU_PULLUP_Msk & ((value) << SECUMOD_PIOBU_PULLUP_Pos))
#define SECUMOD_PIOBU_SCHEDULE_Pos            _U_(14)                                              /**< (SECUMOD_PIOBU) Pullup/Pulldown Scheduled Position */
#define SECUMOD_PIOBU_SCHEDULE_Msk            (_U_(0x1) << SECUMOD_PIOBU_SCHEDULE_Pos)             /**< (SECUMOD_PIOBU) Pullup/Pulldown Scheduled Mask */
#define SECUMOD_PIOBU_SCHEDULE(value)         (SECUMOD_PIOBU_SCHEDULE_Msk & ((value) << SECUMOD_PIOBU_SCHEDULE_Pos))
#define   SECUMOD_PIOBU_SCHEDULE_0_Val        _U_(0x0)                                             /**< (SECUMOD_PIOBU) Pullup/Pulldown is not scheduled.  */
#define   SECUMOD_PIOBU_SCHEDULE_1_Val        _U_(0x1)                                             /**< (SECUMOD_PIOBU) Pullup/Pulldown is scheduled.  */
#define SECUMOD_PIOBU_SCHEDULE_0              (SECUMOD_PIOBU_SCHEDULE_0_Val << SECUMOD_PIOBU_SCHEDULE_Pos) /**< (SECUMOD_PIOBU) Pullup/Pulldown is not scheduled. Position  */
#define SECUMOD_PIOBU_SCHEDULE_1              (SECUMOD_PIOBU_SCHEDULE_1_Val << SECUMOD_PIOBU_SCHEDULE_Pos) /**< (SECUMOD_PIOBU) Pullup/Pulldown is scheduled. Position  */
#define SECUMOD_PIOBU_SWITCH_Pos              _U_(15)                                              /**< (SECUMOD_PIOBU) Switch State for Intrusion Detection Position */
#define SECUMOD_PIOBU_SWITCH_Msk              (_U_(0x1) << SECUMOD_PIOBU_SWITCH_Pos)               /**< (SECUMOD_PIOBU) Switch State for Intrusion Detection Mask */
#define SECUMOD_PIOBU_SWITCH(value)           (SECUMOD_PIOBU_SWITCH_Msk & ((value) << SECUMOD_PIOBU_SWITCH_Pos))
#define   SECUMOD_PIOBU_SWITCH_0_Val          _U_(0x0)                                             /**< (SECUMOD_PIOBU) Input default state is low level.  */
#define   SECUMOD_PIOBU_SWITCH_1_Val          _U_(0x1)                                             /**< (SECUMOD_PIOBU) Input default state is high level.  */
#define SECUMOD_PIOBU_SWITCH_0                (SECUMOD_PIOBU_SWITCH_0_Val << SECUMOD_PIOBU_SWITCH_Pos) /**< (SECUMOD_PIOBU) Input default state is low level. Position  */
#define SECUMOD_PIOBU_SWITCH_1                (SECUMOD_PIOBU_SWITCH_1_Val << SECUMOD_PIOBU_SWITCH_Pos) /**< (SECUMOD_PIOBU) Input default state is high level. Position  */
#define SECUMOD_PIOBU_DYNSTAT_Pos             _U_(20)                                              /**< (SECUMOD_PIOBU) Switch for Static or Dynamic Detection Intrusion Position */
#define SECUMOD_PIOBU_DYNSTAT_Msk             (_U_(0x1) << SECUMOD_PIOBU_DYNSTAT_Pos)              /**< (SECUMOD_PIOBU) Switch for Static or Dynamic Detection Intrusion Mask */
#define SECUMOD_PIOBU_DYNSTAT(value)          (SECUMOD_PIOBU_DYNSTAT_Msk & ((value) << SECUMOD_PIOBU_DYNSTAT_Pos))
#define   SECUMOD_PIOBU_DYNSTAT_0_Val         _U_(0x0)                                             /**< (SECUMOD_PIOBU) Static detection intrusion (default) mode is selected.  */
#define   SECUMOD_PIOBU_DYNSTAT_1_Val         _U_(0x1)                                             /**< (SECUMOD_PIOBU) Dynamic detection intrusion mode is selected.  */
#define SECUMOD_PIOBU_DYNSTAT_0               (SECUMOD_PIOBU_DYNSTAT_0_Val << SECUMOD_PIOBU_DYNSTAT_Pos) /**< (SECUMOD_PIOBU) Static detection intrusion (default) mode is selected. Position  */
#define SECUMOD_PIOBU_DYNSTAT_1               (SECUMOD_PIOBU_DYNSTAT_1_Val << SECUMOD_PIOBU_DYNSTAT_Pos) /**< (SECUMOD_PIOBU) Dynamic detection intrusion mode is selected. Position  */
#define SECUMOD_PIOBU_FILTER3_5_Pos           _U_(21)                                              /**< (SECUMOD_PIOBU) Filter for Dynamic Signatures Input Position */
#define SECUMOD_PIOBU_FILTER3_5_Msk           (_U_(0x1) << SECUMOD_PIOBU_FILTER3_5_Pos)            /**< (SECUMOD_PIOBU) Filter for Dynamic Signatures Input Mask */
#define SECUMOD_PIOBU_FILTER3_5(value)        (SECUMOD_PIOBU_FILTER3_5_Msk & ((value) << SECUMOD_PIOBU_FILTER3_5_Pos))
#define   SECUMOD_PIOBU_FILTER3_5_0_Val       _U_(0x0)                                             /**< (SECUMOD_PIOBU) 3-stage majority vote (default).  */
#define   SECUMOD_PIOBU_FILTER3_5_1_Val       _U_(0x1)                                             /**< (SECUMOD_PIOBU) 5-stage majority vote.  */
#define SECUMOD_PIOBU_FILTER3_5_0             (SECUMOD_PIOBU_FILTER3_5_0_Val << SECUMOD_PIOBU_FILTER3_5_Pos) /**< (SECUMOD_PIOBU) 3-stage majority vote (default). Position  */
#define SECUMOD_PIOBU_FILTER3_5_1             (SECUMOD_PIOBU_FILTER3_5_1_Val << SECUMOD_PIOBU_FILTER3_5_Pos) /**< (SECUMOD_PIOBU) 5-stage majority vote. Position  */
#define SECUMOD_PIOBU_Msk                     _U_(0x0030F7FF)                                      /**< (SECUMOD_PIOBU) Register Mask  */

#define SECUMOD_PIOBU_FILTER3__Pos            _U_(21)                                              /**< (SECUMOD_PIOBU Position) Filter for Dynamic Signatures Input */
#define SECUMOD_PIOBU_FILTER3__Msk            (_U_(0x1) << SECUMOD_PIOBU_FILTER3__Pos)             /**< (SECUMOD_PIOBU Mask) FILTER3_ */
#define SECUMOD_PIOBU_FILTER3_(value)         (SECUMOD_PIOBU_FILTER3__Msk & ((value) << SECUMOD_PIOBU_FILTER3__Pos)) 

/* -------- SECUMOD_VBUFR : (SECUMOD Offset: 0x58) (R/W 32) VBAT Filter Register -------- */
#define SECUMOD_VBUFR_RESETVALUE              _U_(0x07)                                            /**<  (SECUMOD_VBUFR) VBAT Filter Register  Reset Value */

#define SECUMOD_VBUFR_VBATFV_Pos              _U_(0)                                               /**< (SECUMOD_VBUFR) VBAT Filter Value Position */
#define SECUMOD_VBUFR_VBATFV_Msk              (_U_(0x7) << SECUMOD_VBUFR_VBATFV_Pos)               /**< (SECUMOD_VBUFR) VBAT Filter Value Mask */
#define SECUMOD_VBUFR_VBATFV(value)           (SECUMOD_VBUFR_VBATFV_Msk & ((value) << SECUMOD_VBUFR_VBATFV_Pos))
#define SECUMOD_VBUFR_Msk                     _U_(0x00000007)                                      /**< (SECUMOD_VBUFR) Register Mask  */


/* -------- SECUMOD_VCOREFR : (SECUMOD Offset: 0x64) (R/W 32) VDDCORE Filter Register -------- */
#define SECUMOD_VCOREFR_RESETVALUE            _U_(0x1FFF)                                          /**<  (SECUMOD_VCOREFR) VDDCORE Filter Register  Reset Value */

#define SECUMOD_VCOREFR_VDDCORE_DBTV_Pos      _U_(0)                                               /**< (SECUMOD_VCOREFR) VDDCORE Programmable Debouncing Time Value Position */
#define SECUMOD_VCOREFR_VDDCORE_DBTV_Msk      (_U_(0x1FFF) << SECUMOD_VCOREFR_VDDCORE_DBTV_Pos)    /**< (SECUMOD_VCOREFR) VDDCORE Programmable Debouncing Time Value Mask */
#define SECUMOD_VCOREFR_VDDCORE_DBTV(value)   (SECUMOD_VCOREFR_VDDCORE_DBTV_Msk & ((value) << SECUMOD_VCOREFR_VDDCORE_DBTV_Pos))
#define SECUMOD_VCOREFR_Msk                   _U_(0x00001FFF)                                      /**< (SECUMOD_VCOREFR) Register Mask  */


/* -------- SECUMOD_VCPUFR : (SECUMOD Offset: 0x68) (R/W 32) VDDCPU Filter Register -------- */
#define SECUMOD_VCPUFR_RESETVALUE             _U_(0x1FFF)                                          /**<  (SECUMOD_VCPUFR) VDDCPU Filter Register  Reset Value */

#define SECUMOD_VCPUFR_VDDCPU_DBTV_Pos        _U_(0)                                               /**< (SECUMOD_VCPUFR) VDDCPU Programmable Debouncing Time Value Position */
#define SECUMOD_VCPUFR_VDDCPU_DBTV_Msk        (_U_(0x1FFF) << SECUMOD_VCPUFR_VDDCPU_DBTV_Pos)      /**< (SECUMOD_VCPUFR) VDDCPU Programmable Debouncing Time Value Mask */
#define SECUMOD_VCPUFR_VDDCPU_DBTV(value)     (SECUMOD_VCPUFR_VDDCPU_DBTV_Msk & ((value) << SECUMOD_VCPUFR_VDDCPU_DBTV_Pos))
#define SECUMOD_VCPUFR_Msk                    _U_(0x00001FFF)                                      /**< (SECUMOD_VCPUFR) Register Mask  */


/* -------- SECUMOD_JTAGCR : (SECUMOD Offset: 0x70) (R/W 32) JTAG Protection Control Register -------- */
#define SECUMOD_JTAGCR_RESETVALUE             _U_(0x00)                                            /**<  (SECUMOD_JTAGCR) JTAG Protection Control Register  Reset Value */

#define SECUMOD_JTAGCR_FNTRST_Pos             _U_(0)                                               /**< (SECUMOD_JTAGCR) Force NTRST Position */
#define SECUMOD_JTAGCR_FNTRST_Msk             (_U_(0x1) << SECUMOD_JTAGCR_FNTRST_Pos)              /**< (SECUMOD_JTAGCR) Force NTRST Mask */
#define SECUMOD_JTAGCR_FNTRST(value)          (SECUMOD_JTAGCR_FNTRST_Msk & ((value) << SECUMOD_JTAGCR_FNTRST_Pos))
#define   SECUMOD_JTAGCR_FNTRST_0_Val         _U_(0x0)                                             /**< (SECUMOD_JTAGCR) The processor's TAP controller access and Boundary JTAG are not blocked by the Security Module.  */
#define   SECUMOD_JTAGCR_FNTRST_1_Val         _U_(0x1)                                             /**< (SECUMOD_JTAGCR) NDBGRESET of the processor's TAP controller and Boundary JTAG reset are held low, preventing the processor to switch to debug state and Boundary JTAG to work.  */
#define SECUMOD_JTAGCR_FNTRST_0               (SECUMOD_JTAGCR_FNTRST_0_Val << SECUMOD_JTAGCR_FNTRST_Pos) /**< (SECUMOD_JTAGCR) The processor's TAP controller access and Boundary JTAG are not blocked by the Security Module. Position  */
#define SECUMOD_JTAGCR_FNTRST_1               (SECUMOD_JTAGCR_FNTRST_1_Val << SECUMOD_JTAGCR_FNTRST_Pos) /**< (SECUMOD_JTAGCR) NDBGRESET of the processor's TAP controller and Boundary JTAG reset are held low, preventing the processor to switch to debug state and Boundary JTAG to work. Position  */
#define SECUMOD_JTAGCR_PROC_DEBUG_MODE_Pos    _U_(1)                                               /**< (SECUMOD_JTAGCR) Invasive/Non-Invasive Secure/Non-Secure Debug Permissions Position */
#define SECUMOD_JTAGCR_PROC_DEBUG_MODE_Msk    (_U_(0x7) << SECUMOD_JTAGCR_PROC_DEBUG_MODE_Pos)     /**< (SECUMOD_JTAGCR) Invasive/Non-Invasive Secure/Non-Secure Debug Permissions Mask */
#define SECUMOD_JTAGCR_PROC_DEBUG_MODE(value) (SECUMOD_JTAGCR_PROC_DEBUG_MODE_Msk & ((value) << SECUMOD_JTAGCR_PROC_DEBUG_MODE_Pos))
#define SECUMOD_JTAGCR_PROC_DEBUG_MON_Pos     _U_(4)                                               /**< (SECUMOD_JTAGCR) Debug Acknowledge (DBGACK) Monitoring Position */
#define SECUMOD_JTAGCR_PROC_DEBUG_MON_Msk     (_U_(0x1) << SECUMOD_JTAGCR_PROC_DEBUG_MON_Pos)      /**< (SECUMOD_JTAGCR) Debug Acknowledge (DBGACK) Monitoring Mask */
#define SECUMOD_JTAGCR_PROC_DEBUG_MON(value)  (SECUMOD_JTAGCR_PROC_DEBUG_MON_Msk & ((value) << SECUMOD_JTAGCR_PROC_DEBUG_MON_Pos))
#define   SECUMOD_JTAGCR_PROC_DEBUG_MON_0_Val _U_(0x0)                                             /**< (SECUMOD_JTAGCR) The processor's pin DBGACK is not monitored; as a consequence, the software can access debug features of the processor without causing an intrusion in the Security Module.  */
#define   SECUMOD_JTAGCR_PROC_DEBUG_MON_1_Val _U_(0x1)                                             /**< (SECUMOD_JTAGCR) The processor's pin DBGACK is monitored. Processor entering Debug mode triggers an intrusion.  */
#define SECUMOD_JTAGCR_PROC_DEBUG_MON_0       (SECUMOD_JTAGCR_PROC_DEBUG_MON_0_Val << SECUMOD_JTAGCR_PROC_DEBUG_MON_Pos) /**< (SECUMOD_JTAGCR) The processor's pin DBGACK is not monitored; as a consequence, the software can access debug features of the processor without causing an intrusion in the Security Module. Position  */
#define SECUMOD_JTAGCR_PROC_DEBUG_MON_1       (SECUMOD_JTAGCR_PROC_DEBUG_MON_1_Val << SECUMOD_JTAGCR_PROC_DEBUG_MON_Pos) /**< (SECUMOD_JTAGCR) The processor's pin DBGACK is monitored. Processor entering Debug mode triggers an intrusion. Position  */
#define SECUMOD_JTAGCR_Msk                    _U_(0x0000001F)                                      /**< (SECUMOD_JTAGCR) Register Mask  */


/* -------- SECUMOD_DYSTUNE : (SECUMOD Offset: 0x74) (R/W 32) Dynamic Signatures Tuning Register -------- */
#define SECUMOD_DYSTUNE_RESETVALUE            _U_(0x10501)                                         /**<  (SECUMOD_DYSTUNE) Dynamic Signatures Tuning Register  Reset Value */

#define SECUMOD_DYSTUNE_RX_ERROR_THRESHOLD_Pos _U_(0)                                               /**< (SECUMOD_DYSTUNE) Error Detection Threshold Position */
#define SECUMOD_DYSTUNE_RX_ERROR_THRESHOLD_Msk (_U_(0x7F) << SECUMOD_DYSTUNE_RX_ERROR_THRESHOLD_Pos) /**< (SECUMOD_DYSTUNE) Error Detection Threshold Mask */
#define SECUMOD_DYSTUNE_RX_ERROR_THRESHOLD(value) (SECUMOD_DYSTUNE_RX_ERROR_THRESHOLD_Msk & ((value) << SECUMOD_DYSTUNE_RX_ERROR_THRESHOLD_Pos))
#define SECUMOD_DYSTUNE_NOPA_Pos              _U_(7)                                               /**< (SECUMOD_DYSTUNE) No Periodic Alarm Position */
#define SECUMOD_DYSTUNE_NOPA_Msk              (_U_(0x1) << SECUMOD_DYSTUNE_NOPA_Pos)               /**< (SECUMOD_DYSTUNE) No Periodic Alarm Mask */
#define SECUMOD_DYSTUNE_NOPA(value)           (SECUMOD_DYSTUNE_NOPA_Msk & ((value) << SECUMOD_DYSTUNE_NOPA_Pos))
#define   SECUMOD_DYSTUNE_NOPA_0_Val          _U_(0x0)                                             /**< (SECUMOD_DYSTUNE) The alarm is regenerated periodically while intrusion is maintained.  */
#define   SECUMOD_DYSTUNE_NOPA_1_Val          _U_(0x1)                                             /**< (SECUMOD_DYSTUNE) The alarm is not regenerated periodically while intrusion is maintained.  */
#define SECUMOD_DYSTUNE_NOPA_0                (SECUMOD_DYSTUNE_NOPA_0_Val << SECUMOD_DYSTUNE_NOPA_Pos) /**< (SECUMOD_DYSTUNE) The alarm is regenerated periodically while intrusion is maintained. Position  */
#define SECUMOD_DYSTUNE_NOPA_1                (SECUMOD_DYSTUNE_NOPA_1_Val << SECUMOD_DYSTUNE_NOPA_Pos) /**< (SECUMOD_DYSTUNE) The alarm is not regenerated periodically while intrusion is maintained. Position  */
#define SECUMOD_DYSTUNE_RX_OK_CORREL_NUMBER_Pos _U_(8)                                               /**< (SECUMOD_DYSTUNE) Error Counter Reset Threshold Position */
#define SECUMOD_DYSTUNE_RX_OK_CORREL_NUMBER_Msk (_U_(0xFF) << SECUMOD_DYSTUNE_RX_OK_CORREL_NUMBER_Pos) /**< (SECUMOD_DYSTUNE) Error Counter Reset Threshold Mask */
#define SECUMOD_DYSTUNE_RX_OK_CORREL_NUMBER(value) (SECUMOD_DYSTUNE_RX_OK_CORREL_NUMBER_Msk & ((value) << SECUMOD_DYSTUNE_RX_OK_CORREL_NUMBER_Pos))
#define SECUMOD_DYSTUNE_PERIOD_Pos            _U_(16)                                              /**< (SECUMOD_DYSTUNE) Signature Clock Period Position */
#define SECUMOD_DYSTUNE_PERIOD_Msk            (_U_(0xFFFF) << SECUMOD_DYSTUNE_PERIOD_Pos)          /**< (SECUMOD_DYSTUNE) Signature Clock Period Mask */
#define SECUMOD_DYSTUNE_PERIOD(value)         (SECUMOD_DYSTUNE_PERIOD_Msk & ((value) << SECUMOD_DYSTUNE_PERIOD_Pos))
#define SECUMOD_DYSTUNE_Msk                   _U_(0xFFFFFFFF)                                      /**< (SECUMOD_DYSTUNE) Register Mask  */


/* -------- SECUMOD_SCRKEY : (SECUMOD Offset: 0x78) (R/W 32) Scrambling Key Register -------- */
#define SECUMOD_SCRKEY_SCRKEY_Pos             _U_(0)                                               /**< (SECUMOD_SCRKEY) Scrambling Key Value Position */
#define SECUMOD_SCRKEY_SCRKEY_Msk             (_U_(0xFFFFFFFF) << SECUMOD_SCRKEY_SCRKEY_Pos)       /**< (SECUMOD_SCRKEY) Scrambling Key Value Mask */
#define SECUMOD_SCRKEY_SCRKEY(value)          (SECUMOD_SCRKEY_SCRKEY_Msk & ((value) << SECUMOD_SCRKEY_SCRKEY_Pos))
#define SECUMOD_SCRKEY_Msk                    _U_(0xFFFFFFFF)                                      /**< (SECUMOD_SCRKEY) Register Mask  */


/* -------- SECUMOD_RAMACC : (SECUMOD Offset: 0x7C) (R/W 32) RAM Access Rights Register -------- */
#define SECUMOD_RAMACC_RESETVALUE             _U_(0x3FFFF)                                         /**<  (SECUMOD_RAMACC) RAM Access Rights Register  Reset Value */

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


/* -------- SECUMOD_RAMACCSR : (SECUMOD Offset: 0x80) (R/W 32) RAM Access Rights Status Register -------- */
#define SECUMOD_RAMACCSR_RESETVALUE           _U_(0x00)                                            /**<  (SECUMOD_RAMACCSR) RAM Access Rights Status Register  Reset Value */

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


/* -------- SECUMOD_BMPR : (SECUMOD Offset: 0x84) (R/W 32) Backup Mode Protection Register -------- */
#define SECUMOD_BMPR_RESETVALUE               _U_(0xF0CCF)                                         /**<  (SECUMOD_BMPR) Backup Mode Protection Register  Reset Value */

#define SECUMOD_BMPR_DBLFM_Pos                _U_(1)                                               /**< (SECUMOD_BMPR) Double Frequency Monitor Protection Position */
#define SECUMOD_BMPR_DBLFM_Msk                (_U_(0x1) << SECUMOD_BMPR_DBLFM_Pos)                 /**< (SECUMOD_BMPR) Double Frequency Monitor Protection Mask */
#define SECUMOD_BMPR_DBLFM(value)             (SECUMOD_BMPR_DBLFM_Msk & ((value) << SECUMOD_BMPR_DBLFM_Pos))
#define SECUMOD_BMPR_TST_Pos                  _U_(2)                                               /**< (SECUMOD_BMPR) Test Pin Protection Position */
#define SECUMOD_BMPR_TST_Msk                  (_U_(0x1) << SECUMOD_BMPR_TST_Pos)                   /**< (SECUMOD_BMPR) Test Pin Protection Mask */
#define SECUMOD_BMPR_TST(value)               (SECUMOD_BMPR_TST_Msk & ((value) << SECUMOD_BMPR_TST_Pos))
#define SECUMOD_BMPR_JTAG_Pos                 _U_(3)                                               /**< (SECUMOD_BMPR) JTAG Pin Protection Position */
#define SECUMOD_BMPR_JTAG_Msk                 (_U_(0x1) << SECUMOD_BMPR_JTAG_Pos)                  /**< (SECUMOD_BMPR) JTAG Pin Protection Mask */
#define SECUMOD_BMPR_JTAG(value)              (SECUMOD_BMPR_JTAG_Msk & ((value) << SECUMOD_BMPR_JTAG_Pos))
#define SECUMOD_BMPR_TPML_Pos                 _U_(6)                                               /**< (SECUMOD_BMPR) Low Temperature Monitor Protection Position */
#define SECUMOD_BMPR_TPML_Msk                 (_U_(0x1) << SECUMOD_BMPR_TPML_Pos)                  /**< (SECUMOD_BMPR) Low Temperature Monitor Protection Mask */
#define SECUMOD_BMPR_TPML(value)              (SECUMOD_BMPR_TPML_Msk & ((value) << SECUMOD_BMPR_TPML_Pos))
#define SECUMOD_BMPR_TPMH_Pos                 _U_(7)                                               /**< (SECUMOD_BMPR) High Temperature Monitor Protection Position */
#define SECUMOD_BMPR_TPMH_Msk                 (_U_(0x1) << SECUMOD_BMPR_TPMH_Pos)                  /**< (SECUMOD_BMPR) High Temperature Monitor Protection Mask */
#define SECUMOD_BMPR_TPMH(value)              (SECUMOD_BMPR_TPMH_Msk & ((value) << SECUMOD_BMPR_TPMH_Pos))
#define SECUMOD_BMPR_VBATL_Pos                _U_(10)                                              /**< (SECUMOD_BMPR) Low VBAT Voltage Monitor Protection Position */
#define SECUMOD_BMPR_VBATL_Msk                (_U_(0x1) << SECUMOD_BMPR_VBATL_Pos)                 /**< (SECUMOD_BMPR) Low VBAT Voltage Monitor Protection Mask */
#define SECUMOD_BMPR_VBATL(value)             (SECUMOD_BMPR_VBATL_Msk & ((value) << SECUMOD_BMPR_VBATL_Pos))
#define SECUMOD_BMPR_VBATH_Pos                _U_(11)                                              /**< (SECUMOD_BMPR) High VBAT Voltage Monitor Protection Position */
#define SECUMOD_BMPR_VBATH_Msk                (_U_(0x1) << SECUMOD_BMPR_VBATH_Pos)                 /**< (SECUMOD_BMPR) High VBAT Voltage Monitor Protection Mask */
#define SECUMOD_BMPR_VBATH(value)             (SECUMOD_BMPR_VBATH_Msk & ((value) << SECUMOD_BMPR_VBATH_Pos))
#define SECUMOD_BMPR_DET0_Pos                 _U_(18)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET0_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET0_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET0(value)              (SECUMOD_BMPR_DET0_Msk & ((value) << SECUMOD_BMPR_DET0_Pos))
#define SECUMOD_BMPR_DET1_Pos                 _U_(19)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET1_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET1_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET1(value)              (SECUMOD_BMPR_DET1_Msk & ((value) << SECUMOD_BMPR_DET1_Pos))
#define SECUMOD_BMPR_DET2_Pos                 _U_(20)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET2_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET2_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET2(value)              (SECUMOD_BMPR_DET2_Msk & ((value) << SECUMOD_BMPR_DET2_Pos))
#define SECUMOD_BMPR_DET3_Pos                 _U_(21)                                              /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_BMPR_DET3_Msk                 (_U_(0x1) << SECUMOD_BMPR_DET3_Pos)                  /**< (SECUMOD_BMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_BMPR_DET3(value)              (SECUMOD_BMPR_DET3_Msk & ((value) << SECUMOD_BMPR_DET3_Pos))
#define SECUMOD_BMPR_Msk                      _U_(0x003C0CCE)                                      /**< (SECUMOD_BMPR) Register Mask  */

#define SECUMOD_BMPR_DET_Pos                  _U_(18)                                              /**< (SECUMOD_BMPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_BMPR_DET_Msk                  (_U_(0xF) << SECUMOD_BMPR_DET_Pos)                   /**< (SECUMOD_BMPR Mask) DET */
#define SECUMOD_BMPR_DET(value)               (SECUMOD_BMPR_DET_Msk & ((value) << SECUMOD_BMPR_DET_Pos)) 

/* -------- SECUMOD_NMPR : (SECUMOD Offset: 0x88) (R/W 32) Normal Mode Protection Register -------- */
#define SECUMOD_NMPR_RESETVALUE               _U_(0xFFFFF)                                         /**<  (SECUMOD_NMPR) Normal Mode Protection Register  Reset Value */

#define SECUMOD_NMPR_DBLFM_Pos                _U_(1)                                               /**< (SECUMOD_NMPR) Double Frequency Monitor Protection Position */
#define SECUMOD_NMPR_DBLFM_Msk                (_U_(0x1) << SECUMOD_NMPR_DBLFM_Pos)                 /**< (SECUMOD_NMPR) Double Frequency Monitor Protection Mask */
#define SECUMOD_NMPR_DBLFM(value)             (SECUMOD_NMPR_DBLFM_Msk & ((value) << SECUMOD_NMPR_DBLFM_Pos))
#define SECUMOD_NMPR_TST_Pos                  _U_(2)                                               /**< (SECUMOD_NMPR) Test Pin Protection Position */
#define SECUMOD_NMPR_TST_Msk                  (_U_(0x1) << SECUMOD_NMPR_TST_Pos)                   /**< (SECUMOD_NMPR) Test Pin Protection Mask */
#define SECUMOD_NMPR_TST(value)               (SECUMOD_NMPR_TST_Msk & ((value) << SECUMOD_NMPR_TST_Pos))
#define SECUMOD_NMPR_JTAG_Pos                 _U_(3)                                               /**< (SECUMOD_NMPR) JTAG Pin Protection Position */
#define SECUMOD_NMPR_JTAG_Msk                 (_U_(0x1) << SECUMOD_NMPR_JTAG_Pos)                  /**< (SECUMOD_NMPR) JTAG Pin Protection Mask */
#define SECUMOD_NMPR_JTAG(value)              (SECUMOD_NMPR_JTAG_Msk & ((value) << SECUMOD_NMPR_JTAG_Pos))
#define SECUMOD_NMPR_REGANA_Pos               _U_(4)                                               /**< (SECUMOD_NMPR) VDDANA regulator voltage monitor Protection Position */
#define SECUMOD_NMPR_REGANA_Msk               (_U_(0x1) << SECUMOD_NMPR_REGANA_Pos)                /**< (SECUMOD_NMPR) VDDANA regulator voltage monitor Protection Mask */
#define SECUMOD_NMPR_REGANA(value)            (SECUMOD_NMPR_REGANA_Msk & ((value) << SECUMOD_NMPR_REGANA_Pos))
#define SECUMOD_NMPR_MCKM_Pos                 _U_(5)                                               /**< (SECUMOD_NMPR) Master Clock Monitor Protection Position */
#define SECUMOD_NMPR_MCKM_Msk                 (_U_(0x1) << SECUMOD_NMPR_MCKM_Pos)                  /**< (SECUMOD_NMPR) Master Clock Monitor Protection Mask */
#define SECUMOD_NMPR_MCKM(value)              (SECUMOD_NMPR_MCKM_Msk & ((value) << SECUMOD_NMPR_MCKM_Pos))
#define SECUMOD_NMPR_TPML_Pos                 _U_(6)                                               /**< (SECUMOD_NMPR) Low Temperature Monitor Protection Position */
#define SECUMOD_NMPR_TPML_Msk                 (_U_(0x1) << SECUMOD_NMPR_TPML_Pos)                  /**< (SECUMOD_NMPR) Low Temperature Monitor Protection Mask */
#define SECUMOD_NMPR_TPML(value)              (SECUMOD_NMPR_TPML_Msk & ((value) << SECUMOD_NMPR_TPML_Pos))
#define SECUMOD_NMPR_TPMH_Pos                 _U_(7)                                               /**< (SECUMOD_NMPR) High Temperature Monitor Protection Position */
#define SECUMOD_NMPR_TPMH_Msk                 (_U_(0x1) << SECUMOD_NMPR_TPMH_Pos)                  /**< (SECUMOD_NMPR) High Temperature Monitor Protection Mask */
#define SECUMOD_NMPR_TPMH(value)              (SECUMOD_NMPR_TPMH_Msk & ((value) << SECUMOD_NMPR_TPMH_Pos))
#define SECUMOD_NMPR_VBATL_Pos                _U_(10)                                              /**< (SECUMOD_NMPR) Low VBAT Voltage Monitor Protection Position */
#define SECUMOD_NMPR_VBATL_Msk                (_U_(0x1) << SECUMOD_NMPR_VBATL_Pos)                 /**< (SECUMOD_NMPR) Low VBAT Voltage Monitor Protection Mask */
#define SECUMOD_NMPR_VBATL(value)             (SECUMOD_NMPR_VBATL_Msk & ((value) << SECUMOD_NMPR_VBATL_Pos))
#define SECUMOD_NMPR_VBATH_Pos                _U_(11)                                              /**< (SECUMOD_NMPR) High VBAT Voltage Monitor Protection Position */
#define SECUMOD_NMPR_VBATH_Msk                (_U_(0x1) << SECUMOD_NMPR_VBATH_Pos)                 /**< (SECUMOD_NMPR) High VBAT Voltage Monitor Protection Mask */
#define SECUMOD_NMPR_VBATH(value)             (SECUMOD_NMPR_VBATH_Msk & ((value) << SECUMOD_NMPR_VBATH_Pos))
#define SECUMOD_NMPR_VDDCOREL_Pos             _U_(12)                                              /**< (SECUMOD_NMPR) Low VDDCORE Voltage Monitor Protection Position */
#define SECUMOD_NMPR_VDDCOREL_Msk             (_U_(0x1) << SECUMOD_NMPR_VDDCOREL_Pos)              /**< (SECUMOD_NMPR) Low VDDCORE Voltage Monitor Protection Mask */
#define SECUMOD_NMPR_VDDCOREL(value)          (SECUMOD_NMPR_VDDCOREL_Msk & ((value) << SECUMOD_NMPR_VDDCOREL_Pos))
#define SECUMOD_NMPR_VDDCPUL_Pos              _U_(13)                                              /**< (SECUMOD_NMPR) Low VDDCPU Voltage Monitor Protection Position */
#define SECUMOD_NMPR_VDDCPUL_Msk              (_U_(0x1) << SECUMOD_NMPR_VDDCPUL_Pos)               /**< (SECUMOD_NMPR) Low VDDCPU Voltage Monitor Protection Mask */
#define SECUMOD_NMPR_VDDCPUL(value)           (SECUMOD_NMPR_VDDCPUL_Msk & ((value) << SECUMOD_NMPR_VDDCPUL_Pos))
#define SECUMOD_NMPR_VDDCOREH_Pos             _U_(14)                                              /**< (SECUMOD_NMPR) High VDDCORE Voltage Monitor Protection Position */
#define SECUMOD_NMPR_VDDCOREH_Msk             (_U_(0x1) << SECUMOD_NMPR_VDDCOREH_Pos)              /**< (SECUMOD_NMPR) High VDDCORE Voltage Monitor Protection Mask */
#define SECUMOD_NMPR_VDDCOREH(value)          (SECUMOD_NMPR_VDDCOREH_Msk & ((value) << SECUMOD_NMPR_VDDCOREH_Pos))
#define SECUMOD_NMPR_VDDCPUH_Pos              _U_(15)                                              /**< (SECUMOD_NMPR) High VDDCPU Voltage Monitor Protection Position */
#define SECUMOD_NMPR_VDDCPUH_Msk              (_U_(0x1) << SECUMOD_NMPR_VDDCPUH_Pos)               /**< (SECUMOD_NMPR) High VDDCPU Voltage Monitor Protection Mask */
#define SECUMOD_NMPR_VDDCPUH(value)           (SECUMOD_NMPR_VDDCPUH_Msk & ((value) << SECUMOD_NMPR_VDDCPUH_Pos))
#define SECUMOD_NMPR_DET0_Pos                 _U_(18)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET0_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET0_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET0(value)              (SECUMOD_NMPR_DET0_Msk & ((value) << SECUMOD_NMPR_DET0_Pos))
#define SECUMOD_NMPR_DET1_Pos                 _U_(19)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET1_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET1_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET1(value)              (SECUMOD_NMPR_DET1_Msk & ((value) << SECUMOD_NMPR_DET1_Pos))
#define SECUMOD_NMPR_DET2_Pos                 _U_(20)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET2_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET2_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET2(value)              (SECUMOD_NMPR_DET2_Msk & ((value) << SECUMOD_NMPR_DET2_Pos))
#define SECUMOD_NMPR_DET3_Pos                 _U_(21)                                              /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_NMPR_DET3_Msk                 (_U_(0x1) << SECUMOD_NMPR_DET3_Pos)                  /**< (SECUMOD_NMPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_NMPR_DET3(value)              (SECUMOD_NMPR_DET3_Msk & ((value) << SECUMOD_NMPR_DET3_Pos))
#define SECUMOD_NMPR_Msk                      _U_(0x003CFCFE)                                      /**< (SECUMOD_NMPR) Register Mask  */

#define SECUMOD_NMPR_DET_Pos                  _U_(18)                                              /**< (SECUMOD_NMPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_NMPR_DET_Msk                  (_U_(0xF) << SECUMOD_NMPR_DET_Pos)                   /**< (SECUMOD_NMPR Mask) DET */
#define SECUMOD_NMPR_DET(value)               (SECUMOD_NMPR_DET_Msk & ((value) << SECUMOD_NMPR_DET_Pos)) 

/* -------- SECUMOD_NIEPR : (SECUMOD Offset: 0x8C) ( /W 32) Normal Interrupt Enable Protection Register -------- */
#define SECUMOD_NIEPR_DBLFM_Pos               _U_(1)                                               /**< (SECUMOD_NIEPR) Double Frequency Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DBLFM_Msk               (_U_(0x1) << SECUMOD_NIEPR_DBLFM_Pos)                /**< (SECUMOD_NIEPR) Double Frequency Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DBLFM(value)            (SECUMOD_NIEPR_DBLFM_Msk & ((value) << SECUMOD_NIEPR_DBLFM_Pos))
#define SECUMOD_NIEPR_TST_Pos                 _U_(2)                                               /**< (SECUMOD_NIEPR) Test Pin Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_TST_Msk                 (_U_(0x1) << SECUMOD_NIEPR_TST_Pos)                  /**< (SECUMOD_NIEPR) Test Pin Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_TST(value)              (SECUMOD_NIEPR_TST_Msk & ((value) << SECUMOD_NIEPR_TST_Pos))
#define SECUMOD_NIEPR_JTAG_Pos                _U_(3)                                               /**< (SECUMOD_NIEPR) JTAG Pin Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_JTAG_Msk                (_U_(0x1) << SECUMOD_NIEPR_JTAG_Pos)                 /**< (SECUMOD_NIEPR) JTAG Pin Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_JTAG(value)             (SECUMOD_NIEPR_JTAG_Msk & ((value) << SECUMOD_NIEPR_JTAG_Pos))
#define SECUMOD_NIEPR_REGANA_Pos              _U_(4)                                               /**< (SECUMOD_NIEPR) VDDANA regulator voltage monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_REGANA_Msk              (_U_(0x1) << SECUMOD_NIEPR_REGANA_Pos)               /**< (SECUMOD_NIEPR) VDDANA regulator voltage monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_REGANA(value)           (SECUMOD_NIEPR_REGANA_Msk & ((value) << SECUMOD_NIEPR_REGANA_Pos))
#define SECUMOD_NIEPR_MCKM_Pos                _U_(5)                                               /**< (SECUMOD_NIEPR) Master Clock Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_MCKM_Msk                (_U_(0x1) << SECUMOD_NIEPR_MCKM_Pos)                 /**< (SECUMOD_NIEPR) Master Clock Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_MCKM(value)             (SECUMOD_NIEPR_MCKM_Msk & ((value) << SECUMOD_NIEPR_MCKM_Pos))
#define SECUMOD_NIEPR_TPML_Pos                _U_(6)                                               /**< (SECUMOD_NIEPR) Low Temperature Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_TPML_Msk                (_U_(0x1) << SECUMOD_NIEPR_TPML_Pos)                 /**< (SECUMOD_NIEPR) Low Temperature Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_TPML(value)             (SECUMOD_NIEPR_TPML_Msk & ((value) << SECUMOD_NIEPR_TPML_Pos))
#define SECUMOD_NIEPR_TPMH_Pos                _U_(7)                                               /**< (SECUMOD_NIEPR) High Temperature Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_TPMH_Msk                (_U_(0x1) << SECUMOD_NIEPR_TPMH_Pos)                 /**< (SECUMOD_NIEPR) High Temperature Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_TPMH(value)             (SECUMOD_NIEPR_TPMH_Msk & ((value) << SECUMOD_NIEPR_TPMH_Pos))
#define SECUMOD_NIEPR_VBATL_Pos               _U_(10)                                              /**< (SECUMOD_NIEPR) Low VBAT Voltage Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_VBATL_Msk               (_U_(0x1) << SECUMOD_NIEPR_VBATL_Pos)                /**< (SECUMOD_NIEPR) Low VBAT Voltage Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_VBATL(value)            (SECUMOD_NIEPR_VBATL_Msk & ((value) << SECUMOD_NIEPR_VBATL_Pos))
#define SECUMOD_NIEPR_VBATH_Pos               _U_(11)                                              /**< (SECUMOD_NIEPR) High VBAT Voltage Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_VBATH_Msk               (_U_(0x1) << SECUMOD_NIEPR_VBATH_Pos)                /**< (SECUMOD_NIEPR) High VBAT Voltage Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_VBATH(value)            (SECUMOD_NIEPR_VBATH_Msk & ((value) << SECUMOD_NIEPR_VBATH_Pos))
#define SECUMOD_NIEPR_VDDCOREL_Pos            _U_(12)                                              /**< (SECUMOD_NIEPR) Low VDDCORE Voltage Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_VDDCOREL_Msk            (_U_(0x1) << SECUMOD_NIEPR_VDDCOREL_Pos)             /**< (SECUMOD_NIEPR) Low VDDCORE Voltage Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_VDDCOREL(value)         (SECUMOD_NIEPR_VDDCOREL_Msk & ((value) << SECUMOD_NIEPR_VDDCOREL_Pos))
#define SECUMOD_NIEPR_VDDCPUL_Pos             _U_(13)                                              /**< (SECUMOD_NIEPR) Low VDDCPU Voltage Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_VDDCPUL_Msk             (_U_(0x1) << SECUMOD_NIEPR_VDDCPUL_Pos)              /**< (SECUMOD_NIEPR) Low VDDCPU Voltage Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_VDDCPUL(value)          (SECUMOD_NIEPR_VDDCPUL_Msk & ((value) << SECUMOD_NIEPR_VDDCPUL_Pos))
#define SECUMOD_NIEPR_VDDCOREH_Pos            _U_(14)                                              /**< (SECUMOD_NIEPR) High VDDCORE Voltage Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_VDDCOREH_Msk            (_U_(0x1) << SECUMOD_NIEPR_VDDCOREH_Pos)             /**< (SECUMOD_NIEPR) High VDDCORE Voltage Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_VDDCOREH(value)         (SECUMOD_NIEPR_VDDCOREH_Msk & ((value) << SECUMOD_NIEPR_VDDCOREH_Pos))
#define SECUMOD_NIEPR_VDDCPUH_Pos             _U_(15)                                              /**< (SECUMOD_NIEPR) High VDDCPU Voltage Monitor Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_VDDCPUH_Msk             (_U_(0x1) << SECUMOD_NIEPR_VDDCPUH_Pos)              /**< (SECUMOD_NIEPR) High VDDCPU Voltage Monitor Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_VDDCPUH(value)          (SECUMOD_NIEPR_VDDCPUH_Msk & ((value) << SECUMOD_NIEPR_VDDCPUH_Pos))
#define SECUMOD_NIEPR_DET0_Pos                _U_(18)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET0_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET0_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET0(value)             (SECUMOD_NIEPR_DET0_Msk & ((value) << SECUMOD_NIEPR_DET0_Pos))
#define SECUMOD_NIEPR_DET1_Pos                _U_(19)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET1_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET1_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET1(value)             (SECUMOD_NIEPR_DET1_Msk & ((value) << SECUMOD_NIEPR_DET1_Pos))
#define SECUMOD_NIEPR_DET2_Pos                _U_(20)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET2_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET2_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET2(value)             (SECUMOD_NIEPR_DET2_Msk & ((value) << SECUMOD_NIEPR_DET2_Pos))
#define SECUMOD_NIEPR_DET3_Pos                _U_(21)                                              /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Position */
#define SECUMOD_NIEPR_DET3_Msk                (_U_(0x1) << SECUMOD_NIEPR_DET3_Pos)                 /**< (SECUMOD_NIEPR) PIOBU Intrusion Detector Protection Interrupt Enable Mask */
#define SECUMOD_NIEPR_DET3(value)             (SECUMOD_NIEPR_DET3_Msk & ((value) << SECUMOD_NIEPR_DET3_Pos))
#define SECUMOD_NIEPR_Msk                     _U_(0x003CFCFE)                                      /**< (SECUMOD_NIEPR) Register Mask  */

#define SECUMOD_NIEPR_DET_Pos                 _U_(18)                                              /**< (SECUMOD_NIEPR Position) PIOBU Intrusion Detector Protection Interrupt Enable */
#define SECUMOD_NIEPR_DET_Msk                 (_U_(0xF) << SECUMOD_NIEPR_DET_Pos)                  /**< (SECUMOD_NIEPR Mask) DET */
#define SECUMOD_NIEPR_DET(value)              (SECUMOD_NIEPR_DET_Msk & ((value) << SECUMOD_NIEPR_DET_Pos)) 

/* -------- SECUMOD_NIDPR : (SECUMOD Offset: 0x90) ( /W 32) Normal Interrupt Disable Protection Register -------- */
#define SECUMOD_NIDPR_DBLFM_Pos               _U_(1)                                               /**< (SECUMOD_NIDPR) Double Frequency Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DBLFM_Msk               (_U_(0x1) << SECUMOD_NIDPR_DBLFM_Pos)                /**< (SECUMOD_NIDPR) Double Frequency Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DBLFM(value)            (SECUMOD_NIDPR_DBLFM_Msk & ((value) << SECUMOD_NIDPR_DBLFM_Pos))
#define SECUMOD_NIDPR_TST_Pos                 _U_(2)                                               /**< (SECUMOD_NIDPR) Test Pin Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_TST_Msk                 (_U_(0x1) << SECUMOD_NIDPR_TST_Pos)                  /**< (SECUMOD_NIDPR) Test Pin Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_TST(value)              (SECUMOD_NIDPR_TST_Msk & ((value) << SECUMOD_NIDPR_TST_Pos))
#define SECUMOD_NIDPR_JTAG_Pos                _U_(3)                                               /**< (SECUMOD_NIDPR) JTAG Pin Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_JTAG_Msk                (_U_(0x1) << SECUMOD_NIDPR_JTAG_Pos)                 /**< (SECUMOD_NIDPR) JTAG Pin Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_JTAG(value)             (SECUMOD_NIDPR_JTAG_Msk & ((value) << SECUMOD_NIDPR_JTAG_Pos))
#define SECUMOD_NIDPR_REGANA_Pos              _U_(4)                                               /**< (SECUMOD_NIDPR) VDDANA regulator voltage monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_REGANA_Msk              (_U_(0x1) << SECUMOD_NIDPR_REGANA_Pos)               /**< (SECUMOD_NIDPR) VDDANA regulator voltage monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_REGANA(value)           (SECUMOD_NIDPR_REGANA_Msk & ((value) << SECUMOD_NIDPR_REGANA_Pos))
#define SECUMOD_NIDPR_MCKM_Pos                _U_(5)                                               /**< (SECUMOD_NIDPR) Master Clock Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_MCKM_Msk                (_U_(0x1) << SECUMOD_NIDPR_MCKM_Pos)                 /**< (SECUMOD_NIDPR) Master Clock Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_MCKM(value)             (SECUMOD_NIDPR_MCKM_Msk & ((value) << SECUMOD_NIDPR_MCKM_Pos))
#define SECUMOD_NIDPR_TPML_Pos                _U_(6)                                               /**< (SECUMOD_NIDPR) Low Temperature Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_TPML_Msk                (_U_(0x1) << SECUMOD_NIDPR_TPML_Pos)                 /**< (SECUMOD_NIDPR) Low Temperature Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_TPML(value)             (SECUMOD_NIDPR_TPML_Msk & ((value) << SECUMOD_NIDPR_TPML_Pos))
#define SECUMOD_NIDPR_TPMH_Pos                _U_(7)                                               /**< (SECUMOD_NIDPR) High Temperature Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_TPMH_Msk                (_U_(0x1) << SECUMOD_NIDPR_TPMH_Pos)                 /**< (SECUMOD_NIDPR) High Temperature Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_TPMH(value)             (SECUMOD_NIDPR_TPMH_Msk & ((value) << SECUMOD_NIDPR_TPMH_Pos))
#define SECUMOD_NIDPR_VBATL_Pos               _U_(10)                                              /**< (SECUMOD_NIDPR) Low VBAT Voltage Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_VBATL_Msk               (_U_(0x1) << SECUMOD_NIDPR_VBATL_Pos)                /**< (SECUMOD_NIDPR) Low VBAT Voltage Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_VBATL(value)            (SECUMOD_NIDPR_VBATL_Msk & ((value) << SECUMOD_NIDPR_VBATL_Pos))
#define SECUMOD_NIDPR_VBATH_Pos               _U_(11)                                              /**< (SECUMOD_NIDPR) High VBAT Voltage Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_VBATH_Msk               (_U_(0x1) << SECUMOD_NIDPR_VBATH_Pos)                /**< (SECUMOD_NIDPR) High VBAT Voltage Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_VBATH(value)            (SECUMOD_NIDPR_VBATH_Msk & ((value) << SECUMOD_NIDPR_VBATH_Pos))
#define SECUMOD_NIDPR_VDDCOREL_Pos            _U_(12)                                              /**< (SECUMOD_NIDPR) Low VDDCORE Voltage Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_VDDCOREL_Msk            (_U_(0x1) << SECUMOD_NIDPR_VDDCOREL_Pos)             /**< (SECUMOD_NIDPR) Low VDDCORE Voltage Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_VDDCOREL(value)         (SECUMOD_NIDPR_VDDCOREL_Msk & ((value) << SECUMOD_NIDPR_VDDCOREL_Pos))
#define SECUMOD_NIDPR_VDDCPUL_Pos             _U_(13)                                              /**< (SECUMOD_NIDPR) Low VDDCPU Voltage Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_VDDCPUL_Msk             (_U_(0x1) << SECUMOD_NIDPR_VDDCPUL_Pos)              /**< (SECUMOD_NIDPR) Low VDDCPU Voltage Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_VDDCPUL(value)          (SECUMOD_NIDPR_VDDCPUL_Msk & ((value) << SECUMOD_NIDPR_VDDCPUL_Pos))
#define SECUMOD_NIDPR_VDDCOREH_Pos            _U_(14)                                              /**< (SECUMOD_NIDPR) High VDDCORE Voltage Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_VDDCOREH_Msk            (_U_(0x1) << SECUMOD_NIDPR_VDDCOREH_Pos)             /**< (SECUMOD_NIDPR) High VDDCORE Voltage Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_VDDCOREH(value)         (SECUMOD_NIDPR_VDDCOREH_Msk & ((value) << SECUMOD_NIDPR_VDDCOREH_Pos))
#define SECUMOD_NIDPR_VDDCPUH_Pos             _U_(15)                                              /**< (SECUMOD_NIDPR) High VDDCPU Voltage Monitor Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_VDDCPUH_Msk             (_U_(0x1) << SECUMOD_NIDPR_VDDCPUH_Pos)              /**< (SECUMOD_NIDPR) High VDDCPU Voltage Monitor Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_VDDCPUH(value)          (SECUMOD_NIDPR_VDDCPUH_Msk & ((value) << SECUMOD_NIDPR_VDDCPUH_Pos))
#define SECUMOD_NIDPR_DET0_Pos                _U_(18)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET0_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET0_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET0(value)             (SECUMOD_NIDPR_DET0_Msk & ((value) << SECUMOD_NIDPR_DET0_Pos))
#define SECUMOD_NIDPR_DET1_Pos                _U_(19)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET1_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET1_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET1(value)             (SECUMOD_NIDPR_DET1_Msk & ((value) << SECUMOD_NIDPR_DET1_Pos))
#define SECUMOD_NIDPR_DET2_Pos                _U_(20)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET2_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET2_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET2(value)             (SECUMOD_NIDPR_DET2_Msk & ((value) << SECUMOD_NIDPR_DET2_Pos))
#define SECUMOD_NIDPR_DET3_Pos                _U_(21)                                              /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Position */
#define SECUMOD_NIDPR_DET3_Msk                (_U_(0x1) << SECUMOD_NIDPR_DET3_Pos)                 /**< (SECUMOD_NIDPR) PIOBU Intrusion Detector Protection Interrupt Disable Mask */
#define SECUMOD_NIDPR_DET3(value)             (SECUMOD_NIDPR_DET3_Msk & ((value) << SECUMOD_NIDPR_DET3_Pos))
#define SECUMOD_NIDPR_Msk                     _U_(0x003CFCFE)                                      /**< (SECUMOD_NIDPR) Register Mask  */

#define SECUMOD_NIDPR_DET_Pos                 _U_(18)                                              /**< (SECUMOD_NIDPR Position) PIOBU Intrusion Detector Protection Interrupt Disable */
#define SECUMOD_NIDPR_DET_Msk                 (_U_(0xF) << SECUMOD_NIDPR_DET_Pos)                  /**< (SECUMOD_NIDPR Mask) DET */
#define SECUMOD_NIDPR_DET(value)              (SECUMOD_NIDPR_DET_Msk & ((value) << SECUMOD_NIDPR_DET_Pos)) 

/* -------- SECUMOD_NIMPR : (SECUMOD Offset: 0x94) ( R/ 32) Normal Interrupt Mask Protection Register -------- */
#define SECUMOD_NIMPR_RESETVALUE              _U_(0x00)                                            /**<  (SECUMOD_NIMPR) Normal Interrupt Mask Protection Register  Reset Value */

#define SECUMOD_NIMPR_DBLFM_Pos               _U_(1)                                               /**< (SECUMOD_NIMPR) Double Frequency Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DBLFM_Msk               (_U_(0x1) << SECUMOD_NIMPR_DBLFM_Pos)                /**< (SECUMOD_NIMPR) Double Frequency Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DBLFM(value)            (SECUMOD_NIMPR_DBLFM_Msk & ((value) << SECUMOD_NIMPR_DBLFM_Pos))
#define SECUMOD_NIMPR_TST_Pos                 _U_(2)                                               /**< (SECUMOD_NIMPR) Test Pin Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_TST_Msk                 (_U_(0x1) << SECUMOD_NIMPR_TST_Pos)                  /**< (SECUMOD_NIMPR) Test Pin Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_TST(value)              (SECUMOD_NIMPR_TST_Msk & ((value) << SECUMOD_NIMPR_TST_Pos))
#define SECUMOD_NIMPR_JTAG_Pos                _U_(3)                                               /**< (SECUMOD_NIMPR) JTAG Pin Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_JTAG_Msk                (_U_(0x1) << SECUMOD_NIMPR_JTAG_Pos)                 /**< (SECUMOD_NIMPR) JTAG Pin Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_JTAG(value)             (SECUMOD_NIMPR_JTAG_Msk & ((value) << SECUMOD_NIMPR_JTAG_Pos))
#define SECUMOD_NIMPR_REGANA_Pos              _U_(4)                                               /**< (SECUMOD_NIMPR) VDDANA regulator voltage monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_REGANA_Msk              (_U_(0x1) << SECUMOD_NIMPR_REGANA_Pos)               /**< (SECUMOD_NIMPR) VDDANA regulator voltage monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_REGANA(value)           (SECUMOD_NIMPR_REGANA_Msk & ((value) << SECUMOD_NIMPR_REGANA_Pos))
#define SECUMOD_NIMPR_MCKM_Pos                _U_(5)                                               /**< (SECUMOD_NIMPR) Master Clock Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_MCKM_Msk                (_U_(0x1) << SECUMOD_NIMPR_MCKM_Pos)                 /**< (SECUMOD_NIMPR) Master Clock Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_MCKM(value)             (SECUMOD_NIMPR_MCKM_Msk & ((value) << SECUMOD_NIMPR_MCKM_Pos))
#define SECUMOD_NIMPR_TPML_Pos                _U_(6)                                               /**< (SECUMOD_NIMPR) Low Temperature Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_TPML_Msk                (_U_(0x1) << SECUMOD_NIMPR_TPML_Pos)                 /**< (SECUMOD_NIMPR) Low Temperature Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_TPML(value)             (SECUMOD_NIMPR_TPML_Msk & ((value) << SECUMOD_NIMPR_TPML_Pos))
#define SECUMOD_NIMPR_TPMH_Pos                _U_(7)                                               /**< (SECUMOD_NIMPR) High Temperature Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_TPMH_Msk                (_U_(0x1) << SECUMOD_NIMPR_TPMH_Pos)                 /**< (SECUMOD_NIMPR) High Temperature Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_TPMH(value)             (SECUMOD_NIMPR_TPMH_Msk & ((value) << SECUMOD_NIMPR_TPMH_Pos))
#define SECUMOD_NIMPR_VBATL_Pos               _U_(10)                                              /**< (SECUMOD_NIMPR) Low VBAT Voltage Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_VBATL_Msk               (_U_(0x1) << SECUMOD_NIMPR_VBATL_Pos)                /**< (SECUMOD_NIMPR) Low VBAT Voltage Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_VBATL(value)            (SECUMOD_NIMPR_VBATL_Msk & ((value) << SECUMOD_NIMPR_VBATL_Pos))
#define SECUMOD_NIMPR_VBATH_Pos               _U_(11)                                              /**< (SECUMOD_NIMPR) High VBAT Voltage Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_VBATH_Msk               (_U_(0x1) << SECUMOD_NIMPR_VBATH_Pos)                /**< (SECUMOD_NIMPR) High VBAT Voltage Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_VBATH(value)            (SECUMOD_NIMPR_VBATH_Msk & ((value) << SECUMOD_NIMPR_VBATH_Pos))
#define SECUMOD_NIMPR_VDDCOREL_Pos            _U_(12)                                              /**< (SECUMOD_NIMPR) Low VDDCORE Voltage Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_VDDCOREL_Msk            (_U_(0x1) << SECUMOD_NIMPR_VDDCOREL_Pos)             /**< (SECUMOD_NIMPR) Low VDDCORE Voltage Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_VDDCOREL(value)         (SECUMOD_NIMPR_VDDCOREL_Msk & ((value) << SECUMOD_NIMPR_VDDCOREL_Pos))
#define SECUMOD_NIMPR_VDDCPUL_Pos             _U_(13)                                              /**< (SECUMOD_NIMPR) Low VDDCPU Voltage Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_VDDCPUL_Msk             (_U_(0x1) << SECUMOD_NIMPR_VDDCPUL_Pos)              /**< (SECUMOD_NIMPR) Low VDDCPU Voltage Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_VDDCPUL(value)          (SECUMOD_NIMPR_VDDCPUL_Msk & ((value) << SECUMOD_NIMPR_VDDCPUL_Pos))
#define SECUMOD_NIMPR_VDDCOREH_Pos            _U_(14)                                              /**< (SECUMOD_NIMPR) High VDDCORE Voltage Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_VDDCOREH_Msk            (_U_(0x1) << SECUMOD_NIMPR_VDDCOREH_Pos)             /**< (SECUMOD_NIMPR) High VDDCORE Voltage Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_VDDCOREH(value)         (SECUMOD_NIMPR_VDDCOREH_Msk & ((value) << SECUMOD_NIMPR_VDDCOREH_Pos))
#define SECUMOD_NIMPR_VDDCPUH_Pos             _U_(15)                                              /**< (SECUMOD_NIMPR) High VDDCPU Voltage Monitor Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_VDDCPUH_Msk             (_U_(0x1) << SECUMOD_NIMPR_VDDCPUH_Pos)              /**< (SECUMOD_NIMPR) High VDDCPU Voltage Monitor Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_VDDCPUH(value)          (SECUMOD_NIMPR_VDDCPUH_Msk & ((value) << SECUMOD_NIMPR_VDDCPUH_Pos))
#define SECUMOD_NIMPR_DET0_Pos                _U_(18)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET0_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET0_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET0(value)             (SECUMOD_NIMPR_DET0_Msk & ((value) << SECUMOD_NIMPR_DET0_Pos))
#define SECUMOD_NIMPR_DET1_Pos                _U_(19)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET1_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET1_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET1(value)             (SECUMOD_NIMPR_DET1_Msk & ((value) << SECUMOD_NIMPR_DET1_Pos))
#define SECUMOD_NIMPR_DET2_Pos                _U_(20)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET2_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET2_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET2(value)             (SECUMOD_NIMPR_DET2_Msk & ((value) << SECUMOD_NIMPR_DET2_Pos))
#define SECUMOD_NIMPR_DET3_Pos                _U_(21)                                              /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Position */
#define SECUMOD_NIMPR_DET3_Msk                (_U_(0x1) << SECUMOD_NIMPR_DET3_Pos)                 /**< (SECUMOD_NIMPR) PIOBU Intrusion Detector Protection Interrupt Mask Mask */
#define SECUMOD_NIMPR_DET3(value)             (SECUMOD_NIMPR_DET3_Msk & ((value) << SECUMOD_NIMPR_DET3_Pos))
#define SECUMOD_NIMPR_Msk                     _U_(0x003CFCFE)                                      /**< (SECUMOD_NIMPR) Register Mask  */

#define SECUMOD_NIMPR_DET_Pos                 _U_(18)                                              /**< (SECUMOD_NIMPR Position) PIOBU Intrusion Detector Protection Interrupt Mask */
#define SECUMOD_NIMPR_DET_Msk                 (_U_(0xF) << SECUMOD_NIMPR_DET_Pos)                  /**< (SECUMOD_NIMPR Mask) DET */
#define SECUMOD_NIMPR_DET(value)              (SECUMOD_NIMPR_DET_Msk & ((value) << SECUMOD_NIMPR_DET_Pos)) 

/* -------- SECUMOD_WKPR : (SECUMOD Offset: 0x98) (R/W 32) Wakeup Protection Register -------- */
#define SECUMOD_WKPR_RESETVALUE               _U_(0x00)                                            /**<  (SECUMOD_WKPR) Wakeup Protection Register  Reset Value */

#define SECUMOD_WKPR_DBLFM_Pos                _U_(1)                                               /**< (SECUMOD_WKPR) Double Frequency Monitor Protection Position */
#define SECUMOD_WKPR_DBLFM_Msk                (_U_(0x1) << SECUMOD_WKPR_DBLFM_Pos)                 /**< (SECUMOD_WKPR) Double Frequency Monitor Protection Mask */
#define SECUMOD_WKPR_DBLFM(value)             (SECUMOD_WKPR_DBLFM_Msk & ((value) << SECUMOD_WKPR_DBLFM_Pos))
#define SECUMOD_WKPR_TST_Pos                  _U_(2)                                               /**< (SECUMOD_WKPR) Test Pin Protection Position */
#define SECUMOD_WKPR_TST_Msk                  (_U_(0x1) << SECUMOD_WKPR_TST_Pos)                   /**< (SECUMOD_WKPR) Test Pin Protection Mask */
#define SECUMOD_WKPR_TST(value)               (SECUMOD_WKPR_TST_Msk & ((value) << SECUMOD_WKPR_TST_Pos))
#define SECUMOD_WKPR_JTAG_Pos                 _U_(3)                                               /**< (SECUMOD_WKPR) JTAG Pin Protection Position */
#define SECUMOD_WKPR_JTAG_Msk                 (_U_(0x1) << SECUMOD_WKPR_JTAG_Pos)                  /**< (SECUMOD_WKPR) JTAG Pin Protection Mask */
#define SECUMOD_WKPR_JTAG(value)              (SECUMOD_WKPR_JTAG_Msk & ((value) << SECUMOD_WKPR_JTAG_Pos))
#define SECUMOD_WKPR_TPML_Pos                 _U_(6)                                               /**< (SECUMOD_WKPR) Low Temperature Monitor Protection Position */
#define SECUMOD_WKPR_TPML_Msk                 (_U_(0x1) << SECUMOD_WKPR_TPML_Pos)                  /**< (SECUMOD_WKPR) Low Temperature Monitor Protection Mask */
#define SECUMOD_WKPR_TPML(value)              (SECUMOD_WKPR_TPML_Msk & ((value) << SECUMOD_WKPR_TPML_Pos))
#define SECUMOD_WKPR_TPMH_Pos                 _U_(7)                                               /**< (SECUMOD_WKPR) High Temperature Monitor Protection Position */
#define SECUMOD_WKPR_TPMH_Msk                 (_U_(0x1) << SECUMOD_WKPR_TPMH_Pos)                  /**< (SECUMOD_WKPR) High Temperature Monitor Protection Mask */
#define SECUMOD_WKPR_TPMH(value)              (SECUMOD_WKPR_TPMH_Msk & ((value) << SECUMOD_WKPR_TPMH_Pos))
#define SECUMOD_WKPR_VBATL_Pos                _U_(10)                                              /**< (SECUMOD_WKPR) Low VBAT Voltage Monitor Protection Position */
#define SECUMOD_WKPR_VBATL_Msk                (_U_(0x1) << SECUMOD_WKPR_VBATL_Pos)                 /**< (SECUMOD_WKPR) Low VBAT Voltage Monitor Protection Mask */
#define SECUMOD_WKPR_VBATL(value)             (SECUMOD_WKPR_VBATL_Msk & ((value) << SECUMOD_WKPR_VBATL_Pos))
#define SECUMOD_WKPR_VBATH_Pos                _U_(11)                                              /**< (SECUMOD_WKPR) High VBAT Voltage Monitor Protection Position */
#define SECUMOD_WKPR_VBATH_Msk                (_U_(0x1) << SECUMOD_WKPR_VBATH_Pos)                 /**< (SECUMOD_WKPR) High VBAT Voltage Monitor Protection Mask */
#define SECUMOD_WKPR_VBATH(value)             (SECUMOD_WKPR_VBATH_Msk & ((value) << SECUMOD_WKPR_VBATH_Pos))
#define SECUMOD_WKPR_DET0_Pos                 _U_(18)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET0_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET0_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET0(value)              (SECUMOD_WKPR_DET0_Msk & ((value) << SECUMOD_WKPR_DET0_Pos))
#define SECUMOD_WKPR_DET1_Pos                 _U_(19)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET1_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET1_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET1(value)              (SECUMOD_WKPR_DET1_Msk & ((value) << SECUMOD_WKPR_DET1_Pos))
#define SECUMOD_WKPR_DET2_Pos                 _U_(20)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET2_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET2_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET2(value)              (SECUMOD_WKPR_DET2_Msk & ((value) << SECUMOD_WKPR_DET2_Pos))
#define SECUMOD_WKPR_DET3_Pos                 _U_(21)                                              /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Position */
#define SECUMOD_WKPR_DET3_Msk                 (_U_(0x1) << SECUMOD_WKPR_DET3_Pos)                  /**< (SECUMOD_WKPR) PIOBU Intrusion Detector Protection Mask */
#define SECUMOD_WKPR_DET3(value)              (SECUMOD_WKPR_DET3_Msk & ((value) << SECUMOD_WKPR_DET3_Pos))
#define SECUMOD_WKPR_Msk                      _U_(0x003C0CCE)                                      /**< (SECUMOD_WKPR) Register Mask  */

#define SECUMOD_WKPR_DET_Pos                  _U_(18)                                              /**< (SECUMOD_WKPR Position) PIOBU Intrusion Detector Protection */
#define SECUMOD_WKPR_DET_Msk                  (_U_(0xF) << SECUMOD_WKPR_DET_Pos)                   /**< (SECUMOD_WKPR Mask) DET */
#define SECUMOD_WKPR_DET(value)               (SECUMOD_WKPR_DET_Msk & ((value) << SECUMOD_WKPR_DET_Pos)) 

/* -------- SECUMOD_GPSBR : (SECUMOD Offset: 0x9C) (R/W 32) General Purpose Security Bits Register -------- */
#define SECUMOD_GPSBR_PSWBU_Pos               _U_(0)                                               /**< (SECUMOD_GPSBR) Enables the backup domain power source to automatically switch from VDDIN33 to VBAT supply when security module enters "backup" mode. Refer to SFRBU specification for details on backup power switch control. Position */
#define SECUMOD_GPSBR_PSWBU_Msk               (_U_(0x1) << SECUMOD_GPSBR_PSWBU_Pos)                /**< (SECUMOD_GPSBR) Enables the backup domain power source to automatically switch from VDDIN33 to VBAT supply when security module enters "backup" mode. Refer to SFRBU specification for details on backup power switch control. Mask */
#define SECUMOD_GPSBR_PSWBU(value)            (SECUMOD_GPSBR_PSWBU_Msk & ((value) << SECUMOD_GPSBR_PSWBU_Pos))
#define SECUMOD_GPSBR_TSRANGE_Pos             _U_(1)                                               /**< (SECUMOD_GPSBR)  Position */
#define SECUMOD_GPSBR_TSRANGE_Msk             (_U_(0x1) << SECUMOD_GPSBR_TSRANGE_Pos)              /**< (SECUMOD_GPSBR)  Mask */
#define SECUMOD_GPSBR_TSRANGE(value)          (SECUMOD_GPSBR_TSRANGE_Msk & ((value) << SECUMOD_GPSBR_TSRANGE_Pos))
#define   SECUMOD_GPSBR_TSRANGE_0_Val         _U_(0x0)                                             /**< (SECUMOD_GPSBR) Sets Temperature Sensor high threshold to 105\xfb C  */
#define   SECUMOD_GPSBR_TSRANGE_1_Val         _U_(0x1)                                             /**< (SECUMOD_GPSBR) Sets Temperature Sensor high threshold to 120\xfb C  */
#define SECUMOD_GPSBR_TSRANGE_0               (SECUMOD_GPSBR_TSRANGE_0_Val << SECUMOD_GPSBR_TSRANGE_Pos) /**< (SECUMOD_GPSBR) Sets Temperature Sensor high threshold to 105\xfb C Position  */
#define SECUMOD_GPSBR_TSRANGE_1               (SECUMOD_GPSBR_TSRANGE_1_Val << SECUMOD_GPSBR_TSRANGE_Pos) /**< (SECUMOD_GPSBR) Sets Temperature Sensor high threshold to 120\xfb C Position  */
#define SECUMOD_GPSBR_SMCPURANGE_Pos          _U_(2)                                               /**< (SECUMOD_GPSBR)  Position */
#define SECUMOD_GPSBR_SMCPURANGE_Msk          (_U_(0x1) << SECUMOD_GPSBR_SMCPURANGE_Pos)           /**< (SECUMOD_GPSBR)  Mask */
#define SECUMOD_GPSBR_SMCPURANGE(value)       (SECUMOD_GPSBR_SMCPURANGE_Msk & ((value) << SECUMOD_GPSBR_SMCPURANGE_Pos))
#define   SECUMOD_GPSBR_SMCPURANGE_0_Val      _U_(0x0)                                             /**< (SECUMOD_GPSBR) Sets SM VDDCPU thresholds for 600MHz max frequency operation  */
#define   SECUMOD_GPSBR_SMCPURANGE_1_Val      _U_(0x1)                                             /**< (SECUMOD_GPSBR) Sets SM VDDCPU thresholds for 800MHz max frequency operation  */
#define SECUMOD_GPSBR_SMCPURANGE_0            (SECUMOD_GPSBR_SMCPURANGE_0_Val << SECUMOD_GPSBR_SMCPURANGE_Pos) /**< (SECUMOD_GPSBR) Sets SM VDDCPU thresholds for 600MHz max frequency operation Position  */
#define SECUMOD_GPSBR_SMCPURANGE_1            (SECUMOD_GPSBR_SMCPURANGE_1_Val << SECUMOD_GPSBR_SMCPURANGE_Pos) /**< (SECUMOD_GPSBR) Sets SM VDDCPU thresholds for 800MHz max frequency operation Position  */
#define SECUMOD_GPSBR_KEY_Pos                 _U_(20)                                              /**< (SECUMOD_GPSBR) Safety key, must write 0xD5E to enable GPSBR modifications Position */
#define SECUMOD_GPSBR_KEY_Msk                 (_U_(0xFFF) << SECUMOD_GPSBR_KEY_Pos)                /**< (SECUMOD_GPSBR) Safety key, must write 0xD5E to enable GPSBR modifications Mask */
#define SECUMOD_GPSBR_KEY(value)              (SECUMOD_GPSBR_KEY_Msk & ((value) << SECUMOD_GPSBR_KEY_Pos))
#define SECUMOD_GPSBR_Msk                     _U_(0xFFF00007)                                      /**< (SECUMOD_GPSBR) Register Mask  */


/** \brief SECUMOD register offsets definitions */
#define SECUMOD_CR_REG_OFST            (0x00)              /**< (SECUMOD_CR) Control Register Offset */
#define SECUMOD_SYSR_REG_OFST          (0x04)              /**< (SECUMOD_SYSR) System Status Register Offset */
#define SECUMOD_SR_REG_OFST            (0x08)              /**< (SECUMOD_SR) Status Register Offset */
#define SECUMOD_ASR_REG_OFST           (0x0C)              /**< (SECUMOD_ASR) Auxiliary Status Register Offset */
#define SECUMOD_SCR_REG_OFST           (0x10)              /**< (SECUMOD_SCR) Status Clear Register Offset */
#define SECUMOD_RAMRDY_REG_OFST        (0x14)              /**< (SECUMOD_RAMRDY) RAM Access Ready Register Offset */
#define SECUMOD_PIOBU_REG_OFST         (0x18)              /**< (SECUMOD_PIOBU) PIO Backup Register x Offset */
#define SECUMOD_PIOBU0_REG_OFST        (0x18)              /**< (SECUMOD_PIOBU0) PIO Backup Register x Offset */
#define SECUMOD_PIOBU1_REG_OFST        (0x1C)              /**< (SECUMOD_PIOBU1) PIO Backup Register x Offset */
#define SECUMOD_PIOBU2_REG_OFST        (0x20)              /**< (SECUMOD_PIOBU2) PIO Backup Register x Offset */
#define SECUMOD_PIOBU3_REG_OFST        (0x24)              /**< (SECUMOD_PIOBU3) PIO Backup Register x Offset */
#define SECUMOD_VBUFR_REG_OFST         (0x58)              /**< (SECUMOD_VBUFR) VBAT Filter Register Offset */
#define SECUMOD_VCOREFR_REG_OFST       (0x64)              /**< (SECUMOD_VCOREFR) VDDCORE Filter Register Offset */
#define SECUMOD_VCPUFR_REG_OFST        (0x68)              /**< (SECUMOD_VCPUFR) VDDCPU Filter Register Offset */
#define SECUMOD_JTAGCR_REG_OFST        (0x70)              /**< (SECUMOD_JTAGCR) JTAG Protection Control Register Offset */
#define SECUMOD_DYSTUNE_REG_OFST       (0x74)              /**< (SECUMOD_DYSTUNE) Dynamic Signatures Tuning Register Offset */
#define SECUMOD_SCRKEY_REG_OFST        (0x78)              /**< (SECUMOD_SCRKEY) Scrambling Key Register Offset */
#define SECUMOD_RAMACC_REG_OFST        (0x7C)              /**< (SECUMOD_RAMACC) RAM Access Rights Register Offset */
#define SECUMOD_RAMACCSR_REG_OFST      (0x80)              /**< (SECUMOD_RAMACCSR) RAM Access Rights Status Register Offset */
#define SECUMOD_BMPR_REG_OFST          (0x84)              /**< (SECUMOD_BMPR) Backup Mode Protection Register Offset */
#define SECUMOD_NMPR_REG_OFST          (0x88)              /**< (SECUMOD_NMPR) Normal Mode Protection Register Offset */
#define SECUMOD_NIEPR_REG_OFST         (0x8C)              /**< (SECUMOD_NIEPR) Normal Interrupt Enable Protection Register Offset */
#define SECUMOD_NIDPR_REG_OFST         (0x90)              /**< (SECUMOD_NIDPR) Normal Interrupt Disable Protection Register Offset */
#define SECUMOD_NIMPR_REG_OFST         (0x94)              /**< (SECUMOD_NIMPR) Normal Interrupt Mask Protection Register Offset */
#define SECUMOD_WKPR_REG_OFST          (0x98)              /**< (SECUMOD_WKPR) Wakeup Protection Register Offset */
#define SECUMOD_GPSBR_REG_OFST         (0x9C)              /**< (SECUMOD_GPSBR) General Purpose Security Bits Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SECUMOD register API structure */
typedef struct
{  /* Security Module */
  __O   uint32_t                       SECUMOD_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SECUMOD_SYSR;       /**< Offset: 0x04 (R/W  32) System Status Register */
  __I   uint32_t                       SECUMOD_SR;         /**< Offset: 0x08 (R/   32) Status Register */
  __I   uint32_t                       SECUMOD_ASR;        /**< Offset: 0x0C (R/   32) Auxiliary Status Register */
  __O   uint32_t                       SECUMOD_SCR;        /**< Offset: 0x10 ( /W  32) Status Clear Register */
  __I   uint32_t                       SECUMOD_RAMRDY;     /**< Offset: 0x14 (R/   32) RAM Access Ready Register */
  __IO  uint32_t                       SECUMOD_PIOBU[4];   /**< Offset: 0x18 (R/W  32) PIO Backup Register x */
  __I   uint8_t                        Reserved1[0x30];
  __IO  uint32_t                       SECUMOD_VBUFR;      /**< Offset: 0x58 (R/W  32) VBAT Filter Register */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       SECUMOD_VCOREFR;    /**< Offset: 0x64 (R/W  32) VDDCORE Filter Register */
  __IO  uint32_t                       SECUMOD_VCPUFR;     /**< Offset: 0x68 (R/W  32) VDDCPU Filter Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       SECUMOD_JTAGCR;     /**< Offset: 0x70 (R/W  32) JTAG Protection Control Register */
  __IO  uint32_t                       SECUMOD_DYSTUNE;    /**< Offset: 0x74 (R/W  32) Dynamic Signatures Tuning Register */
  __IO  uint32_t                       SECUMOD_SCRKEY;     /**< Offset: 0x78 (R/W  32) Scrambling Key Register */
  __IO  uint32_t                       SECUMOD_RAMACC;     /**< Offset: 0x7C (R/W  32) RAM Access Rights Register */
  __IO  uint32_t                       SECUMOD_RAMACCSR;   /**< Offset: 0x80 (R/W  32) RAM Access Rights Status Register */
  __IO  uint32_t                       SECUMOD_BMPR;       /**< Offset: 0x84 (R/W  32) Backup Mode Protection Register */
  __IO  uint32_t                       SECUMOD_NMPR;       /**< Offset: 0x88 (R/W  32) Normal Mode Protection Register */
  __O   uint32_t                       SECUMOD_NIEPR;      /**< Offset: 0x8C ( /W  32) Normal Interrupt Enable Protection Register */
  __O   uint32_t                       SECUMOD_NIDPR;      /**< Offset: 0x90 ( /W  32) Normal Interrupt Disable Protection Register */
  __I   uint32_t                       SECUMOD_NIMPR;      /**< Offset: 0x94 (R/   32) Normal Interrupt Mask Protection Register */
  __IO  uint32_t                       SECUMOD_WKPR;       /**< Offset: 0x98 (R/W  32) Wakeup Protection Register */
  __IO  uint32_t                       SECUMOD_GPSBR;      /**< Offset: 0x9C (R/W  32) General Purpose Security Bits Register */
} secumod_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_SECUMOD_COMPONENT_H_ */
