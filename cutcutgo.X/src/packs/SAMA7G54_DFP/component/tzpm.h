/*
 * Component description for TZPM
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
#ifndef _SAMA7G_TZPM_COMPONENT_H_
#define _SAMA7G_TZPM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TZPM                                         */
/* ************************************************************************** */

/* -------- TZPM_KEY : (TZPM Offset: 0x04) (R/W 32) TrustZone Peripheral Manager Key -------- */
#define TZPM_KEY_RESETVALUE                   _U_(0x00)                                            /**<  (TZPM_KEY) TrustZone Peripheral Manager Key  Reset Value */

#define TZPM_KEY_TZPMKEY_Pos                  _U_(0)                                               /**< (TZPM_KEY) Key preventing TZPM_PIDRx registers to be modified unintentionally by software Position */
#define TZPM_KEY_TZPMKEY_Msk                  (_U_(0xFFFFFFFF) << TZPM_KEY_TZPMKEY_Pos)            /**< (TZPM_KEY) Key preventing TZPM_PIDRx registers to be modified unintentionally by software Mask */
#define TZPM_KEY_TZPMKEY(value)               (TZPM_KEY_TZPMKEY_Msk & ((value) << TZPM_KEY_TZPMKEY_Pos))
#define   TZPM_KEY_TZPMKEY_PASSWD_Val         _U_(0x12AC4B5D)                                      /**< (TZPM_KEY) Writing any other value in this field aborts the write operation of the TZPM_PIDRx Registers. Always reads as 0.  */
#define TZPM_KEY_TZPMKEY_PASSWD               (TZPM_KEY_TZPMKEY_PASSWD_Val << TZPM_KEY_TZPMKEY_Pos) /**< (TZPM_KEY) Writing any other value in this field aborts the write operation of the TZPM_PIDRx Registers. Always reads as 0. Position  */
#define TZPM_KEY_Msk                          _U_(0xFFFFFFFF)                                      /**< (TZPM_KEY) Register Mask  */


/* -------- TZPM_PIDR0 : (TZPM Offset: 0x08) (R/W 32) TrustZone Peripheral Manager Peripheral ID Register 0 -------- */
#define TZPM_PIDR0_RESETVALUE                 _U_(0x00)                                            /**<  (TZPM_PIDR0) TrustZone Peripheral Manager Peripheral ID Register 0  Reset Value */

#define TZPM_PIDR0_PID0_Pos                   _U_(0)                                               /**< (TZPM_PIDR0) Peripheral ID 0 Security Position */
#define TZPM_PIDR0_PID0_Msk                   (_U_(0x1) << TZPM_PIDR0_PID0_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 0 Security Mask */
#define TZPM_PIDR0_PID0(value)                (TZPM_PIDR0_PID0_Msk & ((value) << TZPM_PIDR0_PID0_Pos))
#define   TZPM_PIDR0_PID0_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID0_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID0_0                     (TZPM_PIDR0_PID0_0_Val << TZPM_PIDR0_PID0_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID0_1                     (TZPM_PIDR0_PID0_1_Val << TZPM_PIDR0_PID0_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID1_Pos                   _U_(1)                                               /**< (TZPM_PIDR0) Peripheral ID 1 Security Position */
#define TZPM_PIDR0_PID1_Msk                   (_U_(0x1) << TZPM_PIDR0_PID1_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 1 Security Mask */
#define TZPM_PIDR0_PID1(value)                (TZPM_PIDR0_PID1_Msk & ((value) << TZPM_PIDR0_PID1_Pos))
#define   TZPM_PIDR0_PID1_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID1_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID1_0                     (TZPM_PIDR0_PID1_0_Val << TZPM_PIDR0_PID1_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID1_1                     (TZPM_PIDR0_PID1_1_Val << TZPM_PIDR0_PID1_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID2_Pos                   _U_(2)                                               /**< (TZPM_PIDR0) Peripheral ID 2 Security Position */
#define TZPM_PIDR0_PID2_Msk                   (_U_(0x1) << TZPM_PIDR0_PID2_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 2 Security Mask */
#define TZPM_PIDR0_PID2(value)                (TZPM_PIDR0_PID2_Msk & ((value) << TZPM_PIDR0_PID2_Pos))
#define   TZPM_PIDR0_PID2_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID2_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID2_0                     (TZPM_PIDR0_PID2_0_Val << TZPM_PIDR0_PID2_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID2_1                     (TZPM_PIDR0_PID2_1_Val << TZPM_PIDR0_PID2_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID3_Pos                   _U_(3)                                               /**< (TZPM_PIDR0) Peripheral ID 3 Security Position */
#define TZPM_PIDR0_PID3_Msk                   (_U_(0x1) << TZPM_PIDR0_PID3_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 3 Security Mask */
#define TZPM_PIDR0_PID3(value)                (TZPM_PIDR0_PID3_Msk & ((value) << TZPM_PIDR0_PID3_Pos))
#define   TZPM_PIDR0_PID3_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID3_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID3_0                     (TZPM_PIDR0_PID3_0_Val << TZPM_PIDR0_PID3_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID3_1                     (TZPM_PIDR0_PID3_1_Val << TZPM_PIDR0_PID3_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID4_Pos                   _U_(4)                                               /**< (TZPM_PIDR0) Peripheral ID 4 Security Position */
#define TZPM_PIDR0_PID4_Msk                   (_U_(0x1) << TZPM_PIDR0_PID4_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 4 Security Mask */
#define TZPM_PIDR0_PID4(value)                (TZPM_PIDR0_PID4_Msk & ((value) << TZPM_PIDR0_PID4_Pos))
#define   TZPM_PIDR0_PID4_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID4_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID4_0                     (TZPM_PIDR0_PID4_0_Val << TZPM_PIDR0_PID4_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID4_1                     (TZPM_PIDR0_PID4_1_Val << TZPM_PIDR0_PID4_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID5_Pos                   _U_(5)                                               /**< (TZPM_PIDR0) Peripheral ID 5 Security Position */
#define TZPM_PIDR0_PID5_Msk                   (_U_(0x1) << TZPM_PIDR0_PID5_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 5 Security Mask */
#define TZPM_PIDR0_PID5(value)                (TZPM_PIDR0_PID5_Msk & ((value) << TZPM_PIDR0_PID5_Pos))
#define   TZPM_PIDR0_PID5_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID5_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID5_0                     (TZPM_PIDR0_PID5_0_Val << TZPM_PIDR0_PID5_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID5_1                     (TZPM_PIDR0_PID5_1_Val << TZPM_PIDR0_PID5_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID6_Pos                   _U_(6)                                               /**< (TZPM_PIDR0) Peripheral ID 6 Security Position */
#define TZPM_PIDR0_PID6_Msk                   (_U_(0x1) << TZPM_PIDR0_PID6_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 6 Security Mask */
#define TZPM_PIDR0_PID6(value)                (TZPM_PIDR0_PID6_Msk & ((value) << TZPM_PIDR0_PID6_Pos))
#define   TZPM_PIDR0_PID6_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID6_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID6_0                     (TZPM_PIDR0_PID6_0_Val << TZPM_PIDR0_PID6_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID6_1                     (TZPM_PIDR0_PID6_1_Val << TZPM_PIDR0_PID6_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID7_Pos                   _U_(7)                                               /**< (TZPM_PIDR0) Peripheral ID 7 Security Position */
#define TZPM_PIDR0_PID7_Msk                   (_U_(0x1) << TZPM_PIDR0_PID7_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 7 Security Mask */
#define TZPM_PIDR0_PID7(value)                (TZPM_PIDR0_PID7_Msk & ((value) << TZPM_PIDR0_PID7_Pos))
#define   TZPM_PIDR0_PID7_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID7_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID7_0                     (TZPM_PIDR0_PID7_0_Val << TZPM_PIDR0_PID7_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID7_1                     (TZPM_PIDR0_PID7_1_Val << TZPM_PIDR0_PID7_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID8_Pos                   _U_(8)                                               /**< (TZPM_PIDR0) Peripheral ID 8 Security Position */
#define TZPM_PIDR0_PID8_Msk                   (_U_(0x1) << TZPM_PIDR0_PID8_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 8 Security Mask */
#define TZPM_PIDR0_PID8(value)                (TZPM_PIDR0_PID8_Msk & ((value) << TZPM_PIDR0_PID8_Pos))
#define   TZPM_PIDR0_PID8_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID8_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID8_0                     (TZPM_PIDR0_PID8_0_Val << TZPM_PIDR0_PID8_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID8_1                     (TZPM_PIDR0_PID8_1_Val << TZPM_PIDR0_PID8_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID9_Pos                   _U_(9)                                               /**< (TZPM_PIDR0) Peripheral ID 9 Security Position */
#define TZPM_PIDR0_PID9_Msk                   (_U_(0x1) << TZPM_PIDR0_PID9_Pos)                    /**< (TZPM_PIDR0) Peripheral ID 9 Security Mask */
#define TZPM_PIDR0_PID9(value)                (TZPM_PIDR0_PID9_Msk & ((value) << TZPM_PIDR0_PID9_Pos))
#define   TZPM_PIDR0_PID9_0_Val               _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID9_1_Val               _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID9_0                     (TZPM_PIDR0_PID9_0_Val << TZPM_PIDR0_PID9_Pos)       /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID9_1                     (TZPM_PIDR0_PID9_1_Val << TZPM_PIDR0_PID9_Pos)       /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID10_Pos                  _U_(10)                                              /**< (TZPM_PIDR0) Peripheral ID 10 Security Position */
#define TZPM_PIDR0_PID10_Msk                  (_U_(0x1) << TZPM_PIDR0_PID10_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 10 Security Mask */
#define TZPM_PIDR0_PID10(value)               (TZPM_PIDR0_PID10_Msk & ((value) << TZPM_PIDR0_PID10_Pos))
#define   TZPM_PIDR0_PID10_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID10_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID10_0                    (TZPM_PIDR0_PID10_0_Val << TZPM_PIDR0_PID10_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID10_1                    (TZPM_PIDR0_PID10_1_Val << TZPM_PIDR0_PID10_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID11_Pos                  _U_(11)                                              /**< (TZPM_PIDR0) Peripheral ID 11 Security Position */
#define TZPM_PIDR0_PID11_Msk                  (_U_(0x1) << TZPM_PIDR0_PID11_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 11 Security Mask */
#define TZPM_PIDR0_PID11(value)               (TZPM_PIDR0_PID11_Msk & ((value) << TZPM_PIDR0_PID11_Pos))
#define   TZPM_PIDR0_PID11_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID11_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID11_0                    (TZPM_PIDR0_PID11_0_Val << TZPM_PIDR0_PID11_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID11_1                    (TZPM_PIDR0_PID11_1_Val << TZPM_PIDR0_PID11_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID12_Pos                  _U_(12)                                              /**< (TZPM_PIDR0) Peripheral ID 12 Security Position */
#define TZPM_PIDR0_PID12_Msk                  (_U_(0x1) << TZPM_PIDR0_PID12_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 12 Security Mask */
#define TZPM_PIDR0_PID12(value)               (TZPM_PIDR0_PID12_Msk & ((value) << TZPM_PIDR0_PID12_Pos))
#define   TZPM_PIDR0_PID12_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID12_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID12_0                    (TZPM_PIDR0_PID12_0_Val << TZPM_PIDR0_PID12_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID12_1                    (TZPM_PIDR0_PID12_1_Val << TZPM_PIDR0_PID12_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID13_Pos                  _U_(13)                                              /**< (TZPM_PIDR0) Peripheral ID 13 Security Position */
#define TZPM_PIDR0_PID13_Msk                  (_U_(0x1) << TZPM_PIDR0_PID13_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 13 Security Mask */
#define TZPM_PIDR0_PID13(value)               (TZPM_PIDR0_PID13_Msk & ((value) << TZPM_PIDR0_PID13_Pos))
#define   TZPM_PIDR0_PID13_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID13_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID13_0                    (TZPM_PIDR0_PID13_0_Val << TZPM_PIDR0_PID13_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID13_1                    (TZPM_PIDR0_PID13_1_Val << TZPM_PIDR0_PID13_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID14_Pos                  _U_(14)                                              /**< (TZPM_PIDR0) Peripheral ID 14 Security Position */
#define TZPM_PIDR0_PID14_Msk                  (_U_(0x1) << TZPM_PIDR0_PID14_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 14 Security Mask */
#define TZPM_PIDR0_PID14(value)               (TZPM_PIDR0_PID14_Msk & ((value) << TZPM_PIDR0_PID14_Pos))
#define   TZPM_PIDR0_PID14_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID14_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID14_0                    (TZPM_PIDR0_PID14_0_Val << TZPM_PIDR0_PID14_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID14_1                    (TZPM_PIDR0_PID14_1_Val << TZPM_PIDR0_PID14_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID15_Pos                  _U_(15)                                              /**< (TZPM_PIDR0) Peripheral ID 15 Security Position */
#define TZPM_PIDR0_PID15_Msk                  (_U_(0x1) << TZPM_PIDR0_PID15_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 15 Security Mask */
#define TZPM_PIDR0_PID15(value)               (TZPM_PIDR0_PID15_Msk & ((value) << TZPM_PIDR0_PID15_Pos))
#define   TZPM_PIDR0_PID15_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID15_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID15_0                    (TZPM_PIDR0_PID15_0_Val << TZPM_PIDR0_PID15_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID15_1                    (TZPM_PIDR0_PID15_1_Val << TZPM_PIDR0_PID15_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID16_Pos                  _U_(16)                                              /**< (TZPM_PIDR0) Peripheral ID 16 Security Position */
#define TZPM_PIDR0_PID16_Msk                  (_U_(0x1) << TZPM_PIDR0_PID16_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 16 Security Mask */
#define TZPM_PIDR0_PID16(value)               (TZPM_PIDR0_PID16_Msk & ((value) << TZPM_PIDR0_PID16_Pos))
#define   TZPM_PIDR0_PID16_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID16_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID16_0                    (TZPM_PIDR0_PID16_0_Val << TZPM_PIDR0_PID16_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID16_1                    (TZPM_PIDR0_PID16_1_Val << TZPM_PIDR0_PID16_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID17_Pos                  _U_(17)                                              /**< (TZPM_PIDR0) Peripheral ID 17 Security Position */
#define TZPM_PIDR0_PID17_Msk                  (_U_(0x1) << TZPM_PIDR0_PID17_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 17 Security Mask */
#define TZPM_PIDR0_PID17(value)               (TZPM_PIDR0_PID17_Msk & ((value) << TZPM_PIDR0_PID17_Pos))
#define   TZPM_PIDR0_PID17_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID17_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID17_0                    (TZPM_PIDR0_PID17_0_Val << TZPM_PIDR0_PID17_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID17_1                    (TZPM_PIDR0_PID17_1_Val << TZPM_PIDR0_PID17_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID18_Pos                  _U_(18)                                              /**< (TZPM_PIDR0) Peripheral ID 18 Security Position */
#define TZPM_PIDR0_PID18_Msk                  (_U_(0x1) << TZPM_PIDR0_PID18_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 18 Security Mask */
#define TZPM_PIDR0_PID18(value)               (TZPM_PIDR0_PID18_Msk & ((value) << TZPM_PIDR0_PID18_Pos))
#define   TZPM_PIDR0_PID18_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID18_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID18_0                    (TZPM_PIDR0_PID18_0_Val << TZPM_PIDR0_PID18_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID18_1                    (TZPM_PIDR0_PID18_1_Val << TZPM_PIDR0_PID18_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID19_Pos                  _U_(19)                                              /**< (TZPM_PIDR0) Peripheral ID 19 Security Position */
#define TZPM_PIDR0_PID19_Msk                  (_U_(0x1) << TZPM_PIDR0_PID19_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 19 Security Mask */
#define TZPM_PIDR0_PID19(value)               (TZPM_PIDR0_PID19_Msk & ((value) << TZPM_PIDR0_PID19_Pos))
#define   TZPM_PIDR0_PID19_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID19_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID19_0                    (TZPM_PIDR0_PID19_0_Val << TZPM_PIDR0_PID19_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID19_1                    (TZPM_PIDR0_PID19_1_Val << TZPM_PIDR0_PID19_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID20_Pos                  _U_(20)                                              /**< (TZPM_PIDR0) Peripheral ID 20 Security Position */
#define TZPM_PIDR0_PID20_Msk                  (_U_(0x1) << TZPM_PIDR0_PID20_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 20 Security Mask */
#define TZPM_PIDR0_PID20(value)               (TZPM_PIDR0_PID20_Msk & ((value) << TZPM_PIDR0_PID20_Pos))
#define   TZPM_PIDR0_PID20_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID20_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID20_0                    (TZPM_PIDR0_PID20_0_Val << TZPM_PIDR0_PID20_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID20_1                    (TZPM_PIDR0_PID20_1_Val << TZPM_PIDR0_PID20_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID21_Pos                  _U_(21)                                              /**< (TZPM_PIDR0) Peripheral ID 21 Security Position */
#define TZPM_PIDR0_PID21_Msk                  (_U_(0x1) << TZPM_PIDR0_PID21_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 21 Security Mask */
#define TZPM_PIDR0_PID21(value)               (TZPM_PIDR0_PID21_Msk & ((value) << TZPM_PIDR0_PID21_Pos))
#define   TZPM_PIDR0_PID21_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID21_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID21_0                    (TZPM_PIDR0_PID21_0_Val << TZPM_PIDR0_PID21_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID21_1                    (TZPM_PIDR0_PID21_1_Val << TZPM_PIDR0_PID21_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID22_Pos                  _U_(22)                                              /**< (TZPM_PIDR0) Peripheral ID 22 Security Position */
#define TZPM_PIDR0_PID22_Msk                  (_U_(0x1) << TZPM_PIDR0_PID22_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 22 Security Mask */
#define TZPM_PIDR0_PID22(value)               (TZPM_PIDR0_PID22_Msk & ((value) << TZPM_PIDR0_PID22_Pos))
#define   TZPM_PIDR0_PID22_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID22_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID22_0                    (TZPM_PIDR0_PID22_0_Val << TZPM_PIDR0_PID22_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID22_1                    (TZPM_PIDR0_PID22_1_Val << TZPM_PIDR0_PID22_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID23_Pos                  _U_(23)                                              /**< (TZPM_PIDR0) Peripheral ID 23 Security Position */
#define TZPM_PIDR0_PID23_Msk                  (_U_(0x1) << TZPM_PIDR0_PID23_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 23 Security Mask */
#define TZPM_PIDR0_PID23(value)               (TZPM_PIDR0_PID23_Msk & ((value) << TZPM_PIDR0_PID23_Pos))
#define   TZPM_PIDR0_PID23_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID23_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID23_0                    (TZPM_PIDR0_PID23_0_Val << TZPM_PIDR0_PID23_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID23_1                    (TZPM_PIDR0_PID23_1_Val << TZPM_PIDR0_PID23_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID24_Pos                  _U_(24)                                              /**< (TZPM_PIDR0) Peripheral ID 24 Security Position */
#define TZPM_PIDR0_PID24_Msk                  (_U_(0x1) << TZPM_PIDR0_PID24_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 24 Security Mask */
#define TZPM_PIDR0_PID24(value)               (TZPM_PIDR0_PID24_Msk & ((value) << TZPM_PIDR0_PID24_Pos))
#define   TZPM_PIDR0_PID24_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID24_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID24_0                    (TZPM_PIDR0_PID24_0_Val << TZPM_PIDR0_PID24_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID24_1                    (TZPM_PIDR0_PID24_1_Val << TZPM_PIDR0_PID24_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID25_Pos                  _U_(25)                                              /**< (TZPM_PIDR0) Peripheral ID 25 Security Position */
#define TZPM_PIDR0_PID25_Msk                  (_U_(0x1) << TZPM_PIDR0_PID25_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 25 Security Mask */
#define TZPM_PIDR0_PID25(value)               (TZPM_PIDR0_PID25_Msk & ((value) << TZPM_PIDR0_PID25_Pos))
#define   TZPM_PIDR0_PID25_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID25_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID25_0                    (TZPM_PIDR0_PID25_0_Val << TZPM_PIDR0_PID25_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID25_1                    (TZPM_PIDR0_PID25_1_Val << TZPM_PIDR0_PID25_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID26_Pos                  _U_(26)                                              /**< (TZPM_PIDR0) Peripheral ID 26 Security Position */
#define TZPM_PIDR0_PID26_Msk                  (_U_(0x1) << TZPM_PIDR0_PID26_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 26 Security Mask */
#define TZPM_PIDR0_PID26(value)               (TZPM_PIDR0_PID26_Msk & ((value) << TZPM_PIDR0_PID26_Pos))
#define   TZPM_PIDR0_PID26_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID26_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID26_0                    (TZPM_PIDR0_PID26_0_Val << TZPM_PIDR0_PID26_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID26_1                    (TZPM_PIDR0_PID26_1_Val << TZPM_PIDR0_PID26_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID27_Pos                  _U_(27)                                              /**< (TZPM_PIDR0) Peripheral ID 27 Security Position */
#define TZPM_PIDR0_PID27_Msk                  (_U_(0x1) << TZPM_PIDR0_PID27_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 27 Security Mask */
#define TZPM_PIDR0_PID27(value)               (TZPM_PIDR0_PID27_Msk & ((value) << TZPM_PIDR0_PID27_Pos))
#define   TZPM_PIDR0_PID27_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID27_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID27_0                    (TZPM_PIDR0_PID27_0_Val << TZPM_PIDR0_PID27_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID27_1                    (TZPM_PIDR0_PID27_1_Val << TZPM_PIDR0_PID27_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID28_Pos                  _U_(28)                                              /**< (TZPM_PIDR0) Peripheral ID 28 Security Position */
#define TZPM_PIDR0_PID28_Msk                  (_U_(0x1) << TZPM_PIDR0_PID28_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 28 Security Mask */
#define TZPM_PIDR0_PID28(value)               (TZPM_PIDR0_PID28_Msk & ((value) << TZPM_PIDR0_PID28_Pos))
#define   TZPM_PIDR0_PID28_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID28_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID28_0                    (TZPM_PIDR0_PID28_0_Val << TZPM_PIDR0_PID28_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID28_1                    (TZPM_PIDR0_PID28_1_Val << TZPM_PIDR0_PID28_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID29_Pos                  _U_(29)                                              /**< (TZPM_PIDR0) Peripheral ID 29 Security Position */
#define TZPM_PIDR0_PID29_Msk                  (_U_(0x1) << TZPM_PIDR0_PID29_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 29 Security Mask */
#define TZPM_PIDR0_PID29(value)               (TZPM_PIDR0_PID29_Msk & ((value) << TZPM_PIDR0_PID29_Pos))
#define   TZPM_PIDR0_PID29_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID29_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID29_0                    (TZPM_PIDR0_PID29_0_Val << TZPM_PIDR0_PID29_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID29_1                    (TZPM_PIDR0_PID29_1_Val << TZPM_PIDR0_PID29_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID30_Pos                  _U_(30)                                              /**< (TZPM_PIDR0) Peripheral ID 30 Security Position */
#define TZPM_PIDR0_PID30_Msk                  (_U_(0x1) << TZPM_PIDR0_PID30_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 30 Security Mask */
#define TZPM_PIDR0_PID30(value)               (TZPM_PIDR0_PID30_Msk & ((value) << TZPM_PIDR0_PID30_Pos))
#define   TZPM_PIDR0_PID30_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID30_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID30_0                    (TZPM_PIDR0_PID30_0_Val << TZPM_PIDR0_PID30_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID30_1                    (TZPM_PIDR0_PID30_1_Val << TZPM_PIDR0_PID30_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_PID31_Pos                  _U_(31)                                              /**< (TZPM_PIDR0) Peripheral ID 31 Security Position */
#define TZPM_PIDR0_PID31_Msk                  (_U_(0x1) << TZPM_PIDR0_PID31_Pos)                   /**< (TZPM_PIDR0) Peripheral ID 31 Security Mask */
#define TZPM_PIDR0_PID31(value)               (TZPM_PIDR0_PID31_Msk & ((value) << TZPM_PIDR0_PID31_Pos))
#define   TZPM_PIDR0_PID31_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR0) Secure Accesses only  */
#define   TZPM_PIDR0_PID31_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR0) Non Secure Accesses are allowed  */
#define TZPM_PIDR0_PID31_0                    (TZPM_PIDR0_PID31_0_Val << TZPM_PIDR0_PID31_Pos)     /**< (TZPM_PIDR0) Secure Accesses only Position  */
#define TZPM_PIDR0_PID31_1                    (TZPM_PIDR0_PID31_1_Val << TZPM_PIDR0_PID31_Pos)     /**< (TZPM_PIDR0) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR0_Msk                        _U_(0xFFFFFFFF)                                      /**< (TZPM_PIDR0) Register Mask  */

#define TZPM_PIDR0_PID_Pos                    _U_(0)                                               /**< (TZPM_PIDR0 Position) Peripheral ID 3x Security */
#define TZPM_PIDR0_PID_Msk                    (_U_(0xFFFFFFFF) << TZPM_PIDR0_PID_Pos)              /**< (TZPM_PIDR0 Mask) PID */
#define TZPM_PIDR0_PID(value)                 (TZPM_PIDR0_PID_Msk & ((value) << TZPM_PIDR0_PID_Pos)) 

/* -------- TZPM_PIDR1 : (TZPM Offset: 0x0C) (R/W 32) TrustZone Peripheral Manager Peripheral ID Register 1 -------- */
#define TZPM_PIDR1_RESETVALUE                 _U_(0x00)                                            /**<  (TZPM_PIDR1) TrustZone Peripheral Manager Peripheral ID Register 1  Reset Value */

#define TZPM_PIDR1_PID32_Pos                  _U_(0)                                               /**< (TZPM_PIDR1) Peripheral ID 32 Security Position */
#define TZPM_PIDR1_PID32_Msk                  (_U_(0x1) << TZPM_PIDR1_PID32_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 32 Security Mask */
#define TZPM_PIDR1_PID32(value)               (TZPM_PIDR1_PID32_Msk & ((value) << TZPM_PIDR1_PID32_Pos))
#define   TZPM_PIDR1_PID32_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID32_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID32_0                    (TZPM_PIDR1_PID32_0_Val << TZPM_PIDR1_PID32_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID32_1                    (TZPM_PIDR1_PID32_1_Val << TZPM_PIDR1_PID32_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID33_Pos                  _U_(1)                                               /**< (TZPM_PIDR1) Peripheral ID 33 Security Position */
#define TZPM_PIDR1_PID33_Msk                  (_U_(0x1) << TZPM_PIDR1_PID33_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 33 Security Mask */
#define TZPM_PIDR1_PID33(value)               (TZPM_PIDR1_PID33_Msk & ((value) << TZPM_PIDR1_PID33_Pos))
#define   TZPM_PIDR1_PID33_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID33_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID33_0                    (TZPM_PIDR1_PID33_0_Val << TZPM_PIDR1_PID33_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID33_1                    (TZPM_PIDR1_PID33_1_Val << TZPM_PIDR1_PID33_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID34_Pos                  _U_(2)                                               /**< (TZPM_PIDR1) Peripheral ID 34 Security Position */
#define TZPM_PIDR1_PID34_Msk                  (_U_(0x1) << TZPM_PIDR1_PID34_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 34 Security Mask */
#define TZPM_PIDR1_PID34(value)               (TZPM_PIDR1_PID34_Msk & ((value) << TZPM_PIDR1_PID34_Pos))
#define   TZPM_PIDR1_PID34_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID34_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID34_0                    (TZPM_PIDR1_PID34_0_Val << TZPM_PIDR1_PID34_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID34_1                    (TZPM_PIDR1_PID34_1_Val << TZPM_PIDR1_PID34_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID35_Pos                  _U_(3)                                               /**< (TZPM_PIDR1) Peripheral ID 35 Security Position */
#define TZPM_PIDR1_PID35_Msk                  (_U_(0x1) << TZPM_PIDR1_PID35_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 35 Security Mask */
#define TZPM_PIDR1_PID35(value)               (TZPM_PIDR1_PID35_Msk & ((value) << TZPM_PIDR1_PID35_Pos))
#define   TZPM_PIDR1_PID35_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID35_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID35_0                    (TZPM_PIDR1_PID35_0_Val << TZPM_PIDR1_PID35_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID35_1                    (TZPM_PIDR1_PID35_1_Val << TZPM_PIDR1_PID35_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID36_Pos                  _U_(4)                                               /**< (TZPM_PIDR1) Peripheral ID 36 Security Position */
#define TZPM_PIDR1_PID36_Msk                  (_U_(0x1) << TZPM_PIDR1_PID36_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 36 Security Mask */
#define TZPM_PIDR1_PID36(value)               (TZPM_PIDR1_PID36_Msk & ((value) << TZPM_PIDR1_PID36_Pos))
#define   TZPM_PIDR1_PID36_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID36_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID36_0                    (TZPM_PIDR1_PID36_0_Val << TZPM_PIDR1_PID36_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID36_1                    (TZPM_PIDR1_PID36_1_Val << TZPM_PIDR1_PID36_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID37_Pos                  _U_(5)                                               /**< (TZPM_PIDR1) Peripheral ID 37 Security Position */
#define TZPM_PIDR1_PID37_Msk                  (_U_(0x1) << TZPM_PIDR1_PID37_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 37 Security Mask */
#define TZPM_PIDR1_PID37(value)               (TZPM_PIDR1_PID37_Msk & ((value) << TZPM_PIDR1_PID37_Pos))
#define   TZPM_PIDR1_PID37_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID37_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID37_0                    (TZPM_PIDR1_PID37_0_Val << TZPM_PIDR1_PID37_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID37_1                    (TZPM_PIDR1_PID37_1_Val << TZPM_PIDR1_PID37_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID38_Pos                  _U_(6)                                               /**< (TZPM_PIDR1) Peripheral ID 38 Security Position */
#define TZPM_PIDR1_PID38_Msk                  (_U_(0x1) << TZPM_PIDR1_PID38_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 38 Security Mask */
#define TZPM_PIDR1_PID38(value)               (TZPM_PIDR1_PID38_Msk & ((value) << TZPM_PIDR1_PID38_Pos))
#define   TZPM_PIDR1_PID38_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID38_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID38_0                    (TZPM_PIDR1_PID38_0_Val << TZPM_PIDR1_PID38_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID38_1                    (TZPM_PIDR1_PID38_1_Val << TZPM_PIDR1_PID38_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID39_Pos                  _U_(7)                                               /**< (TZPM_PIDR1) Peripheral ID 39 Security Position */
#define TZPM_PIDR1_PID39_Msk                  (_U_(0x1) << TZPM_PIDR1_PID39_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 39 Security Mask */
#define TZPM_PIDR1_PID39(value)               (TZPM_PIDR1_PID39_Msk & ((value) << TZPM_PIDR1_PID39_Pos))
#define   TZPM_PIDR1_PID39_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID39_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID39_0                    (TZPM_PIDR1_PID39_0_Val << TZPM_PIDR1_PID39_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID39_1                    (TZPM_PIDR1_PID39_1_Val << TZPM_PIDR1_PID39_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID40_Pos                  _U_(8)                                               /**< (TZPM_PIDR1) Peripheral ID 40 Security Position */
#define TZPM_PIDR1_PID40_Msk                  (_U_(0x1) << TZPM_PIDR1_PID40_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 40 Security Mask */
#define TZPM_PIDR1_PID40(value)               (TZPM_PIDR1_PID40_Msk & ((value) << TZPM_PIDR1_PID40_Pos))
#define   TZPM_PIDR1_PID40_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID40_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID40_0                    (TZPM_PIDR1_PID40_0_Val << TZPM_PIDR1_PID40_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID40_1                    (TZPM_PIDR1_PID40_1_Val << TZPM_PIDR1_PID40_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID41_Pos                  _U_(9)                                               /**< (TZPM_PIDR1) Peripheral ID 41 Security Position */
#define TZPM_PIDR1_PID41_Msk                  (_U_(0x1) << TZPM_PIDR1_PID41_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 41 Security Mask */
#define TZPM_PIDR1_PID41(value)               (TZPM_PIDR1_PID41_Msk & ((value) << TZPM_PIDR1_PID41_Pos))
#define   TZPM_PIDR1_PID41_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID41_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID41_0                    (TZPM_PIDR1_PID41_0_Val << TZPM_PIDR1_PID41_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID41_1                    (TZPM_PIDR1_PID41_1_Val << TZPM_PIDR1_PID41_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID42_Pos                  _U_(10)                                              /**< (TZPM_PIDR1) Peripheral ID 42 Security Position */
#define TZPM_PIDR1_PID42_Msk                  (_U_(0x1) << TZPM_PIDR1_PID42_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 42 Security Mask */
#define TZPM_PIDR1_PID42(value)               (TZPM_PIDR1_PID42_Msk & ((value) << TZPM_PIDR1_PID42_Pos))
#define   TZPM_PIDR1_PID42_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID42_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID42_0                    (TZPM_PIDR1_PID42_0_Val << TZPM_PIDR1_PID42_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID42_1                    (TZPM_PIDR1_PID42_1_Val << TZPM_PIDR1_PID42_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID43_Pos                  _U_(11)                                              /**< (TZPM_PIDR1) Peripheral ID 43 Security Position */
#define TZPM_PIDR1_PID43_Msk                  (_U_(0x1) << TZPM_PIDR1_PID43_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 43 Security Mask */
#define TZPM_PIDR1_PID43(value)               (TZPM_PIDR1_PID43_Msk & ((value) << TZPM_PIDR1_PID43_Pos))
#define   TZPM_PIDR1_PID43_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID43_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID43_0                    (TZPM_PIDR1_PID43_0_Val << TZPM_PIDR1_PID43_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID43_1                    (TZPM_PIDR1_PID43_1_Val << TZPM_PIDR1_PID43_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID44_Pos                  _U_(12)                                              /**< (TZPM_PIDR1) Peripheral ID 44 Security Position */
#define TZPM_PIDR1_PID44_Msk                  (_U_(0x1) << TZPM_PIDR1_PID44_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 44 Security Mask */
#define TZPM_PIDR1_PID44(value)               (TZPM_PIDR1_PID44_Msk & ((value) << TZPM_PIDR1_PID44_Pos))
#define   TZPM_PIDR1_PID44_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID44_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID44_0                    (TZPM_PIDR1_PID44_0_Val << TZPM_PIDR1_PID44_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID44_1                    (TZPM_PIDR1_PID44_1_Val << TZPM_PIDR1_PID44_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID45_Pos                  _U_(13)                                              /**< (TZPM_PIDR1) Peripheral ID 45 Security Position */
#define TZPM_PIDR1_PID45_Msk                  (_U_(0x1) << TZPM_PIDR1_PID45_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 45 Security Mask */
#define TZPM_PIDR1_PID45(value)               (TZPM_PIDR1_PID45_Msk & ((value) << TZPM_PIDR1_PID45_Pos))
#define   TZPM_PIDR1_PID45_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID45_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID45_0                    (TZPM_PIDR1_PID45_0_Val << TZPM_PIDR1_PID45_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID45_1                    (TZPM_PIDR1_PID45_1_Val << TZPM_PIDR1_PID45_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID46_Pos                  _U_(14)                                              /**< (TZPM_PIDR1) Peripheral ID 46 Security Position */
#define TZPM_PIDR1_PID46_Msk                  (_U_(0x1) << TZPM_PIDR1_PID46_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 46 Security Mask */
#define TZPM_PIDR1_PID46(value)               (TZPM_PIDR1_PID46_Msk & ((value) << TZPM_PIDR1_PID46_Pos))
#define   TZPM_PIDR1_PID46_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID46_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID46_0                    (TZPM_PIDR1_PID46_0_Val << TZPM_PIDR1_PID46_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID46_1                    (TZPM_PIDR1_PID46_1_Val << TZPM_PIDR1_PID46_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID47_Pos                  _U_(15)                                              /**< (TZPM_PIDR1) Peripheral ID 47 Security Position */
#define TZPM_PIDR1_PID47_Msk                  (_U_(0x1) << TZPM_PIDR1_PID47_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 47 Security Mask */
#define TZPM_PIDR1_PID47(value)               (TZPM_PIDR1_PID47_Msk & ((value) << TZPM_PIDR1_PID47_Pos))
#define   TZPM_PIDR1_PID47_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID47_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID47_0                    (TZPM_PIDR1_PID47_0_Val << TZPM_PIDR1_PID47_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID47_1                    (TZPM_PIDR1_PID47_1_Val << TZPM_PIDR1_PID47_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID48_Pos                  _U_(16)                                              /**< (TZPM_PIDR1) Peripheral ID 48 Security Position */
#define TZPM_PIDR1_PID48_Msk                  (_U_(0x1) << TZPM_PIDR1_PID48_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 48 Security Mask */
#define TZPM_PIDR1_PID48(value)               (TZPM_PIDR1_PID48_Msk & ((value) << TZPM_PIDR1_PID48_Pos))
#define   TZPM_PIDR1_PID48_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID48_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID48_0                    (TZPM_PIDR1_PID48_0_Val << TZPM_PIDR1_PID48_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID48_1                    (TZPM_PIDR1_PID48_1_Val << TZPM_PIDR1_PID48_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID49_Pos                  _U_(17)                                              /**< (TZPM_PIDR1) Peripheral ID 49 Security Position */
#define TZPM_PIDR1_PID49_Msk                  (_U_(0x1) << TZPM_PIDR1_PID49_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 49 Security Mask */
#define TZPM_PIDR1_PID49(value)               (TZPM_PIDR1_PID49_Msk & ((value) << TZPM_PIDR1_PID49_Pos))
#define   TZPM_PIDR1_PID49_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID49_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID49_0                    (TZPM_PIDR1_PID49_0_Val << TZPM_PIDR1_PID49_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID49_1                    (TZPM_PIDR1_PID49_1_Val << TZPM_PIDR1_PID49_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID50_Pos                  _U_(18)                                              /**< (TZPM_PIDR1) Peripheral ID 50 Security Position */
#define TZPM_PIDR1_PID50_Msk                  (_U_(0x1) << TZPM_PIDR1_PID50_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 50 Security Mask */
#define TZPM_PIDR1_PID50(value)               (TZPM_PIDR1_PID50_Msk & ((value) << TZPM_PIDR1_PID50_Pos))
#define   TZPM_PIDR1_PID50_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID50_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID50_0                    (TZPM_PIDR1_PID50_0_Val << TZPM_PIDR1_PID50_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID50_1                    (TZPM_PIDR1_PID50_1_Val << TZPM_PIDR1_PID50_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID51_Pos                  _U_(19)                                              /**< (TZPM_PIDR1) Peripheral ID 51 Security Position */
#define TZPM_PIDR1_PID51_Msk                  (_U_(0x1) << TZPM_PIDR1_PID51_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 51 Security Mask */
#define TZPM_PIDR1_PID51(value)               (TZPM_PIDR1_PID51_Msk & ((value) << TZPM_PIDR1_PID51_Pos))
#define   TZPM_PIDR1_PID51_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID51_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID51_0                    (TZPM_PIDR1_PID51_0_Val << TZPM_PIDR1_PID51_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID51_1                    (TZPM_PIDR1_PID51_1_Val << TZPM_PIDR1_PID51_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID52_Pos                  _U_(20)                                              /**< (TZPM_PIDR1) Peripheral ID 52 Security Position */
#define TZPM_PIDR1_PID52_Msk                  (_U_(0x1) << TZPM_PIDR1_PID52_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 52 Security Mask */
#define TZPM_PIDR1_PID52(value)               (TZPM_PIDR1_PID52_Msk & ((value) << TZPM_PIDR1_PID52_Pos))
#define   TZPM_PIDR1_PID52_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID52_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID52_0                    (TZPM_PIDR1_PID52_0_Val << TZPM_PIDR1_PID52_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID52_1                    (TZPM_PIDR1_PID52_1_Val << TZPM_PIDR1_PID52_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID53_Pos                  _U_(21)                                              /**< (TZPM_PIDR1) Peripheral ID 53 Security Position */
#define TZPM_PIDR1_PID53_Msk                  (_U_(0x1) << TZPM_PIDR1_PID53_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 53 Security Mask */
#define TZPM_PIDR1_PID53(value)               (TZPM_PIDR1_PID53_Msk & ((value) << TZPM_PIDR1_PID53_Pos))
#define   TZPM_PIDR1_PID53_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID53_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID53_0                    (TZPM_PIDR1_PID53_0_Val << TZPM_PIDR1_PID53_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID53_1                    (TZPM_PIDR1_PID53_1_Val << TZPM_PIDR1_PID53_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID54_Pos                  _U_(22)                                              /**< (TZPM_PIDR1) Peripheral ID 54 Security Position */
#define TZPM_PIDR1_PID54_Msk                  (_U_(0x1) << TZPM_PIDR1_PID54_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 54 Security Mask */
#define TZPM_PIDR1_PID54(value)               (TZPM_PIDR1_PID54_Msk & ((value) << TZPM_PIDR1_PID54_Pos))
#define   TZPM_PIDR1_PID54_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID54_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID54_0                    (TZPM_PIDR1_PID54_0_Val << TZPM_PIDR1_PID54_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID54_1                    (TZPM_PIDR1_PID54_1_Val << TZPM_PIDR1_PID54_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID55_Pos                  _U_(23)                                              /**< (TZPM_PIDR1) Peripheral ID 55 Security Position */
#define TZPM_PIDR1_PID55_Msk                  (_U_(0x1) << TZPM_PIDR1_PID55_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 55 Security Mask */
#define TZPM_PIDR1_PID55(value)               (TZPM_PIDR1_PID55_Msk & ((value) << TZPM_PIDR1_PID55_Pos))
#define   TZPM_PIDR1_PID55_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID55_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID55_0                    (TZPM_PIDR1_PID55_0_Val << TZPM_PIDR1_PID55_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID55_1                    (TZPM_PIDR1_PID55_1_Val << TZPM_PIDR1_PID55_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID56_Pos                  _U_(24)                                              /**< (TZPM_PIDR1) Peripheral ID 56 Security Position */
#define TZPM_PIDR1_PID56_Msk                  (_U_(0x1) << TZPM_PIDR1_PID56_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 56 Security Mask */
#define TZPM_PIDR1_PID56(value)               (TZPM_PIDR1_PID56_Msk & ((value) << TZPM_PIDR1_PID56_Pos))
#define   TZPM_PIDR1_PID56_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID56_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID56_0                    (TZPM_PIDR1_PID56_0_Val << TZPM_PIDR1_PID56_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID56_1                    (TZPM_PIDR1_PID56_1_Val << TZPM_PIDR1_PID56_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID57_Pos                  _U_(25)                                              /**< (TZPM_PIDR1) Peripheral ID 57 Security Position */
#define TZPM_PIDR1_PID57_Msk                  (_U_(0x1) << TZPM_PIDR1_PID57_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 57 Security Mask */
#define TZPM_PIDR1_PID57(value)               (TZPM_PIDR1_PID57_Msk & ((value) << TZPM_PIDR1_PID57_Pos))
#define   TZPM_PIDR1_PID57_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID57_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID57_0                    (TZPM_PIDR1_PID57_0_Val << TZPM_PIDR1_PID57_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID57_1                    (TZPM_PIDR1_PID57_1_Val << TZPM_PIDR1_PID57_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID58_Pos                  _U_(26)                                              /**< (TZPM_PIDR1) Peripheral ID 58 Security Position */
#define TZPM_PIDR1_PID58_Msk                  (_U_(0x1) << TZPM_PIDR1_PID58_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 58 Security Mask */
#define TZPM_PIDR1_PID58(value)               (TZPM_PIDR1_PID58_Msk & ((value) << TZPM_PIDR1_PID58_Pos))
#define   TZPM_PIDR1_PID58_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID58_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID58_0                    (TZPM_PIDR1_PID58_0_Val << TZPM_PIDR1_PID58_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID58_1                    (TZPM_PIDR1_PID58_1_Val << TZPM_PIDR1_PID58_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID59_Pos                  _U_(27)                                              /**< (TZPM_PIDR1) Peripheral ID 59 Security Position */
#define TZPM_PIDR1_PID59_Msk                  (_U_(0x1) << TZPM_PIDR1_PID59_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 59 Security Mask */
#define TZPM_PIDR1_PID59(value)               (TZPM_PIDR1_PID59_Msk & ((value) << TZPM_PIDR1_PID59_Pos))
#define   TZPM_PIDR1_PID59_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID59_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID59_0                    (TZPM_PIDR1_PID59_0_Val << TZPM_PIDR1_PID59_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID59_1                    (TZPM_PIDR1_PID59_1_Val << TZPM_PIDR1_PID59_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID60_Pos                  _U_(28)                                              /**< (TZPM_PIDR1) Peripheral ID 60 Security Position */
#define TZPM_PIDR1_PID60_Msk                  (_U_(0x1) << TZPM_PIDR1_PID60_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 60 Security Mask */
#define TZPM_PIDR1_PID60(value)               (TZPM_PIDR1_PID60_Msk & ((value) << TZPM_PIDR1_PID60_Pos))
#define   TZPM_PIDR1_PID60_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID60_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID60_0                    (TZPM_PIDR1_PID60_0_Val << TZPM_PIDR1_PID60_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID60_1                    (TZPM_PIDR1_PID60_1_Val << TZPM_PIDR1_PID60_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID61_Pos                  _U_(29)                                              /**< (TZPM_PIDR1) Peripheral ID 61 Security Position */
#define TZPM_PIDR1_PID61_Msk                  (_U_(0x1) << TZPM_PIDR1_PID61_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 61 Security Mask */
#define TZPM_PIDR1_PID61(value)               (TZPM_PIDR1_PID61_Msk & ((value) << TZPM_PIDR1_PID61_Pos))
#define   TZPM_PIDR1_PID61_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID61_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID61_0                    (TZPM_PIDR1_PID61_0_Val << TZPM_PIDR1_PID61_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID61_1                    (TZPM_PIDR1_PID61_1_Val << TZPM_PIDR1_PID61_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID62_Pos                  _U_(30)                                              /**< (TZPM_PIDR1) Peripheral ID 62 Security Position */
#define TZPM_PIDR1_PID62_Msk                  (_U_(0x1) << TZPM_PIDR1_PID62_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 62 Security Mask */
#define TZPM_PIDR1_PID62(value)               (TZPM_PIDR1_PID62_Msk & ((value) << TZPM_PIDR1_PID62_Pos))
#define   TZPM_PIDR1_PID62_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID62_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID62_0                    (TZPM_PIDR1_PID62_0_Val << TZPM_PIDR1_PID62_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID62_1                    (TZPM_PIDR1_PID62_1_Val << TZPM_PIDR1_PID62_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_PID63_Pos                  _U_(31)                                              /**< (TZPM_PIDR1) Peripheral ID 63 Security Position */
#define TZPM_PIDR1_PID63_Msk                  (_U_(0x1) << TZPM_PIDR1_PID63_Pos)                   /**< (TZPM_PIDR1) Peripheral ID 63 Security Mask */
#define TZPM_PIDR1_PID63(value)               (TZPM_PIDR1_PID63_Msk & ((value) << TZPM_PIDR1_PID63_Pos))
#define   TZPM_PIDR1_PID63_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR1) Secure Accesses only  */
#define   TZPM_PIDR1_PID63_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR1) Non Secure Accesses are allowed  */
#define TZPM_PIDR1_PID63_0                    (TZPM_PIDR1_PID63_0_Val << TZPM_PIDR1_PID63_Pos)     /**< (TZPM_PIDR1) Secure Accesses only Position  */
#define TZPM_PIDR1_PID63_1                    (TZPM_PIDR1_PID63_1_Val << TZPM_PIDR1_PID63_Pos)     /**< (TZPM_PIDR1) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR1_Msk                        _U_(0xFFFFFFFF)                                      /**< (TZPM_PIDR1) Register Mask  */

#define TZPM_PIDR1_PID_Pos                    _U_(0)                                               /**< (TZPM_PIDR1 Position) Peripheral ID 63 Security */
#define TZPM_PIDR1_PID_Msk                    (_U_(0xFFFFFFFF) << TZPM_PIDR1_PID_Pos)              /**< (TZPM_PIDR1 Mask) PID */
#define TZPM_PIDR1_PID(value)                 (TZPM_PIDR1_PID_Msk & ((value) << TZPM_PIDR1_PID_Pos)) 

/* -------- TZPM_PIDR2 : (TZPM Offset: 0x10) (R/W 32) TrustZone Peripheral Manager Peripheral ID Register 2 -------- */
#define TZPM_PIDR2_RESETVALUE                 _U_(0x00)                                            /**<  (TZPM_PIDR2) TrustZone Peripheral Manager Peripheral ID Register 2  Reset Value */

#define TZPM_PIDR2_PID64_Pos                  _U_(0)                                               /**< (TZPM_PIDR2) Peripheral ID 64 Security Position */
#define TZPM_PIDR2_PID64_Msk                  (_U_(0x1) << TZPM_PIDR2_PID64_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 64 Security Mask */
#define TZPM_PIDR2_PID64(value)               (TZPM_PIDR2_PID64_Msk & ((value) << TZPM_PIDR2_PID64_Pos))
#define   TZPM_PIDR2_PID64_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID64_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID64_0                    (TZPM_PIDR2_PID64_0_Val << TZPM_PIDR2_PID64_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID64_1                    (TZPM_PIDR2_PID64_1_Val << TZPM_PIDR2_PID64_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID65_Pos                  _U_(1)                                               /**< (TZPM_PIDR2) Peripheral ID 65 Security Position */
#define TZPM_PIDR2_PID65_Msk                  (_U_(0x1) << TZPM_PIDR2_PID65_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 65 Security Mask */
#define TZPM_PIDR2_PID65(value)               (TZPM_PIDR2_PID65_Msk & ((value) << TZPM_PIDR2_PID65_Pos))
#define   TZPM_PIDR2_PID65_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID65_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID65_0                    (TZPM_PIDR2_PID65_0_Val << TZPM_PIDR2_PID65_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID65_1                    (TZPM_PIDR2_PID65_1_Val << TZPM_PIDR2_PID65_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID66_Pos                  _U_(2)                                               /**< (TZPM_PIDR2) Peripheral ID 66 Security Position */
#define TZPM_PIDR2_PID66_Msk                  (_U_(0x1) << TZPM_PIDR2_PID66_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 66 Security Mask */
#define TZPM_PIDR2_PID66(value)               (TZPM_PIDR2_PID66_Msk & ((value) << TZPM_PIDR2_PID66_Pos))
#define   TZPM_PIDR2_PID66_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID66_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID66_0                    (TZPM_PIDR2_PID66_0_Val << TZPM_PIDR2_PID66_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID66_1                    (TZPM_PIDR2_PID66_1_Val << TZPM_PIDR2_PID66_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID67_Pos                  _U_(3)                                               /**< (TZPM_PIDR2) Peripheral ID 67 Security Position */
#define TZPM_PIDR2_PID67_Msk                  (_U_(0x1) << TZPM_PIDR2_PID67_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 67 Security Mask */
#define TZPM_PIDR2_PID67(value)               (TZPM_PIDR2_PID67_Msk & ((value) << TZPM_PIDR2_PID67_Pos))
#define   TZPM_PIDR2_PID67_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID67_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID67_0                    (TZPM_PIDR2_PID67_0_Val << TZPM_PIDR2_PID67_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID67_1                    (TZPM_PIDR2_PID67_1_Val << TZPM_PIDR2_PID67_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID68_Pos                  _U_(4)                                               /**< (TZPM_PIDR2) Peripheral ID 68 Security Position */
#define TZPM_PIDR2_PID68_Msk                  (_U_(0x1) << TZPM_PIDR2_PID68_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 68 Security Mask */
#define TZPM_PIDR2_PID68(value)               (TZPM_PIDR2_PID68_Msk & ((value) << TZPM_PIDR2_PID68_Pos))
#define   TZPM_PIDR2_PID68_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID68_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID68_0                    (TZPM_PIDR2_PID68_0_Val << TZPM_PIDR2_PID68_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID68_1                    (TZPM_PIDR2_PID68_1_Val << TZPM_PIDR2_PID68_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID69_Pos                  _U_(5)                                               /**< (TZPM_PIDR2) Peripheral ID 69 Security Position */
#define TZPM_PIDR2_PID69_Msk                  (_U_(0x1) << TZPM_PIDR2_PID69_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 69 Security Mask */
#define TZPM_PIDR2_PID69(value)               (TZPM_PIDR2_PID69_Msk & ((value) << TZPM_PIDR2_PID69_Pos))
#define   TZPM_PIDR2_PID69_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID69_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID69_0                    (TZPM_PIDR2_PID69_0_Val << TZPM_PIDR2_PID69_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID69_1                    (TZPM_PIDR2_PID69_1_Val << TZPM_PIDR2_PID69_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID70_Pos                  _U_(6)                                               /**< (TZPM_PIDR2) Peripheral ID 70 Security Position */
#define TZPM_PIDR2_PID70_Msk                  (_U_(0x1) << TZPM_PIDR2_PID70_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 70 Security Mask */
#define TZPM_PIDR2_PID70(value)               (TZPM_PIDR2_PID70_Msk & ((value) << TZPM_PIDR2_PID70_Pos))
#define   TZPM_PIDR2_PID70_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID70_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID70_0                    (TZPM_PIDR2_PID70_0_Val << TZPM_PIDR2_PID70_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID70_1                    (TZPM_PIDR2_PID70_1_Val << TZPM_PIDR2_PID70_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID71_Pos                  _U_(7)                                               /**< (TZPM_PIDR2) Peripheral ID 71 Security Position */
#define TZPM_PIDR2_PID71_Msk                  (_U_(0x1) << TZPM_PIDR2_PID71_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 71 Security Mask */
#define TZPM_PIDR2_PID71(value)               (TZPM_PIDR2_PID71_Msk & ((value) << TZPM_PIDR2_PID71_Pos))
#define   TZPM_PIDR2_PID71_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID71_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID71_0                    (TZPM_PIDR2_PID71_0_Val << TZPM_PIDR2_PID71_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID71_1                    (TZPM_PIDR2_PID71_1_Val << TZPM_PIDR2_PID71_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID72_Pos                  _U_(8)                                               /**< (TZPM_PIDR2) Peripheral ID 72 Security Position */
#define TZPM_PIDR2_PID72_Msk                  (_U_(0x1) << TZPM_PIDR2_PID72_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 72 Security Mask */
#define TZPM_PIDR2_PID72(value)               (TZPM_PIDR2_PID72_Msk & ((value) << TZPM_PIDR2_PID72_Pos))
#define   TZPM_PIDR2_PID72_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID72_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID72_0                    (TZPM_PIDR2_PID72_0_Val << TZPM_PIDR2_PID72_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID72_1                    (TZPM_PIDR2_PID72_1_Val << TZPM_PIDR2_PID72_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID73_Pos                  _U_(9)                                               /**< (TZPM_PIDR2) Peripheral ID 73 Security Position */
#define TZPM_PIDR2_PID73_Msk                  (_U_(0x1) << TZPM_PIDR2_PID73_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 73 Security Mask */
#define TZPM_PIDR2_PID73(value)               (TZPM_PIDR2_PID73_Msk & ((value) << TZPM_PIDR2_PID73_Pos))
#define   TZPM_PIDR2_PID73_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID73_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID73_0                    (TZPM_PIDR2_PID73_0_Val << TZPM_PIDR2_PID73_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID73_1                    (TZPM_PIDR2_PID73_1_Val << TZPM_PIDR2_PID73_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID74_Pos                  _U_(10)                                              /**< (TZPM_PIDR2) Peripheral ID 74 Security Position */
#define TZPM_PIDR2_PID74_Msk                  (_U_(0x1) << TZPM_PIDR2_PID74_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 74 Security Mask */
#define TZPM_PIDR2_PID74(value)               (TZPM_PIDR2_PID74_Msk & ((value) << TZPM_PIDR2_PID74_Pos))
#define   TZPM_PIDR2_PID74_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID74_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID74_0                    (TZPM_PIDR2_PID74_0_Val << TZPM_PIDR2_PID74_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID74_1                    (TZPM_PIDR2_PID74_1_Val << TZPM_PIDR2_PID74_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID75_Pos                  _U_(11)                                              /**< (TZPM_PIDR2) Peripheral ID 75 Security Position */
#define TZPM_PIDR2_PID75_Msk                  (_U_(0x1) << TZPM_PIDR2_PID75_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 75 Security Mask */
#define TZPM_PIDR2_PID75(value)               (TZPM_PIDR2_PID75_Msk & ((value) << TZPM_PIDR2_PID75_Pos))
#define   TZPM_PIDR2_PID75_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID75_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID75_0                    (TZPM_PIDR2_PID75_0_Val << TZPM_PIDR2_PID75_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID75_1                    (TZPM_PIDR2_PID75_1_Val << TZPM_PIDR2_PID75_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID76_Pos                  _U_(12)                                              /**< (TZPM_PIDR2) Peripheral ID 76 Security Position */
#define TZPM_PIDR2_PID76_Msk                  (_U_(0x1) << TZPM_PIDR2_PID76_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 76 Security Mask */
#define TZPM_PIDR2_PID76(value)               (TZPM_PIDR2_PID76_Msk & ((value) << TZPM_PIDR2_PID76_Pos))
#define   TZPM_PIDR2_PID76_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID76_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID76_0                    (TZPM_PIDR2_PID76_0_Val << TZPM_PIDR2_PID76_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID76_1                    (TZPM_PIDR2_PID76_1_Val << TZPM_PIDR2_PID76_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID77_Pos                  _U_(13)                                              /**< (TZPM_PIDR2) Peripheral ID 77 Security Position */
#define TZPM_PIDR2_PID77_Msk                  (_U_(0x1) << TZPM_PIDR2_PID77_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 77 Security Mask */
#define TZPM_PIDR2_PID77(value)               (TZPM_PIDR2_PID77_Msk & ((value) << TZPM_PIDR2_PID77_Pos))
#define   TZPM_PIDR2_PID77_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID77_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID77_0                    (TZPM_PIDR2_PID77_0_Val << TZPM_PIDR2_PID77_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID77_1                    (TZPM_PIDR2_PID77_1_Val << TZPM_PIDR2_PID77_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID78_Pos                  _U_(14)                                              /**< (TZPM_PIDR2) Peripheral ID 78 Security Position */
#define TZPM_PIDR2_PID78_Msk                  (_U_(0x1) << TZPM_PIDR2_PID78_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 78 Security Mask */
#define TZPM_PIDR2_PID78(value)               (TZPM_PIDR2_PID78_Msk & ((value) << TZPM_PIDR2_PID78_Pos))
#define   TZPM_PIDR2_PID78_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID78_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID78_0                    (TZPM_PIDR2_PID78_0_Val << TZPM_PIDR2_PID78_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID78_1                    (TZPM_PIDR2_PID78_1_Val << TZPM_PIDR2_PID78_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID79_Pos                  _U_(15)                                              /**< (TZPM_PIDR2) Peripheral ID 79 Security Position */
#define TZPM_PIDR2_PID79_Msk                  (_U_(0x1) << TZPM_PIDR2_PID79_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 79 Security Mask */
#define TZPM_PIDR2_PID79(value)               (TZPM_PIDR2_PID79_Msk & ((value) << TZPM_PIDR2_PID79_Pos))
#define   TZPM_PIDR2_PID79_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID79_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID79_0                    (TZPM_PIDR2_PID79_0_Val << TZPM_PIDR2_PID79_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID79_1                    (TZPM_PIDR2_PID79_1_Val << TZPM_PIDR2_PID79_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID80_Pos                  _U_(16)                                              /**< (TZPM_PIDR2) Peripheral ID 80 Security Position */
#define TZPM_PIDR2_PID80_Msk                  (_U_(0x1) << TZPM_PIDR2_PID80_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 80 Security Mask */
#define TZPM_PIDR2_PID80(value)               (TZPM_PIDR2_PID80_Msk & ((value) << TZPM_PIDR2_PID80_Pos))
#define   TZPM_PIDR2_PID80_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID80_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID80_0                    (TZPM_PIDR2_PID80_0_Val << TZPM_PIDR2_PID80_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID80_1                    (TZPM_PIDR2_PID80_1_Val << TZPM_PIDR2_PID80_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID81_Pos                  _U_(17)                                              /**< (TZPM_PIDR2) Peripheral ID 81 Security Position */
#define TZPM_PIDR2_PID81_Msk                  (_U_(0x1) << TZPM_PIDR2_PID81_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 81 Security Mask */
#define TZPM_PIDR2_PID81(value)               (TZPM_PIDR2_PID81_Msk & ((value) << TZPM_PIDR2_PID81_Pos))
#define   TZPM_PIDR2_PID81_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID81_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID81_0                    (TZPM_PIDR2_PID81_0_Val << TZPM_PIDR2_PID81_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID81_1                    (TZPM_PIDR2_PID81_1_Val << TZPM_PIDR2_PID81_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID82_Pos                  _U_(18)                                              /**< (TZPM_PIDR2) Peripheral ID 82 Security Position */
#define TZPM_PIDR2_PID82_Msk                  (_U_(0x1) << TZPM_PIDR2_PID82_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 82 Security Mask */
#define TZPM_PIDR2_PID82(value)               (TZPM_PIDR2_PID82_Msk & ((value) << TZPM_PIDR2_PID82_Pos))
#define   TZPM_PIDR2_PID82_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID82_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID82_0                    (TZPM_PIDR2_PID82_0_Val << TZPM_PIDR2_PID82_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID82_1                    (TZPM_PIDR2_PID82_1_Val << TZPM_PIDR2_PID82_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID83_Pos                  _U_(19)                                              /**< (TZPM_PIDR2) Peripheral ID 83 Security Position */
#define TZPM_PIDR2_PID83_Msk                  (_U_(0x1) << TZPM_PIDR2_PID83_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 83 Security Mask */
#define TZPM_PIDR2_PID83(value)               (TZPM_PIDR2_PID83_Msk & ((value) << TZPM_PIDR2_PID83_Pos))
#define   TZPM_PIDR2_PID83_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID83_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID83_0                    (TZPM_PIDR2_PID83_0_Val << TZPM_PIDR2_PID83_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID83_1                    (TZPM_PIDR2_PID83_1_Val << TZPM_PIDR2_PID83_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID84_Pos                  _U_(20)                                              /**< (TZPM_PIDR2) Peripheral ID 84 Security Position */
#define TZPM_PIDR2_PID84_Msk                  (_U_(0x1) << TZPM_PIDR2_PID84_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 84 Security Mask */
#define TZPM_PIDR2_PID84(value)               (TZPM_PIDR2_PID84_Msk & ((value) << TZPM_PIDR2_PID84_Pos))
#define   TZPM_PIDR2_PID84_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID84_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID84_0                    (TZPM_PIDR2_PID84_0_Val << TZPM_PIDR2_PID84_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID84_1                    (TZPM_PIDR2_PID84_1_Val << TZPM_PIDR2_PID84_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID85_Pos                  _U_(21)                                              /**< (TZPM_PIDR2) Peripheral ID 85 Security Position */
#define TZPM_PIDR2_PID85_Msk                  (_U_(0x1) << TZPM_PIDR2_PID85_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 85 Security Mask */
#define TZPM_PIDR2_PID85(value)               (TZPM_PIDR2_PID85_Msk & ((value) << TZPM_PIDR2_PID85_Pos))
#define   TZPM_PIDR2_PID85_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID85_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID85_0                    (TZPM_PIDR2_PID85_0_Val << TZPM_PIDR2_PID85_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID85_1                    (TZPM_PIDR2_PID85_1_Val << TZPM_PIDR2_PID85_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID86_Pos                  _U_(22)                                              /**< (TZPM_PIDR2) Peripheral ID 86 Security Position */
#define TZPM_PIDR2_PID86_Msk                  (_U_(0x1) << TZPM_PIDR2_PID86_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 86 Security Mask */
#define TZPM_PIDR2_PID86(value)               (TZPM_PIDR2_PID86_Msk & ((value) << TZPM_PIDR2_PID86_Pos))
#define   TZPM_PIDR2_PID86_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID86_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID86_0                    (TZPM_PIDR2_PID86_0_Val << TZPM_PIDR2_PID86_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID86_1                    (TZPM_PIDR2_PID86_1_Val << TZPM_PIDR2_PID86_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID87_Pos                  _U_(23)                                              /**< (TZPM_PIDR2) Peripheral ID 87 Security Position */
#define TZPM_PIDR2_PID87_Msk                  (_U_(0x1) << TZPM_PIDR2_PID87_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 87 Security Mask */
#define TZPM_PIDR2_PID87(value)               (TZPM_PIDR2_PID87_Msk & ((value) << TZPM_PIDR2_PID87_Pos))
#define   TZPM_PIDR2_PID87_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID87_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID87_0                    (TZPM_PIDR2_PID87_0_Val << TZPM_PIDR2_PID87_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID87_1                    (TZPM_PIDR2_PID87_1_Val << TZPM_PIDR2_PID87_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID88_Pos                  _U_(24)                                              /**< (TZPM_PIDR2) Peripheral ID 88 Security Position */
#define TZPM_PIDR2_PID88_Msk                  (_U_(0x1) << TZPM_PIDR2_PID88_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 88 Security Mask */
#define TZPM_PIDR2_PID88(value)               (TZPM_PIDR2_PID88_Msk & ((value) << TZPM_PIDR2_PID88_Pos))
#define   TZPM_PIDR2_PID88_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID88_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID88_0                    (TZPM_PIDR2_PID88_0_Val << TZPM_PIDR2_PID88_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID88_1                    (TZPM_PIDR2_PID88_1_Val << TZPM_PIDR2_PID88_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID89_Pos                  _U_(25)                                              /**< (TZPM_PIDR2) Peripheral ID 89 Security Position */
#define TZPM_PIDR2_PID89_Msk                  (_U_(0x1) << TZPM_PIDR2_PID89_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 89 Security Mask */
#define TZPM_PIDR2_PID89(value)               (TZPM_PIDR2_PID89_Msk & ((value) << TZPM_PIDR2_PID89_Pos))
#define   TZPM_PIDR2_PID89_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID89_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID89_0                    (TZPM_PIDR2_PID89_0_Val << TZPM_PIDR2_PID89_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID89_1                    (TZPM_PIDR2_PID89_1_Val << TZPM_PIDR2_PID89_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID90_Pos                  _U_(26)                                              /**< (TZPM_PIDR2) Peripheral ID 90 Security Position */
#define TZPM_PIDR2_PID90_Msk                  (_U_(0x1) << TZPM_PIDR2_PID90_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 90 Security Mask */
#define TZPM_PIDR2_PID90(value)               (TZPM_PIDR2_PID90_Msk & ((value) << TZPM_PIDR2_PID90_Pos))
#define   TZPM_PIDR2_PID90_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID90_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID90_0                    (TZPM_PIDR2_PID90_0_Val << TZPM_PIDR2_PID90_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID90_1                    (TZPM_PIDR2_PID90_1_Val << TZPM_PIDR2_PID90_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID91_Pos                  _U_(27)                                              /**< (TZPM_PIDR2) Peripheral ID 91 Security Position */
#define TZPM_PIDR2_PID91_Msk                  (_U_(0x1) << TZPM_PIDR2_PID91_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 91 Security Mask */
#define TZPM_PIDR2_PID91(value)               (TZPM_PIDR2_PID91_Msk & ((value) << TZPM_PIDR2_PID91_Pos))
#define   TZPM_PIDR2_PID91_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID91_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID91_0                    (TZPM_PIDR2_PID91_0_Val << TZPM_PIDR2_PID91_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID91_1                    (TZPM_PIDR2_PID91_1_Val << TZPM_PIDR2_PID91_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID92_Pos                  _U_(28)                                              /**< (TZPM_PIDR2) Peripheral ID 92 Security Position */
#define TZPM_PIDR2_PID92_Msk                  (_U_(0x1) << TZPM_PIDR2_PID92_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 92 Security Mask */
#define TZPM_PIDR2_PID92(value)               (TZPM_PIDR2_PID92_Msk & ((value) << TZPM_PIDR2_PID92_Pos))
#define   TZPM_PIDR2_PID92_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID92_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID92_0                    (TZPM_PIDR2_PID92_0_Val << TZPM_PIDR2_PID92_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID92_1                    (TZPM_PIDR2_PID92_1_Val << TZPM_PIDR2_PID92_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID93_Pos                  _U_(29)                                              /**< (TZPM_PIDR2) Peripheral ID 93 Security Position */
#define TZPM_PIDR2_PID93_Msk                  (_U_(0x1) << TZPM_PIDR2_PID93_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 93 Security Mask */
#define TZPM_PIDR2_PID93(value)               (TZPM_PIDR2_PID93_Msk & ((value) << TZPM_PIDR2_PID93_Pos))
#define   TZPM_PIDR2_PID93_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID93_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID93_0                    (TZPM_PIDR2_PID93_0_Val << TZPM_PIDR2_PID93_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID93_1                    (TZPM_PIDR2_PID93_1_Val << TZPM_PIDR2_PID93_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID94_Pos                  _U_(30)                                              /**< (TZPM_PIDR2) Peripheral ID 94 Security Position */
#define TZPM_PIDR2_PID94_Msk                  (_U_(0x1) << TZPM_PIDR2_PID94_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 94 Security Mask */
#define TZPM_PIDR2_PID94(value)               (TZPM_PIDR2_PID94_Msk & ((value) << TZPM_PIDR2_PID94_Pos))
#define   TZPM_PIDR2_PID94_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID94_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID94_0                    (TZPM_PIDR2_PID94_0_Val << TZPM_PIDR2_PID94_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID94_1                    (TZPM_PIDR2_PID94_1_Val << TZPM_PIDR2_PID94_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_PID95_Pos                  _U_(31)                                              /**< (TZPM_PIDR2) Peripheral ID 95 Security Position */
#define TZPM_PIDR2_PID95_Msk                  (_U_(0x1) << TZPM_PIDR2_PID95_Pos)                   /**< (TZPM_PIDR2) Peripheral ID 95 Security Mask */
#define TZPM_PIDR2_PID95(value)               (TZPM_PIDR2_PID95_Msk & ((value) << TZPM_PIDR2_PID95_Pos))
#define   TZPM_PIDR2_PID95_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR2) Secure Accesses only  */
#define   TZPM_PIDR2_PID95_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR2) Non Secure Accesses are allowed  */
#define TZPM_PIDR2_PID95_0                    (TZPM_PIDR2_PID95_0_Val << TZPM_PIDR2_PID95_Pos)     /**< (TZPM_PIDR2) Secure Accesses only Position  */
#define TZPM_PIDR2_PID95_1                    (TZPM_PIDR2_PID95_1_Val << TZPM_PIDR2_PID95_Pos)     /**< (TZPM_PIDR2) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR2_Msk                        _U_(0xFFFFFFFF)                                      /**< (TZPM_PIDR2) Register Mask  */

#define TZPM_PIDR2_PID_Pos                    _U_(0)                                               /**< (TZPM_PIDR2 Position) Peripheral ID 95 Security */
#define TZPM_PIDR2_PID_Msk                    (_U_(0xFFFFFFFF) << TZPM_PIDR2_PID_Pos)              /**< (TZPM_PIDR2 Mask) PID */
#define TZPM_PIDR2_PID(value)                 (TZPM_PIDR2_PID_Msk & ((value) << TZPM_PIDR2_PID_Pos)) 

/* -------- TZPM_PIDR3 : (TZPM Offset: 0x14) (R/W 32) TrustZone Peripheral Manager Peripheral ID Register 3 -------- */
#define TZPM_PIDR3_RESETVALUE                 _U_(0x00)                                            /**<  (TZPM_PIDR3) TrustZone Peripheral Manager Peripheral ID Register 3  Reset Value */

#define TZPM_PIDR3_PID96_Pos                  _U_(0)                                               /**< (TZPM_PIDR3) Peripheral ID 96 Security Position */
#define TZPM_PIDR3_PID96_Msk                  (_U_(0x1) << TZPM_PIDR3_PID96_Pos)                   /**< (TZPM_PIDR3) Peripheral ID 96 Security Mask */
#define TZPM_PIDR3_PID96(value)               (TZPM_PIDR3_PID96_Msk & ((value) << TZPM_PIDR3_PID96_Pos))
#define   TZPM_PIDR3_PID96_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID96_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID96_0                    (TZPM_PIDR3_PID96_0_Val << TZPM_PIDR3_PID96_Pos)     /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID96_1                    (TZPM_PIDR3_PID96_1_Val << TZPM_PIDR3_PID96_Pos)     /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID97_Pos                  _U_(1)                                               /**< (TZPM_PIDR3) Peripheral ID 97 Security Position */
#define TZPM_PIDR3_PID97_Msk                  (_U_(0x1) << TZPM_PIDR3_PID97_Pos)                   /**< (TZPM_PIDR3) Peripheral ID 97 Security Mask */
#define TZPM_PIDR3_PID97(value)               (TZPM_PIDR3_PID97_Msk & ((value) << TZPM_PIDR3_PID97_Pos))
#define   TZPM_PIDR3_PID97_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID97_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID97_0                    (TZPM_PIDR3_PID97_0_Val << TZPM_PIDR3_PID97_Pos)     /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID97_1                    (TZPM_PIDR3_PID97_1_Val << TZPM_PIDR3_PID97_Pos)     /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID98_Pos                  _U_(2)                                               /**< (TZPM_PIDR3) Peripheral ID 98 Security Position */
#define TZPM_PIDR3_PID98_Msk                  (_U_(0x1) << TZPM_PIDR3_PID98_Pos)                   /**< (TZPM_PIDR3) Peripheral ID 98 Security Mask */
#define TZPM_PIDR3_PID98(value)               (TZPM_PIDR3_PID98_Msk & ((value) << TZPM_PIDR3_PID98_Pos))
#define   TZPM_PIDR3_PID98_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID98_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID98_0                    (TZPM_PIDR3_PID98_0_Val << TZPM_PIDR3_PID98_Pos)     /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID98_1                    (TZPM_PIDR3_PID98_1_Val << TZPM_PIDR3_PID98_Pos)     /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID99_Pos                  _U_(3)                                               /**< (TZPM_PIDR3) Peripheral ID 99 Security Position */
#define TZPM_PIDR3_PID99_Msk                  (_U_(0x1) << TZPM_PIDR3_PID99_Pos)                   /**< (TZPM_PIDR3) Peripheral ID 99 Security Mask */
#define TZPM_PIDR3_PID99(value)               (TZPM_PIDR3_PID99_Msk & ((value) << TZPM_PIDR3_PID99_Pos))
#define   TZPM_PIDR3_PID99_0_Val              _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID99_1_Val              _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID99_0                    (TZPM_PIDR3_PID99_0_Val << TZPM_PIDR3_PID99_Pos)     /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID99_1                    (TZPM_PIDR3_PID99_1_Val << TZPM_PIDR3_PID99_Pos)     /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID100_Pos                 _U_(4)                                               /**< (TZPM_PIDR3) Peripheral ID 100 Security Position */
#define TZPM_PIDR3_PID100_Msk                 (_U_(0x1) << TZPM_PIDR3_PID100_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 100 Security Mask */
#define TZPM_PIDR3_PID100(value)              (TZPM_PIDR3_PID100_Msk & ((value) << TZPM_PIDR3_PID100_Pos))
#define   TZPM_PIDR3_PID100_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID100_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID100_0                   (TZPM_PIDR3_PID100_0_Val << TZPM_PIDR3_PID100_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID100_1                   (TZPM_PIDR3_PID100_1_Val << TZPM_PIDR3_PID100_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID101_Pos                 _U_(5)                                               /**< (TZPM_PIDR3) Peripheral ID 101 Security Position */
#define TZPM_PIDR3_PID101_Msk                 (_U_(0x1) << TZPM_PIDR3_PID101_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 101 Security Mask */
#define TZPM_PIDR3_PID101(value)              (TZPM_PIDR3_PID101_Msk & ((value) << TZPM_PIDR3_PID101_Pos))
#define   TZPM_PIDR3_PID101_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID101_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID101_0                   (TZPM_PIDR3_PID101_0_Val << TZPM_PIDR3_PID101_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID101_1                   (TZPM_PIDR3_PID101_1_Val << TZPM_PIDR3_PID101_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID102_Pos                 _U_(6)                                               /**< (TZPM_PIDR3) Peripheral ID 102 Security Position */
#define TZPM_PIDR3_PID102_Msk                 (_U_(0x1) << TZPM_PIDR3_PID102_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 102 Security Mask */
#define TZPM_PIDR3_PID102(value)              (TZPM_PIDR3_PID102_Msk & ((value) << TZPM_PIDR3_PID102_Pos))
#define   TZPM_PIDR3_PID102_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID102_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID102_0                   (TZPM_PIDR3_PID102_0_Val << TZPM_PIDR3_PID102_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID102_1                   (TZPM_PIDR3_PID102_1_Val << TZPM_PIDR3_PID102_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID103_Pos                 _U_(7)                                               /**< (TZPM_PIDR3) Peripheral ID 103 Security Position */
#define TZPM_PIDR3_PID103_Msk                 (_U_(0x1) << TZPM_PIDR3_PID103_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 103 Security Mask */
#define TZPM_PIDR3_PID103(value)              (TZPM_PIDR3_PID103_Msk & ((value) << TZPM_PIDR3_PID103_Pos))
#define   TZPM_PIDR3_PID103_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID103_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID103_0                   (TZPM_PIDR3_PID103_0_Val << TZPM_PIDR3_PID103_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID103_1                   (TZPM_PIDR3_PID103_1_Val << TZPM_PIDR3_PID103_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID104_Pos                 _U_(8)                                               /**< (TZPM_PIDR3) Peripheral ID 104 Security Position */
#define TZPM_PIDR3_PID104_Msk                 (_U_(0x1) << TZPM_PIDR3_PID104_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 104 Security Mask */
#define TZPM_PIDR3_PID104(value)              (TZPM_PIDR3_PID104_Msk & ((value) << TZPM_PIDR3_PID104_Pos))
#define   TZPM_PIDR3_PID104_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID104_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID104_0                   (TZPM_PIDR3_PID104_0_Val << TZPM_PIDR3_PID104_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID104_1                   (TZPM_PIDR3_PID104_1_Val << TZPM_PIDR3_PID104_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID105_Pos                 _U_(9)                                               /**< (TZPM_PIDR3) Peripheral ID 105 Security Position */
#define TZPM_PIDR3_PID105_Msk                 (_U_(0x1) << TZPM_PIDR3_PID105_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 105 Security Mask */
#define TZPM_PIDR3_PID105(value)              (TZPM_PIDR3_PID105_Msk & ((value) << TZPM_PIDR3_PID105_Pos))
#define   TZPM_PIDR3_PID105_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID105_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID105_0                   (TZPM_PIDR3_PID105_0_Val << TZPM_PIDR3_PID105_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID105_1                   (TZPM_PIDR3_PID105_1_Val << TZPM_PIDR3_PID105_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID106_Pos                 _U_(10)                                              /**< (TZPM_PIDR3) Peripheral ID 106 Security Position */
#define TZPM_PIDR3_PID106_Msk                 (_U_(0x1) << TZPM_PIDR3_PID106_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 106 Security Mask */
#define TZPM_PIDR3_PID106(value)              (TZPM_PIDR3_PID106_Msk & ((value) << TZPM_PIDR3_PID106_Pos))
#define   TZPM_PIDR3_PID106_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID106_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID106_0                   (TZPM_PIDR3_PID106_0_Val << TZPM_PIDR3_PID106_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID106_1                   (TZPM_PIDR3_PID106_1_Val << TZPM_PIDR3_PID106_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID107_Pos                 _U_(11)                                              /**< (TZPM_PIDR3) Peripheral ID 107 Security Position */
#define TZPM_PIDR3_PID107_Msk                 (_U_(0x1) << TZPM_PIDR3_PID107_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 107 Security Mask */
#define TZPM_PIDR3_PID107(value)              (TZPM_PIDR3_PID107_Msk & ((value) << TZPM_PIDR3_PID107_Pos))
#define   TZPM_PIDR3_PID107_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID107_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID107_0                   (TZPM_PIDR3_PID107_0_Val << TZPM_PIDR3_PID107_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID107_1                   (TZPM_PIDR3_PID107_1_Val << TZPM_PIDR3_PID107_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID108_Pos                 _U_(12)                                              /**< (TZPM_PIDR3) Peripheral ID 108 Security Position */
#define TZPM_PIDR3_PID108_Msk                 (_U_(0x1) << TZPM_PIDR3_PID108_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 108 Security Mask */
#define TZPM_PIDR3_PID108(value)              (TZPM_PIDR3_PID108_Msk & ((value) << TZPM_PIDR3_PID108_Pos))
#define   TZPM_PIDR3_PID108_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID108_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID108_0                   (TZPM_PIDR3_PID108_0_Val << TZPM_PIDR3_PID108_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID108_1                   (TZPM_PIDR3_PID108_1_Val << TZPM_PIDR3_PID108_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID109_Pos                 _U_(13)                                              /**< (TZPM_PIDR3) Peripheral ID 109 Security Position */
#define TZPM_PIDR3_PID109_Msk                 (_U_(0x1) << TZPM_PIDR3_PID109_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 109 Security Mask */
#define TZPM_PIDR3_PID109(value)              (TZPM_PIDR3_PID109_Msk & ((value) << TZPM_PIDR3_PID109_Pos))
#define   TZPM_PIDR3_PID109_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID109_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID109_0                   (TZPM_PIDR3_PID109_0_Val << TZPM_PIDR3_PID109_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID109_1                   (TZPM_PIDR3_PID109_1_Val << TZPM_PIDR3_PID109_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID110_Pos                 _U_(14)                                              /**< (TZPM_PIDR3) Peripheral ID 110 Security Position */
#define TZPM_PIDR3_PID110_Msk                 (_U_(0x1) << TZPM_PIDR3_PID110_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 110 Security Mask */
#define TZPM_PIDR3_PID110(value)              (TZPM_PIDR3_PID110_Msk & ((value) << TZPM_PIDR3_PID110_Pos))
#define   TZPM_PIDR3_PID110_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID110_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID110_0                   (TZPM_PIDR3_PID110_0_Val << TZPM_PIDR3_PID110_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID110_1                   (TZPM_PIDR3_PID110_1_Val << TZPM_PIDR3_PID110_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID111_Pos                 _U_(15)                                              /**< (TZPM_PIDR3) Peripheral ID 111 Security Position */
#define TZPM_PIDR3_PID111_Msk                 (_U_(0x1) << TZPM_PIDR3_PID111_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 111 Security Mask */
#define TZPM_PIDR3_PID111(value)              (TZPM_PIDR3_PID111_Msk & ((value) << TZPM_PIDR3_PID111_Pos))
#define   TZPM_PIDR3_PID111_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID111_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID111_0                   (TZPM_PIDR3_PID111_0_Val << TZPM_PIDR3_PID111_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID111_1                   (TZPM_PIDR3_PID111_1_Val << TZPM_PIDR3_PID111_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID112_Pos                 _U_(16)                                              /**< (TZPM_PIDR3) Peripheral ID 112 Security Position */
#define TZPM_PIDR3_PID112_Msk                 (_U_(0x1) << TZPM_PIDR3_PID112_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 112 Security Mask */
#define TZPM_PIDR3_PID112(value)              (TZPM_PIDR3_PID112_Msk & ((value) << TZPM_PIDR3_PID112_Pos))
#define   TZPM_PIDR3_PID112_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID112_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID112_0                   (TZPM_PIDR3_PID112_0_Val << TZPM_PIDR3_PID112_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID112_1                   (TZPM_PIDR3_PID112_1_Val << TZPM_PIDR3_PID112_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID113_Pos                 _U_(17)                                              /**< (TZPM_PIDR3) Peripheral ID 113 Security Position */
#define TZPM_PIDR3_PID113_Msk                 (_U_(0x1) << TZPM_PIDR3_PID113_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 113 Security Mask */
#define TZPM_PIDR3_PID113(value)              (TZPM_PIDR3_PID113_Msk & ((value) << TZPM_PIDR3_PID113_Pos))
#define   TZPM_PIDR3_PID113_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID113_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID113_0                   (TZPM_PIDR3_PID113_0_Val << TZPM_PIDR3_PID113_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID113_1                   (TZPM_PIDR3_PID113_1_Val << TZPM_PIDR3_PID113_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID114_Pos                 _U_(18)                                              /**< (TZPM_PIDR3) Peripheral ID 114 Security Position */
#define TZPM_PIDR3_PID114_Msk                 (_U_(0x1) << TZPM_PIDR3_PID114_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 114 Security Mask */
#define TZPM_PIDR3_PID114(value)              (TZPM_PIDR3_PID114_Msk & ((value) << TZPM_PIDR3_PID114_Pos))
#define   TZPM_PIDR3_PID114_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID114_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID114_0                   (TZPM_PIDR3_PID114_0_Val << TZPM_PIDR3_PID114_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID114_1                   (TZPM_PIDR3_PID114_1_Val << TZPM_PIDR3_PID114_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID115_Pos                 _U_(19)                                              /**< (TZPM_PIDR3) Peripheral ID 115 Security Position */
#define TZPM_PIDR3_PID115_Msk                 (_U_(0x1) << TZPM_PIDR3_PID115_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 115 Security Mask */
#define TZPM_PIDR3_PID115(value)              (TZPM_PIDR3_PID115_Msk & ((value) << TZPM_PIDR3_PID115_Pos))
#define   TZPM_PIDR3_PID115_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID115_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID115_0                   (TZPM_PIDR3_PID115_0_Val << TZPM_PIDR3_PID115_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID115_1                   (TZPM_PIDR3_PID115_1_Val << TZPM_PIDR3_PID115_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID116_Pos                 _U_(20)                                              /**< (TZPM_PIDR3) Peripheral ID 116 Security Position */
#define TZPM_PIDR3_PID116_Msk                 (_U_(0x1) << TZPM_PIDR3_PID116_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 116 Security Mask */
#define TZPM_PIDR3_PID116(value)              (TZPM_PIDR3_PID116_Msk & ((value) << TZPM_PIDR3_PID116_Pos))
#define   TZPM_PIDR3_PID116_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID116_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID116_0                   (TZPM_PIDR3_PID116_0_Val << TZPM_PIDR3_PID116_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID116_1                   (TZPM_PIDR3_PID116_1_Val << TZPM_PIDR3_PID116_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID117_Pos                 _U_(21)                                              /**< (TZPM_PIDR3) Peripheral ID 117 Security Position */
#define TZPM_PIDR3_PID117_Msk                 (_U_(0x1) << TZPM_PIDR3_PID117_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 117 Security Mask */
#define TZPM_PIDR3_PID117(value)              (TZPM_PIDR3_PID117_Msk & ((value) << TZPM_PIDR3_PID117_Pos))
#define   TZPM_PIDR3_PID117_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID117_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID117_0                   (TZPM_PIDR3_PID117_0_Val << TZPM_PIDR3_PID117_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID117_1                   (TZPM_PIDR3_PID117_1_Val << TZPM_PIDR3_PID117_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID118_Pos                 _U_(22)                                              /**< (TZPM_PIDR3) Peripheral ID 118 Security Position */
#define TZPM_PIDR3_PID118_Msk                 (_U_(0x1) << TZPM_PIDR3_PID118_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 118 Security Mask */
#define TZPM_PIDR3_PID118(value)              (TZPM_PIDR3_PID118_Msk & ((value) << TZPM_PIDR3_PID118_Pos))
#define   TZPM_PIDR3_PID118_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID118_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID118_0                   (TZPM_PIDR3_PID118_0_Val << TZPM_PIDR3_PID118_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID118_1                   (TZPM_PIDR3_PID118_1_Val << TZPM_PIDR3_PID118_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID119_Pos                 _U_(23)                                              /**< (TZPM_PIDR3) Peripheral ID 119 Security Position */
#define TZPM_PIDR3_PID119_Msk                 (_U_(0x1) << TZPM_PIDR3_PID119_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 119 Security Mask */
#define TZPM_PIDR3_PID119(value)              (TZPM_PIDR3_PID119_Msk & ((value) << TZPM_PIDR3_PID119_Pos))
#define   TZPM_PIDR3_PID119_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID119_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID119_0                   (TZPM_PIDR3_PID119_0_Val << TZPM_PIDR3_PID119_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID119_1                   (TZPM_PIDR3_PID119_1_Val << TZPM_PIDR3_PID119_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID120_Pos                 _U_(24)                                              /**< (TZPM_PIDR3) Peripheral ID 120 Security Position */
#define TZPM_PIDR3_PID120_Msk                 (_U_(0x1) << TZPM_PIDR3_PID120_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 120 Security Mask */
#define TZPM_PIDR3_PID120(value)              (TZPM_PIDR3_PID120_Msk & ((value) << TZPM_PIDR3_PID120_Pos))
#define   TZPM_PIDR3_PID120_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID120_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID120_0                   (TZPM_PIDR3_PID120_0_Val << TZPM_PIDR3_PID120_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID120_1                   (TZPM_PIDR3_PID120_1_Val << TZPM_PIDR3_PID120_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID121_Pos                 _U_(25)                                              /**< (TZPM_PIDR3) Peripheral ID 121 Security Position */
#define TZPM_PIDR3_PID121_Msk                 (_U_(0x1) << TZPM_PIDR3_PID121_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 121 Security Mask */
#define TZPM_PIDR3_PID121(value)              (TZPM_PIDR3_PID121_Msk & ((value) << TZPM_PIDR3_PID121_Pos))
#define   TZPM_PIDR3_PID121_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID121_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID121_0                   (TZPM_PIDR3_PID121_0_Val << TZPM_PIDR3_PID121_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID121_1                   (TZPM_PIDR3_PID121_1_Val << TZPM_PIDR3_PID121_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID122_Pos                 _U_(26)                                              /**< (TZPM_PIDR3) Peripheral ID 122 Security Position */
#define TZPM_PIDR3_PID122_Msk                 (_U_(0x1) << TZPM_PIDR3_PID122_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 122 Security Mask */
#define TZPM_PIDR3_PID122(value)              (TZPM_PIDR3_PID122_Msk & ((value) << TZPM_PIDR3_PID122_Pos))
#define   TZPM_PIDR3_PID122_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID122_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID122_0                   (TZPM_PIDR3_PID122_0_Val << TZPM_PIDR3_PID122_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID122_1                   (TZPM_PIDR3_PID122_1_Val << TZPM_PIDR3_PID122_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID123_Pos                 _U_(27)                                              /**< (TZPM_PIDR3) Peripheral ID 123 Security Position */
#define TZPM_PIDR3_PID123_Msk                 (_U_(0x1) << TZPM_PIDR3_PID123_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 123 Security Mask */
#define TZPM_PIDR3_PID123(value)              (TZPM_PIDR3_PID123_Msk & ((value) << TZPM_PIDR3_PID123_Pos))
#define   TZPM_PIDR3_PID123_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID123_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID123_0                   (TZPM_PIDR3_PID123_0_Val << TZPM_PIDR3_PID123_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID123_1                   (TZPM_PIDR3_PID123_1_Val << TZPM_PIDR3_PID123_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID124_Pos                 _U_(28)                                              /**< (TZPM_PIDR3) Peripheral ID 124 Security Position */
#define TZPM_PIDR3_PID124_Msk                 (_U_(0x1) << TZPM_PIDR3_PID124_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 124 Security Mask */
#define TZPM_PIDR3_PID124(value)              (TZPM_PIDR3_PID124_Msk & ((value) << TZPM_PIDR3_PID124_Pos))
#define   TZPM_PIDR3_PID124_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID124_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID124_0                   (TZPM_PIDR3_PID124_0_Val << TZPM_PIDR3_PID124_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID124_1                   (TZPM_PIDR3_PID124_1_Val << TZPM_PIDR3_PID124_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID125_Pos                 _U_(29)                                              /**< (TZPM_PIDR3) Peripheral ID 125 Security Position */
#define TZPM_PIDR3_PID125_Msk                 (_U_(0x1) << TZPM_PIDR3_PID125_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 125 Security Mask */
#define TZPM_PIDR3_PID125(value)              (TZPM_PIDR3_PID125_Msk & ((value) << TZPM_PIDR3_PID125_Pos))
#define   TZPM_PIDR3_PID125_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID125_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID125_0                   (TZPM_PIDR3_PID125_0_Val << TZPM_PIDR3_PID125_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID125_1                   (TZPM_PIDR3_PID125_1_Val << TZPM_PIDR3_PID125_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID126_Pos                 _U_(30)                                              /**< (TZPM_PIDR3) Peripheral ID 126 Security Position */
#define TZPM_PIDR3_PID126_Msk                 (_U_(0x1) << TZPM_PIDR3_PID126_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 126 Security Mask */
#define TZPM_PIDR3_PID126(value)              (TZPM_PIDR3_PID126_Msk & ((value) << TZPM_PIDR3_PID126_Pos))
#define   TZPM_PIDR3_PID126_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID126_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID126_0                   (TZPM_PIDR3_PID126_0_Val << TZPM_PIDR3_PID126_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID126_1                   (TZPM_PIDR3_PID126_1_Val << TZPM_PIDR3_PID126_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_PID127_Pos                 _U_(31)                                              /**< (TZPM_PIDR3) Peripheral ID 127 Security Position */
#define TZPM_PIDR3_PID127_Msk                 (_U_(0x1) << TZPM_PIDR3_PID127_Pos)                  /**< (TZPM_PIDR3) Peripheral ID 127 Security Mask */
#define TZPM_PIDR3_PID127(value)              (TZPM_PIDR3_PID127_Msk & ((value) << TZPM_PIDR3_PID127_Pos))
#define   TZPM_PIDR3_PID127_0_Val             _U_(0x0)                                             /**< (TZPM_PIDR3) Secure Accesses only  */
#define   TZPM_PIDR3_PID127_1_Val             _U_(0x1)                                             /**< (TZPM_PIDR3) Non Secure Accesses are allowed  */
#define TZPM_PIDR3_PID127_0                   (TZPM_PIDR3_PID127_0_Val << TZPM_PIDR3_PID127_Pos)   /**< (TZPM_PIDR3) Secure Accesses only Position  */
#define TZPM_PIDR3_PID127_1                   (TZPM_PIDR3_PID127_1_Val << TZPM_PIDR3_PID127_Pos)   /**< (TZPM_PIDR3) Non Secure Accesses are allowed Position  */
#define TZPM_PIDR3_Msk                        _U_(0xFFFFFFFF)                                      /**< (TZPM_PIDR3) Register Mask  */

#define TZPM_PIDR3_PID_Pos                    _U_(0)                                               /**< (TZPM_PIDR3 Position) Peripheral ID x27 Security */
#define TZPM_PIDR3_PID_Msk                    (_U_(0xFFFFFFFF) << TZPM_PIDR3_PID_Pos)              /**< (TZPM_PIDR3 Mask) PID */
#define TZPM_PIDR3_PID(value)                 (TZPM_PIDR3_PID_Msk & ((value) << TZPM_PIDR3_PID_Pos)) 

/** \brief TZPM register offsets definitions */
#define TZPM_KEY_REG_OFST              (0x04)              /**< (TZPM_KEY) TrustZone Peripheral Manager Key Offset */
#define TZPM_PIDR0_REG_OFST            (0x08)              /**< (TZPM_PIDR0) TrustZone Peripheral Manager Peripheral ID Register 0 Offset */
#define TZPM_PIDR1_REG_OFST            (0x0C)              /**< (TZPM_PIDR1) TrustZone Peripheral Manager Peripheral ID Register 1 Offset */
#define TZPM_PIDR2_REG_OFST            (0x10)              /**< (TZPM_PIDR2) TrustZone Peripheral Manager Peripheral ID Register 2 Offset */
#define TZPM_PIDR3_REG_OFST            (0x14)              /**< (TZPM_PIDR3) TrustZone Peripheral Manager Peripheral ID Register 3 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TZPM register API structure */
typedef struct
{  /* System Interconnect and Security */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       TZPM_KEY;           /**< Offset: 0x04 (R/W  32) TrustZone Peripheral Manager Key */
  __IO  uint32_t                       TZPM_PIDR0;         /**< Offset: 0x08 (R/W  32) TrustZone Peripheral Manager Peripheral ID Register 0 */
  __IO  uint32_t                       TZPM_PIDR1;         /**< Offset: 0x0C (R/W  32) TrustZone Peripheral Manager Peripheral ID Register 1 */
  __IO  uint32_t                       TZPM_PIDR2;         /**< Offset: 0x10 (R/W  32) TrustZone Peripheral Manager Peripheral ID Register 2 */
  __IO  uint32_t                       TZPM_PIDR3;         /**< Offset: 0x14 (R/W  32) TrustZone Peripheral Manager Peripheral ID Register 3 */
} tzpm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_TZPM_COMPONENT_H_ */
