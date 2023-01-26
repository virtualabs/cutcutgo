/*
 * Component description for PM
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
#ifndef _PIC32CMLE00_PM_COMPONENT_H_
#define _PIC32CMLE00_PM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PM                                           */
/* ************************************************************************** */

/* -------- PM_SLEEPCFG : (PM Offset: 0x01) (R/W 8) Sleep Configuration -------- */
#define PM_SLEEPCFG_RESETVALUE                _UINT8_(0x02)                                        /*  (PM_SLEEPCFG) Sleep Configuration  Reset Value */

#define PM_SLEEPCFG_SLEEPMODE_Pos             _UINT8_(0)                                           /* (PM_SLEEPCFG) Sleep Mode Position */
#define PM_SLEEPCFG_SLEEPMODE_Msk             (_UINT8_(0x7) << PM_SLEEPCFG_SLEEPMODE_Pos)          /* (PM_SLEEPCFG) Sleep Mode Mask */
#define PM_SLEEPCFG_SLEEPMODE(value)          (PM_SLEEPCFG_SLEEPMODE_Msk & (_UINT8_(value) << PM_SLEEPCFG_SLEEPMODE_Pos)) /* Assigment of value for SLEEPMODE in the PM_SLEEPCFG register */
#define   PM_SLEEPCFG_SLEEPMODE_IDLE_Val      _UINT8_(0x2)                                         /* (PM_SLEEPCFG) CPU, AHBx, and APBx clocks are OFF  */
#define   PM_SLEEPCFG_SLEEPMODE_STANDBY_Val   _UINT8_(0x4)                                         /* (PM_SLEEPCFG) ALL clocks are OFF, unless requested by sleepwalking peripheral  */
#define   PM_SLEEPCFG_SLEEPMODE_OFF_Val       _UINT8_(0x6)                                         /* (PM_SLEEPCFG) All power domains are powered OFF  */
#define PM_SLEEPCFG_SLEEPMODE_IDLE            (PM_SLEEPCFG_SLEEPMODE_IDLE_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) CPU, AHBx, and APBx clocks are OFF Position  */
#define PM_SLEEPCFG_SLEEPMODE_STANDBY         (PM_SLEEPCFG_SLEEPMODE_STANDBY_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) ALL clocks are OFF, unless requested by sleepwalking peripheral Position  */
#define PM_SLEEPCFG_SLEEPMODE_OFF             (PM_SLEEPCFG_SLEEPMODE_OFF_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) All power domains are powered OFF Position  */
#define PM_SLEEPCFG_Msk                       _UINT8_(0x07)                                        /* (PM_SLEEPCFG) Register Mask  */


/* -------- PM_PLCFG : (PM Offset: 0x02) (R/W 8) Performance Level Configuration -------- */
#define PM_PLCFG_RESETVALUE                   _UINT8_(0x00)                                        /*  (PM_PLCFG) Performance Level Configuration  Reset Value */

#define PM_PLCFG_PLSEL_Pos                    _UINT8_(0)                                           /* (PM_PLCFG) Performance Level Select Position */
#define PM_PLCFG_PLSEL_Msk                    (_UINT8_(0x3) << PM_PLCFG_PLSEL_Pos)                 /* (PM_PLCFG) Performance Level Select Mask */
#define PM_PLCFG_PLSEL(value)                 (PM_PLCFG_PLSEL_Msk & (_UINT8_(value) << PM_PLCFG_PLSEL_Pos)) /* Assigment of value for PLSEL in the PM_PLCFG register */
#define   PM_PLCFG_PLSEL_PL0_Val              _UINT8_(0x0)                                         /* (PM_PLCFG) Performance Level 0  */
#define   PM_PLCFG_PLSEL_PL2_Val              _UINT8_(0x2)                                         /* (PM_PLCFG) Performance Level 2  */
#define PM_PLCFG_PLSEL_PL0                    (PM_PLCFG_PLSEL_PL0_Val << PM_PLCFG_PLSEL_Pos)       /* (PM_PLCFG) Performance Level 0 Position  */
#define PM_PLCFG_PLSEL_PL2                    (PM_PLCFG_PLSEL_PL2_Val << PM_PLCFG_PLSEL_Pos)       /* (PM_PLCFG) Performance Level 2 Position  */
#define PM_PLCFG_PLDIS_Pos                    _UINT8_(7)                                           /* (PM_PLCFG) Performance Level Disable Position */
#define PM_PLCFG_PLDIS_Msk                    (_UINT8_(0x1) << PM_PLCFG_PLDIS_Pos)                 /* (PM_PLCFG) Performance Level Disable Mask */
#define PM_PLCFG_PLDIS(value)                 (PM_PLCFG_PLDIS_Msk & (_UINT8_(value) << PM_PLCFG_PLDIS_Pos)) /* Assigment of value for PLDIS in the PM_PLCFG register */
#define PM_PLCFG_Msk                          _UINT8_(0x83)                                        /* (PM_PLCFG) Register Mask  */


/* -------- PM_PWCFG : (PM Offset: 0x03) (R/W 8) Power Configuration -------- */
#define PM_PWCFG_RESETVALUE                   _UINT8_(0x00)                                        /*  (PM_PWCFG) Power Configuration  Reset Value */

#define PM_PWCFG_RAMPSWC_Pos                  _UINT8_(0)                                           /* (PM_PWCFG) RAM Power Switch Configuration Position */
#define PM_PWCFG_RAMPSWC_Msk                  (_UINT8_(0x3) << PM_PWCFG_RAMPSWC_Pos)               /* (PM_PWCFG) RAM Power Switch Configuration Mask */
#define PM_PWCFG_RAMPSWC(value)               (PM_PWCFG_RAMPSWC_Msk & (_UINT8_(value) << PM_PWCFG_RAMPSWC_Pos)) /* Assigment of value for RAMPSWC in the PM_PWCFG register */
#define   PM_PWCFG_RAMPSWC_64KB_Val           _UINT8_(0x0)                                         /* (PM_PWCFG) 64KB Available  */
#define   PM_PWCFG_RAMPSWC_48KB_Val           _UINT8_(0x1)                                         /* (PM_PWCFG) 48KB Available  */
#define   PM_PWCFG_RAMPSWC_32KB_Val           _UINT8_(0x2)                                         /* (PM_PWCFG) 32KB Available  */
#define   PM_PWCFG_RAMPSWC_16KB_Val           _UINT8_(0x3)                                         /* (PM_PWCFG) 16KB Available  */
#define PM_PWCFG_RAMPSWC_64KB                 (PM_PWCFG_RAMPSWC_64KB_Val << PM_PWCFG_RAMPSWC_Pos)  /* (PM_PWCFG) 64KB Available Position  */
#define PM_PWCFG_RAMPSWC_48KB                 (PM_PWCFG_RAMPSWC_48KB_Val << PM_PWCFG_RAMPSWC_Pos)  /* (PM_PWCFG) 48KB Available Position  */
#define PM_PWCFG_RAMPSWC_32KB                 (PM_PWCFG_RAMPSWC_32KB_Val << PM_PWCFG_RAMPSWC_Pos)  /* (PM_PWCFG) 32KB Available Position  */
#define PM_PWCFG_RAMPSWC_16KB                 (PM_PWCFG_RAMPSWC_16KB_Val << PM_PWCFG_RAMPSWC_Pos)  /* (PM_PWCFG) 16KB Available Position  */
#define PM_PWCFG_Msk                          _UINT8_(0x03)                                        /* (PM_PWCFG) Register Mask  */


/* -------- PM_INTENCLR : (PM Offset: 0x04) (R/W 8) Interrupt Enable Clear -------- */
#define PM_INTENCLR_RESETVALUE                _UINT8_(0x00)                                        /*  (PM_INTENCLR) Interrupt Enable Clear  Reset Value */

#define PM_INTENCLR_PLRDY_Pos                 _UINT8_(0)                                           /* (PM_INTENCLR) Performance Level Interrupt Enable Position */
#define PM_INTENCLR_PLRDY_Msk                 (_UINT8_(0x1) << PM_INTENCLR_PLRDY_Pos)              /* (PM_INTENCLR) Performance Level Interrupt Enable Mask */
#define PM_INTENCLR_PLRDY(value)              (PM_INTENCLR_PLRDY_Msk & (_UINT8_(value) << PM_INTENCLR_PLRDY_Pos)) /* Assigment of value for PLRDY in the PM_INTENCLR register */
#define PM_INTENCLR_Msk                       _UINT8_(0x01)                                        /* (PM_INTENCLR) Register Mask  */


/* -------- PM_INTENSET : (PM Offset: 0x05) (R/W 8) Interrupt Enable Set -------- */
#define PM_INTENSET_RESETVALUE                _UINT8_(0x00)                                        /*  (PM_INTENSET) Interrupt Enable Set  Reset Value */

#define PM_INTENSET_PLRDY_Pos                 _UINT8_(0)                                           /* (PM_INTENSET) Performance Level Ready interrupt Enable Position */
#define PM_INTENSET_PLRDY_Msk                 (_UINT8_(0x1) << PM_INTENSET_PLRDY_Pos)              /* (PM_INTENSET) Performance Level Ready interrupt Enable Mask */
#define PM_INTENSET_PLRDY(value)              (PM_INTENSET_PLRDY_Msk & (_UINT8_(value) << PM_INTENSET_PLRDY_Pos)) /* Assigment of value for PLRDY in the PM_INTENSET register */
#define PM_INTENSET_Msk                       _UINT8_(0x01)                                        /* (PM_INTENSET) Register Mask  */


/* -------- PM_INTFLAG : (PM Offset: 0x06) (R/W 8) Interrupt Flag Status and Clear -------- */
#define PM_INTFLAG_RESETVALUE                 _UINT8_(0x00)                                        /*  (PM_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define PM_INTFLAG_PLRDY_Pos                  _UINT8_(0)                                           /* (PM_INTFLAG) Performance Level Ready Position */
#define PM_INTFLAG_PLRDY_Msk                  (_UINT8_(0x1) << PM_INTFLAG_PLRDY_Pos)               /* (PM_INTFLAG) Performance Level Ready Mask */
#define PM_INTFLAG_PLRDY(value)               (PM_INTFLAG_PLRDY_Msk & (_UINT8_(value) << PM_INTFLAG_PLRDY_Pos)) /* Assigment of value for PLRDY in the PM_INTFLAG register */
#define PM_INTFLAG_Msk                        _UINT8_(0x01)                                        /* (PM_INTFLAG) Register Mask  */


/* -------- PM_STDBYCFG : (PM Offset: 0x08) (R/W 16) Standby Configuration -------- */
#define PM_STDBYCFG_RESETVALUE                _UINT16_(0x00)                                       /*  (PM_STDBYCFG) Standby Configuration  Reset Value */

#define PM_STDBYCFG_PDCFG_Pos                 _UINT16_(0)                                          /* (PM_STDBYCFG) Power Domain Configuration Position */
#define PM_STDBYCFG_PDCFG_Msk                 (_UINT16_(0x1) << PM_STDBYCFG_PDCFG_Pos)             /* (PM_STDBYCFG) Power Domain Configuration Mask */
#define PM_STDBYCFG_PDCFG(value)              (PM_STDBYCFG_PDCFG_Msk & (_UINT16_(value) << PM_STDBYCFG_PDCFG_Pos)) /* Assigment of value for PDCFG in the PM_STDBYCFG register */
#define   PM_STDBYCFG_PDCFG_DEFAULT_Val       _UINT16_(0x0)                                        /* (PM_STDBYCFG) PDSW power domain switching is handled by hardware.  */
#define   PM_STDBYCFG_PDCFG_PDSW_Val          _UINT16_(0x1)                                        /* (PM_STDBYCFG) PDSW is forced ACTIVE.  */
#define PM_STDBYCFG_PDCFG_DEFAULT             (PM_STDBYCFG_PDCFG_DEFAULT_Val << PM_STDBYCFG_PDCFG_Pos) /* (PM_STDBYCFG) PDSW power domain switching is handled by hardware. Position  */
#define PM_STDBYCFG_PDCFG_PDSW                (PM_STDBYCFG_PDCFG_PDSW_Val << PM_STDBYCFG_PDCFG_Pos) /* (PM_STDBYCFG) PDSW is forced ACTIVE. Position  */
#define PM_STDBYCFG_DPGPDSW_Pos               _UINT16_(4)                                          /* (PM_STDBYCFG) Dynamic Power Gating for PDSW Position */
#define PM_STDBYCFG_DPGPDSW_Msk               (_UINT16_(0x1) << PM_STDBYCFG_DPGPDSW_Pos)           /* (PM_STDBYCFG) Dynamic Power Gating for PDSW Mask */
#define PM_STDBYCFG_DPGPDSW(value)            (PM_STDBYCFG_DPGPDSW_Msk & (_UINT16_(value) << PM_STDBYCFG_DPGPDSW_Pos)) /* Assigment of value for DPGPDSW in the PM_STDBYCFG register */
#define   PM_STDBYCFG_DPGPDSW_DISABLED_Val    _UINT16_(0x0)                                        /* (PM_STDBYCFG) Dynamic Power Gating disabled  */
#define   PM_STDBYCFG_DPGPDSW_ENABLED_Val     _UINT16_(0x1)                                        /* (PM_STDBYCFG) Dynamic Power Gating enabled  */
#define PM_STDBYCFG_DPGPDSW_DISABLED          (PM_STDBYCFG_DPGPDSW_DISABLED_Val << PM_STDBYCFG_DPGPDSW_Pos) /* (PM_STDBYCFG) Dynamic Power Gating disabled Position  */
#define PM_STDBYCFG_DPGPDSW_ENABLED           (PM_STDBYCFG_DPGPDSW_ENABLED_Val << PM_STDBYCFG_DPGPDSW_Pos) /* (PM_STDBYCFG) Dynamic Power Gating enabled Position  */
#define PM_STDBYCFG_VREGSMOD_Pos              _UINT16_(6)                                          /* (PM_STDBYCFG) Voltage Regulator Standby mode Position */
#define PM_STDBYCFG_VREGSMOD_Msk              (_UINT16_(0x3) << PM_STDBYCFG_VREGSMOD_Pos)          /* (PM_STDBYCFG) Voltage Regulator Standby mode Mask */
#define PM_STDBYCFG_VREGSMOD(value)           (PM_STDBYCFG_VREGSMOD_Msk & (_UINT16_(value) << PM_STDBYCFG_VREGSMOD_Pos)) /* Assigment of value for VREGSMOD in the PM_STDBYCFG register */
#define   PM_STDBYCFG_VREGSMOD_AUTO_Val       _UINT16_(0x0)                                        /* (PM_STDBYCFG) Automatic mode  */
#define   PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val _UINT16_(0x1)                                        /* (PM_STDBYCFG) Performance oriented  */
#define   PM_STDBYCFG_VREGSMOD_LP_Val         _UINT16_(0x2)                                        /* (PM_STDBYCFG) Low Power oriented  */
#define PM_STDBYCFG_VREGSMOD_AUTO             (PM_STDBYCFG_VREGSMOD_AUTO_Val << PM_STDBYCFG_VREGSMOD_Pos) /* (PM_STDBYCFG) Automatic mode Position  */
#define PM_STDBYCFG_VREGSMOD_PERFORMANCE      (PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val << PM_STDBYCFG_VREGSMOD_Pos) /* (PM_STDBYCFG) Performance oriented Position  */
#define PM_STDBYCFG_VREGSMOD_LP               (PM_STDBYCFG_VREGSMOD_LP_Val << PM_STDBYCFG_VREGSMOD_Pos) /* (PM_STDBYCFG) Low Power oriented Position  */
#define PM_STDBYCFG_BBIASHS_Pos               _UINT16_(10)                                         /* (PM_STDBYCFG) Back Bias for SRAM Position */
#define PM_STDBYCFG_BBIASHS_Msk               (_UINT16_(0x1) << PM_STDBYCFG_BBIASHS_Pos)           /* (PM_STDBYCFG) Back Bias for SRAM Mask */
#define PM_STDBYCFG_BBIASHS(value)            (PM_STDBYCFG_BBIASHS_Msk & (_UINT16_(value) << PM_STDBYCFG_BBIASHS_Pos)) /* Assigment of value for BBIASHS in the PM_STDBYCFG register */
#define PM_STDBYCFG_BBIASTR_Pos               _UINT16_(12)                                         /* (PM_STDBYCFG) Back Bias for Trust RAM Position */
#define PM_STDBYCFG_BBIASTR_Msk               (_UINT16_(0x1) << PM_STDBYCFG_BBIASTR_Pos)           /* (PM_STDBYCFG) Back Bias for Trust RAM Mask */
#define PM_STDBYCFG_BBIASTR(value)            (PM_STDBYCFG_BBIASTR_Msk & (_UINT16_(value) << PM_STDBYCFG_BBIASTR_Pos)) /* Assigment of value for BBIASTR in the PM_STDBYCFG register */
#define PM_STDBYCFG_Msk                       _UINT16_(0x14D1)                                     /* (PM_STDBYCFG) Register Mask  */


/** \brief PM register offsets definitions */
#define PM_SLEEPCFG_REG_OFST           _UINT32_(0x01)      /* (PM_SLEEPCFG) Sleep Configuration Offset */
#define PM_PLCFG_REG_OFST              _UINT32_(0x02)      /* (PM_PLCFG) Performance Level Configuration Offset */
#define PM_PWCFG_REG_OFST              _UINT32_(0x03)      /* (PM_PWCFG) Power Configuration Offset */
#define PM_INTENCLR_REG_OFST           _UINT32_(0x04)      /* (PM_INTENCLR) Interrupt Enable Clear Offset */
#define PM_INTENSET_REG_OFST           _UINT32_(0x05)      /* (PM_INTENSET) Interrupt Enable Set Offset */
#define PM_INTFLAG_REG_OFST            _UINT32_(0x06)      /* (PM_INTFLAG) Interrupt Flag Status and Clear Offset */
#define PM_STDBYCFG_REG_OFST           _UINT32_(0x08)      /* (PM_STDBYCFG) Standby Configuration Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PM register API structure */
typedef struct
{  /* Power Manager */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        PM_SLEEPCFG;        /**< Offset: 0x01 (R/W  8) Sleep Configuration */
  __IO  uint8_t                        PM_PLCFG;           /**< Offset: 0x02 (R/W  8) Performance Level Configuration */
  __IO  uint8_t                        PM_PWCFG;           /**< Offset: 0x03 (R/W  8) Power Configuration */
  __IO  uint8_t                        PM_INTENCLR;        /**< Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        PM_INTENSET;        /**< Offset: 0x05 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        PM_INTFLAG;         /**< Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint16_t                       PM_STDBYCFG;        /**< Offset: 0x08 (R/W  16) Standby Configuration */
} pm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_PM_COMPONENT_H_ */
