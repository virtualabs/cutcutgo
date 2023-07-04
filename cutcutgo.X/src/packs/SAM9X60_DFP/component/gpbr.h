/*
 * Component description for GPBR
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

/* file generated from device description version 2021-05-04T16:22:14Z */
#ifndef _SAM9X_GPBR_COMPONENT_H_
#define _SAM9X_GPBR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GPBR                                         */
/* ************************************************************************** */

/* -------- GPBR_MR : (GPBR Offset: 0x00) (R/W 32) GPBR Mode Register -------- */
#define GPBR_MR_GPBRWP0_Pos                   _U_(0)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP0_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP0_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP0(value)                (GPBR_MR_GPBRWP0_Msk & ((value) << GPBR_MR_GPBRWP0_Pos))
#define GPBR_MR_GPBRWP1_Pos                   _U_(1)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP1_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP1_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP1(value)                (GPBR_MR_GPBRWP1_Msk & ((value) << GPBR_MR_GPBRWP1_Pos))
#define GPBR_MR_GPBRWP2_Pos                   _U_(2)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP2_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP2_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP2(value)                (GPBR_MR_GPBRWP2_Msk & ((value) << GPBR_MR_GPBRWP2_Pos))
#define GPBR_MR_GPBRWP3_Pos                   _U_(3)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP3_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP3_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP3(value)                (GPBR_MR_GPBRWP3_Msk & ((value) << GPBR_MR_GPBRWP3_Pos))
#define GPBR_MR_GPBRWP4_Pos                   _U_(4)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP4_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP4_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP4(value)                (GPBR_MR_GPBRWP4_Msk & ((value) << GPBR_MR_GPBRWP4_Pos))
#define GPBR_MR_GPBRWP5_Pos                   _U_(5)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP5_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP5_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP5(value)                (GPBR_MR_GPBRWP5_Msk & ((value) << GPBR_MR_GPBRWP5_Pos))
#define GPBR_MR_GPBRWP6_Pos                   _U_(6)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP6_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP6_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP6(value)                (GPBR_MR_GPBRWP6_Msk & ((value) << GPBR_MR_GPBRWP6_Pos))
#define GPBR_MR_GPBRWP7_Pos                   _U_(7)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP7_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP7_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP7(value)                (GPBR_MR_GPBRWP7_Msk & ((value) << GPBR_MR_GPBRWP7_Pos))
#define GPBR_MR_GPBRWP8_Pos                   _U_(8)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP8_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP8_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP8(value)                (GPBR_MR_GPBRWP8_Msk & ((value) << GPBR_MR_GPBRWP8_Pos))
#define GPBR_MR_GPBRWP9_Pos                   _U_(9)                                               /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP9_Msk                   (_U_(0x1) << GPBR_MR_GPBRWP9_Pos)                    /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP9(value)                (GPBR_MR_GPBRWP9_Msk & ((value) << GPBR_MR_GPBRWP9_Pos))
#define GPBR_MR_GPBRWP10_Pos                  _U_(10)                                              /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP10_Msk                  (_U_(0x1) << GPBR_MR_GPBRWP10_Pos)                   /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP10(value)               (GPBR_MR_GPBRWP10_Msk & ((value) << GPBR_MR_GPBRWP10_Pos))
#define GPBR_MR_GPBRWP11_Pos                  _U_(11)                                              /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP11_Msk                  (_U_(0x1) << GPBR_MR_GPBRWP11_Pos)                   /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP11(value)               (GPBR_MR_GPBRWP11_Msk & ((value) << GPBR_MR_GPBRWP11_Pos))
#define GPBR_MR_GPBRWP12_Pos                  _U_(12)                                              /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP12_Msk                  (_U_(0x1) << GPBR_MR_GPBRWP12_Pos)                   /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP12(value)               (GPBR_MR_GPBRWP12_Msk & ((value) << GPBR_MR_GPBRWP12_Pos))
#define GPBR_MR_GPBRWP13_Pos                  _U_(13)                                              /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP13_Msk                  (_U_(0x1) << GPBR_MR_GPBRWP13_Pos)                   /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP13(value)               (GPBR_MR_GPBRWP13_Msk & ((value) << GPBR_MR_GPBRWP13_Pos))
#define GPBR_MR_GPBRWP14_Pos                  _U_(14)                                              /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP14_Msk                  (_U_(0x1) << GPBR_MR_GPBRWP14_Pos)                   /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP14(value)               (GPBR_MR_GPBRWP14_Msk & ((value) << GPBR_MR_GPBRWP14_Pos))
#define GPBR_MR_GPBRWP15_Pos                  _U_(15)                                              /**< (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP15_Msk                  (_U_(0x1) << GPBR_MR_GPBRWP15_Pos)                   /**< (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP15(value)               (GPBR_MR_GPBRWP15_Msk & ((value) << GPBR_MR_GPBRWP15_Pos))
#define GPBR_MR_GPBRRP0_Pos                   _U_(16)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP0_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP0_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP0(value)                (GPBR_MR_GPBRRP0_Msk & ((value) << GPBR_MR_GPBRRP0_Pos))
#define GPBR_MR_GPBRRP1_Pos                   _U_(17)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP1_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP1_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP1(value)                (GPBR_MR_GPBRRP1_Msk & ((value) << GPBR_MR_GPBRRP1_Pos))
#define GPBR_MR_GPBRRP2_Pos                   _U_(18)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP2_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP2_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP2(value)                (GPBR_MR_GPBRRP2_Msk & ((value) << GPBR_MR_GPBRRP2_Pos))
#define GPBR_MR_GPBRRP3_Pos                   _U_(19)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP3_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP3_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP3(value)                (GPBR_MR_GPBRRP3_Msk & ((value) << GPBR_MR_GPBRRP3_Pos))
#define GPBR_MR_GPBRRP4_Pos                   _U_(20)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP4_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP4_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP4(value)                (GPBR_MR_GPBRRP4_Msk & ((value) << GPBR_MR_GPBRRP4_Pos))
#define GPBR_MR_GPBRRP5_Pos                   _U_(21)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP5_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP5_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP5(value)                (GPBR_MR_GPBRRP5_Msk & ((value) << GPBR_MR_GPBRRP5_Pos))
#define GPBR_MR_GPBRRP6_Pos                   _U_(22)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP6_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP6_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP6(value)                (GPBR_MR_GPBRRP6_Msk & ((value) << GPBR_MR_GPBRRP6_Pos))
#define GPBR_MR_GPBRRP7_Pos                   _U_(23)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP7_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP7_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP7(value)                (GPBR_MR_GPBRRP7_Msk & ((value) << GPBR_MR_GPBRRP7_Pos))
#define GPBR_MR_GPBRRP8_Pos                   _U_(24)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP8_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP8_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP8(value)                (GPBR_MR_GPBRRP8_Msk & ((value) << GPBR_MR_GPBRRP8_Pos))
#define GPBR_MR_GPBRRP9_Pos                   _U_(25)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP9_Msk                   (_U_(0x1) << GPBR_MR_GPBRRP9_Pos)                    /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP9(value)                (GPBR_MR_GPBRRP9_Msk & ((value) << GPBR_MR_GPBRRP9_Pos))
#define GPBR_MR_GPBRRP10_Pos                  _U_(26)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP10_Msk                  (_U_(0x1) << GPBR_MR_GPBRRP10_Pos)                   /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP10(value)               (GPBR_MR_GPBRRP10_Msk & ((value) << GPBR_MR_GPBRRP10_Pos))
#define GPBR_MR_GPBRRP11_Pos                  _U_(27)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP11_Msk                  (_U_(0x1) << GPBR_MR_GPBRRP11_Pos)                   /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP11(value)               (GPBR_MR_GPBRRP11_Msk & ((value) << GPBR_MR_GPBRRP11_Pos))
#define GPBR_MR_GPBRRP12_Pos                  _U_(28)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP12_Msk                  (_U_(0x1) << GPBR_MR_GPBRRP12_Pos)                   /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP12(value)               (GPBR_MR_GPBRRP12_Msk & ((value) << GPBR_MR_GPBRRP12_Pos))
#define GPBR_MR_GPBRRP13_Pos                  _U_(29)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP13_Msk                  (_U_(0x1) << GPBR_MR_GPBRRP13_Pos)                   /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP13(value)               (GPBR_MR_GPBRRP13_Msk & ((value) << GPBR_MR_GPBRRP13_Pos))
#define GPBR_MR_GPBRRP14_Pos                  _U_(30)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP14_Msk                  (_U_(0x1) << GPBR_MR_GPBRRP14_Pos)                   /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP14(value)               (GPBR_MR_GPBRRP14_Msk & ((value) << GPBR_MR_GPBRRP14_Pos))
#define GPBR_MR_GPBRRP15_Pos                  _U_(31)                                              /**< (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP15_Msk                  (_U_(0x1) << GPBR_MR_GPBRRP15_Pos)                   /**< (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP15(value)               (GPBR_MR_GPBRRP15_Msk & ((value) << GPBR_MR_GPBRRP15_Pos))
#define GPBR_MR_Msk                           _U_(0xFFFFFFFF)                                      /**< (GPBR_MR) Register Mask  */

#define GPBR_MR_GPBRWP_Pos                    _U_(0)                                               /**< (GPBR_MR Position) GPBRx Write Protection */
#define GPBR_MR_GPBRWP_Msk                    (_U_(0xFFFF) << GPBR_MR_GPBRWP_Pos)                  /**< (GPBR_MR Mask) GPBRWP */
#define GPBR_MR_GPBRWP(value)                 (GPBR_MR_GPBRWP_Msk & ((value) << GPBR_MR_GPBRWP_Pos)) 
#define GPBR_MR_GPBRRP_Pos                    _U_(16)                                              /**< (GPBR_MR Position) GPBRx Read Protection */
#define GPBR_MR_GPBRRP_Msk                    (_U_(0xFFFF) << GPBR_MR_GPBRRP_Pos)                  /**< (GPBR_MR Mask) GPBRRP */
#define GPBR_MR_GPBRRP(value)                 (GPBR_MR_GPBRRP_Msk & ((value) << GPBR_MR_GPBRRP_Pos)) 

/* -------- GPBR_FCLR : (GPBR Offset: 0x04) (R/W 32) GPBR Full Clear Register -------- */
#define GPBR_FCLR_FCLR_Pos                    _U_(0)                                               /**< (GPBR_FCLR) Full Clear Enable Position */
#define GPBR_FCLR_FCLR_Msk                    (_U_(0x1) << GPBR_FCLR_FCLR_Pos)                     /**< (GPBR_FCLR) Full Clear Enable Mask */
#define GPBR_FCLR_FCLR(value)                 (GPBR_FCLR_FCLR_Msk & ((value) << GPBR_FCLR_FCLR_Pos))
#define GPBR_FCLR_Msk                         _U_(0x00000001)                                      /**< (GPBR_FCLR) Register Mask  */


/* -------- SYS_GPBR : (GPBR Offset: 0x08) (R/W 32) General Purpose Backup Register -------- */
#define SYS_GPBR_GPBR_VALUE_Pos               _U_(0)                                               /**< (SYS_GPBR) Value of SYS_GPBR x Position */
#define SYS_GPBR_GPBR_VALUE_Msk               (_U_(0xFFFFFFFF) << SYS_GPBR_GPBR_VALUE_Pos)         /**< (SYS_GPBR) Value of SYS_GPBR x Mask */
#define SYS_GPBR_GPBR_VALUE(value)            (SYS_GPBR_GPBR_VALUE_Msk & ((value) << SYS_GPBR_GPBR_VALUE_Pos))
#define SYS_GPBR_Msk                          _U_(0xFFFFFFFF)                                      /**< (SYS_GPBR) Register Mask  */


/** \brief GPBR register offsets definitions */
#define GPBR_MR_REG_OFST               (0x00)              /**< (GPBR_MR) GPBR Mode Register Offset */
#define GPBR_FCLR_REG_OFST             (0x04)              /**< (GPBR_FCLR) GPBR Full Clear Register Offset */
#define SYS_GPBR_REG_OFST              (0x08)              /**< (SYS_GPBR) General Purpose Backup Register Offset */
#define SYS_GPBR0_REG_OFST             (0x08)              /**< (SYS_GPBR0) General Purpose Backup Register Offset */
#define SYS_GPBR1_REG_OFST             (0x0C)              /**< (SYS_GPBR1) General Purpose Backup Register Offset */
#define SYS_GPBR2_REG_OFST             (0x10)              /**< (SYS_GPBR2) General Purpose Backup Register Offset */
#define SYS_GPBR3_REG_OFST             (0x14)              /**< (SYS_GPBR3) General Purpose Backup Register Offset */
#define SYS_GPBR4_REG_OFST             (0x18)              /**< (SYS_GPBR4) General Purpose Backup Register Offset */
#define SYS_GPBR5_REG_OFST             (0x1C)              /**< (SYS_GPBR5) General Purpose Backup Register Offset */
#define SYS_GPBR6_REG_OFST             (0x20)              /**< (SYS_GPBR6) General Purpose Backup Register Offset */
#define SYS_GPBR7_REG_OFST             (0x24)              /**< (SYS_GPBR7) General Purpose Backup Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPBR register API structure */
typedef struct
{
  __IO  uint32_t                       GPBR_MR;            /**< Offset: 0x00 (R/W  32) GPBR Mode Register */
  __IO  uint32_t                       GPBR_FCLR;          /**< Offset: 0x04 (R/W  32) GPBR Full Clear Register */
  __IO  uint32_t                       SYS_GPBR[8];        /**< Offset: 0x08 (R/W  32) General Purpose Backup Register */
} gpbr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_GPBR_COMPONENT_H_ */
