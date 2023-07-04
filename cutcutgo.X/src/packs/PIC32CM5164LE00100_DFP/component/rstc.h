/*
 * Component description for RSTC
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
#ifndef _PIC32CMLE00_RSTC_COMPONENT_H_
#define _PIC32CMLE00_RSTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RSTC                                         */
/* ************************************************************************** */

/* -------- RSTC_RCAUSE : (RSTC Offset: 0x00) ( R/ 8) Reset Cause -------- */
#define RSTC_RCAUSE_POR_Pos                   _UINT8_(0)                                           /* (RSTC_RCAUSE) Power On Reset Position */
#define RSTC_RCAUSE_POR_Msk                   (_UINT8_(0x1) << RSTC_RCAUSE_POR_Pos)                /* (RSTC_RCAUSE) Power On Reset Mask */
#define RSTC_RCAUSE_POR(value)                (RSTC_RCAUSE_POR_Msk & (_UINT8_(value) << RSTC_RCAUSE_POR_Pos)) /* Assigment of value for POR in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_BOD12_Pos                 _UINT8_(1)                                           /* (RSTC_RCAUSE) Brown Out VDDCORE Detector Reset Position */
#define RSTC_RCAUSE_BOD12_Msk                 (_UINT8_(0x1) << RSTC_RCAUSE_BOD12_Pos)              /* (RSTC_RCAUSE) Brown Out VDDCORE Detector Reset Mask */
#define RSTC_RCAUSE_BOD12(value)              (RSTC_RCAUSE_BOD12_Msk & (_UINT8_(value) << RSTC_RCAUSE_BOD12_Pos)) /* Assigment of value for BOD12 in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_BOD33_Pos                 _UINT8_(2)                                           /* (RSTC_RCAUSE) Brown Out VDD/AVDD Detector Reset Position */
#define RSTC_RCAUSE_BOD33_Msk                 (_UINT8_(0x1) << RSTC_RCAUSE_BOD33_Pos)              /* (RSTC_RCAUSE) Brown Out VDD/AVDD Detector Reset Mask */
#define RSTC_RCAUSE_BOD33(value)              (RSTC_RCAUSE_BOD33_Msk & (_UINT8_(value) << RSTC_RCAUSE_BOD33_Pos)) /* Assigment of value for BOD33 in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_BOD12PLL_Pos              _UINT8_(3)                                           /* (RSTC_RCAUSE) Brown Out VDDPLL Detector Reset Position */
#define RSTC_RCAUSE_BOD12PLL_Msk              (_UINT8_(0x1) << RSTC_RCAUSE_BOD12PLL_Pos)           /* (RSTC_RCAUSE) Brown Out VDDPLL Detector Reset Mask */
#define RSTC_RCAUSE_BOD12PLL(value)           (RSTC_RCAUSE_BOD12PLL_Msk & (_UINT8_(value) << RSTC_RCAUSE_BOD12PLL_Pos)) /* Assigment of value for BOD12PLL in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_EXT_Pos                   _UINT8_(4)                                           /* (RSTC_RCAUSE) External Reset Position */
#define RSTC_RCAUSE_EXT_Msk                   (_UINT8_(0x1) << RSTC_RCAUSE_EXT_Pos)                /* (RSTC_RCAUSE) External Reset Mask */
#define RSTC_RCAUSE_EXT(value)                (RSTC_RCAUSE_EXT_Msk & (_UINT8_(value) << RSTC_RCAUSE_EXT_Pos)) /* Assigment of value for EXT in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_WDT_Pos                   _UINT8_(5)                                           /* (RSTC_RCAUSE) Watchdog Reset Position */
#define RSTC_RCAUSE_WDT_Msk                   (_UINT8_(0x1) << RSTC_RCAUSE_WDT_Pos)                /* (RSTC_RCAUSE) Watchdog Reset Mask */
#define RSTC_RCAUSE_WDT(value)                (RSTC_RCAUSE_WDT_Msk & (_UINT8_(value) << RSTC_RCAUSE_WDT_Pos)) /* Assigment of value for WDT in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_SYST_Pos                  _UINT8_(6)                                           /* (RSTC_RCAUSE) System Reset Request Position */
#define RSTC_RCAUSE_SYST_Msk                  (_UINT8_(0x1) << RSTC_RCAUSE_SYST_Pos)               /* (RSTC_RCAUSE) System Reset Request Mask */
#define RSTC_RCAUSE_SYST(value)               (RSTC_RCAUSE_SYST_Msk & (_UINT8_(value) << RSTC_RCAUSE_SYST_Pos)) /* Assigment of value for SYST in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_Msk                       _UINT8_(0x7F)                                        /* (RSTC_RCAUSE) Register Mask  */

#define RSTC_RCAUSE_BOD_Pos                   _UINT8_(1)                                           /* (RSTC_RCAUSE Position) Brown Out VDDCORE Detector Reset */
#define RSTC_RCAUSE_BOD_Msk                   (_UINT8_(0x3) << RSTC_RCAUSE_BOD_Pos)                /* (RSTC_RCAUSE Mask) BOD */
#define RSTC_RCAUSE_BOD(value)                (RSTC_RCAUSE_BOD_Msk & (_UINT8_(value) << RSTC_RCAUSE_BOD_Pos)) 

/** \brief RSTC register offsets definitions */
#define RSTC_RCAUSE_REG_OFST           _UINT32_(0x00)      /* (RSTC_RCAUSE) Reset Cause Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RSTC register API structure */
typedef struct
{  /* Reset Controller */
  __I   uint8_t                        RSTC_RCAUSE;        /**< Offset: 0x00 (R/   8) Reset Cause */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMLE00_RSTC_COMPONENT_H_ */
