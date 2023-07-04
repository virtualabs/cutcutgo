/*
 * Component description for RSTC
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
#ifndef _SAMA7G_RSTC_COMPONENT_H_
#define _SAMA7G_RSTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RSTC                                         */
/* ************************************************************************** */

/* -------- RSTC_CR : (RSTC Offset: 0x00) ( /W 32) Control Register -------- */
#define RSTC_CR_PROCRST_Pos                   _U_(0)                                               /**< (RSTC_CR) Processor Reset Position */
#define RSTC_CR_PROCRST_Msk                   (_U_(0x1) << RSTC_CR_PROCRST_Pos)                    /**< (RSTC_CR) Processor Reset Mask */
#define RSTC_CR_PROCRST(value)                (RSTC_CR_PROCRST_Msk & ((value) << RSTC_CR_PROCRST_Pos))
#define   RSTC_CR_PROCRST_0_Val               _U_(0x0)                                             /**< (RSTC_CR) No effect.  */
#define   RSTC_CR_PROCRST_1_Val               _U_(0x1)                                             /**< (RSTC_CR) If KEY = 0xA5, resets the processor and all the embedded peripherals.  */
#define RSTC_CR_PROCRST_0                     (RSTC_CR_PROCRST_0_Val << RSTC_CR_PROCRST_Pos)       /**< (RSTC_CR) No effect. Position  */
#define RSTC_CR_PROCRST_1                     (RSTC_CR_PROCRST_1_Val << RSTC_CR_PROCRST_Pos)       /**< (RSTC_CR) If KEY = 0xA5, resets the processor and all the embedded peripherals. Position  */
#define RSTC_CR_EXTRST_Pos                    _U_(3)                                               /**< (RSTC_CR) External Reset Position */
#define RSTC_CR_EXTRST_Msk                    (_U_(0x1) << RSTC_CR_EXTRST_Pos)                     /**< (RSTC_CR) External Reset Mask */
#define RSTC_CR_EXTRST(value)                 (RSTC_CR_EXTRST_Msk & ((value) << RSTC_CR_EXTRST_Pos))
#define   RSTC_CR_EXTRST_0_Val                _U_(0x0)                                             /**< (RSTC_CR) No effect.  */
#define   RSTC_CR_EXTRST_1_Val                _U_(0x1)                                             /**< (RSTC_CR) If KEY = 0xA5, asserts the NRST_OUT pin.  */
#define RSTC_CR_EXTRST_0                      (RSTC_CR_EXTRST_0_Val << RSTC_CR_EXTRST_Pos)         /**< (RSTC_CR) No effect. Position  */
#define RSTC_CR_EXTRST_1                      (RSTC_CR_EXTRST_1_Val << RSTC_CR_EXTRST_Pos)         /**< (RSTC_CR) If KEY = 0xA5, asserts the NRST_OUT pin. Position  */
#define RSTC_CR_KEY_Pos                       _U_(24)                                              /**< (RSTC_CR) System Reset Key Position */
#define RSTC_CR_KEY_Msk                       (_U_(0xFF) << RSTC_CR_KEY_Pos)                       /**< (RSTC_CR) System Reset Key Mask */
#define RSTC_CR_KEY(value)                    (RSTC_CR_KEY_Msk & ((value) << RSTC_CR_KEY_Pos))    
#define   RSTC_CR_KEY_PASSWD_Val              _U_(0xA5)                                            /**< (RSTC_CR) Writing any other value in this field aborts the write operation.  */
#define RSTC_CR_KEY_PASSWD                    (RSTC_CR_KEY_PASSWD_Val << RSTC_CR_KEY_Pos)          /**< (RSTC_CR) Writing any other value in this field aborts the write operation. Position  */
#define RSTC_CR_Msk                           _U_(0xFF000009)                                      /**< (RSTC_CR) Register Mask  */


/* -------- RSTC_SR : (RSTC Offset: 0x04) ( R/ 32) Status Register -------- */
#define RSTC_SR_RESETVALUE                    _U_(0x00)                                            /**<  (RSTC_SR) Status Register  Reset Value */

#define RSTC_SR_URSTS_Pos                     _U_(0)                                               /**< (RSTC_SR) User Reset Status Position */
#define RSTC_SR_URSTS_Msk                     (_U_(0x1) << RSTC_SR_URSTS_Pos)                      /**< (RSTC_SR) User Reset Status Mask */
#define RSTC_SR_URSTS(value)                  (RSTC_SR_URSTS_Msk & ((value) << RSTC_SR_URSTS_Pos))
#define   RSTC_SR_URSTS_0_Val                 _U_(0x0)                                             /**< (RSTC_SR) No high-to-low edge on NRST happened since the last read of RSTC_SR.  */
#define   RSTC_SR_URSTS_1_Val                 _U_(0x1)                                             /**< (RSTC_SR) At least one high-to-low transition of NRST has been detected since the last read of RSTC_SR.  */
#define RSTC_SR_URSTS_0                       (RSTC_SR_URSTS_0_Val << RSTC_SR_URSTS_Pos)           /**< (RSTC_SR) No high-to-low edge on NRST happened since the last read of RSTC_SR. Position  */
#define RSTC_SR_URSTS_1                       (RSTC_SR_URSTS_1_Val << RSTC_SR_URSTS_Pos)           /**< (RSTC_SR) At least one high-to-low transition of NRST has been detected since the last read of RSTC_SR. Position  */
#define RSTC_SR_RSTTYP_Pos                    _U_(8)                                               /**< (RSTC_SR) Reset Type Position */
#define RSTC_SR_RSTTYP_Msk                    (_U_(0xF) << RSTC_SR_RSTTYP_Pos)                     /**< (RSTC_SR) Reset Type Mask */
#define RSTC_SR_RSTTYP(value)                 (RSTC_SR_RSTTYP_Msk & ((value) << RSTC_SR_RSTTYP_Pos))
#define   RSTC_SR_RSTTYP_GENERAL_RST_Val      _U_(0x0)                                             /**< (RSTC_SR) First powerup reset  */
#define   RSTC_SR_RSTTYP_BACKUP_RST_Val       _U_(0x1)                                             /**< (RSTC_SR) Return from Backup mode  */
#define   RSTC_SR_RSTTYP_WDT_RST_Val          _U_(0x2)                                             /**< (RSTC_SR) Watchdog fault occurred  */
#define   RSTC_SR_RSTTYP_SOFT_RST_Val         _U_(0x3)                                             /**< (RSTC_SR) Processor reset required by the software  */
#define   RSTC_SR_RSTTYP_USER_RST_Val         _U_(0x4)                                             /**< (RSTC_SR) NRST pin detected low  */
#define   RSTC_SR_RSTTYP_SLCK_XTAL_RST_Val    _U_(0x7)                                             /**< (RSTC_SR) 32.768 kHz crystal failure detection fault occurred  */
#define   RSTC_SR_RSTTYP_ULP2_RST_Val         _U_(0x8)                                             /**< (RSTC_SR) ULP Mode 2 reset  */
#define RSTC_SR_RSTTYP_GENERAL_RST            (RSTC_SR_RSTTYP_GENERAL_RST_Val << RSTC_SR_RSTTYP_Pos) /**< (RSTC_SR) First powerup reset Position  */
#define RSTC_SR_RSTTYP_BACKUP_RST             (RSTC_SR_RSTTYP_BACKUP_RST_Val << RSTC_SR_RSTTYP_Pos) /**< (RSTC_SR) Return from Backup mode Position  */
#define RSTC_SR_RSTTYP_WDT_RST                (RSTC_SR_RSTTYP_WDT_RST_Val << RSTC_SR_RSTTYP_Pos)   /**< (RSTC_SR) Watchdog fault occurred Position  */
#define RSTC_SR_RSTTYP_SOFT_RST               (RSTC_SR_RSTTYP_SOFT_RST_Val << RSTC_SR_RSTTYP_Pos)  /**< (RSTC_SR) Processor reset required by the software Position  */
#define RSTC_SR_RSTTYP_USER_RST               (RSTC_SR_RSTTYP_USER_RST_Val << RSTC_SR_RSTTYP_Pos)  /**< (RSTC_SR) NRST pin detected low Position  */
#define RSTC_SR_RSTTYP_SLCK_XTAL_RST          (RSTC_SR_RSTTYP_SLCK_XTAL_RST_Val << RSTC_SR_RSTTYP_Pos) /**< (RSTC_SR) 32.768 kHz crystal failure detection fault occurred Position  */
#define RSTC_SR_RSTTYP_ULP2_RST               (RSTC_SR_RSTTYP_ULP2_RST_Val << RSTC_SR_RSTTYP_Pos)  /**< (RSTC_SR) ULP Mode 2 reset Position  */
#define RSTC_SR_NRSTL_Pos                     _U_(16)                                              /**< (RSTC_SR) NRST Pin Level Position */
#define RSTC_SR_NRSTL_Msk                     (_U_(0x1) << RSTC_SR_NRSTL_Pos)                      /**< (RSTC_SR) NRST Pin Level Mask */
#define RSTC_SR_NRSTL(value)                  (RSTC_SR_NRSTL_Msk & ((value) << RSTC_SR_NRSTL_Pos))
#define RSTC_SR_SRCMP_Pos                     _U_(17)                                              /**< (RSTC_SR) Software Reset Command in Progress Position */
#define RSTC_SR_SRCMP_Msk                     (_U_(0x1) << RSTC_SR_SRCMP_Pos)                      /**< (RSTC_SR) Software Reset Command in Progress Mask */
#define RSTC_SR_SRCMP(value)                  (RSTC_SR_SRCMP_Msk & ((value) << RSTC_SR_SRCMP_Pos))
#define   RSTC_SR_SRCMP_0_Val                 _U_(0x0)                                             /**< (RSTC_SR) No software command is being performed by the RSTC. The RSTC is ready for a software command.  */
#define   RSTC_SR_SRCMP_1_Val                 _U_(0x1)                                             /**< (RSTC_SR) A Software reset command is being performed by the RSTC. The RSTC is busy.  */
#define RSTC_SR_SRCMP_0                       (RSTC_SR_SRCMP_0_Val << RSTC_SR_SRCMP_Pos)           /**< (RSTC_SR) No software command is being performed by the RSTC. The RSTC is ready for a software command. Position  */
#define RSTC_SR_SRCMP_1                       (RSTC_SR_SRCMP_1_Val << RSTC_SR_SRCMP_Pos)           /**< (RSTC_SR) A Software reset command is being performed by the RSTC. The RSTC is busy. Position  */
#define RSTC_SR_Msk                           _U_(0x00030F01)                                      /**< (RSTC_SR) Register Mask  */


/* -------- RSTC_MR : (RSTC Offset: 0x08) (R/W 32) Mode Register -------- */
#define RSTC_MR_RESETVALUE                    _U_(0x01)                                            /**<  (RSTC_MR) Mode Register  Reset Value */

#define RSTC_MR_URSTEN_Pos                    _U_(0)                                               /**< (RSTC_MR) User Reset Enable Position */
#define RSTC_MR_URSTEN_Msk                    (_U_(0x1) << RSTC_MR_URSTEN_Pos)                     /**< (RSTC_MR) User Reset Enable Mask */
#define RSTC_MR_URSTEN(value)                 (RSTC_MR_URSTEN_Msk & ((value) << RSTC_MR_URSTEN_Pos))
#define   RSTC_MR_URSTEN_0_Val                _U_(0x0)                                             /**< (RSTC_MR) The detection of a low level on the NRST pin does not generate a User reset.  */
#define   RSTC_MR_URSTEN_1_Val                _U_(0x1)                                             /**< (RSTC_MR) The detection of a low level on the NRST pin triggers a User reset.  */
#define RSTC_MR_URSTEN_0                      (RSTC_MR_URSTEN_0_Val << RSTC_MR_URSTEN_Pos)         /**< (RSTC_MR) The detection of a low level on the NRST pin does not generate a User reset. Position  */
#define RSTC_MR_URSTEN_1                      (RSTC_MR_URSTEN_1_Val << RSTC_MR_URSTEN_Pos)         /**< (RSTC_MR) The detection of a low level on the NRST pin triggers a User reset. Position  */
#define RSTC_MR_SCKSW_Pos                     _U_(1)                                               /**< (RSTC_MR) Slow Clock Switching Position */
#define RSTC_MR_SCKSW_Msk                     (_U_(0x1) << RSTC_MR_SCKSW_Pos)                      /**< (RSTC_MR) Slow Clock Switching Mask */
#define RSTC_MR_SCKSW(value)                  (RSTC_MR_SCKSW_Msk & ((value) << RSTC_MR_SCKSW_Pos))
#define   RSTC_MR_SCKSW_0_Val                 _U_(0x0)                                             /**< (RSTC_MR) The detection of a 32.768 kHz crystal failure has no effect.  */
#define   RSTC_MR_SCKSW_1_Val                 _U_(0x1)                                             /**< (RSTC_MR) The detection of a 32.768 kHz crystal failure resets the logic supplied by VDDCORE.  */
#define RSTC_MR_SCKSW_0                       (RSTC_MR_SCKSW_0_Val << RSTC_MR_SCKSW_Pos)           /**< (RSTC_MR) The detection of a 32.768 kHz crystal failure has no effect. Position  */
#define RSTC_MR_SCKSW_1                       (RSTC_MR_SCKSW_1_Val << RSTC_MR_SCKSW_Pos)           /**< (RSTC_MR) The detection of a 32.768 kHz crystal failure resets the logic supplied by VDDCORE. Position  */
#define RSTC_MR_URSTASYNC_Pos                 _U_(2)                                               /**< (RSTC_MR) User Reset Asynchronous Control Position */
#define RSTC_MR_URSTASYNC_Msk                 (_U_(0x1) << RSTC_MR_URSTASYNC_Pos)                  /**< (RSTC_MR) User Reset Asynchronous Control Mask */
#define RSTC_MR_URSTASYNC(value)              (RSTC_MR_URSTASYNC_Msk & ((value) << RSTC_MR_URSTASYNC_Pos))
#define   RSTC_MR_URSTASYNC_0_Val             _U_(0x0)                                             /**< (RSTC_MR) The NRST input signal is managed synchronously.  */
#define   RSTC_MR_URSTASYNC_1_Val             _U_(0x1)                                             /**< (RSTC_MR) The NRST input signal is managed asynchronously. Note: this mode cannot be selected if the external bus interface drives an SDR/DDR memory device and another memory on the same bus.  */
#define RSTC_MR_URSTASYNC_0                   (RSTC_MR_URSTASYNC_0_Val << RSTC_MR_URSTASYNC_Pos)   /**< (RSTC_MR) The NRST input signal is managed synchronously. Position  */
#define RSTC_MR_URSTASYNC_1                   (RSTC_MR_URSTASYNC_1_Val << RSTC_MR_URSTASYNC_Pos)   /**< (RSTC_MR) The NRST input signal is managed asynchronously. Note: this mode cannot be selected if the external bus interface drives an SDR/DDR memory device and another memory on the same bus. Position  */
#define RSTC_MR_URSTIEN_Pos                   _U_(4)                                               /**< (RSTC_MR) User Reset Interrupt Enable Position */
#define RSTC_MR_URSTIEN_Msk                   (_U_(0x1) << RSTC_MR_URSTIEN_Pos)                    /**< (RSTC_MR) User Reset Interrupt Enable Mask */
#define RSTC_MR_URSTIEN(value)                (RSTC_MR_URSTIEN_Msk & ((value) << RSTC_MR_URSTIEN_Pos))
#define   RSTC_MR_URSTIEN_0_Val               _U_(0x0)                                             /**< (RSTC_MR) RSTC_SR.USRTS at '1' has no effect on the RSTC interrupt line.  */
#define   RSTC_MR_URSTIEN_1_Val               _U_(0x1)                                             /**< (RSTC_MR) RSTC_SR.USRTS at '1' asserts the RSTC interrupt line if URSTEN = 0.  */
#define RSTC_MR_URSTIEN_0                     (RSTC_MR_URSTIEN_0_Val << RSTC_MR_URSTIEN_Pos)       /**< (RSTC_MR) RSTC_SR.USRTS at '1' has no effect on the RSTC interrupt line. Position  */
#define RSTC_MR_URSTIEN_1                     (RSTC_MR_URSTIEN_1_Val << RSTC_MR_URSTIEN_Pos)       /**< (RSTC_MR) RSTC_SR.USRTS at '1' asserts the RSTC interrupt line if URSTEN = 0. Position  */
#define RSTC_MR_ERSTL_Pos                     _U_(8)                                               /**< (RSTC_MR) External Reset Length Position */
#define RSTC_MR_ERSTL_Msk                     (_U_(0xF) << RSTC_MR_ERSTL_Pos)                      /**< (RSTC_MR) External Reset Length Mask */
#define RSTC_MR_ERSTL(value)                  (RSTC_MR_ERSTL_Msk & ((value) << RSTC_MR_ERSTL_Pos))
#define RSTC_MR_ENGCLR_Pos                    _U_(20)                                              /**< (RSTC_MR) Enable GPBR Clear on Tamper Event Position */
#define RSTC_MR_ENGCLR_Msk                    (_U_(0x1) << RSTC_MR_ENGCLR_Pos)                     /**< (RSTC_MR) Enable GPBR Clear on Tamper Event Mask */
#define RSTC_MR_ENGCLR(value)                 (RSTC_MR_ENGCLR_Msk & ((value) << RSTC_MR_ENGCLR_Pos))
#define   RSTC_MR_ENGCLR_0_Val                _U_(0x0)                                             /**< (RSTC_MR) Disables the GPBR immediate clear on tamper detection event.  */
#define   RSTC_MR_ENGCLR_1_Val                _U_(0x1)                                             /**< (RSTC_MR) Enables the GPBR immediate clear on tamper detection event.  */
#define RSTC_MR_ENGCLR_0                      (RSTC_MR_ENGCLR_0_Val << RSTC_MR_ENGCLR_Pos)         /**< (RSTC_MR) Disables the GPBR immediate clear on tamper detection event. Position  */
#define RSTC_MR_ENGCLR_1                      (RSTC_MR_ENGCLR_1_Val << RSTC_MR_ENGCLR_Pos)         /**< (RSTC_MR) Enables the GPBR immediate clear on tamper detection event. Position  */
#define RSTC_MR_KEY_Pos                       _U_(24)                                              /**< (RSTC_MR) Write Access Password Position */
#define RSTC_MR_KEY_Msk                       (_U_(0xFF) << RSTC_MR_KEY_Pos)                       /**< (RSTC_MR) Write Access Password Mask */
#define RSTC_MR_KEY(value)                    (RSTC_MR_KEY_Msk & ((value) << RSTC_MR_KEY_Pos))    
#define   RSTC_MR_KEY_PASSWD_Val              _U_(0xA5)                                            /**< (RSTC_MR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define RSTC_MR_KEY_PASSWD                    (RSTC_MR_KEY_PASSWD_Val << RSTC_MR_KEY_Pos)          /**< (RSTC_MR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define RSTC_MR_Msk                           _U_(0xFF100F17)                                      /**< (RSTC_MR) Register Mask  */


/* -------- RSTC_GRSTR : (RSTC Offset: 0xE4) (R/W 32) Generic Reset Register -------- */
#define RSTC_GRSTR_RESETVALUE                 _U_(0x70)                                            /**<  (RSTC_GRSTR) Generic Reset Register  Reset Value */

#define RSTC_GRSTR_DDR_RST_Pos                _U_(0)                                               /**< (RSTC_GRSTR) DDR Reset Position */
#define RSTC_GRSTR_DDR_RST_Msk                (_U_(0x1) << RSTC_GRSTR_DDR_RST_Pos)                 /**< (RSTC_GRSTR) DDR Reset Mask */
#define RSTC_GRSTR_DDR_RST(value)             (RSTC_GRSTR_DDR_RST_Msk & ((value) << RSTC_GRSTR_DDR_RST_Pos))
#define   RSTC_GRSTR_DDR_RST_0_Val            _U_(0x0)                                             /**< (RSTC_GRSTR) DDR Controller reset is asserted.  */
#define   RSTC_GRSTR_DDR_RST_1_Val            _U_(0x1)                                             /**< (RSTC_GRSTR) DDR Controller reset is de-asserted.  */
#define RSTC_GRSTR_DDR_RST_0                  (RSTC_GRSTR_DDR_RST_0_Val << RSTC_GRSTR_DDR_RST_Pos) /**< (RSTC_GRSTR) DDR Controller reset is asserted. Position  */
#define RSTC_GRSTR_DDR_RST_1                  (RSTC_GRSTR_DDR_RST_1_Val << RSTC_GRSTR_DDR_RST_Pos) /**< (RSTC_GRSTR) DDR Controller reset is de-asserted. Position  */
#define RSTC_GRSTR_DDR_PHY_RST_Pos            _U_(2)                                               /**< (RSTC_GRSTR) DDR PHY Reset Position */
#define RSTC_GRSTR_DDR_PHY_RST_Msk            (_U_(0x1) << RSTC_GRSTR_DDR_PHY_RST_Pos)             /**< (RSTC_GRSTR) DDR PHY Reset Mask */
#define RSTC_GRSTR_DDR_PHY_RST(value)         (RSTC_GRSTR_DDR_PHY_RST_Msk & ((value) << RSTC_GRSTR_DDR_PHY_RST_Pos))
#define   RSTC_GRSTR_DDR_PHY_RST_0_Val        _U_(0x0)                                             /**< (RSTC_GRSTR) DDR PHY reset is asserted.  */
#define   RSTC_GRSTR_DDR_PHY_RST_1_Val        _U_(0x1)                                             /**< (RSTC_GRSTR) DDR PHY reset is de-asserted.  */
#define RSTC_GRSTR_DDR_PHY_RST_0              (RSTC_GRSTR_DDR_PHY_RST_0_Val << RSTC_GRSTR_DDR_PHY_RST_Pos) /**< (RSTC_GRSTR) DDR PHY reset is asserted. Position  */
#define RSTC_GRSTR_DDR_PHY_RST_1              (RSTC_GRSTR_DDR_PHY_RST_1_Val << RSTC_GRSTR_DDR_PHY_RST_Pos) /**< (RSTC_GRSTR) DDR PHY reset is de-asserted. Position  */
#define RSTC_GRSTR_USB_RST1_Pos               _U_(4)                                               /**< (RSTC_GRSTR) USB Reset Position */
#define RSTC_GRSTR_USB_RST1_Msk               (_U_(0x1) << RSTC_GRSTR_USB_RST1_Pos)                /**< (RSTC_GRSTR) USB Reset Mask */
#define RSTC_GRSTR_USB_RST1(value)            (RSTC_GRSTR_USB_RST1_Msk & ((value) << RSTC_GRSTR_USB_RST1_Pos))
#define   RSTC_GRSTR_USB_RST1_POR_DISABLED_Val _U_(0x0)                                             /**< (RSTC_GRSTR) POR is disabled.  */
#define   RSTC_GRSTR_USB_RST1_POR_ENABLED_Val _U_(0x1)                                             /**< (RSTC_GRSTR) POR is enabled.  */
#define RSTC_GRSTR_USB_RST1_POR_DISABLED      (RSTC_GRSTR_USB_RST1_POR_DISABLED_Val << RSTC_GRSTR_USB_RST1_Pos) /**< (RSTC_GRSTR) POR is disabled. Position  */
#define RSTC_GRSTR_USB_RST1_POR_ENABLED       (RSTC_GRSTR_USB_RST1_POR_ENABLED_Val << RSTC_GRSTR_USB_RST1_Pos) /**< (RSTC_GRSTR) POR is enabled. Position  */
#define RSTC_GRSTR_USB_RST2_Pos               _U_(5)                                               /**< (RSTC_GRSTR) USB Reset Position */
#define RSTC_GRSTR_USB_RST2_Msk               (_U_(0x1) << RSTC_GRSTR_USB_RST2_Pos)                /**< (RSTC_GRSTR) USB Reset Mask */
#define RSTC_GRSTR_USB_RST2(value)            (RSTC_GRSTR_USB_RST2_Msk & ((value) << RSTC_GRSTR_USB_RST2_Pos))
#define   RSTC_GRSTR_USB_RST2_POR_DISABLED_Val _U_(0x0)                                             /**< (RSTC_GRSTR) POR is disabled.  */
#define   RSTC_GRSTR_USB_RST2_POR_ENABLED_Val _U_(0x1)                                             /**< (RSTC_GRSTR) POR is enabled.  */
#define RSTC_GRSTR_USB_RST2_POR_DISABLED      (RSTC_GRSTR_USB_RST2_POR_DISABLED_Val << RSTC_GRSTR_USB_RST2_Pos) /**< (RSTC_GRSTR) POR is disabled. Position  */
#define RSTC_GRSTR_USB_RST2_POR_ENABLED       (RSTC_GRSTR_USB_RST2_POR_ENABLED_Val << RSTC_GRSTR_USB_RST2_Pos) /**< (RSTC_GRSTR) POR is enabled. Position  */
#define RSTC_GRSTR_USB_RST3_Pos               _U_(6)                                               /**< (RSTC_GRSTR) USB Reset Position */
#define RSTC_GRSTR_USB_RST3_Msk               (_U_(0x1) << RSTC_GRSTR_USB_RST3_Pos)                /**< (RSTC_GRSTR) USB Reset Mask */
#define RSTC_GRSTR_USB_RST3(value)            (RSTC_GRSTR_USB_RST3_Msk & ((value) << RSTC_GRSTR_USB_RST3_Pos))
#define   RSTC_GRSTR_USB_RST3_POR_DISABLED_Val _U_(0x0)                                             /**< (RSTC_GRSTR) POR is disabled.  */
#define   RSTC_GRSTR_USB_RST3_POR_ENABLED_Val _U_(0x1)                                             /**< (RSTC_GRSTR) POR is enabled.  */
#define RSTC_GRSTR_USB_RST3_POR_DISABLED      (RSTC_GRSTR_USB_RST3_POR_DISABLED_Val << RSTC_GRSTR_USB_RST3_Pos) /**< (RSTC_GRSTR) POR is disabled. Position  */
#define RSTC_GRSTR_USB_RST3_POR_ENABLED       (RSTC_GRSTR_USB_RST3_POR_ENABLED_Val << RSTC_GRSTR_USB_RST3_Pos) /**< (RSTC_GRSTR) POR is enabled. Position  */
#define RSTC_GRSTR_Msk                        _U_(0x00000075)                                      /**< (RSTC_GRSTR) Register Mask  */

#define RSTC_GRSTR_USB_RST_Pos                _U_(4)                                               /**< (RSTC_GRSTR Position) USB Reset */
#define RSTC_GRSTR_USB_RST_Msk                (_U_(0x7) << RSTC_GRSTR_USB_RST_Pos)                 /**< (RSTC_GRSTR Mask) USB_RST */
#define RSTC_GRSTR_USB_RST(value)             (RSTC_GRSTR_USB_RST_Msk & ((value) << RSTC_GRSTR_USB_RST_Pos)) 

/** \brief RSTC register offsets definitions */
#define RSTC_CR_REG_OFST               (0x00)              /**< (RSTC_CR) Control Register Offset */
#define RSTC_SR_REG_OFST               (0x04)              /**< (RSTC_SR) Status Register Offset */
#define RSTC_MR_REG_OFST               (0x08)              /**< (RSTC_MR) Mode Register Offset */
#define RSTC_GRSTR_REG_OFST            (0xE4)              /**< (RSTC_GRSTR) Generic Reset Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RSTC register API structure */
typedef struct
{  /* Reset Controller */
  __O   uint32_t                       RSTC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __I   uint32_t                       RSTC_SR;            /**< Offset: 0x04 (R/   32) Status Register */
  __IO  uint32_t                       RSTC_MR;            /**< Offset: 0x08 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0xD8];
  __IO  uint32_t                       RSTC_GRSTR;         /**< Offset: 0xE4 (R/W  32) Generic Reset Register */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_RSTC_COMPONENT_H_ */
