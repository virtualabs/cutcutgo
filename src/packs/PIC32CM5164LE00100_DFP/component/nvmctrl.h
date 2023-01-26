/*
 * Component description for NVMCTRL
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2022-03-31T12:21:24Z */
#ifndef _PIC32CMLE00_NVMCTRL_COMPONENT_H_
#define _PIC32CMLE00_NVMCTRL_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR NVMCTRL                                      */
/* ************************************************************************** */

/* -------- NVMCTRL_CTRLA : (NVMCTRL Offset: 0x00) ( /W 16) Control A -------- */
#define NVMCTRL_CTRLA_RESETVALUE              _UINT16_(0x00)                                       /*  (NVMCTRL_CTRLA) Control A  Reset Value */

#define NVMCTRL_CTRLA_CMD_Pos                 _UINT16_(0)                                          /* (NVMCTRL_CTRLA) Command Position */
#define NVMCTRL_CTRLA_CMD_Msk                 (_UINT16_(0x7F) << NVMCTRL_CTRLA_CMD_Pos)            /* (NVMCTRL_CTRLA) Command Mask */
#define NVMCTRL_CTRLA_CMD(value)              (NVMCTRL_CTRLA_CMD_Msk & (_UINT16_(value) << NVMCTRL_CTRLA_CMD_Pos)) /* Assigment of value for CMD in the NVMCTRL_CTRLA register */
#define   NVMCTRL_CTRLA_CMD_ER_Val            _UINT16_(0x2)                                        /* (NVMCTRL_CTRLA) Erase Row - Erases the row addressed by the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_WP_Val            _UINT16_(0x4)                                        /* (NVMCTRL_CTRLA) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.  */
#define   NVMCTRL_CTRLA_CMD_SPRM_Val          _UINT16_(0x42)                                       /* (NVMCTRL_CTRLA) Sets the power reduction mode.  */
#define   NVMCTRL_CTRLA_CMD_CPRM_Val          _UINT16_(0x43)                                       /* (NVMCTRL_CTRLA) Clears the power reduction mode.  */
#define   NVMCTRL_CTRLA_CMD_PBC_Val           _UINT16_(0x44)                                       /* (NVMCTRL_CTRLA) Page Buffer Clear - Clears the page buffer.  */
#define   NVMCTRL_CTRLA_CMD_INVALL_Val        _UINT16_(0x46)                                       /* (NVMCTRL_CTRLA) Invalidate all cache lines.  */
#define   NVMCTRL_CTRLA_CMD_SDAL0_Val         _UINT16_(0x4B)                                       /* (NVMCTRL_CTRLA) Set DAL=0  */
#define NVMCTRL_CTRLA_CMD_ER                  (NVMCTRL_CTRLA_CMD_ER_Val << NVMCTRL_CTRLA_CMD_Pos)  /* (NVMCTRL_CTRLA) Erase Row - Erases the row addressed by the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_WP                  (NVMCTRL_CTRLA_CMD_WP_Val << NVMCTRL_CTRLA_CMD_Pos)  /* (NVMCTRL_CTRLA) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register. Position  */
#define NVMCTRL_CTRLA_CMD_SPRM                (NVMCTRL_CTRLA_CMD_SPRM_Val << NVMCTRL_CTRLA_CMD_Pos) /* (NVMCTRL_CTRLA) Sets the power reduction mode. Position  */
#define NVMCTRL_CTRLA_CMD_CPRM                (NVMCTRL_CTRLA_CMD_CPRM_Val << NVMCTRL_CTRLA_CMD_Pos) /* (NVMCTRL_CTRLA) Clears the power reduction mode. Position  */
#define NVMCTRL_CTRLA_CMD_PBC                 (NVMCTRL_CTRLA_CMD_PBC_Val << NVMCTRL_CTRLA_CMD_Pos) /* (NVMCTRL_CTRLA) Page Buffer Clear - Clears the page buffer. Position  */
#define NVMCTRL_CTRLA_CMD_INVALL              (NVMCTRL_CTRLA_CMD_INVALL_Val << NVMCTRL_CTRLA_CMD_Pos) /* (NVMCTRL_CTRLA) Invalidate all cache lines. Position  */
#define NVMCTRL_CTRLA_CMD_SDAL0               (NVMCTRL_CTRLA_CMD_SDAL0_Val << NVMCTRL_CTRLA_CMD_Pos) /* (NVMCTRL_CTRLA) Set DAL=0 Position  */
#define NVMCTRL_CTRLA_CMDEX_Pos               _UINT16_(8)                                          /* (NVMCTRL_CTRLA) Command Execution Position */
#define NVMCTRL_CTRLA_CMDEX_Msk               (_UINT16_(0xFF) << NVMCTRL_CTRLA_CMDEX_Pos)          /* (NVMCTRL_CTRLA) Command Execution Mask */
#define NVMCTRL_CTRLA_CMDEX(value)            (NVMCTRL_CTRLA_CMDEX_Msk & (_UINT16_(value) << NVMCTRL_CTRLA_CMDEX_Pos)) /* Assigment of value for CMDEX in the NVMCTRL_CTRLA register */
#define   NVMCTRL_CTRLA_CMDEX_KEY_Val         _UINT16_(0xA5)                                       /* (NVMCTRL_CTRLA) Execution Key  */
#define NVMCTRL_CTRLA_CMDEX_KEY               (NVMCTRL_CTRLA_CMDEX_KEY_Val << NVMCTRL_CTRLA_CMDEX_Pos) /* (NVMCTRL_CTRLA) Execution Key Position  */
#define NVMCTRL_CTRLA_Msk                     _UINT16_(0xFF7F)                                     /* (NVMCTRL_CTRLA) Register Mask  */


/* -------- NVMCTRL_CTRLB : (NVMCTRL Offset: 0x04) (R/W 32) Control B -------- */
#define NVMCTRL_CTRLB_RESETVALUE              _UINT32_(0x00)                                       /*  (NVMCTRL_CTRLB) Control B  Reset Value */

#define NVMCTRL_CTRLB_RWS_Pos                 _UINT32_(1)                                          /* (NVMCTRL_CTRLB) NVM Read Wait States Position */
#define NVMCTRL_CTRLB_RWS_Msk                 (_UINT32_(0xF) << NVMCTRL_CTRLB_RWS_Pos)             /* (NVMCTRL_CTRLB) NVM Read Wait States Mask */
#define NVMCTRL_CTRLB_RWS(value)              (NVMCTRL_CTRLB_RWS_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_RWS_Pos)) /* Assigment of value for RWS in the NVMCTRL_CTRLB register */
#define NVMCTRL_CTRLB_SLEEPPRM_Pos            _UINT32_(8)                                          /* (NVMCTRL_CTRLB) Power Reduction Mode during Sleep Position */
#define NVMCTRL_CTRLB_SLEEPPRM_Msk            (_UINT32_(0x3) << NVMCTRL_CTRLB_SLEEPPRM_Pos)        /* (NVMCTRL_CTRLB) Power Reduction Mode during Sleep Mask */
#define NVMCTRL_CTRLB_SLEEPPRM(value)         (NVMCTRL_CTRLB_SLEEPPRM_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_SLEEPPRM_Pos)) /* Assigment of value for SLEEPPRM in the NVMCTRL_CTRLB register */
#define   NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS_Val _UINT32_(0x0)                                        /* (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.  */
#define   NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT_Val _UINT32_(0x1)                                        /* (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.  */
#define   NVMCTRL_CTRLB_SLEEPPRM_DISABLED_Val _UINT32_(0x3)                                        /* (NVMCTRL_CTRLB) Auto power reduction disabled.  */
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS   (NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos) /* (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access. Position  */
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT  (NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos) /* (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep. Position  */
#define NVMCTRL_CTRLB_SLEEPPRM_DISABLED       (NVMCTRL_CTRLB_SLEEPPRM_DISABLED_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos) /* (NVMCTRL_CTRLB) Auto power reduction disabled. Position  */
#define NVMCTRL_CTRLB_FWUP_Pos                _UINT32_(11)                                         /* (NVMCTRL_CTRLB) fast wake-up Position */
#define NVMCTRL_CTRLB_FWUP_Msk                (_UINT32_(0x1) << NVMCTRL_CTRLB_FWUP_Pos)            /* (NVMCTRL_CTRLB) fast wake-up Mask */
#define NVMCTRL_CTRLB_FWUP(value)             (NVMCTRL_CTRLB_FWUP_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_FWUP_Pos)) /* Assigment of value for FWUP in the NVMCTRL_CTRLB register */
#define NVMCTRL_CTRLB_READMODE_Pos            _UINT32_(16)                                         /* (NVMCTRL_CTRLB) NVMCTRL Read Mode Position */
#define NVMCTRL_CTRLB_READMODE_Msk            (_UINT32_(0x3) << NVMCTRL_CTRLB_READMODE_Pos)        /* (NVMCTRL_CTRLB) NVMCTRL Read Mode Mask */
#define NVMCTRL_CTRLB_READMODE(value)         (NVMCTRL_CTRLB_READMODE_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_READMODE_Pos)) /* Assigment of value for READMODE in the NVMCTRL_CTRLB register */
#define   NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY_Val _UINT32_(0x0)                                        /* (NVMCTRL_CTRLB) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.  */
#define   NVMCTRL_CTRLB_READMODE_LOW_POWER_Val _UINT32_(0x1)                                        /* (NVMCTRL_CTRLB) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.  */
#define   NVMCTRL_CTRLB_READMODE_DETERMINISTIC_Val _UINT32_(0x2)                                        /* (NVMCTRL_CTRLB) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.  */
#define NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY (NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY_Val << NVMCTRL_CTRLB_READMODE_Pos) /* (NVMCTRL_CTRLB) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance. Position  */
#define NVMCTRL_CTRLB_READMODE_LOW_POWER      (NVMCTRL_CTRLB_READMODE_LOW_POWER_Val << NVMCTRL_CTRLB_READMODE_Pos) /* (NVMCTRL_CTRLB) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time. Position  */
#define NVMCTRL_CTRLB_READMODE_DETERMINISTIC  (NVMCTRL_CTRLB_READMODE_DETERMINISTIC_Val << NVMCTRL_CTRLB_READMODE_Pos) /* (NVMCTRL_CTRLB) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings. Position  */
#define NVMCTRL_CTRLB_CACHEDIS_Pos            _UINT32_(18)                                         /* (NVMCTRL_CTRLB) Cache Disable Position */
#define NVMCTRL_CTRLB_CACHEDIS_Msk            (_UINT32_(0x1) << NVMCTRL_CTRLB_CACHEDIS_Pos)        /* (NVMCTRL_CTRLB) Cache Disable Mask */
#define NVMCTRL_CTRLB_CACHEDIS(value)         (NVMCTRL_CTRLB_CACHEDIS_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_CACHEDIS_Pos)) /* Assigment of value for CACHEDIS in the NVMCTRL_CTRLB register */
#define NVMCTRL_CTRLB_Msk                     _UINT32_(0x00070B1E)                                 /* (NVMCTRL_CTRLB) Register Mask  */


/* -------- NVMCTRL_CTRLC : (NVMCTRL Offset: 0x08) (R/W 8) Control C -------- */
#define NVMCTRL_CTRLC_RESETVALUE              _UINT8_(0x01)                                        /*  (NVMCTRL_CTRLC) Control C  Reset Value */

#define NVMCTRL_CTRLC_MANW_Pos                _UINT8_(0)                                           /* (NVMCTRL_CTRLC) Manual Write Position */
#define NVMCTRL_CTRLC_MANW_Msk                (_UINT8_(0x1) << NVMCTRL_CTRLC_MANW_Pos)             /* (NVMCTRL_CTRLC) Manual Write Mask */
#define NVMCTRL_CTRLC_MANW(value)             (NVMCTRL_CTRLC_MANW_Msk & (_UINT8_(value) << NVMCTRL_CTRLC_MANW_Pos)) /* Assigment of value for MANW in the NVMCTRL_CTRLC register */
#define NVMCTRL_CTRLC_Msk                     _UINT8_(0x01)                                        /* (NVMCTRL_CTRLC) Register Mask  */


/* -------- NVMCTRL_EVCTRL : (NVMCTRL Offset: 0x0A) (R/W 8) Event Control -------- */
#define NVMCTRL_EVCTRL_RESETVALUE             _UINT8_(0x00)                                        /*  (NVMCTRL_EVCTRL) Event Control  Reset Value */

#define NVMCTRL_EVCTRL_AUTOWEI_Pos            _UINT8_(0)                                           /* (NVMCTRL_EVCTRL) Auto Write Event Enable Position */
#define NVMCTRL_EVCTRL_AUTOWEI_Msk            (_UINT8_(0x1) << NVMCTRL_EVCTRL_AUTOWEI_Pos)         /* (NVMCTRL_EVCTRL) Auto Write Event Enable Mask */
#define NVMCTRL_EVCTRL_AUTOWEI(value)         (NVMCTRL_EVCTRL_AUTOWEI_Msk & (_UINT8_(value) << NVMCTRL_EVCTRL_AUTOWEI_Pos)) /* Assigment of value for AUTOWEI in the NVMCTRL_EVCTRL register */
#define NVMCTRL_EVCTRL_AUTOWINV_Pos           _UINT8_(1)                                           /* (NVMCTRL_EVCTRL) Auto Write Event Polarity Inverted Position */
#define NVMCTRL_EVCTRL_AUTOWINV_Msk           (_UINT8_(0x1) << NVMCTRL_EVCTRL_AUTOWINV_Pos)        /* (NVMCTRL_EVCTRL) Auto Write Event Polarity Inverted Mask */
#define NVMCTRL_EVCTRL_AUTOWINV(value)        (NVMCTRL_EVCTRL_AUTOWINV_Msk & (_UINT8_(value) << NVMCTRL_EVCTRL_AUTOWINV_Pos)) /* Assigment of value for AUTOWINV in the NVMCTRL_EVCTRL register */
#define NVMCTRL_EVCTRL_Msk                    _UINT8_(0x03)                                        /* (NVMCTRL_EVCTRL) Register Mask  */


/* -------- NVMCTRL_INTENCLR : (NVMCTRL Offset: 0x0C) (R/W 8) Interrupt Enable Clear -------- */
#define NVMCTRL_INTENCLR_RESETVALUE           _UINT8_(0x00)                                        /*  (NVMCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define NVMCTRL_INTENCLR_DONE_Pos             _UINT8_(0)                                           /* (NVMCTRL_INTENCLR) NVM Done Interrupt Clear Position */
#define NVMCTRL_INTENCLR_DONE_Msk             (_UINT8_(0x1) << NVMCTRL_INTENCLR_DONE_Pos)          /* (NVMCTRL_INTENCLR) NVM Done Interrupt Clear Mask */
#define NVMCTRL_INTENCLR_DONE(value)          (NVMCTRL_INTENCLR_DONE_Msk & (_UINT8_(value) << NVMCTRL_INTENCLR_DONE_Pos)) /* Assigment of value for DONE in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_PROGE_Pos            _UINT8_(1)                                           /* (NVMCTRL_INTENCLR) Programming Error Status Interrupt Clear Position */
#define NVMCTRL_INTENCLR_PROGE_Msk            (_UINT8_(0x1) << NVMCTRL_INTENCLR_PROGE_Pos)         /* (NVMCTRL_INTENCLR) Programming Error Status Interrupt Clear Mask */
#define NVMCTRL_INTENCLR_PROGE(value)         (NVMCTRL_INTENCLR_PROGE_Msk & (_UINT8_(value) << NVMCTRL_INTENCLR_PROGE_Pos)) /* Assigment of value for PROGE in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_LOCKE_Pos            _UINT8_(2)                                           /* (NVMCTRL_INTENCLR) Lock Error Status Interrupt Clear Position */
#define NVMCTRL_INTENCLR_LOCKE_Msk            (_UINT8_(0x1) << NVMCTRL_INTENCLR_LOCKE_Pos)         /* (NVMCTRL_INTENCLR) Lock Error Status Interrupt Clear Mask */
#define NVMCTRL_INTENCLR_LOCKE(value)         (NVMCTRL_INTENCLR_LOCKE_Msk & (_UINT8_(value) << NVMCTRL_INTENCLR_LOCKE_Pos)) /* Assigment of value for LOCKE in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_NVME_Pos             _UINT8_(3)                                           /* (NVMCTRL_INTENCLR) NVM Error Interrupt Clear Position */
#define NVMCTRL_INTENCLR_NVME_Msk             (_UINT8_(0x1) << NVMCTRL_INTENCLR_NVME_Pos)          /* (NVMCTRL_INTENCLR) NVM Error Interrupt Clear Mask */
#define NVMCTRL_INTENCLR_NVME(value)          (NVMCTRL_INTENCLR_NVME_Msk & (_UINT8_(value) << NVMCTRL_INTENCLR_NVME_Pos)) /* Assigment of value for NVME in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_KEYE_Pos             _UINT8_(4)                                           /* (NVMCTRL_INTENCLR) Key Write Error Interrupt Clear Position */
#define NVMCTRL_INTENCLR_KEYE_Msk             (_UINT8_(0x1) << NVMCTRL_INTENCLR_KEYE_Pos)          /* (NVMCTRL_INTENCLR) Key Write Error Interrupt Clear Mask */
#define NVMCTRL_INTENCLR_KEYE(value)          (NVMCTRL_INTENCLR_KEYE_Msk & (_UINT8_(value) << NVMCTRL_INTENCLR_KEYE_Pos)) /* Assigment of value for KEYE in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_Msk                  _UINT8_(0x1F)                                        /* (NVMCTRL_INTENCLR) Register Mask  */


/* -------- NVMCTRL_INTENSET : (NVMCTRL Offset: 0x10) (R/W 8) Interrupt Enable Set -------- */
#define NVMCTRL_INTENSET_RESETVALUE           _UINT8_(0x00)                                        /*  (NVMCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define NVMCTRL_INTENSET_DONE_Pos             _UINT8_(0)                                           /* (NVMCTRL_INTENSET) NVM Done Interrupt Enable Position */
#define NVMCTRL_INTENSET_DONE_Msk             (_UINT8_(0x1) << NVMCTRL_INTENSET_DONE_Pos)          /* (NVMCTRL_INTENSET) NVM Done Interrupt Enable Mask */
#define NVMCTRL_INTENSET_DONE(value)          (NVMCTRL_INTENSET_DONE_Msk & (_UINT8_(value) << NVMCTRL_INTENSET_DONE_Pos)) /* Assigment of value for DONE in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_PROGE_Pos            _UINT8_(1)                                           /* (NVMCTRL_INTENSET) Programming Error Status Interrupt Enable Position */
#define NVMCTRL_INTENSET_PROGE_Msk            (_UINT8_(0x1) << NVMCTRL_INTENSET_PROGE_Pos)         /* (NVMCTRL_INTENSET) Programming Error Status Interrupt Enable Mask */
#define NVMCTRL_INTENSET_PROGE(value)         (NVMCTRL_INTENSET_PROGE_Msk & (_UINT8_(value) << NVMCTRL_INTENSET_PROGE_Pos)) /* Assigment of value for PROGE in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_LOCKE_Pos            _UINT8_(2)                                           /* (NVMCTRL_INTENSET) Lock Error Status Interrupt Enable Position */
#define NVMCTRL_INTENSET_LOCKE_Msk            (_UINT8_(0x1) << NVMCTRL_INTENSET_LOCKE_Pos)         /* (NVMCTRL_INTENSET) Lock Error Status Interrupt Enable Mask */
#define NVMCTRL_INTENSET_LOCKE(value)         (NVMCTRL_INTENSET_LOCKE_Msk & (_UINT8_(value) << NVMCTRL_INTENSET_LOCKE_Pos)) /* Assigment of value for LOCKE in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_NVME_Pos             _UINT8_(3)                                           /* (NVMCTRL_INTENSET) NVM Error Interrupt Enable Position */
#define NVMCTRL_INTENSET_NVME_Msk             (_UINT8_(0x1) << NVMCTRL_INTENSET_NVME_Pos)          /* (NVMCTRL_INTENSET) NVM Error Interrupt Enable Mask */
#define NVMCTRL_INTENSET_NVME(value)          (NVMCTRL_INTENSET_NVME_Msk & (_UINT8_(value) << NVMCTRL_INTENSET_NVME_Pos)) /* Assigment of value for NVME in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_KEYE_Pos             _UINT8_(4)                                           /* (NVMCTRL_INTENSET) Key Write Error Interrupt Enable Position */
#define NVMCTRL_INTENSET_KEYE_Msk             (_UINT8_(0x1) << NVMCTRL_INTENSET_KEYE_Pos)          /* (NVMCTRL_INTENSET) Key Write Error Interrupt Enable Mask */
#define NVMCTRL_INTENSET_KEYE(value)          (NVMCTRL_INTENSET_KEYE_Msk & (_UINT8_(value) << NVMCTRL_INTENSET_KEYE_Pos)) /* Assigment of value for KEYE in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_Msk                  _UINT8_(0x1F)                                        /* (NVMCTRL_INTENSET) Register Mask  */


/* -------- NVMCTRL_INTFLAG : (NVMCTRL Offset: 0x14) (R/W 8) Interrupt Flag Status and Clear -------- */
#define NVMCTRL_INTFLAG_RESETVALUE            _UINT8_(0x00)                                        /*  (NVMCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define NVMCTRL_INTFLAG_DONE_Pos              _UINT8_(0)                                           /* (NVMCTRL_INTFLAG) NVM Done Position */
#define NVMCTRL_INTFLAG_DONE_Msk              (_UINT8_(0x1) << NVMCTRL_INTFLAG_DONE_Pos)           /* (NVMCTRL_INTFLAG) NVM Done Mask */
#define NVMCTRL_INTFLAG_DONE(value)           (NVMCTRL_INTFLAG_DONE_Msk & (_UINT8_(value) << NVMCTRL_INTFLAG_DONE_Pos)) /* Assigment of value for DONE in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_PROGE_Pos             _UINT8_(1)                                           /* (NVMCTRL_INTFLAG) Programming Error Status Position */
#define NVMCTRL_INTFLAG_PROGE_Msk             (_UINT8_(0x1) << NVMCTRL_INTFLAG_PROGE_Pos)          /* (NVMCTRL_INTFLAG) Programming Error Status Mask */
#define NVMCTRL_INTFLAG_PROGE(value)          (NVMCTRL_INTFLAG_PROGE_Msk & (_UINT8_(value) << NVMCTRL_INTFLAG_PROGE_Pos)) /* Assigment of value for PROGE in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_LOCKE_Pos             _UINT8_(2)                                           /* (NVMCTRL_INTFLAG) Lock Error Status Position */
#define NVMCTRL_INTFLAG_LOCKE_Msk             (_UINT8_(0x1) << NVMCTRL_INTFLAG_LOCKE_Pos)          /* (NVMCTRL_INTFLAG) Lock Error Status Mask */
#define NVMCTRL_INTFLAG_LOCKE(value)          (NVMCTRL_INTFLAG_LOCKE_Msk & (_UINT8_(value) << NVMCTRL_INTFLAG_LOCKE_Pos)) /* Assigment of value for LOCKE in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_NVME_Pos              _UINT8_(3)                                           /* (NVMCTRL_INTFLAG) NVM Error Position */
#define NVMCTRL_INTFLAG_NVME_Msk              (_UINT8_(0x1) << NVMCTRL_INTFLAG_NVME_Pos)           /* (NVMCTRL_INTFLAG) NVM Error Mask */
#define NVMCTRL_INTFLAG_NVME(value)           (NVMCTRL_INTFLAG_NVME_Msk & (_UINT8_(value) << NVMCTRL_INTFLAG_NVME_Pos)) /* Assigment of value for NVME in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_KEYE_Pos              _UINT8_(4)                                           /* (NVMCTRL_INTFLAG) KEY Write Error Position */
#define NVMCTRL_INTFLAG_KEYE_Msk              (_UINT8_(0x1) << NVMCTRL_INTFLAG_KEYE_Pos)           /* (NVMCTRL_INTFLAG) KEY Write Error Mask */
#define NVMCTRL_INTFLAG_KEYE(value)           (NVMCTRL_INTFLAG_KEYE_Msk & (_UINT8_(value) << NVMCTRL_INTFLAG_KEYE_Pos)) /* Assigment of value for KEYE in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_Msk                   _UINT8_(0x1F)                                        /* (NVMCTRL_INTFLAG) Register Mask  */


/* -------- NVMCTRL_STATUS : (NVMCTRL Offset: 0x18) ( R/ 16) Status -------- */
#define NVMCTRL_STATUS_RESETVALUE             _UINT16_(0x00)                                       /*  (NVMCTRL_STATUS) Status  Reset Value */

#define NVMCTRL_STATUS_PRM_Pos                _UINT16_(0)                                          /* (NVMCTRL_STATUS) Power Reduction Mode Position */
#define NVMCTRL_STATUS_PRM_Msk                (_UINT16_(0x1) << NVMCTRL_STATUS_PRM_Pos)            /* (NVMCTRL_STATUS) Power Reduction Mode Mask */
#define NVMCTRL_STATUS_PRM(value)             (NVMCTRL_STATUS_PRM_Msk & (_UINT16_(value) << NVMCTRL_STATUS_PRM_Pos)) /* Assigment of value for PRM in the NVMCTRL_STATUS register */
#define NVMCTRL_STATUS_LOAD_Pos               _UINT16_(1)                                          /* (NVMCTRL_STATUS) NVM Page Buffer Active Loading Position */
#define NVMCTRL_STATUS_LOAD_Msk               (_UINT16_(0x1) << NVMCTRL_STATUS_LOAD_Pos)           /* (NVMCTRL_STATUS) NVM Page Buffer Active Loading Mask */
#define NVMCTRL_STATUS_LOAD(value)            (NVMCTRL_STATUS_LOAD_Msk & (_UINT16_(value) << NVMCTRL_STATUS_LOAD_Pos)) /* Assigment of value for LOAD in the NVMCTRL_STATUS register */
#define NVMCTRL_STATUS_READY_Pos              _UINT16_(2)                                          /* (NVMCTRL_STATUS) NVM Ready Position */
#define NVMCTRL_STATUS_READY_Msk              (_UINT16_(0x1) << NVMCTRL_STATUS_READY_Pos)          /* (NVMCTRL_STATUS) NVM Ready Mask */
#define NVMCTRL_STATUS_READY(value)           (NVMCTRL_STATUS_READY_Msk & (_UINT16_(value) << NVMCTRL_STATUS_READY_Pos)) /* Assigment of value for READY in the NVMCTRL_STATUS register */
#define NVMCTRL_STATUS_DALFUSE_Pos            _UINT16_(3)                                          /* (NVMCTRL_STATUS) Debug Access Level Fuse Position */
#define NVMCTRL_STATUS_DALFUSE_Msk            (_UINT16_(0x3) << NVMCTRL_STATUS_DALFUSE_Pos)        /* (NVMCTRL_STATUS) Debug Access Level Fuse Mask */
#define NVMCTRL_STATUS_DALFUSE(value)         (NVMCTRL_STATUS_DALFUSE_Msk & (_UINT16_(value) << NVMCTRL_STATUS_DALFUSE_Pos)) /* Assigment of value for DALFUSE in the NVMCTRL_STATUS register */
#define   NVMCTRL_STATUS_DALFUSE_DAL0_Val     _UINT16_(0x0)                                        /* (NVMCTRL_STATUS) Access to very limited features  */
#define   NVMCTRL_STATUS_DALFUSE_DAL2_Val     _UINT16_(0x2)                                        /* (NVMCTRL_STATUS) Access to all memory. Can debug secure and non-secure CPU code  */
#define NVMCTRL_STATUS_DALFUSE_DAL0           (NVMCTRL_STATUS_DALFUSE_DAL0_Val << NVMCTRL_STATUS_DALFUSE_Pos) /* (NVMCTRL_STATUS) Access to very limited features Position  */
#define NVMCTRL_STATUS_DALFUSE_DAL2           (NVMCTRL_STATUS_DALFUSE_DAL2_Val << NVMCTRL_STATUS_DALFUSE_Pos) /* (NVMCTRL_STATUS) Access to all memory. Can debug secure and non-secure CPU code Position  */
#define NVMCTRL_STATUS_Msk                    _UINT16_(0x001F)                                     /* (NVMCTRL_STATUS) Register Mask  */


/* -------- NVMCTRL_ADDR : (NVMCTRL Offset: 0x1C) (R/W 32) Address -------- */
#define NVMCTRL_ADDR_RESETVALUE               _UINT32_(0x00)                                       /*  (NVMCTRL_ADDR) Address  Reset Value */

#define NVMCTRL_ADDR_AOFFSET_Pos              _UINT32_(0)                                          /* (NVMCTRL_ADDR) NVM Address Offset In The Selected Array Position */
#define NVMCTRL_ADDR_AOFFSET_Msk              (_UINT32_(0xFFFF) << NVMCTRL_ADDR_AOFFSET_Pos)       /* (NVMCTRL_ADDR) NVM Address Offset In The Selected Array Mask */
#define NVMCTRL_ADDR_AOFFSET(value)           (NVMCTRL_ADDR_AOFFSET_Msk & (_UINT32_(value) << NVMCTRL_ADDR_AOFFSET_Pos)) /* Assigment of value for AOFFSET in the NVMCTRL_ADDR register */
#define NVMCTRL_ADDR_ARRAY_Pos                _UINT32_(22)                                         /* (NVMCTRL_ADDR) Array Select Position */
#define NVMCTRL_ADDR_ARRAY_Msk                (_UINT32_(0x3) << NVMCTRL_ADDR_ARRAY_Pos)            /* (NVMCTRL_ADDR) Array Select Mask */
#define NVMCTRL_ADDR_ARRAY(value)             (NVMCTRL_ADDR_ARRAY_Msk & (_UINT32_(value) << NVMCTRL_ADDR_ARRAY_Pos)) /* Assigment of value for ARRAY in the NVMCTRL_ADDR register */
#define   NVMCTRL_ADDR_ARRAY_FLASH_Val        _UINT32_(0x0)                                        /* (NVMCTRL_ADDR) FLASH  */
#define   NVMCTRL_ADDR_ARRAY_DATAFLASH_Val    _UINT32_(0x1)                                        /* (NVMCTRL_ADDR) DATA FLASH  */
#define   NVMCTRL_ADDR_ARRAY_NVMROWS_Val      _UINT32_(0x2)                                        /* (NVMCTRL_ADDR) NVM Configuration Rows  */
#define NVMCTRL_ADDR_ARRAY_FLASH              (NVMCTRL_ADDR_ARRAY_FLASH_Val << NVMCTRL_ADDR_ARRAY_Pos) /* (NVMCTRL_ADDR) FLASH Position  */
#define NVMCTRL_ADDR_ARRAY_DATAFLASH          (NVMCTRL_ADDR_ARRAY_DATAFLASH_Val << NVMCTRL_ADDR_ARRAY_Pos) /* (NVMCTRL_ADDR) DATA FLASH Position  */
#define NVMCTRL_ADDR_ARRAY_NVMROWS            (NVMCTRL_ADDR_ARRAY_NVMROWS_Val << NVMCTRL_ADDR_ARRAY_Pos) /* (NVMCTRL_ADDR) NVM Configuration Rows Position  */
#define NVMCTRL_ADDR_Msk                      _UINT32_(0x00C0FFFF)                                 /* (NVMCTRL_ADDR) Register Mask  */


/* -------- NVMCTRL_SULCK : (NVMCTRL Offset: 0x20) (R/W 16) Secure Unlock Register -------- */
#define NVMCTRL_SULCK_BS_Pos                  _UINT16_(0)                                          /* (NVMCTRL_SULCK) Flash (BOOTPROT/BS Region) Position */
#define NVMCTRL_SULCK_BS_Msk                  (_UINT16_(0x1) << NVMCTRL_SULCK_BS_Pos)              /* (NVMCTRL_SULCK) Flash (BOOTPROT/BS Region) Mask */
#define NVMCTRL_SULCK_BS(value)               (NVMCTRL_SULCK_BS_Msk & (_UINT16_(value) << NVMCTRL_SULCK_BS_Pos)) /* Assigment of value for BS in the NVMCTRL_SULCK register */
#define NVMCTRL_SULCK_SLKEY_Pos               _UINT16_(8)                                          /* (NVMCTRL_SULCK) Write Key Position */
#define NVMCTRL_SULCK_SLKEY_Msk               (_UINT16_(0xFF) << NVMCTRL_SULCK_SLKEY_Pos)          /* (NVMCTRL_SULCK) Write Key Mask */
#define NVMCTRL_SULCK_SLKEY(value)            (NVMCTRL_SULCK_SLKEY_Msk & (_UINT16_(value) << NVMCTRL_SULCK_SLKEY_Pos)) /* Assigment of value for SLKEY in the NVMCTRL_SULCK register */
#define   NVMCTRL_SULCK_SLKEY_KEY_Val         _UINT16_(0xA5)                                       /* (NVMCTRL_SULCK) Write Key  */
#define NVMCTRL_SULCK_SLKEY_KEY               (NVMCTRL_SULCK_SLKEY_KEY_Val << NVMCTRL_SULCK_SLKEY_Pos) /* (NVMCTRL_SULCK) Write Key Position  */
#define NVMCTRL_SULCK_Msk                     _UINT16_(0xFF01)                                     /* (NVMCTRL_SULCK) Register Mask  */


/* -------- NVMCTRL_NSULCK : (NVMCTRL Offset: 0x22) (R/W 16) Non-Secure Unlock Register -------- */
#define NVMCTRL_NSULCK_ANS_Pos                _UINT16_(1)                                          /* (NVMCTRL_NSULCK) Flash (ANS Region) Position */
#define NVMCTRL_NSULCK_ANS_Msk                (_UINT16_(0x1) << NVMCTRL_NSULCK_ANS_Pos)            /* (NVMCTRL_NSULCK) Flash (ANS Region) Mask */
#define NVMCTRL_NSULCK_ANS(value)             (NVMCTRL_NSULCK_ANS_Msk & (_UINT16_(value) << NVMCTRL_NSULCK_ANS_Pos)) /* Assigment of value for ANS in the NVMCTRL_NSULCK register */
#define NVMCTRL_NSULCK_DNS_Pos                _UINT16_(2)                                          /* (NVMCTRL_NSULCK) Data Flash (DNS Region) Position */
#define NVMCTRL_NSULCK_DNS_Msk                (_UINT16_(0x1) << NVMCTRL_NSULCK_DNS_Pos)            /* (NVMCTRL_NSULCK) Data Flash (DNS Region) Mask */
#define NVMCTRL_NSULCK_DNS(value)             (NVMCTRL_NSULCK_DNS_Msk & (_UINT16_(value) << NVMCTRL_NSULCK_DNS_Pos)) /* Assigment of value for DNS in the NVMCTRL_NSULCK register */
#define NVMCTRL_NSULCK_NSLKEY_Pos             _UINT16_(8)                                          /* (NVMCTRL_NSULCK) Write Key Position */
#define NVMCTRL_NSULCK_NSLKEY_Msk             (_UINT16_(0xFF) << NVMCTRL_NSULCK_NSLKEY_Pos)        /* (NVMCTRL_NSULCK) Write Key Mask */
#define NVMCTRL_NSULCK_NSLKEY(value)          (NVMCTRL_NSULCK_NSLKEY_Msk & (_UINT16_(value) << NVMCTRL_NSULCK_NSLKEY_Pos)) /* Assigment of value for NSLKEY in the NVMCTRL_NSULCK register */
#define   NVMCTRL_NSULCK_NSLKEY_KEY_Val       _UINT16_(0xA5)                                       /* (NVMCTRL_NSULCK) Write Key  */
#define NVMCTRL_NSULCK_NSLKEY_KEY             (NVMCTRL_NSULCK_NSLKEY_KEY_Val << NVMCTRL_NSULCK_NSLKEY_Pos) /* (NVMCTRL_NSULCK) Write Key Position  */
#define NVMCTRL_NSULCK_Msk                    _UINT16_(0xFF06)                                     /* (NVMCTRL_NSULCK) Register Mask  */


/* -------- NVMCTRL_PARAM : (NVMCTRL Offset: 0x24) (R/W 32) NVM Parameter -------- */
#define NVMCTRL_PARAM_RESETVALUE              _UINT32_(0x00)                                       /*  (NVMCTRL_PARAM) NVM Parameter  Reset Value */

#define NVMCTRL_PARAM_FLASHP_Pos              _UINT32_(0)                                          /* (NVMCTRL_PARAM) FLASH Pages Position */
#define NVMCTRL_PARAM_FLASHP_Msk              (_UINT32_(0xFFFF) << NVMCTRL_PARAM_FLASHP_Pos)       /* (NVMCTRL_PARAM) FLASH Pages Mask */
#define NVMCTRL_PARAM_FLASHP(value)           (NVMCTRL_PARAM_FLASHP_Msk & (_UINT32_(value) << NVMCTRL_PARAM_FLASHP_Pos)) /* Assigment of value for FLASHP in the NVMCTRL_PARAM register */
#define NVMCTRL_PARAM_PSZ_Pos                 _UINT32_(16)                                         /* (NVMCTRL_PARAM) Page Size Position */
#define NVMCTRL_PARAM_PSZ_Msk                 (_UINT32_(0x7) << NVMCTRL_PARAM_PSZ_Pos)             /* (NVMCTRL_PARAM) Page Size Mask */
#define NVMCTRL_PARAM_PSZ(value)              (NVMCTRL_PARAM_PSZ_Msk & (_UINT32_(value) << NVMCTRL_PARAM_PSZ_Pos)) /* Assigment of value for PSZ in the NVMCTRL_PARAM register */
#define   NVMCTRL_PARAM_PSZ_8_Val             _UINT32_(0x0)                                        /* (NVMCTRL_PARAM) 8 bytes  */
#define   NVMCTRL_PARAM_PSZ_16_Val            _UINT32_(0x1)                                        /* (NVMCTRL_PARAM) 16 bytes  */
#define   NVMCTRL_PARAM_PSZ_32_Val            _UINT32_(0x2)                                        /* (NVMCTRL_PARAM) 32 bytes  */
#define   NVMCTRL_PARAM_PSZ_64_Val            _UINT32_(0x3)                                        /* (NVMCTRL_PARAM) 64 bytes  */
#define   NVMCTRL_PARAM_PSZ_128_Val           _UINT32_(0x4)                                        /* (NVMCTRL_PARAM) 128 bytes  */
#define   NVMCTRL_PARAM_PSZ_256_Val           _UINT32_(0x5)                                        /* (NVMCTRL_PARAM) 256 bytes  */
#define   NVMCTRL_PARAM_PSZ_512_Val           _UINT32_(0x6)                                        /* (NVMCTRL_PARAM) 512 bytes  */
#define   NVMCTRL_PARAM_PSZ_1024_Val          _UINT32_(0x7)                                        /* (NVMCTRL_PARAM) 1024 bytes  */
#define NVMCTRL_PARAM_PSZ_8                   (NVMCTRL_PARAM_PSZ_8_Val << NVMCTRL_PARAM_PSZ_Pos)   /* (NVMCTRL_PARAM) 8 bytes Position  */
#define NVMCTRL_PARAM_PSZ_16                  (NVMCTRL_PARAM_PSZ_16_Val << NVMCTRL_PARAM_PSZ_Pos)  /* (NVMCTRL_PARAM) 16 bytes Position  */
#define NVMCTRL_PARAM_PSZ_32                  (NVMCTRL_PARAM_PSZ_32_Val << NVMCTRL_PARAM_PSZ_Pos)  /* (NVMCTRL_PARAM) 32 bytes Position  */
#define NVMCTRL_PARAM_PSZ_64                  (NVMCTRL_PARAM_PSZ_64_Val << NVMCTRL_PARAM_PSZ_Pos)  /* (NVMCTRL_PARAM) 64 bytes Position  */
#define NVMCTRL_PARAM_PSZ_128                 (NVMCTRL_PARAM_PSZ_128_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 128 bytes Position  */
#define NVMCTRL_PARAM_PSZ_256                 (NVMCTRL_PARAM_PSZ_256_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 256 bytes Position  */
#define NVMCTRL_PARAM_PSZ_512                 (NVMCTRL_PARAM_PSZ_512_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 512 bytes Position  */
#define NVMCTRL_PARAM_PSZ_1024                (NVMCTRL_PARAM_PSZ_1024_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 1024 bytes Position  */
#define NVMCTRL_PARAM_DFLASHP_Pos             _UINT32_(20)                                         /* (NVMCTRL_PARAM) DATAFLASH Pages Position */
#define NVMCTRL_PARAM_DFLASHP_Msk             (_UINT32_(0xFFF) << NVMCTRL_PARAM_DFLASHP_Pos)       /* (NVMCTRL_PARAM) DATAFLASH Pages Mask */
#define NVMCTRL_PARAM_DFLASHP(value)          (NVMCTRL_PARAM_DFLASHP_Msk & (_UINT32_(value) << NVMCTRL_PARAM_DFLASHP_Pos)) /* Assigment of value for DFLASHP in the NVMCTRL_PARAM register */
#define NVMCTRL_PARAM_Msk                     _UINT32_(0xFFF7FFFF)                                 /* (NVMCTRL_PARAM) Register Mask  */


/* -------- NVMCTRL_SECCTRL : (NVMCTRL Offset: 0x34) (R/W 32) Security Control -------- */
#define NVMCTRL_SECCTRL_RESETVALUE            _UINT32_(0x30)                                       /*  (NVMCTRL_SECCTRL) Security Control  Reset Value */

#define NVMCTRL_SECCTRL_TAMPEEN_Pos           _UINT32_(0)                                          /* (NVMCTRL_SECCTRL) Tamper Erase Enable Position */
#define NVMCTRL_SECCTRL_TAMPEEN_Msk           (_UINT32_(0x1) << NVMCTRL_SECCTRL_TAMPEEN_Pos)       /* (NVMCTRL_SECCTRL) Tamper Erase Enable Mask */
#define NVMCTRL_SECCTRL_TAMPEEN(value)        (NVMCTRL_SECCTRL_TAMPEEN_Msk & (_UINT32_(value) << NVMCTRL_SECCTRL_TAMPEEN_Pos)) /* Assigment of value for TAMPEEN in the NVMCTRL_SECCTRL register */
#define NVMCTRL_SECCTRL_SILACC_Pos            _UINT32_(2)                                          /* (NVMCTRL_SECCTRL) Silent Access Position */
#define NVMCTRL_SECCTRL_SILACC_Msk            (_UINT32_(0x1) << NVMCTRL_SECCTRL_SILACC_Pos)        /* (NVMCTRL_SECCTRL) Silent Access Mask */
#define NVMCTRL_SECCTRL_SILACC(value)         (NVMCTRL_SECCTRL_SILACC_Msk & (_UINT32_(value) << NVMCTRL_SECCTRL_SILACC_Pos)) /* Assigment of value for SILACC in the NVMCTRL_SECCTRL register */
#define NVMCTRL_SECCTRL_TEROW_Pos             _UINT32_(8)                                          /* (NVMCTRL_SECCTRL) Tamper Rease Row Position */
#define NVMCTRL_SECCTRL_TEROW_Msk             (_UINT32_(0x7) << NVMCTRL_SECCTRL_TEROW_Pos)         /* (NVMCTRL_SECCTRL) Tamper Rease Row Mask */
#define NVMCTRL_SECCTRL_TEROW(value)          (NVMCTRL_SECCTRL_TEROW_Msk & (_UINT32_(value) << NVMCTRL_SECCTRL_TEROW_Pos)) /* Assigment of value for TEROW in the NVMCTRL_SECCTRL register */
#define NVMCTRL_SECCTRL_KEY_Pos               _UINT32_(24)                                         /* (NVMCTRL_SECCTRL) Write Key Position */
#define NVMCTRL_SECCTRL_KEY_Msk               (_UINT32_(0xFF) << NVMCTRL_SECCTRL_KEY_Pos)          /* (NVMCTRL_SECCTRL) Write Key Mask */
#define NVMCTRL_SECCTRL_KEY(value)            (NVMCTRL_SECCTRL_KEY_Msk & (_UINT32_(value) << NVMCTRL_SECCTRL_KEY_Pos)) /* Assigment of value for KEY in the NVMCTRL_SECCTRL register */
#define   NVMCTRL_SECCTRL_KEY_KEY_Val         _UINT32_(0xA5)                                       /* (NVMCTRL_SECCTRL) Write Key  */
#define NVMCTRL_SECCTRL_KEY_KEY               (NVMCTRL_SECCTRL_KEY_KEY_Val << NVMCTRL_SECCTRL_KEY_Pos) /* (NVMCTRL_SECCTRL) Write Key Position  */
#define NVMCTRL_SECCTRL_Msk                   _UINT32_(0xFF000705)                                 /* (NVMCTRL_SECCTRL) Register Mask  */


/* -------- NVMCTRL_SCFGB : (NVMCTRL Offset: 0x38) (R/W 32) Secure Boot Configuration -------- */
#define NVMCTRL_SCFGB_RESETVALUE              _UINT32_(0x03)                                       /*  (NVMCTRL_SCFGB) Secure Boot Configuration  Reset Value */

#define NVMCTRL_SCFGB_BCREN_Pos               _UINT32_(0)                                          /* (NVMCTRL_SCFGB) Boot Configuration Row Read Enable Position */
#define NVMCTRL_SCFGB_BCREN_Msk               (_UINT32_(0x1) << NVMCTRL_SCFGB_BCREN_Pos)           /* (NVMCTRL_SCFGB) Boot Configuration Row Read Enable Mask */
#define NVMCTRL_SCFGB_BCREN(value)            (NVMCTRL_SCFGB_BCREN_Msk & (_UINT32_(value) << NVMCTRL_SCFGB_BCREN_Pos)) /* Assigment of value for BCREN in the NVMCTRL_SCFGB register */
#define NVMCTRL_SCFGB_BCWEN_Pos               _UINT32_(1)                                          /* (NVMCTRL_SCFGB) Boot Configuration Row Write Enable Position */
#define NVMCTRL_SCFGB_BCWEN_Msk               (_UINT32_(0x1) << NVMCTRL_SCFGB_BCWEN_Pos)           /* (NVMCTRL_SCFGB) Boot Configuration Row Write Enable Mask */
#define NVMCTRL_SCFGB_BCWEN(value)            (NVMCTRL_SCFGB_BCWEN_Msk & (_UINT32_(value) << NVMCTRL_SCFGB_BCWEN_Pos)) /* Assigment of value for BCWEN in the NVMCTRL_SCFGB register */
#define NVMCTRL_SCFGB_Msk                     _UINT32_(0x00000003)                                 /* (NVMCTRL_SCFGB) Register Mask  */


/* -------- NVMCTRL_SCFGAD : (NVMCTRL Offset: 0x3C) (R/W 32) Secure Application and Data Configuration -------- */
#define NVMCTRL_SCFGAD_RESETVALUE             _UINT32_(0x01)                                       /*  (NVMCTRL_SCFGAD) Secure Application and Data Configuration  Reset Value */

#define NVMCTRL_SCFGAD_URWEN_Pos              _UINT32_(0)                                          /* (NVMCTRL_SCFGAD) User Row Write Enable Position */
#define NVMCTRL_SCFGAD_URWEN_Msk              (_UINT32_(0x1) << NVMCTRL_SCFGAD_URWEN_Pos)          /* (NVMCTRL_SCFGAD) User Row Write Enable Mask */
#define NVMCTRL_SCFGAD_URWEN(value)           (NVMCTRL_SCFGAD_URWEN_Msk & (_UINT32_(value) << NVMCTRL_SCFGAD_URWEN_Pos)) /* Assigment of value for URWEN in the NVMCTRL_SCFGAD register */
#define NVMCTRL_SCFGAD_Msk                    _UINT32_(0x00000001)                                 /* (NVMCTRL_SCFGAD) Register Mask  */


/** \brief NVMCTRL register offsets definitions */
#define NVMCTRL_CTRLA_REG_OFST         _UINT32_(0x00)      /* (NVMCTRL_CTRLA) Control A Offset */
#define NVMCTRL_CTRLB_REG_OFST         _UINT32_(0x04)      /* (NVMCTRL_CTRLB) Control B Offset */
#define NVMCTRL_CTRLC_REG_OFST         _UINT32_(0x08)      /* (NVMCTRL_CTRLC) Control C Offset */
#define NVMCTRL_EVCTRL_REG_OFST        _UINT32_(0x0A)      /* (NVMCTRL_EVCTRL) Event Control Offset */
#define NVMCTRL_INTENCLR_REG_OFST      _UINT32_(0x0C)      /* (NVMCTRL_INTENCLR) Interrupt Enable Clear Offset */
#define NVMCTRL_INTENSET_REG_OFST      _UINT32_(0x10)      /* (NVMCTRL_INTENSET) Interrupt Enable Set Offset */
#define NVMCTRL_INTFLAG_REG_OFST       _UINT32_(0x14)      /* (NVMCTRL_INTFLAG) Interrupt Flag Status and Clear Offset */
#define NVMCTRL_STATUS_REG_OFST        _UINT32_(0x18)      /* (NVMCTRL_STATUS) Status Offset */
#define NVMCTRL_ADDR_REG_OFST          _UINT32_(0x1C)      /* (NVMCTRL_ADDR) Address Offset */
#define NVMCTRL_SULCK_REG_OFST         _UINT32_(0x20)      /* (NVMCTRL_SULCK) Secure Unlock Register Offset */
#define NVMCTRL_NSULCK_REG_OFST        _UINT32_(0x22)      /* (NVMCTRL_NSULCK) Non-Secure Unlock Register Offset */
#define NVMCTRL_PARAM_REG_OFST         _UINT32_(0x24)      /* (NVMCTRL_PARAM) NVM Parameter Offset */
#define NVMCTRL_SECCTRL_REG_OFST       _UINT32_(0x34)      /* (NVMCTRL_SECCTRL) Security Control Offset */
#define NVMCTRL_SCFGB_REG_OFST         _UINT32_(0x38)      /* (NVMCTRL_SCFGB) Secure Boot Configuration Offset */
#define NVMCTRL_SCFGAD_REG_OFST        _UINT32_(0x3C)      /* (NVMCTRL_SCFGAD) Secure Application and Data Configuration Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief NVMCTRL register API structure */
typedef struct
{  /* Non-Volatile Memory Controller */
  __O   uint16_t                       NVMCTRL_CTRLA;      /**< Offset: 0x00 ( /W  16) Control A */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint32_t                       NVMCTRL_CTRLB;      /**< Offset: 0x04 (R/W  32) Control B */
  __IO  uint8_t                        NVMCTRL_CTRLC;      /**< Offset: 0x08 (R/W  8) Control C */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        NVMCTRL_EVCTRL;     /**< Offset: 0x0A (R/W  8) Event Control */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        NVMCTRL_INTENCLR;   /**< Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  __I   uint8_t                        Reserved4[0x03];
  __IO  uint8_t                        NVMCTRL_INTENSET;   /**< Offset: 0x10 (R/W  8) Interrupt Enable Set */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint8_t                        NVMCTRL_INTFLAG;    /**< Offset: 0x14 (R/W  8) Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved6[0x03];
  __I   uint16_t                       NVMCTRL_STATUS;     /**< Offset: 0x18 (R/   16) Status */
  __I   uint8_t                        Reserved7[0x02];
  __IO  uint32_t                       NVMCTRL_ADDR;       /**< Offset: 0x1C (R/W  32) Address */
  __IO  uint16_t                       NVMCTRL_SULCK;      /**< Offset: 0x20 (R/W  16) Secure Unlock Register */
  __IO  uint16_t                       NVMCTRL_NSULCK;     /**< Offset: 0x22 (R/W  16) Non-Secure Unlock Register */
  __IO  uint32_t                       NVMCTRL_PARAM;      /**< Offset: 0x24 (R/W  32) NVM Parameter */
  __I   uint8_t                        Reserved8[0x0C];
  __IO  uint32_t                       NVMCTRL_SECCTRL;    /**< Offset: 0x34 (R/W  32) Security Control */
  __IO  uint32_t                       NVMCTRL_SCFGB;      /**< Offset: 0x38 (R/W  32) Secure Boot Configuration */
  __IO  uint32_t                       NVMCTRL_SCFGAD;     /**< Offset: 0x3C (R/W  32) Secure Application and Data Configuration */
} nvmctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_NVMCTRL_COMPONENT_H_ */
