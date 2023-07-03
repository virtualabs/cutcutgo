/*
 * Component description for XDMAC
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
#ifndef _SAMA7G_XDMAC_COMPONENT_H_
#define _SAMA7G_XDMAC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR XDMAC                                        */
/* ************************************************************************** */

/* -------- XDMAC_CIE : (XDMAC Offset: 0x00) ( /W 32) Channel Interrupt Enable Register  -------- */
#define XDMAC_CIE_BIE_Pos                     _U_(0)                                               /**< (XDMAC_CIE) End of Block Interrupt Enable Position */
#define XDMAC_CIE_BIE_Msk                     (_U_(0x1) << XDMAC_CIE_BIE_Pos)                      /**< (XDMAC_CIE) End of Block Interrupt Enable Mask */
#define XDMAC_CIE_BIE(value)                  (XDMAC_CIE_BIE_Msk & ((value) << XDMAC_CIE_BIE_Pos))
#define   XDMAC_CIE_BIE_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_BIE_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIE) Enables end of block interrupt.  */
#define XDMAC_CIE_BIE_0                       (XDMAC_CIE_BIE_0_Val << XDMAC_CIE_BIE_Pos)           /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_BIE_1                       (XDMAC_CIE_BIE_1_Val << XDMAC_CIE_BIE_Pos)           /**< (XDMAC_CIE) Enables end of block interrupt. Position  */
#define XDMAC_CIE_LIE_Pos                     _U_(1)                                               /**< (XDMAC_CIE) End of Linked List Interrupt Enable Position */
#define XDMAC_CIE_LIE_Msk                     (_U_(0x1) << XDMAC_CIE_LIE_Pos)                      /**< (XDMAC_CIE) End of Linked List Interrupt Enable Mask */
#define XDMAC_CIE_LIE(value)                  (XDMAC_CIE_LIE_Msk & ((value) << XDMAC_CIE_LIE_Pos))
#define   XDMAC_CIE_LIE_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_LIE_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIE) Enables end of linked list interrupt.  */
#define XDMAC_CIE_LIE_0                       (XDMAC_CIE_LIE_0_Val << XDMAC_CIE_LIE_Pos)           /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_LIE_1                       (XDMAC_CIE_LIE_1_Val << XDMAC_CIE_LIE_Pos)           /**< (XDMAC_CIE) Enables end of linked list interrupt. Position  */
#define XDMAC_CIE_DIE_Pos                     _U_(2)                                               /**< (XDMAC_CIE) End of Disable Interrupt Enable Position */
#define XDMAC_CIE_DIE_Msk                     (_U_(0x1) << XDMAC_CIE_DIE_Pos)                      /**< (XDMAC_CIE) End of Disable Interrupt Enable Mask */
#define XDMAC_CIE_DIE(value)                  (XDMAC_CIE_DIE_Msk & ((value) << XDMAC_CIE_DIE_Pos))
#define   XDMAC_CIE_DIE_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_DIE_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIE) Enables end of disable interrupt.  */
#define XDMAC_CIE_DIE_0                       (XDMAC_CIE_DIE_0_Val << XDMAC_CIE_DIE_Pos)           /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_DIE_1                       (XDMAC_CIE_DIE_1_Val << XDMAC_CIE_DIE_Pos)           /**< (XDMAC_CIE) Enables end of disable interrupt. Position  */
#define XDMAC_CIE_FIE_Pos                     _U_(3)                                               /**< (XDMAC_CIE) End of Flush Interrupt Enable Position */
#define XDMAC_CIE_FIE_Msk                     (_U_(0x1) << XDMAC_CIE_FIE_Pos)                      /**< (XDMAC_CIE) End of Flush Interrupt Enable Mask */
#define XDMAC_CIE_FIE(value)                  (XDMAC_CIE_FIE_Msk & ((value) << XDMAC_CIE_FIE_Pos))
#define   XDMAC_CIE_FIE_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_FIE_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIE) Enables end of flush interrupt.  */
#define XDMAC_CIE_FIE_0                       (XDMAC_CIE_FIE_0_Val << XDMAC_CIE_FIE_Pos)           /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_FIE_1                       (XDMAC_CIE_FIE_1_Val << XDMAC_CIE_FIE_Pos)           /**< (XDMAC_CIE) Enables end of flush interrupt. Position  */
#define XDMAC_CIE_RBIE_Pos                    _U_(4)                                               /**< (XDMAC_CIE) Read Bus Error Interrupt Enable Position */
#define XDMAC_CIE_RBIE_Msk                    (_U_(0x1) << XDMAC_CIE_RBIE_Pos)                     /**< (XDMAC_CIE) Read Bus Error Interrupt Enable Mask */
#define XDMAC_CIE_RBIE(value)                 (XDMAC_CIE_RBIE_Msk & ((value) << XDMAC_CIE_RBIE_Pos))
#define   XDMAC_CIE_RBIE_0_Val                _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_RBIE_1_Val                _U_(0x1)                                             /**< (XDMAC_CIE) Enables read bus error interrupt.  */
#define XDMAC_CIE_RBIE_0                      (XDMAC_CIE_RBIE_0_Val << XDMAC_CIE_RBIE_Pos)         /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_RBIE_1                      (XDMAC_CIE_RBIE_1_Val << XDMAC_CIE_RBIE_Pos)         /**< (XDMAC_CIE) Enables read bus error interrupt. Position  */
#define XDMAC_CIE_WBIE_Pos                    _U_(5)                                               /**< (XDMAC_CIE) Write Bus Error Interrupt Enable Position */
#define XDMAC_CIE_WBIE_Msk                    (_U_(0x1) << XDMAC_CIE_WBIE_Pos)                     /**< (XDMAC_CIE) Write Bus Error Interrupt Enable Mask */
#define XDMAC_CIE_WBIE(value)                 (XDMAC_CIE_WBIE_Msk & ((value) << XDMAC_CIE_WBIE_Pos))
#define   XDMAC_CIE_WBIE_0_Val                _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_WBIE_1_Val                _U_(0x1)                                             /**< (XDMAC_CIE) Enables write bus error interrupt.  */
#define XDMAC_CIE_WBIE_0                      (XDMAC_CIE_WBIE_0_Val << XDMAC_CIE_WBIE_Pos)         /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_WBIE_1                      (XDMAC_CIE_WBIE_1_Val << XDMAC_CIE_WBIE_Pos)         /**< (XDMAC_CIE) Enables write bus error interrupt. Position  */
#define XDMAC_CIE_ROIE_Pos                    _U_(6)                                               /**< (XDMAC_CIE) Request Overflow Error Interrupt Enable Position */
#define XDMAC_CIE_ROIE_Msk                    (_U_(0x1) << XDMAC_CIE_ROIE_Pos)                     /**< (XDMAC_CIE) Request Overflow Error Interrupt Enable Mask */
#define XDMAC_CIE_ROIE(value)                 (XDMAC_CIE_ROIE_Msk & ((value) << XDMAC_CIE_ROIE_Pos))
#define   XDMAC_CIE_ROIE_0_Val                _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_ROIE_1_Val                _U_(0x1)                                             /**< (XDMAC_CIE) Enables request overflow error interrupt.  */
#define XDMAC_CIE_ROIE_0                      (XDMAC_CIE_ROIE_0_Val << XDMAC_CIE_ROIE_Pos)         /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_ROIE_1                      (XDMAC_CIE_ROIE_1_Val << XDMAC_CIE_ROIE_Pos)         /**< (XDMAC_CIE) Enables request overflow error interrupt. Position  */
#define XDMAC_CIE_TCIE_Pos                    _U_(7)                                               /**< (XDMAC_CIE) Transfer Count Overflow Error Interrupt Enable Position */
#define XDMAC_CIE_TCIE_Msk                    (_U_(0x1) << XDMAC_CIE_TCIE_Pos)                     /**< (XDMAC_CIE) Transfer Count Overflow Error Interrupt Enable Mask */
#define XDMAC_CIE_TCIE(value)                 (XDMAC_CIE_TCIE_Msk & ((value) << XDMAC_CIE_TCIE_Pos))
#define   XDMAC_CIE_TCIE_0_Val                _U_(0x0)                                             /**< (XDMAC_CIE) No effect.  */
#define   XDMAC_CIE_TCIE_1_Val                _U_(0x1)                                             /**< (XDMAC_CIE) Enables transfer count overflow error interrupt.  */
#define XDMAC_CIE_TCIE_0                      (XDMAC_CIE_TCIE_0_Val << XDMAC_CIE_TCIE_Pos)         /**< (XDMAC_CIE) No effect. Position  */
#define XDMAC_CIE_TCIE_1                      (XDMAC_CIE_TCIE_1_Val << XDMAC_CIE_TCIE_Pos)         /**< (XDMAC_CIE) Enables transfer count overflow error interrupt. Position  */
#define XDMAC_CIE_Msk                         _U_(0x000000FF)                                      /**< (XDMAC_CIE) Register Mask  */


/* -------- XDMAC_CID : (XDMAC Offset: 0x04) ( /W 32) Channel Interrupt Disable Register  -------- */
#define XDMAC_CID_BID_Pos                     _U_(0)                                               /**< (XDMAC_CID) End of Block Interrupt Disable Position */
#define XDMAC_CID_BID_Msk                     (_U_(0x1) << XDMAC_CID_BID_Pos)                      /**< (XDMAC_CID) End of Block Interrupt Disable Mask */
#define XDMAC_CID_BID(value)                  (XDMAC_CID_BID_Msk & ((value) << XDMAC_CID_BID_Pos))
#define   XDMAC_CID_BID_0_Val                 _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_BID_1_Val                 _U_(0x1)                                             /**< (XDMAC_CID) Disables end of block interrupt.  */
#define XDMAC_CID_BID_0                       (XDMAC_CID_BID_0_Val << XDMAC_CID_BID_Pos)           /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_BID_1                       (XDMAC_CID_BID_1_Val << XDMAC_CID_BID_Pos)           /**< (XDMAC_CID) Disables end of block interrupt. Position  */
#define XDMAC_CID_LID_Pos                     _U_(1)                                               /**< (XDMAC_CID) End of Linked List Interrupt Disable Position */
#define XDMAC_CID_LID_Msk                     (_U_(0x1) << XDMAC_CID_LID_Pos)                      /**< (XDMAC_CID) End of Linked List Interrupt Disable Mask */
#define XDMAC_CID_LID(value)                  (XDMAC_CID_LID_Msk & ((value) << XDMAC_CID_LID_Pos))
#define   XDMAC_CID_LID_0_Val                 _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_LID_1_Val                 _U_(0x1)                                             /**< (XDMAC_CID) Disables end of linked list interrupt.  */
#define XDMAC_CID_LID_0                       (XDMAC_CID_LID_0_Val << XDMAC_CID_LID_Pos)           /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_LID_1                       (XDMAC_CID_LID_1_Val << XDMAC_CID_LID_Pos)           /**< (XDMAC_CID) Disables end of linked list interrupt. Position  */
#define XDMAC_CID_DID_Pos                     _U_(2)                                               /**< (XDMAC_CID) End of Disable Interrupt Disable Position */
#define XDMAC_CID_DID_Msk                     (_U_(0x1) << XDMAC_CID_DID_Pos)                      /**< (XDMAC_CID) End of Disable Interrupt Disable Mask */
#define XDMAC_CID_DID(value)                  (XDMAC_CID_DID_Msk & ((value) << XDMAC_CID_DID_Pos))
#define   XDMAC_CID_DID_0_Val                 _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_DID_1_Val                 _U_(0x1)                                             /**< (XDMAC_CID) Disables end of disable interrupt.  */
#define XDMAC_CID_DID_0                       (XDMAC_CID_DID_0_Val << XDMAC_CID_DID_Pos)           /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_DID_1                       (XDMAC_CID_DID_1_Val << XDMAC_CID_DID_Pos)           /**< (XDMAC_CID) Disables end of disable interrupt. Position  */
#define XDMAC_CID_FID_Pos                     _U_(3)                                               /**< (XDMAC_CID) End of Flush Interrupt Disable Position */
#define XDMAC_CID_FID_Msk                     (_U_(0x1) << XDMAC_CID_FID_Pos)                      /**< (XDMAC_CID) End of Flush Interrupt Disable Mask */
#define XDMAC_CID_FID(value)                  (XDMAC_CID_FID_Msk & ((value) << XDMAC_CID_FID_Pos))
#define   XDMAC_CID_FID_0_Val                 _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_FID_1_Val                 _U_(0x1)                                             /**< (XDMAC_CID) Disables end of flush interrupt.  */
#define XDMAC_CID_FID_0                       (XDMAC_CID_FID_0_Val << XDMAC_CID_FID_Pos)           /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_FID_1                       (XDMAC_CID_FID_1_Val << XDMAC_CID_FID_Pos)           /**< (XDMAC_CID) Disables end of flush interrupt. Position  */
#define XDMAC_CID_RBEID_Pos                   _U_(4)                                               /**< (XDMAC_CID) Read Bus Error Interrupt Disable Position */
#define XDMAC_CID_RBEID_Msk                   (_U_(0x1) << XDMAC_CID_RBEID_Pos)                    /**< (XDMAC_CID) Read Bus Error Interrupt Disable Mask */
#define XDMAC_CID_RBEID(value)                (XDMAC_CID_RBEID_Msk & ((value) << XDMAC_CID_RBEID_Pos))
#define   XDMAC_CID_RBEID_0_Val               _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_RBEID_1_Val               _U_(0x1)                                             /**< (XDMAC_CID) Disables bus error interrupt.  */
#define XDMAC_CID_RBEID_0                     (XDMAC_CID_RBEID_0_Val << XDMAC_CID_RBEID_Pos)       /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_RBEID_1                     (XDMAC_CID_RBEID_1_Val << XDMAC_CID_RBEID_Pos)       /**< (XDMAC_CID) Disables bus error interrupt. Position  */
#define XDMAC_CID_WBEID_Pos                   _U_(5)                                               /**< (XDMAC_CID) Write Bus Error Interrupt Disable Position */
#define XDMAC_CID_WBEID_Msk                   (_U_(0x1) << XDMAC_CID_WBEID_Pos)                    /**< (XDMAC_CID) Write Bus Error Interrupt Disable Mask */
#define XDMAC_CID_WBEID(value)                (XDMAC_CID_WBEID_Msk & ((value) << XDMAC_CID_WBEID_Pos))
#define   XDMAC_CID_WBEID_0_Val               _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_WBEID_1_Val               _U_(0x1)                                             /**< (XDMAC_CID) Disables bus error interrupt.  */
#define XDMAC_CID_WBEID_0                     (XDMAC_CID_WBEID_0_Val << XDMAC_CID_WBEID_Pos)       /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_WBEID_1                     (XDMAC_CID_WBEID_1_Val << XDMAC_CID_WBEID_Pos)       /**< (XDMAC_CID) Disables bus error interrupt. Position  */
#define XDMAC_CID_ROID_Pos                    _U_(6)                                               /**< (XDMAC_CID) Request Overflow Error Interrupt Disable Position */
#define XDMAC_CID_ROID_Msk                    (_U_(0x1) << XDMAC_CID_ROID_Pos)                     /**< (XDMAC_CID) Request Overflow Error Interrupt Disable Mask */
#define XDMAC_CID_ROID(value)                 (XDMAC_CID_ROID_Msk & ((value) << XDMAC_CID_ROID_Pos))
#define   XDMAC_CID_ROID_0_Val                _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_ROID_1_Val                _U_(0x1)                                             /**< (XDMAC_CID) Disables request overflow error interrupt.  */
#define XDMAC_CID_ROID_0                      (XDMAC_CID_ROID_0_Val << XDMAC_CID_ROID_Pos)         /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_ROID_1                      (XDMAC_CID_ROID_1_Val << XDMAC_CID_ROID_Pos)         /**< (XDMAC_CID) Disables request overflow error interrupt. Position  */
#define XDMAC_CID_TCID_Pos                    _U_(7)                                               /**< (XDMAC_CID) Transfer Count Overflow Error Interrupt Disable Position */
#define XDMAC_CID_TCID_Msk                    (_U_(0x1) << XDMAC_CID_TCID_Pos)                     /**< (XDMAC_CID) Transfer Count Overflow Error Interrupt Disable Mask */
#define XDMAC_CID_TCID(value)                 (XDMAC_CID_TCID_Msk & ((value) << XDMAC_CID_TCID_Pos))
#define   XDMAC_CID_TCID_0_Val                _U_(0x0)                                             /**< (XDMAC_CID) No effect.  */
#define   XDMAC_CID_TCID_1_Val                _U_(0x1)                                             /**< (XDMAC_CID) Disables transfer count overflow error interrupt.  */
#define XDMAC_CID_TCID_0                      (XDMAC_CID_TCID_0_Val << XDMAC_CID_TCID_Pos)         /**< (XDMAC_CID) No effect. Position  */
#define XDMAC_CID_TCID_1                      (XDMAC_CID_TCID_1_Val << XDMAC_CID_TCID_Pos)         /**< (XDMAC_CID) Disables transfer count overflow error interrupt. Position  */
#define XDMAC_CID_Msk                         _U_(0x000000FF)                                      /**< (XDMAC_CID) Register Mask  */


/* -------- XDMAC_CIM : (XDMAC Offset: 0x08) ( R/ 32) Channel Interrupt Mask Register  -------- */
#define XDMAC_CIM_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_CIM) Channel Interrupt Mask Register   Reset Value */

#define XDMAC_CIM_BIM_Pos                     _U_(0)                                               /**< (XDMAC_CIM) End of Block Interrupt Mask Position */
#define XDMAC_CIM_BIM_Msk                     (_U_(0x1) << XDMAC_CIM_BIM_Pos)                      /**< (XDMAC_CIM) End of Block Interrupt Mask Mask */
#define XDMAC_CIM_BIM(value)                  (XDMAC_CIM_BIM_Msk & ((value) << XDMAC_CIM_BIM_Pos))
#define   XDMAC_CIM_BIM_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIM) Block interrupt is masked.  */
#define   XDMAC_CIM_BIM_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIM) Block interrupt is activated.  */
#define XDMAC_CIM_BIM_0                       (XDMAC_CIM_BIM_0_Val << XDMAC_CIM_BIM_Pos)           /**< (XDMAC_CIM) Block interrupt is masked. Position  */
#define XDMAC_CIM_BIM_1                       (XDMAC_CIM_BIM_1_Val << XDMAC_CIM_BIM_Pos)           /**< (XDMAC_CIM) Block interrupt is activated. Position  */
#define XDMAC_CIM_LIM_Pos                     _U_(1)                                               /**< (XDMAC_CIM) End of Linked List Interrupt Mask Position */
#define XDMAC_CIM_LIM_Msk                     (_U_(0x1) << XDMAC_CIM_LIM_Pos)                      /**< (XDMAC_CIM) End of Linked List Interrupt Mask Mask */
#define XDMAC_CIM_LIM(value)                  (XDMAC_CIM_LIM_Msk & ((value) << XDMAC_CIM_LIM_Pos))
#define   XDMAC_CIM_LIM_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIM) End of linked list interrupt is masked.  */
#define   XDMAC_CIM_LIM_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIM) End of linked list interrupt is activated.  */
#define XDMAC_CIM_LIM_0                       (XDMAC_CIM_LIM_0_Val << XDMAC_CIM_LIM_Pos)           /**< (XDMAC_CIM) End of linked list interrupt is masked. Position  */
#define XDMAC_CIM_LIM_1                       (XDMAC_CIM_LIM_1_Val << XDMAC_CIM_LIM_Pos)           /**< (XDMAC_CIM) End of linked list interrupt is activated. Position  */
#define XDMAC_CIM_DIM_Pos                     _U_(2)                                               /**< (XDMAC_CIM) End of Disable Interrupt Mask Position */
#define XDMAC_CIM_DIM_Msk                     (_U_(0x1) << XDMAC_CIM_DIM_Pos)                      /**< (XDMAC_CIM) End of Disable Interrupt Mask Mask */
#define XDMAC_CIM_DIM(value)                  (XDMAC_CIM_DIM_Msk & ((value) << XDMAC_CIM_DIM_Pos))
#define   XDMAC_CIM_DIM_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIM) End of disable interrupt is masked.  */
#define   XDMAC_CIM_DIM_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIM) End of disable interrupt is activated.  */
#define XDMAC_CIM_DIM_0                       (XDMAC_CIM_DIM_0_Val << XDMAC_CIM_DIM_Pos)           /**< (XDMAC_CIM) End of disable interrupt is masked. Position  */
#define XDMAC_CIM_DIM_1                       (XDMAC_CIM_DIM_1_Val << XDMAC_CIM_DIM_Pos)           /**< (XDMAC_CIM) End of disable interrupt is activated. Position  */
#define XDMAC_CIM_FIM_Pos                     _U_(3)                                               /**< (XDMAC_CIM) End of Flush Interrupt Mask Position */
#define XDMAC_CIM_FIM_Msk                     (_U_(0x1) << XDMAC_CIM_FIM_Pos)                      /**< (XDMAC_CIM) End of Flush Interrupt Mask Mask */
#define XDMAC_CIM_FIM(value)                  (XDMAC_CIM_FIM_Msk & ((value) << XDMAC_CIM_FIM_Pos))
#define   XDMAC_CIM_FIM_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIM) End of flush interrupt is masked.  */
#define   XDMAC_CIM_FIM_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIM) End of flush interrupt is activated.  */
#define XDMAC_CIM_FIM_0                       (XDMAC_CIM_FIM_0_Val << XDMAC_CIM_FIM_Pos)           /**< (XDMAC_CIM) End of flush interrupt is masked. Position  */
#define XDMAC_CIM_FIM_1                       (XDMAC_CIM_FIM_1_Val << XDMAC_CIM_FIM_Pos)           /**< (XDMAC_CIM) End of flush interrupt is activated. Position  */
#define XDMAC_CIM_RBEIM_Pos                   _U_(4)                                               /**< (XDMAC_CIM) Read Bus Error Interrupt Mask Position */
#define XDMAC_CIM_RBEIM_Msk                   (_U_(0x1) << XDMAC_CIM_RBEIM_Pos)                    /**< (XDMAC_CIM) Read Bus Error Interrupt Mask Mask */
#define XDMAC_CIM_RBEIM(value)                (XDMAC_CIM_RBEIM_Msk & ((value) << XDMAC_CIM_RBEIM_Pos))
#define   XDMAC_CIM_RBEIM_0_Val               _U_(0x0)                                             /**< (XDMAC_CIM) Bus error interrupt is masked.  */
#define   XDMAC_CIM_RBEIM_1_Val               _U_(0x1)                                             /**< (XDMAC_CIM) Bus error interrupt is activated.  */
#define XDMAC_CIM_RBEIM_0                     (XDMAC_CIM_RBEIM_0_Val << XDMAC_CIM_RBEIM_Pos)       /**< (XDMAC_CIM) Bus error interrupt is masked. Position  */
#define XDMAC_CIM_RBEIM_1                     (XDMAC_CIM_RBEIM_1_Val << XDMAC_CIM_RBEIM_Pos)       /**< (XDMAC_CIM) Bus error interrupt is activated. Position  */
#define XDMAC_CIM_WBEIM_Pos                   _U_(5)                                               /**< (XDMAC_CIM) Write Bus Error Interrupt Mask Position */
#define XDMAC_CIM_WBEIM_Msk                   (_U_(0x1) << XDMAC_CIM_WBEIM_Pos)                    /**< (XDMAC_CIM) Write Bus Error Interrupt Mask Mask */
#define XDMAC_CIM_WBEIM(value)                (XDMAC_CIM_WBEIM_Msk & ((value) << XDMAC_CIM_WBEIM_Pos))
#define   XDMAC_CIM_WBEIM_0_Val               _U_(0x0)                                             /**< (XDMAC_CIM) Bus error interrupt is masked.  */
#define   XDMAC_CIM_WBEIM_1_Val               _U_(0x1)                                             /**< (XDMAC_CIM) Bus error interrupt is activated.  */
#define XDMAC_CIM_WBEIM_0                     (XDMAC_CIM_WBEIM_0_Val << XDMAC_CIM_WBEIM_Pos)       /**< (XDMAC_CIM) Bus error interrupt is masked. Position  */
#define XDMAC_CIM_WBEIM_1                     (XDMAC_CIM_WBEIM_1_Val << XDMAC_CIM_WBEIM_Pos)       /**< (XDMAC_CIM) Bus error interrupt is activated. Position  */
#define XDMAC_CIM_ROIM_Pos                    _U_(6)                                               /**< (XDMAC_CIM) Request Overflow Error Interrupt Mask Position */
#define XDMAC_CIM_ROIM_Msk                    (_U_(0x1) << XDMAC_CIM_ROIM_Pos)                     /**< (XDMAC_CIM) Request Overflow Error Interrupt Mask Mask */
#define XDMAC_CIM_ROIM(value)                 (XDMAC_CIM_ROIM_Msk & ((value) << XDMAC_CIM_ROIM_Pos))
#define   XDMAC_CIM_ROIM_0_Val                _U_(0x0)                                             /**< (XDMAC_CIM) Request overflow interrupt is masked.  */
#define   XDMAC_CIM_ROIM_1_Val                _U_(0x1)                                             /**< (XDMAC_CIM) Request overflow interrupt is activated.  */
#define XDMAC_CIM_ROIM_0                      (XDMAC_CIM_ROIM_0_Val << XDMAC_CIM_ROIM_Pos)         /**< (XDMAC_CIM) Request overflow interrupt is masked. Position  */
#define XDMAC_CIM_ROIM_1                      (XDMAC_CIM_ROIM_1_Val << XDMAC_CIM_ROIM_Pos)         /**< (XDMAC_CIM) Request overflow interrupt is activated. Position  */
#define XDMAC_CIM_TCIM_Pos                    _U_(7)                                               /**< (XDMAC_CIM) Transfer Count Overflow Error Interrupt Mask Position */
#define XDMAC_CIM_TCIM_Msk                    (_U_(0x1) << XDMAC_CIM_TCIM_Pos)                     /**< (XDMAC_CIM) Transfer Count Overflow Error Interrupt Mask Mask */
#define XDMAC_CIM_TCIM(value)                 (XDMAC_CIM_TCIM_Msk & ((value) << XDMAC_CIM_TCIM_Pos))
#define   XDMAC_CIM_TCIM_0_Val                _U_(0x0)                                             /**< (XDMAC_CIM) Transfer count overflow interrupt is masked.  */
#define   XDMAC_CIM_TCIM_1_Val                _U_(0x1)                                             /**< (XDMAC_CIM) Transfer count overflow interrupt is activated.  */
#define XDMAC_CIM_TCIM_0                      (XDMAC_CIM_TCIM_0_Val << XDMAC_CIM_TCIM_Pos)         /**< (XDMAC_CIM) Transfer count overflow interrupt is masked. Position  */
#define XDMAC_CIM_TCIM_1                      (XDMAC_CIM_TCIM_1_Val << XDMAC_CIM_TCIM_Pos)         /**< (XDMAC_CIM) Transfer count overflow interrupt is activated. Position  */
#define XDMAC_CIM_Msk                         _U_(0x000000FF)                                      /**< (XDMAC_CIM) Register Mask  */


/* -------- XDMAC_CIS : (XDMAC Offset: 0x0C) ( R/ 32) Channel Interrupt Status Register  -------- */
#define XDMAC_CIS_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_CIS) Channel Interrupt Status Register   Reset Value */

#define XDMAC_CIS_BIS_Pos                     _U_(0)                                               /**< (XDMAC_CIS) End of Block Interrupt Status Position */
#define XDMAC_CIS_BIS_Msk                     (_U_(0x1) << XDMAC_CIS_BIS_Pos)                      /**< (XDMAC_CIS) End of Block Interrupt Status Mask */
#define XDMAC_CIS_BIS(value)                  (XDMAC_CIS_BIS_Msk & ((value) << XDMAC_CIS_BIS_Pos))
#define   XDMAC_CIS_BIS_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIS) End of block interrupt has not occurred.  */
#define   XDMAC_CIS_BIS_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIS) End of block interrupt has occurred since the last read of the Status register.  */
#define XDMAC_CIS_BIS_0                       (XDMAC_CIS_BIS_0_Val << XDMAC_CIS_BIS_Pos)           /**< (XDMAC_CIS) End of block interrupt has not occurred. Position  */
#define XDMAC_CIS_BIS_1                       (XDMAC_CIS_BIS_1_Val << XDMAC_CIS_BIS_Pos)           /**< (XDMAC_CIS) End of block interrupt has occurred since the last read of the Status register. Position  */
#define XDMAC_CIS_LIS_Pos                     _U_(1)                                               /**< (XDMAC_CIS) End of Linked List Interrupt Status Position */
#define XDMAC_CIS_LIS_Msk                     (_U_(0x1) << XDMAC_CIS_LIS_Pos)                      /**< (XDMAC_CIS) End of Linked List Interrupt Status Mask */
#define XDMAC_CIS_LIS(value)                  (XDMAC_CIS_LIS_Msk & ((value) << XDMAC_CIS_LIS_Pos))
#define   XDMAC_CIS_LIS_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIS) End of linked list condition has not occurred.  */
#define   XDMAC_CIS_LIS_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIS) End of linked list condition has occurred since the last read of the Status register.  */
#define XDMAC_CIS_LIS_0                       (XDMAC_CIS_LIS_0_Val << XDMAC_CIS_LIS_Pos)           /**< (XDMAC_CIS) End of linked list condition has not occurred. Position  */
#define XDMAC_CIS_LIS_1                       (XDMAC_CIS_LIS_1_Val << XDMAC_CIS_LIS_Pos)           /**< (XDMAC_CIS) End of linked list condition has occurred since the last read of the Status register. Position  */
#define XDMAC_CIS_DIS_Pos                     _U_(2)                                               /**< (XDMAC_CIS) End of Disable Interrupt Status Position */
#define XDMAC_CIS_DIS_Msk                     (_U_(0x1) << XDMAC_CIS_DIS_Pos)                      /**< (XDMAC_CIS) End of Disable Interrupt Status Mask */
#define XDMAC_CIS_DIS(value)                  (XDMAC_CIS_DIS_Msk & ((value) << XDMAC_CIS_DIS_Pos))
#define   XDMAC_CIS_DIS_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIS) End of disable condition has not occurred.  */
#define   XDMAC_CIS_DIS_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIS) End of disable condition has occurred since the last read of the Status register.  */
#define XDMAC_CIS_DIS_0                       (XDMAC_CIS_DIS_0_Val << XDMAC_CIS_DIS_Pos)           /**< (XDMAC_CIS) End of disable condition has not occurred. Position  */
#define XDMAC_CIS_DIS_1                       (XDMAC_CIS_DIS_1_Val << XDMAC_CIS_DIS_Pos)           /**< (XDMAC_CIS) End of disable condition has occurred since the last read of the Status register. Position  */
#define XDMAC_CIS_FIS_Pos                     _U_(3)                                               /**< (XDMAC_CIS) End of Flush Interrupt Status Position */
#define XDMAC_CIS_FIS_Msk                     (_U_(0x1) << XDMAC_CIS_FIS_Pos)                      /**< (XDMAC_CIS) End of Flush Interrupt Status Mask */
#define XDMAC_CIS_FIS(value)                  (XDMAC_CIS_FIS_Msk & ((value) << XDMAC_CIS_FIS_Pos))
#define   XDMAC_CIS_FIS_0_Val                 _U_(0x0)                                             /**< (XDMAC_CIS) End of flush condition has not occurred.  */
#define   XDMAC_CIS_FIS_1_Val                 _U_(0x1)                                             /**< (XDMAC_CIS) End of flush condition has occurred since the last read of the Status register.  */
#define XDMAC_CIS_FIS_0                       (XDMAC_CIS_FIS_0_Val << XDMAC_CIS_FIS_Pos)           /**< (XDMAC_CIS) End of flush condition has not occurred. Position  */
#define XDMAC_CIS_FIS_1                       (XDMAC_CIS_FIS_1_Val << XDMAC_CIS_FIS_Pos)           /**< (XDMAC_CIS) End of flush condition has occurred since the last read of the Status register. Position  */
#define XDMAC_CIS_RBEIS_Pos                   _U_(4)                                               /**< (XDMAC_CIS) Read Bus Error Interrupt Status Position */
#define XDMAC_CIS_RBEIS_Msk                   (_U_(0x1) << XDMAC_CIS_RBEIS_Pos)                    /**< (XDMAC_CIS) Read Bus Error Interrupt Status Mask */
#define XDMAC_CIS_RBEIS(value)                (XDMAC_CIS_RBEIS_Msk & ((value) << XDMAC_CIS_RBEIS_Pos))
#define   XDMAC_CIS_RBEIS_0_Val               _U_(0x0)                                             /**< (XDMAC_CIS) Read bus error condition has not occurred.  */
#define   XDMAC_CIS_RBEIS_1_Val               _U_(0x1)                                             /**< (XDMAC_CIS) At least one bus error has been detected in a read access since the last read of the Status register.  */
#define XDMAC_CIS_RBEIS_0                     (XDMAC_CIS_RBEIS_0_Val << XDMAC_CIS_RBEIS_Pos)       /**< (XDMAC_CIS) Read bus error condition has not occurred. Position  */
#define XDMAC_CIS_RBEIS_1                     (XDMAC_CIS_RBEIS_1_Val << XDMAC_CIS_RBEIS_Pos)       /**< (XDMAC_CIS) At least one bus error has been detected in a read access since the last read of the Status register. Position  */
#define XDMAC_CIS_WBEIS_Pos                   _U_(5)                                               /**< (XDMAC_CIS) Write Bus Error Interrupt Status Position */
#define XDMAC_CIS_WBEIS_Msk                   (_U_(0x1) << XDMAC_CIS_WBEIS_Pos)                    /**< (XDMAC_CIS) Write Bus Error Interrupt Status Mask */
#define XDMAC_CIS_WBEIS(value)                (XDMAC_CIS_WBEIS_Msk & ((value) << XDMAC_CIS_WBEIS_Pos))
#define   XDMAC_CIS_WBEIS_0_Val               _U_(0x0)                                             /**< (XDMAC_CIS) Write bus error condition has not occurred.  */
#define   XDMAC_CIS_WBEIS_1_Val               _U_(0x1)                                             /**< (XDMAC_CIS) At least one bus error has been detected in a write access since the last read of the Status register.  */
#define XDMAC_CIS_WBEIS_0                     (XDMAC_CIS_WBEIS_0_Val << XDMAC_CIS_WBEIS_Pos)       /**< (XDMAC_CIS) Write bus error condition has not occurred. Position  */
#define XDMAC_CIS_WBEIS_1                     (XDMAC_CIS_WBEIS_1_Val << XDMAC_CIS_WBEIS_Pos)       /**< (XDMAC_CIS) At least one bus error has been detected in a write access since the last read of the Status register. Position  */
#define XDMAC_CIS_ROIS_Pos                    _U_(6)                                               /**< (XDMAC_CIS) Request Overflow Error Interrupt Status Position */
#define XDMAC_CIS_ROIS_Msk                    (_U_(0x1) << XDMAC_CIS_ROIS_Pos)                     /**< (XDMAC_CIS) Request Overflow Error Interrupt Status Mask */
#define XDMAC_CIS_ROIS(value)                 (XDMAC_CIS_ROIS_Msk & ((value) << XDMAC_CIS_ROIS_Pos))
#define   XDMAC_CIS_ROIS_0_Val                _U_(0x0)                                             /**< (XDMAC_CIS) Overflow condition has not occurred.  */
#define   XDMAC_CIS_ROIS_1_Val                _U_(0x1)                                             /**< (XDMAC_CIS) Overflow condition has occurred at least once. (This information is only relevant for peripheral synchronized transfers.)  */
#define XDMAC_CIS_ROIS_0                      (XDMAC_CIS_ROIS_0_Val << XDMAC_CIS_ROIS_Pos)         /**< (XDMAC_CIS) Overflow condition has not occurred. Position  */
#define XDMAC_CIS_ROIS_1                      (XDMAC_CIS_ROIS_1_Val << XDMAC_CIS_ROIS_Pos)         /**< (XDMAC_CIS) Overflow condition has occurred at least once. (This information is only relevant for peripheral synchronized transfers.) Position  */
#define XDMAC_CIS_TCIS_Pos                    _U_(7)                                               /**< (XDMAC_CIS) Transfer Count Overflow Interrupt Status Position */
#define XDMAC_CIS_TCIS_Msk                    (_U_(0x1) << XDMAC_CIS_TCIS_Pos)                     /**< (XDMAC_CIS) Transfer Count Overflow Interrupt Status Mask */
#define XDMAC_CIS_TCIS(value)                 (XDMAC_CIS_TCIS_Msk & ((value) << XDMAC_CIS_TCIS_Pos))
#define   XDMAC_CIS_TCIS_0_Val                _U_(0x0)                                             /**< (XDMAC_CIS) Transfer count overflow has not occurred.  */
#define   XDMAC_CIS_TCIS_1_Val                _U_(0x1)                                             /**< (XDMAC_CIS) At least one transfer count overflow has been detected since the last read of the Status register.  */
#define XDMAC_CIS_TCIS_0                      (XDMAC_CIS_TCIS_0_Val << XDMAC_CIS_TCIS_Pos)         /**< (XDMAC_CIS) Transfer count overflow has not occurred. Position  */
#define XDMAC_CIS_TCIS_1                      (XDMAC_CIS_TCIS_1_Val << XDMAC_CIS_TCIS_Pos)         /**< (XDMAC_CIS) At least one transfer count overflow has been detected since the last read of the Status register. Position  */
#define XDMAC_CIS_Msk                         _U_(0x000000FF)                                      /**< (XDMAC_CIS) Register Mask  */


/* -------- XDMAC_CSA : (XDMAC Offset: 0x10) (R/W 32) Channel Source Address Register  -------- */
#define XDMAC_CSA_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_CSA) Channel Source Address Register   Reset Value */

#define XDMAC_CSA_SA_Pos                      _U_(0)                                               /**< (XDMAC_CSA) Channel Source Address Position */
#define XDMAC_CSA_SA_Msk                      (_U_(0xFFFFFFFF) << XDMAC_CSA_SA_Pos)                /**< (XDMAC_CSA) Channel Source Address Mask */
#define XDMAC_CSA_SA(value)                   (XDMAC_CSA_SA_Msk & ((value) << XDMAC_CSA_SA_Pos))  
#define XDMAC_CSA_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_CSA) Register Mask  */


/* -------- XDMAC_CDA : (XDMAC Offset: 0x14) (R/W 32) Channel Destination Address Register  -------- */
#define XDMAC_CDA_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_CDA) Channel Destination Address Register   Reset Value */

#define XDMAC_CDA_DA_Pos                      _U_(0)                                               /**< (XDMAC_CDA) Channel Destination Address Position */
#define XDMAC_CDA_DA_Msk                      (_U_(0xFFFFFFFF) << XDMAC_CDA_DA_Pos)                /**< (XDMAC_CDA) Channel Destination Address Mask */
#define XDMAC_CDA_DA(value)                   (XDMAC_CDA_DA_Msk & ((value) << XDMAC_CDA_DA_Pos))  
#define XDMAC_CDA_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_CDA) Register Mask  */


/* -------- XDMAC_CNDA : (XDMAC Offset: 0x18) (R/W 32) Channel Next Descriptor Address Register  -------- */
#define XDMAC_CNDA_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_CNDA) Channel Next Descriptor Address Register   Reset Value */

#define XDMAC_CNDA_NDA_Pos                    _U_(2)                                               /**< (XDMAC_CNDA) Channel Next Descriptor Address Position */
#define XDMAC_CNDA_NDA_Msk                    (_U_(0x3FFFFFFF) << XDMAC_CNDA_NDA_Pos)              /**< (XDMAC_CNDA) Channel Next Descriptor Address Mask */
#define XDMAC_CNDA_NDA(value)                 (XDMAC_CNDA_NDA_Msk & ((value) << XDMAC_CNDA_NDA_Pos))
#define XDMAC_CNDA_Msk                        _U_(0xFFFFFFFC)                                      /**< (XDMAC_CNDA) Register Mask  */


/* -------- XDMAC_CNDC : (XDMAC Offset: 0x1C) (R/W 32) Channel Next Descriptor Control Register  -------- */
#define XDMAC_CNDC_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_CNDC) Channel Next Descriptor Control Register   Reset Value */

#define XDMAC_CNDC_NDE_Pos                    _U_(0)                                               /**< (XDMAC_CNDC) Channel Next Descriptor Enable Position */
#define XDMAC_CNDC_NDE_Msk                    (_U_(0x1) << XDMAC_CNDC_NDE_Pos)                     /**< (XDMAC_CNDC) Channel Next Descriptor Enable Mask */
#define XDMAC_CNDC_NDE(value)                 (XDMAC_CNDC_NDE_Msk & ((value) << XDMAC_CNDC_NDE_Pos))
#define   XDMAC_CNDC_NDE_DSCR_FETCH_DIS_Val   _U_(0x0)                                             /**< (XDMAC_CNDC) Descriptor fetch is disabled.  */
#define   XDMAC_CNDC_NDE_DSCR_FETCH_EN_Val    _U_(0x1)                                             /**< (XDMAC_CNDC) Descriptor fetch is enabled.  */
#define XDMAC_CNDC_NDE_DSCR_FETCH_DIS         (XDMAC_CNDC_NDE_DSCR_FETCH_DIS_Val << XDMAC_CNDC_NDE_Pos) /**< (XDMAC_CNDC) Descriptor fetch is disabled. Position  */
#define XDMAC_CNDC_NDE_DSCR_FETCH_EN          (XDMAC_CNDC_NDE_DSCR_FETCH_EN_Val << XDMAC_CNDC_NDE_Pos) /**< (XDMAC_CNDC) Descriptor fetch is enabled. Position  */
#define XDMAC_CNDC_NDSUP_Pos                  _U_(1)                                               /**< (XDMAC_CNDC) Channel Next Descriptor Source Update Position */
#define XDMAC_CNDC_NDSUP_Msk                  (_U_(0x1) << XDMAC_CNDC_NDSUP_Pos)                   /**< (XDMAC_CNDC) Channel Next Descriptor Source Update Mask */
#define XDMAC_CNDC_NDSUP(value)               (XDMAC_CNDC_NDSUP_Msk & ((value) << XDMAC_CNDC_NDSUP_Pos))
#define   XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED_Val _U_(0x0)                                             /**< (XDMAC_CNDC) Source parameters remain unchanged.  */
#define   XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED_Val _U_(0x1)                                             /**< (XDMAC_CNDC) Source parameters are updated when the descriptor is retrieved.  */
#define XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED (XDMAC_CNDC_NDSUP_SRC_PARAMS_UNCHANGED_Val << XDMAC_CNDC_NDSUP_Pos) /**< (XDMAC_CNDC) Source parameters remain unchanged. Position  */
#define XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED   (XDMAC_CNDC_NDSUP_SRC_PARAMS_UPDATED_Val << XDMAC_CNDC_NDSUP_Pos) /**< (XDMAC_CNDC) Source parameters are updated when the descriptor is retrieved. Position  */
#define XDMAC_CNDC_NDDUP_Pos                  _U_(2)                                               /**< (XDMAC_CNDC) Channel Next Descriptor Destination Update Position */
#define XDMAC_CNDC_NDDUP_Msk                  (_U_(0x1) << XDMAC_CNDC_NDDUP_Pos)                   /**< (XDMAC_CNDC) Channel Next Descriptor Destination Update Mask */
#define XDMAC_CNDC_NDDUP(value)               (XDMAC_CNDC_NDDUP_Msk & ((value) << XDMAC_CNDC_NDDUP_Pos))
#define   XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED_Val _U_(0x0)                                             /**< (XDMAC_CNDC) Destination parameters remain unchanged.  */
#define   XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED_Val _U_(0x1)                                             /**< (XDMAC_CNDC) Destination parameters are updated when the descriptor is retrieved.  */
#define XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED (XDMAC_CNDC_NDDUP_DST_PARAMS_UNCHANGED_Val << XDMAC_CNDC_NDDUP_Pos) /**< (XDMAC_CNDC) Destination parameters remain unchanged. Position  */
#define XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED   (XDMAC_CNDC_NDDUP_DST_PARAMS_UPDATED_Val << XDMAC_CNDC_NDDUP_Pos) /**< (XDMAC_CNDC) Destination parameters are updated when the descriptor is retrieved. Position  */
#define XDMAC_CNDC_NDVIEW_Pos                 _U_(3)                                               /**< (XDMAC_CNDC) Channel Next Descriptor View Position */
#define XDMAC_CNDC_NDVIEW_Msk                 (_U_(0x3) << XDMAC_CNDC_NDVIEW_Pos)                  /**< (XDMAC_CNDC) Channel Next Descriptor View Mask */
#define XDMAC_CNDC_NDVIEW(value)              (XDMAC_CNDC_NDVIEW_Msk & ((value) << XDMAC_CNDC_NDVIEW_Pos))
#define   XDMAC_CNDC_NDVIEW_NDV0_Val          _U_(0x0)                                             /**< (XDMAC_CNDC) Next Descriptor View 0  */
#define   XDMAC_CNDC_NDVIEW_NDV1_Val          _U_(0x1)                                             /**< (XDMAC_CNDC) Next Descriptor View 1  */
#define   XDMAC_CNDC_NDVIEW_NDV2_Val          _U_(0x2)                                             /**< (XDMAC_CNDC) Next Descriptor View 2  */
#define   XDMAC_CNDC_NDVIEW_NDV3_Val          _U_(0x3)                                             /**< (XDMAC_CNDC) Next Descriptor View 3  */
#define XDMAC_CNDC_NDVIEW_NDV0                (XDMAC_CNDC_NDVIEW_NDV0_Val << XDMAC_CNDC_NDVIEW_Pos) /**< (XDMAC_CNDC) Next Descriptor View 0 Position  */
#define XDMAC_CNDC_NDVIEW_NDV1                (XDMAC_CNDC_NDVIEW_NDV1_Val << XDMAC_CNDC_NDVIEW_Pos) /**< (XDMAC_CNDC) Next Descriptor View 1 Position  */
#define XDMAC_CNDC_NDVIEW_NDV2                (XDMAC_CNDC_NDVIEW_NDV2_Val << XDMAC_CNDC_NDVIEW_Pos) /**< (XDMAC_CNDC) Next Descriptor View 2 Position  */
#define XDMAC_CNDC_NDVIEW_NDV3                (XDMAC_CNDC_NDVIEW_NDV3_Val << XDMAC_CNDC_NDVIEW_Pos) /**< (XDMAC_CNDC) Next Descriptor View 3 Position  */
#define XDMAC_CNDC_QOS_Pos                    _U_(5)                                               /**< (XDMAC_CNDC) Channel Quality Of Service Level Position */
#define XDMAC_CNDC_QOS_Msk                    (_U_(0x3) << XDMAC_CNDC_QOS_Pos)                     /**< (XDMAC_CNDC) Channel Quality Of Service Level Mask */
#define XDMAC_CNDC_QOS(value)                 (XDMAC_CNDC_QOS_Msk & ((value) << XDMAC_CNDC_QOS_Pos))
#define XDMAC_CNDC_Msk                        _U_(0x0000007F)                                      /**< (XDMAC_CNDC) Register Mask  */


/* -------- XDMAC_CUBC : (XDMAC Offset: 0x20) (R/W 32) Channel Microblock Control Register  -------- */
#define XDMAC_CUBC_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_CUBC) Channel Microblock Control Register   Reset Value */

#define XDMAC_CUBC_UBLEN_Pos                  _U_(0)                                               /**< (XDMAC_CUBC) Channel Microblock Length Position */
#define XDMAC_CUBC_UBLEN_Msk                  (_U_(0xFFFFFF) << XDMAC_CUBC_UBLEN_Pos)              /**< (XDMAC_CUBC) Channel Microblock Length Mask */
#define XDMAC_CUBC_UBLEN(value)               (XDMAC_CUBC_UBLEN_Msk & ((value) << XDMAC_CUBC_UBLEN_Pos))
#define XDMAC_CUBC_Msk                        _U_(0x00FFFFFF)                                      /**< (XDMAC_CUBC) Register Mask  */


/* -------- XDMAC_CBC : (XDMAC Offset: 0x24) (R/W 32) Channel Block Control Register  -------- */
#define XDMAC_CBC_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_CBC) Channel Block Control Register   Reset Value */

#define XDMAC_CBC_BLEN_Pos                    _U_(0)                                               /**< (XDMAC_CBC) Channel Block Length Position */
#define XDMAC_CBC_BLEN_Msk                    (_U_(0xFFF) << XDMAC_CBC_BLEN_Pos)                   /**< (XDMAC_CBC) Channel Block Length Mask */
#define XDMAC_CBC_BLEN(value)                 (XDMAC_CBC_BLEN_Msk & ((value) << XDMAC_CBC_BLEN_Pos))
#define XDMAC_CBC_Msk                         _U_(0x00000FFF)                                      /**< (XDMAC_CBC) Register Mask  */


/* -------- XDMAC_CC : (XDMAC Offset: 0x28) (R/W 32) Channel Configuration Register  -------- */
#define XDMAC_CC_RESETVALUE                   _U_(0x00)                                            /**<  (XDMAC_CC) Channel Configuration Register   Reset Value */

#define XDMAC_CC_TYPE_Pos                     _U_(0)                                               /**< (XDMAC_CC) Channel Transfer Type Position */
#define XDMAC_CC_TYPE_Msk                     (_U_(0x1) << XDMAC_CC_TYPE_Pos)                      /**< (XDMAC_CC) Channel Transfer Type Mask */
#define XDMAC_CC_TYPE(value)                  (XDMAC_CC_TYPE_Msk & ((value) << XDMAC_CC_TYPE_Pos))
#define   XDMAC_CC_TYPE_MEM_TRAN_Val          _U_(0x0)                                             /**< (XDMAC_CC) Self-triggered mode (memory-to-memory transfer).  */
#define   XDMAC_CC_TYPE_PER_TRAN_Val          _U_(0x1)                                             /**< (XDMAC_CC) Synchronized mode (peripheral-to-memory or memory-to-peripheral transfer).  */
#define XDMAC_CC_TYPE_MEM_TRAN                (XDMAC_CC_TYPE_MEM_TRAN_Val << XDMAC_CC_TYPE_Pos)    /**< (XDMAC_CC) Self-triggered mode (memory-to-memory transfer). Position  */
#define XDMAC_CC_TYPE_PER_TRAN                (XDMAC_CC_TYPE_PER_TRAN_Val << XDMAC_CC_TYPE_Pos)    /**< (XDMAC_CC) Synchronized mode (peripheral-to-memory or memory-to-peripheral transfer). Position  */
#define XDMAC_CC_MBSIZE_Pos                   _U_(1)                                               /**< (XDMAC_CC) Channel Memory Burst Size Position */
#define XDMAC_CC_MBSIZE_Msk                   (_U_(0x3) << XDMAC_CC_MBSIZE_Pos)                    /**< (XDMAC_CC) Channel Memory Burst Size Mask */
#define XDMAC_CC_MBSIZE(value)                (XDMAC_CC_MBSIZE_Msk & ((value) << XDMAC_CC_MBSIZE_Pos))
#define   XDMAC_CC_MBSIZE_SINGLE_Val          _U_(0x0)                                             /**< (XDMAC_CC) The memory burst size is set to one.  */
#define   XDMAC_CC_MBSIZE_FOUR_Val            _U_(0x1)                                             /**< (XDMAC_CC) The memory burst size is set to four.  */
#define   XDMAC_CC_MBSIZE_EIGHT_Val           _U_(0x2)                                             /**< (XDMAC_CC) The memory burst size is set to eight.  */
#define   XDMAC_CC_MBSIZE_SIXTEEN_Val         _U_(0x3)                                             /**< (XDMAC_CC) The memory burst size is set to sixteen.  */
#define XDMAC_CC_MBSIZE_SINGLE                (XDMAC_CC_MBSIZE_SINGLE_Val << XDMAC_CC_MBSIZE_Pos)  /**< (XDMAC_CC) The memory burst size is set to one. Position  */
#define XDMAC_CC_MBSIZE_FOUR                  (XDMAC_CC_MBSIZE_FOUR_Val << XDMAC_CC_MBSIZE_Pos)    /**< (XDMAC_CC) The memory burst size is set to four. Position  */
#define XDMAC_CC_MBSIZE_EIGHT                 (XDMAC_CC_MBSIZE_EIGHT_Val << XDMAC_CC_MBSIZE_Pos)   /**< (XDMAC_CC) The memory burst size is set to eight. Position  */
#define XDMAC_CC_MBSIZE_SIXTEEN               (XDMAC_CC_MBSIZE_SIXTEEN_Val << XDMAC_CC_MBSIZE_Pos) /**< (XDMAC_CC) The memory burst size is set to sixteen. Position  */
#define XDMAC_CC_DSYNC_Pos                    _U_(4)                                               /**< (XDMAC_CC) Channel Synchronization Position */
#define XDMAC_CC_DSYNC_Msk                    (_U_(0x1) << XDMAC_CC_DSYNC_Pos)                     /**< (XDMAC_CC) Channel Synchronization Mask */
#define XDMAC_CC_DSYNC(value)                 (XDMAC_CC_DSYNC_Msk & ((value) << XDMAC_CC_DSYNC_Pos))
#define   XDMAC_CC_DSYNC_PER2MEM_Val          _U_(0x0)                                             /**< (XDMAC_CC) Peripheral-to-memory transfer.  */
#define   XDMAC_CC_DSYNC_MEM2PER_Val          _U_(0x1)                                             /**< (XDMAC_CC) Memory-to-peripheral transfer  */
#define XDMAC_CC_DSYNC_PER2MEM                (XDMAC_CC_DSYNC_PER2MEM_Val << XDMAC_CC_DSYNC_Pos)   /**< (XDMAC_CC) Peripheral-to-memory transfer. Position  */
#define XDMAC_CC_DSYNC_MEM2PER                (XDMAC_CC_DSYNC_MEM2PER_Val << XDMAC_CC_DSYNC_Pos)   /**< (XDMAC_CC) Memory-to-peripheral transfer Position  */
#define XDMAC_CC_PROT_Pos                     _U_(5)                                               /**< (XDMAC_CC) Channel Protection Position */
#define XDMAC_CC_PROT_Msk                     (_U_(0x1) << XDMAC_CC_PROT_Pos)                      /**< (XDMAC_CC) Channel Protection Mask */
#define XDMAC_CC_PROT(value)                  (XDMAC_CC_PROT_Msk & ((value) << XDMAC_CC_PROT_Pos))
#define   XDMAC_CC_PROT_SEC_Val               _U_(0x0)                                             /**< (XDMAC_CC) Channel is secured.  */
#define   XDMAC_CC_PROT_UNSEC_Val             _U_(0x1)                                             /**< (XDMAC_CC) Channel is unsecured.  */
#define XDMAC_CC_PROT_SEC                     (XDMAC_CC_PROT_SEC_Val << XDMAC_CC_PROT_Pos)         /**< (XDMAC_CC) Channel is secured. Position  */
#define XDMAC_CC_PROT_UNSEC                   (XDMAC_CC_PROT_UNSEC_Val << XDMAC_CC_PROT_Pos)       /**< (XDMAC_CC) Channel is unsecured. Position  */
#define XDMAC_CC_SWREQ_Pos                    _U_(6)                                               /**< (XDMAC_CC) Channel Software Request Trigger Position */
#define XDMAC_CC_SWREQ_Msk                    (_U_(0x1) << XDMAC_CC_SWREQ_Pos)                     /**< (XDMAC_CC) Channel Software Request Trigger Mask */
#define XDMAC_CC_SWREQ(value)                 (XDMAC_CC_SWREQ_Msk & ((value) << XDMAC_CC_SWREQ_Pos))
#define   XDMAC_CC_SWREQ_HWR_CONNECTED_Val    _U_(0x0)                                             /**< (XDMAC_CC) Hardware request line is connected to the peripheral request line.  */
#define   XDMAC_CC_SWREQ_SWR_CONNECTED_Val    _U_(0x1)                                             /**< (XDMAC_CC) Software request is connected to the peripheral request line.  */
#define XDMAC_CC_SWREQ_HWR_CONNECTED          (XDMAC_CC_SWREQ_HWR_CONNECTED_Val << XDMAC_CC_SWREQ_Pos) /**< (XDMAC_CC) Hardware request line is connected to the peripheral request line. Position  */
#define XDMAC_CC_SWREQ_SWR_CONNECTED          (XDMAC_CC_SWREQ_SWR_CONNECTED_Val << XDMAC_CC_SWREQ_Pos) /**< (XDMAC_CC) Software request is connected to the peripheral request line. Position  */
#define XDMAC_CC_MEMSET_Pos                   _U_(7)                                               /**< (XDMAC_CC) Channel Fill Block of Memory Position */
#define XDMAC_CC_MEMSET_Msk                   (_U_(0x1) << XDMAC_CC_MEMSET_Pos)                    /**< (XDMAC_CC) Channel Fill Block of Memory Mask */
#define XDMAC_CC_MEMSET(value)                (XDMAC_CC_MEMSET_Msk & ((value) << XDMAC_CC_MEMSET_Pos))
#define   XDMAC_CC_MEMSET_NORMAL_MODE_Val     _U_(0x0)                                             /**< (XDMAC_CC) Memset is not activated.  */
#define   XDMAC_CC_MEMSET_HW_MODE_Val         _U_(0x1)                                             /**< (XDMAC_CC) Sets the block of memory pointed by DA field to the specified value. This operation is performed on 8-, 16- or 32-bit basis.  */
#define XDMAC_CC_MEMSET_NORMAL_MODE           (XDMAC_CC_MEMSET_NORMAL_MODE_Val << XDMAC_CC_MEMSET_Pos) /**< (XDMAC_CC) Memset is not activated. Position  */
#define XDMAC_CC_MEMSET_HW_MODE               (XDMAC_CC_MEMSET_HW_MODE_Val << XDMAC_CC_MEMSET_Pos) /**< (XDMAC_CC) Sets the block of memory pointed by DA field to the specified value. This operation is performed on 8-, 16- or 32-bit basis. Position  */
#define XDMAC_CC_CSIZE_Pos                    _U_(8)                                               /**< (XDMAC_CC) Channel Chunk Size Position */
#define XDMAC_CC_CSIZE_Msk                    (_U_(0x7) << XDMAC_CC_CSIZE_Pos)                     /**< (XDMAC_CC) Channel Chunk Size Mask */
#define XDMAC_CC_CSIZE(value)                 (XDMAC_CC_CSIZE_Msk & ((value) << XDMAC_CC_CSIZE_Pos))
#define   XDMAC_CC_CSIZE_CHK_1_Val            _U_(0x0)                                             /**< (XDMAC_CC) 1 data transferred  */
#define   XDMAC_CC_CSIZE_CHK_2_Val            _U_(0x1)                                             /**< (XDMAC_CC) 2 data transferred  */
#define   XDMAC_CC_CSIZE_CHK_4_Val            _U_(0x2)                                             /**< (XDMAC_CC) 4 data transferred  */
#define   XDMAC_CC_CSIZE_CHK_8_Val            _U_(0x3)                                             /**< (XDMAC_CC) 8 data transferred  */
#define   XDMAC_CC_CSIZE_CHK_16_Val           _U_(0x4)                                             /**< (XDMAC_CC) 16 data transferred  */
#define XDMAC_CC_CSIZE_CHK_1                  (XDMAC_CC_CSIZE_CHK_1_Val << XDMAC_CC_CSIZE_Pos)     /**< (XDMAC_CC) 1 data transferred Position  */
#define XDMAC_CC_CSIZE_CHK_2                  (XDMAC_CC_CSIZE_CHK_2_Val << XDMAC_CC_CSIZE_Pos)     /**< (XDMAC_CC) 2 data transferred Position  */
#define XDMAC_CC_CSIZE_CHK_4                  (XDMAC_CC_CSIZE_CHK_4_Val << XDMAC_CC_CSIZE_Pos)     /**< (XDMAC_CC) 4 data transferred Position  */
#define XDMAC_CC_CSIZE_CHK_8                  (XDMAC_CC_CSIZE_CHK_8_Val << XDMAC_CC_CSIZE_Pos)     /**< (XDMAC_CC) 8 data transferred Position  */
#define XDMAC_CC_CSIZE_CHK_16                 (XDMAC_CC_CSIZE_CHK_16_Val << XDMAC_CC_CSIZE_Pos)    /**< (XDMAC_CC) 16 data transferred Position  */
#define XDMAC_CC_DWIDTH_Pos                   _U_(11)                                              /**< (XDMAC_CC) Channel Data Width Position */
#define XDMAC_CC_DWIDTH_Msk                   (_U_(0x3) << XDMAC_CC_DWIDTH_Pos)                    /**< (XDMAC_CC) Channel Data Width Mask */
#define XDMAC_CC_DWIDTH(value)                (XDMAC_CC_DWIDTH_Msk & ((value) << XDMAC_CC_DWIDTH_Pos))
#define   XDMAC_CC_DWIDTH_BYTE_Val            _U_(0x0)                                             /**< (XDMAC_CC) The data size is set to 8 bits  */
#define   XDMAC_CC_DWIDTH_HALFWORD_Val        _U_(0x1)                                             /**< (XDMAC_CC) The data size is set to 16 bits  */
#define   XDMAC_CC_DWIDTH_WORD_Val            _U_(0x2)                                             /**< (XDMAC_CC) The data size is set to 32 bits  */
#define   XDMAC_CC_DWIDTH_DWORD_Val           _U_(0x3)                                             /**< (XDMAC_CC) The data size is set to 64 bits  */
#define XDMAC_CC_DWIDTH_BYTE                  (XDMAC_CC_DWIDTH_BYTE_Val << XDMAC_CC_DWIDTH_Pos)    /**< (XDMAC_CC) The data size is set to 8 bits Position  */
#define XDMAC_CC_DWIDTH_HALFWORD              (XDMAC_CC_DWIDTH_HALFWORD_Val << XDMAC_CC_DWIDTH_Pos) /**< (XDMAC_CC) The data size is set to 16 bits Position  */
#define XDMAC_CC_DWIDTH_WORD                  (XDMAC_CC_DWIDTH_WORD_Val << XDMAC_CC_DWIDTH_Pos)    /**< (XDMAC_CC) The data size is set to 32 bits Position  */
#define XDMAC_CC_DWIDTH_DWORD                 (XDMAC_CC_DWIDTH_DWORD_Val << XDMAC_CC_DWIDTH_Pos)   /**< (XDMAC_CC) The data size is set to 64 bits Position  */
#define XDMAC_CC_SAM_Pos                      _U_(16)                                              /**< (XDMAC_CC) Channel Source Addressing Mode Position */
#define XDMAC_CC_SAM_Msk                      (_U_(0x3) << XDMAC_CC_SAM_Pos)                       /**< (XDMAC_CC) Channel Source Addressing Mode Mask */
#define XDMAC_CC_SAM(value)                   (XDMAC_CC_SAM_Msk & ((value) << XDMAC_CC_SAM_Pos))  
#define   XDMAC_CC_SAM_FIXED_AM_Val           _U_(0x0)                                             /**< (XDMAC_CC) The address remains unchanged.  */
#define   XDMAC_CC_SAM_INCREMENTED_AM_Val     _U_(0x1)                                             /**< (XDMAC_CC) The addressing mode is incremented (the increment size is set to the data size).  */
#define   XDMAC_CC_SAM_UBS_AM_Val             _U_(0x2)                                             /**< (XDMAC_CC) The microblock stride is added at the microblock boundary.  */
#define   XDMAC_CC_SAM_UBS_DS_AM_Val          _U_(0x3)                                             /**< (XDMAC_CC) The microblock stride is added at the microblock boundary, the data stride is added at the data boundary.  */
#define XDMAC_CC_SAM_FIXED_AM                 (XDMAC_CC_SAM_FIXED_AM_Val << XDMAC_CC_SAM_Pos)      /**< (XDMAC_CC) The address remains unchanged. Position  */
#define XDMAC_CC_SAM_INCREMENTED_AM           (XDMAC_CC_SAM_INCREMENTED_AM_Val << XDMAC_CC_SAM_Pos) /**< (XDMAC_CC) The addressing mode is incremented (the increment size is set to the data size). Position  */
#define XDMAC_CC_SAM_UBS_AM                   (XDMAC_CC_SAM_UBS_AM_Val << XDMAC_CC_SAM_Pos)        /**< (XDMAC_CC) The microblock stride is added at the microblock boundary. Position  */
#define XDMAC_CC_SAM_UBS_DS_AM                (XDMAC_CC_SAM_UBS_DS_AM_Val << XDMAC_CC_SAM_Pos)     /**< (XDMAC_CC) The microblock stride is added at the microblock boundary, the data stride is added at the data boundary. Position  */
#define XDMAC_CC_DAM_Pos                      _U_(18)                                              /**< (XDMAC_CC) Channel Destination Addressing Mode Position */
#define XDMAC_CC_DAM_Msk                      (_U_(0x3) << XDMAC_CC_DAM_Pos)                       /**< (XDMAC_CC) Channel Destination Addressing Mode Mask */
#define XDMAC_CC_DAM(value)                   (XDMAC_CC_DAM_Msk & ((value) << XDMAC_CC_DAM_Pos))  
#define   XDMAC_CC_DAM_FIXED_AM_Val           _U_(0x0)                                             /**< (XDMAC_CC) The address remains unchanged.  */
#define   XDMAC_CC_DAM_INCREMENTED_AM_Val     _U_(0x1)                                             /**< (XDMAC_CC) The addressing mode is incremented (the increment size is set to the data size).  */
#define   XDMAC_CC_DAM_UBS_AM_Val             _U_(0x2)                                             /**< (XDMAC_CC) The microblock stride is added at the microblock boundary.  */
#define   XDMAC_CC_DAM_UBS_DS_AM_Val          _U_(0x3)                                             /**< (XDMAC_CC) The microblock stride is added at the microblock boundary; the data stride is added at the data boundary.  */
#define XDMAC_CC_DAM_FIXED_AM                 (XDMAC_CC_DAM_FIXED_AM_Val << XDMAC_CC_DAM_Pos)      /**< (XDMAC_CC) The address remains unchanged. Position  */
#define XDMAC_CC_DAM_INCREMENTED_AM           (XDMAC_CC_DAM_INCREMENTED_AM_Val << XDMAC_CC_DAM_Pos) /**< (XDMAC_CC) The addressing mode is incremented (the increment size is set to the data size). Position  */
#define XDMAC_CC_DAM_UBS_AM                   (XDMAC_CC_DAM_UBS_AM_Val << XDMAC_CC_DAM_Pos)        /**< (XDMAC_CC) The microblock stride is added at the microblock boundary. Position  */
#define XDMAC_CC_DAM_UBS_DS_AM                (XDMAC_CC_DAM_UBS_DS_AM_Val << XDMAC_CC_DAM_Pos)     /**< (XDMAC_CC) The microblock stride is added at the microblock boundary; the data stride is added at the data boundary. Position  */
#define XDMAC_CC_INITD_Pos                    _U_(21)                                              /**< (XDMAC_CC) Channel Initialization Done (this bit is read-only) Position */
#define XDMAC_CC_INITD_Msk                    (_U_(0x1) << XDMAC_CC_INITD_Pos)                     /**< (XDMAC_CC) Channel Initialization Done (this bit is read-only) Mask */
#define XDMAC_CC_INITD(value)                 (XDMAC_CC_INITD_Msk & ((value) << XDMAC_CC_INITD_Pos))
#define   XDMAC_CC_INITD_IN_PROGRESS_Val      _U_(0x0)                                             /**< (XDMAC_CC) Channel initialization is in progress.  */
#define   XDMAC_CC_INITD_TERMINATED_Val       _U_(0x1)                                             /**< (XDMAC_CC) Channel initialization is completed.  */
#define XDMAC_CC_INITD_IN_PROGRESS            (XDMAC_CC_INITD_IN_PROGRESS_Val << XDMAC_CC_INITD_Pos) /**< (XDMAC_CC) Channel initialization is in progress. Position  */
#define XDMAC_CC_INITD_TERMINATED             (XDMAC_CC_INITD_TERMINATED_Val << XDMAC_CC_INITD_Pos) /**< (XDMAC_CC) Channel initialization is completed. Position  */
#define XDMAC_CC_RDIP_Pos                     _U_(22)                                              /**< (XDMAC_CC) Read in Progress (this bit is read-only) Position */
#define XDMAC_CC_RDIP_Msk                     (_U_(0x1) << XDMAC_CC_RDIP_Pos)                      /**< (XDMAC_CC) Read in Progress (this bit is read-only) Mask */
#define XDMAC_CC_RDIP(value)                  (XDMAC_CC_RDIP_Msk & ((value) << XDMAC_CC_RDIP_Pos))
#define   XDMAC_CC_RDIP_DONE_Val              _U_(0x0)                                             /**< (XDMAC_CC) No active read transaction on the bus.  */
#define   XDMAC_CC_RDIP_IN_PROGRESS_Val       _U_(0x1)                                             /**< (XDMAC_CC) A read transaction is in progress.  */
#define XDMAC_CC_RDIP_DONE                    (XDMAC_CC_RDIP_DONE_Val << XDMAC_CC_RDIP_Pos)        /**< (XDMAC_CC) No active read transaction on the bus. Position  */
#define XDMAC_CC_RDIP_IN_PROGRESS             (XDMAC_CC_RDIP_IN_PROGRESS_Val << XDMAC_CC_RDIP_Pos) /**< (XDMAC_CC) A read transaction is in progress. Position  */
#define XDMAC_CC_WRIP_Pos                     _U_(23)                                              /**< (XDMAC_CC) Write in Progress (this bit is read-only) Position */
#define XDMAC_CC_WRIP_Msk                     (_U_(0x1) << XDMAC_CC_WRIP_Pos)                      /**< (XDMAC_CC) Write in Progress (this bit is read-only) Mask */
#define XDMAC_CC_WRIP(value)                  (XDMAC_CC_WRIP_Msk & ((value) << XDMAC_CC_WRIP_Pos))
#define   XDMAC_CC_WRIP_DONE_Val              _U_(0x0)                                             /**< (XDMAC_CC) No active write transaction on the bus.  */
#define   XDMAC_CC_WRIP_IN_PROGRESS_Val       _U_(0x1)                                             /**< (XDMAC_CC) A write transaction is in progress.  */
#define XDMAC_CC_WRIP_DONE                    (XDMAC_CC_WRIP_DONE_Val << XDMAC_CC_WRIP_Pos)        /**< (XDMAC_CC) No active write transaction on the bus. Position  */
#define XDMAC_CC_WRIP_IN_PROGRESS             (XDMAC_CC_WRIP_IN_PROGRESS_Val << XDMAC_CC_WRIP_Pos) /**< (XDMAC_CC) A write transaction is in progress. Position  */
#define XDMAC_CC_PERID_Pos                    _U_(24)                                              /**< (XDMAC_CC) Channel Peripheral Hardware Request Line Identifier Position */
#define XDMAC_CC_PERID_Msk                    (_U_(0x7F) << XDMAC_CC_PERID_Pos)                    /**< (XDMAC_CC) Channel Peripheral Hardware Request Line Identifier Mask */
#define XDMAC_CC_PERID(value)                 (XDMAC_CC_PERID_Msk & ((value) << XDMAC_CC_PERID_Pos))
#define XDMAC_CC_Msk                          _U_(0x7FEF1FF7)                                      /**< (XDMAC_CC) Register Mask  */


/* -------- XDMAC_CDS_MSP : (XDMAC Offset: 0x2C) (R/W 32) Channel Data Stride Memory Set Pattern  -------- */
#define XDMAC_CDS_MSP_RESETVALUE              _U_(0x00)                                            /**<  (XDMAC_CDS_MSP) Channel Data Stride Memory Set Pattern   Reset Value */

#define XDMAC_CDS_MSP_SDS_MSP_Pos             _U_(0)                                               /**< (XDMAC_CDS_MSP) Channel Source Data stride or Memory Set Pattern Position */
#define XDMAC_CDS_MSP_SDS_MSP_Msk             (_U_(0xFFFF) << XDMAC_CDS_MSP_SDS_MSP_Pos)           /**< (XDMAC_CDS_MSP) Channel Source Data stride or Memory Set Pattern Mask */
#define XDMAC_CDS_MSP_SDS_MSP(value)          (XDMAC_CDS_MSP_SDS_MSP_Msk & ((value) << XDMAC_CDS_MSP_SDS_MSP_Pos))
#define XDMAC_CDS_MSP_DDS_MSP_Pos             _U_(16)                                              /**< (XDMAC_CDS_MSP) Channel Destination Data Stride or Memory Set Pattern Position */
#define XDMAC_CDS_MSP_DDS_MSP_Msk             (_U_(0xFFFF) << XDMAC_CDS_MSP_DDS_MSP_Pos)           /**< (XDMAC_CDS_MSP) Channel Destination Data Stride or Memory Set Pattern Mask */
#define XDMAC_CDS_MSP_DDS_MSP(value)          (XDMAC_CDS_MSP_DDS_MSP_Msk & ((value) << XDMAC_CDS_MSP_DDS_MSP_Pos))
#define XDMAC_CDS_MSP_Msk                     _U_(0xFFFFFFFF)                                      /**< (XDMAC_CDS_MSP) Register Mask  */


/* -------- XDMAC_CSUS : (XDMAC Offset: 0x30) (R/W 32) Channel Source Microblock Stride  -------- */
#define XDMAC_CSUS_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_CSUS) Channel Source Microblock Stride   Reset Value */

#define XDMAC_CSUS_SUBS_Pos                   _U_(0)                                               /**< (XDMAC_CSUS) Channel Source Microblock Stride Position */
#define XDMAC_CSUS_SUBS_Msk                   (_U_(0xFFFFFF) << XDMAC_CSUS_SUBS_Pos)               /**< (XDMAC_CSUS) Channel Source Microblock Stride Mask */
#define XDMAC_CSUS_SUBS(value)                (XDMAC_CSUS_SUBS_Msk & ((value) << XDMAC_CSUS_SUBS_Pos))
#define XDMAC_CSUS_Msk                        _U_(0x00FFFFFF)                                      /**< (XDMAC_CSUS) Register Mask  */


/* -------- XDMAC_CDUS : (XDMAC Offset: 0x34) (R/W 32) Channel Destination Microblock Stride  -------- */
#define XDMAC_CDUS_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_CDUS) Channel Destination Microblock Stride   Reset Value */

#define XDMAC_CDUS_DUBS_Pos                   _U_(0)                                               /**< (XDMAC_CDUS) Channel Destination Microblock Stride Position */
#define XDMAC_CDUS_DUBS_Msk                   (_U_(0xFFFFFF) << XDMAC_CDUS_DUBS_Pos)               /**< (XDMAC_CDUS) Channel Destination Microblock Stride Mask */
#define XDMAC_CDUS_DUBS(value)                (XDMAC_CDUS_DUBS_Msk & ((value) << XDMAC_CDUS_DUBS_Pos))
#define XDMAC_CDUS_Msk                        _U_(0x00FFFFFF)                                      /**< (XDMAC_CDUS) Register Mask  */


/* -------- XDMAC_CTCS : (XDMAC Offset: 0x38) ( R/ 32) Channel Transfer Counter Status Register  -------- */
#define XDMAC_CTCS_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_CTCS) Channel Transfer Counter Status Register   Reset Value */

#define XDMAC_CTCS_TC_Pos                     _U_(0)                                               /**< (XDMAC_CTCS) Channel Transfer Count Position */
#define XDMAC_CTCS_TC_Msk                     (_U_(0xFFFFFF) << XDMAC_CTCS_TC_Pos)                 /**< (XDMAC_CTCS) Channel Transfer Count Mask */
#define XDMAC_CTCS_TC(value)                  (XDMAC_CTCS_TC_Msk & ((value) << XDMAC_CTCS_TC_Pos))
#define   XDMAC_CTCS_TC_1_Val                 _U_(0x1)                                             /**< (XDMAC_CTCS) Read the XDMAC_CTCSx.TC field to sample the number of bytes received by the XDMA.  */
#define   XDMAC_CTCS_TC_2_Val                 _U_(0x2)                                             /**< (XDMAC_CTCS) Perform a software flush of the channel by writing one to the XDMAC_GSWF register. This will push bytes from the internal DMA FIFO to the external memory and return an interrupt when the bytes can be read by the CPU.  */
#define XDMAC_CTCS_TC_1                       (XDMAC_CTCS_TC_1_Val << XDMAC_CTCS_TC_Pos)           /**< (XDMAC_CTCS) Read the XDMAC_CTCSx.TC field to sample the number of bytes received by the XDMA. Position  */
#define XDMAC_CTCS_TC_2                       (XDMAC_CTCS_TC_2_Val << XDMAC_CTCS_TC_Pos)           /**< (XDMAC_CTCS) Perform a software flush of the channel by writing one to the XDMAC_GSWF register. This will push bytes from the internal DMA FIFO to the external memory and return an interrupt when the bytes can be read by the CPU. Position  */
#define XDMAC_CTCS_Msk                        _U_(0x00FFFFFF)                                      /**< (XDMAC_CTCS) Register Mask  */


/* -------- XDMAC_GTYPE : (XDMAC Offset: 0x00) ( R/ 32) Global Type Register -------- */
#define XDMAC_GTYPE_NB_CH_Pos                 _U_(0)                                               /**< (XDMAC_GTYPE) Number of Channels Minus One Position */
#define XDMAC_GTYPE_NB_CH_Msk                 (_U_(0x1F) << XDMAC_GTYPE_NB_CH_Pos)                 /**< (XDMAC_GTYPE) Number of Channels Minus One Mask */
#define XDMAC_GTYPE_NB_CH(value)              (XDMAC_GTYPE_NB_CH_Msk & ((value) << XDMAC_GTYPE_NB_CH_Pos))
#define XDMAC_GTYPE_FIFO_SZ_Pos               _U_(5)                                               /**< (XDMAC_GTYPE) Number of Bytes Position */
#define XDMAC_GTYPE_FIFO_SZ_Msk               (_U_(0x7FF) << XDMAC_GTYPE_FIFO_SZ_Pos)              /**< (XDMAC_GTYPE) Number of Bytes Mask */
#define XDMAC_GTYPE_FIFO_SZ(value)            (XDMAC_GTYPE_FIFO_SZ_Msk & ((value) << XDMAC_GTYPE_FIFO_SZ_Pos))
#define XDMAC_GTYPE_NB_REQ_Pos                _U_(16)                                              /**< (XDMAC_GTYPE) Number of Peripheral Requests Minus One Position */
#define XDMAC_GTYPE_NB_REQ_Msk                (_U_(0x7F) << XDMAC_GTYPE_NB_REQ_Pos)                /**< (XDMAC_GTYPE) Number of Peripheral Requests Minus One Mask */
#define XDMAC_GTYPE_NB_REQ(value)             (XDMAC_GTYPE_NB_REQ_Msk & ((value) << XDMAC_GTYPE_NB_REQ_Pos))
#define XDMAC_GTYPE_Msk                       _U_(0x007FFFFF)                                      /**< (XDMAC_GTYPE) Register Mask  */


/* -------- XDMAC_GCFG : (XDMAC Offset: 0x04) (R/W 32) Global Configuration Register -------- */
#define XDMAC_GCFG_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_GCFG) Global Configuration Register  Reset Value */

#define XDMAC_GCFG_CGDISREG_Pos               _U_(0)                                               /**< (XDMAC_GCFG) Configuration Registers Clock Gating Disable Position */
#define XDMAC_GCFG_CGDISREG_Msk               (_U_(0x1) << XDMAC_GCFG_CGDISREG_Pos)                /**< (XDMAC_GCFG) Configuration Registers Clock Gating Disable Mask */
#define XDMAC_GCFG_CGDISREG(value)            (XDMAC_GCFG_CGDISREG_Msk & ((value) << XDMAC_GCFG_CGDISREG_Pos))
#define   XDMAC_GCFG_CGDISREG_0_Val           _U_(0x0)                                             /**< (XDMAC_GCFG) The automatic clock gating is enabled for the configuration registers.  */
#define   XDMAC_GCFG_CGDISREG_1_Val           _U_(0x1)                                             /**< (XDMAC_GCFG) The automatic clock gating is disabled for the configuration registers.  */
#define XDMAC_GCFG_CGDISREG_0                 (XDMAC_GCFG_CGDISREG_0_Val << XDMAC_GCFG_CGDISREG_Pos) /**< (XDMAC_GCFG) The automatic clock gating is enabled for the configuration registers. Position  */
#define XDMAC_GCFG_CGDISREG_1                 (XDMAC_GCFG_CGDISREG_1_Val << XDMAC_GCFG_CGDISREG_Pos) /**< (XDMAC_GCFG) The automatic clock gating is disabled for the configuration registers. Position  */
#define XDMAC_GCFG_CGDISPIPE_Pos              _U_(1)                                               /**< (XDMAC_GCFG) Pipeline Clock Gating Disable Position */
#define XDMAC_GCFG_CGDISPIPE_Msk              (_U_(0x1) << XDMAC_GCFG_CGDISPIPE_Pos)               /**< (XDMAC_GCFG) Pipeline Clock Gating Disable Mask */
#define XDMAC_GCFG_CGDISPIPE(value)           (XDMAC_GCFG_CGDISPIPE_Msk & ((value) << XDMAC_GCFG_CGDISPIPE_Pos))
#define   XDMAC_GCFG_CGDISPIPE_0_Val          _U_(0x0)                                             /**< (XDMAC_GCFG) The automatic clock gating is enabled for the main pipeline.  */
#define   XDMAC_GCFG_CGDISPIPE_1_Val          _U_(0x1)                                             /**< (XDMAC_GCFG) The automatic clock gating is disabled for the main pipeline.  */
#define XDMAC_GCFG_CGDISPIPE_0                (XDMAC_GCFG_CGDISPIPE_0_Val << XDMAC_GCFG_CGDISPIPE_Pos) /**< (XDMAC_GCFG) The automatic clock gating is enabled for the main pipeline. Position  */
#define XDMAC_GCFG_CGDISPIPE_1                (XDMAC_GCFG_CGDISPIPE_1_Val << XDMAC_GCFG_CGDISPIPE_Pos) /**< (XDMAC_GCFG) The automatic clock gating is disabled for the main pipeline. Position  */
#define XDMAC_GCFG_CGDISFIFO_Pos              _U_(2)                                               /**< (XDMAC_GCFG) FIFO Clock Gating Disable Position */
#define XDMAC_GCFG_CGDISFIFO_Msk              (_U_(0x1) << XDMAC_GCFG_CGDISFIFO_Pos)               /**< (XDMAC_GCFG) FIFO Clock Gating Disable Mask */
#define XDMAC_GCFG_CGDISFIFO(value)           (XDMAC_GCFG_CGDISFIFO_Msk & ((value) << XDMAC_GCFG_CGDISFIFO_Pos))
#define   XDMAC_GCFG_CGDISFIFO_0_Val          _U_(0x0)                                             /**< (XDMAC_GCFG) The automatic clock gating is enabled for the main FIFO.  */
#define   XDMAC_GCFG_CGDISFIFO_1_Val          _U_(0x1)                                             /**< (XDMAC_GCFG) The automatic clock gating is disabled for the main FIFO.  */
#define XDMAC_GCFG_CGDISFIFO_0                (XDMAC_GCFG_CGDISFIFO_0_Val << XDMAC_GCFG_CGDISFIFO_Pos) /**< (XDMAC_GCFG) The automatic clock gating is enabled for the main FIFO. Position  */
#define XDMAC_GCFG_CGDISFIFO_1                (XDMAC_GCFG_CGDISFIFO_1_Val << XDMAC_GCFG_CGDISFIFO_Pos) /**< (XDMAC_GCFG) The automatic clock gating is disabled for the main FIFO. Position  */
#define XDMAC_GCFG_CGDISIF_Pos                _U_(3)                                               /**< (XDMAC_GCFG) Bus Interface Clock Gating Disable Position */
#define XDMAC_GCFG_CGDISIF_Msk                (_U_(0x1) << XDMAC_GCFG_CGDISIF_Pos)                 /**< (XDMAC_GCFG) Bus Interface Clock Gating Disable Mask */
#define XDMAC_GCFG_CGDISIF(value)             (XDMAC_GCFG_CGDISIF_Msk & ((value) << XDMAC_GCFG_CGDISIF_Pos))
#define   XDMAC_GCFG_CGDISIF_0_Val            _U_(0x0)                                             /**< (XDMAC_GCFG) The automatic clock gating is enabled for the system bus interface.  */
#define   XDMAC_GCFG_CGDISIF_1_Val            _U_(0x1)                                             /**< (XDMAC_GCFG) The automatic clock gating is disabled for the system bus interface.  */
#define XDMAC_GCFG_CGDISIF_0                  (XDMAC_GCFG_CGDISIF_0_Val << XDMAC_GCFG_CGDISIF_Pos) /**< (XDMAC_GCFG) The automatic clock gating is enabled for the system bus interface. Position  */
#define XDMAC_GCFG_CGDISIF_1                  (XDMAC_GCFG_CGDISIF_1_Val << XDMAC_GCFG_CGDISIF_Pos) /**< (XDMAC_GCFG) The automatic clock gating is disabled for the system bus interface. Position  */
#define XDMAC_GCFG_WRHP_Pos                   _U_(4)                                               /**< (XDMAC_GCFG) Write Queue High Priority Outstanding Limit Position */
#define XDMAC_GCFG_WRHP_Msk                   (_U_(0xF) << XDMAC_GCFG_WRHP_Pos)                    /**< (XDMAC_GCFG) Write Queue High Priority Outstanding Limit Mask */
#define XDMAC_GCFG_WRHP(value)                (XDMAC_GCFG_WRHP_Msk & ((value) << XDMAC_GCFG_WRHP_Pos))
#define XDMAC_GCFG_WRMP_Pos                   _U_(8)                                               /**< (XDMAC_GCFG) Write Queue Medium Priority Outstanding Limit Position */
#define XDMAC_GCFG_WRMP_Msk                   (_U_(0xF) << XDMAC_GCFG_WRMP_Pos)                    /**< (XDMAC_GCFG) Write Queue Medium Priority Outstanding Limit Mask */
#define XDMAC_GCFG_WRMP(value)                (XDMAC_GCFG_WRMP_Msk & ((value) << XDMAC_GCFG_WRMP_Pos))
#define XDMAC_GCFG_WRLP_Pos                   _U_(12)                                              /**< (XDMAC_GCFG) Write Queue Low Priority Outstanding Limit Position */
#define XDMAC_GCFG_WRLP_Msk                   (_U_(0xF) << XDMAC_GCFG_WRLP_Pos)                    /**< (XDMAC_GCFG) Write Queue Low Priority Outstanding Limit Mask */
#define XDMAC_GCFG_WRLP(value)                (XDMAC_GCFG_WRLP_Msk & ((value) << XDMAC_GCFG_WRLP_Pos))
#define XDMAC_GCFG_RDHP_Pos                   _U_(16)                                              /**< (XDMAC_GCFG)  Position */
#define XDMAC_GCFG_RDHP_Msk                   (_U_(0xF) << XDMAC_GCFG_RDHP_Pos)                    /**< (XDMAC_GCFG)  Mask */
#define XDMAC_GCFG_RDHP(value)                (XDMAC_GCFG_RDHP_Msk & ((value) << XDMAC_GCFG_RDHP_Pos))
#define XDMAC_GCFG_RDMP_Pos                   _U_(20)                                              /**< (XDMAC_GCFG) Read Queue Medium Priority Outstanding Limit Position */
#define XDMAC_GCFG_RDMP_Msk                   (_U_(0xF) << XDMAC_GCFG_RDMP_Pos)                    /**< (XDMAC_GCFG) Read Queue Medium Priority Outstanding Limit Mask */
#define XDMAC_GCFG_RDMP(value)                (XDMAC_GCFG_RDMP_Msk & ((value) << XDMAC_GCFG_RDMP_Pos))
#define XDMAC_GCFG_RDLP_Pos                   _U_(24)                                              /**< (XDMAC_GCFG) Read Queue Low Priority Outstanding Limit Position */
#define XDMAC_GCFG_RDLP_Msk                   (_U_(0xF) << XDMAC_GCFG_RDLP_Pos)                    /**< (XDMAC_GCFG) Read Queue Low Priority Outstanding Limit Mask */
#define XDMAC_GCFG_RDLP(value)                (XDMAC_GCFG_RDLP_Msk & ((value) << XDMAC_GCFG_RDLP_Pos))
#define XDMAC_GCFG_RDSG_Pos                   _U_(28)                                              /**< (XDMAC_GCFG) Read Queue Scatter Gather Outstanding Limit Position */
#define XDMAC_GCFG_RDSG_Msk                   (_U_(0xF) << XDMAC_GCFG_RDSG_Pos)                    /**< (XDMAC_GCFG) Read Queue Scatter Gather Outstanding Limit Mask */
#define XDMAC_GCFG_RDSG(value)                (XDMAC_GCFG_RDSG_Msk & ((value) << XDMAC_GCFG_RDSG_Pos))
#define XDMAC_GCFG_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GCFG) Register Mask  */


/* -------- XDMAC_GWAC : (XDMAC Offset: 0x08) (R/W 32) Global Weighted Arbiter Configuration Register -------- */
#define XDMAC_GWAC_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_GWAC) Global Weighted Arbiter Configuration Register  Reset Value */

#define XDMAC_GWAC_PW0_Pos                    _U_(0)                                               /**< (XDMAC_GWAC) Pool Weight 0 Position */
#define XDMAC_GWAC_PW0_Msk                    (_U_(0xF) << XDMAC_GWAC_PW0_Pos)                     /**< (XDMAC_GWAC) Pool Weight 0 Mask */
#define XDMAC_GWAC_PW0(value)                 (XDMAC_GWAC_PW0_Msk & ((value) << XDMAC_GWAC_PW0_Pos))
#define XDMAC_GWAC_PW1_Pos                    _U_(4)                                               /**< (XDMAC_GWAC) Pool Weight 1 Position */
#define XDMAC_GWAC_PW1_Msk                    (_U_(0xF) << XDMAC_GWAC_PW1_Pos)                     /**< (XDMAC_GWAC) Pool Weight 1 Mask */
#define XDMAC_GWAC_PW1(value)                 (XDMAC_GWAC_PW1_Msk & ((value) << XDMAC_GWAC_PW1_Pos))
#define XDMAC_GWAC_PW2_Pos                    _U_(8)                                               /**< (XDMAC_GWAC) Pool Weight 2 Position */
#define XDMAC_GWAC_PW2_Msk                    (_U_(0xF) << XDMAC_GWAC_PW2_Pos)                     /**< (XDMAC_GWAC) Pool Weight 2 Mask */
#define XDMAC_GWAC_PW2(value)                 (XDMAC_GWAC_PW2_Msk & ((value) << XDMAC_GWAC_PW2_Pos))
#define XDMAC_GWAC_PW3_Pos                    _U_(12)                                              /**< (XDMAC_GWAC) Pool Weight 3 Position */
#define XDMAC_GWAC_PW3_Msk                    (_U_(0xF) << XDMAC_GWAC_PW3_Pos)                     /**< (XDMAC_GWAC) Pool Weight 3 Mask */
#define XDMAC_GWAC_PW3(value)                 (XDMAC_GWAC_PW3_Msk & ((value) << XDMAC_GWAC_PW3_Pos))
#define XDMAC_GWAC_Msk                        _U_(0x0000FFFF)                                      /**< (XDMAC_GWAC) Register Mask  */


/* -------- XDMAC_GIE : (XDMAC Offset: 0x0C) ( /W 32) Global Interrupt Enable Register -------- */
#define XDMAC_GIE_IE0_Pos                     _U_(0)                                               /**< (XDMAC_GIE) XDMAC Channel 0 Interrupt Enable Position */
#define XDMAC_GIE_IE0_Msk                     (_U_(0x1) << XDMAC_GIE_IE0_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 0 Interrupt Enable Mask */
#define XDMAC_GIE_IE0(value)                  (XDMAC_GIE_IE0_Msk & ((value) << XDMAC_GIE_IE0_Pos))
#define   XDMAC_GIE_IE0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE0_0                       (XDMAC_GIE_IE0_0_Val << XDMAC_GIE_IE0_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE0_1                       (XDMAC_GIE_IE0_1_Val << XDMAC_GIE_IE0_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE1_Pos                     _U_(1)                                               /**< (XDMAC_GIE) XDMAC Channel 1 Interrupt Enable Position */
#define XDMAC_GIE_IE1_Msk                     (_U_(0x1) << XDMAC_GIE_IE1_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 1 Interrupt Enable Mask */
#define XDMAC_GIE_IE1(value)                  (XDMAC_GIE_IE1_Msk & ((value) << XDMAC_GIE_IE1_Pos))
#define   XDMAC_GIE_IE1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE1_0                       (XDMAC_GIE_IE1_0_Val << XDMAC_GIE_IE1_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE1_1                       (XDMAC_GIE_IE1_1_Val << XDMAC_GIE_IE1_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE2_Pos                     _U_(2)                                               /**< (XDMAC_GIE) XDMAC Channel 2 Interrupt Enable Position */
#define XDMAC_GIE_IE2_Msk                     (_U_(0x1) << XDMAC_GIE_IE2_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 2 Interrupt Enable Mask */
#define XDMAC_GIE_IE2(value)                  (XDMAC_GIE_IE2_Msk & ((value) << XDMAC_GIE_IE2_Pos))
#define   XDMAC_GIE_IE2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE2_0                       (XDMAC_GIE_IE2_0_Val << XDMAC_GIE_IE2_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE2_1                       (XDMAC_GIE_IE2_1_Val << XDMAC_GIE_IE2_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE3_Pos                     _U_(3)                                               /**< (XDMAC_GIE) XDMAC Channel 3 Interrupt Enable Position */
#define XDMAC_GIE_IE3_Msk                     (_U_(0x1) << XDMAC_GIE_IE3_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 3 Interrupt Enable Mask */
#define XDMAC_GIE_IE3(value)                  (XDMAC_GIE_IE3_Msk & ((value) << XDMAC_GIE_IE3_Pos))
#define   XDMAC_GIE_IE3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE3_0                       (XDMAC_GIE_IE3_0_Val << XDMAC_GIE_IE3_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE3_1                       (XDMAC_GIE_IE3_1_Val << XDMAC_GIE_IE3_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE4_Pos                     _U_(4)                                               /**< (XDMAC_GIE) XDMAC Channel 4 Interrupt Enable Position */
#define XDMAC_GIE_IE4_Msk                     (_U_(0x1) << XDMAC_GIE_IE4_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 4 Interrupt Enable Mask */
#define XDMAC_GIE_IE4(value)                  (XDMAC_GIE_IE4_Msk & ((value) << XDMAC_GIE_IE4_Pos))
#define   XDMAC_GIE_IE4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE4_0                       (XDMAC_GIE_IE4_0_Val << XDMAC_GIE_IE4_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE4_1                       (XDMAC_GIE_IE4_1_Val << XDMAC_GIE_IE4_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE5_Pos                     _U_(5)                                               /**< (XDMAC_GIE) XDMAC Channel 5 Interrupt Enable Position */
#define XDMAC_GIE_IE5_Msk                     (_U_(0x1) << XDMAC_GIE_IE5_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 5 Interrupt Enable Mask */
#define XDMAC_GIE_IE5(value)                  (XDMAC_GIE_IE5_Msk & ((value) << XDMAC_GIE_IE5_Pos))
#define   XDMAC_GIE_IE5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE5_0                       (XDMAC_GIE_IE5_0_Val << XDMAC_GIE_IE5_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE5_1                       (XDMAC_GIE_IE5_1_Val << XDMAC_GIE_IE5_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE6_Pos                     _U_(6)                                               /**< (XDMAC_GIE) XDMAC Channel 6 Interrupt Enable Position */
#define XDMAC_GIE_IE6_Msk                     (_U_(0x1) << XDMAC_GIE_IE6_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 6 Interrupt Enable Mask */
#define XDMAC_GIE_IE6(value)                  (XDMAC_GIE_IE6_Msk & ((value) << XDMAC_GIE_IE6_Pos))
#define   XDMAC_GIE_IE6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE6_0                       (XDMAC_GIE_IE6_0_Val << XDMAC_GIE_IE6_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE6_1                       (XDMAC_GIE_IE6_1_Val << XDMAC_GIE_IE6_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE7_Pos                     _U_(7)                                               /**< (XDMAC_GIE) XDMAC Channel 7 Interrupt Enable Position */
#define XDMAC_GIE_IE7_Msk                     (_U_(0x1) << XDMAC_GIE_IE7_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 7 Interrupt Enable Mask */
#define XDMAC_GIE_IE7(value)                  (XDMAC_GIE_IE7_Msk & ((value) << XDMAC_GIE_IE7_Pos))
#define   XDMAC_GIE_IE7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE7_0                       (XDMAC_GIE_IE7_0_Val << XDMAC_GIE_IE7_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE7_1                       (XDMAC_GIE_IE7_1_Val << XDMAC_GIE_IE7_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE8_Pos                     _U_(8)                                               /**< (XDMAC_GIE) XDMAC Channel 8 Interrupt Enable Position */
#define XDMAC_GIE_IE8_Msk                     (_U_(0x1) << XDMAC_GIE_IE8_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 8 Interrupt Enable Mask */
#define XDMAC_GIE_IE8(value)                  (XDMAC_GIE_IE8_Msk & ((value) << XDMAC_GIE_IE8_Pos))
#define   XDMAC_GIE_IE8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE8_0                       (XDMAC_GIE_IE8_0_Val << XDMAC_GIE_IE8_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE8_1                       (XDMAC_GIE_IE8_1_Val << XDMAC_GIE_IE8_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE9_Pos                     _U_(9)                                               /**< (XDMAC_GIE) XDMAC Channel 9 Interrupt Enable Position */
#define XDMAC_GIE_IE9_Msk                     (_U_(0x1) << XDMAC_GIE_IE9_Pos)                      /**< (XDMAC_GIE) XDMAC Channel 9 Interrupt Enable Mask */
#define XDMAC_GIE_IE9(value)                  (XDMAC_GIE_IE9_Msk & ((value) << XDMAC_GIE_IE9_Pos))
#define   XDMAC_GIE_IE9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE9_0                       (XDMAC_GIE_IE9_0_Val << XDMAC_GIE_IE9_Pos)           /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE9_1                       (XDMAC_GIE_IE9_1_Val << XDMAC_GIE_IE9_Pos)           /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE10_Pos                    _U_(10)                                              /**< (XDMAC_GIE) XDMAC Channel 10 Interrupt Enable Position */
#define XDMAC_GIE_IE10_Msk                    (_U_(0x1) << XDMAC_GIE_IE10_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 10 Interrupt Enable Mask */
#define XDMAC_GIE_IE10(value)                 (XDMAC_GIE_IE10_Msk & ((value) << XDMAC_GIE_IE10_Pos))
#define   XDMAC_GIE_IE10_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE10_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE10_0                      (XDMAC_GIE_IE10_0_Val << XDMAC_GIE_IE10_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE10_1                      (XDMAC_GIE_IE10_1_Val << XDMAC_GIE_IE10_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE11_Pos                    _U_(11)                                              /**< (XDMAC_GIE) XDMAC Channel 11 Interrupt Enable Position */
#define XDMAC_GIE_IE11_Msk                    (_U_(0x1) << XDMAC_GIE_IE11_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 11 Interrupt Enable Mask */
#define XDMAC_GIE_IE11(value)                 (XDMAC_GIE_IE11_Msk & ((value) << XDMAC_GIE_IE11_Pos))
#define   XDMAC_GIE_IE11_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE11_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE11_0                      (XDMAC_GIE_IE11_0_Val << XDMAC_GIE_IE11_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE11_1                      (XDMAC_GIE_IE11_1_Val << XDMAC_GIE_IE11_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE12_Pos                    _U_(12)                                              /**< (XDMAC_GIE) XDMAC Channel 12 Interrupt Enable Position */
#define XDMAC_GIE_IE12_Msk                    (_U_(0x1) << XDMAC_GIE_IE12_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 12 Interrupt Enable Mask */
#define XDMAC_GIE_IE12(value)                 (XDMAC_GIE_IE12_Msk & ((value) << XDMAC_GIE_IE12_Pos))
#define   XDMAC_GIE_IE12_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE12_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE12_0                      (XDMAC_GIE_IE12_0_Val << XDMAC_GIE_IE12_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE12_1                      (XDMAC_GIE_IE12_1_Val << XDMAC_GIE_IE12_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE13_Pos                    _U_(13)                                              /**< (XDMAC_GIE) XDMAC Channel 13 Interrupt Enable Position */
#define XDMAC_GIE_IE13_Msk                    (_U_(0x1) << XDMAC_GIE_IE13_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 13 Interrupt Enable Mask */
#define XDMAC_GIE_IE13(value)                 (XDMAC_GIE_IE13_Msk & ((value) << XDMAC_GIE_IE13_Pos))
#define   XDMAC_GIE_IE13_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE13_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE13_0                      (XDMAC_GIE_IE13_0_Val << XDMAC_GIE_IE13_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE13_1                      (XDMAC_GIE_IE13_1_Val << XDMAC_GIE_IE13_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE14_Pos                    _U_(14)                                              /**< (XDMAC_GIE) XDMAC Channel 14 Interrupt Enable Position */
#define XDMAC_GIE_IE14_Msk                    (_U_(0x1) << XDMAC_GIE_IE14_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 14 Interrupt Enable Mask */
#define XDMAC_GIE_IE14(value)                 (XDMAC_GIE_IE14_Msk & ((value) << XDMAC_GIE_IE14_Pos))
#define   XDMAC_GIE_IE14_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE14_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE14_0                      (XDMAC_GIE_IE14_0_Val << XDMAC_GIE_IE14_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE14_1                      (XDMAC_GIE_IE14_1_Val << XDMAC_GIE_IE14_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE15_Pos                    _U_(15)                                              /**< (XDMAC_GIE) XDMAC Channel 15 Interrupt Enable Position */
#define XDMAC_GIE_IE15_Msk                    (_U_(0x1) << XDMAC_GIE_IE15_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 15 Interrupt Enable Mask */
#define XDMAC_GIE_IE15(value)                 (XDMAC_GIE_IE15_Msk & ((value) << XDMAC_GIE_IE15_Pos))
#define   XDMAC_GIE_IE15_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE15_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE15_0                      (XDMAC_GIE_IE15_0_Val << XDMAC_GIE_IE15_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE15_1                      (XDMAC_GIE_IE15_1_Val << XDMAC_GIE_IE15_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE16_Pos                    _U_(16)                                              /**< (XDMAC_GIE) XDMAC Channel 16 Interrupt Enable Position */
#define XDMAC_GIE_IE16_Msk                    (_U_(0x1) << XDMAC_GIE_IE16_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 16 Interrupt Enable Mask */
#define XDMAC_GIE_IE16(value)                 (XDMAC_GIE_IE16_Msk & ((value) << XDMAC_GIE_IE16_Pos))
#define   XDMAC_GIE_IE16_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE16_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE16_0                      (XDMAC_GIE_IE16_0_Val << XDMAC_GIE_IE16_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE16_1                      (XDMAC_GIE_IE16_1_Val << XDMAC_GIE_IE16_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE17_Pos                    _U_(17)                                              /**< (XDMAC_GIE) XDMAC Channel 17 Interrupt Enable Position */
#define XDMAC_GIE_IE17_Msk                    (_U_(0x1) << XDMAC_GIE_IE17_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 17 Interrupt Enable Mask */
#define XDMAC_GIE_IE17(value)                 (XDMAC_GIE_IE17_Msk & ((value) << XDMAC_GIE_IE17_Pos))
#define   XDMAC_GIE_IE17_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE17_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE17_0                      (XDMAC_GIE_IE17_0_Val << XDMAC_GIE_IE17_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE17_1                      (XDMAC_GIE_IE17_1_Val << XDMAC_GIE_IE17_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE18_Pos                    _U_(18)                                              /**< (XDMAC_GIE) XDMAC Channel 18 Interrupt Enable Position */
#define XDMAC_GIE_IE18_Msk                    (_U_(0x1) << XDMAC_GIE_IE18_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 18 Interrupt Enable Mask */
#define XDMAC_GIE_IE18(value)                 (XDMAC_GIE_IE18_Msk & ((value) << XDMAC_GIE_IE18_Pos))
#define   XDMAC_GIE_IE18_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE18_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE18_0                      (XDMAC_GIE_IE18_0_Val << XDMAC_GIE_IE18_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE18_1                      (XDMAC_GIE_IE18_1_Val << XDMAC_GIE_IE18_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE19_Pos                    _U_(19)                                              /**< (XDMAC_GIE) XDMAC Channel 19 Interrupt Enable Position */
#define XDMAC_GIE_IE19_Msk                    (_U_(0x1) << XDMAC_GIE_IE19_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 19 Interrupt Enable Mask */
#define XDMAC_GIE_IE19(value)                 (XDMAC_GIE_IE19_Msk & ((value) << XDMAC_GIE_IE19_Pos))
#define   XDMAC_GIE_IE19_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE19_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE19_0                      (XDMAC_GIE_IE19_0_Val << XDMAC_GIE_IE19_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE19_1                      (XDMAC_GIE_IE19_1_Val << XDMAC_GIE_IE19_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE20_Pos                    _U_(20)                                              /**< (XDMAC_GIE) XDMAC Channel 20 Interrupt Enable Position */
#define XDMAC_GIE_IE20_Msk                    (_U_(0x1) << XDMAC_GIE_IE20_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 20 Interrupt Enable Mask */
#define XDMAC_GIE_IE20(value)                 (XDMAC_GIE_IE20_Msk & ((value) << XDMAC_GIE_IE20_Pos))
#define   XDMAC_GIE_IE20_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE20_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE20_0                      (XDMAC_GIE_IE20_0_Val << XDMAC_GIE_IE20_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE20_1                      (XDMAC_GIE_IE20_1_Val << XDMAC_GIE_IE20_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE21_Pos                    _U_(21)                                              /**< (XDMAC_GIE) XDMAC Channel 21 Interrupt Enable Position */
#define XDMAC_GIE_IE21_Msk                    (_U_(0x1) << XDMAC_GIE_IE21_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 21 Interrupt Enable Mask */
#define XDMAC_GIE_IE21(value)                 (XDMAC_GIE_IE21_Msk & ((value) << XDMAC_GIE_IE21_Pos))
#define   XDMAC_GIE_IE21_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE21_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE21_0                      (XDMAC_GIE_IE21_0_Val << XDMAC_GIE_IE21_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE21_1                      (XDMAC_GIE_IE21_1_Val << XDMAC_GIE_IE21_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE22_Pos                    _U_(22)                                              /**< (XDMAC_GIE) XDMAC Channel 22 Interrupt Enable Position */
#define XDMAC_GIE_IE22_Msk                    (_U_(0x1) << XDMAC_GIE_IE22_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 22 Interrupt Enable Mask */
#define XDMAC_GIE_IE22(value)                 (XDMAC_GIE_IE22_Msk & ((value) << XDMAC_GIE_IE22_Pos))
#define   XDMAC_GIE_IE22_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE22_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE22_0                      (XDMAC_GIE_IE22_0_Val << XDMAC_GIE_IE22_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE22_1                      (XDMAC_GIE_IE22_1_Val << XDMAC_GIE_IE22_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE23_Pos                    _U_(23)                                              /**< (XDMAC_GIE) XDMAC Channel 23 Interrupt Enable Position */
#define XDMAC_GIE_IE23_Msk                    (_U_(0x1) << XDMAC_GIE_IE23_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 23 Interrupt Enable Mask */
#define XDMAC_GIE_IE23(value)                 (XDMAC_GIE_IE23_Msk & ((value) << XDMAC_GIE_IE23_Pos))
#define   XDMAC_GIE_IE23_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE23_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE23_0                      (XDMAC_GIE_IE23_0_Val << XDMAC_GIE_IE23_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE23_1                      (XDMAC_GIE_IE23_1_Val << XDMAC_GIE_IE23_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE24_Pos                    _U_(24)                                              /**< (XDMAC_GIE) XDMAC Channel 24 Interrupt Enable Position */
#define XDMAC_GIE_IE24_Msk                    (_U_(0x1) << XDMAC_GIE_IE24_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 24 Interrupt Enable Mask */
#define XDMAC_GIE_IE24(value)                 (XDMAC_GIE_IE24_Msk & ((value) << XDMAC_GIE_IE24_Pos))
#define   XDMAC_GIE_IE24_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE24_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE24_0                      (XDMAC_GIE_IE24_0_Val << XDMAC_GIE_IE24_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE24_1                      (XDMAC_GIE_IE24_1_Val << XDMAC_GIE_IE24_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE25_Pos                    _U_(25)                                              /**< (XDMAC_GIE) XDMAC Channel 25 Interrupt Enable Position */
#define XDMAC_GIE_IE25_Msk                    (_U_(0x1) << XDMAC_GIE_IE25_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 25 Interrupt Enable Mask */
#define XDMAC_GIE_IE25(value)                 (XDMAC_GIE_IE25_Msk & ((value) << XDMAC_GIE_IE25_Pos))
#define   XDMAC_GIE_IE25_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE25_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE25_0                      (XDMAC_GIE_IE25_0_Val << XDMAC_GIE_IE25_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE25_1                      (XDMAC_GIE_IE25_1_Val << XDMAC_GIE_IE25_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE26_Pos                    _U_(26)                                              /**< (XDMAC_GIE) XDMAC Channel 26 Interrupt Enable Position */
#define XDMAC_GIE_IE26_Msk                    (_U_(0x1) << XDMAC_GIE_IE26_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 26 Interrupt Enable Mask */
#define XDMAC_GIE_IE26(value)                 (XDMAC_GIE_IE26_Msk & ((value) << XDMAC_GIE_IE26_Pos))
#define   XDMAC_GIE_IE26_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE26_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE26_0                      (XDMAC_GIE_IE26_0_Val << XDMAC_GIE_IE26_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE26_1                      (XDMAC_GIE_IE26_1_Val << XDMAC_GIE_IE26_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE27_Pos                    _U_(27)                                              /**< (XDMAC_GIE) XDMAC Channel 27 Interrupt Enable Position */
#define XDMAC_GIE_IE27_Msk                    (_U_(0x1) << XDMAC_GIE_IE27_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 27 Interrupt Enable Mask */
#define XDMAC_GIE_IE27(value)                 (XDMAC_GIE_IE27_Msk & ((value) << XDMAC_GIE_IE27_Pos))
#define   XDMAC_GIE_IE27_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE27_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE27_0                      (XDMAC_GIE_IE27_0_Val << XDMAC_GIE_IE27_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE27_1                      (XDMAC_GIE_IE27_1_Val << XDMAC_GIE_IE27_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE28_Pos                    _U_(28)                                              /**< (XDMAC_GIE) XDMAC Channel 28 Interrupt Enable Position */
#define XDMAC_GIE_IE28_Msk                    (_U_(0x1) << XDMAC_GIE_IE28_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 28 Interrupt Enable Mask */
#define XDMAC_GIE_IE28(value)                 (XDMAC_GIE_IE28_Msk & ((value) << XDMAC_GIE_IE28_Pos))
#define   XDMAC_GIE_IE28_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE28_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE28_0                      (XDMAC_GIE_IE28_0_Val << XDMAC_GIE_IE28_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE28_1                      (XDMAC_GIE_IE28_1_Val << XDMAC_GIE_IE28_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE29_Pos                    _U_(29)                                              /**< (XDMAC_GIE) XDMAC Channel 29 Interrupt Enable Position */
#define XDMAC_GIE_IE29_Msk                    (_U_(0x1) << XDMAC_GIE_IE29_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 29 Interrupt Enable Mask */
#define XDMAC_GIE_IE29(value)                 (XDMAC_GIE_IE29_Msk & ((value) << XDMAC_GIE_IE29_Pos))
#define   XDMAC_GIE_IE29_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE29_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE29_0                      (XDMAC_GIE_IE29_0_Val << XDMAC_GIE_IE29_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE29_1                      (XDMAC_GIE_IE29_1_Val << XDMAC_GIE_IE29_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE30_Pos                    _U_(30)                                              /**< (XDMAC_GIE) XDMAC Channel 30 Interrupt Enable Position */
#define XDMAC_GIE_IE30_Msk                    (_U_(0x1) << XDMAC_GIE_IE30_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 30 Interrupt Enable Mask */
#define XDMAC_GIE_IE30(value)                 (XDMAC_GIE_IE30_Msk & ((value) << XDMAC_GIE_IE30_Pos))
#define   XDMAC_GIE_IE30_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE30_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE30_0                      (XDMAC_GIE_IE30_0_Val << XDMAC_GIE_IE30_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE30_1                      (XDMAC_GIE_IE30_1_Val << XDMAC_GIE_IE30_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_IE31_Pos                    _U_(31)                                              /**< (XDMAC_GIE) XDMAC Channel 31 Interrupt Enable Position */
#define XDMAC_GIE_IE31_Msk                    (_U_(0x1) << XDMAC_GIE_IE31_Pos)                     /**< (XDMAC_GIE) XDMAC Channel 31 Interrupt Enable Mask */
#define XDMAC_GIE_IE31(value)                 (XDMAC_GIE_IE31_Msk & ((value) << XDMAC_GIE_IE31_Pos))
#define   XDMAC_GIE_IE31_0_Val                _U_(0x0)                                             /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GIE_IE31_1_Val                _U_(0x1)                                             /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt.  */
#define XDMAC_GIE_IE31_0                      (XDMAC_GIE_IE31_0_Val << XDMAC_GIE_IE31_Pos)         /**< (XDMAC_GIE) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GIE_IE31_1                      (XDMAC_GIE_IE31_1_Val << XDMAC_GIE_IE31_Pos)         /**< (XDMAC_GIE) The corresponding mask bit is set. The XDMAC Channel x Interrupt Status register (XDMAC_GIS) can generate an interrupt. Position  */
#define XDMAC_GIE_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GIE) Register Mask  */

#define XDMAC_GIE_IE_Pos                      _U_(0)                                               /**< (XDMAC_GIE Position) XDMAC Channel 3x Interrupt Enable */
#define XDMAC_GIE_IE_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GIE_IE_Pos)                /**< (XDMAC_GIE Mask) IE */
#define XDMAC_GIE_IE(value)                   (XDMAC_GIE_IE_Msk & ((value) << XDMAC_GIE_IE_Pos))   

/* -------- XDMAC_GID : (XDMAC Offset: 0x10) ( /W 32) Global Interrupt Disable Register -------- */
#define XDMAC_GID_ID0_Pos                     _U_(0)                                               /**< (XDMAC_GID) XDMAC Channel 0 Interrupt Disable Position */
#define XDMAC_GID_ID0_Msk                     (_U_(0x1) << XDMAC_GID_ID0_Pos)                      /**< (XDMAC_GID) XDMAC Channel 0 Interrupt Disable Mask */
#define XDMAC_GID_ID0(value)                  (XDMAC_GID_ID0_Msk & ((value) << XDMAC_GID_ID0_Pos))
#define   XDMAC_GID_ID0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID0_0                       (XDMAC_GID_ID0_0_Val << XDMAC_GID_ID0_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID0_1                       (XDMAC_GID_ID0_1_Val << XDMAC_GID_ID0_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID1_Pos                     _U_(1)                                               /**< (XDMAC_GID) XDMAC Channel 1 Interrupt Disable Position */
#define XDMAC_GID_ID1_Msk                     (_U_(0x1) << XDMAC_GID_ID1_Pos)                      /**< (XDMAC_GID) XDMAC Channel 1 Interrupt Disable Mask */
#define XDMAC_GID_ID1(value)                  (XDMAC_GID_ID1_Msk & ((value) << XDMAC_GID_ID1_Pos))
#define   XDMAC_GID_ID1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID1_0                       (XDMAC_GID_ID1_0_Val << XDMAC_GID_ID1_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID1_1                       (XDMAC_GID_ID1_1_Val << XDMAC_GID_ID1_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID2_Pos                     _U_(2)                                               /**< (XDMAC_GID) XDMAC Channel 2 Interrupt Disable Position */
#define XDMAC_GID_ID2_Msk                     (_U_(0x1) << XDMAC_GID_ID2_Pos)                      /**< (XDMAC_GID) XDMAC Channel 2 Interrupt Disable Mask */
#define XDMAC_GID_ID2(value)                  (XDMAC_GID_ID2_Msk & ((value) << XDMAC_GID_ID2_Pos))
#define   XDMAC_GID_ID2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID2_0                       (XDMAC_GID_ID2_0_Val << XDMAC_GID_ID2_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID2_1                       (XDMAC_GID_ID2_1_Val << XDMAC_GID_ID2_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID3_Pos                     _U_(3)                                               /**< (XDMAC_GID) XDMAC Channel 3 Interrupt Disable Position */
#define XDMAC_GID_ID3_Msk                     (_U_(0x1) << XDMAC_GID_ID3_Pos)                      /**< (XDMAC_GID) XDMAC Channel 3 Interrupt Disable Mask */
#define XDMAC_GID_ID3(value)                  (XDMAC_GID_ID3_Msk & ((value) << XDMAC_GID_ID3_Pos))
#define   XDMAC_GID_ID3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID3_0                       (XDMAC_GID_ID3_0_Val << XDMAC_GID_ID3_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID3_1                       (XDMAC_GID_ID3_1_Val << XDMAC_GID_ID3_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID4_Pos                     _U_(4)                                               /**< (XDMAC_GID) XDMAC Channel 4 Interrupt Disable Position */
#define XDMAC_GID_ID4_Msk                     (_U_(0x1) << XDMAC_GID_ID4_Pos)                      /**< (XDMAC_GID) XDMAC Channel 4 Interrupt Disable Mask */
#define XDMAC_GID_ID4(value)                  (XDMAC_GID_ID4_Msk & ((value) << XDMAC_GID_ID4_Pos))
#define   XDMAC_GID_ID4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID4_0                       (XDMAC_GID_ID4_0_Val << XDMAC_GID_ID4_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID4_1                       (XDMAC_GID_ID4_1_Val << XDMAC_GID_ID4_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID5_Pos                     _U_(5)                                               /**< (XDMAC_GID) XDMAC Channel 5 Interrupt Disable Position */
#define XDMAC_GID_ID5_Msk                     (_U_(0x1) << XDMAC_GID_ID5_Pos)                      /**< (XDMAC_GID) XDMAC Channel 5 Interrupt Disable Mask */
#define XDMAC_GID_ID5(value)                  (XDMAC_GID_ID5_Msk & ((value) << XDMAC_GID_ID5_Pos))
#define   XDMAC_GID_ID5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID5_0                       (XDMAC_GID_ID5_0_Val << XDMAC_GID_ID5_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID5_1                       (XDMAC_GID_ID5_1_Val << XDMAC_GID_ID5_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID6_Pos                     _U_(6)                                               /**< (XDMAC_GID) XDMAC Channel 6 Interrupt Disable Position */
#define XDMAC_GID_ID6_Msk                     (_U_(0x1) << XDMAC_GID_ID6_Pos)                      /**< (XDMAC_GID) XDMAC Channel 6 Interrupt Disable Mask */
#define XDMAC_GID_ID6(value)                  (XDMAC_GID_ID6_Msk & ((value) << XDMAC_GID_ID6_Pos))
#define   XDMAC_GID_ID6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID6_0                       (XDMAC_GID_ID6_0_Val << XDMAC_GID_ID6_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID6_1                       (XDMAC_GID_ID6_1_Val << XDMAC_GID_ID6_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID7_Pos                     _U_(7)                                               /**< (XDMAC_GID) XDMAC Channel 7 Interrupt Disable Position */
#define XDMAC_GID_ID7_Msk                     (_U_(0x1) << XDMAC_GID_ID7_Pos)                      /**< (XDMAC_GID) XDMAC Channel 7 Interrupt Disable Mask */
#define XDMAC_GID_ID7(value)                  (XDMAC_GID_ID7_Msk & ((value) << XDMAC_GID_ID7_Pos))
#define   XDMAC_GID_ID7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID7_0                       (XDMAC_GID_ID7_0_Val << XDMAC_GID_ID7_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID7_1                       (XDMAC_GID_ID7_1_Val << XDMAC_GID_ID7_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID8_Pos                     _U_(8)                                               /**< (XDMAC_GID) XDMAC Channel 8 Interrupt Disable Position */
#define XDMAC_GID_ID8_Msk                     (_U_(0x1) << XDMAC_GID_ID8_Pos)                      /**< (XDMAC_GID) XDMAC Channel 8 Interrupt Disable Mask */
#define XDMAC_GID_ID8(value)                  (XDMAC_GID_ID8_Msk & ((value) << XDMAC_GID_ID8_Pos))
#define   XDMAC_GID_ID8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID8_0                       (XDMAC_GID_ID8_0_Val << XDMAC_GID_ID8_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID8_1                       (XDMAC_GID_ID8_1_Val << XDMAC_GID_ID8_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID9_Pos                     _U_(9)                                               /**< (XDMAC_GID) XDMAC Channel 9 Interrupt Disable Position */
#define XDMAC_GID_ID9_Msk                     (_U_(0x1) << XDMAC_GID_ID9_Pos)                      /**< (XDMAC_GID) XDMAC Channel 9 Interrupt Disable Mask */
#define XDMAC_GID_ID9(value)                  (XDMAC_GID_ID9_Msk & ((value) << XDMAC_GID_ID9_Pos))
#define   XDMAC_GID_ID9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID9_0                       (XDMAC_GID_ID9_0_Val << XDMAC_GID_ID9_Pos)           /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID9_1                       (XDMAC_GID_ID9_1_Val << XDMAC_GID_ID9_Pos)           /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID10_Pos                    _U_(10)                                              /**< (XDMAC_GID) XDMAC Channel 10 Interrupt Disable Position */
#define XDMAC_GID_ID10_Msk                    (_U_(0x1) << XDMAC_GID_ID10_Pos)                     /**< (XDMAC_GID) XDMAC Channel 10 Interrupt Disable Mask */
#define XDMAC_GID_ID10(value)                 (XDMAC_GID_ID10_Msk & ((value) << XDMAC_GID_ID10_Pos))
#define   XDMAC_GID_ID10_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID10_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID10_0                      (XDMAC_GID_ID10_0_Val << XDMAC_GID_ID10_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID10_1                      (XDMAC_GID_ID10_1_Val << XDMAC_GID_ID10_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID11_Pos                    _U_(11)                                              /**< (XDMAC_GID) XDMAC Channel 11 Interrupt Disable Position */
#define XDMAC_GID_ID11_Msk                    (_U_(0x1) << XDMAC_GID_ID11_Pos)                     /**< (XDMAC_GID) XDMAC Channel 11 Interrupt Disable Mask */
#define XDMAC_GID_ID11(value)                 (XDMAC_GID_ID11_Msk & ((value) << XDMAC_GID_ID11_Pos))
#define   XDMAC_GID_ID11_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID11_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID11_0                      (XDMAC_GID_ID11_0_Val << XDMAC_GID_ID11_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID11_1                      (XDMAC_GID_ID11_1_Val << XDMAC_GID_ID11_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID12_Pos                    _U_(12)                                              /**< (XDMAC_GID) XDMAC Channel 12 Interrupt Disable Position */
#define XDMAC_GID_ID12_Msk                    (_U_(0x1) << XDMAC_GID_ID12_Pos)                     /**< (XDMAC_GID) XDMAC Channel 12 Interrupt Disable Mask */
#define XDMAC_GID_ID12(value)                 (XDMAC_GID_ID12_Msk & ((value) << XDMAC_GID_ID12_Pos))
#define   XDMAC_GID_ID12_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID12_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID12_0                      (XDMAC_GID_ID12_0_Val << XDMAC_GID_ID12_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID12_1                      (XDMAC_GID_ID12_1_Val << XDMAC_GID_ID12_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID13_Pos                    _U_(13)                                              /**< (XDMAC_GID) XDMAC Channel 13 Interrupt Disable Position */
#define XDMAC_GID_ID13_Msk                    (_U_(0x1) << XDMAC_GID_ID13_Pos)                     /**< (XDMAC_GID) XDMAC Channel 13 Interrupt Disable Mask */
#define XDMAC_GID_ID13(value)                 (XDMAC_GID_ID13_Msk & ((value) << XDMAC_GID_ID13_Pos))
#define   XDMAC_GID_ID13_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID13_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID13_0                      (XDMAC_GID_ID13_0_Val << XDMAC_GID_ID13_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID13_1                      (XDMAC_GID_ID13_1_Val << XDMAC_GID_ID13_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID14_Pos                    _U_(14)                                              /**< (XDMAC_GID) XDMAC Channel 14 Interrupt Disable Position */
#define XDMAC_GID_ID14_Msk                    (_U_(0x1) << XDMAC_GID_ID14_Pos)                     /**< (XDMAC_GID) XDMAC Channel 14 Interrupt Disable Mask */
#define XDMAC_GID_ID14(value)                 (XDMAC_GID_ID14_Msk & ((value) << XDMAC_GID_ID14_Pos))
#define   XDMAC_GID_ID14_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID14_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID14_0                      (XDMAC_GID_ID14_0_Val << XDMAC_GID_ID14_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID14_1                      (XDMAC_GID_ID14_1_Val << XDMAC_GID_ID14_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID15_Pos                    _U_(15)                                              /**< (XDMAC_GID) XDMAC Channel 15 Interrupt Disable Position */
#define XDMAC_GID_ID15_Msk                    (_U_(0x1) << XDMAC_GID_ID15_Pos)                     /**< (XDMAC_GID) XDMAC Channel 15 Interrupt Disable Mask */
#define XDMAC_GID_ID15(value)                 (XDMAC_GID_ID15_Msk & ((value) << XDMAC_GID_ID15_Pos))
#define   XDMAC_GID_ID15_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID15_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID15_0                      (XDMAC_GID_ID15_0_Val << XDMAC_GID_ID15_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID15_1                      (XDMAC_GID_ID15_1_Val << XDMAC_GID_ID15_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID16_Pos                    _U_(16)                                              /**< (XDMAC_GID) XDMAC Channel 16 Interrupt Disable Position */
#define XDMAC_GID_ID16_Msk                    (_U_(0x1) << XDMAC_GID_ID16_Pos)                     /**< (XDMAC_GID) XDMAC Channel 16 Interrupt Disable Mask */
#define XDMAC_GID_ID16(value)                 (XDMAC_GID_ID16_Msk & ((value) << XDMAC_GID_ID16_Pos))
#define   XDMAC_GID_ID16_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID16_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID16_0                      (XDMAC_GID_ID16_0_Val << XDMAC_GID_ID16_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID16_1                      (XDMAC_GID_ID16_1_Val << XDMAC_GID_ID16_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID17_Pos                    _U_(17)                                              /**< (XDMAC_GID) XDMAC Channel 17 Interrupt Disable Position */
#define XDMAC_GID_ID17_Msk                    (_U_(0x1) << XDMAC_GID_ID17_Pos)                     /**< (XDMAC_GID) XDMAC Channel 17 Interrupt Disable Mask */
#define XDMAC_GID_ID17(value)                 (XDMAC_GID_ID17_Msk & ((value) << XDMAC_GID_ID17_Pos))
#define   XDMAC_GID_ID17_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID17_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID17_0                      (XDMAC_GID_ID17_0_Val << XDMAC_GID_ID17_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID17_1                      (XDMAC_GID_ID17_1_Val << XDMAC_GID_ID17_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID18_Pos                    _U_(18)                                              /**< (XDMAC_GID) XDMAC Channel 18 Interrupt Disable Position */
#define XDMAC_GID_ID18_Msk                    (_U_(0x1) << XDMAC_GID_ID18_Pos)                     /**< (XDMAC_GID) XDMAC Channel 18 Interrupt Disable Mask */
#define XDMAC_GID_ID18(value)                 (XDMAC_GID_ID18_Msk & ((value) << XDMAC_GID_ID18_Pos))
#define   XDMAC_GID_ID18_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID18_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID18_0                      (XDMAC_GID_ID18_0_Val << XDMAC_GID_ID18_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID18_1                      (XDMAC_GID_ID18_1_Val << XDMAC_GID_ID18_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID19_Pos                    _U_(19)                                              /**< (XDMAC_GID) XDMAC Channel 19 Interrupt Disable Position */
#define XDMAC_GID_ID19_Msk                    (_U_(0x1) << XDMAC_GID_ID19_Pos)                     /**< (XDMAC_GID) XDMAC Channel 19 Interrupt Disable Mask */
#define XDMAC_GID_ID19(value)                 (XDMAC_GID_ID19_Msk & ((value) << XDMAC_GID_ID19_Pos))
#define   XDMAC_GID_ID19_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID19_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID19_0                      (XDMAC_GID_ID19_0_Val << XDMAC_GID_ID19_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID19_1                      (XDMAC_GID_ID19_1_Val << XDMAC_GID_ID19_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID20_Pos                    _U_(20)                                              /**< (XDMAC_GID) XDMAC Channel 20 Interrupt Disable Position */
#define XDMAC_GID_ID20_Msk                    (_U_(0x1) << XDMAC_GID_ID20_Pos)                     /**< (XDMAC_GID) XDMAC Channel 20 Interrupt Disable Mask */
#define XDMAC_GID_ID20(value)                 (XDMAC_GID_ID20_Msk & ((value) << XDMAC_GID_ID20_Pos))
#define   XDMAC_GID_ID20_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID20_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID20_0                      (XDMAC_GID_ID20_0_Val << XDMAC_GID_ID20_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID20_1                      (XDMAC_GID_ID20_1_Val << XDMAC_GID_ID20_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID21_Pos                    _U_(21)                                              /**< (XDMAC_GID) XDMAC Channel 21 Interrupt Disable Position */
#define XDMAC_GID_ID21_Msk                    (_U_(0x1) << XDMAC_GID_ID21_Pos)                     /**< (XDMAC_GID) XDMAC Channel 21 Interrupt Disable Mask */
#define XDMAC_GID_ID21(value)                 (XDMAC_GID_ID21_Msk & ((value) << XDMAC_GID_ID21_Pos))
#define   XDMAC_GID_ID21_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID21_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID21_0                      (XDMAC_GID_ID21_0_Val << XDMAC_GID_ID21_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID21_1                      (XDMAC_GID_ID21_1_Val << XDMAC_GID_ID21_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID22_Pos                    _U_(22)                                              /**< (XDMAC_GID) XDMAC Channel 22 Interrupt Disable Position */
#define XDMAC_GID_ID22_Msk                    (_U_(0x1) << XDMAC_GID_ID22_Pos)                     /**< (XDMAC_GID) XDMAC Channel 22 Interrupt Disable Mask */
#define XDMAC_GID_ID22(value)                 (XDMAC_GID_ID22_Msk & ((value) << XDMAC_GID_ID22_Pos))
#define   XDMAC_GID_ID22_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID22_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID22_0                      (XDMAC_GID_ID22_0_Val << XDMAC_GID_ID22_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID22_1                      (XDMAC_GID_ID22_1_Val << XDMAC_GID_ID22_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID23_Pos                    _U_(23)                                              /**< (XDMAC_GID) XDMAC Channel 23 Interrupt Disable Position */
#define XDMAC_GID_ID23_Msk                    (_U_(0x1) << XDMAC_GID_ID23_Pos)                     /**< (XDMAC_GID) XDMAC Channel 23 Interrupt Disable Mask */
#define XDMAC_GID_ID23(value)                 (XDMAC_GID_ID23_Msk & ((value) << XDMAC_GID_ID23_Pos))
#define   XDMAC_GID_ID23_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID23_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID23_0                      (XDMAC_GID_ID23_0_Val << XDMAC_GID_ID23_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID23_1                      (XDMAC_GID_ID23_1_Val << XDMAC_GID_ID23_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID24_Pos                    _U_(24)                                              /**< (XDMAC_GID) XDMAC Channel 24 Interrupt Disable Position */
#define XDMAC_GID_ID24_Msk                    (_U_(0x1) << XDMAC_GID_ID24_Pos)                     /**< (XDMAC_GID) XDMAC Channel 24 Interrupt Disable Mask */
#define XDMAC_GID_ID24(value)                 (XDMAC_GID_ID24_Msk & ((value) << XDMAC_GID_ID24_Pos))
#define   XDMAC_GID_ID24_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID24_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID24_0                      (XDMAC_GID_ID24_0_Val << XDMAC_GID_ID24_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID24_1                      (XDMAC_GID_ID24_1_Val << XDMAC_GID_ID24_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID25_Pos                    _U_(25)                                              /**< (XDMAC_GID) XDMAC Channel 25 Interrupt Disable Position */
#define XDMAC_GID_ID25_Msk                    (_U_(0x1) << XDMAC_GID_ID25_Pos)                     /**< (XDMAC_GID) XDMAC Channel 25 Interrupt Disable Mask */
#define XDMAC_GID_ID25(value)                 (XDMAC_GID_ID25_Msk & ((value) << XDMAC_GID_ID25_Pos))
#define   XDMAC_GID_ID25_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID25_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID25_0                      (XDMAC_GID_ID25_0_Val << XDMAC_GID_ID25_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID25_1                      (XDMAC_GID_ID25_1_Val << XDMAC_GID_ID25_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID26_Pos                    _U_(26)                                              /**< (XDMAC_GID) XDMAC Channel 26 Interrupt Disable Position */
#define XDMAC_GID_ID26_Msk                    (_U_(0x1) << XDMAC_GID_ID26_Pos)                     /**< (XDMAC_GID) XDMAC Channel 26 Interrupt Disable Mask */
#define XDMAC_GID_ID26(value)                 (XDMAC_GID_ID26_Msk & ((value) << XDMAC_GID_ID26_Pos))
#define   XDMAC_GID_ID26_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID26_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID26_0                      (XDMAC_GID_ID26_0_Val << XDMAC_GID_ID26_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID26_1                      (XDMAC_GID_ID26_1_Val << XDMAC_GID_ID26_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID27_Pos                    _U_(27)                                              /**< (XDMAC_GID) XDMAC Channel 27 Interrupt Disable Position */
#define XDMAC_GID_ID27_Msk                    (_U_(0x1) << XDMAC_GID_ID27_Pos)                     /**< (XDMAC_GID) XDMAC Channel 27 Interrupt Disable Mask */
#define XDMAC_GID_ID27(value)                 (XDMAC_GID_ID27_Msk & ((value) << XDMAC_GID_ID27_Pos))
#define   XDMAC_GID_ID27_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID27_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID27_0                      (XDMAC_GID_ID27_0_Val << XDMAC_GID_ID27_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID27_1                      (XDMAC_GID_ID27_1_Val << XDMAC_GID_ID27_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID28_Pos                    _U_(28)                                              /**< (XDMAC_GID) XDMAC Channel 28 Interrupt Disable Position */
#define XDMAC_GID_ID28_Msk                    (_U_(0x1) << XDMAC_GID_ID28_Pos)                     /**< (XDMAC_GID) XDMAC Channel 28 Interrupt Disable Mask */
#define XDMAC_GID_ID28(value)                 (XDMAC_GID_ID28_Msk & ((value) << XDMAC_GID_ID28_Pos))
#define   XDMAC_GID_ID28_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID28_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID28_0                      (XDMAC_GID_ID28_0_Val << XDMAC_GID_ID28_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID28_1                      (XDMAC_GID_ID28_1_Val << XDMAC_GID_ID28_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID29_Pos                    _U_(29)                                              /**< (XDMAC_GID) XDMAC Channel 29 Interrupt Disable Position */
#define XDMAC_GID_ID29_Msk                    (_U_(0x1) << XDMAC_GID_ID29_Pos)                     /**< (XDMAC_GID) XDMAC Channel 29 Interrupt Disable Mask */
#define XDMAC_GID_ID29(value)                 (XDMAC_GID_ID29_Msk & ((value) << XDMAC_GID_ID29_Pos))
#define   XDMAC_GID_ID29_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID29_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID29_0                      (XDMAC_GID_ID29_0_Val << XDMAC_GID_ID29_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID29_1                      (XDMAC_GID_ID29_1_Val << XDMAC_GID_ID29_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID30_Pos                    _U_(30)                                              /**< (XDMAC_GID) XDMAC Channel 30 Interrupt Disable Position */
#define XDMAC_GID_ID30_Msk                    (_U_(0x1) << XDMAC_GID_ID30_Pos)                     /**< (XDMAC_GID) XDMAC Channel 30 Interrupt Disable Mask */
#define XDMAC_GID_ID30(value)                 (XDMAC_GID_ID30_Msk & ((value) << XDMAC_GID_ID30_Pos))
#define   XDMAC_GID_ID30_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID30_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID30_0                      (XDMAC_GID_ID30_0_Val << XDMAC_GID_ID30_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID30_1                      (XDMAC_GID_ID30_1_Val << XDMAC_GID_ID30_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_ID31_Pos                    _U_(31)                                              /**< (XDMAC_GID) XDMAC Channel 31 Interrupt Disable Position */
#define XDMAC_GID_ID31_Msk                    (_U_(0x1) << XDMAC_GID_ID31_Pos)                     /**< (XDMAC_GID) XDMAC Channel 31 Interrupt Disable Mask */
#define XDMAC_GID_ID31(value)                 (XDMAC_GID_ID31_Msk & ((value) << XDMAC_GID_ID31_Pos))
#define   XDMAC_GID_ID31_0_Val                _U_(0x0)                                             /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified.  */
#define   XDMAC_GID_ID31_1_Val                _U_(0x1)                                             /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked.  */
#define XDMAC_GID_ID31_0                      (XDMAC_GID_ID31_0_Val << XDMAC_GID_ID31_Pos)         /**< (XDMAC_GID) This bit has no effect. The Channel x Interrupt Mask bit (XDMAC_GIM.IMx) is not modified. Position  */
#define XDMAC_GID_ID31_1                      (XDMAC_GID_ID31_1_Val << XDMAC_GID_ID31_Pos)         /**< (XDMAC_GID) The corresponding mask bit is reset. The Channel x Interrupt Status register interrupt (XDMAC_GIS) is masked. Position  */
#define XDMAC_GID_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GID) Register Mask  */

#define XDMAC_GID_ID_Pos                      _U_(0)                                               /**< (XDMAC_GID Position) XDMAC Channel 3x Interrupt Disable */
#define XDMAC_GID_ID_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GID_ID_Pos)                /**< (XDMAC_GID Mask) ID */
#define XDMAC_GID_ID(value)                   (XDMAC_GID_ID_Msk & ((value) << XDMAC_GID_ID_Pos))   

/* -------- XDMAC_GIM : (XDMAC Offset: 0x14) ( R/ 32) Global Interrupt Mask Register -------- */
#define XDMAC_GIM_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_GIM) Global Interrupt Mask Register  Reset Value */

#define XDMAC_GIM_IM0_Pos                     _U_(0)                                               /**< (XDMAC_GIM) XDMAC Channel 0 Interrupt Mask Position */
#define XDMAC_GIM_IM0_Msk                     (_U_(0x1) << XDMAC_GIM_IM0_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 0 Interrupt Mask Mask */
#define XDMAC_GIM_IM0(value)                  (XDMAC_GIM_IM0_Msk & ((value) << XDMAC_GIM_IM0_Pos))
#define   XDMAC_GIM_IM0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM0_0                       (XDMAC_GIM_IM0_0_Val << XDMAC_GIM_IM0_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM0_1                       (XDMAC_GIM_IM0_1_Val << XDMAC_GIM_IM0_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM1_Pos                     _U_(1)                                               /**< (XDMAC_GIM) XDMAC Channel 1 Interrupt Mask Position */
#define XDMAC_GIM_IM1_Msk                     (_U_(0x1) << XDMAC_GIM_IM1_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 1 Interrupt Mask Mask */
#define XDMAC_GIM_IM1(value)                  (XDMAC_GIM_IM1_Msk & ((value) << XDMAC_GIM_IM1_Pos))
#define   XDMAC_GIM_IM1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM1_0                       (XDMAC_GIM_IM1_0_Val << XDMAC_GIM_IM1_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM1_1                       (XDMAC_GIM_IM1_1_Val << XDMAC_GIM_IM1_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM2_Pos                     _U_(2)                                               /**< (XDMAC_GIM) XDMAC Channel 2 Interrupt Mask Position */
#define XDMAC_GIM_IM2_Msk                     (_U_(0x1) << XDMAC_GIM_IM2_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 2 Interrupt Mask Mask */
#define XDMAC_GIM_IM2(value)                  (XDMAC_GIM_IM2_Msk & ((value) << XDMAC_GIM_IM2_Pos))
#define   XDMAC_GIM_IM2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM2_0                       (XDMAC_GIM_IM2_0_Val << XDMAC_GIM_IM2_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM2_1                       (XDMAC_GIM_IM2_1_Val << XDMAC_GIM_IM2_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM3_Pos                     _U_(3)                                               /**< (XDMAC_GIM) XDMAC Channel 3 Interrupt Mask Position */
#define XDMAC_GIM_IM3_Msk                     (_U_(0x1) << XDMAC_GIM_IM3_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 3 Interrupt Mask Mask */
#define XDMAC_GIM_IM3(value)                  (XDMAC_GIM_IM3_Msk & ((value) << XDMAC_GIM_IM3_Pos))
#define   XDMAC_GIM_IM3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM3_0                       (XDMAC_GIM_IM3_0_Val << XDMAC_GIM_IM3_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM3_1                       (XDMAC_GIM_IM3_1_Val << XDMAC_GIM_IM3_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM4_Pos                     _U_(4)                                               /**< (XDMAC_GIM) XDMAC Channel 4 Interrupt Mask Position */
#define XDMAC_GIM_IM4_Msk                     (_U_(0x1) << XDMAC_GIM_IM4_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 4 Interrupt Mask Mask */
#define XDMAC_GIM_IM4(value)                  (XDMAC_GIM_IM4_Msk & ((value) << XDMAC_GIM_IM4_Pos))
#define   XDMAC_GIM_IM4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM4_0                       (XDMAC_GIM_IM4_0_Val << XDMAC_GIM_IM4_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM4_1                       (XDMAC_GIM_IM4_1_Val << XDMAC_GIM_IM4_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM5_Pos                     _U_(5)                                               /**< (XDMAC_GIM) XDMAC Channel 5 Interrupt Mask Position */
#define XDMAC_GIM_IM5_Msk                     (_U_(0x1) << XDMAC_GIM_IM5_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 5 Interrupt Mask Mask */
#define XDMAC_GIM_IM5(value)                  (XDMAC_GIM_IM5_Msk & ((value) << XDMAC_GIM_IM5_Pos))
#define   XDMAC_GIM_IM5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM5_0                       (XDMAC_GIM_IM5_0_Val << XDMAC_GIM_IM5_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM5_1                       (XDMAC_GIM_IM5_1_Val << XDMAC_GIM_IM5_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM6_Pos                     _U_(6)                                               /**< (XDMAC_GIM) XDMAC Channel 6 Interrupt Mask Position */
#define XDMAC_GIM_IM6_Msk                     (_U_(0x1) << XDMAC_GIM_IM6_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 6 Interrupt Mask Mask */
#define XDMAC_GIM_IM6(value)                  (XDMAC_GIM_IM6_Msk & ((value) << XDMAC_GIM_IM6_Pos))
#define   XDMAC_GIM_IM6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM6_0                       (XDMAC_GIM_IM6_0_Val << XDMAC_GIM_IM6_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM6_1                       (XDMAC_GIM_IM6_1_Val << XDMAC_GIM_IM6_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM7_Pos                     _U_(7)                                               /**< (XDMAC_GIM) XDMAC Channel 7 Interrupt Mask Position */
#define XDMAC_GIM_IM7_Msk                     (_U_(0x1) << XDMAC_GIM_IM7_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 7 Interrupt Mask Mask */
#define XDMAC_GIM_IM7(value)                  (XDMAC_GIM_IM7_Msk & ((value) << XDMAC_GIM_IM7_Pos))
#define   XDMAC_GIM_IM7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM7_0                       (XDMAC_GIM_IM7_0_Val << XDMAC_GIM_IM7_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM7_1                       (XDMAC_GIM_IM7_1_Val << XDMAC_GIM_IM7_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM8_Pos                     _U_(8)                                               /**< (XDMAC_GIM) XDMAC Channel 8 Interrupt Mask Position */
#define XDMAC_GIM_IM8_Msk                     (_U_(0x1) << XDMAC_GIM_IM8_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 8 Interrupt Mask Mask */
#define XDMAC_GIM_IM8(value)                  (XDMAC_GIM_IM8_Msk & ((value) << XDMAC_GIM_IM8_Pos))
#define   XDMAC_GIM_IM8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM8_0                       (XDMAC_GIM_IM8_0_Val << XDMAC_GIM_IM8_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM8_1                       (XDMAC_GIM_IM8_1_Val << XDMAC_GIM_IM8_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM9_Pos                     _U_(9)                                               /**< (XDMAC_GIM) XDMAC Channel 9 Interrupt Mask Position */
#define XDMAC_GIM_IM9_Msk                     (_U_(0x1) << XDMAC_GIM_IM9_Pos)                      /**< (XDMAC_GIM) XDMAC Channel 9 Interrupt Mask Mask */
#define XDMAC_GIM_IM9(value)                  (XDMAC_GIM_IM9_Msk & ((value) << XDMAC_GIM_IM9_Pos))
#define   XDMAC_GIM_IM9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM9_0                       (XDMAC_GIM_IM9_0_Val << XDMAC_GIM_IM9_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM9_1                       (XDMAC_GIM_IM9_1_Val << XDMAC_GIM_IM9_Pos)           /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM10_Pos                    _U_(10)                                              /**< (XDMAC_GIM) XDMAC Channel 10 Interrupt Mask Position */
#define XDMAC_GIM_IM10_Msk                    (_U_(0x1) << XDMAC_GIM_IM10_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 10 Interrupt Mask Mask */
#define XDMAC_GIM_IM10(value)                 (XDMAC_GIM_IM10_Msk & ((value) << XDMAC_GIM_IM10_Pos))
#define   XDMAC_GIM_IM10_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM10_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM10_0                      (XDMAC_GIM_IM10_0_Val << XDMAC_GIM_IM10_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM10_1                      (XDMAC_GIM_IM10_1_Val << XDMAC_GIM_IM10_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM11_Pos                    _U_(11)                                              /**< (XDMAC_GIM) XDMAC Channel 11 Interrupt Mask Position */
#define XDMAC_GIM_IM11_Msk                    (_U_(0x1) << XDMAC_GIM_IM11_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 11 Interrupt Mask Mask */
#define XDMAC_GIM_IM11(value)                 (XDMAC_GIM_IM11_Msk & ((value) << XDMAC_GIM_IM11_Pos))
#define   XDMAC_GIM_IM11_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM11_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM11_0                      (XDMAC_GIM_IM11_0_Val << XDMAC_GIM_IM11_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM11_1                      (XDMAC_GIM_IM11_1_Val << XDMAC_GIM_IM11_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM12_Pos                    _U_(12)                                              /**< (XDMAC_GIM) XDMAC Channel 12 Interrupt Mask Position */
#define XDMAC_GIM_IM12_Msk                    (_U_(0x1) << XDMAC_GIM_IM12_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 12 Interrupt Mask Mask */
#define XDMAC_GIM_IM12(value)                 (XDMAC_GIM_IM12_Msk & ((value) << XDMAC_GIM_IM12_Pos))
#define   XDMAC_GIM_IM12_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM12_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM12_0                      (XDMAC_GIM_IM12_0_Val << XDMAC_GIM_IM12_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM12_1                      (XDMAC_GIM_IM12_1_Val << XDMAC_GIM_IM12_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM13_Pos                    _U_(13)                                              /**< (XDMAC_GIM) XDMAC Channel 13 Interrupt Mask Position */
#define XDMAC_GIM_IM13_Msk                    (_U_(0x1) << XDMAC_GIM_IM13_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 13 Interrupt Mask Mask */
#define XDMAC_GIM_IM13(value)                 (XDMAC_GIM_IM13_Msk & ((value) << XDMAC_GIM_IM13_Pos))
#define   XDMAC_GIM_IM13_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM13_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM13_0                      (XDMAC_GIM_IM13_0_Val << XDMAC_GIM_IM13_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM13_1                      (XDMAC_GIM_IM13_1_Val << XDMAC_GIM_IM13_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM14_Pos                    _U_(14)                                              /**< (XDMAC_GIM) XDMAC Channel 14 Interrupt Mask Position */
#define XDMAC_GIM_IM14_Msk                    (_U_(0x1) << XDMAC_GIM_IM14_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 14 Interrupt Mask Mask */
#define XDMAC_GIM_IM14(value)                 (XDMAC_GIM_IM14_Msk & ((value) << XDMAC_GIM_IM14_Pos))
#define   XDMAC_GIM_IM14_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM14_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM14_0                      (XDMAC_GIM_IM14_0_Val << XDMAC_GIM_IM14_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM14_1                      (XDMAC_GIM_IM14_1_Val << XDMAC_GIM_IM14_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM15_Pos                    _U_(15)                                              /**< (XDMAC_GIM) XDMAC Channel 15 Interrupt Mask Position */
#define XDMAC_GIM_IM15_Msk                    (_U_(0x1) << XDMAC_GIM_IM15_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 15 Interrupt Mask Mask */
#define XDMAC_GIM_IM15(value)                 (XDMAC_GIM_IM15_Msk & ((value) << XDMAC_GIM_IM15_Pos))
#define   XDMAC_GIM_IM15_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM15_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM15_0                      (XDMAC_GIM_IM15_0_Val << XDMAC_GIM_IM15_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM15_1                      (XDMAC_GIM_IM15_1_Val << XDMAC_GIM_IM15_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM16_Pos                    _U_(16)                                              /**< (XDMAC_GIM) XDMAC Channel 16 Interrupt Mask Position */
#define XDMAC_GIM_IM16_Msk                    (_U_(0x1) << XDMAC_GIM_IM16_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 16 Interrupt Mask Mask */
#define XDMAC_GIM_IM16(value)                 (XDMAC_GIM_IM16_Msk & ((value) << XDMAC_GIM_IM16_Pos))
#define   XDMAC_GIM_IM16_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM16_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM16_0                      (XDMAC_GIM_IM16_0_Val << XDMAC_GIM_IM16_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM16_1                      (XDMAC_GIM_IM16_1_Val << XDMAC_GIM_IM16_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM17_Pos                    _U_(17)                                              /**< (XDMAC_GIM) XDMAC Channel 17 Interrupt Mask Position */
#define XDMAC_GIM_IM17_Msk                    (_U_(0x1) << XDMAC_GIM_IM17_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 17 Interrupt Mask Mask */
#define XDMAC_GIM_IM17(value)                 (XDMAC_GIM_IM17_Msk & ((value) << XDMAC_GIM_IM17_Pos))
#define   XDMAC_GIM_IM17_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM17_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM17_0                      (XDMAC_GIM_IM17_0_Val << XDMAC_GIM_IM17_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM17_1                      (XDMAC_GIM_IM17_1_Val << XDMAC_GIM_IM17_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM18_Pos                    _U_(18)                                              /**< (XDMAC_GIM) XDMAC Channel 18 Interrupt Mask Position */
#define XDMAC_GIM_IM18_Msk                    (_U_(0x1) << XDMAC_GIM_IM18_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 18 Interrupt Mask Mask */
#define XDMAC_GIM_IM18(value)                 (XDMAC_GIM_IM18_Msk & ((value) << XDMAC_GIM_IM18_Pos))
#define   XDMAC_GIM_IM18_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM18_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM18_0                      (XDMAC_GIM_IM18_0_Val << XDMAC_GIM_IM18_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM18_1                      (XDMAC_GIM_IM18_1_Val << XDMAC_GIM_IM18_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM19_Pos                    _U_(19)                                              /**< (XDMAC_GIM) XDMAC Channel 19 Interrupt Mask Position */
#define XDMAC_GIM_IM19_Msk                    (_U_(0x1) << XDMAC_GIM_IM19_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 19 Interrupt Mask Mask */
#define XDMAC_GIM_IM19(value)                 (XDMAC_GIM_IM19_Msk & ((value) << XDMAC_GIM_IM19_Pos))
#define   XDMAC_GIM_IM19_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM19_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM19_0                      (XDMAC_GIM_IM19_0_Val << XDMAC_GIM_IM19_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM19_1                      (XDMAC_GIM_IM19_1_Val << XDMAC_GIM_IM19_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM20_Pos                    _U_(20)                                              /**< (XDMAC_GIM) XDMAC Channel 20 Interrupt Mask Position */
#define XDMAC_GIM_IM20_Msk                    (_U_(0x1) << XDMAC_GIM_IM20_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 20 Interrupt Mask Mask */
#define XDMAC_GIM_IM20(value)                 (XDMAC_GIM_IM20_Msk & ((value) << XDMAC_GIM_IM20_Pos))
#define   XDMAC_GIM_IM20_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM20_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM20_0                      (XDMAC_GIM_IM20_0_Val << XDMAC_GIM_IM20_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM20_1                      (XDMAC_GIM_IM20_1_Val << XDMAC_GIM_IM20_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM21_Pos                    _U_(21)                                              /**< (XDMAC_GIM) XDMAC Channel 21 Interrupt Mask Position */
#define XDMAC_GIM_IM21_Msk                    (_U_(0x1) << XDMAC_GIM_IM21_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 21 Interrupt Mask Mask */
#define XDMAC_GIM_IM21(value)                 (XDMAC_GIM_IM21_Msk & ((value) << XDMAC_GIM_IM21_Pos))
#define   XDMAC_GIM_IM21_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM21_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM21_0                      (XDMAC_GIM_IM21_0_Val << XDMAC_GIM_IM21_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM21_1                      (XDMAC_GIM_IM21_1_Val << XDMAC_GIM_IM21_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM22_Pos                    _U_(22)                                              /**< (XDMAC_GIM) XDMAC Channel 22 Interrupt Mask Position */
#define XDMAC_GIM_IM22_Msk                    (_U_(0x1) << XDMAC_GIM_IM22_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 22 Interrupt Mask Mask */
#define XDMAC_GIM_IM22(value)                 (XDMAC_GIM_IM22_Msk & ((value) << XDMAC_GIM_IM22_Pos))
#define   XDMAC_GIM_IM22_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM22_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM22_0                      (XDMAC_GIM_IM22_0_Val << XDMAC_GIM_IM22_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM22_1                      (XDMAC_GIM_IM22_1_Val << XDMAC_GIM_IM22_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM23_Pos                    _U_(23)                                              /**< (XDMAC_GIM) XDMAC Channel 23 Interrupt Mask Position */
#define XDMAC_GIM_IM23_Msk                    (_U_(0x1) << XDMAC_GIM_IM23_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 23 Interrupt Mask Mask */
#define XDMAC_GIM_IM23(value)                 (XDMAC_GIM_IM23_Msk & ((value) << XDMAC_GIM_IM23_Pos))
#define   XDMAC_GIM_IM23_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM23_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM23_0                      (XDMAC_GIM_IM23_0_Val << XDMAC_GIM_IM23_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM23_1                      (XDMAC_GIM_IM23_1_Val << XDMAC_GIM_IM23_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM24_Pos                    _U_(24)                                              /**< (XDMAC_GIM) XDMAC Channel 24 Interrupt Mask Position */
#define XDMAC_GIM_IM24_Msk                    (_U_(0x1) << XDMAC_GIM_IM24_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 24 Interrupt Mask Mask */
#define XDMAC_GIM_IM24(value)                 (XDMAC_GIM_IM24_Msk & ((value) << XDMAC_GIM_IM24_Pos))
#define   XDMAC_GIM_IM24_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM24_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM24_0                      (XDMAC_GIM_IM24_0_Val << XDMAC_GIM_IM24_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM24_1                      (XDMAC_GIM_IM24_1_Val << XDMAC_GIM_IM24_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM25_Pos                    _U_(25)                                              /**< (XDMAC_GIM) XDMAC Channel 25 Interrupt Mask Position */
#define XDMAC_GIM_IM25_Msk                    (_U_(0x1) << XDMAC_GIM_IM25_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 25 Interrupt Mask Mask */
#define XDMAC_GIM_IM25(value)                 (XDMAC_GIM_IM25_Msk & ((value) << XDMAC_GIM_IM25_Pos))
#define   XDMAC_GIM_IM25_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM25_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM25_0                      (XDMAC_GIM_IM25_0_Val << XDMAC_GIM_IM25_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM25_1                      (XDMAC_GIM_IM25_1_Val << XDMAC_GIM_IM25_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM26_Pos                    _U_(26)                                              /**< (XDMAC_GIM) XDMAC Channel 26 Interrupt Mask Position */
#define XDMAC_GIM_IM26_Msk                    (_U_(0x1) << XDMAC_GIM_IM26_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 26 Interrupt Mask Mask */
#define XDMAC_GIM_IM26(value)                 (XDMAC_GIM_IM26_Msk & ((value) << XDMAC_GIM_IM26_Pos))
#define   XDMAC_GIM_IM26_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM26_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM26_0                      (XDMAC_GIM_IM26_0_Val << XDMAC_GIM_IM26_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM26_1                      (XDMAC_GIM_IM26_1_Val << XDMAC_GIM_IM26_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM27_Pos                    _U_(27)                                              /**< (XDMAC_GIM) XDMAC Channel 27 Interrupt Mask Position */
#define XDMAC_GIM_IM27_Msk                    (_U_(0x1) << XDMAC_GIM_IM27_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 27 Interrupt Mask Mask */
#define XDMAC_GIM_IM27(value)                 (XDMAC_GIM_IM27_Msk & ((value) << XDMAC_GIM_IM27_Pos))
#define   XDMAC_GIM_IM27_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM27_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM27_0                      (XDMAC_GIM_IM27_0_Val << XDMAC_GIM_IM27_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM27_1                      (XDMAC_GIM_IM27_1_Val << XDMAC_GIM_IM27_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM28_Pos                    _U_(28)                                              /**< (XDMAC_GIM) XDMAC Channel 28 Interrupt Mask Position */
#define XDMAC_GIM_IM28_Msk                    (_U_(0x1) << XDMAC_GIM_IM28_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 28 Interrupt Mask Mask */
#define XDMAC_GIM_IM28(value)                 (XDMAC_GIM_IM28_Msk & ((value) << XDMAC_GIM_IM28_Pos))
#define   XDMAC_GIM_IM28_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM28_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM28_0                      (XDMAC_GIM_IM28_0_Val << XDMAC_GIM_IM28_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM28_1                      (XDMAC_GIM_IM28_1_Val << XDMAC_GIM_IM28_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM29_Pos                    _U_(29)                                              /**< (XDMAC_GIM) XDMAC Channel 29 Interrupt Mask Position */
#define XDMAC_GIM_IM29_Msk                    (_U_(0x1) << XDMAC_GIM_IM29_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 29 Interrupt Mask Mask */
#define XDMAC_GIM_IM29(value)                 (XDMAC_GIM_IM29_Msk & ((value) << XDMAC_GIM_IM29_Pos))
#define   XDMAC_GIM_IM29_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM29_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM29_0                      (XDMAC_GIM_IM29_0_Val << XDMAC_GIM_IM29_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM29_1                      (XDMAC_GIM_IM29_1_Val << XDMAC_GIM_IM29_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM30_Pos                    _U_(30)                                              /**< (XDMAC_GIM) XDMAC Channel 30 Interrupt Mask Position */
#define XDMAC_GIM_IM30_Msk                    (_U_(0x1) << XDMAC_GIM_IM30_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 30 Interrupt Mask Mask */
#define XDMAC_GIM_IM30(value)                 (XDMAC_GIM_IM30_Msk & ((value) << XDMAC_GIM_IM30_Pos))
#define   XDMAC_GIM_IM30_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM30_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM30_0                      (XDMAC_GIM_IM30_0_Val << XDMAC_GIM_IM30_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM30_1                      (XDMAC_GIM_IM30_1_Val << XDMAC_GIM_IM30_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_IM31_Pos                    _U_(31)                                              /**< (XDMAC_GIM) XDMAC Channel 31 Interrupt Mask Position */
#define XDMAC_GIM_IM31_Msk                    (_U_(0x1) << XDMAC_GIM_IM31_Pos)                     /**< (XDMAC_GIM) XDMAC Channel 31 Interrupt Mask Mask */
#define XDMAC_GIM_IM31(value)                 (XDMAC_GIM_IM31_Msk & ((value) << XDMAC_GIM_IM31_Pos))
#define   XDMAC_GIM_IM31_0_Val                _U_(0x0)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised.  */
#define   XDMAC_GIM_IM31_1_Val                _U_(0x1)                                             /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked.  */
#define XDMAC_GIM_IM31_0                      (XDMAC_GIM_IM31_0_Val << XDMAC_GIM_IM31_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is masked. The interrupt line is not raised. Position  */
#define XDMAC_GIM_IM31_1                      (XDMAC_GIM_IM31_1_Val << XDMAC_GIM_IM31_Pos)         /**< (XDMAC_GIM) This bit indicates that the channel x interrupt source is unmasked. Position  */
#define XDMAC_GIM_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GIM) Register Mask  */

#define XDMAC_GIM_IM_Pos                      _U_(0)                                               /**< (XDMAC_GIM Position) XDMAC Channel 3x Interrupt Mask */
#define XDMAC_GIM_IM_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GIM_IM_Pos)                /**< (XDMAC_GIM Mask) IM */
#define XDMAC_GIM_IM(value)                   (XDMAC_GIM_IM_Msk & ((value) << XDMAC_GIM_IM_Pos))   

/* -------- XDMAC_GIS : (XDMAC Offset: 0x18) ( R/ 32) Global Interrupt Status Register -------- */
#define XDMAC_GIS_RESETVALUE                  _U_(0x00)                                            /**<  (XDMAC_GIS) Global Interrupt Status Register  Reset Value */

#define XDMAC_GIS_IS0_Pos                     _U_(0)                                               /**< (XDMAC_GIS) XDMAC Channel 0 Interrupt Status Position */
#define XDMAC_GIS_IS0_Msk                     (_U_(0x1) << XDMAC_GIS_IS0_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 0 Interrupt Status Mask */
#define XDMAC_GIS_IS0(value)                  (XDMAC_GIS_IS0_Msk & ((value) << XDMAC_GIS_IS0_Pos))
#define   XDMAC_GIS_IS0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS0_0                       (XDMAC_GIS_IS0_0_Val << XDMAC_GIS_IS0_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS0_1                       (XDMAC_GIS_IS0_1_Val << XDMAC_GIS_IS0_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS1_Pos                     _U_(1)                                               /**< (XDMAC_GIS) XDMAC Channel 1 Interrupt Status Position */
#define XDMAC_GIS_IS1_Msk                     (_U_(0x1) << XDMAC_GIS_IS1_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 1 Interrupt Status Mask */
#define XDMAC_GIS_IS1(value)                  (XDMAC_GIS_IS1_Msk & ((value) << XDMAC_GIS_IS1_Pos))
#define   XDMAC_GIS_IS1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS1_0                       (XDMAC_GIS_IS1_0_Val << XDMAC_GIS_IS1_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS1_1                       (XDMAC_GIS_IS1_1_Val << XDMAC_GIS_IS1_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS2_Pos                     _U_(2)                                               /**< (XDMAC_GIS) XDMAC Channel 2 Interrupt Status Position */
#define XDMAC_GIS_IS2_Msk                     (_U_(0x1) << XDMAC_GIS_IS2_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 2 Interrupt Status Mask */
#define XDMAC_GIS_IS2(value)                  (XDMAC_GIS_IS2_Msk & ((value) << XDMAC_GIS_IS2_Pos))
#define   XDMAC_GIS_IS2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS2_0                       (XDMAC_GIS_IS2_0_Val << XDMAC_GIS_IS2_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS2_1                       (XDMAC_GIS_IS2_1_Val << XDMAC_GIS_IS2_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS3_Pos                     _U_(3)                                               /**< (XDMAC_GIS) XDMAC Channel 3 Interrupt Status Position */
#define XDMAC_GIS_IS3_Msk                     (_U_(0x1) << XDMAC_GIS_IS3_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 3 Interrupt Status Mask */
#define XDMAC_GIS_IS3(value)                  (XDMAC_GIS_IS3_Msk & ((value) << XDMAC_GIS_IS3_Pos))
#define   XDMAC_GIS_IS3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS3_0                       (XDMAC_GIS_IS3_0_Val << XDMAC_GIS_IS3_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS3_1                       (XDMAC_GIS_IS3_1_Val << XDMAC_GIS_IS3_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS4_Pos                     _U_(4)                                               /**< (XDMAC_GIS) XDMAC Channel 4 Interrupt Status Position */
#define XDMAC_GIS_IS4_Msk                     (_U_(0x1) << XDMAC_GIS_IS4_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 4 Interrupt Status Mask */
#define XDMAC_GIS_IS4(value)                  (XDMAC_GIS_IS4_Msk & ((value) << XDMAC_GIS_IS4_Pos))
#define   XDMAC_GIS_IS4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS4_0                       (XDMAC_GIS_IS4_0_Val << XDMAC_GIS_IS4_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS4_1                       (XDMAC_GIS_IS4_1_Val << XDMAC_GIS_IS4_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS5_Pos                     _U_(5)                                               /**< (XDMAC_GIS) XDMAC Channel 5 Interrupt Status Position */
#define XDMAC_GIS_IS5_Msk                     (_U_(0x1) << XDMAC_GIS_IS5_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 5 Interrupt Status Mask */
#define XDMAC_GIS_IS5(value)                  (XDMAC_GIS_IS5_Msk & ((value) << XDMAC_GIS_IS5_Pos))
#define   XDMAC_GIS_IS5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS5_0                       (XDMAC_GIS_IS5_0_Val << XDMAC_GIS_IS5_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS5_1                       (XDMAC_GIS_IS5_1_Val << XDMAC_GIS_IS5_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS6_Pos                     _U_(6)                                               /**< (XDMAC_GIS) XDMAC Channel 6 Interrupt Status Position */
#define XDMAC_GIS_IS6_Msk                     (_U_(0x1) << XDMAC_GIS_IS6_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 6 Interrupt Status Mask */
#define XDMAC_GIS_IS6(value)                  (XDMAC_GIS_IS6_Msk & ((value) << XDMAC_GIS_IS6_Pos))
#define   XDMAC_GIS_IS6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS6_0                       (XDMAC_GIS_IS6_0_Val << XDMAC_GIS_IS6_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS6_1                       (XDMAC_GIS_IS6_1_Val << XDMAC_GIS_IS6_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS7_Pos                     _U_(7)                                               /**< (XDMAC_GIS) XDMAC Channel 7 Interrupt Status Position */
#define XDMAC_GIS_IS7_Msk                     (_U_(0x1) << XDMAC_GIS_IS7_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 7 Interrupt Status Mask */
#define XDMAC_GIS_IS7(value)                  (XDMAC_GIS_IS7_Msk & ((value) << XDMAC_GIS_IS7_Pos))
#define   XDMAC_GIS_IS7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS7_0                       (XDMAC_GIS_IS7_0_Val << XDMAC_GIS_IS7_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS7_1                       (XDMAC_GIS_IS7_1_Val << XDMAC_GIS_IS7_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS8_Pos                     _U_(8)                                               /**< (XDMAC_GIS) XDMAC Channel 8 Interrupt Status Position */
#define XDMAC_GIS_IS8_Msk                     (_U_(0x1) << XDMAC_GIS_IS8_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 8 Interrupt Status Mask */
#define XDMAC_GIS_IS8(value)                  (XDMAC_GIS_IS8_Msk & ((value) << XDMAC_GIS_IS8_Pos))
#define   XDMAC_GIS_IS8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS8_0                       (XDMAC_GIS_IS8_0_Val << XDMAC_GIS_IS8_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS8_1                       (XDMAC_GIS_IS8_1_Val << XDMAC_GIS_IS8_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS9_Pos                     _U_(9)                                               /**< (XDMAC_GIS) XDMAC Channel 9 Interrupt Status Position */
#define XDMAC_GIS_IS9_Msk                     (_U_(0x1) << XDMAC_GIS_IS9_Pos)                      /**< (XDMAC_GIS) XDMAC Channel 9 Interrupt Status Mask */
#define XDMAC_GIS_IS9(value)                  (XDMAC_GIS_IS9_Msk & ((value) << XDMAC_GIS_IS9_Pos))
#define   XDMAC_GIS_IS9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS9_0                       (XDMAC_GIS_IS9_0_Val << XDMAC_GIS_IS9_Pos)           /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS9_1                       (XDMAC_GIS_IS9_1_Val << XDMAC_GIS_IS9_Pos)           /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS10_Pos                    _U_(10)                                              /**< (XDMAC_GIS) XDMAC Channel 10 Interrupt Status Position */
#define XDMAC_GIS_IS10_Msk                    (_U_(0x1) << XDMAC_GIS_IS10_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 10 Interrupt Status Mask */
#define XDMAC_GIS_IS10(value)                 (XDMAC_GIS_IS10_Msk & ((value) << XDMAC_GIS_IS10_Pos))
#define   XDMAC_GIS_IS10_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS10_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS10_0                      (XDMAC_GIS_IS10_0_Val << XDMAC_GIS_IS10_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS10_1                      (XDMAC_GIS_IS10_1_Val << XDMAC_GIS_IS10_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS11_Pos                    _U_(11)                                              /**< (XDMAC_GIS) XDMAC Channel 11 Interrupt Status Position */
#define XDMAC_GIS_IS11_Msk                    (_U_(0x1) << XDMAC_GIS_IS11_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 11 Interrupt Status Mask */
#define XDMAC_GIS_IS11(value)                 (XDMAC_GIS_IS11_Msk & ((value) << XDMAC_GIS_IS11_Pos))
#define   XDMAC_GIS_IS11_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS11_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS11_0                      (XDMAC_GIS_IS11_0_Val << XDMAC_GIS_IS11_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS11_1                      (XDMAC_GIS_IS11_1_Val << XDMAC_GIS_IS11_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS12_Pos                    _U_(12)                                              /**< (XDMAC_GIS) XDMAC Channel 12 Interrupt Status Position */
#define XDMAC_GIS_IS12_Msk                    (_U_(0x1) << XDMAC_GIS_IS12_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 12 Interrupt Status Mask */
#define XDMAC_GIS_IS12(value)                 (XDMAC_GIS_IS12_Msk & ((value) << XDMAC_GIS_IS12_Pos))
#define   XDMAC_GIS_IS12_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS12_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS12_0                      (XDMAC_GIS_IS12_0_Val << XDMAC_GIS_IS12_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS12_1                      (XDMAC_GIS_IS12_1_Val << XDMAC_GIS_IS12_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS13_Pos                    _U_(13)                                              /**< (XDMAC_GIS) XDMAC Channel 13 Interrupt Status Position */
#define XDMAC_GIS_IS13_Msk                    (_U_(0x1) << XDMAC_GIS_IS13_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 13 Interrupt Status Mask */
#define XDMAC_GIS_IS13(value)                 (XDMAC_GIS_IS13_Msk & ((value) << XDMAC_GIS_IS13_Pos))
#define   XDMAC_GIS_IS13_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS13_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS13_0                      (XDMAC_GIS_IS13_0_Val << XDMAC_GIS_IS13_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS13_1                      (XDMAC_GIS_IS13_1_Val << XDMAC_GIS_IS13_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS14_Pos                    _U_(14)                                              /**< (XDMAC_GIS) XDMAC Channel 14 Interrupt Status Position */
#define XDMAC_GIS_IS14_Msk                    (_U_(0x1) << XDMAC_GIS_IS14_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 14 Interrupt Status Mask */
#define XDMAC_GIS_IS14(value)                 (XDMAC_GIS_IS14_Msk & ((value) << XDMAC_GIS_IS14_Pos))
#define   XDMAC_GIS_IS14_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS14_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS14_0                      (XDMAC_GIS_IS14_0_Val << XDMAC_GIS_IS14_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS14_1                      (XDMAC_GIS_IS14_1_Val << XDMAC_GIS_IS14_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS15_Pos                    _U_(15)                                              /**< (XDMAC_GIS) XDMAC Channel 15 Interrupt Status Position */
#define XDMAC_GIS_IS15_Msk                    (_U_(0x1) << XDMAC_GIS_IS15_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 15 Interrupt Status Mask */
#define XDMAC_GIS_IS15(value)                 (XDMAC_GIS_IS15_Msk & ((value) << XDMAC_GIS_IS15_Pos))
#define   XDMAC_GIS_IS15_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS15_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS15_0                      (XDMAC_GIS_IS15_0_Val << XDMAC_GIS_IS15_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS15_1                      (XDMAC_GIS_IS15_1_Val << XDMAC_GIS_IS15_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS16_Pos                    _U_(16)                                              /**< (XDMAC_GIS) XDMAC Channel 16 Interrupt Status Position */
#define XDMAC_GIS_IS16_Msk                    (_U_(0x1) << XDMAC_GIS_IS16_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 16 Interrupt Status Mask */
#define XDMAC_GIS_IS16(value)                 (XDMAC_GIS_IS16_Msk & ((value) << XDMAC_GIS_IS16_Pos))
#define   XDMAC_GIS_IS16_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS16_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS16_0                      (XDMAC_GIS_IS16_0_Val << XDMAC_GIS_IS16_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS16_1                      (XDMAC_GIS_IS16_1_Val << XDMAC_GIS_IS16_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS17_Pos                    _U_(17)                                              /**< (XDMAC_GIS) XDMAC Channel 17 Interrupt Status Position */
#define XDMAC_GIS_IS17_Msk                    (_U_(0x1) << XDMAC_GIS_IS17_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 17 Interrupt Status Mask */
#define XDMAC_GIS_IS17(value)                 (XDMAC_GIS_IS17_Msk & ((value) << XDMAC_GIS_IS17_Pos))
#define   XDMAC_GIS_IS17_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS17_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS17_0                      (XDMAC_GIS_IS17_0_Val << XDMAC_GIS_IS17_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS17_1                      (XDMAC_GIS_IS17_1_Val << XDMAC_GIS_IS17_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS18_Pos                    _U_(18)                                              /**< (XDMAC_GIS) XDMAC Channel 18 Interrupt Status Position */
#define XDMAC_GIS_IS18_Msk                    (_U_(0x1) << XDMAC_GIS_IS18_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 18 Interrupt Status Mask */
#define XDMAC_GIS_IS18(value)                 (XDMAC_GIS_IS18_Msk & ((value) << XDMAC_GIS_IS18_Pos))
#define   XDMAC_GIS_IS18_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS18_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS18_0                      (XDMAC_GIS_IS18_0_Val << XDMAC_GIS_IS18_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS18_1                      (XDMAC_GIS_IS18_1_Val << XDMAC_GIS_IS18_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS19_Pos                    _U_(19)                                              /**< (XDMAC_GIS) XDMAC Channel 19 Interrupt Status Position */
#define XDMAC_GIS_IS19_Msk                    (_U_(0x1) << XDMAC_GIS_IS19_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 19 Interrupt Status Mask */
#define XDMAC_GIS_IS19(value)                 (XDMAC_GIS_IS19_Msk & ((value) << XDMAC_GIS_IS19_Pos))
#define   XDMAC_GIS_IS19_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS19_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS19_0                      (XDMAC_GIS_IS19_0_Val << XDMAC_GIS_IS19_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS19_1                      (XDMAC_GIS_IS19_1_Val << XDMAC_GIS_IS19_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS20_Pos                    _U_(20)                                              /**< (XDMAC_GIS) XDMAC Channel 20 Interrupt Status Position */
#define XDMAC_GIS_IS20_Msk                    (_U_(0x1) << XDMAC_GIS_IS20_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 20 Interrupt Status Mask */
#define XDMAC_GIS_IS20(value)                 (XDMAC_GIS_IS20_Msk & ((value) << XDMAC_GIS_IS20_Pos))
#define   XDMAC_GIS_IS20_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS20_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS20_0                      (XDMAC_GIS_IS20_0_Val << XDMAC_GIS_IS20_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS20_1                      (XDMAC_GIS_IS20_1_Val << XDMAC_GIS_IS20_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS21_Pos                    _U_(21)                                              /**< (XDMAC_GIS) XDMAC Channel 21 Interrupt Status Position */
#define XDMAC_GIS_IS21_Msk                    (_U_(0x1) << XDMAC_GIS_IS21_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 21 Interrupt Status Mask */
#define XDMAC_GIS_IS21(value)                 (XDMAC_GIS_IS21_Msk & ((value) << XDMAC_GIS_IS21_Pos))
#define   XDMAC_GIS_IS21_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS21_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS21_0                      (XDMAC_GIS_IS21_0_Val << XDMAC_GIS_IS21_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS21_1                      (XDMAC_GIS_IS21_1_Val << XDMAC_GIS_IS21_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS22_Pos                    _U_(22)                                              /**< (XDMAC_GIS) XDMAC Channel 22 Interrupt Status Position */
#define XDMAC_GIS_IS22_Msk                    (_U_(0x1) << XDMAC_GIS_IS22_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 22 Interrupt Status Mask */
#define XDMAC_GIS_IS22(value)                 (XDMAC_GIS_IS22_Msk & ((value) << XDMAC_GIS_IS22_Pos))
#define   XDMAC_GIS_IS22_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS22_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS22_0                      (XDMAC_GIS_IS22_0_Val << XDMAC_GIS_IS22_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS22_1                      (XDMAC_GIS_IS22_1_Val << XDMAC_GIS_IS22_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS23_Pos                    _U_(23)                                              /**< (XDMAC_GIS) XDMAC Channel 23 Interrupt Status Position */
#define XDMAC_GIS_IS23_Msk                    (_U_(0x1) << XDMAC_GIS_IS23_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 23 Interrupt Status Mask */
#define XDMAC_GIS_IS23(value)                 (XDMAC_GIS_IS23_Msk & ((value) << XDMAC_GIS_IS23_Pos))
#define   XDMAC_GIS_IS23_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS23_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS23_0                      (XDMAC_GIS_IS23_0_Val << XDMAC_GIS_IS23_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS23_1                      (XDMAC_GIS_IS23_1_Val << XDMAC_GIS_IS23_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS24_Pos                    _U_(24)                                              /**< (XDMAC_GIS) XDMAC Channel 24 Interrupt Status Position */
#define XDMAC_GIS_IS24_Msk                    (_U_(0x1) << XDMAC_GIS_IS24_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 24 Interrupt Status Mask */
#define XDMAC_GIS_IS24(value)                 (XDMAC_GIS_IS24_Msk & ((value) << XDMAC_GIS_IS24_Pos))
#define   XDMAC_GIS_IS24_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS24_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS24_0                      (XDMAC_GIS_IS24_0_Val << XDMAC_GIS_IS24_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS24_1                      (XDMAC_GIS_IS24_1_Val << XDMAC_GIS_IS24_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS25_Pos                    _U_(25)                                              /**< (XDMAC_GIS) XDMAC Channel 25 Interrupt Status Position */
#define XDMAC_GIS_IS25_Msk                    (_U_(0x1) << XDMAC_GIS_IS25_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 25 Interrupt Status Mask */
#define XDMAC_GIS_IS25(value)                 (XDMAC_GIS_IS25_Msk & ((value) << XDMAC_GIS_IS25_Pos))
#define   XDMAC_GIS_IS25_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS25_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS25_0                      (XDMAC_GIS_IS25_0_Val << XDMAC_GIS_IS25_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS25_1                      (XDMAC_GIS_IS25_1_Val << XDMAC_GIS_IS25_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS26_Pos                    _U_(26)                                              /**< (XDMAC_GIS) XDMAC Channel 26 Interrupt Status Position */
#define XDMAC_GIS_IS26_Msk                    (_U_(0x1) << XDMAC_GIS_IS26_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 26 Interrupt Status Mask */
#define XDMAC_GIS_IS26(value)                 (XDMAC_GIS_IS26_Msk & ((value) << XDMAC_GIS_IS26_Pos))
#define   XDMAC_GIS_IS26_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS26_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS26_0                      (XDMAC_GIS_IS26_0_Val << XDMAC_GIS_IS26_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS26_1                      (XDMAC_GIS_IS26_1_Val << XDMAC_GIS_IS26_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS27_Pos                    _U_(27)                                              /**< (XDMAC_GIS) XDMAC Channel 27 Interrupt Status Position */
#define XDMAC_GIS_IS27_Msk                    (_U_(0x1) << XDMAC_GIS_IS27_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 27 Interrupt Status Mask */
#define XDMAC_GIS_IS27(value)                 (XDMAC_GIS_IS27_Msk & ((value) << XDMAC_GIS_IS27_Pos))
#define   XDMAC_GIS_IS27_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS27_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS27_0                      (XDMAC_GIS_IS27_0_Val << XDMAC_GIS_IS27_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS27_1                      (XDMAC_GIS_IS27_1_Val << XDMAC_GIS_IS27_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS28_Pos                    _U_(28)                                              /**< (XDMAC_GIS) XDMAC Channel 28 Interrupt Status Position */
#define XDMAC_GIS_IS28_Msk                    (_U_(0x1) << XDMAC_GIS_IS28_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 28 Interrupt Status Mask */
#define XDMAC_GIS_IS28(value)                 (XDMAC_GIS_IS28_Msk & ((value) << XDMAC_GIS_IS28_Pos))
#define   XDMAC_GIS_IS28_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS28_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS28_0                      (XDMAC_GIS_IS28_0_Val << XDMAC_GIS_IS28_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS28_1                      (XDMAC_GIS_IS28_1_Val << XDMAC_GIS_IS28_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS29_Pos                    _U_(29)                                              /**< (XDMAC_GIS) XDMAC Channel 29 Interrupt Status Position */
#define XDMAC_GIS_IS29_Msk                    (_U_(0x1) << XDMAC_GIS_IS29_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 29 Interrupt Status Mask */
#define XDMAC_GIS_IS29(value)                 (XDMAC_GIS_IS29_Msk & ((value) << XDMAC_GIS_IS29_Pos))
#define   XDMAC_GIS_IS29_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS29_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS29_0                      (XDMAC_GIS_IS29_0_Val << XDMAC_GIS_IS29_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS29_1                      (XDMAC_GIS_IS29_1_Val << XDMAC_GIS_IS29_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS30_Pos                    _U_(30)                                              /**< (XDMAC_GIS) XDMAC Channel 30 Interrupt Status Position */
#define XDMAC_GIS_IS30_Msk                    (_U_(0x1) << XDMAC_GIS_IS30_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 30 Interrupt Status Mask */
#define XDMAC_GIS_IS30(value)                 (XDMAC_GIS_IS30_Msk & ((value) << XDMAC_GIS_IS30_Pos))
#define   XDMAC_GIS_IS30_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS30_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS30_0                      (XDMAC_GIS_IS30_0_Val << XDMAC_GIS_IS30_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS30_1                      (XDMAC_GIS_IS30_1_Val << XDMAC_GIS_IS30_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_IS31_Pos                    _U_(31)                                              /**< (XDMAC_GIS) XDMAC Channel 31 Interrupt Status Position */
#define XDMAC_GIS_IS31_Msk                    (_U_(0x1) << XDMAC_GIS_IS31_Pos)                     /**< (XDMAC_GIS) XDMAC Channel 31 Interrupt Status Mask */
#define XDMAC_GIS_IS31(value)                 (XDMAC_GIS_IS31_Msk & ((value) << XDMAC_GIS_IS31_Pos))
#define   XDMAC_GIS_IS31_0_Val                _U_(0x0)                                             /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x.  */
#define   XDMAC_GIS_IS31_1_Val                _U_(0x1)                                             /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x.  */
#define XDMAC_GIS_IS31_0                      (XDMAC_GIS_IS31_0_Val << XDMAC_GIS_IS31_Pos)         /**< (XDMAC_GIS) This bit indicates that either the interrupt source is masked at the channel level or no interrupt is pending for channel x. Position  */
#define XDMAC_GIS_IS31_1                      (XDMAC_GIS_IS31_1_Val << XDMAC_GIS_IS31_Pos)         /**< (XDMAC_GIS) This bit indicates that an interrupt is pending for the channel x. Position  */
#define XDMAC_GIS_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GIS) Register Mask  */

#define XDMAC_GIS_IS_Pos                      _U_(0)                                               /**< (XDMAC_GIS Position) XDMAC Channel 3x Interrupt Status */
#define XDMAC_GIS_IS_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GIS_IS_Pos)                /**< (XDMAC_GIS Mask) IS */
#define XDMAC_GIS_IS(value)                   (XDMAC_GIS_IS_Msk & ((value) << XDMAC_GIS_IS_Pos))   

/* -------- XDMAC_GE : (XDMAC Offset: 0x1C) ( /W 32) Global Channel Enable Register -------- */
#define XDMAC_GE_EN0_Pos                      _U_(0)                                               /**< (XDMAC_GE) XDMAC Channel 0 Enable Position */
#define XDMAC_GE_EN0_Msk                      (_U_(0x1) << XDMAC_GE_EN0_Pos)                       /**< (XDMAC_GE) XDMAC Channel 0 Enable Mask */
#define XDMAC_GE_EN0(value)                   (XDMAC_GE_EN0_Msk & ((value) << XDMAC_GE_EN0_Pos))  
#define   XDMAC_GE_EN0_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN0_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN0_0                        (XDMAC_GE_EN0_0_Val << XDMAC_GE_EN0_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN0_1                        (XDMAC_GE_EN0_1_Val << XDMAC_GE_EN0_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN1_Pos                      _U_(1)                                               /**< (XDMAC_GE) XDMAC Channel 1 Enable Position */
#define XDMAC_GE_EN1_Msk                      (_U_(0x1) << XDMAC_GE_EN1_Pos)                       /**< (XDMAC_GE) XDMAC Channel 1 Enable Mask */
#define XDMAC_GE_EN1(value)                   (XDMAC_GE_EN1_Msk & ((value) << XDMAC_GE_EN1_Pos))  
#define   XDMAC_GE_EN1_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN1_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN1_0                        (XDMAC_GE_EN1_0_Val << XDMAC_GE_EN1_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN1_1                        (XDMAC_GE_EN1_1_Val << XDMAC_GE_EN1_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN2_Pos                      _U_(2)                                               /**< (XDMAC_GE) XDMAC Channel 2 Enable Position */
#define XDMAC_GE_EN2_Msk                      (_U_(0x1) << XDMAC_GE_EN2_Pos)                       /**< (XDMAC_GE) XDMAC Channel 2 Enable Mask */
#define XDMAC_GE_EN2(value)                   (XDMAC_GE_EN2_Msk & ((value) << XDMAC_GE_EN2_Pos))  
#define   XDMAC_GE_EN2_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN2_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN2_0                        (XDMAC_GE_EN2_0_Val << XDMAC_GE_EN2_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN2_1                        (XDMAC_GE_EN2_1_Val << XDMAC_GE_EN2_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN3_Pos                      _U_(3)                                               /**< (XDMAC_GE) XDMAC Channel 3 Enable Position */
#define XDMAC_GE_EN3_Msk                      (_U_(0x1) << XDMAC_GE_EN3_Pos)                       /**< (XDMAC_GE) XDMAC Channel 3 Enable Mask */
#define XDMAC_GE_EN3(value)                   (XDMAC_GE_EN3_Msk & ((value) << XDMAC_GE_EN3_Pos))  
#define   XDMAC_GE_EN3_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN3_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN3_0                        (XDMAC_GE_EN3_0_Val << XDMAC_GE_EN3_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN3_1                        (XDMAC_GE_EN3_1_Val << XDMAC_GE_EN3_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN4_Pos                      _U_(4)                                               /**< (XDMAC_GE) XDMAC Channel 4 Enable Position */
#define XDMAC_GE_EN4_Msk                      (_U_(0x1) << XDMAC_GE_EN4_Pos)                       /**< (XDMAC_GE) XDMAC Channel 4 Enable Mask */
#define XDMAC_GE_EN4(value)                   (XDMAC_GE_EN4_Msk & ((value) << XDMAC_GE_EN4_Pos))  
#define   XDMAC_GE_EN4_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN4_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN4_0                        (XDMAC_GE_EN4_0_Val << XDMAC_GE_EN4_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN4_1                        (XDMAC_GE_EN4_1_Val << XDMAC_GE_EN4_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN5_Pos                      _U_(5)                                               /**< (XDMAC_GE) XDMAC Channel 5 Enable Position */
#define XDMAC_GE_EN5_Msk                      (_U_(0x1) << XDMAC_GE_EN5_Pos)                       /**< (XDMAC_GE) XDMAC Channel 5 Enable Mask */
#define XDMAC_GE_EN5(value)                   (XDMAC_GE_EN5_Msk & ((value) << XDMAC_GE_EN5_Pos))  
#define   XDMAC_GE_EN5_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN5_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN5_0                        (XDMAC_GE_EN5_0_Val << XDMAC_GE_EN5_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN5_1                        (XDMAC_GE_EN5_1_Val << XDMAC_GE_EN5_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN6_Pos                      _U_(6)                                               /**< (XDMAC_GE) XDMAC Channel 6 Enable Position */
#define XDMAC_GE_EN6_Msk                      (_U_(0x1) << XDMAC_GE_EN6_Pos)                       /**< (XDMAC_GE) XDMAC Channel 6 Enable Mask */
#define XDMAC_GE_EN6(value)                   (XDMAC_GE_EN6_Msk & ((value) << XDMAC_GE_EN6_Pos))  
#define   XDMAC_GE_EN6_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN6_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN6_0                        (XDMAC_GE_EN6_0_Val << XDMAC_GE_EN6_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN6_1                        (XDMAC_GE_EN6_1_Val << XDMAC_GE_EN6_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN7_Pos                      _U_(7)                                               /**< (XDMAC_GE) XDMAC Channel 7 Enable Position */
#define XDMAC_GE_EN7_Msk                      (_U_(0x1) << XDMAC_GE_EN7_Pos)                       /**< (XDMAC_GE) XDMAC Channel 7 Enable Mask */
#define XDMAC_GE_EN7(value)                   (XDMAC_GE_EN7_Msk & ((value) << XDMAC_GE_EN7_Pos))  
#define   XDMAC_GE_EN7_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN7_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN7_0                        (XDMAC_GE_EN7_0_Val << XDMAC_GE_EN7_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN7_1                        (XDMAC_GE_EN7_1_Val << XDMAC_GE_EN7_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN8_Pos                      _U_(8)                                               /**< (XDMAC_GE) XDMAC Channel 8 Enable Position */
#define XDMAC_GE_EN8_Msk                      (_U_(0x1) << XDMAC_GE_EN8_Pos)                       /**< (XDMAC_GE) XDMAC Channel 8 Enable Mask */
#define XDMAC_GE_EN8(value)                   (XDMAC_GE_EN8_Msk & ((value) << XDMAC_GE_EN8_Pos))  
#define   XDMAC_GE_EN8_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN8_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN8_0                        (XDMAC_GE_EN8_0_Val << XDMAC_GE_EN8_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN8_1                        (XDMAC_GE_EN8_1_Val << XDMAC_GE_EN8_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN9_Pos                      _U_(9)                                               /**< (XDMAC_GE) XDMAC Channel 9 Enable Position */
#define XDMAC_GE_EN9_Msk                      (_U_(0x1) << XDMAC_GE_EN9_Pos)                       /**< (XDMAC_GE) XDMAC Channel 9 Enable Mask */
#define XDMAC_GE_EN9(value)                   (XDMAC_GE_EN9_Msk & ((value) << XDMAC_GE_EN9_Pos))  
#define   XDMAC_GE_EN9_0_Val                  _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN9_1_Val                  _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN9_0                        (XDMAC_GE_EN9_0_Val << XDMAC_GE_EN9_Pos)             /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN9_1                        (XDMAC_GE_EN9_1_Val << XDMAC_GE_EN9_Pos)             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN10_Pos                     _U_(10)                                              /**< (XDMAC_GE) XDMAC Channel 10 Enable Position */
#define XDMAC_GE_EN10_Msk                     (_U_(0x1) << XDMAC_GE_EN10_Pos)                      /**< (XDMAC_GE) XDMAC Channel 10 Enable Mask */
#define XDMAC_GE_EN10(value)                  (XDMAC_GE_EN10_Msk & ((value) << XDMAC_GE_EN10_Pos))
#define   XDMAC_GE_EN10_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN10_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN10_0                       (XDMAC_GE_EN10_0_Val << XDMAC_GE_EN10_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN10_1                       (XDMAC_GE_EN10_1_Val << XDMAC_GE_EN10_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN11_Pos                     _U_(11)                                              /**< (XDMAC_GE) XDMAC Channel 11 Enable Position */
#define XDMAC_GE_EN11_Msk                     (_U_(0x1) << XDMAC_GE_EN11_Pos)                      /**< (XDMAC_GE) XDMAC Channel 11 Enable Mask */
#define XDMAC_GE_EN11(value)                  (XDMAC_GE_EN11_Msk & ((value) << XDMAC_GE_EN11_Pos))
#define   XDMAC_GE_EN11_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN11_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN11_0                       (XDMAC_GE_EN11_0_Val << XDMAC_GE_EN11_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN11_1                       (XDMAC_GE_EN11_1_Val << XDMAC_GE_EN11_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN12_Pos                     _U_(12)                                              /**< (XDMAC_GE) XDMAC Channel 12 Enable Position */
#define XDMAC_GE_EN12_Msk                     (_U_(0x1) << XDMAC_GE_EN12_Pos)                      /**< (XDMAC_GE) XDMAC Channel 12 Enable Mask */
#define XDMAC_GE_EN12(value)                  (XDMAC_GE_EN12_Msk & ((value) << XDMAC_GE_EN12_Pos))
#define   XDMAC_GE_EN12_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN12_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN12_0                       (XDMAC_GE_EN12_0_Val << XDMAC_GE_EN12_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN12_1                       (XDMAC_GE_EN12_1_Val << XDMAC_GE_EN12_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN13_Pos                     _U_(13)                                              /**< (XDMAC_GE) XDMAC Channel 13 Enable Position */
#define XDMAC_GE_EN13_Msk                     (_U_(0x1) << XDMAC_GE_EN13_Pos)                      /**< (XDMAC_GE) XDMAC Channel 13 Enable Mask */
#define XDMAC_GE_EN13(value)                  (XDMAC_GE_EN13_Msk & ((value) << XDMAC_GE_EN13_Pos))
#define   XDMAC_GE_EN13_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN13_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN13_0                       (XDMAC_GE_EN13_0_Val << XDMAC_GE_EN13_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN13_1                       (XDMAC_GE_EN13_1_Val << XDMAC_GE_EN13_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN14_Pos                     _U_(14)                                              /**< (XDMAC_GE) XDMAC Channel 14 Enable Position */
#define XDMAC_GE_EN14_Msk                     (_U_(0x1) << XDMAC_GE_EN14_Pos)                      /**< (XDMAC_GE) XDMAC Channel 14 Enable Mask */
#define XDMAC_GE_EN14(value)                  (XDMAC_GE_EN14_Msk & ((value) << XDMAC_GE_EN14_Pos))
#define   XDMAC_GE_EN14_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN14_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN14_0                       (XDMAC_GE_EN14_0_Val << XDMAC_GE_EN14_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN14_1                       (XDMAC_GE_EN14_1_Val << XDMAC_GE_EN14_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN15_Pos                     _U_(15)                                              /**< (XDMAC_GE) XDMAC Channel 15 Enable Position */
#define XDMAC_GE_EN15_Msk                     (_U_(0x1) << XDMAC_GE_EN15_Pos)                      /**< (XDMAC_GE) XDMAC Channel 15 Enable Mask */
#define XDMAC_GE_EN15(value)                  (XDMAC_GE_EN15_Msk & ((value) << XDMAC_GE_EN15_Pos))
#define   XDMAC_GE_EN15_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN15_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN15_0                       (XDMAC_GE_EN15_0_Val << XDMAC_GE_EN15_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN15_1                       (XDMAC_GE_EN15_1_Val << XDMAC_GE_EN15_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN16_Pos                     _U_(16)                                              /**< (XDMAC_GE) XDMAC Channel 16 Enable Position */
#define XDMAC_GE_EN16_Msk                     (_U_(0x1) << XDMAC_GE_EN16_Pos)                      /**< (XDMAC_GE) XDMAC Channel 16 Enable Mask */
#define XDMAC_GE_EN16(value)                  (XDMAC_GE_EN16_Msk & ((value) << XDMAC_GE_EN16_Pos))
#define   XDMAC_GE_EN16_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN16_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN16_0                       (XDMAC_GE_EN16_0_Val << XDMAC_GE_EN16_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN16_1                       (XDMAC_GE_EN16_1_Val << XDMAC_GE_EN16_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN17_Pos                     _U_(17)                                              /**< (XDMAC_GE) XDMAC Channel 17 Enable Position */
#define XDMAC_GE_EN17_Msk                     (_U_(0x1) << XDMAC_GE_EN17_Pos)                      /**< (XDMAC_GE) XDMAC Channel 17 Enable Mask */
#define XDMAC_GE_EN17(value)                  (XDMAC_GE_EN17_Msk & ((value) << XDMAC_GE_EN17_Pos))
#define   XDMAC_GE_EN17_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN17_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN17_0                       (XDMAC_GE_EN17_0_Val << XDMAC_GE_EN17_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN17_1                       (XDMAC_GE_EN17_1_Val << XDMAC_GE_EN17_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN18_Pos                     _U_(18)                                              /**< (XDMAC_GE) XDMAC Channel 18 Enable Position */
#define XDMAC_GE_EN18_Msk                     (_U_(0x1) << XDMAC_GE_EN18_Pos)                      /**< (XDMAC_GE) XDMAC Channel 18 Enable Mask */
#define XDMAC_GE_EN18(value)                  (XDMAC_GE_EN18_Msk & ((value) << XDMAC_GE_EN18_Pos))
#define   XDMAC_GE_EN18_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN18_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN18_0                       (XDMAC_GE_EN18_0_Val << XDMAC_GE_EN18_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN18_1                       (XDMAC_GE_EN18_1_Val << XDMAC_GE_EN18_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN19_Pos                     _U_(19)                                              /**< (XDMAC_GE) XDMAC Channel 19 Enable Position */
#define XDMAC_GE_EN19_Msk                     (_U_(0x1) << XDMAC_GE_EN19_Pos)                      /**< (XDMAC_GE) XDMAC Channel 19 Enable Mask */
#define XDMAC_GE_EN19(value)                  (XDMAC_GE_EN19_Msk & ((value) << XDMAC_GE_EN19_Pos))
#define   XDMAC_GE_EN19_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN19_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN19_0                       (XDMAC_GE_EN19_0_Val << XDMAC_GE_EN19_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN19_1                       (XDMAC_GE_EN19_1_Val << XDMAC_GE_EN19_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN20_Pos                     _U_(20)                                              /**< (XDMAC_GE) XDMAC Channel 20 Enable Position */
#define XDMAC_GE_EN20_Msk                     (_U_(0x1) << XDMAC_GE_EN20_Pos)                      /**< (XDMAC_GE) XDMAC Channel 20 Enable Mask */
#define XDMAC_GE_EN20(value)                  (XDMAC_GE_EN20_Msk & ((value) << XDMAC_GE_EN20_Pos))
#define   XDMAC_GE_EN20_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN20_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN20_0                       (XDMAC_GE_EN20_0_Val << XDMAC_GE_EN20_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN20_1                       (XDMAC_GE_EN20_1_Val << XDMAC_GE_EN20_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN21_Pos                     _U_(21)                                              /**< (XDMAC_GE) XDMAC Channel 21 Enable Position */
#define XDMAC_GE_EN21_Msk                     (_U_(0x1) << XDMAC_GE_EN21_Pos)                      /**< (XDMAC_GE) XDMAC Channel 21 Enable Mask */
#define XDMAC_GE_EN21(value)                  (XDMAC_GE_EN21_Msk & ((value) << XDMAC_GE_EN21_Pos))
#define   XDMAC_GE_EN21_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN21_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN21_0                       (XDMAC_GE_EN21_0_Val << XDMAC_GE_EN21_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN21_1                       (XDMAC_GE_EN21_1_Val << XDMAC_GE_EN21_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN22_Pos                     _U_(22)                                              /**< (XDMAC_GE) XDMAC Channel 22 Enable Position */
#define XDMAC_GE_EN22_Msk                     (_U_(0x1) << XDMAC_GE_EN22_Pos)                      /**< (XDMAC_GE) XDMAC Channel 22 Enable Mask */
#define XDMAC_GE_EN22(value)                  (XDMAC_GE_EN22_Msk & ((value) << XDMAC_GE_EN22_Pos))
#define   XDMAC_GE_EN22_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN22_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN22_0                       (XDMAC_GE_EN22_0_Val << XDMAC_GE_EN22_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN22_1                       (XDMAC_GE_EN22_1_Val << XDMAC_GE_EN22_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN23_Pos                     _U_(23)                                              /**< (XDMAC_GE) XDMAC Channel 23 Enable Position */
#define XDMAC_GE_EN23_Msk                     (_U_(0x1) << XDMAC_GE_EN23_Pos)                      /**< (XDMAC_GE) XDMAC Channel 23 Enable Mask */
#define XDMAC_GE_EN23(value)                  (XDMAC_GE_EN23_Msk & ((value) << XDMAC_GE_EN23_Pos))
#define   XDMAC_GE_EN23_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN23_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN23_0                       (XDMAC_GE_EN23_0_Val << XDMAC_GE_EN23_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN23_1                       (XDMAC_GE_EN23_1_Val << XDMAC_GE_EN23_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN24_Pos                     _U_(24)                                              /**< (XDMAC_GE) XDMAC Channel 24 Enable Position */
#define XDMAC_GE_EN24_Msk                     (_U_(0x1) << XDMAC_GE_EN24_Pos)                      /**< (XDMAC_GE) XDMAC Channel 24 Enable Mask */
#define XDMAC_GE_EN24(value)                  (XDMAC_GE_EN24_Msk & ((value) << XDMAC_GE_EN24_Pos))
#define   XDMAC_GE_EN24_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN24_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN24_0                       (XDMAC_GE_EN24_0_Val << XDMAC_GE_EN24_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN24_1                       (XDMAC_GE_EN24_1_Val << XDMAC_GE_EN24_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN25_Pos                     _U_(25)                                              /**< (XDMAC_GE) XDMAC Channel 25 Enable Position */
#define XDMAC_GE_EN25_Msk                     (_U_(0x1) << XDMAC_GE_EN25_Pos)                      /**< (XDMAC_GE) XDMAC Channel 25 Enable Mask */
#define XDMAC_GE_EN25(value)                  (XDMAC_GE_EN25_Msk & ((value) << XDMAC_GE_EN25_Pos))
#define   XDMAC_GE_EN25_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN25_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN25_0                       (XDMAC_GE_EN25_0_Val << XDMAC_GE_EN25_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN25_1                       (XDMAC_GE_EN25_1_Val << XDMAC_GE_EN25_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN26_Pos                     _U_(26)                                              /**< (XDMAC_GE) XDMAC Channel 26 Enable Position */
#define XDMAC_GE_EN26_Msk                     (_U_(0x1) << XDMAC_GE_EN26_Pos)                      /**< (XDMAC_GE) XDMAC Channel 26 Enable Mask */
#define XDMAC_GE_EN26(value)                  (XDMAC_GE_EN26_Msk & ((value) << XDMAC_GE_EN26_Pos))
#define   XDMAC_GE_EN26_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN26_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN26_0                       (XDMAC_GE_EN26_0_Val << XDMAC_GE_EN26_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN26_1                       (XDMAC_GE_EN26_1_Val << XDMAC_GE_EN26_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN27_Pos                     _U_(27)                                              /**< (XDMAC_GE) XDMAC Channel 27 Enable Position */
#define XDMAC_GE_EN27_Msk                     (_U_(0x1) << XDMAC_GE_EN27_Pos)                      /**< (XDMAC_GE) XDMAC Channel 27 Enable Mask */
#define XDMAC_GE_EN27(value)                  (XDMAC_GE_EN27_Msk & ((value) << XDMAC_GE_EN27_Pos))
#define   XDMAC_GE_EN27_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN27_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN27_0                       (XDMAC_GE_EN27_0_Val << XDMAC_GE_EN27_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN27_1                       (XDMAC_GE_EN27_1_Val << XDMAC_GE_EN27_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN28_Pos                     _U_(28)                                              /**< (XDMAC_GE) XDMAC Channel 28 Enable Position */
#define XDMAC_GE_EN28_Msk                     (_U_(0x1) << XDMAC_GE_EN28_Pos)                      /**< (XDMAC_GE) XDMAC Channel 28 Enable Mask */
#define XDMAC_GE_EN28(value)                  (XDMAC_GE_EN28_Msk & ((value) << XDMAC_GE_EN28_Pos))
#define   XDMAC_GE_EN28_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN28_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN28_0                       (XDMAC_GE_EN28_0_Val << XDMAC_GE_EN28_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN28_1                       (XDMAC_GE_EN28_1_Val << XDMAC_GE_EN28_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN29_Pos                     _U_(29)                                              /**< (XDMAC_GE) XDMAC Channel 29 Enable Position */
#define XDMAC_GE_EN29_Msk                     (_U_(0x1) << XDMAC_GE_EN29_Pos)                      /**< (XDMAC_GE) XDMAC Channel 29 Enable Mask */
#define XDMAC_GE_EN29(value)                  (XDMAC_GE_EN29_Msk & ((value) << XDMAC_GE_EN29_Pos))
#define   XDMAC_GE_EN29_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN29_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN29_0                       (XDMAC_GE_EN29_0_Val << XDMAC_GE_EN29_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN29_1                       (XDMAC_GE_EN29_1_Val << XDMAC_GE_EN29_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN30_Pos                     _U_(30)                                              /**< (XDMAC_GE) XDMAC Channel 30 Enable Position */
#define XDMAC_GE_EN30_Msk                     (_U_(0x1) << XDMAC_GE_EN30_Pos)                      /**< (XDMAC_GE) XDMAC Channel 30 Enable Mask */
#define XDMAC_GE_EN30(value)                  (XDMAC_GE_EN30_Msk & ((value) << XDMAC_GE_EN30_Pos))
#define   XDMAC_GE_EN30_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN30_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN30_0                       (XDMAC_GE_EN30_0_Val << XDMAC_GE_EN30_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN30_1                       (XDMAC_GE_EN30_1_Val << XDMAC_GE_EN30_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_EN31_Pos                     _U_(31)                                              /**< (XDMAC_GE) XDMAC Channel 31 Enable Position */
#define XDMAC_GE_EN31_Msk                     (_U_(0x1) << XDMAC_GE_EN31_Pos)                      /**< (XDMAC_GE) XDMAC Channel 31 Enable Mask */
#define XDMAC_GE_EN31(value)                  (XDMAC_GE_EN31_Msk & ((value) << XDMAC_GE_EN31_Pos))
#define   XDMAC_GE_EN31_0_Val                 _U_(0x0)                                             /**< (XDMAC_GE) This bit has no effect.  */
#define   XDMAC_GE_EN31_1_Val                 _U_(0x1)                                             /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0.  */
#define XDMAC_GE_EN31_0                       (XDMAC_GE_EN31_0_Val << XDMAC_GE_EN31_Pos)           /**< (XDMAC_GE) This bit has no effect. Position  */
#define XDMAC_GE_EN31_1                       (XDMAC_GE_EN31_1_Val << XDMAC_GE_EN31_Pos)           /**< (XDMAC_GE) Enables channel x. This operation is permitted if the Channel x Status bit (XDMAC_GS.STx) was read as 0. Position  */
#define XDMAC_GE_Msk                          _U_(0xFFFFFFFF)                                      /**< (XDMAC_GE) Register Mask  */

#define XDMAC_GE_EN_Pos                       _U_(0)                                               /**< (XDMAC_GE Position) XDMAC Channel 3x Enable */
#define XDMAC_GE_EN_Msk                       (_U_(0xFFFFFFFF) << XDMAC_GE_EN_Pos)                 /**< (XDMAC_GE Mask) EN */
#define XDMAC_GE_EN(value)                    (XDMAC_GE_EN_Msk & ((value) << XDMAC_GE_EN_Pos))     

/* -------- XDMAC_GD : (XDMAC Offset: 0x20) ( /W 32) Global Channel Disable Register -------- */
#define XDMAC_GD_DI0_Pos                      _U_(0)                                               /**< (XDMAC_GD) XDMAC Channel 0 Disable Position */
#define XDMAC_GD_DI0_Msk                      (_U_(0x1) << XDMAC_GD_DI0_Pos)                       /**< (XDMAC_GD) XDMAC Channel 0 Disable Mask */
#define XDMAC_GD_DI0(value)                   (XDMAC_GD_DI0_Msk & ((value) << XDMAC_GD_DI0_Pos))  
#define   XDMAC_GD_DI0_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI0_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI0_0                        (XDMAC_GD_DI0_0_Val << XDMAC_GD_DI0_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI0_1                        (XDMAC_GD_DI0_1_Val << XDMAC_GD_DI0_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI1_Pos                      _U_(1)                                               /**< (XDMAC_GD) XDMAC Channel 1 Disable Position */
#define XDMAC_GD_DI1_Msk                      (_U_(0x1) << XDMAC_GD_DI1_Pos)                       /**< (XDMAC_GD) XDMAC Channel 1 Disable Mask */
#define XDMAC_GD_DI1(value)                   (XDMAC_GD_DI1_Msk & ((value) << XDMAC_GD_DI1_Pos))  
#define   XDMAC_GD_DI1_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI1_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI1_0                        (XDMAC_GD_DI1_0_Val << XDMAC_GD_DI1_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI1_1                        (XDMAC_GD_DI1_1_Val << XDMAC_GD_DI1_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI2_Pos                      _U_(2)                                               /**< (XDMAC_GD) XDMAC Channel 2 Disable Position */
#define XDMAC_GD_DI2_Msk                      (_U_(0x1) << XDMAC_GD_DI2_Pos)                       /**< (XDMAC_GD) XDMAC Channel 2 Disable Mask */
#define XDMAC_GD_DI2(value)                   (XDMAC_GD_DI2_Msk & ((value) << XDMAC_GD_DI2_Pos))  
#define   XDMAC_GD_DI2_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI2_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI2_0                        (XDMAC_GD_DI2_0_Val << XDMAC_GD_DI2_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI2_1                        (XDMAC_GD_DI2_1_Val << XDMAC_GD_DI2_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI3_Pos                      _U_(3)                                               /**< (XDMAC_GD) XDMAC Channel 3 Disable Position */
#define XDMAC_GD_DI3_Msk                      (_U_(0x1) << XDMAC_GD_DI3_Pos)                       /**< (XDMAC_GD) XDMAC Channel 3 Disable Mask */
#define XDMAC_GD_DI3(value)                   (XDMAC_GD_DI3_Msk & ((value) << XDMAC_GD_DI3_Pos))  
#define   XDMAC_GD_DI3_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI3_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI3_0                        (XDMAC_GD_DI3_0_Val << XDMAC_GD_DI3_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI3_1                        (XDMAC_GD_DI3_1_Val << XDMAC_GD_DI3_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI4_Pos                      _U_(4)                                               /**< (XDMAC_GD) XDMAC Channel 4 Disable Position */
#define XDMAC_GD_DI4_Msk                      (_U_(0x1) << XDMAC_GD_DI4_Pos)                       /**< (XDMAC_GD) XDMAC Channel 4 Disable Mask */
#define XDMAC_GD_DI4(value)                   (XDMAC_GD_DI4_Msk & ((value) << XDMAC_GD_DI4_Pos))  
#define   XDMAC_GD_DI4_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI4_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI4_0                        (XDMAC_GD_DI4_0_Val << XDMAC_GD_DI4_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI4_1                        (XDMAC_GD_DI4_1_Val << XDMAC_GD_DI4_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI5_Pos                      _U_(5)                                               /**< (XDMAC_GD) XDMAC Channel 5 Disable Position */
#define XDMAC_GD_DI5_Msk                      (_U_(0x1) << XDMAC_GD_DI5_Pos)                       /**< (XDMAC_GD) XDMAC Channel 5 Disable Mask */
#define XDMAC_GD_DI5(value)                   (XDMAC_GD_DI5_Msk & ((value) << XDMAC_GD_DI5_Pos))  
#define   XDMAC_GD_DI5_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI5_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI5_0                        (XDMAC_GD_DI5_0_Val << XDMAC_GD_DI5_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI5_1                        (XDMAC_GD_DI5_1_Val << XDMAC_GD_DI5_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI6_Pos                      _U_(6)                                               /**< (XDMAC_GD) XDMAC Channel 6 Disable Position */
#define XDMAC_GD_DI6_Msk                      (_U_(0x1) << XDMAC_GD_DI6_Pos)                       /**< (XDMAC_GD) XDMAC Channel 6 Disable Mask */
#define XDMAC_GD_DI6(value)                   (XDMAC_GD_DI6_Msk & ((value) << XDMAC_GD_DI6_Pos))  
#define   XDMAC_GD_DI6_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI6_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI6_0                        (XDMAC_GD_DI6_0_Val << XDMAC_GD_DI6_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI6_1                        (XDMAC_GD_DI6_1_Val << XDMAC_GD_DI6_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI7_Pos                      _U_(7)                                               /**< (XDMAC_GD) XDMAC Channel 7 Disable Position */
#define XDMAC_GD_DI7_Msk                      (_U_(0x1) << XDMAC_GD_DI7_Pos)                       /**< (XDMAC_GD) XDMAC Channel 7 Disable Mask */
#define XDMAC_GD_DI7(value)                   (XDMAC_GD_DI7_Msk & ((value) << XDMAC_GD_DI7_Pos))  
#define   XDMAC_GD_DI7_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI7_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI7_0                        (XDMAC_GD_DI7_0_Val << XDMAC_GD_DI7_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI7_1                        (XDMAC_GD_DI7_1_Val << XDMAC_GD_DI7_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI8_Pos                      _U_(8)                                               /**< (XDMAC_GD) XDMAC Channel 8 Disable Position */
#define XDMAC_GD_DI8_Msk                      (_U_(0x1) << XDMAC_GD_DI8_Pos)                       /**< (XDMAC_GD) XDMAC Channel 8 Disable Mask */
#define XDMAC_GD_DI8(value)                   (XDMAC_GD_DI8_Msk & ((value) << XDMAC_GD_DI8_Pos))  
#define   XDMAC_GD_DI8_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI8_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI8_0                        (XDMAC_GD_DI8_0_Val << XDMAC_GD_DI8_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI8_1                        (XDMAC_GD_DI8_1_Val << XDMAC_GD_DI8_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI9_Pos                      _U_(9)                                               /**< (XDMAC_GD) XDMAC Channel 9 Disable Position */
#define XDMAC_GD_DI9_Msk                      (_U_(0x1) << XDMAC_GD_DI9_Pos)                       /**< (XDMAC_GD) XDMAC Channel 9 Disable Mask */
#define XDMAC_GD_DI9(value)                   (XDMAC_GD_DI9_Msk & ((value) << XDMAC_GD_DI9_Pos))  
#define   XDMAC_GD_DI9_0_Val                  _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI9_1_Val                  _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI9_0                        (XDMAC_GD_DI9_0_Val << XDMAC_GD_DI9_Pos)             /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI9_1                        (XDMAC_GD_DI9_1_Val << XDMAC_GD_DI9_Pos)             /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI10_Pos                     _U_(10)                                              /**< (XDMAC_GD) XDMAC Channel 10 Disable Position */
#define XDMAC_GD_DI10_Msk                     (_U_(0x1) << XDMAC_GD_DI10_Pos)                      /**< (XDMAC_GD) XDMAC Channel 10 Disable Mask */
#define XDMAC_GD_DI10(value)                  (XDMAC_GD_DI10_Msk & ((value) << XDMAC_GD_DI10_Pos))
#define   XDMAC_GD_DI10_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI10_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI10_0                       (XDMAC_GD_DI10_0_Val << XDMAC_GD_DI10_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI10_1                       (XDMAC_GD_DI10_1_Val << XDMAC_GD_DI10_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI11_Pos                     _U_(11)                                              /**< (XDMAC_GD) XDMAC Channel 11 Disable Position */
#define XDMAC_GD_DI11_Msk                     (_U_(0x1) << XDMAC_GD_DI11_Pos)                      /**< (XDMAC_GD) XDMAC Channel 11 Disable Mask */
#define XDMAC_GD_DI11(value)                  (XDMAC_GD_DI11_Msk & ((value) << XDMAC_GD_DI11_Pos))
#define   XDMAC_GD_DI11_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI11_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI11_0                       (XDMAC_GD_DI11_0_Val << XDMAC_GD_DI11_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI11_1                       (XDMAC_GD_DI11_1_Val << XDMAC_GD_DI11_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI12_Pos                     _U_(12)                                              /**< (XDMAC_GD) XDMAC Channel 12 Disable Position */
#define XDMAC_GD_DI12_Msk                     (_U_(0x1) << XDMAC_GD_DI12_Pos)                      /**< (XDMAC_GD) XDMAC Channel 12 Disable Mask */
#define XDMAC_GD_DI12(value)                  (XDMAC_GD_DI12_Msk & ((value) << XDMAC_GD_DI12_Pos))
#define   XDMAC_GD_DI12_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI12_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI12_0                       (XDMAC_GD_DI12_0_Val << XDMAC_GD_DI12_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI12_1                       (XDMAC_GD_DI12_1_Val << XDMAC_GD_DI12_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI13_Pos                     _U_(13)                                              /**< (XDMAC_GD) XDMAC Channel 13 Disable Position */
#define XDMAC_GD_DI13_Msk                     (_U_(0x1) << XDMAC_GD_DI13_Pos)                      /**< (XDMAC_GD) XDMAC Channel 13 Disable Mask */
#define XDMAC_GD_DI13(value)                  (XDMAC_GD_DI13_Msk & ((value) << XDMAC_GD_DI13_Pos))
#define   XDMAC_GD_DI13_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI13_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI13_0                       (XDMAC_GD_DI13_0_Val << XDMAC_GD_DI13_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI13_1                       (XDMAC_GD_DI13_1_Val << XDMAC_GD_DI13_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI14_Pos                     _U_(14)                                              /**< (XDMAC_GD) XDMAC Channel 14 Disable Position */
#define XDMAC_GD_DI14_Msk                     (_U_(0x1) << XDMAC_GD_DI14_Pos)                      /**< (XDMAC_GD) XDMAC Channel 14 Disable Mask */
#define XDMAC_GD_DI14(value)                  (XDMAC_GD_DI14_Msk & ((value) << XDMAC_GD_DI14_Pos))
#define   XDMAC_GD_DI14_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI14_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI14_0                       (XDMAC_GD_DI14_0_Val << XDMAC_GD_DI14_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI14_1                       (XDMAC_GD_DI14_1_Val << XDMAC_GD_DI14_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI15_Pos                     _U_(15)                                              /**< (XDMAC_GD) XDMAC Channel 15 Disable Position */
#define XDMAC_GD_DI15_Msk                     (_U_(0x1) << XDMAC_GD_DI15_Pos)                      /**< (XDMAC_GD) XDMAC Channel 15 Disable Mask */
#define XDMAC_GD_DI15(value)                  (XDMAC_GD_DI15_Msk & ((value) << XDMAC_GD_DI15_Pos))
#define   XDMAC_GD_DI15_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI15_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI15_0                       (XDMAC_GD_DI15_0_Val << XDMAC_GD_DI15_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI15_1                       (XDMAC_GD_DI15_1_Val << XDMAC_GD_DI15_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI16_Pos                     _U_(16)                                              /**< (XDMAC_GD) XDMAC Channel 16 Disable Position */
#define XDMAC_GD_DI16_Msk                     (_U_(0x1) << XDMAC_GD_DI16_Pos)                      /**< (XDMAC_GD) XDMAC Channel 16 Disable Mask */
#define XDMAC_GD_DI16(value)                  (XDMAC_GD_DI16_Msk & ((value) << XDMAC_GD_DI16_Pos))
#define   XDMAC_GD_DI16_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI16_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI16_0                       (XDMAC_GD_DI16_0_Val << XDMAC_GD_DI16_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI16_1                       (XDMAC_GD_DI16_1_Val << XDMAC_GD_DI16_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI17_Pos                     _U_(17)                                              /**< (XDMAC_GD) XDMAC Channel 17 Disable Position */
#define XDMAC_GD_DI17_Msk                     (_U_(0x1) << XDMAC_GD_DI17_Pos)                      /**< (XDMAC_GD) XDMAC Channel 17 Disable Mask */
#define XDMAC_GD_DI17(value)                  (XDMAC_GD_DI17_Msk & ((value) << XDMAC_GD_DI17_Pos))
#define   XDMAC_GD_DI17_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI17_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI17_0                       (XDMAC_GD_DI17_0_Val << XDMAC_GD_DI17_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI17_1                       (XDMAC_GD_DI17_1_Val << XDMAC_GD_DI17_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI18_Pos                     _U_(18)                                              /**< (XDMAC_GD) XDMAC Channel 18 Disable Position */
#define XDMAC_GD_DI18_Msk                     (_U_(0x1) << XDMAC_GD_DI18_Pos)                      /**< (XDMAC_GD) XDMAC Channel 18 Disable Mask */
#define XDMAC_GD_DI18(value)                  (XDMAC_GD_DI18_Msk & ((value) << XDMAC_GD_DI18_Pos))
#define   XDMAC_GD_DI18_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI18_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI18_0                       (XDMAC_GD_DI18_0_Val << XDMAC_GD_DI18_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI18_1                       (XDMAC_GD_DI18_1_Val << XDMAC_GD_DI18_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI19_Pos                     _U_(19)                                              /**< (XDMAC_GD) XDMAC Channel 19 Disable Position */
#define XDMAC_GD_DI19_Msk                     (_U_(0x1) << XDMAC_GD_DI19_Pos)                      /**< (XDMAC_GD) XDMAC Channel 19 Disable Mask */
#define XDMAC_GD_DI19(value)                  (XDMAC_GD_DI19_Msk & ((value) << XDMAC_GD_DI19_Pos))
#define   XDMAC_GD_DI19_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI19_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI19_0                       (XDMAC_GD_DI19_0_Val << XDMAC_GD_DI19_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI19_1                       (XDMAC_GD_DI19_1_Val << XDMAC_GD_DI19_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI20_Pos                     _U_(20)                                              /**< (XDMAC_GD) XDMAC Channel 20 Disable Position */
#define XDMAC_GD_DI20_Msk                     (_U_(0x1) << XDMAC_GD_DI20_Pos)                      /**< (XDMAC_GD) XDMAC Channel 20 Disable Mask */
#define XDMAC_GD_DI20(value)                  (XDMAC_GD_DI20_Msk & ((value) << XDMAC_GD_DI20_Pos))
#define   XDMAC_GD_DI20_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI20_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI20_0                       (XDMAC_GD_DI20_0_Val << XDMAC_GD_DI20_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI20_1                       (XDMAC_GD_DI20_1_Val << XDMAC_GD_DI20_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI21_Pos                     _U_(21)                                              /**< (XDMAC_GD) XDMAC Channel 21 Disable Position */
#define XDMAC_GD_DI21_Msk                     (_U_(0x1) << XDMAC_GD_DI21_Pos)                      /**< (XDMAC_GD) XDMAC Channel 21 Disable Mask */
#define XDMAC_GD_DI21(value)                  (XDMAC_GD_DI21_Msk & ((value) << XDMAC_GD_DI21_Pos))
#define   XDMAC_GD_DI21_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI21_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI21_0                       (XDMAC_GD_DI21_0_Val << XDMAC_GD_DI21_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI21_1                       (XDMAC_GD_DI21_1_Val << XDMAC_GD_DI21_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI22_Pos                     _U_(22)                                              /**< (XDMAC_GD) XDMAC Channel 22 Disable Position */
#define XDMAC_GD_DI22_Msk                     (_U_(0x1) << XDMAC_GD_DI22_Pos)                      /**< (XDMAC_GD) XDMAC Channel 22 Disable Mask */
#define XDMAC_GD_DI22(value)                  (XDMAC_GD_DI22_Msk & ((value) << XDMAC_GD_DI22_Pos))
#define   XDMAC_GD_DI22_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI22_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI22_0                       (XDMAC_GD_DI22_0_Val << XDMAC_GD_DI22_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI22_1                       (XDMAC_GD_DI22_1_Val << XDMAC_GD_DI22_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI23_Pos                     _U_(23)                                              /**< (XDMAC_GD) XDMAC Channel 23 Disable Position */
#define XDMAC_GD_DI23_Msk                     (_U_(0x1) << XDMAC_GD_DI23_Pos)                      /**< (XDMAC_GD) XDMAC Channel 23 Disable Mask */
#define XDMAC_GD_DI23(value)                  (XDMAC_GD_DI23_Msk & ((value) << XDMAC_GD_DI23_Pos))
#define   XDMAC_GD_DI23_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI23_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI23_0                       (XDMAC_GD_DI23_0_Val << XDMAC_GD_DI23_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI23_1                       (XDMAC_GD_DI23_1_Val << XDMAC_GD_DI23_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI24_Pos                     _U_(24)                                              /**< (XDMAC_GD) XDMAC Channel 24 Disable Position */
#define XDMAC_GD_DI24_Msk                     (_U_(0x1) << XDMAC_GD_DI24_Pos)                      /**< (XDMAC_GD) XDMAC Channel 24 Disable Mask */
#define XDMAC_GD_DI24(value)                  (XDMAC_GD_DI24_Msk & ((value) << XDMAC_GD_DI24_Pos))
#define   XDMAC_GD_DI24_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI24_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI24_0                       (XDMAC_GD_DI24_0_Val << XDMAC_GD_DI24_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI24_1                       (XDMAC_GD_DI24_1_Val << XDMAC_GD_DI24_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI25_Pos                     _U_(25)                                              /**< (XDMAC_GD) XDMAC Channel 25 Disable Position */
#define XDMAC_GD_DI25_Msk                     (_U_(0x1) << XDMAC_GD_DI25_Pos)                      /**< (XDMAC_GD) XDMAC Channel 25 Disable Mask */
#define XDMAC_GD_DI25(value)                  (XDMAC_GD_DI25_Msk & ((value) << XDMAC_GD_DI25_Pos))
#define   XDMAC_GD_DI25_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI25_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI25_0                       (XDMAC_GD_DI25_0_Val << XDMAC_GD_DI25_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI25_1                       (XDMAC_GD_DI25_1_Val << XDMAC_GD_DI25_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI26_Pos                     _U_(26)                                              /**< (XDMAC_GD) XDMAC Channel 26 Disable Position */
#define XDMAC_GD_DI26_Msk                     (_U_(0x1) << XDMAC_GD_DI26_Pos)                      /**< (XDMAC_GD) XDMAC Channel 26 Disable Mask */
#define XDMAC_GD_DI26(value)                  (XDMAC_GD_DI26_Msk & ((value) << XDMAC_GD_DI26_Pos))
#define   XDMAC_GD_DI26_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI26_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI26_0                       (XDMAC_GD_DI26_0_Val << XDMAC_GD_DI26_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI26_1                       (XDMAC_GD_DI26_1_Val << XDMAC_GD_DI26_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI27_Pos                     _U_(27)                                              /**< (XDMAC_GD) XDMAC Channel 27 Disable Position */
#define XDMAC_GD_DI27_Msk                     (_U_(0x1) << XDMAC_GD_DI27_Pos)                      /**< (XDMAC_GD) XDMAC Channel 27 Disable Mask */
#define XDMAC_GD_DI27(value)                  (XDMAC_GD_DI27_Msk & ((value) << XDMAC_GD_DI27_Pos))
#define   XDMAC_GD_DI27_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI27_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI27_0                       (XDMAC_GD_DI27_0_Val << XDMAC_GD_DI27_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI27_1                       (XDMAC_GD_DI27_1_Val << XDMAC_GD_DI27_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI28_Pos                     _U_(28)                                              /**< (XDMAC_GD) XDMAC Channel 28 Disable Position */
#define XDMAC_GD_DI28_Msk                     (_U_(0x1) << XDMAC_GD_DI28_Pos)                      /**< (XDMAC_GD) XDMAC Channel 28 Disable Mask */
#define XDMAC_GD_DI28(value)                  (XDMAC_GD_DI28_Msk & ((value) << XDMAC_GD_DI28_Pos))
#define   XDMAC_GD_DI28_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI28_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI28_0                       (XDMAC_GD_DI28_0_Val << XDMAC_GD_DI28_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI28_1                       (XDMAC_GD_DI28_1_Val << XDMAC_GD_DI28_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI29_Pos                     _U_(29)                                              /**< (XDMAC_GD) XDMAC Channel 29 Disable Position */
#define XDMAC_GD_DI29_Msk                     (_U_(0x1) << XDMAC_GD_DI29_Pos)                      /**< (XDMAC_GD) XDMAC Channel 29 Disable Mask */
#define XDMAC_GD_DI29(value)                  (XDMAC_GD_DI29_Msk & ((value) << XDMAC_GD_DI29_Pos))
#define   XDMAC_GD_DI29_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI29_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI29_0                       (XDMAC_GD_DI29_0_Val << XDMAC_GD_DI29_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI29_1                       (XDMAC_GD_DI29_1_Val << XDMAC_GD_DI29_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI30_Pos                     _U_(30)                                              /**< (XDMAC_GD) XDMAC Channel 30 Disable Position */
#define XDMAC_GD_DI30_Msk                     (_U_(0x1) << XDMAC_GD_DI30_Pos)                      /**< (XDMAC_GD) XDMAC Channel 30 Disable Mask */
#define XDMAC_GD_DI30(value)                  (XDMAC_GD_DI30_Msk & ((value) << XDMAC_GD_DI30_Pos))
#define   XDMAC_GD_DI30_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI30_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI30_0                       (XDMAC_GD_DI30_0_Val << XDMAC_GD_DI30_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI30_1                       (XDMAC_GD_DI30_1_Val << XDMAC_GD_DI30_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_DI31_Pos                     _U_(31)                                              /**< (XDMAC_GD) XDMAC Channel 31 Disable Position */
#define XDMAC_GD_DI31_Msk                     (_U_(0x1) << XDMAC_GD_DI31_Pos)                      /**< (XDMAC_GD) XDMAC Channel 31 Disable Mask */
#define XDMAC_GD_DI31(value)                  (XDMAC_GD_DI31_Msk & ((value) << XDMAC_GD_DI31_Pos))
#define   XDMAC_GD_DI31_0_Val                 _U_(0x0)                                             /**< (XDMAC_GD) This bit has no effect.  */
#define   XDMAC_GD_DI31_1_Val                 _U_(0x1)                                             /**< (XDMAC_GD) Disables channel x.  */
#define XDMAC_GD_DI31_0                       (XDMAC_GD_DI31_0_Val << XDMAC_GD_DI31_Pos)           /**< (XDMAC_GD) This bit has no effect. Position  */
#define XDMAC_GD_DI31_1                       (XDMAC_GD_DI31_1_Val << XDMAC_GD_DI31_Pos)           /**< (XDMAC_GD) Disables channel x. Position  */
#define XDMAC_GD_Msk                          _U_(0xFFFFFFFF)                                      /**< (XDMAC_GD) Register Mask  */

#define XDMAC_GD_DI_Pos                       _U_(0)                                               /**< (XDMAC_GD Position) XDMAC Channel 3x Disable */
#define XDMAC_GD_DI_Msk                       (_U_(0xFFFFFFFF) << XDMAC_GD_DI_Pos)                 /**< (XDMAC_GD Mask) DI */
#define XDMAC_GD_DI(value)                    (XDMAC_GD_DI_Msk & ((value) << XDMAC_GD_DI_Pos))     

/* -------- XDMAC_GS : (XDMAC Offset: 0x24) ( R/ 32) Global Channel Status Register -------- */
#define XDMAC_GS_RESETVALUE                   _U_(0x00)                                            /**<  (XDMAC_GS) Global Channel Status Register  Reset Value */

#define XDMAC_GS_ST0_Pos                      _U_(0)                                               /**< (XDMAC_GS) XDMAC Channel 0 Status Position */
#define XDMAC_GS_ST0_Msk                      (_U_(0x1) << XDMAC_GS_ST0_Pos)                       /**< (XDMAC_GS) XDMAC Channel 0 Status Mask */
#define XDMAC_GS_ST0(value)                   (XDMAC_GS_ST0_Msk & ((value) << XDMAC_GS_ST0_Pos))  
#define   XDMAC_GS_ST0_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST0_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST0_0                        (XDMAC_GS_ST0_0_Val << XDMAC_GS_ST0_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST0_1                        (XDMAC_GS_ST0_1_Val << XDMAC_GS_ST0_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST1_Pos                      _U_(1)                                               /**< (XDMAC_GS) XDMAC Channel 1 Status Position */
#define XDMAC_GS_ST1_Msk                      (_U_(0x1) << XDMAC_GS_ST1_Pos)                       /**< (XDMAC_GS) XDMAC Channel 1 Status Mask */
#define XDMAC_GS_ST1(value)                   (XDMAC_GS_ST1_Msk & ((value) << XDMAC_GS_ST1_Pos))  
#define   XDMAC_GS_ST1_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST1_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST1_0                        (XDMAC_GS_ST1_0_Val << XDMAC_GS_ST1_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST1_1                        (XDMAC_GS_ST1_1_Val << XDMAC_GS_ST1_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST2_Pos                      _U_(2)                                               /**< (XDMAC_GS) XDMAC Channel 2 Status Position */
#define XDMAC_GS_ST2_Msk                      (_U_(0x1) << XDMAC_GS_ST2_Pos)                       /**< (XDMAC_GS) XDMAC Channel 2 Status Mask */
#define XDMAC_GS_ST2(value)                   (XDMAC_GS_ST2_Msk & ((value) << XDMAC_GS_ST2_Pos))  
#define   XDMAC_GS_ST2_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST2_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST2_0                        (XDMAC_GS_ST2_0_Val << XDMAC_GS_ST2_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST2_1                        (XDMAC_GS_ST2_1_Val << XDMAC_GS_ST2_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST3_Pos                      _U_(3)                                               /**< (XDMAC_GS) XDMAC Channel 3 Status Position */
#define XDMAC_GS_ST3_Msk                      (_U_(0x1) << XDMAC_GS_ST3_Pos)                       /**< (XDMAC_GS) XDMAC Channel 3 Status Mask */
#define XDMAC_GS_ST3(value)                   (XDMAC_GS_ST3_Msk & ((value) << XDMAC_GS_ST3_Pos))  
#define   XDMAC_GS_ST3_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST3_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST3_0                        (XDMAC_GS_ST3_0_Val << XDMAC_GS_ST3_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST3_1                        (XDMAC_GS_ST3_1_Val << XDMAC_GS_ST3_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST4_Pos                      _U_(4)                                               /**< (XDMAC_GS) XDMAC Channel 4 Status Position */
#define XDMAC_GS_ST4_Msk                      (_U_(0x1) << XDMAC_GS_ST4_Pos)                       /**< (XDMAC_GS) XDMAC Channel 4 Status Mask */
#define XDMAC_GS_ST4(value)                   (XDMAC_GS_ST4_Msk & ((value) << XDMAC_GS_ST4_Pos))  
#define   XDMAC_GS_ST4_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST4_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST4_0                        (XDMAC_GS_ST4_0_Val << XDMAC_GS_ST4_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST4_1                        (XDMAC_GS_ST4_1_Val << XDMAC_GS_ST4_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST5_Pos                      _U_(5)                                               /**< (XDMAC_GS) XDMAC Channel 5 Status Position */
#define XDMAC_GS_ST5_Msk                      (_U_(0x1) << XDMAC_GS_ST5_Pos)                       /**< (XDMAC_GS) XDMAC Channel 5 Status Mask */
#define XDMAC_GS_ST5(value)                   (XDMAC_GS_ST5_Msk & ((value) << XDMAC_GS_ST5_Pos))  
#define   XDMAC_GS_ST5_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST5_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST5_0                        (XDMAC_GS_ST5_0_Val << XDMAC_GS_ST5_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST5_1                        (XDMAC_GS_ST5_1_Val << XDMAC_GS_ST5_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST6_Pos                      _U_(6)                                               /**< (XDMAC_GS) XDMAC Channel 6 Status Position */
#define XDMAC_GS_ST6_Msk                      (_U_(0x1) << XDMAC_GS_ST6_Pos)                       /**< (XDMAC_GS) XDMAC Channel 6 Status Mask */
#define XDMAC_GS_ST6(value)                   (XDMAC_GS_ST6_Msk & ((value) << XDMAC_GS_ST6_Pos))  
#define   XDMAC_GS_ST6_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST6_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST6_0                        (XDMAC_GS_ST6_0_Val << XDMAC_GS_ST6_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST6_1                        (XDMAC_GS_ST6_1_Val << XDMAC_GS_ST6_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST7_Pos                      _U_(7)                                               /**< (XDMAC_GS) XDMAC Channel 7 Status Position */
#define XDMAC_GS_ST7_Msk                      (_U_(0x1) << XDMAC_GS_ST7_Pos)                       /**< (XDMAC_GS) XDMAC Channel 7 Status Mask */
#define XDMAC_GS_ST7(value)                   (XDMAC_GS_ST7_Msk & ((value) << XDMAC_GS_ST7_Pos))  
#define   XDMAC_GS_ST7_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST7_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST7_0                        (XDMAC_GS_ST7_0_Val << XDMAC_GS_ST7_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST7_1                        (XDMAC_GS_ST7_1_Val << XDMAC_GS_ST7_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST8_Pos                      _U_(8)                                               /**< (XDMAC_GS) XDMAC Channel 8 Status Position */
#define XDMAC_GS_ST8_Msk                      (_U_(0x1) << XDMAC_GS_ST8_Pos)                       /**< (XDMAC_GS) XDMAC Channel 8 Status Mask */
#define XDMAC_GS_ST8(value)                   (XDMAC_GS_ST8_Msk & ((value) << XDMAC_GS_ST8_Pos))  
#define   XDMAC_GS_ST8_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST8_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST8_0                        (XDMAC_GS_ST8_0_Val << XDMAC_GS_ST8_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST8_1                        (XDMAC_GS_ST8_1_Val << XDMAC_GS_ST8_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST9_Pos                      _U_(9)                                               /**< (XDMAC_GS) XDMAC Channel 9 Status Position */
#define XDMAC_GS_ST9_Msk                      (_U_(0x1) << XDMAC_GS_ST9_Pos)                       /**< (XDMAC_GS) XDMAC Channel 9 Status Mask */
#define XDMAC_GS_ST9(value)                   (XDMAC_GS_ST9_Msk & ((value) << XDMAC_GS_ST9_Pos))  
#define   XDMAC_GS_ST9_0_Val                  _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST9_1_Val                  _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST9_0                        (XDMAC_GS_ST9_0_Val << XDMAC_GS_ST9_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST9_1                        (XDMAC_GS_ST9_1_Val << XDMAC_GS_ST9_Pos)             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST10_Pos                     _U_(10)                                              /**< (XDMAC_GS) XDMAC Channel 10 Status Position */
#define XDMAC_GS_ST10_Msk                     (_U_(0x1) << XDMAC_GS_ST10_Pos)                      /**< (XDMAC_GS) XDMAC Channel 10 Status Mask */
#define XDMAC_GS_ST10(value)                  (XDMAC_GS_ST10_Msk & ((value) << XDMAC_GS_ST10_Pos))
#define   XDMAC_GS_ST10_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST10_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST10_0                       (XDMAC_GS_ST10_0_Val << XDMAC_GS_ST10_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST10_1                       (XDMAC_GS_ST10_1_Val << XDMAC_GS_ST10_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST11_Pos                     _U_(11)                                              /**< (XDMAC_GS) XDMAC Channel 11 Status Position */
#define XDMAC_GS_ST11_Msk                     (_U_(0x1) << XDMAC_GS_ST11_Pos)                      /**< (XDMAC_GS) XDMAC Channel 11 Status Mask */
#define XDMAC_GS_ST11(value)                  (XDMAC_GS_ST11_Msk & ((value) << XDMAC_GS_ST11_Pos))
#define   XDMAC_GS_ST11_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST11_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST11_0                       (XDMAC_GS_ST11_0_Val << XDMAC_GS_ST11_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST11_1                       (XDMAC_GS_ST11_1_Val << XDMAC_GS_ST11_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST12_Pos                     _U_(12)                                              /**< (XDMAC_GS) XDMAC Channel 12 Status Position */
#define XDMAC_GS_ST12_Msk                     (_U_(0x1) << XDMAC_GS_ST12_Pos)                      /**< (XDMAC_GS) XDMAC Channel 12 Status Mask */
#define XDMAC_GS_ST12(value)                  (XDMAC_GS_ST12_Msk & ((value) << XDMAC_GS_ST12_Pos))
#define   XDMAC_GS_ST12_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST12_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST12_0                       (XDMAC_GS_ST12_0_Val << XDMAC_GS_ST12_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST12_1                       (XDMAC_GS_ST12_1_Val << XDMAC_GS_ST12_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST13_Pos                     _U_(13)                                              /**< (XDMAC_GS) XDMAC Channel 13 Status Position */
#define XDMAC_GS_ST13_Msk                     (_U_(0x1) << XDMAC_GS_ST13_Pos)                      /**< (XDMAC_GS) XDMAC Channel 13 Status Mask */
#define XDMAC_GS_ST13(value)                  (XDMAC_GS_ST13_Msk & ((value) << XDMAC_GS_ST13_Pos))
#define   XDMAC_GS_ST13_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST13_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST13_0                       (XDMAC_GS_ST13_0_Val << XDMAC_GS_ST13_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST13_1                       (XDMAC_GS_ST13_1_Val << XDMAC_GS_ST13_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST14_Pos                     _U_(14)                                              /**< (XDMAC_GS) XDMAC Channel 14 Status Position */
#define XDMAC_GS_ST14_Msk                     (_U_(0x1) << XDMAC_GS_ST14_Pos)                      /**< (XDMAC_GS) XDMAC Channel 14 Status Mask */
#define XDMAC_GS_ST14(value)                  (XDMAC_GS_ST14_Msk & ((value) << XDMAC_GS_ST14_Pos))
#define   XDMAC_GS_ST14_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST14_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST14_0                       (XDMAC_GS_ST14_0_Val << XDMAC_GS_ST14_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST14_1                       (XDMAC_GS_ST14_1_Val << XDMAC_GS_ST14_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST15_Pos                     _U_(15)                                              /**< (XDMAC_GS) XDMAC Channel 15 Status Position */
#define XDMAC_GS_ST15_Msk                     (_U_(0x1) << XDMAC_GS_ST15_Pos)                      /**< (XDMAC_GS) XDMAC Channel 15 Status Mask */
#define XDMAC_GS_ST15(value)                  (XDMAC_GS_ST15_Msk & ((value) << XDMAC_GS_ST15_Pos))
#define   XDMAC_GS_ST15_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST15_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST15_0                       (XDMAC_GS_ST15_0_Val << XDMAC_GS_ST15_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST15_1                       (XDMAC_GS_ST15_1_Val << XDMAC_GS_ST15_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST16_Pos                     _U_(16)                                              /**< (XDMAC_GS) XDMAC Channel 16 Status Position */
#define XDMAC_GS_ST16_Msk                     (_U_(0x1) << XDMAC_GS_ST16_Pos)                      /**< (XDMAC_GS) XDMAC Channel 16 Status Mask */
#define XDMAC_GS_ST16(value)                  (XDMAC_GS_ST16_Msk & ((value) << XDMAC_GS_ST16_Pos))
#define   XDMAC_GS_ST16_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST16_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST16_0                       (XDMAC_GS_ST16_0_Val << XDMAC_GS_ST16_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST16_1                       (XDMAC_GS_ST16_1_Val << XDMAC_GS_ST16_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST17_Pos                     _U_(17)                                              /**< (XDMAC_GS) XDMAC Channel 17 Status Position */
#define XDMAC_GS_ST17_Msk                     (_U_(0x1) << XDMAC_GS_ST17_Pos)                      /**< (XDMAC_GS) XDMAC Channel 17 Status Mask */
#define XDMAC_GS_ST17(value)                  (XDMAC_GS_ST17_Msk & ((value) << XDMAC_GS_ST17_Pos))
#define   XDMAC_GS_ST17_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST17_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST17_0                       (XDMAC_GS_ST17_0_Val << XDMAC_GS_ST17_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST17_1                       (XDMAC_GS_ST17_1_Val << XDMAC_GS_ST17_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST18_Pos                     _U_(18)                                              /**< (XDMAC_GS) XDMAC Channel 18 Status Position */
#define XDMAC_GS_ST18_Msk                     (_U_(0x1) << XDMAC_GS_ST18_Pos)                      /**< (XDMAC_GS) XDMAC Channel 18 Status Mask */
#define XDMAC_GS_ST18(value)                  (XDMAC_GS_ST18_Msk & ((value) << XDMAC_GS_ST18_Pos))
#define   XDMAC_GS_ST18_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST18_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST18_0                       (XDMAC_GS_ST18_0_Val << XDMAC_GS_ST18_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST18_1                       (XDMAC_GS_ST18_1_Val << XDMAC_GS_ST18_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST19_Pos                     _U_(19)                                              /**< (XDMAC_GS) XDMAC Channel 19 Status Position */
#define XDMAC_GS_ST19_Msk                     (_U_(0x1) << XDMAC_GS_ST19_Pos)                      /**< (XDMAC_GS) XDMAC Channel 19 Status Mask */
#define XDMAC_GS_ST19(value)                  (XDMAC_GS_ST19_Msk & ((value) << XDMAC_GS_ST19_Pos))
#define   XDMAC_GS_ST19_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST19_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST19_0                       (XDMAC_GS_ST19_0_Val << XDMAC_GS_ST19_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST19_1                       (XDMAC_GS_ST19_1_Val << XDMAC_GS_ST19_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST20_Pos                     _U_(20)                                              /**< (XDMAC_GS) XDMAC Channel 20 Status Position */
#define XDMAC_GS_ST20_Msk                     (_U_(0x1) << XDMAC_GS_ST20_Pos)                      /**< (XDMAC_GS) XDMAC Channel 20 Status Mask */
#define XDMAC_GS_ST20(value)                  (XDMAC_GS_ST20_Msk & ((value) << XDMAC_GS_ST20_Pos))
#define   XDMAC_GS_ST20_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST20_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST20_0                       (XDMAC_GS_ST20_0_Val << XDMAC_GS_ST20_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST20_1                       (XDMAC_GS_ST20_1_Val << XDMAC_GS_ST20_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST21_Pos                     _U_(21)                                              /**< (XDMAC_GS) XDMAC Channel 21 Status Position */
#define XDMAC_GS_ST21_Msk                     (_U_(0x1) << XDMAC_GS_ST21_Pos)                      /**< (XDMAC_GS) XDMAC Channel 21 Status Mask */
#define XDMAC_GS_ST21(value)                  (XDMAC_GS_ST21_Msk & ((value) << XDMAC_GS_ST21_Pos))
#define   XDMAC_GS_ST21_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST21_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST21_0                       (XDMAC_GS_ST21_0_Val << XDMAC_GS_ST21_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST21_1                       (XDMAC_GS_ST21_1_Val << XDMAC_GS_ST21_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST22_Pos                     _U_(22)                                              /**< (XDMAC_GS) XDMAC Channel 22 Status Position */
#define XDMAC_GS_ST22_Msk                     (_U_(0x1) << XDMAC_GS_ST22_Pos)                      /**< (XDMAC_GS) XDMAC Channel 22 Status Mask */
#define XDMAC_GS_ST22(value)                  (XDMAC_GS_ST22_Msk & ((value) << XDMAC_GS_ST22_Pos))
#define   XDMAC_GS_ST22_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST22_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST22_0                       (XDMAC_GS_ST22_0_Val << XDMAC_GS_ST22_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST22_1                       (XDMAC_GS_ST22_1_Val << XDMAC_GS_ST22_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST23_Pos                     _U_(23)                                              /**< (XDMAC_GS) XDMAC Channel 23 Status Position */
#define XDMAC_GS_ST23_Msk                     (_U_(0x1) << XDMAC_GS_ST23_Pos)                      /**< (XDMAC_GS) XDMAC Channel 23 Status Mask */
#define XDMAC_GS_ST23(value)                  (XDMAC_GS_ST23_Msk & ((value) << XDMAC_GS_ST23_Pos))
#define   XDMAC_GS_ST23_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST23_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST23_0                       (XDMAC_GS_ST23_0_Val << XDMAC_GS_ST23_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST23_1                       (XDMAC_GS_ST23_1_Val << XDMAC_GS_ST23_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST24_Pos                     _U_(24)                                              /**< (XDMAC_GS) XDMAC Channel 24 Status Position */
#define XDMAC_GS_ST24_Msk                     (_U_(0x1) << XDMAC_GS_ST24_Pos)                      /**< (XDMAC_GS) XDMAC Channel 24 Status Mask */
#define XDMAC_GS_ST24(value)                  (XDMAC_GS_ST24_Msk & ((value) << XDMAC_GS_ST24_Pos))
#define   XDMAC_GS_ST24_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST24_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST24_0                       (XDMAC_GS_ST24_0_Val << XDMAC_GS_ST24_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST24_1                       (XDMAC_GS_ST24_1_Val << XDMAC_GS_ST24_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST25_Pos                     _U_(25)                                              /**< (XDMAC_GS) XDMAC Channel 25 Status Position */
#define XDMAC_GS_ST25_Msk                     (_U_(0x1) << XDMAC_GS_ST25_Pos)                      /**< (XDMAC_GS) XDMAC Channel 25 Status Mask */
#define XDMAC_GS_ST25(value)                  (XDMAC_GS_ST25_Msk & ((value) << XDMAC_GS_ST25_Pos))
#define   XDMAC_GS_ST25_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST25_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST25_0                       (XDMAC_GS_ST25_0_Val << XDMAC_GS_ST25_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST25_1                       (XDMAC_GS_ST25_1_Val << XDMAC_GS_ST25_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST26_Pos                     _U_(26)                                              /**< (XDMAC_GS) XDMAC Channel 26 Status Position */
#define XDMAC_GS_ST26_Msk                     (_U_(0x1) << XDMAC_GS_ST26_Pos)                      /**< (XDMAC_GS) XDMAC Channel 26 Status Mask */
#define XDMAC_GS_ST26(value)                  (XDMAC_GS_ST26_Msk & ((value) << XDMAC_GS_ST26_Pos))
#define   XDMAC_GS_ST26_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST26_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST26_0                       (XDMAC_GS_ST26_0_Val << XDMAC_GS_ST26_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST26_1                       (XDMAC_GS_ST26_1_Val << XDMAC_GS_ST26_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST27_Pos                     _U_(27)                                              /**< (XDMAC_GS) XDMAC Channel 27 Status Position */
#define XDMAC_GS_ST27_Msk                     (_U_(0x1) << XDMAC_GS_ST27_Pos)                      /**< (XDMAC_GS) XDMAC Channel 27 Status Mask */
#define XDMAC_GS_ST27(value)                  (XDMAC_GS_ST27_Msk & ((value) << XDMAC_GS_ST27_Pos))
#define   XDMAC_GS_ST27_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST27_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST27_0                       (XDMAC_GS_ST27_0_Val << XDMAC_GS_ST27_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST27_1                       (XDMAC_GS_ST27_1_Val << XDMAC_GS_ST27_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST28_Pos                     _U_(28)                                              /**< (XDMAC_GS) XDMAC Channel 28 Status Position */
#define XDMAC_GS_ST28_Msk                     (_U_(0x1) << XDMAC_GS_ST28_Pos)                      /**< (XDMAC_GS) XDMAC Channel 28 Status Mask */
#define XDMAC_GS_ST28(value)                  (XDMAC_GS_ST28_Msk & ((value) << XDMAC_GS_ST28_Pos))
#define   XDMAC_GS_ST28_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST28_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST28_0                       (XDMAC_GS_ST28_0_Val << XDMAC_GS_ST28_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST28_1                       (XDMAC_GS_ST28_1_Val << XDMAC_GS_ST28_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST29_Pos                     _U_(29)                                              /**< (XDMAC_GS) XDMAC Channel 29 Status Position */
#define XDMAC_GS_ST29_Msk                     (_U_(0x1) << XDMAC_GS_ST29_Pos)                      /**< (XDMAC_GS) XDMAC Channel 29 Status Mask */
#define XDMAC_GS_ST29(value)                  (XDMAC_GS_ST29_Msk & ((value) << XDMAC_GS_ST29_Pos))
#define   XDMAC_GS_ST29_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST29_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST29_0                       (XDMAC_GS_ST29_0_Val << XDMAC_GS_ST29_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST29_1                       (XDMAC_GS_ST29_1_Val << XDMAC_GS_ST29_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST30_Pos                     _U_(30)                                              /**< (XDMAC_GS) XDMAC Channel 30 Status Position */
#define XDMAC_GS_ST30_Msk                     (_U_(0x1) << XDMAC_GS_ST30_Pos)                      /**< (XDMAC_GS) XDMAC Channel 30 Status Mask */
#define XDMAC_GS_ST30(value)                  (XDMAC_GS_ST30_Msk & ((value) << XDMAC_GS_ST30_Pos))
#define   XDMAC_GS_ST30_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST30_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST30_0                       (XDMAC_GS_ST30_0_Val << XDMAC_GS_ST30_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST30_1                       (XDMAC_GS_ST30_1_Val << XDMAC_GS_ST30_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_ST31_Pos                     _U_(31)                                              /**< (XDMAC_GS) XDMAC Channel 31 Status Position */
#define XDMAC_GS_ST31_Msk                     (_U_(0x1) << XDMAC_GS_ST31_Pos)                      /**< (XDMAC_GS) XDMAC Channel 31 Status Mask */
#define XDMAC_GS_ST31(value)                  (XDMAC_GS_ST31_Msk & ((value) << XDMAC_GS_ST31_Pos))
#define   XDMAC_GS_ST31_0_Val                 _U_(0x0)                                             /**< (XDMAC_GS) This bit indicates that the channel x is disabled.  */
#define   XDMAC_GS_ST31_1_Val                 _U_(0x1)                                             /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed.  */
#define XDMAC_GS_ST31_0                       (XDMAC_GS_ST31_0_Val << XDMAC_GS_ST31_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is disabled. Position  */
#define XDMAC_GS_ST31_1                       (XDMAC_GS_ST31_1_Val << XDMAC_GS_ST31_Pos)           /**< (XDMAC_GS) This bit indicates that the channel x is enabled. If a channel disable request is issued, this bit remains asserted until pending transaction is completed. Position  */
#define XDMAC_GS_Msk                          _U_(0xFFFFFFFF)                                      /**< (XDMAC_GS) Register Mask  */

#define XDMAC_GS_ST_Pos                       _U_(0)                                               /**< (XDMAC_GS Position) XDMAC Channel 3x Status */
#define XDMAC_GS_ST_Msk                       (_U_(0xFFFFFFFF) << XDMAC_GS_ST_Pos)                 /**< (XDMAC_GS Mask) ST */
#define XDMAC_GS_ST(value)                    (XDMAC_GS_ST_Msk & ((value) << XDMAC_GS_ST_Pos))     

/* -------- XDMAC_GRSS : (XDMAC Offset: 0x28) ( R/ 32) Global Channel Read Suspend Status Register -------- */
#define XDMAC_GRSS_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_GRSS) Global Channel Read Suspend Status Register  Reset Value */

#define XDMAC_GRSS_RSS0_Pos                   _U_(0)                                               /**< (XDMAC_GRSS) XDMAC Channel 0 Read Suspend Status Position */
#define XDMAC_GRSS_RSS0_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS0_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 0 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS0(value)                (XDMAC_GRSS_RSS0_Msk & ((value) << XDMAC_GRSS_RSS0_Pos))
#define   XDMAC_GRSS_RSS0_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS0_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS0_0                     (XDMAC_GRSS_RSS0_0_Val << XDMAC_GRSS_RSS0_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS0_1                     (XDMAC_GRSS_RSS0_1_Val << XDMAC_GRSS_RSS0_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS1_Pos                   _U_(1)                                               /**< (XDMAC_GRSS) XDMAC Channel 1 Read Suspend Status Position */
#define XDMAC_GRSS_RSS1_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS1_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 1 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS1(value)                (XDMAC_GRSS_RSS1_Msk & ((value) << XDMAC_GRSS_RSS1_Pos))
#define   XDMAC_GRSS_RSS1_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS1_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS1_0                     (XDMAC_GRSS_RSS1_0_Val << XDMAC_GRSS_RSS1_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS1_1                     (XDMAC_GRSS_RSS1_1_Val << XDMAC_GRSS_RSS1_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS2_Pos                   _U_(2)                                               /**< (XDMAC_GRSS) XDMAC Channel 2 Read Suspend Status Position */
#define XDMAC_GRSS_RSS2_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS2_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 2 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS2(value)                (XDMAC_GRSS_RSS2_Msk & ((value) << XDMAC_GRSS_RSS2_Pos))
#define   XDMAC_GRSS_RSS2_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS2_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS2_0                     (XDMAC_GRSS_RSS2_0_Val << XDMAC_GRSS_RSS2_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS2_1                     (XDMAC_GRSS_RSS2_1_Val << XDMAC_GRSS_RSS2_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS3_Pos                   _U_(3)                                               /**< (XDMAC_GRSS) XDMAC Channel 3 Read Suspend Status Position */
#define XDMAC_GRSS_RSS3_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS3_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 3 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS3(value)                (XDMAC_GRSS_RSS3_Msk & ((value) << XDMAC_GRSS_RSS3_Pos))
#define   XDMAC_GRSS_RSS3_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS3_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS3_0                     (XDMAC_GRSS_RSS3_0_Val << XDMAC_GRSS_RSS3_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS3_1                     (XDMAC_GRSS_RSS3_1_Val << XDMAC_GRSS_RSS3_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS4_Pos                   _U_(4)                                               /**< (XDMAC_GRSS) XDMAC Channel 4 Read Suspend Status Position */
#define XDMAC_GRSS_RSS4_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS4_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 4 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS4(value)                (XDMAC_GRSS_RSS4_Msk & ((value) << XDMAC_GRSS_RSS4_Pos))
#define   XDMAC_GRSS_RSS4_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS4_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS4_0                     (XDMAC_GRSS_RSS4_0_Val << XDMAC_GRSS_RSS4_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS4_1                     (XDMAC_GRSS_RSS4_1_Val << XDMAC_GRSS_RSS4_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS5_Pos                   _U_(5)                                               /**< (XDMAC_GRSS) XDMAC Channel 5 Read Suspend Status Position */
#define XDMAC_GRSS_RSS5_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS5_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 5 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS5(value)                (XDMAC_GRSS_RSS5_Msk & ((value) << XDMAC_GRSS_RSS5_Pos))
#define   XDMAC_GRSS_RSS5_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS5_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS5_0                     (XDMAC_GRSS_RSS5_0_Val << XDMAC_GRSS_RSS5_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS5_1                     (XDMAC_GRSS_RSS5_1_Val << XDMAC_GRSS_RSS5_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS6_Pos                   _U_(6)                                               /**< (XDMAC_GRSS) XDMAC Channel 6 Read Suspend Status Position */
#define XDMAC_GRSS_RSS6_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS6_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 6 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS6(value)                (XDMAC_GRSS_RSS6_Msk & ((value) << XDMAC_GRSS_RSS6_Pos))
#define   XDMAC_GRSS_RSS6_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS6_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS6_0                     (XDMAC_GRSS_RSS6_0_Val << XDMAC_GRSS_RSS6_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS6_1                     (XDMAC_GRSS_RSS6_1_Val << XDMAC_GRSS_RSS6_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS7_Pos                   _U_(7)                                               /**< (XDMAC_GRSS) XDMAC Channel 7 Read Suspend Status Position */
#define XDMAC_GRSS_RSS7_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS7_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 7 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS7(value)                (XDMAC_GRSS_RSS7_Msk & ((value) << XDMAC_GRSS_RSS7_Pos))
#define   XDMAC_GRSS_RSS7_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS7_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS7_0                     (XDMAC_GRSS_RSS7_0_Val << XDMAC_GRSS_RSS7_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS7_1                     (XDMAC_GRSS_RSS7_1_Val << XDMAC_GRSS_RSS7_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS8_Pos                   _U_(8)                                               /**< (XDMAC_GRSS) XDMAC Channel 8 Read Suspend Status Position */
#define XDMAC_GRSS_RSS8_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS8_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 8 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS8(value)                (XDMAC_GRSS_RSS8_Msk & ((value) << XDMAC_GRSS_RSS8_Pos))
#define   XDMAC_GRSS_RSS8_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS8_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS8_0                     (XDMAC_GRSS_RSS8_0_Val << XDMAC_GRSS_RSS8_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS8_1                     (XDMAC_GRSS_RSS8_1_Val << XDMAC_GRSS_RSS8_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS9_Pos                   _U_(9)                                               /**< (XDMAC_GRSS) XDMAC Channel 9 Read Suspend Status Position */
#define XDMAC_GRSS_RSS9_Msk                   (_U_(0x1) << XDMAC_GRSS_RSS9_Pos)                    /**< (XDMAC_GRSS) XDMAC Channel 9 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS9(value)                (XDMAC_GRSS_RSS9_Msk & ((value) << XDMAC_GRSS_RSS9_Pos))
#define   XDMAC_GRSS_RSS9_0_Val               _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS9_1_Val               _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS9_0                     (XDMAC_GRSS_RSS9_0_Val << XDMAC_GRSS_RSS9_Pos)       /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS9_1                     (XDMAC_GRSS_RSS9_1_Val << XDMAC_GRSS_RSS9_Pos)       /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS10_Pos                  _U_(10)                                              /**< (XDMAC_GRSS) XDMAC Channel 10 Read Suspend Status Position */
#define XDMAC_GRSS_RSS10_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS10_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 10 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS10(value)               (XDMAC_GRSS_RSS10_Msk & ((value) << XDMAC_GRSS_RSS10_Pos))
#define   XDMAC_GRSS_RSS10_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS10_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS10_0                    (XDMAC_GRSS_RSS10_0_Val << XDMAC_GRSS_RSS10_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS10_1                    (XDMAC_GRSS_RSS10_1_Val << XDMAC_GRSS_RSS10_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS11_Pos                  _U_(11)                                              /**< (XDMAC_GRSS) XDMAC Channel 11 Read Suspend Status Position */
#define XDMAC_GRSS_RSS11_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS11_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 11 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS11(value)               (XDMAC_GRSS_RSS11_Msk & ((value) << XDMAC_GRSS_RSS11_Pos))
#define   XDMAC_GRSS_RSS11_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS11_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS11_0                    (XDMAC_GRSS_RSS11_0_Val << XDMAC_GRSS_RSS11_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS11_1                    (XDMAC_GRSS_RSS11_1_Val << XDMAC_GRSS_RSS11_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS12_Pos                  _U_(12)                                              /**< (XDMAC_GRSS) XDMAC Channel 12 Read Suspend Status Position */
#define XDMAC_GRSS_RSS12_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS12_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 12 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS12(value)               (XDMAC_GRSS_RSS12_Msk & ((value) << XDMAC_GRSS_RSS12_Pos))
#define   XDMAC_GRSS_RSS12_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS12_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS12_0                    (XDMAC_GRSS_RSS12_0_Val << XDMAC_GRSS_RSS12_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS12_1                    (XDMAC_GRSS_RSS12_1_Val << XDMAC_GRSS_RSS12_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS13_Pos                  _U_(13)                                              /**< (XDMAC_GRSS) XDMAC Channel 13 Read Suspend Status Position */
#define XDMAC_GRSS_RSS13_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS13_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 13 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS13(value)               (XDMAC_GRSS_RSS13_Msk & ((value) << XDMAC_GRSS_RSS13_Pos))
#define   XDMAC_GRSS_RSS13_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS13_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS13_0                    (XDMAC_GRSS_RSS13_0_Val << XDMAC_GRSS_RSS13_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS13_1                    (XDMAC_GRSS_RSS13_1_Val << XDMAC_GRSS_RSS13_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS14_Pos                  _U_(14)                                              /**< (XDMAC_GRSS) XDMAC Channel 14 Read Suspend Status Position */
#define XDMAC_GRSS_RSS14_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS14_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 14 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS14(value)               (XDMAC_GRSS_RSS14_Msk & ((value) << XDMAC_GRSS_RSS14_Pos))
#define   XDMAC_GRSS_RSS14_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS14_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS14_0                    (XDMAC_GRSS_RSS14_0_Val << XDMAC_GRSS_RSS14_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS14_1                    (XDMAC_GRSS_RSS14_1_Val << XDMAC_GRSS_RSS14_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS15_Pos                  _U_(15)                                              /**< (XDMAC_GRSS) XDMAC Channel 15 Read Suspend Status Position */
#define XDMAC_GRSS_RSS15_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS15_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 15 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS15(value)               (XDMAC_GRSS_RSS15_Msk & ((value) << XDMAC_GRSS_RSS15_Pos))
#define   XDMAC_GRSS_RSS15_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS15_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS15_0                    (XDMAC_GRSS_RSS15_0_Val << XDMAC_GRSS_RSS15_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS15_1                    (XDMAC_GRSS_RSS15_1_Val << XDMAC_GRSS_RSS15_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS16_Pos                  _U_(16)                                              /**< (XDMAC_GRSS) XDMAC Channel 16 Read Suspend Status Position */
#define XDMAC_GRSS_RSS16_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS16_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 16 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS16(value)               (XDMAC_GRSS_RSS16_Msk & ((value) << XDMAC_GRSS_RSS16_Pos))
#define   XDMAC_GRSS_RSS16_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS16_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS16_0                    (XDMAC_GRSS_RSS16_0_Val << XDMAC_GRSS_RSS16_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS16_1                    (XDMAC_GRSS_RSS16_1_Val << XDMAC_GRSS_RSS16_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS17_Pos                  _U_(17)                                              /**< (XDMAC_GRSS) XDMAC Channel 17 Read Suspend Status Position */
#define XDMAC_GRSS_RSS17_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS17_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 17 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS17(value)               (XDMAC_GRSS_RSS17_Msk & ((value) << XDMAC_GRSS_RSS17_Pos))
#define   XDMAC_GRSS_RSS17_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS17_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS17_0                    (XDMAC_GRSS_RSS17_0_Val << XDMAC_GRSS_RSS17_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS17_1                    (XDMAC_GRSS_RSS17_1_Val << XDMAC_GRSS_RSS17_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS18_Pos                  _U_(18)                                              /**< (XDMAC_GRSS) XDMAC Channel 18 Read Suspend Status Position */
#define XDMAC_GRSS_RSS18_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS18_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 18 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS18(value)               (XDMAC_GRSS_RSS18_Msk & ((value) << XDMAC_GRSS_RSS18_Pos))
#define   XDMAC_GRSS_RSS18_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS18_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS18_0                    (XDMAC_GRSS_RSS18_0_Val << XDMAC_GRSS_RSS18_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS18_1                    (XDMAC_GRSS_RSS18_1_Val << XDMAC_GRSS_RSS18_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS19_Pos                  _U_(19)                                              /**< (XDMAC_GRSS) XDMAC Channel 19 Read Suspend Status Position */
#define XDMAC_GRSS_RSS19_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS19_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 19 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS19(value)               (XDMAC_GRSS_RSS19_Msk & ((value) << XDMAC_GRSS_RSS19_Pos))
#define   XDMAC_GRSS_RSS19_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS19_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS19_0                    (XDMAC_GRSS_RSS19_0_Val << XDMAC_GRSS_RSS19_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS19_1                    (XDMAC_GRSS_RSS19_1_Val << XDMAC_GRSS_RSS19_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS20_Pos                  _U_(20)                                              /**< (XDMAC_GRSS) XDMAC Channel 20 Read Suspend Status Position */
#define XDMAC_GRSS_RSS20_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS20_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 20 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS20(value)               (XDMAC_GRSS_RSS20_Msk & ((value) << XDMAC_GRSS_RSS20_Pos))
#define   XDMAC_GRSS_RSS20_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS20_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS20_0                    (XDMAC_GRSS_RSS20_0_Val << XDMAC_GRSS_RSS20_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS20_1                    (XDMAC_GRSS_RSS20_1_Val << XDMAC_GRSS_RSS20_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS21_Pos                  _U_(21)                                              /**< (XDMAC_GRSS) XDMAC Channel 21 Read Suspend Status Position */
#define XDMAC_GRSS_RSS21_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS21_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 21 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS21(value)               (XDMAC_GRSS_RSS21_Msk & ((value) << XDMAC_GRSS_RSS21_Pos))
#define   XDMAC_GRSS_RSS21_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS21_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS21_0                    (XDMAC_GRSS_RSS21_0_Val << XDMAC_GRSS_RSS21_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS21_1                    (XDMAC_GRSS_RSS21_1_Val << XDMAC_GRSS_RSS21_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS22_Pos                  _U_(22)                                              /**< (XDMAC_GRSS) XDMAC Channel 22 Read Suspend Status Position */
#define XDMAC_GRSS_RSS22_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS22_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 22 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS22(value)               (XDMAC_GRSS_RSS22_Msk & ((value) << XDMAC_GRSS_RSS22_Pos))
#define   XDMAC_GRSS_RSS22_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS22_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS22_0                    (XDMAC_GRSS_RSS22_0_Val << XDMAC_GRSS_RSS22_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS22_1                    (XDMAC_GRSS_RSS22_1_Val << XDMAC_GRSS_RSS22_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS23_Pos                  _U_(23)                                              /**< (XDMAC_GRSS) XDMAC Channel 23 Read Suspend Status Position */
#define XDMAC_GRSS_RSS23_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS23_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 23 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS23(value)               (XDMAC_GRSS_RSS23_Msk & ((value) << XDMAC_GRSS_RSS23_Pos))
#define   XDMAC_GRSS_RSS23_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS23_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS23_0                    (XDMAC_GRSS_RSS23_0_Val << XDMAC_GRSS_RSS23_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS23_1                    (XDMAC_GRSS_RSS23_1_Val << XDMAC_GRSS_RSS23_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS24_Pos                  _U_(24)                                              /**< (XDMAC_GRSS) XDMAC Channel 24 Read Suspend Status Position */
#define XDMAC_GRSS_RSS24_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS24_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 24 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS24(value)               (XDMAC_GRSS_RSS24_Msk & ((value) << XDMAC_GRSS_RSS24_Pos))
#define   XDMAC_GRSS_RSS24_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS24_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS24_0                    (XDMAC_GRSS_RSS24_0_Val << XDMAC_GRSS_RSS24_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS24_1                    (XDMAC_GRSS_RSS24_1_Val << XDMAC_GRSS_RSS24_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS25_Pos                  _U_(25)                                              /**< (XDMAC_GRSS) XDMAC Channel 25 Read Suspend Status Position */
#define XDMAC_GRSS_RSS25_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS25_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 25 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS25(value)               (XDMAC_GRSS_RSS25_Msk & ((value) << XDMAC_GRSS_RSS25_Pos))
#define   XDMAC_GRSS_RSS25_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS25_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS25_0                    (XDMAC_GRSS_RSS25_0_Val << XDMAC_GRSS_RSS25_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS25_1                    (XDMAC_GRSS_RSS25_1_Val << XDMAC_GRSS_RSS25_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS26_Pos                  _U_(26)                                              /**< (XDMAC_GRSS) XDMAC Channel 26 Read Suspend Status Position */
#define XDMAC_GRSS_RSS26_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS26_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 26 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS26(value)               (XDMAC_GRSS_RSS26_Msk & ((value) << XDMAC_GRSS_RSS26_Pos))
#define   XDMAC_GRSS_RSS26_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS26_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS26_0                    (XDMAC_GRSS_RSS26_0_Val << XDMAC_GRSS_RSS26_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS26_1                    (XDMAC_GRSS_RSS26_1_Val << XDMAC_GRSS_RSS26_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS27_Pos                  _U_(27)                                              /**< (XDMAC_GRSS) XDMAC Channel 27 Read Suspend Status Position */
#define XDMAC_GRSS_RSS27_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS27_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 27 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS27(value)               (XDMAC_GRSS_RSS27_Msk & ((value) << XDMAC_GRSS_RSS27_Pos))
#define   XDMAC_GRSS_RSS27_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS27_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS27_0                    (XDMAC_GRSS_RSS27_0_Val << XDMAC_GRSS_RSS27_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS27_1                    (XDMAC_GRSS_RSS27_1_Val << XDMAC_GRSS_RSS27_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS28_Pos                  _U_(28)                                              /**< (XDMAC_GRSS) XDMAC Channel 28 Read Suspend Status Position */
#define XDMAC_GRSS_RSS28_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS28_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 28 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS28(value)               (XDMAC_GRSS_RSS28_Msk & ((value) << XDMAC_GRSS_RSS28_Pos))
#define   XDMAC_GRSS_RSS28_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS28_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS28_0                    (XDMAC_GRSS_RSS28_0_Val << XDMAC_GRSS_RSS28_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS28_1                    (XDMAC_GRSS_RSS28_1_Val << XDMAC_GRSS_RSS28_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS29_Pos                  _U_(29)                                              /**< (XDMAC_GRSS) XDMAC Channel 29 Read Suspend Status Position */
#define XDMAC_GRSS_RSS29_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS29_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 29 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS29(value)               (XDMAC_GRSS_RSS29_Msk & ((value) << XDMAC_GRSS_RSS29_Pos))
#define   XDMAC_GRSS_RSS29_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS29_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS29_0                    (XDMAC_GRSS_RSS29_0_Val << XDMAC_GRSS_RSS29_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS29_1                    (XDMAC_GRSS_RSS29_1_Val << XDMAC_GRSS_RSS29_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS30_Pos                  _U_(30)                                              /**< (XDMAC_GRSS) XDMAC Channel 30 Read Suspend Status Position */
#define XDMAC_GRSS_RSS30_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS30_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 30 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS30(value)               (XDMAC_GRSS_RSS30_Msk & ((value) << XDMAC_GRSS_RSS30_Pos))
#define   XDMAC_GRSS_RSS30_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS30_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS30_0                    (XDMAC_GRSS_RSS30_0_Val << XDMAC_GRSS_RSS30_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS30_1                    (XDMAC_GRSS_RSS30_1_Val << XDMAC_GRSS_RSS30_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_RSS31_Pos                  _U_(31)                                              /**< (XDMAC_GRSS) XDMAC Channel 31 Read Suspend Status Position */
#define XDMAC_GRSS_RSS31_Msk                  (_U_(0x1) << XDMAC_GRSS_RSS31_Pos)                   /**< (XDMAC_GRSS) XDMAC Channel 31 Read Suspend Status Mask */
#define XDMAC_GRSS_RSS31(value)               (XDMAC_GRSS_RSS31_Msk & ((value) << XDMAC_GRSS_RSS31_Pos))
#define   XDMAC_GRSS_RSS31_0_Val              _U_(0x0)                                             /**< (XDMAC_GRSS) The read channel is not suspended.  */
#define   XDMAC_GRSS_RSS31_1_Val              _U_(0x1)                                             /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRSS_RSS31_0                    (XDMAC_GRSS_RSS31_0_Val << XDMAC_GRSS_RSS31_Pos)     /**< (XDMAC_GRSS) The read channel is not suspended. Position  */
#define XDMAC_GRSS_RSS31_1                    (XDMAC_GRSS_RSS31_1_Val << XDMAC_GRSS_RSS31_Pos)     /**< (XDMAC_GRSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRSS_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GRSS) Register Mask  */

#define XDMAC_GRSS_RSS_Pos                    _U_(0)                                               /**< (XDMAC_GRSS Position) XDMAC Channel 3x Read Suspend Status */
#define XDMAC_GRSS_RSS_Msk                    (_U_(0xFFFFFFFF) << XDMAC_GRSS_RSS_Pos)              /**< (XDMAC_GRSS Mask) RSS */
#define XDMAC_GRSS_RSS(value)                 (XDMAC_GRSS_RSS_Msk & ((value) << XDMAC_GRSS_RSS_Pos)) 

/* -------- XDMAC_GWSS : (XDMAC Offset: 0x2C) ( R/ 32) Global Channel Write Suspend Status Register -------- */
#define XDMAC_GWSS_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_GWSS) Global Channel Write Suspend Status Register  Reset Value */

#define XDMAC_GWSS_WSS0_Pos                   _U_(0)                                               /**< (XDMAC_GWSS) XDMAC Channel 0 Write Suspend Status Position */
#define XDMAC_GWSS_WSS0_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS0_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 0 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS0(value)                (XDMAC_GWSS_WSS0_Msk & ((value) << XDMAC_GWSS_WSS0_Pos))
#define   XDMAC_GWSS_WSS0_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS0_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS0_0                     (XDMAC_GWSS_WSS0_0_Val << XDMAC_GWSS_WSS0_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS0_1                     (XDMAC_GWSS_WSS0_1_Val << XDMAC_GWSS_WSS0_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS1_Pos                   _U_(1)                                               /**< (XDMAC_GWSS) XDMAC Channel 1 Write Suspend Status Position */
#define XDMAC_GWSS_WSS1_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS1_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 1 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS1(value)                (XDMAC_GWSS_WSS1_Msk & ((value) << XDMAC_GWSS_WSS1_Pos))
#define   XDMAC_GWSS_WSS1_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS1_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS1_0                     (XDMAC_GWSS_WSS1_0_Val << XDMAC_GWSS_WSS1_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS1_1                     (XDMAC_GWSS_WSS1_1_Val << XDMAC_GWSS_WSS1_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS2_Pos                   _U_(2)                                               /**< (XDMAC_GWSS) XDMAC Channel 2 Write Suspend Status Position */
#define XDMAC_GWSS_WSS2_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS2_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 2 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS2(value)                (XDMAC_GWSS_WSS2_Msk & ((value) << XDMAC_GWSS_WSS2_Pos))
#define   XDMAC_GWSS_WSS2_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS2_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS2_0                     (XDMAC_GWSS_WSS2_0_Val << XDMAC_GWSS_WSS2_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS2_1                     (XDMAC_GWSS_WSS2_1_Val << XDMAC_GWSS_WSS2_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS3_Pos                   _U_(3)                                               /**< (XDMAC_GWSS) XDMAC Channel 3 Write Suspend Status Position */
#define XDMAC_GWSS_WSS3_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS3_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 3 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS3(value)                (XDMAC_GWSS_WSS3_Msk & ((value) << XDMAC_GWSS_WSS3_Pos))
#define   XDMAC_GWSS_WSS3_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS3_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS3_0                     (XDMAC_GWSS_WSS3_0_Val << XDMAC_GWSS_WSS3_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS3_1                     (XDMAC_GWSS_WSS3_1_Val << XDMAC_GWSS_WSS3_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS4_Pos                   _U_(4)                                               /**< (XDMAC_GWSS) XDMAC Channel 4 Write Suspend Status Position */
#define XDMAC_GWSS_WSS4_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS4_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 4 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS4(value)                (XDMAC_GWSS_WSS4_Msk & ((value) << XDMAC_GWSS_WSS4_Pos))
#define   XDMAC_GWSS_WSS4_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS4_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS4_0                     (XDMAC_GWSS_WSS4_0_Val << XDMAC_GWSS_WSS4_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS4_1                     (XDMAC_GWSS_WSS4_1_Val << XDMAC_GWSS_WSS4_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS5_Pos                   _U_(5)                                               /**< (XDMAC_GWSS) XDMAC Channel 5 Write Suspend Status Position */
#define XDMAC_GWSS_WSS5_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS5_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 5 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS5(value)                (XDMAC_GWSS_WSS5_Msk & ((value) << XDMAC_GWSS_WSS5_Pos))
#define   XDMAC_GWSS_WSS5_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS5_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS5_0                     (XDMAC_GWSS_WSS5_0_Val << XDMAC_GWSS_WSS5_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS5_1                     (XDMAC_GWSS_WSS5_1_Val << XDMAC_GWSS_WSS5_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS6_Pos                   _U_(6)                                               /**< (XDMAC_GWSS) XDMAC Channel 6 Write Suspend Status Position */
#define XDMAC_GWSS_WSS6_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS6_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 6 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS6(value)                (XDMAC_GWSS_WSS6_Msk & ((value) << XDMAC_GWSS_WSS6_Pos))
#define   XDMAC_GWSS_WSS6_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS6_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS6_0                     (XDMAC_GWSS_WSS6_0_Val << XDMAC_GWSS_WSS6_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS6_1                     (XDMAC_GWSS_WSS6_1_Val << XDMAC_GWSS_WSS6_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS7_Pos                   _U_(7)                                               /**< (XDMAC_GWSS) XDMAC Channel 7 Write Suspend Status Position */
#define XDMAC_GWSS_WSS7_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS7_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 7 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS7(value)                (XDMAC_GWSS_WSS7_Msk & ((value) << XDMAC_GWSS_WSS7_Pos))
#define   XDMAC_GWSS_WSS7_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS7_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS7_0                     (XDMAC_GWSS_WSS7_0_Val << XDMAC_GWSS_WSS7_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS7_1                     (XDMAC_GWSS_WSS7_1_Val << XDMAC_GWSS_WSS7_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS8_Pos                   _U_(8)                                               /**< (XDMAC_GWSS) XDMAC Channel 8 Write Suspend Status Position */
#define XDMAC_GWSS_WSS8_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS8_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 8 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS8(value)                (XDMAC_GWSS_WSS8_Msk & ((value) << XDMAC_GWSS_WSS8_Pos))
#define   XDMAC_GWSS_WSS8_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS8_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS8_0                     (XDMAC_GWSS_WSS8_0_Val << XDMAC_GWSS_WSS8_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS8_1                     (XDMAC_GWSS_WSS8_1_Val << XDMAC_GWSS_WSS8_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS9_Pos                   _U_(9)                                               /**< (XDMAC_GWSS) XDMAC Channel 9 Write Suspend Status Position */
#define XDMAC_GWSS_WSS9_Msk                   (_U_(0x1) << XDMAC_GWSS_WSS9_Pos)                    /**< (XDMAC_GWSS) XDMAC Channel 9 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS9(value)                (XDMAC_GWSS_WSS9_Msk & ((value) << XDMAC_GWSS_WSS9_Pos))
#define   XDMAC_GWSS_WSS9_0_Val               _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS9_1_Val               _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS9_0                     (XDMAC_GWSS_WSS9_0_Val << XDMAC_GWSS_WSS9_Pos)       /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS9_1                     (XDMAC_GWSS_WSS9_1_Val << XDMAC_GWSS_WSS9_Pos)       /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS10_Pos                  _U_(10)                                              /**< (XDMAC_GWSS) XDMAC Channel 10 Write Suspend Status Position */
#define XDMAC_GWSS_WSS10_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS10_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 10 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS10(value)               (XDMAC_GWSS_WSS10_Msk & ((value) << XDMAC_GWSS_WSS10_Pos))
#define   XDMAC_GWSS_WSS10_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS10_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS10_0                    (XDMAC_GWSS_WSS10_0_Val << XDMAC_GWSS_WSS10_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS10_1                    (XDMAC_GWSS_WSS10_1_Val << XDMAC_GWSS_WSS10_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS11_Pos                  _U_(11)                                              /**< (XDMAC_GWSS) XDMAC Channel 11 Write Suspend Status Position */
#define XDMAC_GWSS_WSS11_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS11_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 11 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS11(value)               (XDMAC_GWSS_WSS11_Msk & ((value) << XDMAC_GWSS_WSS11_Pos))
#define   XDMAC_GWSS_WSS11_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS11_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS11_0                    (XDMAC_GWSS_WSS11_0_Val << XDMAC_GWSS_WSS11_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS11_1                    (XDMAC_GWSS_WSS11_1_Val << XDMAC_GWSS_WSS11_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS12_Pos                  _U_(12)                                              /**< (XDMAC_GWSS) XDMAC Channel 12 Write Suspend Status Position */
#define XDMAC_GWSS_WSS12_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS12_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 12 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS12(value)               (XDMAC_GWSS_WSS12_Msk & ((value) << XDMAC_GWSS_WSS12_Pos))
#define   XDMAC_GWSS_WSS12_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS12_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS12_0                    (XDMAC_GWSS_WSS12_0_Val << XDMAC_GWSS_WSS12_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS12_1                    (XDMAC_GWSS_WSS12_1_Val << XDMAC_GWSS_WSS12_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS13_Pos                  _U_(13)                                              /**< (XDMAC_GWSS) XDMAC Channel 13 Write Suspend Status Position */
#define XDMAC_GWSS_WSS13_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS13_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 13 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS13(value)               (XDMAC_GWSS_WSS13_Msk & ((value) << XDMAC_GWSS_WSS13_Pos))
#define   XDMAC_GWSS_WSS13_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS13_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS13_0                    (XDMAC_GWSS_WSS13_0_Val << XDMAC_GWSS_WSS13_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS13_1                    (XDMAC_GWSS_WSS13_1_Val << XDMAC_GWSS_WSS13_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS14_Pos                  _U_(14)                                              /**< (XDMAC_GWSS) XDMAC Channel 14 Write Suspend Status Position */
#define XDMAC_GWSS_WSS14_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS14_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 14 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS14(value)               (XDMAC_GWSS_WSS14_Msk & ((value) << XDMAC_GWSS_WSS14_Pos))
#define   XDMAC_GWSS_WSS14_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS14_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS14_0                    (XDMAC_GWSS_WSS14_0_Val << XDMAC_GWSS_WSS14_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS14_1                    (XDMAC_GWSS_WSS14_1_Val << XDMAC_GWSS_WSS14_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS15_Pos                  _U_(15)                                              /**< (XDMAC_GWSS) XDMAC Channel 15 Write Suspend Status Position */
#define XDMAC_GWSS_WSS15_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS15_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 15 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS15(value)               (XDMAC_GWSS_WSS15_Msk & ((value) << XDMAC_GWSS_WSS15_Pos))
#define   XDMAC_GWSS_WSS15_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS15_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS15_0                    (XDMAC_GWSS_WSS15_0_Val << XDMAC_GWSS_WSS15_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS15_1                    (XDMAC_GWSS_WSS15_1_Val << XDMAC_GWSS_WSS15_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS16_Pos                  _U_(16)                                              /**< (XDMAC_GWSS) XDMAC Channel 16 Write Suspend Status Position */
#define XDMAC_GWSS_WSS16_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS16_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 16 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS16(value)               (XDMAC_GWSS_WSS16_Msk & ((value) << XDMAC_GWSS_WSS16_Pos))
#define   XDMAC_GWSS_WSS16_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS16_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS16_0                    (XDMAC_GWSS_WSS16_0_Val << XDMAC_GWSS_WSS16_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS16_1                    (XDMAC_GWSS_WSS16_1_Val << XDMAC_GWSS_WSS16_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS17_Pos                  _U_(17)                                              /**< (XDMAC_GWSS) XDMAC Channel 17 Write Suspend Status Position */
#define XDMAC_GWSS_WSS17_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS17_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 17 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS17(value)               (XDMAC_GWSS_WSS17_Msk & ((value) << XDMAC_GWSS_WSS17_Pos))
#define   XDMAC_GWSS_WSS17_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS17_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS17_0                    (XDMAC_GWSS_WSS17_0_Val << XDMAC_GWSS_WSS17_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS17_1                    (XDMAC_GWSS_WSS17_1_Val << XDMAC_GWSS_WSS17_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS18_Pos                  _U_(18)                                              /**< (XDMAC_GWSS) XDMAC Channel 18 Write Suspend Status Position */
#define XDMAC_GWSS_WSS18_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS18_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 18 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS18(value)               (XDMAC_GWSS_WSS18_Msk & ((value) << XDMAC_GWSS_WSS18_Pos))
#define   XDMAC_GWSS_WSS18_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS18_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS18_0                    (XDMAC_GWSS_WSS18_0_Val << XDMAC_GWSS_WSS18_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS18_1                    (XDMAC_GWSS_WSS18_1_Val << XDMAC_GWSS_WSS18_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS19_Pos                  _U_(19)                                              /**< (XDMAC_GWSS) XDMAC Channel 19 Write Suspend Status Position */
#define XDMAC_GWSS_WSS19_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS19_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 19 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS19(value)               (XDMAC_GWSS_WSS19_Msk & ((value) << XDMAC_GWSS_WSS19_Pos))
#define   XDMAC_GWSS_WSS19_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS19_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS19_0                    (XDMAC_GWSS_WSS19_0_Val << XDMAC_GWSS_WSS19_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS19_1                    (XDMAC_GWSS_WSS19_1_Val << XDMAC_GWSS_WSS19_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS20_Pos                  _U_(20)                                              /**< (XDMAC_GWSS) XDMAC Channel 20 Write Suspend Status Position */
#define XDMAC_GWSS_WSS20_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS20_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 20 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS20(value)               (XDMAC_GWSS_WSS20_Msk & ((value) << XDMAC_GWSS_WSS20_Pos))
#define   XDMAC_GWSS_WSS20_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS20_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS20_0                    (XDMAC_GWSS_WSS20_0_Val << XDMAC_GWSS_WSS20_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS20_1                    (XDMAC_GWSS_WSS20_1_Val << XDMAC_GWSS_WSS20_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS21_Pos                  _U_(21)                                              /**< (XDMAC_GWSS) XDMAC Channel 21 Write Suspend Status Position */
#define XDMAC_GWSS_WSS21_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS21_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 21 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS21(value)               (XDMAC_GWSS_WSS21_Msk & ((value) << XDMAC_GWSS_WSS21_Pos))
#define   XDMAC_GWSS_WSS21_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS21_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS21_0                    (XDMAC_GWSS_WSS21_0_Val << XDMAC_GWSS_WSS21_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS21_1                    (XDMAC_GWSS_WSS21_1_Val << XDMAC_GWSS_WSS21_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS22_Pos                  _U_(22)                                              /**< (XDMAC_GWSS) XDMAC Channel 22 Write Suspend Status Position */
#define XDMAC_GWSS_WSS22_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS22_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 22 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS22(value)               (XDMAC_GWSS_WSS22_Msk & ((value) << XDMAC_GWSS_WSS22_Pos))
#define   XDMAC_GWSS_WSS22_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS22_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS22_0                    (XDMAC_GWSS_WSS22_0_Val << XDMAC_GWSS_WSS22_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS22_1                    (XDMAC_GWSS_WSS22_1_Val << XDMAC_GWSS_WSS22_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS23_Pos                  _U_(23)                                              /**< (XDMAC_GWSS) XDMAC Channel 23 Write Suspend Status Position */
#define XDMAC_GWSS_WSS23_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS23_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 23 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS23(value)               (XDMAC_GWSS_WSS23_Msk & ((value) << XDMAC_GWSS_WSS23_Pos))
#define   XDMAC_GWSS_WSS23_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS23_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS23_0                    (XDMAC_GWSS_WSS23_0_Val << XDMAC_GWSS_WSS23_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS23_1                    (XDMAC_GWSS_WSS23_1_Val << XDMAC_GWSS_WSS23_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS24_Pos                  _U_(24)                                              /**< (XDMAC_GWSS) XDMAC Channel 24 Write Suspend Status Position */
#define XDMAC_GWSS_WSS24_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS24_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 24 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS24(value)               (XDMAC_GWSS_WSS24_Msk & ((value) << XDMAC_GWSS_WSS24_Pos))
#define   XDMAC_GWSS_WSS24_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS24_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS24_0                    (XDMAC_GWSS_WSS24_0_Val << XDMAC_GWSS_WSS24_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS24_1                    (XDMAC_GWSS_WSS24_1_Val << XDMAC_GWSS_WSS24_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS25_Pos                  _U_(25)                                              /**< (XDMAC_GWSS) XDMAC Channel 25 Write Suspend Status Position */
#define XDMAC_GWSS_WSS25_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS25_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 25 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS25(value)               (XDMAC_GWSS_WSS25_Msk & ((value) << XDMAC_GWSS_WSS25_Pos))
#define   XDMAC_GWSS_WSS25_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS25_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS25_0                    (XDMAC_GWSS_WSS25_0_Val << XDMAC_GWSS_WSS25_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS25_1                    (XDMAC_GWSS_WSS25_1_Val << XDMAC_GWSS_WSS25_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS26_Pos                  _U_(26)                                              /**< (XDMAC_GWSS) XDMAC Channel 26 Write Suspend Status Position */
#define XDMAC_GWSS_WSS26_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS26_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 26 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS26(value)               (XDMAC_GWSS_WSS26_Msk & ((value) << XDMAC_GWSS_WSS26_Pos))
#define   XDMAC_GWSS_WSS26_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS26_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS26_0                    (XDMAC_GWSS_WSS26_0_Val << XDMAC_GWSS_WSS26_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS26_1                    (XDMAC_GWSS_WSS26_1_Val << XDMAC_GWSS_WSS26_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS27_Pos                  _U_(27)                                              /**< (XDMAC_GWSS) XDMAC Channel 27 Write Suspend Status Position */
#define XDMAC_GWSS_WSS27_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS27_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 27 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS27(value)               (XDMAC_GWSS_WSS27_Msk & ((value) << XDMAC_GWSS_WSS27_Pos))
#define   XDMAC_GWSS_WSS27_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS27_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS27_0                    (XDMAC_GWSS_WSS27_0_Val << XDMAC_GWSS_WSS27_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS27_1                    (XDMAC_GWSS_WSS27_1_Val << XDMAC_GWSS_WSS27_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS28_Pos                  _U_(28)                                              /**< (XDMAC_GWSS) XDMAC Channel 28 Write Suspend Status Position */
#define XDMAC_GWSS_WSS28_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS28_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 28 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS28(value)               (XDMAC_GWSS_WSS28_Msk & ((value) << XDMAC_GWSS_WSS28_Pos))
#define   XDMAC_GWSS_WSS28_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS28_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS28_0                    (XDMAC_GWSS_WSS28_0_Val << XDMAC_GWSS_WSS28_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS28_1                    (XDMAC_GWSS_WSS28_1_Val << XDMAC_GWSS_WSS28_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS29_Pos                  _U_(29)                                              /**< (XDMAC_GWSS) XDMAC Channel 29 Write Suspend Status Position */
#define XDMAC_GWSS_WSS29_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS29_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 29 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS29(value)               (XDMAC_GWSS_WSS29_Msk & ((value) << XDMAC_GWSS_WSS29_Pos))
#define   XDMAC_GWSS_WSS29_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS29_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS29_0                    (XDMAC_GWSS_WSS29_0_Val << XDMAC_GWSS_WSS29_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS29_1                    (XDMAC_GWSS_WSS29_1_Val << XDMAC_GWSS_WSS29_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS30_Pos                  _U_(30)                                              /**< (XDMAC_GWSS) XDMAC Channel 30 Write Suspend Status Position */
#define XDMAC_GWSS_WSS30_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS30_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 30 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS30(value)               (XDMAC_GWSS_WSS30_Msk & ((value) << XDMAC_GWSS_WSS30_Pos))
#define   XDMAC_GWSS_WSS30_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS30_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS30_0                    (XDMAC_GWSS_WSS30_0_Val << XDMAC_GWSS_WSS30_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS30_1                    (XDMAC_GWSS_WSS30_1_Val << XDMAC_GWSS_WSS30_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_WSS31_Pos                  _U_(31)                                              /**< (XDMAC_GWSS) XDMAC Channel 31 Write Suspend Status Position */
#define XDMAC_GWSS_WSS31_Msk                  (_U_(0x1) << XDMAC_GWSS_WSS31_Pos)                   /**< (XDMAC_GWSS) XDMAC Channel 31 Write Suspend Status Mask */
#define XDMAC_GWSS_WSS31(value)               (XDMAC_GWSS_WSS31_Msk & ((value) << XDMAC_GWSS_WSS31_Pos))
#define   XDMAC_GWSS_WSS31_0_Val              _U_(0x0)                                             /**< (XDMAC_GWSS) The write channel is not suspended.  */
#define   XDMAC_GWSS_WSS31_1_Val              _U_(0x1)                                             /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GWSS_WSS31_0                    (XDMAC_GWSS_WSS31_0_Val << XDMAC_GWSS_WSS31_Pos)     /**< (XDMAC_GWSS) The write channel is not suspended. Position  */
#define XDMAC_GWSS_WSS31_1                    (XDMAC_GWSS_WSS31_1_Val << XDMAC_GWSS_WSS31_Pos)     /**< (XDMAC_GWSS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GWSS_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GWSS) Register Mask  */

#define XDMAC_GWSS_WSS_Pos                    _U_(0)                                               /**< (XDMAC_GWSS Position) XDMAC Channel 3x Write Suspend Status */
#define XDMAC_GWSS_WSS_Msk                    (_U_(0xFFFFFFFF) << XDMAC_GWSS_WSS_Pos)              /**< (XDMAC_GWSS Mask) WSS */
#define XDMAC_GWSS_WSS(value)                 (XDMAC_GWSS_WSS_Msk & ((value) << XDMAC_GWSS_WSS_Pos)) 

/* -------- XDMAC_GRS : (XDMAC Offset: 0x30) ( /W 32) Global Channel Read Suspend Register -------- */
#define XDMAC_GRS_RS0_Pos                     _U_(0)                                               /**< (XDMAC_GRS) XDMAC Channel 0 Read Suspend Position */
#define XDMAC_GRS_RS0_Msk                     (_U_(0x1) << XDMAC_GRS_RS0_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 0 Read Suspend Mask */
#define XDMAC_GRS_RS0(value)                  (XDMAC_GRS_RS0_Msk & ((value) << XDMAC_GRS_RS0_Pos))
#define   XDMAC_GRS_RS0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS0_0                       (XDMAC_GRS_RS0_0_Val << XDMAC_GRS_RS0_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS0_1                       (XDMAC_GRS_RS0_1_Val << XDMAC_GRS_RS0_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS1_Pos                     _U_(1)                                               /**< (XDMAC_GRS) XDMAC Channel 1 Read Suspend Position */
#define XDMAC_GRS_RS1_Msk                     (_U_(0x1) << XDMAC_GRS_RS1_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 1 Read Suspend Mask */
#define XDMAC_GRS_RS1(value)                  (XDMAC_GRS_RS1_Msk & ((value) << XDMAC_GRS_RS1_Pos))
#define   XDMAC_GRS_RS1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS1_0                       (XDMAC_GRS_RS1_0_Val << XDMAC_GRS_RS1_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS1_1                       (XDMAC_GRS_RS1_1_Val << XDMAC_GRS_RS1_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS2_Pos                     _U_(2)                                               /**< (XDMAC_GRS) XDMAC Channel 2 Read Suspend Position */
#define XDMAC_GRS_RS2_Msk                     (_U_(0x1) << XDMAC_GRS_RS2_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 2 Read Suspend Mask */
#define XDMAC_GRS_RS2(value)                  (XDMAC_GRS_RS2_Msk & ((value) << XDMAC_GRS_RS2_Pos))
#define   XDMAC_GRS_RS2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS2_0                       (XDMAC_GRS_RS2_0_Val << XDMAC_GRS_RS2_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS2_1                       (XDMAC_GRS_RS2_1_Val << XDMAC_GRS_RS2_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS3_Pos                     _U_(3)                                               /**< (XDMAC_GRS) XDMAC Channel 3 Read Suspend Position */
#define XDMAC_GRS_RS3_Msk                     (_U_(0x1) << XDMAC_GRS_RS3_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 3 Read Suspend Mask */
#define XDMAC_GRS_RS3(value)                  (XDMAC_GRS_RS3_Msk & ((value) << XDMAC_GRS_RS3_Pos))
#define   XDMAC_GRS_RS3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS3_0                       (XDMAC_GRS_RS3_0_Val << XDMAC_GRS_RS3_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS3_1                       (XDMAC_GRS_RS3_1_Val << XDMAC_GRS_RS3_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS4_Pos                     _U_(4)                                               /**< (XDMAC_GRS) XDMAC Channel 4 Read Suspend Position */
#define XDMAC_GRS_RS4_Msk                     (_U_(0x1) << XDMAC_GRS_RS4_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 4 Read Suspend Mask */
#define XDMAC_GRS_RS4(value)                  (XDMAC_GRS_RS4_Msk & ((value) << XDMAC_GRS_RS4_Pos))
#define   XDMAC_GRS_RS4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS4_0                       (XDMAC_GRS_RS4_0_Val << XDMAC_GRS_RS4_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS4_1                       (XDMAC_GRS_RS4_1_Val << XDMAC_GRS_RS4_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS5_Pos                     _U_(5)                                               /**< (XDMAC_GRS) XDMAC Channel 5 Read Suspend Position */
#define XDMAC_GRS_RS5_Msk                     (_U_(0x1) << XDMAC_GRS_RS5_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 5 Read Suspend Mask */
#define XDMAC_GRS_RS5(value)                  (XDMAC_GRS_RS5_Msk & ((value) << XDMAC_GRS_RS5_Pos))
#define   XDMAC_GRS_RS5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS5_0                       (XDMAC_GRS_RS5_0_Val << XDMAC_GRS_RS5_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS5_1                       (XDMAC_GRS_RS5_1_Val << XDMAC_GRS_RS5_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS6_Pos                     _U_(6)                                               /**< (XDMAC_GRS) XDMAC Channel 6 Read Suspend Position */
#define XDMAC_GRS_RS6_Msk                     (_U_(0x1) << XDMAC_GRS_RS6_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 6 Read Suspend Mask */
#define XDMAC_GRS_RS6(value)                  (XDMAC_GRS_RS6_Msk & ((value) << XDMAC_GRS_RS6_Pos))
#define   XDMAC_GRS_RS6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS6_0                       (XDMAC_GRS_RS6_0_Val << XDMAC_GRS_RS6_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS6_1                       (XDMAC_GRS_RS6_1_Val << XDMAC_GRS_RS6_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS7_Pos                     _U_(7)                                               /**< (XDMAC_GRS) XDMAC Channel 7 Read Suspend Position */
#define XDMAC_GRS_RS7_Msk                     (_U_(0x1) << XDMAC_GRS_RS7_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 7 Read Suspend Mask */
#define XDMAC_GRS_RS7(value)                  (XDMAC_GRS_RS7_Msk & ((value) << XDMAC_GRS_RS7_Pos))
#define   XDMAC_GRS_RS7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS7_0                       (XDMAC_GRS_RS7_0_Val << XDMAC_GRS_RS7_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS7_1                       (XDMAC_GRS_RS7_1_Val << XDMAC_GRS_RS7_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS8_Pos                     _U_(8)                                               /**< (XDMAC_GRS) XDMAC Channel 8 Read Suspend Position */
#define XDMAC_GRS_RS8_Msk                     (_U_(0x1) << XDMAC_GRS_RS8_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 8 Read Suspend Mask */
#define XDMAC_GRS_RS8(value)                  (XDMAC_GRS_RS8_Msk & ((value) << XDMAC_GRS_RS8_Pos))
#define   XDMAC_GRS_RS8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS8_0                       (XDMAC_GRS_RS8_0_Val << XDMAC_GRS_RS8_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS8_1                       (XDMAC_GRS_RS8_1_Val << XDMAC_GRS_RS8_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS9_Pos                     _U_(9)                                               /**< (XDMAC_GRS) XDMAC Channel 9 Read Suspend Position */
#define XDMAC_GRS_RS9_Msk                     (_U_(0x1) << XDMAC_GRS_RS9_Pos)                      /**< (XDMAC_GRS) XDMAC Channel 9 Read Suspend Mask */
#define XDMAC_GRS_RS9(value)                  (XDMAC_GRS_RS9_Msk & ((value) << XDMAC_GRS_RS9_Pos))
#define   XDMAC_GRS_RS9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS9_0                       (XDMAC_GRS_RS9_0_Val << XDMAC_GRS_RS9_Pos)           /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS9_1                       (XDMAC_GRS_RS9_1_Val << XDMAC_GRS_RS9_Pos)           /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS10_Pos                    _U_(10)                                              /**< (XDMAC_GRS) XDMAC Channel 10 Read Suspend Position */
#define XDMAC_GRS_RS10_Msk                    (_U_(0x1) << XDMAC_GRS_RS10_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 10 Read Suspend Mask */
#define XDMAC_GRS_RS10(value)                 (XDMAC_GRS_RS10_Msk & ((value) << XDMAC_GRS_RS10_Pos))
#define   XDMAC_GRS_RS10_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS10_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS10_0                      (XDMAC_GRS_RS10_0_Val << XDMAC_GRS_RS10_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS10_1                      (XDMAC_GRS_RS10_1_Val << XDMAC_GRS_RS10_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS11_Pos                    _U_(11)                                              /**< (XDMAC_GRS) XDMAC Channel 11 Read Suspend Position */
#define XDMAC_GRS_RS11_Msk                    (_U_(0x1) << XDMAC_GRS_RS11_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 11 Read Suspend Mask */
#define XDMAC_GRS_RS11(value)                 (XDMAC_GRS_RS11_Msk & ((value) << XDMAC_GRS_RS11_Pos))
#define   XDMAC_GRS_RS11_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS11_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS11_0                      (XDMAC_GRS_RS11_0_Val << XDMAC_GRS_RS11_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS11_1                      (XDMAC_GRS_RS11_1_Val << XDMAC_GRS_RS11_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS12_Pos                    _U_(12)                                              /**< (XDMAC_GRS) XDMAC Channel 12 Read Suspend Position */
#define XDMAC_GRS_RS12_Msk                    (_U_(0x1) << XDMAC_GRS_RS12_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 12 Read Suspend Mask */
#define XDMAC_GRS_RS12(value)                 (XDMAC_GRS_RS12_Msk & ((value) << XDMAC_GRS_RS12_Pos))
#define   XDMAC_GRS_RS12_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS12_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS12_0                      (XDMAC_GRS_RS12_0_Val << XDMAC_GRS_RS12_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS12_1                      (XDMAC_GRS_RS12_1_Val << XDMAC_GRS_RS12_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS13_Pos                    _U_(13)                                              /**< (XDMAC_GRS) XDMAC Channel 13 Read Suspend Position */
#define XDMAC_GRS_RS13_Msk                    (_U_(0x1) << XDMAC_GRS_RS13_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 13 Read Suspend Mask */
#define XDMAC_GRS_RS13(value)                 (XDMAC_GRS_RS13_Msk & ((value) << XDMAC_GRS_RS13_Pos))
#define   XDMAC_GRS_RS13_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS13_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS13_0                      (XDMAC_GRS_RS13_0_Val << XDMAC_GRS_RS13_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS13_1                      (XDMAC_GRS_RS13_1_Val << XDMAC_GRS_RS13_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS14_Pos                    _U_(14)                                              /**< (XDMAC_GRS) XDMAC Channel 14 Read Suspend Position */
#define XDMAC_GRS_RS14_Msk                    (_U_(0x1) << XDMAC_GRS_RS14_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 14 Read Suspend Mask */
#define XDMAC_GRS_RS14(value)                 (XDMAC_GRS_RS14_Msk & ((value) << XDMAC_GRS_RS14_Pos))
#define   XDMAC_GRS_RS14_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS14_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS14_0                      (XDMAC_GRS_RS14_0_Val << XDMAC_GRS_RS14_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS14_1                      (XDMAC_GRS_RS14_1_Val << XDMAC_GRS_RS14_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS15_Pos                    _U_(15)                                              /**< (XDMAC_GRS) XDMAC Channel 15 Read Suspend Position */
#define XDMAC_GRS_RS15_Msk                    (_U_(0x1) << XDMAC_GRS_RS15_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 15 Read Suspend Mask */
#define XDMAC_GRS_RS15(value)                 (XDMAC_GRS_RS15_Msk & ((value) << XDMAC_GRS_RS15_Pos))
#define   XDMAC_GRS_RS15_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS15_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS15_0                      (XDMAC_GRS_RS15_0_Val << XDMAC_GRS_RS15_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS15_1                      (XDMAC_GRS_RS15_1_Val << XDMAC_GRS_RS15_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS16_Pos                    _U_(16)                                              /**< (XDMAC_GRS) XDMAC Channel 16 Read Suspend Position */
#define XDMAC_GRS_RS16_Msk                    (_U_(0x1) << XDMAC_GRS_RS16_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 16 Read Suspend Mask */
#define XDMAC_GRS_RS16(value)                 (XDMAC_GRS_RS16_Msk & ((value) << XDMAC_GRS_RS16_Pos))
#define   XDMAC_GRS_RS16_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS16_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS16_0                      (XDMAC_GRS_RS16_0_Val << XDMAC_GRS_RS16_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS16_1                      (XDMAC_GRS_RS16_1_Val << XDMAC_GRS_RS16_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS17_Pos                    _U_(17)                                              /**< (XDMAC_GRS) XDMAC Channel 17 Read Suspend Position */
#define XDMAC_GRS_RS17_Msk                    (_U_(0x1) << XDMAC_GRS_RS17_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 17 Read Suspend Mask */
#define XDMAC_GRS_RS17(value)                 (XDMAC_GRS_RS17_Msk & ((value) << XDMAC_GRS_RS17_Pos))
#define   XDMAC_GRS_RS17_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS17_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS17_0                      (XDMAC_GRS_RS17_0_Val << XDMAC_GRS_RS17_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS17_1                      (XDMAC_GRS_RS17_1_Val << XDMAC_GRS_RS17_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS18_Pos                    _U_(18)                                              /**< (XDMAC_GRS) XDMAC Channel 18 Read Suspend Position */
#define XDMAC_GRS_RS18_Msk                    (_U_(0x1) << XDMAC_GRS_RS18_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 18 Read Suspend Mask */
#define XDMAC_GRS_RS18(value)                 (XDMAC_GRS_RS18_Msk & ((value) << XDMAC_GRS_RS18_Pos))
#define   XDMAC_GRS_RS18_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS18_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS18_0                      (XDMAC_GRS_RS18_0_Val << XDMAC_GRS_RS18_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS18_1                      (XDMAC_GRS_RS18_1_Val << XDMAC_GRS_RS18_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS19_Pos                    _U_(19)                                              /**< (XDMAC_GRS) XDMAC Channel 19 Read Suspend Position */
#define XDMAC_GRS_RS19_Msk                    (_U_(0x1) << XDMAC_GRS_RS19_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 19 Read Suspend Mask */
#define XDMAC_GRS_RS19(value)                 (XDMAC_GRS_RS19_Msk & ((value) << XDMAC_GRS_RS19_Pos))
#define   XDMAC_GRS_RS19_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS19_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS19_0                      (XDMAC_GRS_RS19_0_Val << XDMAC_GRS_RS19_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS19_1                      (XDMAC_GRS_RS19_1_Val << XDMAC_GRS_RS19_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS20_Pos                    _U_(20)                                              /**< (XDMAC_GRS) XDMAC Channel 20 Read Suspend Position */
#define XDMAC_GRS_RS20_Msk                    (_U_(0x1) << XDMAC_GRS_RS20_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 20 Read Suspend Mask */
#define XDMAC_GRS_RS20(value)                 (XDMAC_GRS_RS20_Msk & ((value) << XDMAC_GRS_RS20_Pos))
#define   XDMAC_GRS_RS20_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS20_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS20_0                      (XDMAC_GRS_RS20_0_Val << XDMAC_GRS_RS20_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS20_1                      (XDMAC_GRS_RS20_1_Val << XDMAC_GRS_RS20_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS21_Pos                    _U_(21)                                              /**< (XDMAC_GRS) XDMAC Channel 21 Read Suspend Position */
#define XDMAC_GRS_RS21_Msk                    (_U_(0x1) << XDMAC_GRS_RS21_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 21 Read Suspend Mask */
#define XDMAC_GRS_RS21(value)                 (XDMAC_GRS_RS21_Msk & ((value) << XDMAC_GRS_RS21_Pos))
#define   XDMAC_GRS_RS21_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS21_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS21_0                      (XDMAC_GRS_RS21_0_Val << XDMAC_GRS_RS21_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS21_1                      (XDMAC_GRS_RS21_1_Val << XDMAC_GRS_RS21_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS22_Pos                    _U_(22)                                              /**< (XDMAC_GRS) XDMAC Channel 22 Read Suspend Position */
#define XDMAC_GRS_RS22_Msk                    (_U_(0x1) << XDMAC_GRS_RS22_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 22 Read Suspend Mask */
#define XDMAC_GRS_RS22(value)                 (XDMAC_GRS_RS22_Msk & ((value) << XDMAC_GRS_RS22_Pos))
#define   XDMAC_GRS_RS22_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS22_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS22_0                      (XDMAC_GRS_RS22_0_Val << XDMAC_GRS_RS22_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS22_1                      (XDMAC_GRS_RS22_1_Val << XDMAC_GRS_RS22_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS23_Pos                    _U_(23)                                              /**< (XDMAC_GRS) XDMAC Channel 23 Read Suspend Position */
#define XDMAC_GRS_RS23_Msk                    (_U_(0x1) << XDMAC_GRS_RS23_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 23 Read Suspend Mask */
#define XDMAC_GRS_RS23(value)                 (XDMAC_GRS_RS23_Msk & ((value) << XDMAC_GRS_RS23_Pos))
#define   XDMAC_GRS_RS23_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS23_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS23_0                      (XDMAC_GRS_RS23_0_Val << XDMAC_GRS_RS23_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS23_1                      (XDMAC_GRS_RS23_1_Val << XDMAC_GRS_RS23_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS24_Pos                    _U_(24)                                              /**< (XDMAC_GRS) XDMAC Channel 24 Read Suspend Position */
#define XDMAC_GRS_RS24_Msk                    (_U_(0x1) << XDMAC_GRS_RS24_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 24 Read Suspend Mask */
#define XDMAC_GRS_RS24(value)                 (XDMAC_GRS_RS24_Msk & ((value) << XDMAC_GRS_RS24_Pos))
#define   XDMAC_GRS_RS24_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS24_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS24_0                      (XDMAC_GRS_RS24_0_Val << XDMAC_GRS_RS24_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS24_1                      (XDMAC_GRS_RS24_1_Val << XDMAC_GRS_RS24_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS25_Pos                    _U_(25)                                              /**< (XDMAC_GRS) XDMAC Channel 25 Read Suspend Position */
#define XDMAC_GRS_RS25_Msk                    (_U_(0x1) << XDMAC_GRS_RS25_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 25 Read Suspend Mask */
#define XDMAC_GRS_RS25(value)                 (XDMAC_GRS_RS25_Msk & ((value) << XDMAC_GRS_RS25_Pos))
#define   XDMAC_GRS_RS25_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS25_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS25_0                      (XDMAC_GRS_RS25_0_Val << XDMAC_GRS_RS25_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS25_1                      (XDMAC_GRS_RS25_1_Val << XDMAC_GRS_RS25_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS26_Pos                    _U_(26)                                              /**< (XDMAC_GRS) XDMAC Channel 26 Read Suspend Position */
#define XDMAC_GRS_RS26_Msk                    (_U_(0x1) << XDMAC_GRS_RS26_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 26 Read Suspend Mask */
#define XDMAC_GRS_RS26(value)                 (XDMAC_GRS_RS26_Msk & ((value) << XDMAC_GRS_RS26_Pos))
#define   XDMAC_GRS_RS26_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS26_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS26_0                      (XDMAC_GRS_RS26_0_Val << XDMAC_GRS_RS26_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS26_1                      (XDMAC_GRS_RS26_1_Val << XDMAC_GRS_RS26_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS27_Pos                    _U_(27)                                              /**< (XDMAC_GRS) XDMAC Channel 27 Read Suspend Position */
#define XDMAC_GRS_RS27_Msk                    (_U_(0x1) << XDMAC_GRS_RS27_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 27 Read Suspend Mask */
#define XDMAC_GRS_RS27(value)                 (XDMAC_GRS_RS27_Msk & ((value) << XDMAC_GRS_RS27_Pos))
#define   XDMAC_GRS_RS27_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS27_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS27_0                      (XDMAC_GRS_RS27_0_Val << XDMAC_GRS_RS27_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS27_1                      (XDMAC_GRS_RS27_1_Val << XDMAC_GRS_RS27_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS28_Pos                    _U_(28)                                              /**< (XDMAC_GRS) XDMAC Channel 28 Read Suspend Position */
#define XDMAC_GRS_RS28_Msk                    (_U_(0x1) << XDMAC_GRS_RS28_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 28 Read Suspend Mask */
#define XDMAC_GRS_RS28(value)                 (XDMAC_GRS_RS28_Msk & ((value) << XDMAC_GRS_RS28_Pos))
#define   XDMAC_GRS_RS28_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS28_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS28_0                      (XDMAC_GRS_RS28_0_Val << XDMAC_GRS_RS28_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS28_1                      (XDMAC_GRS_RS28_1_Val << XDMAC_GRS_RS28_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS29_Pos                    _U_(29)                                              /**< (XDMAC_GRS) XDMAC Channel 29 Read Suspend Position */
#define XDMAC_GRS_RS29_Msk                    (_U_(0x1) << XDMAC_GRS_RS29_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 29 Read Suspend Mask */
#define XDMAC_GRS_RS29(value)                 (XDMAC_GRS_RS29_Msk & ((value) << XDMAC_GRS_RS29_Pos))
#define   XDMAC_GRS_RS29_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS29_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS29_0                      (XDMAC_GRS_RS29_0_Val << XDMAC_GRS_RS29_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS29_1                      (XDMAC_GRS_RS29_1_Val << XDMAC_GRS_RS29_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS30_Pos                    _U_(30)                                              /**< (XDMAC_GRS) XDMAC Channel 30 Read Suspend Position */
#define XDMAC_GRS_RS30_Msk                    (_U_(0x1) << XDMAC_GRS_RS30_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 30 Read Suspend Mask */
#define XDMAC_GRS_RS30(value)                 (XDMAC_GRS_RS30_Msk & ((value) << XDMAC_GRS_RS30_Pos))
#define   XDMAC_GRS_RS30_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS30_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS30_0                      (XDMAC_GRS_RS30_0_Val << XDMAC_GRS_RS30_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS30_1                      (XDMAC_GRS_RS30_1_Val << XDMAC_GRS_RS30_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_RS31_Pos                    _U_(31)                                              /**< (XDMAC_GRS) XDMAC Channel 31 Read Suspend Position */
#define XDMAC_GRS_RS31_Msk                    (_U_(0x1) << XDMAC_GRS_RS31_Pos)                     /**< (XDMAC_GRS) XDMAC Channel 31 Read Suspend Mask */
#define XDMAC_GRS_RS31(value)                 (XDMAC_GRS_RS31_Msk & ((value) << XDMAC_GRS_RS31_Pos))
#define   XDMAC_GRS_RS31_0_Val                _U_(0x0)                                             /**< (XDMAC_GRS) No effect  */
#define   XDMAC_GRS_RS31_1_Val                _U_(0x1)                                             /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler.  */
#define XDMAC_GRS_RS31_0                      (XDMAC_GRS_RS31_0_Val << XDMAC_GRS_RS31_Pos)         /**< (XDMAC_GRS) No effect Position  */
#define XDMAC_GRS_RS31_1                      (XDMAC_GRS_RS31_1_Val << XDMAC_GRS_RS31_Pos)         /**< (XDMAC_GRS) The source requests for channel x are no longer serviced by the system scheduler. Position  */
#define XDMAC_GRS_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GRS) Register Mask  */

#define XDMAC_GRS_RS_Pos                      _U_(0)                                               /**< (XDMAC_GRS Position) XDMAC Channel 3x Read Suspend */
#define XDMAC_GRS_RS_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GRS_RS_Pos)                /**< (XDMAC_GRS Mask) RS */
#define XDMAC_GRS_RS(value)                   (XDMAC_GRS_RS_Msk & ((value) << XDMAC_GRS_RS_Pos))   

/* -------- XDMAC_GRR : (XDMAC Offset: 0x34) ( /W 32) Global Channel Read Resume Register -------- */
#define XDMAC_GRR_RR0_Pos                     _U_(0)                                               /**< (XDMAC_GRR) XDMAC Channel 0 Read Resume Position */
#define XDMAC_GRR_RR0_Msk                     (_U_(0x1) << XDMAC_GRR_RR0_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 0 Read Resume Mask */
#define XDMAC_GRR_RR0(value)                  (XDMAC_GRR_RR0_Msk & ((value) << XDMAC_GRR_RR0_Pos))
#define   XDMAC_GRR_RR0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR0_0                       (XDMAC_GRR_RR0_0_Val << XDMAC_GRR_RR0_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR0_1                       (XDMAC_GRR_RR0_1_Val << XDMAC_GRR_RR0_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR1_Pos                     _U_(1)                                               /**< (XDMAC_GRR) XDMAC Channel 1 Read Resume Position */
#define XDMAC_GRR_RR1_Msk                     (_U_(0x1) << XDMAC_GRR_RR1_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 1 Read Resume Mask */
#define XDMAC_GRR_RR1(value)                  (XDMAC_GRR_RR1_Msk & ((value) << XDMAC_GRR_RR1_Pos))
#define   XDMAC_GRR_RR1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR1_0                       (XDMAC_GRR_RR1_0_Val << XDMAC_GRR_RR1_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR1_1                       (XDMAC_GRR_RR1_1_Val << XDMAC_GRR_RR1_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR2_Pos                     _U_(2)                                               /**< (XDMAC_GRR) XDMAC Channel 2 Read Resume Position */
#define XDMAC_GRR_RR2_Msk                     (_U_(0x1) << XDMAC_GRR_RR2_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 2 Read Resume Mask */
#define XDMAC_GRR_RR2(value)                  (XDMAC_GRR_RR2_Msk & ((value) << XDMAC_GRR_RR2_Pos))
#define   XDMAC_GRR_RR2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR2_0                       (XDMAC_GRR_RR2_0_Val << XDMAC_GRR_RR2_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR2_1                       (XDMAC_GRR_RR2_1_Val << XDMAC_GRR_RR2_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR3_Pos                     _U_(3)                                               /**< (XDMAC_GRR) XDMAC Channel 3 Read Resume Position */
#define XDMAC_GRR_RR3_Msk                     (_U_(0x1) << XDMAC_GRR_RR3_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 3 Read Resume Mask */
#define XDMAC_GRR_RR3(value)                  (XDMAC_GRR_RR3_Msk & ((value) << XDMAC_GRR_RR3_Pos))
#define   XDMAC_GRR_RR3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR3_0                       (XDMAC_GRR_RR3_0_Val << XDMAC_GRR_RR3_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR3_1                       (XDMAC_GRR_RR3_1_Val << XDMAC_GRR_RR3_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR4_Pos                     _U_(4)                                               /**< (XDMAC_GRR) XDMAC Channel 4 Read Resume Position */
#define XDMAC_GRR_RR4_Msk                     (_U_(0x1) << XDMAC_GRR_RR4_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 4 Read Resume Mask */
#define XDMAC_GRR_RR4(value)                  (XDMAC_GRR_RR4_Msk & ((value) << XDMAC_GRR_RR4_Pos))
#define   XDMAC_GRR_RR4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR4_0                       (XDMAC_GRR_RR4_0_Val << XDMAC_GRR_RR4_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR4_1                       (XDMAC_GRR_RR4_1_Val << XDMAC_GRR_RR4_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR5_Pos                     _U_(5)                                               /**< (XDMAC_GRR) XDMAC Channel 5 Read Resume Position */
#define XDMAC_GRR_RR5_Msk                     (_U_(0x1) << XDMAC_GRR_RR5_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 5 Read Resume Mask */
#define XDMAC_GRR_RR5(value)                  (XDMAC_GRR_RR5_Msk & ((value) << XDMAC_GRR_RR5_Pos))
#define   XDMAC_GRR_RR5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR5_0                       (XDMAC_GRR_RR5_0_Val << XDMAC_GRR_RR5_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR5_1                       (XDMAC_GRR_RR5_1_Val << XDMAC_GRR_RR5_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR6_Pos                     _U_(6)                                               /**< (XDMAC_GRR) XDMAC Channel 6 Read Resume Position */
#define XDMAC_GRR_RR6_Msk                     (_U_(0x1) << XDMAC_GRR_RR6_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 6 Read Resume Mask */
#define XDMAC_GRR_RR6(value)                  (XDMAC_GRR_RR6_Msk & ((value) << XDMAC_GRR_RR6_Pos))
#define   XDMAC_GRR_RR6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR6_0                       (XDMAC_GRR_RR6_0_Val << XDMAC_GRR_RR6_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR6_1                       (XDMAC_GRR_RR6_1_Val << XDMAC_GRR_RR6_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR7_Pos                     _U_(7)                                               /**< (XDMAC_GRR) XDMAC Channel 7 Read Resume Position */
#define XDMAC_GRR_RR7_Msk                     (_U_(0x1) << XDMAC_GRR_RR7_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 7 Read Resume Mask */
#define XDMAC_GRR_RR7(value)                  (XDMAC_GRR_RR7_Msk & ((value) << XDMAC_GRR_RR7_Pos))
#define   XDMAC_GRR_RR7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR7_0                       (XDMAC_GRR_RR7_0_Val << XDMAC_GRR_RR7_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR7_1                       (XDMAC_GRR_RR7_1_Val << XDMAC_GRR_RR7_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR8_Pos                     _U_(8)                                               /**< (XDMAC_GRR) XDMAC Channel 8 Read Resume Position */
#define XDMAC_GRR_RR8_Msk                     (_U_(0x1) << XDMAC_GRR_RR8_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 8 Read Resume Mask */
#define XDMAC_GRR_RR8(value)                  (XDMAC_GRR_RR8_Msk & ((value) << XDMAC_GRR_RR8_Pos))
#define   XDMAC_GRR_RR8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR8_0                       (XDMAC_GRR_RR8_0_Val << XDMAC_GRR_RR8_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR8_1                       (XDMAC_GRR_RR8_1_Val << XDMAC_GRR_RR8_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR9_Pos                     _U_(9)                                               /**< (XDMAC_GRR) XDMAC Channel 9 Read Resume Position */
#define XDMAC_GRR_RR9_Msk                     (_U_(0x1) << XDMAC_GRR_RR9_Pos)                      /**< (XDMAC_GRR) XDMAC Channel 9 Read Resume Mask */
#define XDMAC_GRR_RR9(value)                  (XDMAC_GRR_RR9_Msk & ((value) << XDMAC_GRR_RR9_Pos))
#define   XDMAC_GRR_RR9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR9_0                       (XDMAC_GRR_RR9_0_Val << XDMAC_GRR_RR9_Pos)           /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR9_1                       (XDMAC_GRR_RR9_1_Val << XDMAC_GRR_RR9_Pos)           /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR10_Pos                    _U_(10)                                              /**< (XDMAC_GRR) XDMAC Channel 10 Read Resume Position */
#define XDMAC_GRR_RR10_Msk                    (_U_(0x1) << XDMAC_GRR_RR10_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 10 Read Resume Mask */
#define XDMAC_GRR_RR10(value)                 (XDMAC_GRR_RR10_Msk & ((value) << XDMAC_GRR_RR10_Pos))
#define   XDMAC_GRR_RR10_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR10_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR10_0                      (XDMAC_GRR_RR10_0_Val << XDMAC_GRR_RR10_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR10_1                      (XDMAC_GRR_RR10_1_Val << XDMAC_GRR_RR10_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR11_Pos                    _U_(11)                                              /**< (XDMAC_GRR) XDMAC Channel 11 Read Resume Position */
#define XDMAC_GRR_RR11_Msk                    (_U_(0x1) << XDMAC_GRR_RR11_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 11 Read Resume Mask */
#define XDMAC_GRR_RR11(value)                 (XDMAC_GRR_RR11_Msk & ((value) << XDMAC_GRR_RR11_Pos))
#define   XDMAC_GRR_RR11_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR11_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR11_0                      (XDMAC_GRR_RR11_0_Val << XDMAC_GRR_RR11_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR11_1                      (XDMAC_GRR_RR11_1_Val << XDMAC_GRR_RR11_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR12_Pos                    _U_(12)                                              /**< (XDMAC_GRR) XDMAC Channel 12 Read Resume Position */
#define XDMAC_GRR_RR12_Msk                    (_U_(0x1) << XDMAC_GRR_RR12_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 12 Read Resume Mask */
#define XDMAC_GRR_RR12(value)                 (XDMAC_GRR_RR12_Msk & ((value) << XDMAC_GRR_RR12_Pos))
#define   XDMAC_GRR_RR12_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR12_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR12_0                      (XDMAC_GRR_RR12_0_Val << XDMAC_GRR_RR12_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR12_1                      (XDMAC_GRR_RR12_1_Val << XDMAC_GRR_RR12_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR13_Pos                    _U_(13)                                              /**< (XDMAC_GRR) XDMAC Channel 13 Read Resume Position */
#define XDMAC_GRR_RR13_Msk                    (_U_(0x1) << XDMAC_GRR_RR13_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 13 Read Resume Mask */
#define XDMAC_GRR_RR13(value)                 (XDMAC_GRR_RR13_Msk & ((value) << XDMAC_GRR_RR13_Pos))
#define   XDMAC_GRR_RR13_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR13_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR13_0                      (XDMAC_GRR_RR13_0_Val << XDMAC_GRR_RR13_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR13_1                      (XDMAC_GRR_RR13_1_Val << XDMAC_GRR_RR13_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR14_Pos                    _U_(14)                                              /**< (XDMAC_GRR) XDMAC Channel 14 Read Resume Position */
#define XDMAC_GRR_RR14_Msk                    (_U_(0x1) << XDMAC_GRR_RR14_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 14 Read Resume Mask */
#define XDMAC_GRR_RR14(value)                 (XDMAC_GRR_RR14_Msk & ((value) << XDMAC_GRR_RR14_Pos))
#define   XDMAC_GRR_RR14_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR14_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR14_0                      (XDMAC_GRR_RR14_0_Val << XDMAC_GRR_RR14_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR14_1                      (XDMAC_GRR_RR14_1_Val << XDMAC_GRR_RR14_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR15_Pos                    _U_(15)                                              /**< (XDMAC_GRR) XDMAC Channel 15 Read Resume Position */
#define XDMAC_GRR_RR15_Msk                    (_U_(0x1) << XDMAC_GRR_RR15_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 15 Read Resume Mask */
#define XDMAC_GRR_RR15(value)                 (XDMAC_GRR_RR15_Msk & ((value) << XDMAC_GRR_RR15_Pos))
#define   XDMAC_GRR_RR15_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR15_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR15_0                      (XDMAC_GRR_RR15_0_Val << XDMAC_GRR_RR15_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR15_1                      (XDMAC_GRR_RR15_1_Val << XDMAC_GRR_RR15_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR16_Pos                    _U_(16)                                              /**< (XDMAC_GRR) XDMAC Channel 16 Read Resume Position */
#define XDMAC_GRR_RR16_Msk                    (_U_(0x1) << XDMAC_GRR_RR16_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 16 Read Resume Mask */
#define XDMAC_GRR_RR16(value)                 (XDMAC_GRR_RR16_Msk & ((value) << XDMAC_GRR_RR16_Pos))
#define   XDMAC_GRR_RR16_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR16_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR16_0                      (XDMAC_GRR_RR16_0_Val << XDMAC_GRR_RR16_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR16_1                      (XDMAC_GRR_RR16_1_Val << XDMAC_GRR_RR16_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR17_Pos                    _U_(17)                                              /**< (XDMAC_GRR) XDMAC Channel 17 Read Resume Position */
#define XDMAC_GRR_RR17_Msk                    (_U_(0x1) << XDMAC_GRR_RR17_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 17 Read Resume Mask */
#define XDMAC_GRR_RR17(value)                 (XDMAC_GRR_RR17_Msk & ((value) << XDMAC_GRR_RR17_Pos))
#define   XDMAC_GRR_RR17_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR17_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR17_0                      (XDMAC_GRR_RR17_0_Val << XDMAC_GRR_RR17_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR17_1                      (XDMAC_GRR_RR17_1_Val << XDMAC_GRR_RR17_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR18_Pos                    _U_(18)                                              /**< (XDMAC_GRR) XDMAC Channel 18 Read Resume Position */
#define XDMAC_GRR_RR18_Msk                    (_U_(0x1) << XDMAC_GRR_RR18_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 18 Read Resume Mask */
#define XDMAC_GRR_RR18(value)                 (XDMAC_GRR_RR18_Msk & ((value) << XDMAC_GRR_RR18_Pos))
#define   XDMAC_GRR_RR18_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR18_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR18_0                      (XDMAC_GRR_RR18_0_Val << XDMAC_GRR_RR18_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR18_1                      (XDMAC_GRR_RR18_1_Val << XDMAC_GRR_RR18_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR19_Pos                    _U_(19)                                              /**< (XDMAC_GRR) XDMAC Channel 19 Read Resume Position */
#define XDMAC_GRR_RR19_Msk                    (_U_(0x1) << XDMAC_GRR_RR19_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 19 Read Resume Mask */
#define XDMAC_GRR_RR19(value)                 (XDMAC_GRR_RR19_Msk & ((value) << XDMAC_GRR_RR19_Pos))
#define   XDMAC_GRR_RR19_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR19_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR19_0                      (XDMAC_GRR_RR19_0_Val << XDMAC_GRR_RR19_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR19_1                      (XDMAC_GRR_RR19_1_Val << XDMAC_GRR_RR19_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR20_Pos                    _U_(20)                                              /**< (XDMAC_GRR) XDMAC Channel 20 Read Resume Position */
#define XDMAC_GRR_RR20_Msk                    (_U_(0x1) << XDMAC_GRR_RR20_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 20 Read Resume Mask */
#define XDMAC_GRR_RR20(value)                 (XDMAC_GRR_RR20_Msk & ((value) << XDMAC_GRR_RR20_Pos))
#define   XDMAC_GRR_RR20_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR20_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR20_0                      (XDMAC_GRR_RR20_0_Val << XDMAC_GRR_RR20_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR20_1                      (XDMAC_GRR_RR20_1_Val << XDMAC_GRR_RR20_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR21_Pos                    _U_(21)                                              /**< (XDMAC_GRR) XDMAC Channel 21 Read Resume Position */
#define XDMAC_GRR_RR21_Msk                    (_U_(0x1) << XDMAC_GRR_RR21_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 21 Read Resume Mask */
#define XDMAC_GRR_RR21(value)                 (XDMAC_GRR_RR21_Msk & ((value) << XDMAC_GRR_RR21_Pos))
#define   XDMAC_GRR_RR21_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR21_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR21_0                      (XDMAC_GRR_RR21_0_Val << XDMAC_GRR_RR21_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR21_1                      (XDMAC_GRR_RR21_1_Val << XDMAC_GRR_RR21_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR22_Pos                    _U_(22)                                              /**< (XDMAC_GRR) XDMAC Channel 22 Read Resume Position */
#define XDMAC_GRR_RR22_Msk                    (_U_(0x1) << XDMAC_GRR_RR22_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 22 Read Resume Mask */
#define XDMAC_GRR_RR22(value)                 (XDMAC_GRR_RR22_Msk & ((value) << XDMAC_GRR_RR22_Pos))
#define   XDMAC_GRR_RR22_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR22_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR22_0                      (XDMAC_GRR_RR22_0_Val << XDMAC_GRR_RR22_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR22_1                      (XDMAC_GRR_RR22_1_Val << XDMAC_GRR_RR22_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR23_Pos                    _U_(23)                                              /**< (XDMAC_GRR) XDMAC Channel 23 Read Resume Position */
#define XDMAC_GRR_RR23_Msk                    (_U_(0x1) << XDMAC_GRR_RR23_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 23 Read Resume Mask */
#define XDMAC_GRR_RR23(value)                 (XDMAC_GRR_RR23_Msk & ((value) << XDMAC_GRR_RR23_Pos))
#define   XDMAC_GRR_RR23_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR23_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR23_0                      (XDMAC_GRR_RR23_0_Val << XDMAC_GRR_RR23_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR23_1                      (XDMAC_GRR_RR23_1_Val << XDMAC_GRR_RR23_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR24_Pos                    _U_(24)                                              /**< (XDMAC_GRR) XDMAC Channel 24 Read Resume Position */
#define XDMAC_GRR_RR24_Msk                    (_U_(0x1) << XDMAC_GRR_RR24_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 24 Read Resume Mask */
#define XDMAC_GRR_RR24(value)                 (XDMAC_GRR_RR24_Msk & ((value) << XDMAC_GRR_RR24_Pos))
#define   XDMAC_GRR_RR24_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR24_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR24_0                      (XDMAC_GRR_RR24_0_Val << XDMAC_GRR_RR24_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR24_1                      (XDMAC_GRR_RR24_1_Val << XDMAC_GRR_RR24_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR25_Pos                    _U_(25)                                              /**< (XDMAC_GRR) XDMAC Channel 25 Read Resume Position */
#define XDMAC_GRR_RR25_Msk                    (_U_(0x1) << XDMAC_GRR_RR25_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 25 Read Resume Mask */
#define XDMAC_GRR_RR25(value)                 (XDMAC_GRR_RR25_Msk & ((value) << XDMAC_GRR_RR25_Pos))
#define   XDMAC_GRR_RR25_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR25_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR25_0                      (XDMAC_GRR_RR25_0_Val << XDMAC_GRR_RR25_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR25_1                      (XDMAC_GRR_RR25_1_Val << XDMAC_GRR_RR25_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR26_Pos                    _U_(26)                                              /**< (XDMAC_GRR) XDMAC Channel 26 Read Resume Position */
#define XDMAC_GRR_RR26_Msk                    (_U_(0x1) << XDMAC_GRR_RR26_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 26 Read Resume Mask */
#define XDMAC_GRR_RR26(value)                 (XDMAC_GRR_RR26_Msk & ((value) << XDMAC_GRR_RR26_Pos))
#define   XDMAC_GRR_RR26_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR26_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR26_0                      (XDMAC_GRR_RR26_0_Val << XDMAC_GRR_RR26_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR26_1                      (XDMAC_GRR_RR26_1_Val << XDMAC_GRR_RR26_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR27_Pos                    _U_(27)                                              /**< (XDMAC_GRR) XDMAC Channel 27 Read Resume Position */
#define XDMAC_GRR_RR27_Msk                    (_U_(0x1) << XDMAC_GRR_RR27_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 27 Read Resume Mask */
#define XDMAC_GRR_RR27(value)                 (XDMAC_GRR_RR27_Msk & ((value) << XDMAC_GRR_RR27_Pos))
#define   XDMAC_GRR_RR27_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR27_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR27_0                      (XDMAC_GRR_RR27_0_Val << XDMAC_GRR_RR27_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR27_1                      (XDMAC_GRR_RR27_1_Val << XDMAC_GRR_RR27_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR28_Pos                    _U_(28)                                              /**< (XDMAC_GRR) XDMAC Channel 28 Read Resume Position */
#define XDMAC_GRR_RR28_Msk                    (_U_(0x1) << XDMAC_GRR_RR28_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 28 Read Resume Mask */
#define XDMAC_GRR_RR28(value)                 (XDMAC_GRR_RR28_Msk & ((value) << XDMAC_GRR_RR28_Pos))
#define   XDMAC_GRR_RR28_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR28_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR28_0                      (XDMAC_GRR_RR28_0_Val << XDMAC_GRR_RR28_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR28_1                      (XDMAC_GRR_RR28_1_Val << XDMAC_GRR_RR28_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR29_Pos                    _U_(29)                                              /**< (XDMAC_GRR) XDMAC Channel 29 Read Resume Position */
#define XDMAC_GRR_RR29_Msk                    (_U_(0x1) << XDMAC_GRR_RR29_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 29 Read Resume Mask */
#define XDMAC_GRR_RR29(value)                 (XDMAC_GRR_RR29_Msk & ((value) << XDMAC_GRR_RR29_Pos))
#define   XDMAC_GRR_RR29_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR29_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR29_0                      (XDMAC_GRR_RR29_0_Val << XDMAC_GRR_RR29_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR29_1                      (XDMAC_GRR_RR29_1_Val << XDMAC_GRR_RR29_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR30_Pos                    _U_(30)                                              /**< (XDMAC_GRR) XDMAC Channel 30 Read Resume Position */
#define XDMAC_GRR_RR30_Msk                    (_U_(0x1) << XDMAC_GRR_RR30_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 30 Read Resume Mask */
#define XDMAC_GRR_RR30(value)                 (XDMAC_GRR_RR30_Msk & ((value) << XDMAC_GRR_RR30_Pos))
#define   XDMAC_GRR_RR30_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR30_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR30_0                      (XDMAC_GRR_RR30_0_Val << XDMAC_GRR_RR30_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR30_1                      (XDMAC_GRR_RR30_1_Val << XDMAC_GRR_RR30_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_RR31_Pos                    _U_(31)                                              /**< (XDMAC_GRR) XDMAC Channel 31 Read Resume Position */
#define XDMAC_GRR_RR31_Msk                    (_U_(0x1) << XDMAC_GRR_RR31_Pos)                     /**< (XDMAC_GRR) XDMAC Channel 31 Read Resume Mask */
#define XDMAC_GRR_RR31(value)                 (XDMAC_GRR_RR31_Msk & ((value) << XDMAC_GRR_RR31_Pos))
#define   XDMAC_GRR_RR31_0_Val                _U_(0x0)                                             /**< (XDMAC_GRR) No effect  */
#define   XDMAC_GRR_RR31_1_Val                _U_(0x1)                                             /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler.  */
#define XDMAC_GRR_RR31_0                      (XDMAC_GRR_RR31_0_Val << XDMAC_GRR_RR31_Pos)         /**< (XDMAC_GRR) No effect Position  */
#define XDMAC_GRR_RR31_1                      (XDMAC_GRR_RR31_1_Val << XDMAC_GRR_RR31_Pos)         /**< (XDMAC_GRR) The source requests for channel x are serviced by the system scheduler. Position  */
#define XDMAC_GRR_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GRR) Register Mask  */

#define XDMAC_GRR_RR_Pos                      _U_(0)                                               /**< (XDMAC_GRR Position) XDMAC Channel 3x Read Resume */
#define XDMAC_GRR_RR_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GRR_RR_Pos)                /**< (XDMAC_GRR Mask) RR */
#define XDMAC_GRR_RR(value)                   (XDMAC_GRR_RR_Msk & ((value) << XDMAC_GRR_RR_Pos))   

/* -------- XDMAC_GWS : (XDMAC Offset: 0x38) ( /W 32) Global Channel Write Suspend Register -------- */
#define XDMAC_GWS_WS0_Pos                     _U_(0)                                               /**< (XDMAC_GWS) XDMAC Channel 0 Write Suspend Position */
#define XDMAC_GWS_WS0_Msk                     (_U_(0x1) << XDMAC_GWS_WS0_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 0 Write Suspend Mask */
#define XDMAC_GWS_WS0(value)                  (XDMAC_GWS_WS0_Msk & ((value) << XDMAC_GWS_WS0_Pos))
#define   XDMAC_GWS_WS0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS0_0                       (XDMAC_GWS_WS0_0_Val << XDMAC_GWS_WS0_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS0_1                       (XDMAC_GWS_WS0_1_Val << XDMAC_GWS_WS0_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS1_Pos                     _U_(1)                                               /**< (XDMAC_GWS) XDMAC Channel 1 Write Suspend Position */
#define XDMAC_GWS_WS1_Msk                     (_U_(0x1) << XDMAC_GWS_WS1_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 1 Write Suspend Mask */
#define XDMAC_GWS_WS1(value)                  (XDMAC_GWS_WS1_Msk & ((value) << XDMAC_GWS_WS1_Pos))
#define   XDMAC_GWS_WS1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS1_0                       (XDMAC_GWS_WS1_0_Val << XDMAC_GWS_WS1_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS1_1                       (XDMAC_GWS_WS1_1_Val << XDMAC_GWS_WS1_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS2_Pos                     _U_(2)                                               /**< (XDMAC_GWS) XDMAC Channel 2 Write Suspend Position */
#define XDMAC_GWS_WS2_Msk                     (_U_(0x1) << XDMAC_GWS_WS2_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 2 Write Suspend Mask */
#define XDMAC_GWS_WS2(value)                  (XDMAC_GWS_WS2_Msk & ((value) << XDMAC_GWS_WS2_Pos))
#define   XDMAC_GWS_WS2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS2_0                       (XDMAC_GWS_WS2_0_Val << XDMAC_GWS_WS2_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS2_1                       (XDMAC_GWS_WS2_1_Val << XDMAC_GWS_WS2_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS3_Pos                     _U_(3)                                               /**< (XDMAC_GWS) XDMAC Channel 3 Write Suspend Position */
#define XDMAC_GWS_WS3_Msk                     (_U_(0x1) << XDMAC_GWS_WS3_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 3 Write Suspend Mask */
#define XDMAC_GWS_WS3(value)                  (XDMAC_GWS_WS3_Msk & ((value) << XDMAC_GWS_WS3_Pos))
#define   XDMAC_GWS_WS3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS3_0                       (XDMAC_GWS_WS3_0_Val << XDMAC_GWS_WS3_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS3_1                       (XDMAC_GWS_WS3_1_Val << XDMAC_GWS_WS3_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS4_Pos                     _U_(4)                                               /**< (XDMAC_GWS) XDMAC Channel 4 Write Suspend Position */
#define XDMAC_GWS_WS4_Msk                     (_U_(0x1) << XDMAC_GWS_WS4_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 4 Write Suspend Mask */
#define XDMAC_GWS_WS4(value)                  (XDMAC_GWS_WS4_Msk & ((value) << XDMAC_GWS_WS4_Pos))
#define   XDMAC_GWS_WS4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS4_0                       (XDMAC_GWS_WS4_0_Val << XDMAC_GWS_WS4_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS4_1                       (XDMAC_GWS_WS4_1_Val << XDMAC_GWS_WS4_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS5_Pos                     _U_(5)                                               /**< (XDMAC_GWS) XDMAC Channel 5 Write Suspend Position */
#define XDMAC_GWS_WS5_Msk                     (_U_(0x1) << XDMAC_GWS_WS5_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 5 Write Suspend Mask */
#define XDMAC_GWS_WS5(value)                  (XDMAC_GWS_WS5_Msk & ((value) << XDMAC_GWS_WS5_Pos))
#define   XDMAC_GWS_WS5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS5_0                       (XDMAC_GWS_WS5_0_Val << XDMAC_GWS_WS5_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS5_1                       (XDMAC_GWS_WS5_1_Val << XDMAC_GWS_WS5_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS6_Pos                     _U_(6)                                               /**< (XDMAC_GWS) XDMAC Channel 6 Write Suspend Position */
#define XDMAC_GWS_WS6_Msk                     (_U_(0x1) << XDMAC_GWS_WS6_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 6 Write Suspend Mask */
#define XDMAC_GWS_WS6(value)                  (XDMAC_GWS_WS6_Msk & ((value) << XDMAC_GWS_WS6_Pos))
#define   XDMAC_GWS_WS6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS6_0                       (XDMAC_GWS_WS6_0_Val << XDMAC_GWS_WS6_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS6_1                       (XDMAC_GWS_WS6_1_Val << XDMAC_GWS_WS6_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS7_Pos                     _U_(7)                                               /**< (XDMAC_GWS) XDMAC Channel 7 Write Suspend Position */
#define XDMAC_GWS_WS7_Msk                     (_U_(0x1) << XDMAC_GWS_WS7_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 7 Write Suspend Mask */
#define XDMAC_GWS_WS7(value)                  (XDMAC_GWS_WS7_Msk & ((value) << XDMAC_GWS_WS7_Pos))
#define   XDMAC_GWS_WS7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS7_0                       (XDMAC_GWS_WS7_0_Val << XDMAC_GWS_WS7_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS7_1                       (XDMAC_GWS_WS7_1_Val << XDMAC_GWS_WS7_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS8_Pos                     _U_(8)                                               /**< (XDMAC_GWS) XDMAC Channel 8 Write Suspend Position */
#define XDMAC_GWS_WS8_Msk                     (_U_(0x1) << XDMAC_GWS_WS8_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 8 Write Suspend Mask */
#define XDMAC_GWS_WS8(value)                  (XDMAC_GWS_WS8_Msk & ((value) << XDMAC_GWS_WS8_Pos))
#define   XDMAC_GWS_WS8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS8_0                       (XDMAC_GWS_WS8_0_Val << XDMAC_GWS_WS8_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS8_1                       (XDMAC_GWS_WS8_1_Val << XDMAC_GWS_WS8_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS9_Pos                     _U_(9)                                               /**< (XDMAC_GWS) XDMAC Channel 9 Write Suspend Position */
#define XDMAC_GWS_WS9_Msk                     (_U_(0x1) << XDMAC_GWS_WS9_Pos)                      /**< (XDMAC_GWS) XDMAC Channel 9 Write Suspend Mask */
#define XDMAC_GWS_WS9(value)                  (XDMAC_GWS_WS9_Msk & ((value) << XDMAC_GWS_WS9_Pos))
#define   XDMAC_GWS_WS9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS9_0                       (XDMAC_GWS_WS9_0_Val << XDMAC_GWS_WS9_Pos)           /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS9_1                       (XDMAC_GWS_WS9_1_Val << XDMAC_GWS_WS9_Pos)           /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS10_Pos                    _U_(10)                                              /**< (XDMAC_GWS) XDMAC Channel 10 Write Suspend Position */
#define XDMAC_GWS_WS10_Msk                    (_U_(0x1) << XDMAC_GWS_WS10_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 10 Write Suspend Mask */
#define XDMAC_GWS_WS10(value)                 (XDMAC_GWS_WS10_Msk & ((value) << XDMAC_GWS_WS10_Pos))
#define   XDMAC_GWS_WS10_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS10_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS10_0                      (XDMAC_GWS_WS10_0_Val << XDMAC_GWS_WS10_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS10_1                      (XDMAC_GWS_WS10_1_Val << XDMAC_GWS_WS10_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS11_Pos                    _U_(11)                                              /**< (XDMAC_GWS) XDMAC Channel 11 Write Suspend Position */
#define XDMAC_GWS_WS11_Msk                    (_U_(0x1) << XDMAC_GWS_WS11_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 11 Write Suspend Mask */
#define XDMAC_GWS_WS11(value)                 (XDMAC_GWS_WS11_Msk & ((value) << XDMAC_GWS_WS11_Pos))
#define   XDMAC_GWS_WS11_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS11_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS11_0                      (XDMAC_GWS_WS11_0_Val << XDMAC_GWS_WS11_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS11_1                      (XDMAC_GWS_WS11_1_Val << XDMAC_GWS_WS11_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS12_Pos                    _U_(12)                                              /**< (XDMAC_GWS) XDMAC Channel 12 Write Suspend Position */
#define XDMAC_GWS_WS12_Msk                    (_U_(0x1) << XDMAC_GWS_WS12_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 12 Write Suspend Mask */
#define XDMAC_GWS_WS12(value)                 (XDMAC_GWS_WS12_Msk & ((value) << XDMAC_GWS_WS12_Pos))
#define   XDMAC_GWS_WS12_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS12_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS12_0                      (XDMAC_GWS_WS12_0_Val << XDMAC_GWS_WS12_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS12_1                      (XDMAC_GWS_WS12_1_Val << XDMAC_GWS_WS12_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS13_Pos                    _U_(13)                                              /**< (XDMAC_GWS) XDMAC Channel 13 Write Suspend Position */
#define XDMAC_GWS_WS13_Msk                    (_U_(0x1) << XDMAC_GWS_WS13_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 13 Write Suspend Mask */
#define XDMAC_GWS_WS13(value)                 (XDMAC_GWS_WS13_Msk & ((value) << XDMAC_GWS_WS13_Pos))
#define   XDMAC_GWS_WS13_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS13_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS13_0                      (XDMAC_GWS_WS13_0_Val << XDMAC_GWS_WS13_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS13_1                      (XDMAC_GWS_WS13_1_Val << XDMAC_GWS_WS13_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS14_Pos                    _U_(14)                                              /**< (XDMAC_GWS) XDMAC Channel 14 Write Suspend Position */
#define XDMAC_GWS_WS14_Msk                    (_U_(0x1) << XDMAC_GWS_WS14_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 14 Write Suspend Mask */
#define XDMAC_GWS_WS14(value)                 (XDMAC_GWS_WS14_Msk & ((value) << XDMAC_GWS_WS14_Pos))
#define   XDMAC_GWS_WS14_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS14_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS14_0                      (XDMAC_GWS_WS14_0_Val << XDMAC_GWS_WS14_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS14_1                      (XDMAC_GWS_WS14_1_Val << XDMAC_GWS_WS14_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS15_Pos                    _U_(15)                                              /**< (XDMAC_GWS) XDMAC Channel 15 Write Suspend Position */
#define XDMAC_GWS_WS15_Msk                    (_U_(0x1) << XDMAC_GWS_WS15_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 15 Write Suspend Mask */
#define XDMAC_GWS_WS15(value)                 (XDMAC_GWS_WS15_Msk & ((value) << XDMAC_GWS_WS15_Pos))
#define   XDMAC_GWS_WS15_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS15_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS15_0                      (XDMAC_GWS_WS15_0_Val << XDMAC_GWS_WS15_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS15_1                      (XDMAC_GWS_WS15_1_Val << XDMAC_GWS_WS15_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS16_Pos                    _U_(16)                                              /**< (XDMAC_GWS) XDMAC Channel 16 Write Suspend Position */
#define XDMAC_GWS_WS16_Msk                    (_U_(0x1) << XDMAC_GWS_WS16_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 16 Write Suspend Mask */
#define XDMAC_GWS_WS16(value)                 (XDMAC_GWS_WS16_Msk & ((value) << XDMAC_GWS_WS16_Pos))
#define   XDMAC_GWS_WS16_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS16_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS16_0                      (XDMAC_GWS_WS16_0_Val << XDMAC_GWS_WS16_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS16_1                      (XDMAC_GWS_WS16_1_Val << XDMAC_GWS_WS16_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS17_Pos                    _U_(17)                                              /**< (XDMAC_GWS) XDMAC Channel 17 Write Suspend Position */
#define XDMAC_GWS_WS17_Msk                    (_U_(0x1) << XDMAC_GWS_WS17_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 17 Write Suspend Mask */
#define XDMAC_GWS_WS17(value)                 (XDMAC_GWS_WS17_Msk & ((value) << XDMAC_GWS_WS17_Pos))
#define   XDMAC_GWS_WS17_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS17_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS17_0                      (XDMAC_GWS_WS17_0_Val << XDMAC_GWS_WS17_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS17_1                      (XDMAC_GWS_WS17_1_Val << XDMAC_GWS_WS17_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS18_Pos                    _U_(18)                                              /**< (XDMAC_GWS) XDMAC Channel 18 Write Suspend Position */
#define XDMAC_GWS_WS18_Msk                    (_U_(0x1) << XDMAC_GWS_WS18_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 18 Write Suspend Mask */
#define XDMAC_GWS_WS18(value)                 (XDMAC_GWS_WS18_Msk & ((value) << XDMAC_GWS_WS18_Pos))
#define   XDMAC_GWS_WS18_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS18_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS18_0                      (XDMAC_GWS_WS18_0_Val << XDMAC_GWS_WS18_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS18_1                      (XDMAC_GWS_WS18_1_Val << XDMAC_GWS_WS18_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS19_Pos                    _U_(19)                                              /**< (XDMAC_GWS) XDMAC Channel 19 Write Suspend Position */
#define XDMAC_GWS_WS19_Msk                    (_U_(0x1) << XDMAC_GWS_WS19_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 19 Write Suspend Mask */
#define XDMAC_GWS_WS19(value)                 (XDMAC_GWS_WS19_Msk & ((value) << XDMAC_GWS_WS19_Pos))
#define   XDMAC_GWS_WS19_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS19_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS19_0                      (XDMAC_GWS_WS19_0_Val << XDMAC_GWS_WS19_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS19_1                      (XDMAC_GWS_WS19_1_Val << XDMAC_GWS_WS19_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS20_Pos                    _U_(20)                                              /**< (XDMAC_GWS) XDMAC Channel 20 Write Suspend Position */
#define XDMAC_GWS_WS20_Msk                    (_U_(0x1) << XDMAC_GWS_WS20_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 20 Write Suspend Mask */
#define XDMAC_GWS_WS20(value)                 (XDMAC_GWS_WS20_Msk & ((value) << XDMAC_GWS_WS20_Pos))
#define   XDMAC_GWS_WS20_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS20_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS20_0                      (XDMAC_GWS_WS20_0_Val << XDMAC_GWS_WS20_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS20_1                      (XDMAC_GWS_WS20_1_Val << XDMAC_GWS_WS20_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS21_Pos                    _U_(21)                                              /**< (XDMAC_GWS) XDMAC Channel 21 Write Suspend Position */
#define XDMAC_GWS_WS21_Msk                    (_U_(0x1) << XDMAC_GWS_WS21_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 21 Write Suspend Mask */
#define XDMAC_GWS_WS21(value)                 (XDMAC_GWS_WS21_Msk & ((value) << XDMAC_GWS_WS21_Pos))
#define   XDMAC_GWS_WS21_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS21_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS21_0                      (XDMAC_GWS_WS21_0_Val << XDMAC_GWS_WS21_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS21_1                      (XDMAC_GWS_WS21_1_Val << XDMAC_GWS_WS21_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS22_Pos                    _U_(22)                                              /**< (XDMAC_GWS) XDMAC Channel 22 Write Suspend Position */
#define XDMAC_GWS_WS22_Msk                    (_U_(0x1) << XDMAC_GWS_WS22_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 22 Write Suspend Mask */
#define XDMAC_GWS_WS22(value)                 (XDMAC_GWS_WS22_Msk & ((value) << XDMAC_GWS_WS22_Pos))
#define   XDMAC_GWS_WS22_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS22_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS22_0                      (XDMAC_GWS_WS22_0_Val << XDMAC_GWS_WS22_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS22_1                      (XDMAC_GWS_WS22_1_Val << XDMAC_GWS_WS22_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS23_Pos                    _U_(23)                                              /**< (XDMAC_GWS) XDMAC Channel 23 Write Suspend Position */
#define XDMAC_GWS_WS23_Msk                    (_U_(0x1) << XDMAC_GWS_WS23_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 23 Write Suspend Mask */
#define XDMAC_GWS_WS23(value)                 (XDMAC_GWS_WS23_Msk & ((value) << XDMAC_GWS_WS23_Pos))
#define   XDMAC_GWS_WS23_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS23_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS23_0                      (XDMAC_GWS_WS23_0_Val << XDMAC_GWS_WS23_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS23_1                      (XDMAC_GWS_WS23_1_Val << XDMAC_GWS_WS23_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS24_Pos                    _U_(24)                                              /**< (XDMAC_GWS) XDMAC Channel 24 Write Suspend Position */
#define XDMAC_GWS_WS24_Msk                    (_U_(0x1) << XDMAC_GWS_WS24_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 24 Write Suspend Mask */
#define XDMAC_GWS_WS24(value)                 (XDMAC_GWS_WS24_Msk & ((value) << XDMAC_GWS_WS24_Pos))
#define   XDMAC_GWS_WS24_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS24_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS24_0                      (XDMAC_GWS_WS24_0_Val << XDMAC_GWS_WS24_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS24_1                      (XDMAC_GWS_WS24_1_Val << XDMAC_GWS_WS24_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS25_Pos                    _U_(25)                                              /**< (XDMAC_GWS) XDMAC Channel 25 Write Suspend Position */
#define XDMAC_GWS_WS25_Msk                    (_U_(0x1) << XDMAC_GWS_WS25_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 25 Write Suspend Mask */
#define XDMAC_GWS_WS25(value)                 (XDMAC_GWS_WS25_Msk & ((value) << XDMAC_GWS_WS25_Pos))
#define   XDMAC_GWS_WS25_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS25_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS25_0                      (XDMAC_GWS_WS25_0_Val << XDMAC_GWS_WS25_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS25_1                      (XDMAC_GWS_WS25_1_Val << XDMAC_GWS_WS25_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS26_Pos                    _U_(26)                                              /**< (XDMAC_GWS) XDMAC Channel 26 Write Suspend Position */
#define XDMAC_GWS_WS26_Msk                    (_U_(0x1) << XDMAC_GWS_WS26_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 26 Write Suspend Mask */
#define XDMAC_GWS_WS26(value)                 (XDMAC_GWS_WS26_Msk & ((value) << XDMAC_GWS_WS26_Pos))
#define   XDMAC_GWS_WS26_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS26_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS26_0                      (XDMAC_GWS_WS26_0_Val << XDMAC_GWS_WS26_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS26_1                      (XDMAC_GWS_WS26_1_Val << XDMAC_GWS_WS26_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS27_Pos                    _U_(27)                                              /**< (XDMAC_GWS) XDMAC Channel 27 Write Suspend Position */
#define XDMAC_GWS_WS27_Msk                    (_U_(0x1) << XDMAC_GWS_WS27_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 27 Write Suspend Mask */
#define XDMAC_GWS_WS27(value)                 (XDMAC_GWS_WS27_Msk & ((value) << XDMAC_GWS_WS27_Pos))
#define   XDMAC_GWS_WS27_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS27_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS27_0                      (XDMAC_GWS_WS27_0_Val << XDMAC_GWS_WS27_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS27_1                      (XDMAC_GWS_WS27_1_Val << XDMAC_GWS_WS27_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS28_Pos                    _U_(28)                                              /**< (XDMAC_GWS) XDMAC Channel 28 Write Suspend Position */
#define XDMAC_GWS_WS28_Msk                    (_U_(0x1) << XDMAC_GWS_WS28_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 28 Write Suspend Mask */
#define XDMAC_GWS_WS28(value)                 (XDMAC_GWS_WS28_Msk & ((value) << XDMAC_GWS_WS28_Pos))
#define   XDMAC_GWS_WS28_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS28_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS28_0                      (XDMAC_GWS_WS28_0_Val << XDMAC_GWS_WS28_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS28_1                      (XDMAC_GWS_WS28_1_Val << XDMAC_GWS_WS28_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS29_Pos                    _U_(29)                                              /**< (XDMAC_GWS) XDMAC Channel 29 Write Suspend Position */
#define XDMAC_GWS_WS29_Msk                    (_U_(0x1) << XDMAC_GWS_WS29_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 29 Write Suspend Mask */
#define XDMAC_GWS_WS29(value)                 (XDMAC_GWS_WS29_Msk & ((value) << XDMAC_GWS_WS29_Pos))
#define   XDMAC_GWS_WS29_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS29_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS29_0                      (XDMAC_GWS_WS29_0_Val << XDMAC_GWS_WS29_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS29_1                      (XDMAC_GWS_WS29_1_Val << XDMAC_GWS_WS29_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS30_Pos                    _U_(30)                                              /**< (XDMAC_GWS) XDMAC Channel 30 Write Suspend Position */
#define XDMAC_GWS_WS30_Msk                    (_U_(0x1) << XDMAC_GWS_WS30_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 30 Write Suspend Mask */
#define XDMAC_GWS_WS30(value)                 (XDMAC_GWS_WS30_Msk & ((value) << XDMAC_GWS_WS30_Pos))
#define   XDMAC_GWS_WS30_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS30_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS30_0                      (XDMAC_GWS_WS30_0_Val << XDMAC_GWS_WS30_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS30_1                      (XDMAC_GWS_WS30_1_Val << XDMAC_GWS_WS30_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_WS31_Pos                    _U_(31)                                              /**< (XDMAC_GWS) XDMAC Channel 31 Write Suspend Position */
#define XDMAC_GWS_WS31_Msk                    (_U_(0x1) << XDMAC_GWS_WS31_Pos)                     /**< (XDMAC_GWS) XDMAC Channel 31 Write Suspend Mask */
#define XDMAC_GWS_WS31(value)                 (XDMAC_GWS_WS31_Msk & ((value) << XDMAC_GWS_WS31_Pos))
#define   XDMAC_GWS_WS31_0_Val                _U_(0x0)                                             /**< (XDMAC_GWS) The write channel is not suspended.  */
#define   XDMAC_GWS_WS31_1_Val                _U_(0x1)                                             /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler.  */
#define XDMAC_GWS_WS31_0                      (XDMAC_GWS_WS31_0_Val << XDMAC_GWS_WS31_Pos)         /**< (XDMAC_GWS) The write channel is not suspended. Position  */
#define XDMAC_GWS_WS31_1                      (XDMAC_GWS_WS31_1_Val << XDMAC_GWS_WS31_Pos)         /**< (XDMAC_GWS) Destination requests are no longer routed to the scheduler. Position  */
#define XDMAC_GWS_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GWS) Register Mask  */

#define XDMAC_GWS_WS_Pos                      _U_(0)                                               /**< (XDMAC_GWS Position) XDMAC Channel 3x Write Suspend */
#define XDMAC_GWS_WS_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GWS_WS_Pos)                /**< (XDMAC_GWS Mask) WS */
#define XDMAC_GWS_WS(value)                   (XDMAC_GWS_WS_Msk & ((value) << XDMAC_GWS_WS_Pos))   

/* -------- XDMAC_GWR : (XDMAC Offset: 0x3C) ( /W 32) Global Channel Write Resume Register -------- */
#define XDMAC_GWR_WR0_Pos                     _U_(0)                                               /**< (XDMAC_GWR) XDMAC Channel 0 Write Resume Position */
#define XDMAC_GWR_WR0_Msk                     (_U_(0x1) << XDMAC_GWR_WR0_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 0 Write Resume Mask */
#define XDMAC_GWR_WR0(value)                  (XDMAC_GWR_WR0_Msk & ((value) << XDMAC_GWR_WR0_Pos))
#define   XDMAC_GWR_WR0_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR0_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR0_0                       (XDMAC_GWR_WR0_0_Val << XDMAC_GWR_WR0_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR0_1                       (XDMAC_GWR_WR0_1_Val << XDMAC_GWR_WR0_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR1_Pos                     _U_(1)                                               /**< (XDMAC_GWR) XDMAC Channel 1 Write Resume Position */
#define XDMAC_GWR_WR1_Msk                     (_U_(0x1) << XDMAC_GWR_WR1_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 1 Write Resume Mask */
#define XDMAC_GWR_WR1(value)                  (XDMAC_GWR_WR1_Msk & ((value) << XDMAC_GWR_WR1_Pos))
#define   XDMAC_GWR_WR1_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR1_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR1_0                       (XDMAC_GWR_WR1_0_Val << XDMAC_GWR_WR1_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR1_1                       (XDMAC_GWR_WR1_1_Val << XDMAC_GWR_WR1_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR2_Pos                     _U_(2)                                               /**< (XDMAC_GWR) XDMAC Channel 2 Write Resume Position */
#define XDMAC_GWR_WR2_Msk                     (_U_(0x1) << XDMAC_GWR_WR2_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 2 Write Resume Mask */
#define XDMAC_GWR_WR2(value)                  (XDMAC_GWR_WR2_Msk & ((value) << XDMAC_GWR_WR2_Pos))
#define   XDMAC_GWR_WR2_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR2_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR2_0                       (XDMAC_GWR_WR2_0_Val << XDMAC_GWR_WR2_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR2_1                       (XDMAC_GWR_WR2_1_Val << XDMAC_GWR_WR2_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR3_Pos                     _U_(3)                                               /**< (XDMAC_GWR) XDMAC Channel 3 Write Resume Position */
#define XDMAC_GWR_WR3_Msk                     (_U_(0x1) << XDMAC_GWR_WR3_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 3 Write Resume Mask */
#define XDMAC_GWR_WR3(value)                  (XDMAC_GWR_WR3_Msk & ((value) << XDMAC_GWR_WR3_Pos))
#define   XDMAC_GWR_WR3_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR3_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR3_0                       (XDMAC_GWR_WR3_0_Val << XDMAC_GWR_WR3_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR3_1                       (XDMAC_GWR_WR3_1_Val << XDMAC_GWR_WR3_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR4_Pos                     _U_(4)                                               /**< (XDMAC_GWR) XDMAC Channel 4 Write Resume Position */
#define XDMAC_GWR_WR4_Msk                     (_U_(0x1) << XDMAC_GWR_WR4_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 4 Write Resume Mask */
#define XDMAC_GWR_WR4(value)                  (XDMAC_GWR_WR4_Msk & ((value) << XDMAC_GWR_WR4_Pos))
#define   XDMAC_GWR_WR4_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR4_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR4_0                       (XDMAC_GWR_WR4_0_Val << XDMAC_GWR_WR4_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR4_1                       (XDMAC_GWR_WR4_1_Val << XDMAC_GWR_WR4_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR5_Pos                     _U_(5)                                               /**< (XDMAC_GWR) XDMAC Channel 5 Write Resume Position */
#define XDMAC_GWR_WR5_Msk                     (_U_(0x1) << XDMAC_GWR_WR5_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 5 Write Resume Mask */
#define XDMAC_GWR_WR5(value)                  (XDMAC_GWR_WR5_Msk & ((value) << XDMAC_GWR_WR5_Pos))
#define   XDMAC_GWR_WR5_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR5_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR5_0                       (XDMAC_GWR_WR5_0_Val << XDMAC_GWR_WR5_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR5_1                       (XDMAC_GWR_WR5_1_Val << XDMAC_GWR_WR5_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR6_Pos                     _U_(6)                                               /**< (XDMAC_GWR) XDMAC Channel 6 Write Resume Position */
#define XDMAC_GWR_WR6_Msk                     (_U_(0x1) << XDMAC_GWR_WR6_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 6 Write Resume Mask */
#define XDMAC_GWR_WR6(value)                  (XDMAC_GWR_WR6_Msk & ((value) << XDMAC_GWR_WR6_Pos))
#define   XDMAC_GWR_WR6_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR6_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR6_0                       (XDMAC_GWR_WR6_0_Val << XDMAC_GWR_WR6_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR6_1                       (XDMAC_GWR_WR6_1_Val << XDMAC_GWR_WR6_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR7_Pos                     _U_(7)                                               /**< (XDMAC_GWR) XDMAC Channel 7 Write Resume Position */
#define XDMAC_GWR_WR7_Msk                     (_U_(0x1) << XDMAC_GWR_WR7_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 7 Write Resume Mask */
#define XDMAC_GWR_WR7(value)                  (XDMAC_GWR_WR7_Msk & ((value) << XDMAC_GWR_WR7_Pos))
#define   XDMAC_GWR_WR7_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR7_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR7_0                       (XDMAC_GWR_WR7_0_Val << XDMAC_GWR_WR7_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR7_1                       (XDMAC_GWR_WR7_1_Val << XDMAC_GWR_WR7_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR8_Pos                     _U_(8)                                               /**< (XDMAC_GWR) XDMAC Channel 8 Write Resume Position */
#define XDMAC_GWR_WR8_Msk                     (_U_(0x1) << XDMAC_GWR_WR8_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 8 Write Resume Mask */
#define XDMAC_GWR_WR8(value)                  (XDMAC_GWR_WR8_Msk & ((value) << XDMAC_GWR_WR8_Pos))
#define   XDMAC_GWR_WR8_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR8_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR8_0                       (XDMAC_GWR_WR8_0_Val << XDMAC_GWR_WR8_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR8_1                       (XDMAC_GWR_WR8_1_Val << XDMAC_GWR_WR8_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR9_Pos                     _U_(9)                                               /**< (XDMAC_GWR) XDMAC Channel 9 Write Resume Position */
#define XDMAC_GWR_WR9_Msk                     (_U_(0x1) << XDMAC_GWR_WR9_Pos)                      /**< (XDMAC_GWR) XDMAC Channel 9 Write Resume Mask */
#define XDMAC_GWR_WR9(value)                  (XDMAC_GWR_WR9_Msk & ((value) << XDMAC_GWR_WR9_Pos))
#define   XDMAC_GWR_WR9_0_Val                 _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR9_1_Val                 _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR9_0                       (XDMAC_GWR_WR9_0_Val << XDMAC_GWR_WR9_Pos)           /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR9_1                       (XDMAC_GWR_WR9_1_Val << XDMAC_GWR_WR9_Pos)           /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR10_Pos                    _U_(10)                                              /**< (XDMAC_GWR) XDMAC Channel 10 Write Resume Position */
#define XDMAC_GWR_WR10_Msk                    (_U_(0x1) << XDMAC_GWR_WR10_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 10 Write Resume Mask */
#define XDMAC_GWR_WR10(value)                 (XDMAC_GWR_WR10_Msk & ((value) << XDMAC_GWR_WR10_Pos))
#define   XDMAC_GWR_WR10_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR10_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR10_0                      (XDMAC_GWR_WR10_0_Val << XDMAC_GWR_WR10_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR10_1                      (XDMAC_GWR_WR10_1_Val << XDMAC_GWR_WR10_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR11_Pos                    _U_(11)                                              /**< (XDMAC_GWR) XDMAC Channel 11 Write Resume Position */
#define XDMAC_GWR_WR11_Msk                    (_U_(0x1) << XDMAC_GWR_WR11_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 11 Write Resume Mask */
#define XDMAC_GWR_WR11(value)                 (XDMAC_GWR_WR11_Msk & ((value) << XDMAC_GWR_WR11_Pos))
#define   XDMAC_GWR_WR11_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR11_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR11_0                      (XDMAC_GWR_WR11_0_Val << XDMAC_GWR_WR11_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR11_1                      (XDMAC_GWR_WR11_1_Val << XDMAC_GWR_WR11_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR12_Pos                    _U_(12)                                              /**< (XDMAC_GWR) XDMAC Channel 12 Write Resume Position */
#define XDMAC_GWR_WR12_Msk                    (_U_(0x1) << XDMAC_GWR_WR12_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 12 Write Resume Mask */
#define XDMAC_GWR_WR12(value)                 (XDMAC_GWR_WR12_Msk & ((value) << XDMAC_GWR_WR12_Pos))
#define   XDMAC_GWR_WR12_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR12_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR12_0                      (XDMAC_GWR_WR12_0_Val << XDMAC_GWR_WR12_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR12_1                      (XDMAC_GWR_WR12_1_Val << XDMAC_GWR_WR12_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR13_Pos                    _U_(13)                                              /**< (XDMAC_GWR) XDMAC Channel 13 Write Resume Position */
#define XDMAC_GWR_WR13_Msk                    (_U_(0x1) << XDMAC_GWR_WR13_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 13 Write Resume Mask */
#define XDMAC_GWR_WR13(value)                 (XDMAC_GWR_WR13_Msk & ((value) << XDMAC_GWR_WR13_Pos))
#define   XDMAC_GWR_WR13_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR13_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR13_0                      (XDMAC_GWR_WR13_0_Val << XDMAC_GWR_WR13_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR13_1                      (XDMAC_GWR_WR13_1_Val << XDMAC_GWR_WR13_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR14_Pos                    _U_(14)                                              /**< (XDMAC_GWR) XDMAC Channel 14 Write Resume Position */
#define XDMAC_GWR_WR14_Msk                    (_U_(0x1) << XDMAC_GWR_WR14_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 14 Write Resume Mask */
#define XDMAC_GWR_WR14(value)                 (XDMAC_GWR_WR14_Msk & ((value) << XDMAC_GWR_WR14_Pos))
#define   XDMAC_GWR_WR14_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR14_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR14_0                      (XDMAC_GWR_WR14_0_Val << XDMAC_GWR_WR14_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR14_1                      (XDMAC_GWR_WR14_1_Val << XDMAC_GWR_WR14_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR15_Pos                    _U_(15)                                              /**< (XDMAC_GWR) XDMAC Channel 15 Write Resume Position */
#define XDMAC_GWR_WR15_Msk                    (_U_(0x1) << XDMAC_GWR_WR15_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 15 Write Resume Mask */
#define XDMAC_GWR_WR15(value)                 (XDMAC_GWR_WR15_Msk & ((value) << XDMAC_GWR_WR15_Pos))
#define   XDMAC_GWR_WR15_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR15_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR15_0                      (XDMAC_GWR_WR15_0_Val << XDMAC_GWR_WR15_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR15_1                      (XDMAC_GWR_WR15_1_Val << XDMAC_GWR_WR15_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR16_Pos                    _U_(16)                                              /**< (XDMAC_GWR) XDMAC Channel 16 Write Resume Position */
#define XDMAC_GWR_WR16_Msk                    (_U_(0x1) << XDMAC_GWR_WR16_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 16 Write Resume Mask */
#define XDMAC_GWR_WR16(value)                 (XDMAC_GWR_WR16_Msk & ((value) << XDMAC_GWR_WR16_Pos))
#define   XDMAC_GWR_WR16_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR16_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR16_0                      (XDMAC_GWR_WR16_0_Val << XDMAC_GWR_WR16_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR16_1                      (XDMAC_GWR_WR16_1_Val << XDMAC_GWR_WR16_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR17_Pos                    _U_(17)                                              /**< (XDMAC_GWR) XDMAC Channel 17 Write Resume Position */
#define XDMAC_GWR_WR17_Msk                    (_U_(0x1) << XDMAC_GWR_WR17_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 17 Write Resume Mask */
#define XDMAC_GWR_WR17(value)                 (XDMAC_GWR_WR17_Msk & ((value) << XDMAC_GWR_WR17_Pos))
#define   XDMAC_GWR_WR17_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR17_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR17_0                      (XDMAC_GWR_WR17_0_Val << XDMAC_GWR_WR17_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR17_1                      (XDMAC_GWR_WR17_1_Val << XDMAC_GWR_WR17_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR18_Pos                    _U_(18)                                              /**< (XDMAC_GWR) XDMAC Channel 18 Write Resume Position */
#define XDMAC_GWR_WR18_Msk                    (_U_(0x1) << XDMAC_GWR_WR18_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 18 Write Resume Mask */
#define XDMAC_GWR_WR18(value)                 (XDMAC_GWR_WR18_Msk & ((value) << XDMAC_GWR_WR18_Pos))
#define   XDMAC_GWR_WR18_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR18_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR18_0                      (XDMAC_GWR_WR18_0_Val << XDMAC_GWR_WR18_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR18_1                      (XDMAC_GWR_WR18_1_Val << XDMAC_GWR_WR18_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR19_Pos                    _U_(19)                                              /**< (XDMAC_GWR) XDMAC Channel 19 Write Resume Position */
#define XDMAC_GWR_WR19_Msk                    (_U_(0x1) << XDMAC_GWR_WR19_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 19 Write Resume Mask */
#define XDMAC_GWR_WR19(value)                 (XDMAC_GWR_WR19_Msk & ((value) << XDMAC_GWR_WR19_Pos))
#define   XDMAC_GWR_WR19_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR19_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR19_0                      (XDMAC_GWR_WR19_0_Val << XDMAC_GWR_WR19_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR19_1                      (XDMAC_GWR_WR19_1_Val << XDMAC_GWR_WR19_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR20_Pos                    _U_(20)                                              /**< (XDMAC_GWR) XDMAC Channel 20 Write Resume Position */
#define XDMAC_GWR_WR20_Msk                    (_U_(0x1) << XDMAC_GWR_WR20_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 20 Write Resume Mask */
#define XDMAC_GWR_WR20(value)                 (XDMAC_GWR_WR20_Msk & ((value) << XDMAC_GWR_WR20_Pos))
#define   XDMAC_GWR_WR20_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR20_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR20_0                      (XDMAC_GWR_WR20_0_Val << XDMAC_GWR_WR20_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR20_1                      (XDMAC_GWR_WR20_1_Val << XDMAC_GWR_WR20_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR21_Pos                    _U_(21)                                              /**< (XDMAC_GWR) XDMAC Channel 21 Write Resume Position */
#define XDMAC_GWR_WR21_Msk                    (_U_(0x1) << XDMAC_GWR_WR21_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 21 Write Resume Mask */
#define XDMAC_GWR_WR21(value)                 (XDMAC_GWR_WR21_Msk & ((value) << XDMAC_GWR_WR21_Pos))
#define   XDMAC_GWR_WR21_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR21_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR21_0                      (XDMAC_GWR_WR21_0_Val << XDMAC_GWR_WR21_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR21_1                      (XDMAC_GWR_WR21_1_Val << XDMAC_GWR_WR21_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR22_Pos                    _U_(22)                                              /**< (XDMAC_GWR) XDMAC Channel 22 Write Resume Position */
#define XDMAC_GWR_WR22_Msk                    (_U_(0x1) << XDMAC_GWR_WR22_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 22 Write Resume Mask */
#define XDMAC_GWR_WR22(value)                 (XDMAC_GWR_WR22_Msk & ((value) << XDMAC_GWR_WR22_Pos))
#define   XDMAC_GWR_WR22_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR22_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR22_0                      (XDMAC_GWR_WR22_0_Val << XDMAC_GWR_WR22_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR22_1                      (XDMAC_GWR_WR22_1_Val << XDMAC_GWR_WR22_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR23_Pos                    _U_(23)                                              /**< (XDMAC_GWR) XDMAC Channel 23 Write Resume Position */
#define XDMAC_GWR_WR23_Msk                    (_U_(0x1) << XDMAC_GWR_WR23_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 23 Write Resume Mask */
#define XDMAC_GWR_WR23(value)                 (XDMAC_GWR_WR23_Msk & ((value) << XDMAC_GWR_WR23_Pos))
#define   XDMAC_GWR_WR23_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR23_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR23_0                      (XDMAC_GWR_WR23_0_Val << XDMAC_GWR_WR23_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR23_1                      (XDMAC_GWR_WR23_1_Val << XDMAC_GWR_WR23_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR24_Pos                    _U_(24)                                              /**< (XDMAC_GWR) XDMAC Channel 24 Write Resume Position */
#define XDMAC_GWR_WR24_Msk                    (_U_(0x1) << XDMAC_GWR_WR24_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 24 Write Resume Mask */
#define XDMAC_GWR_WR24(value)                 (XDMAC_GWR_WR24_Msk & ((value) << XDMAC_GWR_WR24_Pos))
#define   XDMAC_GWR_WR24_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR24_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR24_0                      (XDMAC_GWR_WR24_0_Val << XDMAC_GWR_WR24_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR24_1                      (XDMAC_GWR_WR24_1_Val << XDMAC_GWR_WR24_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR25_Pos                    _U_(25)                                              /**< (XDMAC_GWR) XDMAC Channel 25 Write Resume Position */
#define XDMAC_GWR_WR25_Msk                    (_U_(0x1) << XDMAC_GWR_WR25_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 25 Write Resume Mask */
#define XDMAC_GWR_WR25(value)                 (XDMAC_GWR_WR25_Msk & ((value) << XDMAC_GWR_WR25_Pos))
#define   XDMAC_GWR_WR25_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR25_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR25_0                      (XDMAC_GWR_WR25_0_Val << XDMAC_GWR_WR25_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR25_1                      (XDMAC_GWR_WR25_1_Val << XDMAC_GWR_WR25_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR26_Pos                    _U_(26)                                              /**< (XDMAC_GWR) XDMAC Channel 26 Write Resume Position */
#define XDMAC_GWR_WR26_Msk                    (_U_(0x1) << XDMAC_GWR_WR26_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 26 Write Resume Mask */
#define XDMAC_GWR_WR26(value)                 (XDMAC_GWR_WR26_Msk & ((value) << XDMAC_GWR_WR26_Pos))
#define   XDMAC_GWR_WR26_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR26_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR26_0                      (XDMAC_GWR_WR26_0_Val << XDMAC_GWR_WR26_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR26_1                      (XDMAC_GWR_WR26_1_Val << XDMAC_GWR_WR26_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR27_Pos                    _U_(27)                                              /**< (XDMAC_GWR) XDMAC Channel 27 Write Resume Position */
#define XDMAC_GWR_WR27_Msk                    (_U_(0x1) << XDMAC_GWR_WR27_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 27 Write Resume Mask */
#define XDMAC_GWR_WR27(value)                 (XDMAC_GWR_WR27_Msk & ((value) << XDMAC_GWR_WR27_Pos))
#define   XDMAC_GWR_WR27_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR27_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR27_0                      (XDMAC_GWR_WR27_0_Val << XDMAC_GWR_WR27_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR27_1                      (XDMAC_GWR_WR27_1_Val << XDMAC_GWR_WR27_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR28_Pos                    _U_(28)                                              /**< (XDMAC_GWR) XDMAC Channel 28 Write Resume Position */
#define XDMAC_GWR_WR28_Msk                    (_U_(0x1) << XDMAC_GWR_WR28_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 28 Write Resume Mask */
#define XDMAC_GWR_WR28(value)                 (XDMAC_GWR_WR28_Msk & ((value) << XDMAC_GWR_WR28_Pos))
#define   XDMAC_GWR_WR28_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR28_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR28_0                      (XDMAC_GWR_WR28_0_Val << XDMAC_GWR_WR28_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR28_1                      (XDMAC_GWR_WR28_1_Val << XDMAC_GWR_WR28_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR29_Pos                    _U_(29)                                              /**< (XDMAC_GWR) XDMAC Channel 29 Write Resume Position */
#define XDMAC_GWR_WR29_Msk                    (_U_(0x1) << XDMAC_GWR_WR29_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 29 Write Resume Mask */
#define XDMAC_GWR_WR29(value)                 (XDMAC_GWR_WR29_Msk & ((value) << XDMAC_GWR_WR29_Pos))
#define   XDMAC_GWR_WR29_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR29_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR29_0                      (XDMAC_GWR_WR29_0_Val << XDMAC_GWR_WR29_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR29_1                      (XDMAC_GWR_WR29_1_Val << XDMAC_GWR_WR29_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR30_Pos                    _U_(30)                                              /**< (XDMAC_GWR) XDMAC Channel 30 Write Resume Position */
#define XDMAC_GWR_WR30_Msk                    (_U_(0x1) << XDMAC_GWR_WR30_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 30 Write Resume Mask */
#define XDMAC_GWR_WR30(value)                 (XDMAC_GWR_WR30_Msk & ((value) << XDMAC_GWR_WR30_Pos))
#define   XDMAC_GWR_WR30_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR30_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR30_0                      (XDMAC_GWR_WR30_0_Val << XDMAC_GWR_WR30_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR30_1                      (XDMAC_GWR_WR30_1_Val << XDMAC_GWR_WR30_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_WR31_Pos                    _U_(31)                                              /**< (XDMAC_GWR) XDMAC Channel 31 Write Resume Position */
#define XDMAC_GWR_WR31_Msk                    (_U_(0x1) << XDMAC_GWR_WR31_Pos)                     /**< (XDMAC_GWR) XDMAC Channel 31 Write Resume Mask */
#define XDMAC_GWR_WR31(value)                 (XDMAC_GWR_WR31_Msk & ((value) << XDMAC_GWR_WR31_Pos))
#define   XDMAC_GWR_WR31_0_Val                _U_(0x0)                                             /**< (XDMAC_GWR) No effect  */
#define   XDMAC_GWR_WR31_1_Val                _U_(0x1)                                             /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler.  */
#define XDMAC_GWR_WR31_0                      (XDMAC_GWR_WR31_0_Val << XDMAC_GWR_WR31_Pos)         /**< (XDMAC_GWR) No effect Position  */
#define XDMAC_GWR_WR31_1                      (XDMAC_GWR_WR31_1_Val << XDMAC_GWR_WR31_Pos)         /**< (XDMAC_GWR) Destination requests are serviced and routed to the scheduler. Position  */
#define XDMAC_GWR_Msk                         _U_(0xFFFFFFFF)                                      /**< (XDMAC_GWR) Register Mask  */

#define XDMAC_GWR_WR_Pos                      _U_(0)                                               /**< (XDMAC_GWR Position) XDMAC Channel 3x Write Resume */
#define XDMAC_GWR_WR_Msk                      (_U_(0xFFFFFFFF) << XDMAC_GWR_WR_Pos)                /**< (XDMAC_GWR Mask) WR */
#define XDMAC_GWR_WR(value)                   (XDMAC_GWR_WR_Msk & ((value) << XDMAC_GWR_WR_Pos))   

/* -------- XDMAC_GRWS : (XDMAC Offset: 0x40) ( /W 32) Global Channel Read Write Suspend Register -------- */
#define XDMAC_GRWS_RWS0_Pos                   _U_(0)                                               /**< (XDMAC_GRWS) XDMAC Channel 0 Read Write Suspend Position */
#define XDMAC_GRWS_RWS0_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS0_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 0 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS0(value)                (XDMAC_GRWS_RWS0_Msk & ((value) << XDMAC_GRWS_RWS0_Pos))
#define   XDMAC_GRWS_RWS0_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS0_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS0_0                     (XDMAC_GRWS_RWS0_0_Val << XDMAC_GRWS_RWS0_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS0_1                     (XDMAC_GRWS_RWS0_1_Val << XDMAC_GRWS_RWS0_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS1_Pos                   _U_(1)                                               /**< (XDMAC_GRWS) XDMAC Channel 1 Read Write Suspend Position */
#define XDMAC_GRWS_RWS1_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS1_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 1 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS1(value)                (XDMAC_GRWS_RWS1_Msk & ((value) << XDMAC_GRWS_RWS1_Pos))
#define   XDMAC_GRWS_RWS1_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS1_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS1_0                     (XDMAC_GRWS_RWS1_0_Val << XDMAC_GRWS_RWS1_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS1_1                     (XDMAC_GRWS_RWS1_1_Val << XDMAC_GRWS_RWS1_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS2_Pos                   _U_(2)                                               /**< (XDMAC_GRWS) XDMAC Channel 2 Read Write Suspend Position */
#define XDMAC_GRWS_RWS2_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS2_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 2 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS2(value)                (XDMAC_GRWS_RWS2_Msk & ((value) << XDMAC_GRWS_RWS2_Pos))
#define   XDMAC_GRWS_RWS2_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS2_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS2_0                     (XDMAC_GRWS_RWS2_0_Val << XDMAC_GRWS_RWS2_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS2_1                     (XDMAC_GRWS_RWS2_1_Val << XDMAC_GRWS_RWS2_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS3_Pos                   _U_(3)                                               /**< (XDMAC_GRWS) XDMAC Channel 3 Read Write Suspend Position */
#define XDMAC_GRWS_RWS3_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS3_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 3 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS3(value)                (XDMAC_GRWS_RWS3_Msk & ((value) << XDMAC_GRWS_RWS3_Pos))
#define   XDMAC_GRWS_RWS3_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS3_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS3_0                     (XDMAC_GRWS_RWS3_0_Val << XDMAC_GRWS_RWS3_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS3_1                     (XDMAC_GRWS_RWS3_1_Val << XDMAC_GRWS_RWS3_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS4_Pos                   _U_(4)                                               /**< (XDMAC_GRWS) XDMAC Channel 4 Read Write Suspend Position */
#define XDMAC_GRWS_RWS4_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS4_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 4 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS4(value)                (XDMAC_GRWS_RWS4_Msk & ((value) << XDMAC_GRWS_RWS4_Pos))
#define   XDMAC_GRWS_RWS4_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS4_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS4_0                     (XDMAC_GRWS_RWS4_0_Val << XDMAC_GRWS_RWS4_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS4_1                     (XDMAC_GRWS_RWS4_1_Val << XDMAC_GRWS_RWS4_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS5_Pos                   _U_(5)                                               /**< (XDMAC_GRWS) XDMAC Channel 5 Read Write Suspend Position */
#define XDMAC_GRWS_RWS5_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS5_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 5 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS5(value)                (XDMAC_GRWS_RWS5_Msk & ((value) << XDMAC_GRWS_RWS5_Pos))
#define   XDMAC_GRWS_RWS5_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS5_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS5_0                     (XDMAC_GRWS_RWS5_0_Val << XDMAC_GRWS_RWS5_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS5_1                     (XDMAC_GRWS_RWS5_1_Val << XDMAC_GRWS_RWS5_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS6_Pos                   _U_(6)                                               /**< (XDMAC_GRWS) XDMAC Channel 6 Read Write Suspend Position */
#define XDMAC_GRWS_RWS6_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS6_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 6 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS6(value)                (XDMAC_GRWS_RWS6_Msk & ((value) << XDMAC_GRWS_RWS6_Pos))
#define   XDMAC_GRWS_RWS6_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS6_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS6_0                     (XDMAC_GRWS_RWS6_0_Val << XDMAC_GRWS_RWS6_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS6_1                     (XDMAC_GRWS_RWS6_1_Val << XDMAC_GRWS_RWS6_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS7_Pos                   _U_(7)                                               /**< (XDMAC_GRWS) XDMAC Channel 7 Read Write Suspend Position */
#define XDMAC_GRWS_RWS7_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS7_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 7 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS7(value)                (XDMAC_GRWS_RWS7_Msk & ((value) << XDMAC_GRWS_RWS7_Pos))
#define   XDMAC_GRWS_RWS7_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS7_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS7_0                     (XDMAC_GRWS_RWS7_0_Val << XDMAC_GRWS_RWS7_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS7_1                     (XDMAC_GRWS_RWS7_1_Val << XDMAC_GRWS_RWS7_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS8_Pos                   _U_(8)                                               /**< (XDMAC_GRWS) XDMAC Channel 8 Read Write Suspend Position */
#define XDMAC_GRWS_RWS8_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS8_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 8 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS8(value)                (XDMAC_GRWS_RWS8_Msk & ((value) << XDMAC_GRWS_RWS8_Pos))
#define   XDMAC_GRWS_RWS8_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS8_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS8_0                     (XDMAC_GRWS_RWS8_0_Val << XDMAC_GRWS_RWS8_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS8_1                     (XDMAC_GRWS_RWS8_1_Val << XDMAC_GRWS_RWS8_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS9_Pos                   _U_(9)                                               /**< (XDMAC_GRWS) XDMAC Channel 9 Read Write Suspend Position */
#define XDMAC_GRWS_RWS9_Msk                   (_U_(0x1) << XDMAC_GRWS_RWS9_Pos)                    /**< (XDMAC_GRWS) XDMAC Channel 9 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS9(value)                (XDMAC_GRWS_RWS9_Msk & ((value) << XDMAC_GRWS_RWS9_Pos))
#define   XDMAC_GRWS_RWS9_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS9_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS9_0                     (XDMAC_GRWS_RWS9_0_Val << XDMAC_GRWS_RWS9_Pos)       /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS9_1                     (XDMAC_GRWS_RWS9_1_Val << XDMAC_GRWS_RWS9_Pos)       /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS10_Pos                  _U_(10)                                              /**< (XDMAC_GRWS) XDMAC Channel 10 Read Write Suspend Position */
#define XDMAC_GRWS_RWS10_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS10_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 10 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS10(value)               (XDMAC_GRWS_RWS10_Msk & ((value) << XDMAC_GRWS_RWS10_Pos))
#define   XDMAC_GRWS_RWS10_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS10_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS10_0                    (XDMAC_GRWS_RWS10_0_Val << XDMAC_GRWS_RWS10_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS10_1                    (XDMAC_GRWS_RWS10_1_Val << XDMAC_GRWS_RWS10_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS11_Pos                  _U_(11)                                              /**< (XDMAC_GRWS) XDMAC Channel 11 Read Write Suspend Position */
#define XDMAC_GRWS_RWS11_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS11_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 11 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS11(value)               (XDMAC_GRWS_RWS11_Msk & ((value) << XDMAC_GRWS_RWS11_Pos))
#define   XDMAC_GRWS_RWS11_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS11_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS11_0                    (XDMAC_GRWS_RWS11_0_Val << XDMAC_GRWS_RWS11_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS11_1                    (XDMAC_GRWS_RWS11_1_Val << XDMAC_GRWS_RWS11_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS12_Pos                  _U_(12)                                              /**< (XDMAC_GRWS) XDMAC Channel 12 Read Write Suspend Position */
#define XDMAC_GRWS_RWS12_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS12_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 12 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS12(value)               (XDMAC_GRWS_RWS12_Msk & ((value) << XDMAC_GRWS_RWS12_Pos))
#define   XDMAC_GRWS_RWS12_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS12_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS12_0                    (XDMAC_GRWS_RWS12_0_Val << XDMAC_GRWS_RWS12_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS12_1                    (XDMAC_GRWS_RWS12_1_Val << XDMAC_GRWS_RWS12_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS13_Pos                  _U_(13)                                              /**< (XDMAC_GRWS) XDMAC Channel 13 Read Write Suspend Position */
#define XDMAC_GRWS_RWS13_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS13_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 13 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS13(value)               (XDMAC_GRWS_RWS13_Msk & ((value) << XDMAC_GRWS_RWS13_Pos))
#define   XDMAC_GRWS_RWS13_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS13_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS13_0                    (XDMAC_GRWS_RWS13_0_Val << XDMAC_GRWS_RWS13_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS13_1                    (XDMAC_GRWS_RWS13_1_Val << XDMAC_GRWS_RWS13_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS14_Pos                  _U_(14)                                              /**< (XDMAC_GRWS) XDMAC Channel 14 Read Write Suspend Position */
#define XDMAC_GRWS_RWS14_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS14_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 14 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS14(value)               (XDMAC_GRWS_RWS14_Msk & ((value) << XDMAC_GRWS_RWS14_Pos))
#define   XDMAC_GRWS_RWS14_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS14_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS14_0                    (XDMAC_GRWS_RWS14_0_Val << XDMAC_GRWS_RWS14_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS14_1                    (XDMAC_GRWS_RWS14_1_Val << XDMAC_GRWS_RWS14_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS15_Pos                  _U_(15)                                              /**< (XDMAC_GRWS) XDMAC Channel 15 Read Write Suspend Position */
#define XDMAC_GRWS_RWS15_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS15_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 15 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS15(value)               (XDMAC_GRWS_RWS15_Msk & ((value) << XDMAC_GRWS_RWS15_Pos))
#define   XDMAC_GRWS_RWS15_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS15_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS15_0                    (XDMAC_GRWS_RWS15_0_Val << XDMAC_GRWS_RWS15_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS15_1                    (XDMAC_GRWS_RWS15_1_Val << XDMAC_GRWS_RWS15_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS16_Pos                  _U_(16)                                              /**< (XDMAC_GRWS) XDMAC Channel 16 Read Write Suspend Position */
#define XDMAC_GRWS_RWS16_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS16_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 16 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS16(value)               (XDMAC_GRWS_RWS16_Msk & ((value) << XDMAC_GRWS_RWS16_Pos))
#define   XDMAC_GRWS_RWS16_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS16_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS16_0                    (XDMAC_GRWS_RWS16_0_Val << XDMAC_GRWS_RWS16_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS16_1                    (XDMAC_GRWS_RWS16_1_Val << XDMAC_GRWS_RWS16_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS17_Pos                  _U_(17)                                              /**< (XDMAC_GRWS) XDMAC Channel 17 Read Write Suspend Position */
#define XDMAC_GRWS_RWS17_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS17_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 17 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS17(value)               (XDMAC_GRWS_RWS17_Msk & ((value) << XDMAC_GRWS_RWS17_Pos))
#define   XDMAC_GRWS_RWS17_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS17_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS17_0                    (XDMAC_GRWS_RWS17_0_Val << XDMAC_GRWS_RWS17_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS17_1                    (XDMAC_GRWS_RWS17_1_Val << XDMAC_GRWS_RWS17_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS18_Pos                  _U_(18)                                              /**< (XDMAC_GRWS) XDMAC Channel 18 Read Write Suspend Position */
#define XDMAC_GRWS_RWS18_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS18_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 18 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS18(value)               (XDMAC_GRWS_RWS18_Msk & ((value) << XDMAC_GRWS_RWS18_Pos))
#define   XDMAC_GRWS_RWS18_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS18_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS18_0                    (XDMAC_GRWS_RWS18_0_Val << XDMAC_GRWS_RWS18_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS18_1                    (XDMAC_GRWS_RWS18_1_Val << XDMAC_GRWS_RWS18_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS19_Pos                  _U_(19)                                              /**< (XDMAC_GRWS) XDMAC Channel 19 Read Write Suspend Position */
#define XDMAC_GRWS_RWS19_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS19_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 19 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS19(value)               (XDMAC_GRWS_RWS19_Msk & ((value) << XDMAC_GRWS_RWS19_Pos))
#define   XDMAC_GRWS_RWS19_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS19_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS19_0                    (XDMAC_GRWS_RWS19_0_Val << XDMAC_GRWS_RWS19_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS19_1                    (XDMAC_GRWS_RWS19_1_Val << XDMAC_GRWS_RWS19_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS20_Pos                  _U_(20)                                              /**< (XDMAC_GRWS) XDMAC Channel 20 Read Write Suspend Position */
#define XDMAC_GRWS_RWS20_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS20_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 20 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS20(value)               (XDMAC_GRWS_RWS20_Msk & ((value) << XDMAC_GRWS_RWS20_Pos))
#define   XDMAC_GRWS_RWS20_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS20_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS20_0                    (XDMAC_GRWS_RWS20_0_Val << XDMAC_GRWS_RWS20_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS20_1                    (XDMAC_GRWS_RWS20_1_Val << XDMAC_GRWS_RWS20_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS21_Pos                  _U_(21)                                              /**< (XDMAC_GRWS) XDMAC Channel 21 Read Write Suspend Position */
#define XDMAC_GRWS_RWS21_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS21_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 21 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS21(value)               (XDMAC_GRWS_RWS21_Msk & ((value) << XDMAC_GRWS_RWS21_Pos))
#define   XDMAC_GRWS_RWS21_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS21_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS21_0                    (XDMAC_GRWS_RWS21_0_Val << XDMAC_GRWS_RWS21_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS21_1                    (XDMAC_GRWS_RWS21_1_Val << XDMAC_GRWS_RWS21_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS22_Pos                  _U_(22)                                              /**< (XDMAC_GRWS) XDMAC Channel 22 Read Write Suspend Position */
#define XDMAC_GRWS_RWS22_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS22_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 22 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS22(value)               (XDMAC_GRWS_RWS22_Msk & ((value) << XDMAC_GRWS_RWS22_Pos))
#define   XDMAC_GRWS_RWS22_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS22_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS22_0                    (XDMAC_GRWS_RWS22_0_Val << XDMAC_GRWS_RWS22_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS22_1                    (XDMAC_GRWS_RWS22_1_Val << XDMAC_GRWS_RWS22_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS23_Pos                  _U_(23)                                              /**< (XDMAC_GRWS) XDMAC Channel 23 Read Write Suspend Position */
#define XDMAC_GRWS_RWS23_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS23_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 23 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS23(value)               (XDMAC_GRWS_RWS23_Msk & ((value) << XDMAC_GRWS_RWS23_Pos))
#define   XDMAC_GRWS_RWS23_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS23_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS23_0                    (XDMAC_GRWS_RWS23_0_Val << XDMAC_GRWS_RWS23_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS23_1                    (XDMAC_GRWS_RWS23_1_Val << XDMAC_GRWS_RWS23_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS24_Pos                  _U_(24)                                              /**< (XDMAC_GRWS) XDMAC Channel 24 Read Write Suspend Position */
#define XDMAC_GRWS_RWS24_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS24_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 24 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS24(value)               (XDMAC_GRWS_RWS24_Msk & ((value) << XDMAC_GRWS_RWS24_Pos))
#define   XDMAC_GRWS_RWS24_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS24_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS24_0                    (XDMAC_GRWS_RWS24_0_Val << XDMAC_GRWS_RWS24_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS24_1                    (XDMAC_GRWS_RWS24_1_Val << XDMAC_GRWS_RWS24_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS25_Pos                  _U_(25)                                              /**< (XDMAC_GRWS) XDMAC Channel 25 Read Write Suspend Position */
#define XDMAC_GRWS_RWS25_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS25_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 25 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS25(value)               (XDMAC_GRWS_RWS25_Msk & ((value) << XDMAC_GRWS_RWS25_Pos))
#define   XDMAC_GRWS_RWS25_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS25_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS25_0                    (XDMAC_GRWS_RWS25_0_Val << XDMAC_GRWS_RWS25_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS25_1                    (XDMAC_GRWS_RWS25_1_Val << XDMAC_GRWS_RWS25_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS26_Pos                  _U_(26)                                              /**< (XDMAC_GRWS) XDMAC Channel 26 Read Write Suspend Position */
#define XDMAC_GRWS_RWS26_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS26_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 26 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS26(value)               (XDMAC_GRWS_RWS26_Msk & ((value) << XDMAC_GRWS_RWS26_Pos))
#define   XDMAC_GRWS_RWS26_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS26_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS26_0                    (XDMAC_GRWS_RWS26_0_Val << XDMAC_GRWS_RWS26_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS26_1                    (XDMAC_GRWS_RWS26_1_Val << XDMAC_GRWS_RWS26_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS27_Pos                  _U_(27)                                              /**< (XDMAC_GRWS) XDMAC Channel 27 Read Write Suspend Position */
#define XDMAC_GRWS_RWS27_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS27_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 27 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS27(value)               (XDMAC_GRWS_RWS27_Msk & ((value) << XDMAC_GRWS_RWS27_Pos))
#define   XDMAC_GRWS_RWS27_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS27_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS27_0                    (XDMAC_GRWS_RWS27_0_Val << XDMAC_GRWS_RWS27_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS27_1                    (XDMAC_GRWS_RWS27_1_Val << XDMAC_GRWS_RWS27_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS28_Pos                  _U_(28)                                              /**< (XDMAC_GRWS) XDMAC Channel 28 Read Write Suspend Position */
#define XDMAC_GRWS_RWS28_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS28_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 28 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS28(value)               (XDMAC_GRWS_RWS28_Msk & ((value) << XDMAC_GRWS_RWS28_Pos))
#define   XDMAC_GRWS_RWS28_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS28_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS28_0                    (XDMAC_GRWS_RWS28_0_Val << XDMAC_GRWS_RWS28_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS28_1                    (XDMAC_GRWS_RWS28_1_Val << XDMAC_GRWS_RWS28_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS29_Pos                  _U_(29)                                              /**< (XDMAC_GRWS) XDMAC Channel 29 Read Write Suspend Position */
#define XDMAC_GRWS_RWS29_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS29_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 29 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS29(value)               (XDMAC_GRWS_RWS29_Msk & ((value) << XDMAC_GRWS_RWS29_Pos))
#define   XDMAC_GRWS_RWS29_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS29_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS29_0                    (XDMAC_GRWS_RWS29_0_Val << XDMAC_GRWS_RWS29_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS29_1                    (XDMAC_GRWS_RWS29_1_Val << XDMAC_GRWS_RWS29_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS30_Pos                  _U_(30)                                              /**< (XDMAC_GRWS) XDMAC Channel 30 Read Write Suspend Position */
#define XDMAC_GRWS_RWS30_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS30_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 30 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS30(value)               (XDMAC_GRWS_RWS30_Msk & ((value) << XDMAC_GRWS_RWS30_Pos))
#define   XDMAC_GRWS_RWS30_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS30_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS30_0                    (XDMAC_GRWS_RWS30_0_Val << XDMAC_GRWS_RWS30_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS30_1                    (XDMAC_GRWS_RWS30_1_Val << XDMAC_GRWS_RWS30_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_RWS31_Pos                  _U_(31)                                              /**< (XDMAC_GRWS) XDMAC Channel 31 Read Write Suspend Position */
#define XDMAC_GRWS_RWS31_Msk                  (_U_(0x1) << XDMAC_GRWS_RWS31_Pos)                   /**< (XDMAC_GRWS) XDMAC Channel 31 Read Write Suspend Mask */
#define XDMAC_GRWS_RWS31(value)               (XDMAC_GRWS_RWS31_Msk & ((value) << XDMAC_GRWS_RWS31_Pos))
#define   XDMAC_GRWS_RWS31_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWS) No effect.  */
#define   XDMAC_GRWS_RWS31_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWS) Read and write requests are suspended.  */
#define XDMAC_GRWS_RWS31_0                    (XDMAC_GRWS_RWS31_0_Val << XDMAC_GRWS_RWS31_Pos)     /**< (XDMAC_GRWS) No effect. Position  */
#define XDMAC_GRWS_RWS31_1                    (XDMAC_GRWS_RWS31_1_Val << XDMAC_GRWS_RWS31_Pos)     /**< (XDMAC_GRWS) Read and write requests are suspended. Position  */
#define XDMAC_GRWS_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GRWS) Register Mask  */

#define XDMAC_GRWS_RWS_Pos                    _U_(0)                                               /**< (XDMAC_GRWS Position) XDMAC Channel 3x Read Write Suspend */
#define XDMAC_GRWS_RWS_Msk                    (_U_(0xFFFFFFFF) << XDMAC_GRWS_RWS_Pos)              /**< (XDMAC_GRWS Mask) RWS */
#define XDMAC_GRWS_RWS(value)                 (XDMAC_GRWS_RWS_Msk & ((value) << XDMAC_GRWS_RWS_Pos)) 

/* -------- XDMAC_GRWR : (XDMAC Offset: 0x44) ( /W 32) Global Channel Read Write Resume Register -------- */
#define XDMAC_GRWR_RWR0_Pos                   _U_(0)                                               /**< (XDMAC_GRWR) XDMAC Channel 0 Read Write Resume Position */
#define XDMAC_GRWR_RWR0_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR0_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 0 Read Write Resume Mask */
#define XDMAC_GRWR_RWR0(value)                (XDMAC_GRWR_RWR0_Msk & ((value) << XDMAC_GRWR_RWR0_Pos))
#define   XDMAC_GRWR_RWR0_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR0_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR0_0                     (XDMAC_GRWR_RWR0_0_Val << XDMAC_GRWR_RWR0_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR0_1                     (XDMAC_GRWR_RWR0_1_Val << XDMAC_GRWR_RWR0_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR1_Pos                   _U_(1)                                               /**< (XDMAC_GRWR) XDMAC Channel 1 Read Write Resume Position */
#define XDMAC_GRWR_RWR1_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR1_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 1 Read Write Resume Mask */
#define XDMAC_GRWR_RWR1(value)                (XDMAC_GRWR_RWR1_Msk & ((value) << XDMAC_GRWR_RWR1_Pos))
#define   XDMAC_GRWR_RWR1_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR1_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR1_0                     (XDMAC_GRWR_RWR1_0_Val << XDMAC_GRWR_RWR1_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR1_1                     (XDMAC_GRWR_RWR1_1_Val << XDMAC_GRWR_RWR1_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR2_Pos                   _U_(2)                                               /**< (XDMAC_GRWR) XDMAC Channel 2 Read Write Resume Position */
#define XDMAC_GRWR_RWR2_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR2_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 2 Read Write Resume Mask */
#define XDMAC_GRWR_RWR2(value)                (XDMAC_GRWR_RWR2_Msk & ((value) << XDMAC_GRWR_RWR2_Pos))
#define   XDMAC_GRWR_RWR2_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR2_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR2_0                     (XDMAC_GRWR_RWR2_0_Val << XDMAC_GRWR_RWR2_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR2_1                     (XDMAC_GRWR_RWR2_1_Val << XDMAC_GRWR_RWR2_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR3_Pos                   _U_(3)                                               /**< (XDMAC_GRWR) XDMAC Channel 3 Read Write Resume Position */
#define XDMAC_GRWR_RWR3_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR3_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 3 Read Write Resume Mask */
#define XDMAC_GRWR_RWR3(value)                (XDMAC_GRWR_RWR3_Msk & ((value) << XDMAC_GRWR_RWR3_Pos))
#define   XDMAC_GRWR_RWR3_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR3_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR3_0                     (XDMAC_GRWR_RWR3_0_Val << XDMAC_GRWR_RWR3_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR3_1                     (XDMAC_GRWR_RWR3_1_Val << XDMAC_GRWR_RWR3_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR4_Pos                   _U_(4)                                               /**< (XDMAC_GRWR) XDMAC Channel 4 Read Write Resume Position */
#define XDMAC_GRWR_RWR4_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR4_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 4 Read Write Resume Mask */
#define XDMAC_GRWR_RWR4(value)                (XDMAC_GRWR_RWR4_Msk & ((value) << XDMAC_GRWR_RWR4_Pos))
#define   XDMAC_GRWR_RWR4_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR4_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR4_0                     (XDMAC_GRWR_RWR4_0_Val << XDMAC_GRWR_RWR4_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR4_1                     (XDMAC_GRWR_RWR4_1_Val << XDMAC_GRWR_RWR4_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR5_Pos                   _U_(5)                                               /**< (XDMAC_GRWR) XDMAC Channel 5 Read Write Resume Position */
#define XDMAC_GRWR_RWR5_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR5_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 5 Read Write Resume Mask */
#define XDMAC_GRWR_RWR5(value)                (XDMAC_GRWR_RWR5_Msk & ((value) << XDMAC_GRWR_RWR5_Pos))
#define   XDMAC_GRWR_RWR5_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR5_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR5_0                     (XDMAC_GRWR_RWR5_0_Val << XDMAC_GRWR_RWR5_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR5_1                     (XDMAC_GRWR_RWR5_1_Val << XDMAC_GRWR_RWR5_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR6_Pos                   _U_(6)                                               /**< (XDMAC_GRWR) XDMAC Channel 6 Read Write Resume Position */
#define XDMAC_GRWR_RWR6_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR6_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 6 Read Write Resume Mask */
#define XDMAC_GRWR_RWR6(value)                (XDMAC_GRWR_RWR6_Msk & ((value) << XDMAC_GRWR_RWR6_Pos))
#define   XDMAC_GRWR_RWR6_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR6_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR6_0                     (XDMAC_GRWR_RWR6_0_Val << XDMAC_GRWR_RWR6_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR6_1                     (XDMAC_GRWR_RWR6_1_Val << XDMAC_GRWR_RWR6_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR7_Pos                   _U_(7)                                               /**< (XDMAC_GRWR) XDMAC Channel 7 Read Write Resume Position */
#define XDMAC_GRWR_RWR7_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR7_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 7 Read Write Resume Mask */
#define XDMAC_GRWR_RWR7(value)                (XDMAC_GRWR_RWR7_Msk & ((value) << XDMAC_GRWR_RWR7_Pos))
#define   XDMAC_GRWR_RWR7_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR7_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR7_0                     (XDMAC_GRWR_RWR7_0_Val << XDMAC_GRWR_RWR7_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR7_1                     (XDMAC_GRWR_RWR7_1_Val << XDMAC_GRWR_RWR7_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR8_Pos                   _U_(8)                                               /**< (XDMAC_GRWR) XDMAC Channel 8 Read Write Resume Position */
#define XDMAC_GRWR_RWR8_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR8_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 8 Read Write Resume Mask */
#define XDMAC_GRWR_RWR8(value)                (XDMAC_GRWR_RWR8_Msk & ((value) << XDMAC_GRWR_RWR8_Pos))
#define   XDMAC_GRWR_RWR8_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR8_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR8_0                     (XDMAC_GRWR_RWR8_0_Val << XDMAC_GRWR_RWR8_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR8_1                     (XDMAC_GRWR_RWR8_1_Val << XDMAC_GRWR_RWR8_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR9_Pos                   _U_(9)                                               /**< (XDMAC_GRWR) XDMAC Channel 9 Read Write Resume Position */
#define XDMAC_GRWR_RWR9_Msk                   (_U_(0x1) << XDMAC_GRWR_RWR9_Pos)                    /**< (XDMAC_GRWR) XDMAC Channel 9 Read Write Resume Mask */
#define XDMAC_GRWR_RWR9(value)                (XDMAC_GRWR_RWR9_Msk & ((value) << XDMAC_GRWR_RWR9_Pos))
#define   XDMAC_GRWR_RWR9_0_Val               _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR9_1_Val               _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR9_0                     (XDMAC_GRWR_RWR9_0_Val << XDMAC_GRWR_RWR9_Pos)       /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR9_1                     (XDMAC_GRWR_RWR9_1_Val << XDMAC_GRWR_RWR9_Pos)       /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR10_Pos                  _U_(10)                                              /**< (XDMAC_GRWR) XDMAC Channel 10 Read Write Resume Position */
#define XDMAC_GRWR_RWR10_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR10_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 10 Read Write Resume Mask */
#define XDMAC_GRWR_RWR10(value)               (XDMAC_GRWR_RWR10_Msk & ((value) << XDMAC_GRWR_RWR10_Pos))
#define   XDMAC_GRWR_RWR10_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR10_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR10_0                    (XDMAC_GRWR_RWR10_0_Val << XDMAC_GRWR_RWR10_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR10_1                    (XDMAC_GRWR_RWR10_1_Val << XDMAC_GRWR_RWR10_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR11_Pos                  _U_(11)                                              /**< (XDMAC_GRWR) XDMAC Channel 11 Read Write Resume Position */
#define XDMAC_GRWR_RWR11_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR11_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 11 Read Write Resume Mask */
#define XDMAC_GRWR_RWR11(value)               (XDMAC_GRWR_RWR11_Msk & ((value) << XDMAC_GRWR_RWR11_Pos))
#define   XDMAC_GRWR_RWR11_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR11_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR11_0                    (XDMAC_GRWR_RWR11_0_Val << XDMAC_GRWR_RWR11_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR11_1                    (XDMAC_GRWR_RWR11_1_Val << XDMAC_GRWR_RWR11_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR12_Pos                  _U_(12)                                              /**< (XDMAC_GRWR) XDMAC Channel 12 Read Write Resume Position */
#define XDMAC_GRWR_RWR12_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR12_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 12 Read Write Resume Mask */
#define XDMAC_GRWR_RWR12(value)               (XDMAC_GRWR_RWR12_Msk & ((value) << XDMAC_GRWR_RWR12_Pos))
#define   XDMAC_GRWR_RWR12_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR12_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR12_0                    (XDMAC_GRWR_RWR12_0_Val << XDMAC_GRWR_RWR12_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR12_1                    (XDMAC_GRWR_RWR12_1_Val << XDMAC_GRWR_RWR12_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR13_Pos                  _U_(13)                                              /**< (XDMAC_GRWR) XDMAC Channel 13 Read Write Resume Position */
#define XDMAC_GRWR_RWR13_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR13_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 13 Read Write Resume Mask */
#define XDMAC_GRWR_RWR13(value)               (XDMAC_GRWR_RWR13_Msk & ((value) << XDMAC_GRWR_RWR13_Pos))
#define   XDMAC_GRWR_RWR13_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR13_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR13_0                    (XDMAC_GRWR_RWR13_0_Val << XDMAC_GRWR_RWR13_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR13_1                    (XDMAC_GRWR_RWR13_1_Val << XDMAC_GRWR_RWR13_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR14_Pos                  _U_(14)                                              /**< (XDMAC_GRWR) XDMAC Channel 14 Read Write Resume Position */
#define XDMAC_GRWR_RWR14_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR14_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 14 Read Write Resume Mask */
#define XDMAC_GRWR_RWR14(value)               (XDMAC_GRWR_RWR14_Msk & ((value) << XDMAC_GRWR_RWR14_Pos))
#define   XDMAC_GRWR_RWR14_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR14_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR14_0                    (XDMAC_GRWR_RWR14_0_Val << XDMAC_GRWR_RWR14_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR14_1                    (XDMAC_GRWR_RWR14_1_Val << XDMAC_GRWR_RWR14_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR15_Pos                  _U_(15)                                              /**< (XDMAC_GRWR) XDMAC Channel 15 Read Write Resume Position */
#define XDMAC_GRWR_RWR15_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR15_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 15 Read Write Resume Mask */
#define XDMAC_GRWR_RWR15(value)               (XDMAC_GRWR_RWR15_Msk & ((value) << XDMAC_GRWR_RWR15_Pos))
#define   XDMAC_GRWR_RWR15_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR15_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR15_0                    (XDMAC_GRWR_RWR15_0_Val << XDMAC_GRWR_RWR15_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR15_1                    (XDMAC_GRWR_RWR15_1_Val << XDMAC_GRWR_RWR15_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR16_Pos                  _U_(16)                                              /**< (XDMAC_GRWR) XDMAC Channel 16 Read Write Resume Position */
#define XDMAC_GRWR_RWR16_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR16_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 16 Read Write Resume Mask */
#define XDMAC_GRWR_RWR16(value)               (XDMAC_GRWR_RWR16_Msk & ((value) << XDMAC_GRWR_RWR16_Pos))
#define   XDMAC_GRWR_RWR16_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR16_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR16_0                    (XDMAC_GRWR_RWR16_0_Val << XDMAC_GRWR_RWR16_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR16_1                    (XDMAC_GRWR_RWR16_1_Val << XDMAC_GRWR_RWR16_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR17_Pos                  _U_(17)                                              /**< (XDMAC_GRWR) XDMAC Channel 17 Read Write Resume Position */
#define XDMAC_GRWR_RWR17_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR17_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 17 Read Write Resume Mask */
#define XDMAC_GRWR_RWR17(value)               (XDMAC_GRWR_RWR17_Msk & ((value) << XDMAC_GRWR_RWR17_Pos))
#define   XDMAC_GRWR_RWR17_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR17_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR17_0                    (XDMAC_GRWR_RWR17_0_Val << XDMAC_GRWR_RWR17_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR17_1                    (XDMAC_GRWR_RWR17_1_Val << XDMAC_GRWR_RWR17_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR18_Pos                  _U_(18)                                              /**< (XDMAC_GRWR) XDMAC Channel 18 Read Write Resume Position */
#define XDMAC_GRWR_RWR18_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR18_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 18 Read Write Resume Mask */
#define XDMAC_GRWR_RWR18(value)               (XDMAC_GRWR_RWR18_Msk & ((value) << XDMAC_GRWR_RWR18_Pos))
#define   XDMAC_GRWR_RWR18_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR18_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR18_0                    (XDMAC_GRWR_RWR18_0_Val << XDMAC_GRWR_RWR18_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR18_1                    (XDMAC_GRWR_RWR18_1_Val << XDMAC_GRWR_RWR18_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR19_Pos                  _U_(19)                                              /**< (XDMAC_GRWR) XDMAC Channel 19 Read Write Resume Position */
#define XDMAC_GRWR_RWR19_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR19_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 19 Read Write Resume Mask */
#define XDMAC_GRWR_RWR19(value)               (XDMAC_GRWR_RWR19_Msk & ((value) << XDMAC_GRWR_RWR19_Pos))
#define   XDMAC_GRWR_RWR19_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR19_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR19_0                    (XDMAC_GRWR_RWR19_0_Val << XDMAC_GRWR_RWR19_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR19_1                    (XDMAC_GRWR_RWR19_1_Val << XDMAC_GRWR_RWR19_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR20_Pos                  _U_(20)                                              /**< (XDMAC_GRWR) XDMAC Channel 20 Read Write Resume Position */
#define XDMAC_GRWR_RWR20_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR20_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 20 Read Write Resume Mask */
#define XDMAC_GRWR_RWR20(value)               (XDMAC_GRWR_RWR20_Msk & ((value) << XDMAC_GRWR_RWR20_Pos))
#define   XDMAC_GRWR_RWR20_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR20_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR20_0                    (XDMAC_GRWR_RWR20_0_Val << XDMAC_GRWR_RWR20_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR20_1                    (XDMAC_GRWR_RWR20_1_Val << XDMAC_GRWR_RWR20_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR21_Pos                  _U_(21)                                              /**< (XDMAC_GRWR) XDMAC Channel 21 Read Write Resume Position */
#define XDMAC_GRWR_RWR21_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR21_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 21 Read Write Resume Mask */
#define XDMAC_GRWR_RWR21(value)               (XDMAC_GRWR_RWR21_Msk & ((value) << XDMAC_GRWR_RWR21_Pos))
#define   XDMAC_GRWR_RWR21_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR21_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR21_0                    (XDMAC_GRWR_RWR21_0_Val << XDMAC_GRWR_RWR21_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR21_1                    (XDMAC_GRWR_RWR21_1_Val << XDMAC_GRWR_RWR21_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR22_Pos                  _U_(22)                                              /**< (XDMAC_GRWR) XDMAC Channel 22 Read Write Resume Position */
#define XDMAC_GRWR_RWR22_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR22_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 22 Read Write Resume Mask */
#define XDMAC_GRWR_RWR22(value)               (XDMAC_GRWR_RWR22_Msk & ((value) << XDMAC_GRWR_RWR22_Pos))
#define   XDMAC_GRWR_RWR22_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR22_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR22_0                    (XDMAC_GRWR_RWR22_0_Val << XDMAC_GRWR_RWR22_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR22_1                    (XDMAC_GRWR_RWR22_1_Val << XDMAC_GRWR_RWR22_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR23_Pos                  _U_(23)                                              /**< (XDMAC_GRWR) XDMAC Channel 23 Read Write Resume Position */
#define XDMAC_GRWR_RWR23_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR23_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 23 Read Write Resume Mask */
#define XDMAC_GRWR_RWR23(value)               (XDMAC_GRWR_RWR23_Msk & ((value) << XDMAC_GRWR_RWR23_Pos))
#define   XDMAC_GRWR_RWR23_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR23_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR23_0                    (XDMAC_GRWR_RWR23_0_Val << XDMAC_GRWR_RWR23_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR23_1                    (XDMAC_GRWR_RWR23_1_Val << XDMAC_GRWR_RWR23_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR24_Pos                  _U_(24)                                              /**< (XDMAC_GRWR) XDMAC Channel 24 Read Write Resume Position */
#define XDMAC_GRWR_RWR24_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR24_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 24 Read Write Resume Mask */
#define XDMAC_GRWR_RWR24(value)               (XDMAC_GRWR_RWR24_Msk & ((value) << XDMAC_GRWR_RWR24_Pos))
#define   XDMAC_GRWR_RWR24_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR24_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR24_0                    (XDMAC_GRWR_RWR24_0_Val << XDMAC_GRWR_RWR24_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR24_1                    (XDMAC_GRWR_RWR24_1_Val << XDMAC_GRWR_RWR24_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR25_Pos                  _U_(25)                                              /**< (XDMAC_GRWR) XDMAC Channel 25 Read Write Resume Position */
#define XDMAC_GRWR_RWR25_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR25_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 25 Read Write Resume Mask */
#define XDMAC_GRWR_RWR25(value)               (XDMAC_GRWR_RWR25_Msk & ((value) << XDMAC_GRWR_RWR25_Pos))
#define   XDMAC_GRWR_RWR25_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR25_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR25_0                    (XDMAC_GRWR_RWR25_0_Val << XDMAC_GRWR_RWR25_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR25_1                    (XDMAC_GRWR_RWR25_1_Val << XDMAC_GRWR_RWR25_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR26_Pos                  _U_(26)                                              /**< (XDMAC_GRWR) XDMAC Channel 26 Read Write Resume Position */
#define XDMAC_GRWR_RWR26_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR26_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 26 Read Write Resume Mask */
#define XDMAC_GRWR_RWR26(value)               (XDMAC_GRWR_RWR26_Msk & ((value) << XDMAC_GRWR_RWR26_Pos))
#define   XDMAC_GRWR_RWR26_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR26_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR26_0                    (XDMAC_GRWR_RWR26_0_Val << XDMAC_GRWR_RWR26_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR26_1                    (XDMAC_GRWR_RWR26_1_Val << XDMAC_GRWR_RWR26_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR27_Pos                  _U_(27)                                              /**< (XDMAC_GRWR) XDMAC Channel 27 Read Write Resume Position */
#define XDMAC_GRWR_RWR27_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR27_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 27 Read Write Resume Mask */
#define XDMAC_GRWR_RWR27(value)               (XDMAC_GRWR_RWR27_Msk & ((value) << XDMAC_GRWR_RWR27_Pos))
#define   XDMAC_GRWR_RWR27_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR27_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR27_0                    (XDMAC_GRWR_RWR27_0_Val << XDMAC_GRWR_RWR27_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR27_1                    (XDMAC_GRWR_RWR27_1_Val << XDMAC_GRWR_RWR27_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR28_Pos                  _U_(28)                                              /**< (XDMAC_GRWR) XDMAC Channel 28 Read Write Resume Position */
#define XDMAC_GRWR_RWR28_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR28_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 28 Read Write Resume Mask */
#define XDMAC_GRWR_RWR28(value)               (XDMAC_GRWR_RWR28_Msk & ((value) << XDMAC_GRWR_RWR28_Pos))
#define   XDMAC_GRWR_RWR28_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR28_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR28_0                    (XDMAC_GRWR_RWR28_0_Val << XDMAC_GRWR_RWR28_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR28_1                    (XDMAC_GRWR_RWR28_1_Val << XDMAC_GRWR_RWR28_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR29_Pos                  _U_(29)                                              /**< (XDMAC_GRWR) XDMAC Channel 29 Read Write Resume Position */
#define XDMAC_GRWR_RWR29_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR29_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 29 Read Write Resume Mask */
#define XDMAC_GRWR_RWR29(value)               (XDMAC_GRWR_RWR29_Msk & ((value) << XDMAC_GRWR_RWR29_Pos))
#define   XDMAC_GRWR_RWR29_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR29_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR29_0                    (XDMAC_GRWR_RWR29_0_Val << XDMAC_GRWR_RWR29_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR29_1                    (XDMAC_GRWR_RWR29_1_Val << XDMAC_GRWR_RWR29_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR30_Pos                  _U_(30)                                              /**< (XDMAC_GRWR) XDMAC Channel 30 Read Write Resume Position */
#define XDMAC_GRWR_RWR30_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR30_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 30 Read Write Resume Mask */
#define XDMAC_GRWR_RWR30(value)               (XDMAC_GRWR_RWR30_Msk & ((value) << XDMAC_GRWR_RWR30_Pos))
#define   XDMAC_GRWR_RWR30_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR30_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR30_0                    (XDMAC_GRWR_RWR30_0_Val << XDMAC_GRWR_RWR30_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR30_1                    (XDMAC_GRWR_RWR30_1_Val << XDMAC_GRWR_RWR30_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_RWR31_Pos                  _U_(31)                                              /**< (XDMAC_GRWR) XDMAC Channel 31 Read Write Resume Position */
#define XDMAC_GRWR_RWR31_Msk                  (_U_(0x1) << XDMAC_GRWR_RWR31_Pos)                   /**< (XDMAC_GRWR) XDMAC Channel 31 Read Write Resume Mask */
#define XDMAC_GRWR_RWR31(value)               (XDMAC_GRWR_RWR31_Msk & ((value) << XDMAC_GRWR_RWR31_Pos))
#define   XDMAC_GRWR_RWR31_0_Val              _U_(0x0)                                             /**< (XDMAC_GRWR) No effect.  */
#define   XDMAC_GRWR_RWR31_1_Val              _U_(0x1)                                             /**< (XDMAC_GRWR) Read and write requests are serviced.  */
#define XDMAC_GRWR_RWR31_0                    (XDMAC_GRWR_RWR31_0_Val << XDMAC_GRWR_RWR31_Pos)     /**< (XDMAC_GRWR) No effect. Position  */
#define XDMAC_GRWR_RWR31_1                    (XDMAC_GRWR_RWR31_1_Val << XDMAC_GRWR_RWR31_Pos)     /**< (XDMAC_GRWR) Read and write requests are serviced. Position  */
#define XDMAC_GRWR_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GRWR) Register Mask  */

#define XDMAC_GRWR_RWR_Pos                    _U_(0)                                               /**< (XDMAC_GRWR Position) XDMAC Channel 3x Read Write Resume */
#define XDMAC_GRWR_RWR_Msk                    (_U_(0xFFFFFFFF) << XDMAC_GRWR_RWR_Pos)              /**< (XDMAC_GRWR Mask) RWR */
#define XDMAC_GRWR_RWR(value)                 (XDMAC_GRWR_RWR_Msk & ((value) << XDMAC_GRWR_RWR_Pos)) 

/* -------- XDMAC_GSWR : (XDMAC Offset: 0x48) ( /W 32) Global Channel Software Request Register -------- */
#define XDMAC_GSWR_SWREQ0_Pos                 _U_(0)                                               /**< (XDMAC_GSWR) XDMAC Channel 0 Software Request Position */
#define XDMAC_GSWR_SWREQ0_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ0_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 0 Software Request Mask */
#define XDMAC_GSWR_SWREQ0(value)              (XDMAC_GSWR_SWREQ0_Msk & ((value) << XDMAC_GSWR_SWREQ0_Pos))
#define   XDMAC_GSWR_SWREQ0_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ0_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ0_0                   (XDMAC_GSWR_SWREQ0_0_Val << XDMAC_GSWR_SWREQ0_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ0_1                   (XDMAC_GSWR_SWREQ0_1_Val << XDMAC_GSWR_SWREQ0_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ1_Pos                 _U_(1)                                               /**< (XDMAC_GSWR) XDMAC Channel 1 Software Request Position */
#define XDMAC_GSWR_SWREQ1_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ1_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 1 Software Request Mask */
#define XDMAC_GSWR_SWREQ1(value)              (XDMAC_GSWR_SWREQ1_Msk & ((value) << XDMAC_GSWR_SWREQ1_Pos))
#define   XDMAC_GSWR_SWREQ1_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ1_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ1_0                   (XDMAC_GSWR_SWREQ1_0_Val << XDMAC_GSWR_SWREQ1_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ1_1                   (XDMAC_GSWR_SWREQ1_1_Val << XDMAC_GSWR_SWREQ1_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ2_Pos                 _U_(2)                                               /**< (XDMAC_GSWR) XDMAC Channel 2 Software Request Position */
#define XDMAC_GSWR_SWREQ2_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ2_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 2 Software Request Mask */
#define XDMAC_GSWR_SWREQ2(value)              (XDMAC_GSWR_SWREQ2_Msk & ((value) << XDMAC_GSWR_SWREQ2_Pos))
#define   XDMAC_GSWR_SWREQ2_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ2_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ2_0                   (XDMAC_GSWR_SWREQ2_0_Val << XDMAC_GSWR_SWREQ2_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ2_1                   (XDMAC_GSWR_SWREQ2_1_Val << XDMAC_GSWR_SWREQ2_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ3_Pos                 _U_(3)                                               /**< (XDMAC_GSWR) XDMAC Channel 3 Software Request Position */
#define XDMAC_GSWR_SWREQ3_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ3_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 3 Software Request Mask */
#define XDMAC_GSWR_SWREQ3(value)              (XDMAC_GSWR_SWREQ3_Msk & ((value) << XDMAC_GSWR_SWREQ3_Pos))
#define   XDMAC_GSWR_SWREQ3_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ3_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ3_0                   (XDMAC_GSWR_SWREQ3_0_Val << XDMAC_GSWR_SWREQ3_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ3_1                   (XDMAC_GSWR_SWREQ3_1_Val << XDMAC_GSWR_SWREQ3_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ4_Pos                 _U_(4)                                               /**< (XDMAC_GSWR) XDMAC Channel 4 Software Request Position */
#define XDMAC_GSWR_SWREQ4_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ4_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 4 Software Request Mask */
#define XDMAC_GSWR_SWREQ4(value)              (XDMAC_GSWR_SWREQ4_Msk & ((value) << XDMAC_GSWR_SWREQ4_Pos))
#define   XDMAC_GSWR_SWREQ4_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ4_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ4_0                   (XDMAC_GSWR_SWREQ4_0_Val << XDMAC_GSWR_SWREQ4_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ4_1                   (XDMAC_GSWR_SWREQ4_1_Val << XDMAC_GSWR_SWREQ4_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ5_Pos                 _U_(5)                                               /**< (XDMAC_GSWR) XDMAC Channel 5 Software Request Position */
#define XDMAC_GSWR_SWREQ5_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ5_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 5 Software Request Mask */
#define XDMAC_GSWR_SWREQ5(value)              (XDMAC_GSWR_SWREQ5_Msk & ((value) << XDMAC_GSWR_SWREQ5_Pos))
#define   XDMAC_GSWR_SWREQ5_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ5_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ5_0                   (XDMAC_GSWR_SWREQ5_0_Val << XDMAC_GSWR_SWREQ5_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ5_1                   (XDMAC_GSWR_SWREQ5_1_Val << XDMAC_GSWR_SWREQ5_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ6_Pos                 _U_(6)                                               /**< (XDMAC_GSWR) XDMAC Channel 6 Software Request Position */
#define XDMAC_GSWR_SWREQ6_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ6_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 6 Software Request Mask */
#define XDMAC_GSWR_SWREQ6(value)              (XDMAC_GSWR_SWREQ6_Msk & ((value) << XDMAC_GSWR_SWREQ6_Pos))
#define   XDMAC_GSWR_SWREQ6_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ6_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ6_0                   (XDMAC_GSWR_SWREQ6_0_Val << XDMAC_GSWR_SWREQ6_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ6_1                   (XDMAC_GSWR_SWREQ6_1_Val << XDMAC_GSWR_SWREQ6_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ7_Pos                 _U_(7)                                               /**< (XDMAC_GSWR) XDMAC Channel 7 Software Request Position */
#define XDMAC_GSWR_SWREQ7_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ7_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 7 Software Request Mask */
#define XDMAC_GSWR_SWREQ7(value)              (XDMAC_GSWR_SWREQ7_Msk & ((value) << XDMAC_GSWR_SWREQ7_Pos))
#define   XDMAC_GSWR_SWREQ7_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ7_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ7_0                   (XDMAC_GSWR_SWREQ7_0_Val << XDMAC_GSWR_SWREQ7_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ7_1                   (XDMAC_GSWR_SWREQ7_1_Val << XDMAC_GSWR_SWREQ7_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ8_Pos                 _U_(8)                                               /**< (XDMAC_GSWR) XDMAC Channel 8 Software Request Position */
#define XDMAC_GSWR_SWREQ8_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ8_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 8 Software Request Mask */
#define XDMAC_GSWR_SWREQ8(value)              (XDMAC_GSWR_SWREQ8_Msk & ((value) << XDMAC_GSWR_SWREQ8_Pos))
#define   XDMAC_GSWR_SWREQ8_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ8_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ8_0                   (XDMAC_GSWR_SWREQ8_0_Val << XDMAC_GSWR_SWREQ8_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ8_1                   (XDMAC_GSWR_SWREQ8_1_Val << XDMAC_GSWR_SWREQ8_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ9_Pos                 _U_(9)                                               /**< (XDMAC_GSWR) XDMAC Channel 9 Software Request Position */
#define XDMAC_GSWR_SWREQ9_Msk                 (_U_(0x1) << XDMAC_GSWR_SWREQ9_Pos)                  /**< (XDMAC_GSWR) XDMAC Channel 9 Software Request Mask */
#define XDMAC_GSWR_SWREQ9(value)              (XDMAC_GSWR_SWREQ9_Msk & ((value) << XDMAC_GSWR_SWREQ9_Pos))
#define   XDMAC_GSWR_SWREQ9_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ9_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ9_0                   (XDMAC_GSWR_SWREQ9_0_Val << XDMAC_GSWR_SWREQ9_Pos)   /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ9_1                   (XDMAC_GSWR_SWREQ9_1_Val << XDMAC_GSWR_SWREQ9_Pos)   /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ10_Pos                _U_(10)                                              /**< (XDMAC_GSWR) XDMAC Channel 10 Software Request Position */
#define XDMAC_GSWR_SWREQ10_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ10_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 10 Software Request Mask */
#define XDMAC_GSWR_SWREQ10(value)             (XDMAC_GSWR_SWREQ10_Msk & ((value) << XDMAC_GSWR_SWREQ10_Pos))
#define   XDMAC_GSWR_SWREQ10_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ10_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ10_0                  (XDMAC_GSWR_SWREQ10_0_Val << XDMAC_GSWR_SWREQ10_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ10_1                  (XDMAC_GSWR_SWREQ10_1_Val << XDMAC_GSWR_SWREQ10_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ11_Pos                _U_(11)                                              /**< (XDMAC_GSWR) XDMAC Channel 11 Software Request Position */
#define XDMAC_GSWR_SWREQ11_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ11_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 11 Software Request Mask */
#define XDMAC_GSWR_SWREQ11(value)             (XDMAC_GSWR_SWREQ11_Msk & ((value) << XDMAC_GSWR_SWREQ11_Pos))
#define   XDMAC_GSWR_SWREQ11_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ11_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ11_0                  (XDMAC_GSWR_SWREQ11_0_Val << XDMAC_GSWR_SWREQ11_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ11_1                  (XDMAC_GSWR_SWREQ11_1_Val << XDMAC_GSWR_SWREQ11_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ12_Pos                _U_(12)                                              /**< (XDMAC_GSWR) XDMAC Channel 12 Software Request Position */
#define XDMAC_GSWR_SWREQ12_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ12_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 12 Software Request Mask */
#define XDMAC_GSWR_SWREQ12(value)             (XDMAC_GSWR_SWREQ12_Msk & ((value) << XDMAC_GSWR_SWREQ12_Pos))
#define   XDMAC_GSWR_SWREQ12_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ12_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ12_0                  (XDMAC_GSWR_SWREQ12_0_Val << XDMAC_GSWR_SWREQ12_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ12_1                  (XDMAC_GSWR_SWREQ12_1_Val << XDMAC_GSWR_SWREQ12_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ13_Pos                _U_(13)                                              /**< (XDMAC_GSWR) XDMAC Channel 13 Software Request Position */
#define XDMAC_GSWR_SWREQ13_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ13_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 13 Software Request Mask */
#define XDMAC_GSWR_SWREQ13(value)             (XDMAC_GSWR_SWREQ13_Msk & ((value) << XDMAC_GSWR_SWREQ13_Pos))
#define   XDMAC_GSWR_SWREQ13_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ13_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ13_0                  (XDMAC_GSWR_SWREQ13_0_Val << XDMAC_GSWR_SWREQ13_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ13_1                  (XDMAC_GSWR_SWREQ13_1_Val << XDMAC_GSWR_SWREQ13_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ14_Pos                _U_(14)                                              /**< (XDMAC_GSWR) XDMAC Channel 14 Software Request Position */
#define XDMAC_GSWR_SWREQ14_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ14_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 14 Software Request Mask */
#define XDMAC_GSWR_SWREQ14(value)             (XDMAC_GSWR_SWREQ14_Msk & ((value) << XDMAC_GSWR_SWREQ14_Pos))
#define   XDMAC_GSWR_SWREQ14_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ14_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ14_0                  (XDMAC_GSWR_SWREQ14_0_Val << XDMAC_GSWR_SWREQ14_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ14_1                  (XDMAC_GSWR_SWREQ14_1_Val << XDMAC_GSWR_SWREQ14_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ15_Pos                _U_(15)                                              /**< (XDMAC_GSWR) XDMAC Channel 15 Software Request Position */
#define XDMAC_GSWR_SWREQ15_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ15_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 15 Software Request Mask */
#define XDMAC_GSWR_SWREQ15(value)             (XDMAC_GSWR_SWREQ15_Msk & ((value) << XDMAC_GSWR_SWREQ15_Pos))
#define   XDMAC_GSWR_SWREQ15_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ15_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ15_0                  (XDMAC_GSWR_SWREQ15_0_Val << XDMAC_GSWR_SWREQ15_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ15_1                  (XDMAC_GSWR_SWREQ15_1_Val << XDMAC_GSWR_SWREQ15_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ16_Pos                _U_(16)                                              /**< (XDMAC_GSWR) XDMAC Channel 16 Software Request Position */
#define XDMAC_GSWR_SWREQ16_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ16_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 16 Software Request Mask */
#define XDMAC_GSWR_SWREQ16(value)             (XDMAC_GSWR_SWREQ16_Msk & ((value) << XDMAC_GSWR_SWREQ16_Pos))
#define   XDMAC_GSWR_SWREQ16_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ16_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ16_0                  (XDMAC_GSWR_SWREQ16_0_Val << XDMAC_GSWR_SWREQ16_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ16_1                  (XDMAC_GSWR_SWREQ16_1_Val << XDMAC_GSWR_SWREQ16_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ17_Pos                _U_(17)                                              /**< (XDMAC_GSWR) XDMAC Channel 17 Software Request Position */
#define XDMAC_GSWR_SWREQ17_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ17_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 17 Software Request Mask */
#define XDMAC_GSWR_SWREQ17(value)             (XDMAC_GSWR_SWREQ17_Msk & ((value) << XDMAC_GSWR_SWREQ17_Pos))
#define   XDMAC_GSWR_SWREQ17_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ17_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ17_0                  (XDMAC_GSWR_SWREQ17_0_Val << XDMAC_GSWR_SWREQ17_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ17_1                  (XDMAC_GSWR_SWREQ17_1_Val << XDMAC_GSWR_SWREQ17_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ18_Pos                _U_(18)                                              /**< (XDMAC_GSWR) XDMAC Channel 18 Software Request Position */
#define XDMAC_GSWR_SWREQ18_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ18_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 18 Software Request Mask */
#define XDMAC_GSWR_SWREQ18(value)             (XDMAC_GSWR_SWREQ18_Msk & ((value) << XDMAC_GSWR_SWREQ18_Pos))
#define   XDMAC_GSWR_SWREQ18_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ18_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ18_0                  (XDMAC_GSWR_SWREQ18_0_Val << XDMAC_GSWR_SWREQ18_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ18_1                  (XDMAC_GSWR_SWREQ18_1_Val << XDMAC_GSWR_SWREQ18_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ19_Pos                _U_(19)                                              /**< (XDMAC_GSWR) XDMAC Channel 19 Software Request Position */
#define XDMAC_GSWR_SWREQ19_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ19_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 19 Software Request Mask */
#define XDMAC_GSWR_SWREQ19(value)             (XDMAC_GSWR_SWREQ19_Msk & ((value) << XDMAC_GSWR_SWREQ19_Pos))
#define   XDMAC_GSWR_SWREQ19_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ19_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ19_0                  (XDMAC_GSWR_SWREQ19_0_Val << XDMAC_GSWR_SWREQ19_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ19_1                  (XDMAC_GSWR_SWREQ19_1_Val << XDMAC_GSWR_SWREQ19_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ20_Pos                _U_(20)                                              /**< (XDMAC_GSWR) XDMAC Channel 20 Software Request Position */
#define XDMAC_GSWR_SWREQ20_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ20_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 20 Software Request Mask */
#define XDMAC_GSWR_SWREQ20(value)             (XDMAC_GSWR_SWREQ20_Msk & ((value) << XDMAC_GSWR_SWREQ20_Pos))
#define   XDMAC_GSWR_SWREQ20_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ20_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ20_0                  (XDMAC_GSWR_SWREQ20_0_Val << XDMAC_GSWR_SWREQ20_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ20_1                  (XDMAC_GSWR_SWREQ20_1_Val << XDMAC_GSWR_SWREQ20_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ21_Pos                _U_(21)                                              /**< (XDMAC_GSWR) XDMAC Channel 21 Software Request Position */
#define XDMAC_GSWR_SWREQ21_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ21_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 21 Software Request Mask */
#define XDMAC_GSWR_SWREQ21(value)             (XDMAC_GSWR_SWREQ21_Msk & ((value) << XDMAC_GSWR_SWREQ21_Pos))
#define   XDMAC_GSWR_SWREQ21_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ21_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ21_0                  (XDMAC_GSWR_SWREQ21_0_Val << XDMAC_GSWR_SWREQ21_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ21_1                  (XDMAC_GSWR_SWREQ21_1_Val << XDMAC_GSWR_SWREQ21_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ22_Pos                _U_(22)                                              /**< (XDMAC_GSWR) XDMAC Channel 22 Software Request Position */
#define XDMAC_GSWR_SWREQ22_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ22_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 22 Software Request Mask */
#define XDMAC_GSWR_SWREQ22(value)             (XDMAC_GSWR_SWREQ22_Msk & ((value) << XDMAC_GSWR_SWREQ22_Pos))
#define   XDMAC_GSWR_SWREQ22_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ22_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ22_0                  (XDMAC_GSWR_SWREQ22_0_Val << XDMAC_GSWR_SWREQ22_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ22_1                  (XDMAC_GSWR_SWREQ22_1_Val << XDMAC_GSWR_SWREQ22_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ23_Pos                _U_(23)                                              /**< (XDMAC_GSWR) XDMAC Channel 23 Software Request Position */
#define XDMAC_GSWR_SWREQ23_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ23_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 23 Software Request Mask */
#define XDMAC_GSWR_SWREQ23(value)             (XDMAC_GSWR_SWREQ23_Msk & ((value) << XDMAC_GSWR_SWREQ23_Pos))
#define   XDMAC_GSWR_SWREQ23_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ23_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ23_0                  (XDMAC_GSWR_SWREQ23_0_Val << XDMAC_GSWR_SWREQ23_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ23_1                  (XDMAC_GSWR_SWREQ23_1_Val << XDMAC_GSWR_SWREQ23_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ24_Pos                _U_(24)                                              /**< (XDMAC_GSWR) XDMAC Channel 24 Software Request Position */
#define XDMAC_GSWR_SWREQ24_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ24_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 24 Software Request Mask */
#define XDMAC_GSWR_SWREQ24(value)             (XDMAC_GSWR_SWREQ24_Msk & ((value) << XDMAC_GSWR_SWREQ24_Pos))
#define   XDMAC_GSWR_SWREQ24_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ24_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ24_0                  (XDMAC_GSWR_SWREQ24_0_Val << XDMAC_GSWR_SWREQ24_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ24_1                  (XDMAC_GSWR_SWREQ24_1_Val << XDMAC_GSWR_SWREQ24_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ25_Pos                _U_(25)                                              /**< (XDMAC_GSWR) XDMAC Channel 25 Software Request Position */
#define XDMAC_GSWR_SWREQ25_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ25_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 25 Software Request Mask */
#define XDMAC_GSWR_SWREQ25(value)             (XDMAC_GSWR_SWREQ25_Msk & ((value) << XDMAC_GSWR_SWREQ25_Pos))
#define   XDMAC_GSWR_SWREQ25_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ25_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ25_0                  (XDMAC_GSWR_SWREQ25_0_Val << XDMAC_GSWR_SWREQ25_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ25_1                  (XDMAC_GSWR_SWREQ25_1_Val << XDMAC_GSWR_SWREQ25_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ26_Pos                _U_(26)                                              /**< (XDMAC_GSWR) XDMAC Channel 26 Software Request Position */
#define XDMAC_GSWR_SWREQ26_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ26_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 26 Software Request Mask */
#define XDMAC_GSWR_SWREQ26(value)             (XDMAC_GSWR_SWREQ26_Msk & ((value) << XDMAC_GSWR_SWREQ26_Pos))
#define   XDMAC_GSWR_SWREQ26_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ26_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ26_0                  (XDMAC_GSWR_SWREQ26_0_Val << XDMAC_GSWR_SWREQ26_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ26_1                  (XDMAC_GSWR_SWREQ26_1_Val << XDMAC_GSWR_SWREQ26_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ27_Pos                _U_(27)                                              /**< (XDMAC_GSWR) XDMAC Channel 27 Software Request Position */
#define XDMAC_GSWR_SWREQ27_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ27_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 27 Software Request Mask */
#define XDMAC_GSWR_SWREQ27(value)             (XDMAC_GSWR_SWREQ27_Msk & ((value) << XDMAC_GSWR_SWREQ27_Pos))
#define   XDMAC_GSWR_SWREQ27_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ27_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ27_0                  (XDMAC_GSWR_SWREQ27_0_Val << XDMAC_GSWR_SWREQ27_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ27_1                  (XDMAC_GSWR_SWREQ27_1_Val << XDMAC_GSWR_SWREQ27_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ28_Pos                _U_(28)                                              /**< (XDMAC_GSWR) XDMAC Channel 28 Software Request Position */
#define XDMAC_GSWR_SWREQ28_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ28_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 28 Software Request Mask */
#define XDMAC_GSWR_SWREQ28(value)             (XDMAC_GSWR_SWREQ28_Msk & ((value) << XDMAC_GSWR_SWREQ28_Pos))
#define   XDMAC_GSWR_SWREQ28_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ28_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ28_0                  (XDMAC_GSWR_SWREQ28_0_Val << XDMAC_GSWR_SWREQ28_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ28_1                  (XDMAC_GSWR_SWREQ28_1_Val << XDMAC_GSWR_SWREQ28_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ29_Pos                _U_(29)                                              /**< (XDMAC_GSWR) XDMAC Channel 29 Software Request Position */
#define XDMAC_GSWR_SWREQ29_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ29_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 29 Software Request Mask */
#define XDMAC_GSWR_SWREQ29(value)             (XDMAC_GSWR_SWREQ29_Msk & ((value) << XDMAC_GSWR_SWREQ29_Pos))
#define   XDMAC_GSWR_SWREQ29_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ29_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ29_0                  (XDMAC_GSWR_SWREQ29_0_Val << XDMAC_GSWR_SWREQ29_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ29_1                  (XDMAC_GSWR_SWREQ29_1_Val << XDMAC_GSWR_SWREQ29_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ30_Pos                _U_(30)                                              /**< (XDMAC_GSWR) XDMAC Channel 30 Software Request Position */
#define XDMAC_GSWR_SWREQ30_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ30_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 30 Software Request Mask */
#define XDMAC_GSWR_SWREQ30(value)             (XDMAC_GSWR_SWREQ30_Msk & ((value) << XDMAC_GSWR_SWREQ30_Pos))
#define   XDMAC_GSWR_SWREQ30_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ30_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ30_0                  (XDMAC_GSWR_SWREQ30_0_Val << XDMAC_GSWR_SWREQ30_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ30_1                  (XDMAC_GSWR_SWREQ30_1_Val << XDMAC_GSWR_SWREQ30_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_SWREQ31_Pos                _U_(31)                                              /**< (XDMAC_GSWR) XDMAC Channel 31 Software Request Position */
#define XDMAC_GSWR_SWREQ31_Msk                (_U_(0x1) << XDMAC_GSWR_SWREQ31_Pos)                 /**< (XDMAC_GSWR) XDMAC Channel 31 Software Request Mask */
#define XDMAC_GSWR_SWREQ31(value)             (XDMAC_GSWR_SWREQ31_Msk & ((value) << XDMAC_GSWR_SWREQ31_Pos))
#define   XDMAC_GSWR_SWREQ31_0_Val            _U_(0x0)                                             /**< (XDMAC_GSWR) No effect.  */
#define   XDMAC_GSWR_SWREQ31_1_Val            _U_(0x1)                                             /**< (XDMAC_GSWR) Requests a DMA transfer for channel x.  */
#define XDMAC_GSWR_SWREQ31_0                  (XDMAC_GSWR_SWREQ31_0_Val << XDMAC_GSWR_SWREQ31_Pos) /**< (XDMAC_GSWR) No effect. Position  */
#define XDMAC_GSWR_SWREQ31_1                  (XDMAC_GSWR_SWREQ31_1_Val << XDMAC_GSWR_SWREQ31_Pos) /**< (XDMAC_GSWR) Requests a DMA transfer for channel x. Position  */
#define XDMAC_GSWR_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GSWR) Register Mask  */

#define XDMAC_GSWR_SWREQ_Pos                  _U_(0)                                               /**< (XDMAC_GSWR Position) XDMAC Channel 3x Software Request */
#define XDMAC_GSWR_SWREQ_Msk                  (_U_(0xFFFFFFFF) << XDMAC_GSWR_SWREQ_Pos)            /**< (XDMAC_GSWR Mask) SWREQ */
#define XDMAC_GSWR_SWREQ(value)               (XDMAC_GSWR_SWREQ_Msk & ((value) << XDMAC_GSWR_SWREQ_Pos)) 

/* -------- XDMAC_GSWS : (XDMAC Offset: 0x4C) ( R/ 32) Global Channel Software Request Status Register -------- */
#define XDMAC_GSWS_SWRS0_Pos                  _U_(0)                                               /**< (XDMAC_GSWS) XDMAC Channel 0 Software Request Status Position */
#define XDMAC_GSWS_SWRS0_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS0_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 0 Software Request Status Mask */
#define XDMAC_GSWS_SWRS0(value)               (XDMAC_GSWS_SWRS0_Msk & ((value) << XDMAC_GSWS_SWRS0_Pos))
#define   XDMAC_GSWS_SWRS0_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS0_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS0_0                    (XDMAC_GSWS_SWRS0_0_Val << XDMAC_GSWS_SWRS0_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS0_1                    (XDMAC_GSWS_SWRS0_1_Val << XDMAC_GSWS_SWRS0_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS1_Pos                  _U_(1)                                               /**< (XDMAC_GSWS) XDMAC Channel 1 Software Request Status Position */
#define XDMAC_GSWS_SWRS1_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS1_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 1 Software Request Status Mask */
#define XDMAC_GSWS_SWRS1(value)               (XDMAC_GSWS_SWRS1_Msk & ((value) << XDMAC_GSWS_SWRS1_Pos))
#define   XDMAC_GSWS_SWRS1_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS1_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS1_0                    (XDMAC_GSWS_SWRS1_0_Val << XDMAC_GSWS_SWRS1_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS1_1                    (XDMAC_GSWS_SWRS1_1_Val << XDMAC_GSWS_SWRS1_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS2_Pos                  _U_(2)                                               /**< (XDMAC_GSWS) XDMAC Channel 2 Software Request Status Position */
#define XDMAC_GSWS_SWRS2_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS2_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 2 Software Request Status Mask */
#define XDMAC_GSWS_SWRS2(value)               (XDMAC_GSWS_SWRS2_Msk & ((value) << XDMAC_GSWS_SWRS2_Pos))
#define   XDMAC_GSWS_SWRS2_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS2_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS2_0                    (XDMAC_GSWS_SWRS2_0_Val << XDMAC_GSWS_SWRS2_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS2_1                    (XDMAC_GSWS_SWRS2_1_Val << XDMAC_GSWS_SWRS2_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS3_Pos                  _U_(3)                                               /**< (XDMAC_GSWS) XDMAC Channel 3 Software Request Status Position */
#define XDMAC_GSWS_SWRS3_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS3_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 3 Software Request Status Mask */
#define XDMAC_GSWS_SWRS3(value)               (XDMAC_GSWS_SWRS3_Msk & ((value) << XDMAC_GSWS_SWRS3_Pos))
#define   XDMAC_GSWS_SWRS3_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS3_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS3_0                    (XDMAC_GSWS_SWRS3_0_Val << XDMAC_GSWS_SWRS3_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS3_1                    (XDMAC_GSWS_SWRS3_1_Val << XDMAC_GSWS_SWRS3_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS4_Pos                  _U_(4)                                               /**< (XDMAC_GSWS) XDMAC Channel 4 Software Request Status Position */
#define XDMAC_GSWS_SWRS4_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS4_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 4 Software Request Status Mask */
#define XDMAC_GSWS_SWRS4(value)               (XDMAC_GSWS_SWRS4_Msk & ((value) << XDMAC_GSWS_SWRS4_Pos))
#define   XDMAC_GSWS_SWRS4_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS4_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS4_0                    (XDMAC_GSWS_SWRS4_0_Val << XDMAC_GSWS_SWRS4_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS4_1                    (XDMAC_GSWS_SWRS4_1_Val << XDMAC_GSWS_SWRS4_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS5_Pos                  _U_(5)                                               /**< (XDMAC_GSWS) XDMAC Channel 5 Software Request Status Position */
#define XDMAC_GSWS_SWRS5_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS5_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 5 Software Request Status Mask */
#define XDMAC_GSWS_SWRS5(value)               (XDMAC_GSWS_SWRS5_Msk & ((value) << XDMAC_GSWS_SWRS5_Pos))
#define   XDMAC_GSWS_SWRS5_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS5_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS5_0                    (XDMAC_GSWS_SWRS5_0_Val << XDMAC_GSWS_SWRS5_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS5_1                    (XDMAC_GSWS_SWRS5_1_Val << XDMAC_GSWS_SWRS5_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS6_Pos                  _U_(6)                                               /**< (XDMAC_GSWS) XDMAC Channel 6 Software Request Status Position */
#define XDMAC_GSWS_SWRS6_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS6_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 6 Software Request Status Mask */
#define XDMAC_GSWS_SWRS6(value)               (XDMAC_GSWS_SWRS6_Msk & ((value) << XDMAC_GSWS_SWRS6_Pos))
#define   XDMAC_GSWS_SWRS6_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS6_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS6_0                    (XDMAC_GSWS_SWRS6_0_Val << XDMAC_GSWS_SWRS6_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS6_1                    (XDMAC_GSWS_SWRS6_1_Val << XDMAC_GSWS_SWRS6_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS7_Pos                  _U_(7)                                               /**< (XDMAC_GSWS) XDMAC Channel 7 Software Request Status Position */
#define XDMAC_GSWS_SWRS7_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS7_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 7 Software Request Status Mask */
#define XDMAC_GSWS_SWRS7(value)               (XDMAC_GSWS_SWRS7_Msk & ((value) << XDMAC_GSWS_SWRS7_Pos))
#define   XDMAC_GSWS_SWRS7_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS7_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS7_0                    (XDMAC_GSWS_SWRS7_0_Val << XDMAC_GSWS_SWRS7_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS7_1                    (XDMAC_GSWS_SWRS7_1_Val << XDMAC_GSWS_SWRS7_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS8_Pos                  _U_(8)                                               /**< (XDMAC_GSWS) XDMAC Channel 8 Software Request Status Position */
#define XDMAC_GSWS_SWRS8_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS8_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 8 Software Request Status Mask */
#define XDMAC_GSWS_SWRS8(value)               (XDMAC_GSWS_SWRS8_Msk & ((value) << XDMAC_GSWS_SWRS8_Pos))
#define   XDMAC_GSWS_SWRS8_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS8_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS8_0                    (XDMAC_GSWS_SWRS8_0_Val << XDMAC_GSWS_SWRS8_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS8_1                    (XDMAC_GSWS_SWRS8_1_Val << XDMAC_GSWS_SWRS8_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS9_Pos                  _U_(9)                                               /**< (XDMAC_GSWS) XDMAC Channel 9 Software Request Status Position */
#define XDMAC_GSWS_SWRS9_Msk                  (_U_(0x1) << XDMAC_GSWS_SWRS9_Pos)                   /**< (XDMAC_GSWS) XDMAC Channel 9 Software Request Status Mask */
#define XDMAC_GSWS_SWRS9(value)               (XDMAC_GSWS_SWRS9_Msk & ((value) << XDMAC_GSWS_SWRS9_Pos))
#define   XDMAC_GSWS_SWRS9_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS9_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS9_0                    (XDMAC_GSWS_SWRS9_0_Val << XDMAC_GSWS_SWRS9_Pos)     /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS9_1                    (XDMAC_GSWS_SWRS9_1_Val << XDMAC_GSWS_SWRS9_Pos)     /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS10_Pos                 _U_(10)                                              /**< (XDMAC_GSWS) XDMAC Channel 10 Software Request Status Position */
#define XDMAC_GSWS_SWRS10_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS10_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 10 Software Request Status Mask */
#define XDMAC_GSWS_SWRS10(value)              (XDMAC_GSWS_SWRS10_Msk & ((value) << XDMAC_GSWS_SWRS10_Pos))
#define   XDMAC_GSWS_SWRS10_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS10_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS10_0                   (XDMAC_GSWS_SWRS10_0_Val << XDMAC_GSWS_SWRS10_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS10_1                   (XDMAC_GSWS_SWRS10_1_Val << XDMAC_GSWS_SWRS10_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS11_Pos                 _U_(11)                                              /**< (XDMAC_GSWS) XDMAC Channel 11 Software Request Status Position */
#define XDMAC_GSWS_SWRS11_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS11_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 11 Software Request Status Mask */
#define XDMAC_GSWS_SWRS11(value)              (XDMAC_GSWS_SWRS11_Msk & ((value) << XDMAC_GSWS_SWRS11_Pos))
#define   XDMAC_GSWS_SWRS11_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS11_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS11_0                   (XDMAC_GSWS_SWRS11_0_Val << XDMAC_GSWS_SWRS11_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS11_1                   (XDMAC_GSWS_SWRS11_1_Val << XDMAC_GSWS_SWRS11_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS12_Pos                 _U_(12)                                              /**< (XDMAC_GSWS) XDMAC Channel 12 Software Request Status Position */
#define XDMAC_GSWS_SWRS12_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS12_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 12 Software Request Status Mask */
#define XDMAC_GSWS_SWRS12(value)              (XDMAC_GSWS_SWRS12_Msk & ((value) << XDMAC_GSWS_SWRS12_Pos))
#define   XDMAC_GSWS_SWRS12_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS12_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS12_0                   (XDMAC_GSWS_SWRS12_0_Val << XDMAC_GSWS_SWRS12_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS12_1                   (XDMAC_GSWS_SWRS12_1_Val << XDMAC_GSWS_SWRS12_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS13_Pos                 _U_(13)                                              /**< (XDMAC_GSWS) XDMAC Channel 13 Software Request Status Position */
#define XDMAC_GSWS_SWRS13_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS13_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 13 Software Request Status Mask */
#define XDMAC_GSWS_SWRS13(value)              (XDMAC_GSWS_SWRS13_Msk & ((value) << XDMAC_GSWS_SWRS13_Pos))
#define   XDMAC_GSWS_SWRS13_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS13_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS13_0                   (XDMAC_GSWS_SWRS13_0_Val << XDMAC_GSWS_SWRS13_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS13_1                   (XDMAC_GSWS_SWRS13_1_Val << XDMAC_GSWS_SWRS13_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS14_Pos                 _U_(14)                                              /**< (XDMAC_GSWS) XDMAC Channel 14 Software Request Status Position */
#define XDMAC_GSWS_SWRS14_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS14_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 14 Software Request Status Mask */
#define XDMAC_GSWS_SWRS14(value)              (XDMAC_GSWS_SWRS14_Msk & ((value) << XDMAC_GSWS_SWRS14_Pos))
#define   XDMAC_GSWS_SWRS14_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS14_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS14_0                   (XDMAC_GSWS_SWRS14_0_Val << XDMAC_GSWS_SWRS14_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS14_1                   (XDMAC_GSWS_SWRS14_1_Val << XDMAC_GSWS_SWRS14_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS15_Pos                 _U_(15)                                              /**< (XDMAC_GSWS) XDMAC Channel 15 Software Request Status Position */
#define XDMAC_GSWS_SWRS15_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS15_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 15 Software Request Status Mask */
#define XDMAC_GSWS_SWRS15(value)              (XDMAC_GSWS_SWRS15_Msk & ((value) << XDMAC_GSWS_SWRS15_Pos))
#define   XDMAC_GSWS_SWRS15_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS15_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS15_0                   (XDMAC_GSWS_SWRS15_0_Val << XDMAC_GSWS_SWRS15_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS15_1                   (XDMAC_GSWS_SWRS15_1_Val << XDMAC_GSWS_SWRS15_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS16_Pos                 _U_(16)                                              /**< (XDMAC_GSWS) XDMAC Channel 16 Software Request Status Position */
#define XDMAC_GSWS_SWRS16_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS16_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 16 Software Request Status Mask */
#define XDMAC_GSWS_SWRS16(value)              (XDMAC_GSWS_SWRS16_Msk & ((value) << XDMAC_GSWS_SWRS16_Pos))
#define   XDMAC_GSWS_SWRS16_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS16_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS16_0                   (XDMAC_GSWS_SWRS16_0_Val << XDMAC_GSWS_SWRS16_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS16_1                   (XDMAC_GSWS_SWRS16_1_Val << XDMAC_GSWS_SWRS16_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS17_Pos                 _U_(17)                                              /**< (XDMAC_GSWS) XDMAC Channel 17 Software Request Status Position */
#define XDMAC_GSWS_SWRS17_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS17_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 17 Software Request Status Mask */
#define XDMAC_GSWS_SWRS17(value)              (XDMAC_GSWS_SWRS17_Msk & ((value) << XDMAC_GSWS_SWRS17_Pos))
#define   XDMAC_GSWS_SWRS17_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS17_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS17_0                   (XDMAC_GSWS_SWRS17_0_Val << XDMAC_GSWS_SWRS17_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS17_1                   (XDMAC_GSWS_SWRS17_1_Val << XDMAC_GSWS_SWRS17_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS18_Pos                 _U_(18)                                              /**< (XDMAC_GSWS) XDMAC Channel 18 Software Request Status Position */
#define XDMAC_GSWS_SWRS18_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS18_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 18 Software Request Status Mask */
#define XDMAC_GSWS_SWRS18(value)              (XDMAC_GSWS_SWRS18_Msk & ((value) << XDMAC_GSWS_SWRS18_Pos))
#define   XDMAC_GSWS_SWRS18_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS18_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS18_0                   (XDMAC_GSWS_SWRS18_0_Val << XDMAC_GSWS_SWRS18_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS18_1                   (XDMAC_GSWS_SWRS18_1_Val << XDMAC_GSWS_SWRS18_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS19_Pos                 _U_(19)                                              /**< (XDMAC_GSWS) XDMAC Channel 19 Software Request Status Position */
#define XDMAC_GSWS_SWRS19_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS19_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 19 Software Request Status Mask */
#define XDMAC_GSWS_SWRS19(value)              (XDMAC_GSWS_SWRS19_Msk & ((value) << XDMAC_GSWS_SWRS19_Pos))
#define   XDMAC_GSWS_SWRS19_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS19_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS19_0                   (XDMAC_GSWS_SWRS19_0_Val << XDMAC_GSWS_SWRS19_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS19_1                   (XDMAC_GSWS_SWRS19_1_Val << XDMAC_GSWS_SWRS19_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS20_Pos                 _U_(20)                                              /**< (XDMAC_GSWS) XDMAC Channel 20 Software Request Status Position */
#define XDMAC_GSWS_SWRS20_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS20_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 20 Software Request Status Mask */
#define XDMAC_GSWS_SWRS20(value)              (XDMAC_GSWS_SWRS20_Msk & ((value) << XDMAC_GSWS_SWRS20_Pos))
#define   XDMAC_GSWS_SWRS20_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS20_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS20_0                   (XDMAC_GSWS_SWRS20_0_Val << XDMAC_GSWS_SWRS20_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS20_1                   (XDMAC_GSWS_SWRS20_1_Val << XDMAC_GSWS_SWRS20_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS21_Pos                 _U_(21)                                              /**< (XDMAC_GSWS) XDMAC Channel 21 Software Request Status Position */
#define XDMAC_GSWS_SWRS21_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS21_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 21 Software Request Status Mask */
#define XDMAC_GSWS_SWRS21(value)              (XDMAC_GSWS_SWRS21_Msk & ((value) << XDMAC_GSWS_SWRS21_Pos))
#define   XDMAC_GSWS_SWRS21_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS21_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS21_0                   (XDMAC_GSWS_SWRS21_0_Val << XDMAC_GSWS_SWRS21_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS21_1                   (XDMAC_GSWS_SWRS21_1_Val << XDMAC_GSWS_SWRS21_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS22_Pos                 _U_(22)                                              /**< (XDMAC_GSWS) XDMAC Channel 22 Software Request Status Position */
#define XDMAC_GSWS_SWRS22_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS22_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 22 Software Request Status Mask */
#define XDMAC_GSWS_SWRS22(value)              (XDMAC_GSWS_SWRS22_Msk & ((value) << XDMAC_GSWS_SWRS22_Pos))
#define   XDMAC_GSWS_SWRS22_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS22_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS22_0                   (XDMAC_GSWS_SWRS22_0_Val << XDMAC_GSWS_SWRS22_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS22_1                   (XDMAC_GSWS_SWRS22_1_Val << XDMAC_GSWS_SWRS22_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS23_Pos                 _U_(23)                                              /**< (XDMAC_GSWS) XDMAC Channel 23 Software Request Status Position */
#define XDMAC_GSWS_SWRS23_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS23_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 23 Software Request Status Mask */
#define XDMAC_GSWS_SWRS23(value)              (XDMAC_GSWS_SWRS23_Msk & ((value) << XDMAC_GSWS_SWRS23_Pos))
#define   XDMAC_GSWS_SWRS23_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS23_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS23_0                   (XDMAC_GSWS_SWRS23_0_Val << XDMAC_GSWS_SWRS23_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS23_1                   (XDMAC_GSWS_SWRS23_1_Val << XDMAC_GSWS_SWRS23_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS24_Pos                 _U_(24)                                              /**< (XDMAC_GSWS) XDMAC Channel 24 Software Request Status Position */
#define XDMAC_GSWS_SWRS24_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS24_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 24 Software Request Status Mask */
#define XDMAC_GSWS_SWRS24(value)              (XDMAC_GSWS_SWRS24_Msk & ((value) << XDMAC_GSWS_SWRS24_Pos))
#define   XDMAC_GSWS_SWRS24_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS24_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS24_0                   (XDMAC_GSWS_SWRS24_0_Val << XDMAC_GSWS_SWRS24_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS24_1                   (XDMAC_GSWS_SWRS24_1_Val << XDMAC_GSWS_SWRS24_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS25_Pos                 _U_(25)                                              /**< (XDMAC_GSWS) XDMAC Channel 25 Software Request Status Position */
#define XDMAC_GSWS_SWRS25_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS25_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 25 Software Request Status Mask */
#define XDMAC_GSWS_SWRS25(value)              (XDMAC_GSWS_SWRS25_Msk & ((value) << XDMAC_GSWS_SWRS25_Pos))
#define   XDMAC_GSWS_SWRS25_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS25_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS25_0                   (XDMAC_GSWS_SWRS25_0_Val << XDMAC_GSWS_SWRS25_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS25_1                   (XDMAC_GSWS_SWRS25_1_Val << XDMAC_GSWS_SWRS25_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS26_Pos                 _U_(26)                                              /**< (XDMAC_GSWS) XDMAC Channel 26 Software Request Status Position */
#define XDMAC_GSWS_SWRS26_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS26_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 26 Software Request Status Mask */
#define XDMAC_GSWS_SWRS26(value)              (XDMAC_GSWS_SWRS26_Msk & ((value) << XDMAC_GSWS_SWRS26_Pos))
#define   XDMAC_GSWS_SWRS26_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS26_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS26_0                   (XDMAC_GSWS_SWRS26_0_Val << XDMAC_GSWS_SWRS26_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS26_1                   (XDMAC_GSWS_SWRS26_1_Val << XDMAC_GSWS_SWRS26_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS27_Pos                 _U_(27)                                              /**< (XDMAC_GSWS) XDMAC Channel 27 Software Request Status Position */
#define XDMAC_GSWS_SWRS27_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS27_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 27 Software Request Status Mask */
#define XDMAC_GSWS_SWRS27(value)              (XDMAC_GSWS_SWRS27_Msk & ((value) << XDMAC_GSWS_SWRS27_Pos))
#define   XDMAC_GSWS_SWRS27_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS27_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS27_0                   (XDMAC_GSWS_SWRS27_0_Val << XDMAC_GSWS_SWRS27_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS27_1                   (XDMAC_GSWS_SWRS27_1_Val << XDMAC_GSWS_SWRS27_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS28_Pos                 _U_(28)                                              /**< (XDMAC_GSWS) XDMAC Channel 28 Software Request Status Position */
#define XDMAC_GSWS_SWRS28_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS28_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 28 Software Request Status Mask */
#define XDMAC_GSWS_SWRS28(value)              (XDMAC_GSWS_SWRS28_Msk & ((value) << XDMAC_GSWS_SWRS28_Pos))
#define   XDMAC_GSWS_SWRS28_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS28_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS28_0                   (XDMAC_GSWS_SWRS28_0_Val << XDMAC_GSWS_SWRS28_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS28_1                   (XDMAC_GSWS_SWRS28_1_Val << XDMAC_GSWS_SWRS28_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS29_Pos                 _U_(29)                                              /**< (XDMAC_GSWS) XDMAC Channel 29 Software Request Status Position */
#define XDMAC_GSWS_SWRS29_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS29_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 29 Software Request Status Mask */
#define XDMAC_GSWS_SWRS29(value)              (XDMAC_GSWS_SWRS29_Msk & ((value) << XDMAC_GSWS_SWRS29_Pos))
#define   XDMAC_GSWS_SWRS29_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS29_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS29_0                   (XDMAC_GSWS_SWRS29_0_Val << XDMAC_GSWS_SWRS29_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS29_1                   (XDMAC_GSWS_SWRS29_1_Val << XDMAC_GSWS_SWRS29_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS30_Pos                 _U_(30)                                              /**< (XDMAC_GSWS) XDMAC Channel 30 Software Request Status Position */
#define XDMAC_GSWS_SWRS30_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS30_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 30 Software Request Status Mask */
#define XDMAC_GSWS_SWRS30(value)              (XDMAC_GSWS_SWRS30_Msk & ((value) << XDMAC_GSWS_SWRS30_Pos))
#define   XDMAC_GSWS_SWRS30_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS30_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS30_0                   (XDMAC_GSWS_SWRS30_0_Val << XDMAC_GSWS_SWRS30_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS30_1                   (XDMAC_GSWS_SWRS30_1_Val << XDMAC_GSWS_SWRS30_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_SWRS31_Pos                 _U_(31)                                              /**< (XDMAC_GSWS) XDMAC Channel 31 Software Request Status Position */
#define XDMAC_GSWS_SWRS31_Msk                 (_U_(0x1) << XDMAC_GSWS_SWRS31_Pos)                  /**< (XDMAC_GSWS) XDMAC Channel 31 Software Request Status Mask */
#define XDMAC_GSWS_SWRS31(value)              (XDMAC_GSWS_SWRS31_Msk & ((value) << XDMAC_GSWS_SWRS31_Pos))
#define   XDMAC_GSWS_SWRS31_0_Val             _U_(0x0)                                             /**< (XDMAC_GSWS) Channel x source request is serviced.  */
#define   XDMAC_GSWS_SWRS31_1_Val             _U_(0x1)                                             /**< (XDMAC_GSWS) Channel x source request is pending.  */
#define XDMAC_GSWS_SWRS31_0                   (XDMAC_GSWS_SWRS31_0_Val << XDMAC_GSWS_SWRS31_Pos)   /**< (XDMAC_GSWS) Channel x source request is serviced. Position  */
#define XDMAC_GSWS_SWRS31_1                   (XDMAC_GSWS_SWRS31_1_Val << XDMAC_GSWS_SWRS31_Pos)   /**< (XDMAC_GSWS) Channel x source request is pending. Position  */
#define XDMAC_GSWS_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GSWS) Register Mask  */

#define XDMAC_GSWS_SWRS_Pos                   _U_(0)                                               /**< (XDMAC_GSWS Position) XDMAC Channel 3x Software Request Status */
#define XDMAC_GSWS_SWRS_Msk                   (_U_(0xFFFFFFFF) << XDMAC_GSWS_SWRS_Pos)             /**< (XDMAC_GSWS Mask) SWRS */
#define XDMAC_GSWS_SWRS(value)                (XDMAC_GSWS_SWRS_Msk & ((value) << XDMAC_GSWS_SWRS_Pos)) 

/* -------- XDMAC_GSWF : (XDMAC Offset: 0x50) (R/W 32) Global Channel Software Flush Request Register -------- */
#define XDMAC_GSWF_RESETVALUE                 _U_(0x00)                                            /**<  (XDMAC_GSWF) Global Channel Software Flush Request Register  Reset Value */

#define XDMAC_GSWF_SWF0_Pos                   _U_(0)                                               /**< (XDMAC_GSWF) XDMAC Channel 0 Software Flush Request Position */
#define XDMAC_GSWF_SWF0_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF0_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 0 Software Flush Request Mask */
#define XDMAC_GSWF_SWF0(value)                (XDMAC_GSWF_SWF0_Msk & ((value) << XDMAC_GSWF_SWF0_Pos))
#define   XDMAC_GSWF_SWF0_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF0_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF0_0                     (XDMAC_GSWF_SWF0_0_Val << XDMAC_GSWF_SWF0_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF0_1                     (XDMAC_GSWF_SWF0_1_Val << XDMAC_GSWF_SWF0_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF1_Pos                   _U_(1)                                               /**< (XDMAC_GSWF) XDMAC Channel 1 Software Flush Request Position */
#define XDMAC_GSWF_SWF1_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF1_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 1 Software Flush Request Mask */
#define XDMAC_GSWF_SWF1(value)                (XDMAC_GSWF_SWF1_Msk & ((value) << XDMAC_GSWF_SWF1_Pos))
#define   XDMAC_GSWF_SWF1_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF1_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF1_0                     (XDMAC_GSWF_SWF1_0_Val << XDMAC_GSWF_SWF1_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF1_1                     (XDMAC_GSWF_SWF1_1_Val << XDMAC_GSWF_SWF1_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF2_Pos                   _U_(2)                                               /**< (XDMAC_GSWF) XDMAC Channel 2 Software Flush Request Position */
#define XDMAC_GSWF_SWF2_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF2_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 2 Software Flush Request Mask */
#define XDMAC_GSWF_SWF2(value)                (XDMAC_GSWF_SWF2_Msk & ((value) << XDMAC_GSWF_SWF2_Pos))
#define   XDMAC_GSWF_SWF2_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF2_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF2_0                     (XDMAC_GSWF_SWF2_0_Val << XDMAC_GSWF_SWF2_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF2_1                     (XDMAC_GSWF_SWF2_1_Val << XDMAC_GSWF_SWF2_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF3_Pos                   _U_(3)                                               /**< (XDMAC_GSWF) XDMAC Channel 3 Software Flush Request Position */
#define XDMAC_GSWF_SWF3_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF3_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 3 Software Flush Request Mask */
#define XDMAC_GSWF_SWF3(value)                (XDMAC_GSWF_SWF3_Msk & ((value) << XDMAC_GSWF_SWF3_Pos))
#define   XDMAC_GSWF_SWF3_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF3_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF3_0                     (XDMAC_GSWF_SWF3_0_Val << XDMAC_GSWF_SWF3_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF3_1                     (XDMAC_GSWF_SWF3_1_Val << XDMAC_GSWF_SWF3_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF4_Pos                   _U_(4)                                               /**< (XDMAC_GSWF) XDMAC Channel 4 Software Flush Request Position */
#define XDMAC_GSWF_SWF4_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF4_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 4 Software Flush Request Mask */
#define XDMAC_GSWF_SWF4(value)                (XDMAC_GSWF_SWF4_Msk & ((value) << XDMAC_GSWF_SWF4_Pos))
#define   XDMAC_GSWF_SWF4_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF4_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF4_0                     (XDMAC_GSWF_SWF4_0_Val << XDMAC_GSWF_SWF4_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF4_1                     (XDMAC_GSWF_SWF4_1_Val << XDMAC_GSWF_SWF4_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF5_Pos                   _U_(5)                                               /**< (XDMAC_GSWF) XDMAC Channel 5 Software Flush Request Position */
#define XDMAC_GSWF_SWF5_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF5_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 5 Software Flush Request Mask */
#define XDMAC_GSWF_SWF5(value)                (XDMAC_GSWF_SWF5_Msk & ((value) << XDMAC_GSWF_SWF5_Pos))
#define   XDMAC_GSWF_SWF5_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF5_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF5_0                     (XDMAC_GSWF_SWF5_0_Val << XDMAC_GSWF_SWF5_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF5_1                     (XDMAC_GSWF_SWF5_1_Val << XDMAC_GSWF_SWF5_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF6_Pos                   _U_(6)                                               /**< (XDMAC_GSWF) XDMAC Channel 6 Software Flush Request Position */
#define XDMAC_GSWF_SWF6_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF6_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 6 Software Flush Request Mask */
#define XDMAC_GSWF_SWF6(value)                (XDMAC_GSWF_SWF6_Msk & ((value) << XDMAC_GSWF_SWF6_Pos))
#define   XDMAC_GSWF_SWF6_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF6_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF6_0                     (XDMAC_GSWF_SWF6_0_Val << XDMAC_GSWF_SWF6_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF6_1                     (XDMAC_GSWF_SWF6_1_Val << XDMAC_GSWF_SWF6_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF7_Pos                   _U_(7)                                               /**< (XDMAC_GSWF) XDMAC Channel 7 Software Flush Request Position */
#define XDMAC_GSWF_SWF7_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF7_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 7 Software Flush Request Mask */
#define XDMAC_GSWF_SWF7(value)                (XDMAC_GSWF_SWF7_Msk & ((value) << XDMAC_GSWF_SWF7_Pos))
#define   XDMAC_GSWF_SWF7_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF7_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF7_0                     (XDMAC_GSWF_SWF7_0_Val << XDMAC_GSWF_SWF7_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF7_1                     (XDMAC_GSWF_SWF7_1_Val << XDMAC_GSWF_SWF7_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF8_Pos                   _U_(8)                                               /**< (XDMAC_GSWF) XDMAC Channel 8 Software Flush Request Position */
#define XDMAC_GSWF_SWF8_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF8_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 8 Software Flush Request Mask */
#define XDMAC_GSWF_SWF8(value)                (XDMAC_GSWF_SWF8_Msk & ((value) << XDMAC_GSWF_SWF8_Pos))
#define   XDMAC_GSWF_SWF8_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF8_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF8_0                     (XDMAC_GSWF_SWF8_0_Val << XDMAC_GSWF_SWF8_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF8_1                     (XDMAC_GSWF_SWF8_1_Val << XDMAC_GSWF_SWF8_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF9_Pos                   _U_(9)                                               /**< (XDMAC_GSWF) XDMAC Channel 9 Software Flush Request Position */
#define XDMAC_GSWF_SWF9_Msk                   (_U_(0x1) << XDMAC_GSWF_SWF9_Pos)                    /**< (XDMAC_GSWF) XDMAC Channel 9 Software Flush Request Mask */
#define XDMAC_GSWF_SWF9(value)                (XDMAC_GSWF_SWF9_Msk & ((value) << XDMAC_GSWF_SWF9_Pos))
#define   XDMAC_GSWF_SWF9_0_Val               _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF9_1_Val               _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF9_0                     (XDMAC_GSWF_SWF9_0_Val << XDMAC_GSWF_SWF9_Pos)       /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF9_1                     (XDMAC_GSWF_SWF9_1_Val << XDMAC_GSWF_SWF9_Pos)       /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF10_Pos                  _U_(10)                                              /**< (XDMAC_GSWF) XDMAC Channel 10 Software Flush Request Position */
#define XDMAC_GSWF_SWF10_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF10_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 10 Software Flush Request Mask */
#define XDMAC_GSWF_SWF10(value)               (XDMAC_GSWF_SWF10_Msk & ((value) << XDMAC_GSWF_SWF10_Pos))
#define   XDMAC_GSWF_SWF10_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF10_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF10_0                    (XDMAC_GSWF_SWF10_0_Val << XDMAC_GSWF_SWF10_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF10_1                    (XDMAC_GSWF_SWF10_1_Val << XDMAC_GSWF_SWF10_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF11_Pos                  _U_(11)                                              /**< (XDMAC_GSWF) XDMAC Channel 11 Software Flush Request Position */
#define XDMAC_GSWF_SWF11_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF11_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 11 Software Flush Request Mask */
#define XDMAC_GSWF_SWF11(value)               (XDMAC_GSWF_SWF11_Msk & ((value) << XDMAC_GSWF_SWF11_Pos))
#define   XDMAC_GSWF_SWF11_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF11_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF11_0                    (XDMAC_GSWF_SWF11_0_Val << XDMAC_GSWF_SWF11_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF11_1                    (XDMAC_GSWF_SWF11_1_Val << XDMAC_GSWF_SWF11_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF12_Pos                  _U_(12)                                              /**< (XDMAC_GSWF) XDMAC Channel 12 Software Flush Request Position */
#define XDMAC_GSWF_SWF12_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF12_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 12 Software Flush Request Mask */
#define XDMAC_GSWF_SWF12(value)               (XDMAC_GSWF_SWF12_Msk & ((value) << XDMAC_GSWF_SWF12_Pos))
#define   XDMAC_GSWF_SWF12_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF12_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF12_0                    (XDMAC_GSWF_SWF12_0_Val << XDMAC_GSWF_SWF12_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF12_1                    (XDMAC_GSWF_SWF12_1_Val << XDMAC_GSWF_SWF12_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF13_Pos                  _U_(13)                                              /**< (XDMAC_GSWF) XDMAC Channel 13 Software Flush Request Position */
#define XDMAC_GSWF_SWF13_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF13_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 13 Software Flush Request Mask */
#define XDMAC_GSWF_SWF13(value)               (XDMAC_GSWF_SWF13_Msk & ((value) << XDMAC_GSWF_SWF13_Pos))
#define   XDMAC_GSWF_SWF13_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF13_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF13_0                    (XDMAC_GSWF_SWF13_0_Val << XDMAC_GSWF_SWF13_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF13_1                    (XDMAC_GSWF_SWF13_1_Val << XDMAC_GSWF_SWF13_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF14_Pos                  _U_(14)                                              /**< (XDMAC_GSWF) XDMAC Channel 14 Software Flush Request Position */
#define XDMAC_GSWF_SWF14_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF14_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 14 Software Flush Request Mask */
#define XDMAC_GSWF_SWF14(value)               (XDMAC_GSWF_SWF14_Msk & ((value) << XDMAC_GSWF_SWF14_Pos))
#define   XDMAC_GSWF_SWF14_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF14_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF14_0                    (XDMAC_GSWF_SWF14_0_Val << XDMAC_GSWF_SWF14_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF14_1                    (XDMAC_GSWF_SWF14_1_Val << XDMAC_GSWF_SWF14_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF15_Pos                  _U_(15)                                              /**< (XDMAC_GSWF) XDMAC Channel 15 Software Flush Request Position */
#define XDMAC_GSWF_SWF15_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF15_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 15 Software Flush Request Mask */
#define XDMAC_GSWF_SWF15(value)               (XDMAC_GSWF_SWF15_Msk & ((value) << XDMAC_GSWF_SWF15_Pos))
#define   XDMAC_GSWF_SWF15_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF15_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF15_0                    (XDMAC_GSWF_SWF15_0_Val << XDMAC_GSWF_SWF15_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF15_1                    (XDMAC_GSWF_SWF15_1_Val << XDMAC_GSWF_SWF15_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF16_Pos                  _U_(16)                                              /**< (XDMAC_GSWF) XDMAC Channel 16 Software Flush Request Position */
#define XDMAC_GSWF_SWF16_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF16_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 16 Software Flush Request Mask */
#define XDMAC_GSWF_SWF16(value)               (XDMAC_GSWF_SWF16_Msk & ((value) << XDMAC_GSWF_SWF16_Pos))
#define   XDMAC_GSWF_SWF16_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF16_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF16_0                    (XDMAC_GSWF_SWF16_0_Val << XDMAC_GSWF_SWF16_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF16_1                    (XDMAC_GSWF_SWF16_1_Val << XDMAC_GSWF_SWF16_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF17_Pos                  _U_(17)                                              /**< (XDMAC_GSWF) XDMAC Channel 17 Software Flush Request Position */
#define XDMAC_GSWF_SWF17_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF17_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 17 Software Flush Request Mask */
#define XDMAC_GSWF_SWF17(value)               (XDMAC_GSWF_SWF17_Msk & ((value) << XDMAC_GSWF_SWF17_Pos))
#define   XDMAC_GSWF_SWF17_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF17_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF17_0                    (XDMAC_GSWF_SWF17_0_Val << XDMAC_GSWF_SWF17_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF17_1                    (XDMAC_GSWF_SWF17_1_Val << XDMAC_GSWF_SWF17_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF18_Pos                  _U_(18)                                              /**< (XDMAC_GSWF) XDMAC Channel 18 Software Flush Request Position */
#define XDMAC_GSWF_SWF18_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF18_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 18 Software Flush Request Mask */
#define XDMAC_GSWF_SWF18(value)               (XDMAC_GSWF_SWF18_Msk & ((value) << XDMAC_GSWF_SWF18_Pos))
#define   XDMAC_GSWF_SWF18_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF18_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF18_0                    (XDMAC_GSWF_SWF18_0_Val << XDMAC_GSWF_SWF18_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF18_1                    (XDMAC_GSWF_SWF18_1_Val << XDMAC_GSWF_SWF18_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF19_Pos                  _U_(19)                                              /**< (XDMAC_GSWF) XDMAC Channel 19 Software Flush Request Position */
#define XDMAC_GSWF_SWF19_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF19_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 19 Software Flush Request Mask */
#define XDMAC_GSWF_SWF19(value)               (XDMAC_GSWF_SWF19_Msk & ((value) << XDMAC_GSWF_SWF19_Pos))
#define   XDMAC_GSWF_SWF19_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF19_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF19_0                    (XDMAC_GSWF_SWF19_0_Val << XDMAC_GSWF_SWF19_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF19_1                    (XDMAC_GSWF_SWF19_1_Val << XDMAC_GSWF_SWF19_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF20_Pos                  _U_(20)                                              /**< (XDMAC_GSWF) XDMAC Channel 20 Software Flush Request Position */
#define XDMAC_GSWF_SWF20_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF20_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 20 Software Flush Request Mask */
#define XDMAC_GSWF_SWF20(value)               (XDMAC_GSWF_SWF20_Msk & ((value) << XDMAC_GSWF_SWF20_Pos))
#define   XDMAC_GSWF_SWF20_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF20_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF20_0                    (XDMAC_GSWF_SWF20_0_Val << XDMAC_GSWF_SWF20_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF20_1                    (XDMAC_GSWF_SWF20_1_Val << XDMAC_GSWF_SWF20_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF21_Pos                  _U_(21)                                              /**< (XDMAC_GSWF) XDMAC Channel 21 Software Flush Request Position */
#define XDMAC_GSWF_SWF21_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF21_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 21 Software Flush Request Mask */
#define XDMAC_GSWF_SWF21(value)               (XDMAC_GSWF_SWF21_Msk & ((value) << XDMAC_GSWF_SWF21_Pos))
#define   XDMAC_GSWF_SWF21_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF21_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF21_0                    (XDMAC_GSWF_SWF21_0_Val << XDMAC_GSWF_SWF21_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF21_1                    (XDMAC_GSWF_SWF21_1_Val << XDMAC_GSWF_SWF21_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF22_Pos                  _U_(22)                                              /**< (XDMAC_GSWF) XDMAC Channel 22 Software Flush Request Position */
#define XDMAC_GSWF_SWF22_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF22_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 22 Software Flush Request Mask */
#define XDMAC_GSWF_SWF22(value)               (XDMAC_GSWF_SWF22_Msk & ((value) << XDMAC_GSWF_SWF22_Pos))
#define   XDMAC_GSWF_SWF22_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF22_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF22_0                    (XDMAC_GSWF_SWF22_0_Val << XDMAC_GSWF_SWF22_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF22_1                    (XDMAC_GSWF_SWF22_1_Val << XDMAC_GSWF_SWF22_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF23_Pos                  _U_(23)                                              /**< (XDMAC_GSWF) XDMAC Channel 23 Software Flush Request Position */
#define XDMAC_GSWF_SWF23_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF23_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 23 Software Flush Request Mask */
#define XDMAC_GSWF_SWF23(value)               (XDMAC_GSWF_SWF23_Msk & ((value) << XDMAC_GSWF_SWF23_Pos))
#define   XDMAC_GSWF_SWF23_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF23_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF23_0                    (XDMAC_GSWF_SWF23_0_Val << XDMAC_GSWF_SWF23_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF23_1                    (XDMAC_GSWF_SWF23_1_Val << XDMAC_GSWF_SWF23_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF24_Pos                  _U_(24)                                              /**< (XDMAC_GSWF) XDMAC Channel 24 Software Flush Request Position */
#define XDMAC_GSWF_SWF24_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF24_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 24 Software Flush Request Mask */
#define XDMAC_GSWF_SWF24(value)               (XDMAC_GSWF_SWF24_Msk & ((value) << XDMAC_GSWF_SWF24_Pos))
#define   XDMAC_GSWF_SWF24_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF24_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF24_0                    (XDMAC_GSWF_SWF24_0_Val << XDMAC_GSWF_SWF24_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF24_1                    (XDMAC_GSWF_SWF24_1_Val << XDMAC_GSWF_SWF24_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF25_Pos                  _U_(25)                                              /**< (XDMAC_GSWF) XDMAC Channel 25 Software Flush Request Position */
#define XDMAC_GSWF_SWF25_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF25_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 25 Software Flush Request Mask */
#define XDMAC_GSWF_SWF25(value)               (XDMAC_GSWF_SWF25_Msk & ((value) << XDMAC_GSWF_SWF25_Pos))
#define   XDMAC_GSWF_SWF25_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF25_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF25_0                    (XDMAC_GSWF_SWF25_0_Val << XDMAC_GSWF_SWF25_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF25_1                    (XDMAC_GSWF_SWF25_1_Val << XDMAC_GSWF_SWF25_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF26_Pos                  _U_(26)                                              /**< (XDMAC_GSWF) XDMAC Channel 26 Software Flush Request Position */
#define XDMAC_GSWF_SWF26_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF26_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 26 Software Flush Request Mask */
#define XDMAC_GSWF_SWF26(value)               (XDMAC_GSWF_SWF26_Msk & ((value) << XDMAC_GSWF_SWF26_Pos))
#define   XDMAC_GSWF_SWF26_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF26_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF26_0                    (XDMAC_GSWF_SWF26_0_Val << XDMAC_GSWF_SWF26_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF26_1                    (XDMAC_GSWF_SWF26_1_Val << XDMAC_GSWF_SWF26_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF27_Pos                  _U_(27)                                              /**< (XDMAC_GSWF) XDMAC Channel 27 Software Flush Request Position */
#define XDMAC_GSWF_SWF27_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF27_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 27 Software Flush Request Mask */
#define XDMAC_GSWF_SWF27(value)               (XDMAC_GSWF_SWF27_Msk & ((value) << XDMAC_GSWF_SWF27_Pos))
#define   XDMAC_GSWF_SWF27_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF27_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF27_0                    (XDMAC_GSWF_SWF27_0_Val << XDMAC_GSWF_SWF27_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF27_1                    (XDMAC_GSWF_SWF27_1_Val << XDMAC_GSWF_SWF27_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF28_Pos                  _U_(28)                                              /**< (XDMAC_GSWF) XDMAC Channel 28 Software Flush Request Position */
#define XDMAC_GSWF_SWF28_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF28_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 28 Software Flush Request Mask */
#define XDMAC_GSWF_SWF28(value)               (XDMAC_GSWF_SWF28_Msk & ((value) << XDMAC_GSWF_SWF28_Pos))
#define   XDMAC_GSWF_SWF28_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF28_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF28_0                    (XDMAC_GSWF_SWF28_0_Val << XDMAC_GSWF_SWF28_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF28_1                    (XDMAC_GSWF_SWF28_1_Val << XDMAC_GSWF_SWF28_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF29_Pos                  _U_(29)                                              /**< (XDMAC_GSWF) XDMAC Channel 29 Software Flush Request Position */
#define XDMAC_GSWF_SWF29_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF29_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 29 Software Flush Request Mask */
#define XDMAC_GSWF_SWF29(value)               (XDMAC_GSWF_SWF29_Msk & ((value) << XDMAC_GSWF_SWF29_Pos))
#define   XDMAC_GSWF_SWF29_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF29_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF29_0                    (XDMAC_GSWF_SWF29_0_Val << XDMAC_GSWF_SWF29_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF29_1                    (XDMAC_GSWF_SWF29_1_Val << XDMAC_GSWF_SWF29_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF30_Pos                  _U_(30)                                              /**< (XDMAC_GSWF) XDMAC Channel 30 Software Flush Request Position */
#define XDMAC_GSWF_SWF30_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF30_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 30 Software Flush Request Mask */
#define XDMAC_GSWF_SWF30(value)               (XDMAC_GSWF_SWF30_Msk & ((value) << XDMAC_GSWF_SWF30_Pos))
#define   XDMAC_GSWF_SWF30_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF30_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF30_0                    (XDMAC_GSWF_SWF30_0_Val << XDMAC_GSWF_SWF30_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF30_1                    (XDMAC_GSWF_SWF30_1_Val << XDMAC_GSWF_SWF30_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_SWF31_Pos                  _U_(31)                                              /**< (XDMAC_GSWF) XDMAC Channel 31 Software Flush Request Position */
#define XDMAC_GSWF_SWF31_Msk                  (_U_(0x1) << XDMAC_GSWF_SWF31_Pos)                   /**< (XDMAC_GSWF) XDMAC Channel 31 Software Flush Request Mask */
#define XDMAC_GSWF_SWF31(value)               (XDMAC_GSWF_SWF31_Msk & ((value) << XDMAC_GSWF_SWF31_Pos))
#define   XDMAC_GSWF_SWF31_0_Val              _U_(0x0)                                             /**< (XDMAC_GSWF) No effect.  */
#define   XDMAC_GSWF_SWF31_1_Val              _U_(0x1)                                             /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized.  */
#define XDMAC_GSWF_SWF31_0                    (XDMAC_GSWF_SWF31_0_Val << XDMAC_GSWF_SWF31_Pos)     /**< (XDMAC_GSWF) No effect. Position  */
#define XDMAC_GSWF_SWF31_1                    (XDMAC_GSWF_SWF31_1_Val << XDMAC_GSWF_SWF31_Pos)     /**< (XDMAC_GSWF) Requests a DMA transfer flush for channel x. This bit is only relevant when the transfer is source peripheral synchronized. Position  */
#define XDMAC_GSWF_Msk                        _U_(0xFFFFFFFF)                                      /**< (XDMAC_GSWF) Register Mask  */

#define XDMAC_GSWF_SWF_Pos                    _U_(0)                                               /**< (XDMAC_GSWF Position) XDMAC Channel 3x Software Flush Request */
#define XDMAC_GSWF_SWF_Msk                    (_U_(0xFFFFFFFF) << XDMAC_GSWF_SWF_Pos)              /**< (XDMAC_GSWF Mask) SWF */
#define XDMAC_GSWF_SWF(value)                 (XDMAC_GSWF_SWF_Msk & ((value) << XDMAC_GSWF_SWF_Pos)) 

/** \brief XDMAC register offsets definitions */
#define XDMAC_CIE_REG_OFST             (0x00)              /**< (XDMAC_CIE) Channel Interrupt Enable Register  Offset */
#define XDMAC_CID_REG_OFST             (0x04)              /**< (XDMAC_CID) Channel Interrupt Disable Register  Offset */
#define XDMAC_CIM_REG_OFST             (0x08)              /**< (XDMAC_CIM) Channel Interrupt Mask Register  Offset */
#define XDMAC_CIS_REG_OFST             (0x0C)              /**< (XDMAC_CIS) Channel Interrupt Status Register  Offset */
#define XDMAC_CSA_REG_OFST             (0x10)              /**< (XDMAC_CSA) Channel Source Address Register  Offset */
#define XDMAC_CDA_REG_OFST             (0x14)              /**< (XDMAC_CDA) Channel Destination Address Register  Offset */
#define XDMAC_CNDA_REG_OFST            (0x18)              /**< (XDMAC_CNDA) Channel Next Descriptor Address Register  Offset */
#define XDMAC_CNDC_REG_OFST            (0x1C)              /**< (XDMAC_CNDC) Channel Next Descriptor Control Register  Offset */
#define XDMAC_CUBC_REG_OFST            (0x20)              /**< (XDMAC_CUBC) Channel Microblock Control Register  Offset */
#define XDMAC_CBC_REG_OFST             (0x24)              /**< (XDMAC_CBC) Channel Block Control Register  Offset */
#define XDMAC_CC_REG_OFST              (0x28)              /**< (XDMAC_CC) Channel Configuration Register  Offset */
#define XDMAC_CDS_MSP_REG_OFST         (0x2C)              /**< (XDMAC_CDS_MSP) Channel Data Stride Memory Set Pattern  Offset */
#define XDMAC_CSUS_REG_OFST            (0x30)              /**< (XDMAC_CSUS) Channel Source Microblock Stride  Offset */
#define XDMAC_CDUS_REG_OFST            (0x34)              /**< (XDMAC_CDUS) Channel Destination Microblock Stride  Offset */
#define XDMAC_CTCS_REG_OFST            (0x38)              /**< (XDMAC_CTCS) Channel Transfer Counter Status Register  Offset */
#define XDMAC_GTYPE_REG_OFST           (0x00)              /**< (XDMAC_GTYPE) Global Type Register Offset */
#define XDMAC_GCFG_REG_OFST            (0x04)              /**< (XDMAC_GCFG) Global Configuration Register Offset */
#define XDMAC_GWAC_REG_OFST            (0x08)              /**< (XDMAC_GWAC) Global Weighted Arbiter Configuration Register Offset */
#define XDMAC_GIE_REG_OFST             (0x0C)              /**< (XDMAC_GIE) Global Interrupt Enable Register Offset */
#define XDMAC_GID_REG_OFST             (0x10)              /**< (XDMAC_GID) Global Interrupt Disable Register Offset */
#define XDMAC_GIM_REG_OFST             (0x14)              /**< (XDMAC_GIM) Global Interrupt Mask Register Offset */
#define XDMAC_GIS_REG_OFST             (0x18)              /**< (XDMAC_GIS) Global Interrupt Status Register Offset */
#define XDMAC_GE_REG_OFST              (0x1C)              /**< (XDMAC_GE) Global Channel Enable Register Offset */
#define XDMAC_GD_REG_OFST              (0x20)              /**< (XDMAC_GD) Global Channel Disable Register Offset */
#define XDMAC_GS_REG_OFST              (0x24)              /**< (XDMAC_GS) Global Channel Status Register Offset */
#define XDMAC_GRSS_REG_OFST            (0x28)              /**< (XDMAC_GRSS) Global Channel Read Suspend Status Register Offset */
#define XDMAC_GWSS_REG_OFST            (0x2C)              /**< (XDMAC_GWSS) Global Channel Write Suspend Status Register Offset */
#define XDMAC_GRS_REG_OFST             (0x30)              /**< (XDMAC_GRS) Global Channel Read Suspend Register Offset */
#define XDMAC_GRR_REG_OFST             (0x34)              /**< (XDMAC_GRR) Global Channel Read Resume Register Offset */
#define XDMAC_GWS_REG_OFST             (0x38)              /**< (XDMAC_GWS) Global Channel Write Suspend Register Offset */
#define XDMAC_GWR_REG_OFST             (0x3C)              /**< (XDMAC_GWR) Global Channel Write Resume Register Offset */
#define XDMAC_GRWS_REG_OFST            (0x40)              /**< (XDMAC_GRWS) Global Channel Read Write Suspend Register Offset */
#define XDMAC_GRWR_REG_OFST            (0x44)              /**< (XDMAC_GRWR) Global Channel Read Write Resume Register Offset */
#define XDMAC_GSWR_REG_OFST            (0x48)              /**< (XDMAC_GSWR) Global Channel Software Request Register Offset */
#define XDMAC_GSWS_REG_OFST            (0x4C)              /**< (XDMAC_GSWS) Global Channel Software Request Status Register Offset */
#define XDMAC_GSWF_REG_OFST            (0x50)              /**< (XDMAC_GSWF) Global Channel Software Flush Request Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief XDMAC_CHID register API structure */
typedef struct
{
  __O   uint32_t                       XDMAC_CIE;          /**< Offset: 0x00 ( /W  32) Channel Interrupt Enable Register  */
  __O   uint32_t                       XDMAC_CID;          /**< Offset: 0x04 ( /W  32) Channel Interrupt Disable Register  */
  __I   uint32_t                       XDMAC_CIM;          /**< Offset: 0x08 (R/   32) Channel Interrupt Mask Register  */
  __I   uint32_t                       XDMAC_CIS;          /**< Offset: 0x0C (R/   32) Channel Interrupt Status Register  */
  __IO  uint32_t                       XDMAC_CSA;          /**< Offset: 0x10 (R/W  32) Channel Source Address Register  */
  __IO  uint32_t                       XDMAC_CDA;          /**< Offset: 0x14 (R/W  32) Channel Destination Address Register  */
  __IO  uint32_t                       XDMAC_CNDA;         /**< Offset: 0x18 (R/W  32) Channel Next Descriptor Address Register  */
  __IO  uint32_t                       XDMAC_CNDC;         /**< Offset: 0x1C (R/W  32) Channel Next Descriptor Control Register  */
  __IO  uint32_t                       XDMAC_CUBC;         /**< Offset: 0x20 (R/W  32) Channel Microblock Control Register  */
  __IO  uint32_t                       XDMAC_CBC;          /**< Offset: 0x24 (R/W  32) Channel Block Control Register  */
  __IO  uint32_t                       XDMAC_CC;           /**< Offset: 0x28 (R/W  32) Channel Configuration Register  */
  __IO  uint32_t                       XDMAC_CDS_MSP;      /**< Offset: 0x2C (R/W  32) Channel Data Stride Memory Set Pattern  */
  __IO  uint32_t                       XDMAC_CSUS;         /**< Offset: 0x30 (R/W  32) Channel Source Microblock Stride  */
  __IO  uint32_t                       XDMAC_CDUS;         /**< Offset: 0x34 (R/W  32) Channel Destination Microblock Stride  */
  __I   uint32_t                       XDMAC_CTCS;         /**< Offset: 0x38 (R/   32) Channel Transfer Counter Status Register  */
  __I   uint8_t                        Reserved1[0x04];
} xdmac_chid_registers_t;

#define XDMAC_CHID_NUMBER _U_(32)

/** \brief XDMAC register API structure */
typedef struct
{  /* Extensible DMA Controller */
  __I   uint32_t                       XDMAC_GTYPE;        /**< Offset: 0x00 (R/   32) Global Type Register */
  __IO  uint32_t                       XDMAC_GCFG;         /**< Offset: 0x04 (R/W  32) Global Configuration Register */
  __IO  uint32_t                       XDMAC_GWAC;         /**< Offset: 0x08 (R/W  32) Global Weighted Arbiter Configuration Register */
  __O   uint32_t                       XDMAC_GIE;          /**< Offset: 0x0C ( /W  32) Global Interrupt Enable Register */
  __O   uint32_t                       XDMAC_GID;          /**< Offset: 0x10 ( /W  32) Global Interrupt Disable Register */
  __I   uint32_t                       XDMAC_GIM;          /**< Offset: 0x14 (R/   32) Global Interrupt Mask Register */
  __I   uint32_t                       XDMAC_GIS;          /**< Offset: 0x18 (R/   32) Global Interrupt Status Register */
  __O   uint32_t                       XDMAC_GE;           /**< Offset: 0x1C ( /W  32) Global Channel Enable Register */
  __O   uint32_t                       XDMAC_GD;           /**< Offset: 0x20 ( /W  32) Global Channel Disable Register */
  __I   uint32_t                       XDMAC_GS;           /**< Offset: 0x24 (R/   32) Global Channel Status Register */
  __I   uint32_t                       XDMAC_GRSS;         /**< Offset: 0x28 (R/   32) Global Channel Read Suspend Status Register */
  __I   uint32_t                       XDMAC_GWSS;         /**< Offset: 0x2C (R/   32) Global Channel Write Suspend Status Register */
  __O   uint32_t                       XDMAC_GRS;          /**< Offset: 0x30 ( /W  32) Global Channel Read Suspend Register */
  __O   uint32_t                       XDMAC_GRR;          /**< Offset: 0x34 ( /W  32) Global Channel Read Resume Register */
  __O   uint32_t                       XDMAC_GWS;          /**< Offset: 0x38 ( /W  32) Global Channel Write Suspend Register */
  __O   uint32_t                       XDMAC_GWR;          /**< Offset: 0x3C ( /W  32) Global Channel Write Resume Register */
  __O   uint32_t                       XDMAC_GRWS;         /**< Offset: 0x40 ( /W  32) Global Channel Read Write Suspend Register */
  __O   uint32_t                       XDMAC_GRWR;         /**< Offset: 0x44 ( /W  32) Global Channel Read Write Resume Register */
  __O   uint32_t                       XDMAC_GSWR;         /**< Offset: 0x48 ( /W  32) Global Channel Software Request Register */
  __I   uint32_t                       XDMAC_GSWS;         /**< Offset: 0x4C (R/   32) Global Channel Software Request Status Register */
  __IO  uint32_t                       XDMAC_GSWF;         /**< Offset: 0x50 (R/W  32) Global Channel Software Flush Request Register */
  __I   uint8_t                        Reserved1[0x0C];
        xdmac_chid_registers_t         XDMAC_CHID[XDMAC_CHID_NUMBER]; /**< Offset: 0x60  */
} xdmac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_XDMAC_COMPONENT_H_ */
