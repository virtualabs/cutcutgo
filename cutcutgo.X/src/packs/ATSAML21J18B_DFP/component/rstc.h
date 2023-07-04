/**
 * \brief Component description for RSTC
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

/* file generated from device description version 2020-11-19T08:59:42Z */
#ifndef _SAML21_RSTC_COMPONENT_H_
#define _SAML21_RSTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RSTC                                         */
/* ************************************************************************** */

/* -------- RSTC_RCAUSE : (RSTC Offset: 0x00) ( R/ 8) Reset Cause -------- */
#define RSTC_RCAUSE_POR_Pos                   _U_(0)                                               /**< (RSTC_RCAUSE) Power On Reset Position */
#define RSTC_RCAUSE_POR_Msk                   (_U_(0x1) << RSTC_RCAUSE_POR_Pos)                    /**< (RSTC_RCAUSE) Power On Reset Mask */
#define RSTC_RCAUSE_POR(value)                (RSTC_RCAUSE_POR_Msk & ((value) << RSTC_RCAUSE_POR_Pos))
#define RSTC_RCAUSE_BOD12_Pos                 _U_(1)                                               /**< (RSTC_RCAUSE) Brown Out 12 Detector Reset Position */
#define RSTC_RCAUSE_BOD12_Msk                 (_U_(0x1) << RSTC_RCAUSE_BOD12_Pos)                  /**< (RSTC_RCAUSE) Brown Out 12 Detector Reset Mask */
#define RSTC_RCAUSE_BOD12(value)              (RSTC_RCAUSE_BOD12_Msk & ((value) << RSTC_RCAUSE_BOD12_Pos))
#define RSTC_RCAUSE_BOD33_Pos                 _U_(2)                                               /**< (RSTC_RCAUSE) Brown Out 33 Detector Reset Position */
#define RSTC_RCAUSE_BOD33_Msk                 (_U_(0x1) << RSTC_RCAUSE_BOD33_Pos)                  /**< (RSTC_RCAUSE) Brown Out 33 Detector Reset Mask */
#define RSTC_RCAUSE_BOD33(value)              (RSTC_RCAUSE_BOD33_Msk & ((value) << RSTC_RCAUSE_BOD33_Pos))
#define RSTC_RCAUSE_EXT_Pos                   _U_(4)                                               /**< (RSTC_RCAUSE) External Reset Position */
#define RSTC_RCAUSE_EXT_Msk                   (_U_(0x1) << RSTC_RCAUSE_EXT_Pos)                    /**< (RSTC_RCAUSE) External Reset Mask */
#define RSTC_RCAUSE_EXT(value)                (RSTC_RCAUSE_EXT_Msk & ((value) << RSTC_RCAUSE_EXT_Pos))
#define RSTC_RCAUSE_WDT_Pos                   _U_(5)                                               /**< (RSTC_RCAUSE) Watchdog Reset Position */
#define RSTC_RCAUSE_WDT_Msk                   (_U_(0x1) << RSTC_RCAUSE_WDT_Pos)                    /**< (RSTC_RCAUSE) Watchdog Reset Mask */
#define RSTC_RCAUSE_WDT(value)                (RSTC_RCAUSE_WDT_Msk & ((value) << RSTC_RCAUSE_WDT_Pos))
#define RSTC_RCAUSE_SYST_Pos                  _U_(6)                                               /**< (RSTC_RCAUSE) System Reset Request Position */
#define RSTC_RCAUSE_SYST_Msk                  (_U_(0x1) << RSTC_RCAUSE_SYST_Pos)                   /**< (RSTC_RCAUSE) System Reset Request Mask */
#define RSTC_RCAUSE_SYST(value)               (RSTC_RCAUSE_SYST_Msk & ((value) << RSTC_RCAUSE_SYST_Pos))
#define RSTC_RCAUSE_BACKUP_Pos                _U_(7)                                               /**< (RSTC_RCAUSE) Backup Reset Position */
#define RSTC_RCAUSE_BACKUP_Msk                (_U_(0x1) << RSTC_RCAUSE_BACKUP_Pos)                 /**< (RSTC_RCAUSE) Backup Reset Mask */
#define RSTC_RCAUSE_BACKUP(value)             (RSTC_RCAUSE_BACKUP_Msk & ((value) << RSTC_RCAUSE_BACKUP_Pos))
#define RSTC_RCAUSE_Msk                       _U_(0xF7)                                            /**< (RSTC_RCAUSE) Register Mask  */

#define RSTC_RCAUSE_BOD_Pos                   _U_(1)                                               /**< (RSTC_RCAUSE Position) Brown Out x2 Detector Reset */
#define RSTC_RCAUSE_BOD_Msk                   (_U_(0x3) << RSTC_RCAUSE_BOD_Pos)                    /**< (RSTC_RCAUSE Mask) BOD */
#define RSTC_RCAUSE_BOD(value)                (RSTC_RCAUSE_BOD_Msk & ((value) << RSTC_RCAUSE_BOD_Pos)) 

/* -------- RSTC_BKUPEXIT : (RSTC Offset: 0x02) ( R/ 8) Backup Exit Source -------- */
#define RSTC_BKUPEXIT_EXTWAKE_Pos             _U_(0)                                               /**< (RSTC_BKUPEXIT) External Wakeup Position */
#define RSTC_BKUPEXIT_EXTWAKE_Msk             (_U_(0x1) << RSTC_BKUPEXIT_EXTWAKE_Pos)              /**< (RSTC_BKUPEXIT) External Wakeup Mask */
#define RSTC_BKUPEXIT_EXTWAKE(value)          (RSTC_BKUPEXIT_EXTWAKE_Msk & ((value) << RSTC_BKUPEXIT_EXTWAKE_Pos))
#define RSTC_BKUPEXIT_RTC_Pos                 _U_(1)                                               /**< (RSTC_BKUPEXIT) Real Timer Counter Interrupt Position */
#define RSTC_BKUPEXIT_RTC_Msk                 (_U_(0x1) << RSTC_BKUPEXIT_RTC_Pos)                  /**< (RSTC_BKUPEXIT) Real Timer Counter Interrupt Mask */
#define RSTC_BKUPEXIT_RTC(value)              (RSTC_BKUPEXIT_RTC_Msk & ((value) << RSTC_BKUPEXIT_RTC_Pos))
#define RSTC_BKUPEXIT_BBPS_Pos                _U_(2)                                               /**< (RSTC_BKUPEXIT) Battery Backup Power Switch Position */
#define RSTC_BKUPEXIT_BBPS_Msk                (_U_(0x1) << RSTC_BKUPEXIT_BBPS_Pos)                 /**< (RSTC_BKUPEXIT) Battery Backup Power Switch Mask */
#define RSTC_BKUPEXIT_BBPS(value)             (RSTC_BKUPEXIT_BBPS_Msk & ((value) << RSTC_BKUPEXIT_BBPS_Pos))
#define RSTC_BKUPEXIT_Msk                     _U_(0x07)                                            /**< (RSTC_BKUPEXIT) Register Mask  */


/* -------- RSTC_WKDBCONF : (RSTC Offset: 0x04) (R/W 8) Wakeup Debounce Configuration -------- */
#define RSTC_WKDBCONF_RESETVALUE              _U_(0x00)                                            /**<  (RSTC_WKDBCONF) Wakeup Debounce Configuration  Reset Value */

#define RSTC_WKDBCONF_WKDBCNT_Pos             _U_(0)                                               /**< (RSTC_WKDBCONF) Wakeup Debounce Counter Position */
#define RSTC_WKDBCONF_WKDBCNT_Msk             (_U_(0x1F) << RSTC_WKDBCONF_WKDBCNT_Pos)             /**< (RSTC_WKDBCONF) Wakeup Debounce Counter Mask */
#define RSTC_WKDBCONF_WKDBCNT(value)          (RSTC_WKDBCONF_WKDBCNT_Msk & ((value) << RSTC_WKDBCONF_WKDBCNT_Pos))
#define   RSTC_WKDBCONF_WKDBCNT_OFF_Val       _U_(0x0)                                             /**< (RSTC_WKDBCONF) No debouncing.Input pin is low or high level sensitive depending on its WKPOLx bit.  */
#define   RSTC_WKDBCONF_WKDBCNT_2CK32_Val     _U_(0x1)                                             /**< (RSTC_WKDBCONF) Input pin shall be active for at least two 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_3CK32_Val     _U_(0x2)                                             /**< (RSTC_WKDBCONF) Input pin shall be active for at least three 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_32CK32_Val    _U_(0x3)                                             /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_512CK32_Val   _U_(0x4)                                             /**< (RSTC_WKDBCONF) Input pin shall be active for at least 512 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_4096CK32_Val  _U_(0x5)                                             /**< (RSTC_WKDBCONF) Input pin shall be active for at least 4096 32kHz clock period.  */
#define   RSTC_WKDBCONF_WKDBCNT_32768CK32_Val _U_(0x6)                                             /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32768 32kHz clock period.  */
#define RSTC_WKDBCONF_WKDBCNT_OFF             (RSTC_WKDBCONF_WKDBCNT_OFF_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) No debouncing.Input pin is low or high level sensitive depending on its WKPOLx bit. Position  */
#define RSTC_WKDBCONF_WKDBCNT_2CK32           (RSTC_WKDBCONF_WKDBCNT_2CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) Input pin shall be active for at least two 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_3CK32           (RSTC_WKDBCONF_WKDBCNT_3CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) Input pin shall be active for at least three 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_32CK32          (RSTC_WKDBCONF_WKDBCNT_32CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_512CK32         (RSTC_WKDBCONF_WKDBCNT_512CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) Input pin shall be active for at least 512 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_4096CK32        (RSTC_WKDBCONF_WKDBCNT_4096CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) Input pin shall be active for at least 4096 32kHz clock period. Position  */
#define RSTC_WKDBCONF_WKDBCNT_32768CK32       (RSTC_WKDBCONF_WKDBCNT_32768CK32_Val << RSTC_WKDBCONF_WKDBCNT_Pos) /**< (RSTC_WKDBCONF) Input pin shall be active for at least 32768 32kHz clock period. Position  */
#define RSTC_WKDBCONF_Msk                     _U_(0x1F)                                            /**< (RSTC_WKDBCONF) Register Mask  */


/* -------- RSTC_WKPOL : (RSTC Offset: 0x08) (R/W 16) Wakeup Polarity -------- */
#define RSTC_WKPOL_RESETVALUE                 _U_(0x00)                                            /**<  (RSTC_WKPOL) Wakeup Polarity  Reset Value */

#define RSTC_WKPOL_WKPOL_Pos                  _U_(0)                                               /**< (RSTC_WKPOL) Wakeup Polarity Position */
#define RSTC_WKPOL_WKPOL_Msk                  (_U_(0xFF) << RSTC_WKPOL_WKPOL_Pos)                  /**< (RSTC_WKPOL) Wakeup Polarity Mask */
#define RSTC_WKPOL_WKPOL(value)               (RSTC_WKPOL_WKPOL_Msk & ((value) << RSTC_WKPOL_WKPOL_Pos))
#define RSTC_WKPOL_Msk                        _U_(0x00FF)                                          /**< (RSTC_WKPOL) Register Mask  */


/* -------- RSTC_WKEN : (RSTC Offset: 0x0C) (R/W 16) Wakeup Enable -------- */
#define RSTC_WKEN_RESETVALUE                  _U_(0x00)                                            /**<  (RSTC_WKEN) Wakeup Enable  Reset Value */

#define RSTC_WKEN_WKEN_Pos                    _U_(0)                                               /**< (RSTC_WKEN) Wakeup Enable Position */
#define RSTC_WKEN_WKEN_Msk                    (_U_(0xFF) << RSTC_WKEN_WKEN_Pos)                    /**< (RSTC_WKEN) Wakeup Enable Mask */
#define RSTC_WKEN_WKEN(value)                 (RSTC_WKEN_WKEN_Msk & ((value) << RSTC_WKEN_WKEN_Pos))
#define RSTC_WKEN_Msk                         _U_(0x00FF)                                          /**< (RSTC_WKEN) Register Mask  */


/* -------- RSTC_WKCAUSE : (RSTC Offset: 0x10) (R/W 16) Wakeup Cause -------- */
#define RSTC_WKCAUSE_RESETVALUE               _U_(0x00)                                            /**<  (RSTC_WKCAUSE) Wakeup Cause  Reset Value */

#define RSTC_WKCAUSE_WKCAUSE_Pos              _U_(0)                                               /**< (RSTC_WKCAUSE) Wakeup Cause Position */
#define RSTC_WKCAUSE_WKCAUSE_Msk              (_U_(0xFFFF) << RSTC_WKCAUSE_WKCAUSE_Pos)            /**< (RSTC_WKCAUSE) Wakeup Cause Mask */
#define RSTC_WKCAUSE_WKCAUSE(value)           (RSTC_WKCAUSE_WKCAUSE_Msk & ((value) << RSTC_WKCAUSE_WKCAUSE_Pos))
#define RSTC_WKCAUSE_Msk                      _U_(0xFFFF)                                          /**< (RSTC_WKCAUSE) Register Mask  */


/** \brief RSTC register offsets definitions */
#define RSTC_RCAUSE_REG_OFST           (0x00)              /**< (RSTC_RCAUSE) Reset Cause Offset */
#define RSTC_BKUPEXIT_REG_OFST         (0x02)              /**< (RSTC_BKUPEXIT) Backup Exit Source Offset */
#define RSTC_WKDBCONF_REG_OFST         (0x04)              /**< (RSTC_WKDBCONF) Wakeup Debounce Configuration Offset */
#define RSTC_WKPOL_REG_OFST            (0x08)              /**< (RSTC_WKPOL) Wakeup Polarity Offset */
#define RSTC_WKEN_REG_OFST             (0x0C)              /**< (RSTC_WKEN) Wakeup Enable Offset */
#define RSTC_WKCAUSE_REG_OFST          (0x10)              /**< (RSTC_WKCAUSE) Wakeup Cause Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RSTC register API structure */
typedef struct
{  /* Reset Controller */
  __I   uint8_t                        RSTC_RCAUSE;        /**< Offset: 0x00 (R/   8) Reset Cause */
  __I   uint8_t                        Reserved1[0x01];
  __I   uint8_t                        RSTC_BKUPEXIT;      /**< Offset: 0x02 (R/   8) Backup Exit Source */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        RSTC_WKDBCONF;      /**< Offset: 0x04 (R/W  8) Wakeup Debounce Configuration */
  __I   uint8_t                        Reserved3[0x03];
  __IO  uint16_t                       RSTC_WKPOL;         /**< Offset: 0x08 (R/W  16) Wakeup Polarity */
  __I   uint8_t                        Reserved4[0x02];
  __IO  uint16_t                       RSTC_WKEN;          /**< Offset: 0x0C (R/W  16) Wakeup Enable */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       RSTC_WKCAUSE;       /**< Offset: 0x10 (R/W  16) Wakeup Cause */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAML21_RSTC_COMPONENT_H_ */
