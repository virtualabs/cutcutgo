/*
 * Component description for MATRIX
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
#ifndef _SAMA7G_MATRIX_COMPONENT_H_
#define _SAMA7G_MATRIX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MATRIX                                       */
/* ************************************************************************** */

/* -------- MATRIX_PRAS : (MATRIX Offset: 0x00) (R/W 32) Priority Register A for Slave x -------- */
#define MATRIX_PRAS_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_PRAS) Priority Register A for Slave x  Reset Value */

#define MATRIX_PRAS_M0PR_Pos                  _U_(0)                                               /**< (MATRIX_PRAS) Master 0 Priority Position */
#define MATRIX_PRAS_M0PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M0PR_Pos)                   /**< (MATRIX_PRAS) Master 0 Priority Mask */
#define MATRIX_PRAS_M0PR(value)               (MATRIX_PRAS_M0PR_Msk & ((value) << MATRIX_PRAS_M0PR_Pos))
#define MATRIX_PRAS_LQOSEN0_Pos               _U_(2)                                               /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 0 Position */
#define MATRIX_PRAS_LQOSEN0_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN0_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 0 Mask */
#define MATRIX_PRAS_LQOSEN0(value)            (MATRIX_PRAS_LQOSEN0_Msk & ((value) << MATRIX_PRAS_LQOSEN0_Pos))
#define   MATRIX_PRAS_LQOSEN0_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN0_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN0_0                 (MATRIX_PRAS_LQOSEN0_0_Val << MATRIX_PRAS_LQOSEN0_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN0_1                 (MATRIX_PRAS_LQOSEN0_1_Val << MATRIX_PRAS_LQOSEN0_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M1PR_Pos                  _U_(4)                                               /**< (MATRIX_PRAS) Master 1 Priority Position */
#define MATRIX_PRAS_M1PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M1PR_Pos)                   /**< (MATRIX_PRAS) Master 1 Priority Mask */
#define MATRIX_PRAS_M1PR(value)               (MATRIX_PRAS_M1PR_Msk & ((value) << MATRIX_PRAS_M1PR_Pos))
#define MATRIX_PRAS_LQOSEN1_Pos               _U_(6)                                               /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 1 Position */
#define MATRIX_PRAS_LQOSEN1_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN1_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 1 Mask */
#define MATRIX_PRAS_LQOSEN1(value)            (MATRIX_PRAS_LQOSEN1_Msk & ((value) << MATRIX_PRAS_LQOSEN1_Pos))
#define   MATRIX_PRAS_LQOSEN1_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN1_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN1_0                 (MATRIX_PRAS_LQOSEN1_0_Val << MATRIX_PRAS_LQOSEN1_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN1_1                 (MATRIX_PRAS_LQOSEN1_1_Val << MATRIX_PRAS_LQOSEN1_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M2PR_Pos                  _U_(8)                                               /**< (MATRIX_PRAS) Master 2 Priority Position */
#define MATRIX_PRAS_M2PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M2PR_Pos)                   /**< (MATRIX_PRAS) Master 2 Priority Mask */
#define MATRIX_PRAS_M2PR(value)               (MATRIX_PRAS_M2PR_Msk & ((value) << MATRIX_PRAS_M2PR_Pos))
#define MATRIX_PRAS_LQOSEN2_Pos               _U_(10)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 2 Position */
#define MATRIX_PRAS_LQOSEN2_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN2_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 2 Mask */
#define MATRIX_PRAS_LQOSEN2(value)            (MATRIX_PRAS_LQOSEN2_Msk & ((value) << MATRIX_PRAS_LQOSEN2_Pos))
#define   MATRIX_PRAS_LQOSEN2_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN2_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN2_0                 (MATRIX_PRAS_LQOSEN2_0_Val << MATRIX_PRAS_LQOSEN2_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN2_1                 (MATRIX_PRAS_LQOSEN2_1_Val << MATRIX_PRAS_LQOSEN2_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M3PR_Pos                  _U_(12)                                              /**< (MATRIX_PRAS) Master 3 Priority Position */
#define MATRIX_PRAS_M3PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M3PR_Pos)                   /**< (MATRIX_PRAS) Master 3 Priority Mask */
#define MATRIX_PRAS_M3PR(value)               (MATRIX_PRAS_M3PR_Msk & ((value) << MATRIX_PRAS_M3PR_Pos))
#define MATRIX_PRAS_LQOSEN3_Pos               _U_(14)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 3 Position */
#define MATRIX_PRAS_LQOSEN3_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN3_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 3 Mask */
#define MATRIX_PRAS_LQOSEN3(value)            (MATRIX_PRAS_LQOSEN3_Msk & ((value) << MATRIX_PRAS_LQOSEN3_Pos))
#define   MATRIX_PRAS_LQOSEN3_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN3_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN3_0                 (MATRIX_PRAS_LQOSEN3_0_Val << MATRIX_PRAS_LQOSEN3_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN3_1                 (MATRIX_PRAS_LQOSEN3_1_Val << MATRIX_PRAS_LQOSEN3_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M4PR_Pos                  _U_(16)                                              /**< (MATRIX_PRAS) Master 4 Priority Position */
#define MATRIX_PRAS_M4PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M4PR_Pos)                   /**< (MATRIX_PRAS) Master 4 Priority Mask */
#define MATRIX_PRAS_M4PR(value)               (MATRIX_PRAS_M4PR_Msk & ((value) << MATRIX_PRAS_M4PR_Pos))
#define MATRIX_PRAS_LQOSEN4_Pos               _U_(18)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 4 Position */
#define MATRIX_PRAS_LQOSEN4_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN4_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 4 Mask */
#define MATRIX_PRAS_LQOSEN4(value)            (MATRIX_PRAS_LQOSEN4_Msk & ((value) << MATRIX_PRAS_LQOSEN4_Pos))
#define   MATRIX_PRAS_LQOSEN4_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN4_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN4_0                 (MATRIX_PRAS_LQOSEN4_0_Val << MATRIX_PRAS_LQOSEN4_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN4_1                 (MATRIX_PRAS_LQOSEN4_1_Val << MATRIX_PRAS_LQOSEN4_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M5PR_Pos                  _U_(20)                                              /**< (MATRIX_PRAS) Master 5 Priority Position */
#define MATRIX_PRAS_M5PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M5PR_Pos)                   /**< (MATRIX_PRAS) Master 5 Priority Mask */
#define MATRIX_PRAS_M5PR(value)               (MATRIX_PRAS_M5PR_Msk & ((value) << MATRIX_PRAS_M5PR_Pos))
#define MATRIX_PRAS_LQOSEN5_Pos               _U_(22)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 5 Position */
#define MATRIX_PRAS_LQOSEN5_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN5_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 5 Mask */
#define MATRIX_PRAS_LQOSEN5(value)            (MATRIX_PRAS_LQOSEN5_Msk & ((value) << MATRIX_PRAS_LQOSEN5_Pos))
#define   MATRIX_PRAS_LQOSEN5_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN5_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN5_0                 (MATRIX_PRAS_LQOSEN5_0_Val << MATRIX_PRAS_LQOSEN5_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN5_1                 (MATRIX_PRAS_LQOSEN5_1_Val << MATRIX_PRAS_LQOSEN5_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M6PR_Pos                  _U_(24)                                              /**< (MATRIX_PRAS) Master 6 Priority Position */
#define MATRIX_PRAS_M6PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M6PR_Pos)                   /**< (MATRIX_PRAS) Master 6 Priority Mask */
#define MATRIX_PRAS_M6PR(value)               (MATRIX_PRAS_M6PR_Msk & ((value) << MATRIX_PRAS_M6PR_Pos))
#define MATRIX_PRAS_LQOSEN6_Pos               _U_(26)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 6 Position */
#define MATRIX_PRAS_LQOSEN6_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN6_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 6 Mask */
#define MATRIX_PRAS_LQOSEN6(value)            (MATRIX_PRAS_LQOSEN6_Msk & ((value) << MATRIX_PRAS_LQOSEN6_Pos))
#define   MATRIX_PRAS_LQOSEN6_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN6_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN6_0                 (MATRIX_PRAS_LQOSEN6_0_Val << MATRIX_PRAS_LQOSEN6_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN6_1                 (MATRIX_PRAS_LQOSEN6_1_Val << MATRIX_PRAS_LQOSEN6_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_M7PR_Pos                  _U_(28)                                              /**< (MATRIX_PRAS) Master 7 Priority Position */
#define MATRIX_PRAS_M7PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M7PR_Pos)                   /**< (MATRIX_PRAS) Master 7 Priority Mask */
#define MATRIX_PRAS_M7PR(value)               (MATRIX_PRAS_M7PR_Msk & ((value) << MATRIX_PRAS_M7PR_Pos))
#define MATRIX_PRAS_LQOSEN7_Pos               _U_(30)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 7 Position */
#define MATRIX_PRAS_LQOSEN7_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN7_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 7 Mask */
#define MATRIX_PRAS_LQOSEN7(value)            (MATRIX_PRAS_LQOSEN7_Msk & ((value) << MATRIX_PRAS_LQOSEN7_Pos))
#define   MATRIX_PRAS_LQOSEN7_0_Val           _U_(0x0)                                             /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRAS_LQOSEN7_1_Val           _U_(0x1)                                             /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRAS_LQOSEN7_0                 (MATRIX_PRAS_LQOSEN7_0_Val << MATRIX_PRAS_LQOSEN7_Pos) /**< (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRAS_LQOSEN7_1                 (MATRIX_PRAS_LQOSEN7_1_Val << MATRIX_PRAS_LQOSEN7_Pos) /**< (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRAS_Msk                       _U_(0x77777777)                                      /**< (MATRIX_PRAS) Register Mask  */


/* -------- MATRIX_PRBS : (MATRIX Offset: 0x04) (R/W 32) Priority Register B for Slave x -------- */
#define MATRIX_PRBS_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_PRBS) Priority Register B for Slave x  Reset Value */

#define MATRIX_PRBS_M8PR_Pos                  _U_(0)                                               /**< (MATRIX_PRBS) Master 8 Priority Position */
#define MATRIX_PRBS_M8PR_Msk                  (_U_(0x3) << MATRIX_PRBS_M8PR_Pos)                   /**< (MATRIX_PRBS) Master 8 Priority Mask */
#define MATRIX_PRBS_M8PR(value)               (MATRIX_PRBS_M8PR_Msk & ((value) << MATRIX_PRBS_M8PR_Pos))
#define MATRIX_PRBS_LQOSEN8_Pos               _U_(2)                                               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 8 Position */
#define MATRIX_PRBS_LQOSEN8_Msk               (_U_(0x1) << MATRIX_PRBS_LQOSEN8_Pos)                /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 8 Mask */
#define MATRIX_PRBS_LQOSEN8(value)            (MATRIX_PRBS_LQOSEN8_Msk & ((value) << MATRIX_PRBS_LQOSEN8_Pos))
#define   MATRIX_PRBS_LQOSEN8_0_Val           _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN8_1_Val           _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN8_0                 (MATRIX_PRBS_LQOSEN8_0_Val << MATRIX_PRBS_LQOSEN8_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN8_1                 (MATRIX_PRBS_LQOSEN8_1_Val << MATRIX_PRBS_LQOSEN8_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M9PR_Pos                  _U_(4)                                               /**< (MATRIX_PRBS) Master 9 Priority Position */
#define MATRIX_PRBS_M9PR_Msk                  (_U_(0x3) << MATRIX_PRBS_M9PR_Pos)                   /**< (MATRIX_PRBS) Master 9 Priority Mask */
#define MATRIX_PRBS_M9PR(value)               (MATRIX_PRBS_M9PR_Msk & ((value) << MATRIX_PRBS_M9PR_Pos))
#define MATRIX_PRBS_LQOSEN9_Pos               _U_(6)                                               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 9 Position */
#define MATRIX_PRBS_LQOSEN9_Msk               (_U_(0x1) << MATRIX_PRBS_LQOSEN9_Pos)                /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 9 Mask */
#define MATRIX_PRBS_LQOSEN9(value)            (MATRIX_PRBS_LQOSEN9_Msk & ((value) << MATRIX_PRBS_LQOSEN9_Pos))
#define   MATRIX_PRBS_LQOSEN9_0_Val           _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN9_1_Val           _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN9_0                 (MATRIX_PRBS_LQOSEN9_0_Val << MATRIX_PRBS_LQOSEN9_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN9_1                 (MATRIX_PRBS_LQOSEN9_1_Val << MATRIX_PRBS_LQOSEN9_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M10PR_Pos                 _U_(8)                                               /**< (MATRIX_PRBS) Master 10 Priority Position */
#define MATRIX_PRBS_M10PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M10PR_Pos)                  /**< (MATRIX_PRBS) Master 10 Priority Mask */
#define MATRIX_PRBS_M10PR(value)              (MATRIX_PRBS_M10PR_Msk & ((value) << MATRIX_PRBS_M10PR_Pos))
#define MATRIX_PRBS_LQOSEN10_Pos              _U_(10)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 10 Position */
#define MATRIX_PRBS_LQOSEN10_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN10_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 10 Mask */
#define MATRIX_PRBS_LQOSEN10(value)           (MATRIX_PRBS_LQOSEN10_Msk & ((value) << MATRIX_PRBS_LQOSEN10_Pos))
#define   MATRIX_PRBS_LQOSEN10_0_Val          _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN10_1_Val          _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN10_0                (MATRIX_PRBS_LQOSEN10_0_Val << MATRIX_PRBS_LQOSEN10_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN10_1                (MATRIX_PRBS_LQOSEN10_1_Val << MATRIX_PRBS_LQOSEN10_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M11PR_Pos                 _U_(12)                                              /**< (MATRIX_PRBS) Master 11 Priority Position */
#define MATRIX_PRBS_M11PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M11PR_Pos)                  /**< (MATRIX_PRBS) Master 11 Priority Mask */
#define MATRIX_PRBS_M11PR(value)              (MATRIX_PRBS_M11PR_Msk & ((value) << MATRIX_PRBS_M11PR_Pos))
#define MATRIX_PRBS_LQOSEN11_Pos              _U_(14)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 11 Position */
#define MATRIX_PRBS_LQOSEN11_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN11_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 11 Mask */
#define MATRIX_PRBS_LQOSEN11(value)           (MATRIX_PRBS_LQOSEN11_Msk & ((value) << MATRIX_PRBS_LQOSEN11_Pos))
#define   MATRIX_PRBS_LQOSEN11_0_Val          _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN11_1_Val          _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN11_0                (MATRIX_PRBS_LQOSEN11_0_Val << MATRIX_PRBS_LQOSEN11_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN11_1                (MATRIX_PRBS_LQOSEN11_1_Val << MATRIX_PRBS_LQOSEN11_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M12PR_Pos                 _U_(16)                                              /**< (MATRIX_PRBS) Master 12 Priority Position */
#define MATRIX_PRBS_M12PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M12PR_Pos)                  /**< (MATRIX_PRBS) Master 12 Priority Mask */
#define MATRIX_PRBS_M12PR(value)              (MATRIX_PRBS_M12PR_Msk & ((value) << MATRIX_PRBS_M12PR_Pos))
#define MATRIX_PRBS_LQOSEN12_Pos              _U_(18)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 12 Position */
#define MATRIX_PRBS_LQOSEN12_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN12_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 12 Mask */
#define MATRIX_PRBS_LQOSEN12(value)           (MATRIX_PRBS_LQOSEN12_Msk & ((value) << MATRIX_PRBS_LQOSEN12_Pos))
#define   MATRIX_PRBS_LQOSEN12_0_Val          _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN12_1_Val          _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN12_0                (MATRIX_PRBS_LQOSEN12_0_Val << MATRIX_PRBS_LQOSEN12_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN12_1                (MATRIX_PRBS_LQOSEN12_1_Val << MATRIX_PRBS_LQOSEN12_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M13PR_Pos                 _U_(20)                                              /**< (MATRIX_PRBS) Master 13 Priority Position */
#define MATRIX_PRBS_M13PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M13PR_Pos)                  /**< (MATRIX_PRBS) Master 13 Priority Mask */
#define MATRIX_PRBS_M13PR(value)              (MATRIX_PRBS_M13PR_Msk & ((value) << MATRIX_PRBS_M13PR_Pos))
#define MATRIX_PRBS_LQOSEN13_Pos              _U_(22)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 13 Position */
#define MATRIX_PRBS_LQOSEN13_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN13_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 13 Mask */
#define MATRIX_PRBS_LQOSEN13(value)           (MATRIX_PRBS_LQOSEN13_Msk & ((value) << MATRIX_PRBS_LQOSEN13_Pos))
#define   MATRIX_PRBS_LQOSEN13_0_Val          _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN13_1_Val          _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN13_0                (MATRIX_PRBS_LQOSEN13_0_Val << MATRIX_PRBS_LQOSEN13_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN13_1                (MATRIX_PRBS_LQOSEN13_1_Val << MATRIX_PRBS_LQOSEN13_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M14PR_Pos                 _U_(24)                                              /**< (MATRIX_PRBS) Master 14 Priority Position */
#define MATRIX_PRBS_M14PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M14PR_Pos)                  /**< (MATRIX_PRBS) Master 14 Priority Mask */
#define MATRIX_PRBS_M14PR(value)              (MATRIX_PRBS_M14PR_Msk & ((value) << MATRIX_PRBS_M14PR_Pos))
#define MATRIX_PRBS_LQOSEN14_Pos              _U_(26)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 14 Position */
#define MATRIX_PRBS_LQOSEN14_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN14_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 14 Mask */
#define MATRIX_PRBS_LQOSEN14(value)           (MATRIX_PRBS_LQOSEN14_Msk & ((value) << MATRIX_PRBS_LQOSEN14_Pos))
#define   MATRIX_PRBS_LQOSEN14_0_Val          _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN14_1_Val          _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN14_0                (MATRIX_PRBS_LQOSEN14_0_Val << MATRIX_PRBS_LQOSEN14_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN14_1                (MATRIX_PRBS_LQOSEN14_1_Val << MATRIX_PRBS_LQOSEN14_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_M15PR_Pos                 _U_(28)                                              /**< (MATRIX_PRBS) Master 15 Priority Position */
#define MATRIX_PRBS_M15PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M15PR_Pos)                  /**< (MATRIX_PRBS) Master 15 Priority Mask */
#define MATRIX_PRBS_M15PR(value)              (MATRIX_PRBS_M15PR_Msk & ((value) << MATRIX_PRBS_M15PR_Pos))
#define MATRIX_PRBS_LQOSEN15_Pos              _U_(30)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 15 Position */
#define MATRIX_PRBS_LQOSEN15_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN15_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 15 Mask */
#define MATRIX_PRBS_LQOSEN15(value)           (MATRIX_PRBS_LQOSEN15_Msk & ((value) << MATRIX_PRBS_LQOSEN15_Pos))
#define   MATRIX_PRBS_LQOSEN15_0_Val          _U_(0x0)                                             /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave.  */
#define   MATRIX_PRBS_LQOSEN15_1_Val          _U_(0x1)                                             /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x.  */
#define MATRIX_PRBS_LQOSEN15_0                (MATRIX_PRBS_LQOSEN15_0_Val << MATRIX_PRBS_LQOSEN15_Pos) /**< (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Master x to the Slave and apply MxPR priority for all access from Master x to the Slave. Position  */
#define MATRIX_PRBS_LQOSEN15_1                (MATRIX_PRBS_LQOSEN15_1_Val << MATRIX_PRBS_LQOSEN15_Pos) /**< (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Master x to the Slave if supported by the Master x. Position  */
#define MATRIX_PRBS_Msk                       _U_(0x77777777)                                      /**< (MATRIX_PRBS) Register Mask  */


/* -------- MATRIX_MCFG : (MATRIX Offset: 0x00) (R/W 32) Master Configuration Register x -------- */
#define MATRIX_MCFG_RESETVALUE                _U_(0x04)                                            /**<  (MATRIX_MCFG) Master Configuration Register x  Reset Value */

#define MATRIX_MCFG_ULBT_Pos                  _U_(0)                                               /**< (MATRIX_MCFG) Undefined Length Burst Type Position */
#define MATRIX_MCFG_ULBT_Msk                  (_U_(0x7) << MATRIX_MCFG_ULBT_Pos)                   /**< (MATRIX_MCFG) Undefined Length Burst Type Mask */
#define MATRIX_MCFG_ULBT(value)               (MATRIX_MCFG_ULBT_Msk & ((value) << MATRIX_MCFG_ULBT_Pos))
#define   MATRIX_MCFG_ULBT_UNLIMITED_Val      _U_(0x0)                                             /**< (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next system bus 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts. This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave.  */
#define   MATRIX_MCFG_ULBT_SINGLE_Val         _U_(0x1)                                             /**< (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence.  */
#define   MATRIX_MCFG_ULBT_4_BEAT_Val         _U_(0x2)                                             /**< (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats.  */
#define   MATRIX_MCFG_ULBT_8_BEAT_Val         _U_(0x3)                                             /**< (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats.  */
#define   MATRIX_MCFG_ULBT_16_BEAT_Val        _U_(0x4)                                             /**< (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats.  */
#define   MATRIX_MCFG_ULBT_32_BEAT_Val        _U_(0x5)                                             /**< (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats.  */
#define   MATRIX_MCFG_ULBT_64_BEAT_Val        _U_(0x6)                                             /**< (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats.  */
#define   MATRIX_MCFG_ULBT_128_BEAT_Val       _U_(0x7)                                             /**< (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats.  Unless duly needed, the ULBT should be left at its default 0 value for power saving.  */
#define MATRIX_MCFG_ULBT_UNLIMITED            (MATRIX_MCFG_ULBT_UNLIMITED_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next system bus 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts. This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave. Position  */
#define MATRIX_MCFG_ULBT_SINGLE               (MATRIX_MCFG_ULBT_SINGLE_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence. Position  */
#define MATRIX_MCFG_ULBT_4_BEAT               (MATRIX_MCFG_ULBT_4_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats. Position  */
#define MATRIX_MCFG_ULBT_8_BEAT               (MATRIX_MCFG_ULBT_8_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats. Position  */
#define MATRIX_MCFG_ULBT_16_BEAT              (MATRIX_MCFG_ULBT_16_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats. Position  */
#define MATRIX_MCFG_ULBT_32_BEAT              (MATRIX_MCFG_ULBT_32_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats. Position  */
#define MATRIX_MCFG_ULBT_64_BEAT              (MATRIX_MCFG_ULBT_64_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats. Position  */
#define MATRIX_MCFG_ULBT_128_BEAT             (MATRIX_MCFG_ULBT_128_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats.  Unless duly needed, the ULBT should be left at its default 0 value for power saving. Position  */
#define MATRIX_MCFG_Msk                       _U_(0x00000007)                                      /**< (MATRIX_MCFG) Register Mask  */


/* -------- MATRIX_SCFG : (MATRIX Offset: 0x40) (R/W 32) Slave Configuration Register x -------- */
#define MATRIX_SCFG_RESETVALUE                _U_(0x1FF)                                           /**<  (MATRIX_SCFG) Slave Configuration Register x  Reset Value */

#define MATRIX_SCFG_SLOT_CYCLE_Pos            _U_(0)                                               /**< (MATRIX_SCFG) Maximum Bus Grant Duration for Masters Position */
#define MATRIX_SCFG_SLOT_CYCLE_Msk            (_U_(0x1FF) << MATRIX_SCFG_SLOT_CYCLE_Pos)           /**< (MATRIX_SCFG) Maximum Bus Grant Duration for Masters Mask */
#define MATRIX_SCFG_SLOT_CYCLE(value)         (MATRIX_SCFG_SLOT_CYCLE_Msk & ((value) << MATRIX_SCFG_SLOT_CYCLE_Pos))
#define MATRIX_SCFG_DEFMSTR_TYPE_Pos          _U_(16)                                              /**< (MATRIX_SCFG) Default Master Type Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_Msk          (_U_(0x3) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)           /**< (MATRIX_SCFG) Default Master Type Mask */
#define MATRIX_SCFG_DEFMSTR_TYPE(value)       (MATRIX_SCFG_DEFMSTR_TYPE_Msk & ((value) << MATRIX_SCFG_DEFMSTR_TYPE_Pos))
#define   MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val   _U_(0x0)                                             /**< (MATRIX_SCFG) No Default Master-At the end of the current slave access, if no other master request is pending, the slave is disconnected from all masters. This results in a one clock cycle latency for the first access of a burst transfer or for a single access.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val   _U_(0x1)                                             /**< (MATRIX_SCFG) Last Default Master-At the end of the current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it. This results in not having one clock cycle latency when the last master tries to access the slave again.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val  _U_(0x2)                                             /**< (MATRIX_SCFG) Fixed Default Master-At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field. This results in not having one clock cycle latency when the fixed master tries to access the slave again.  */
#define MATRIX_SCFG_DEFMSTR_TYPE_NONE         (MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< (MATRIX_SCFG) No Default Master-At the end of the current slave access, if no other master request is pending, the slave is disconnected from all masters. This results in a one clock cycle latency for the first access of a burst transfer or for a single access. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_LAST         (MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< (MATRIX_SCFG) Last Default Master-At the end of the current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it. This results in not having one clock cycle latency when the last master tries to access the slave again. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_FIXED        (MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< (MATRIX_SCFG) Fixed Default Master-At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field. This results in not having one clock cycle latency when the fixed master tries to access the slave again. Position  */
#define MATRIX_SCFG_FIXED_DEFMSTR_Pos         _U_(18)                                              /**< (MATRIX_SCFG) Fixed Default Master Position */
#define MATRIX_SCFG_FIXED_DEFMSTR_Msk         (_U_(0xF) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)          /**< (MATRIX_SCFG) Fixed Default Master Mask */
#define MATRIX_SCFG_FIXED_DEFMSTR(value)      (MATRIX_SCFG_FIXED_DEFMSTR_Msk & ((value) << MATRIX_SCFG_FIXED_DEFMSTR_Pos))
#define MATRIX_SCFG_Msk                       _U_(0x003F01FF)                                      /**< (MATRIX_SCFG) Register Mask  */


/* -------- MATRIX_MRCR : (MATRIX Offset: 0x100) (R/W 32) Master Remap Control Register -------- */
#define MATRIX_MRCR_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_MRCR) Master Remap Control Register  Reset Value */

#define MATRIX_MRCR_RCB0_Pos                  _U_(0)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 0 Position */
#define MATRIX_MRCR_RCB0_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB0_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 0 Mask */
#define MATRIX_MRCR_RCB0(value)               (MATRIX_MRCR_RCB0_Msk & ((value) << MATRIX_MRCR_RCB0_Pos))
#define   MATRIX_MRCR_RCB0_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB0_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB0_0                    (MATRIX_MRCR_RCB0_0_Val << MATRIX_MRCR_RCB0_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB0_1                    (MATRIX_MRCR_RCB0_1_Val << MATRIX_MRCR_RCB0_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB1_Pos                  _U_(1)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 1 Position */
#define MATRIX_MRCR_RCB1_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB1_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 1 Mask */
#define MATRIX_MRCR_RCB1(value)               (MATRIX_MRCR_RCB1_Msk & ((value) << MATRIX_MRCR_RCB1_Pos))
#define   MATRIX_MRCR_RCB1_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB1_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB1_0                    (MATRIX_MRCR_RCB1_0_Val << MATRIX_MRCR_RCB1_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB1_1                    (MATRIX_MRCR_RCB1_1_Val << MATRIX_MRCR_RCB1_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB2_Pos                  _U_(2)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 2 Position */
#define MATRIX_MRCR_RCB2_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB2_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 2 Mask */
#define MATRIX_MRCR_RCB2(value)               (MATRIX_MRCR_RCB2_Msk & ((value) << MATRIX_MRCR_RCB2_Pos))
#define   MATRIX_MRCR_RCB2_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB2_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB2_0                    (MATRIX_MRCR_RCB2_0_Val << MATRIX_MRCR_RCB2_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB2_1                    (MATRIX_MRCR_RCB2_1_Val << MATRIX_MRCR_RCB2_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB3_Pos                  _U_(3)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 3 Position */
#define MATRIX_MRCR_RCB3_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB3_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 3 Mask */
#define MATRIX_MRCR_RCB3(value)               (MATRIX_MRCR_RCB3_Msk & ((value) << MATRIX_MRCR_RCB3_Pos))
#define   MATRIX_MRCR_RCB3_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB3_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB3_0                    (MATRIX_MRCR_RCB3_0_Val << MATRIX_MRCR_RCB3_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB3_1                    (MATRIX_MRCR_RCB3_1_Val << MATRIX_MRCR_RCB3_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB4_Pos                  _U_(4)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 4 Position */
#define MATRIX_MRCR_RCB4_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB4_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 4 Mask */
#define MATRIX_MRCR_RCB4(value)               (MATRIX_MRCR_RCB4_Msk & ((value) << MATRIX_MRCR_RCB4_Pos))
#define   MATRIX_MRCR_RCB4_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB4_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB4_0                    (MATRIX_MRCR_RCB4_0_Val << MATRIX_MRCR_RCB4_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB4_1                    (MATRIX_MRCR_RCB4_1_Val << MATRIX_MRCR_RCB4_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB5_Pos                  _U_(5)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 5 Position */
#define MATRIX_MRCR_RCB5_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB5_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 5 Mask */
#define MATRIX_MRCR_RCB5(value)               (MATRIX_MRCR_RCB5_Msk & ((value) << MATRIX_MRCR_RCB5_Pos))
#define   MATRIX_MRCR_RCB5_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB5_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB5_0                    (MATRIX_MRCR_RCB5_0_Val << MATRIX_MRCR_RCB5_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB5_1                    (MATRIX_MRCR_RCB5_1_Val << MATRIX_MRCR_RCB5_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB6_Pos                  _U_(6)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 6 Position */
#define MATRIX_MRCR_RCB6_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB6_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 6 Mask */
#define MATRIX_MRCR_RCB6(value)               (MATRIX_MRCR_RCB6_Msk & ((value) << MATRIX_MRCR_RCB6_Pos))
#define   MATRIX_MRCR_RCB6_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB6_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB6_0                    (MATRIX_MRCR_RCB6_0_Val << MATRIX_MRCR_RCB6_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB6_1                    (MATRIX_MRCR_RCB6_1_Val << MATRIX_MRCR_RCB6_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB7_Pos                  _U_(7)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 7 Position */
#define MATRIX_MRCR_RCB7_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB7_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 7 Mask */
#define MATRIX_MRCR_RCB7(value)               (MATRIX_MRCR_RCB7_Msk & ((value) << MATRIX_MRCR_RCB7_Pos))
#define   MATRIX_MRCR_RCB7_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB7_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB7_0                    (MATRIX_MRCR_RCB7_0_Val << MATRIX_MRCR_RCB7_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB7_1                    (MATRIX_MRCR_RCB7_1_Val << MATRIX_MRCR_RCB7_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB8_Pos                  _U_(8)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 8 Position */
#define MATRIX_MRCR_RCB8_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB8_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 8 Mask */
#define MATRIX_MRCR_RCB8(value)               (MATRIX_MRCR_RCB8_Msk & ((value) << MATRIX_MRCR_RCB8_Pos))
#define   MATRIX_MRCR_RCB8_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB8_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB8_0                    (MATRIX_MRCR_RCB8_0_Val << MATRIX_MRCR_RCB8_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB8_1                    (MATRIX_MRCR_RCB8_1_Val << MATRIX_MRCR_RCB8_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB9_Pos                  _U_(9)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 9 Position */
#define MATRIX_MRCR_RCB9_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB9_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 9 Mask */
#define MATRIX_MRCR_RCB9(value)               (MATRIX_MRCR_RCB9_Msk & ((value) << MATRIX_MRCR_RCB9_Pos))
#define   MATRIX_MRCR_RCB9_0_Val              _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB9_1_Val              _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB9_0                    (MATRIX_MRCR_RCB9_0_Val << MATRIX_MRCR_RCB9_Pos)     /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB9_1                    (MATRIX_MRCR_RCB9_1_Val << MATRIX_MRCR_RCB9_Pos)     /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB10_Pos                 _U_(10)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 10 Position */
#define MATRIX_MRCR_RCB10_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB10_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 10 Mask */
#define MATRIX_MRCR_RCB10(value)              (MATRIX_MRCR_RCB10_Msk & ((value) << MATRIX_MRCR_RCB10_Pos))
#define   MATRIX_MRCR_RCB10_0_Val             _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB10_1_Val             _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB10_0                   (MATRIX_MRCR_RCB10_0_Val << MATRIX_MRCR_RCB10_Pos)   /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB10_1                   (MATRIX_MRCR_RCB10_1_Val << MATRIX_MRCR_RCB10_Pos)   /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB11_Pos                 _U_(11)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 11 Position */
#define MATRIX_MRCR_RCB11_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB11_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 11 Mask */
#define MATRIX_MRCR_RCB11(value)              (MATRIX_MRCR_RCB11_Msk & ((value) << MATRIX_MRCR_RCB11_Pos))
#define   MATRIX_MRCR_RCB11_0_Val             _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB11_1_Val             _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB11_0                   (MATRIX_MRCR_RCB11_0_Val << MATRIX_MRCR_RCB11_Pos)   /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB11_1                   (MATRIX_MRCR_RCB11_1_Val << MATRIX_MRCR_RCB11_Pos)   /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB12_Pos                 _U_(12)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 12 Position */
#define MATRIX_MRCR_RCB12_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB12_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 12 Mask */
#define MATRIX_MRCR_RCB12(value)              (MATRIX_MRCR_RCB12_Msk & ((value) << MATRIX_MRCR_RCB12_Pos))
#define   MATRIX_MRCR_RCB12_0_Val             _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB12_1_Val             _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB12_0                   (MATRIX_MRCR_RCB12_0_Val << MATRIX_MRCR_RCB12_Pos)   /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB12_1                   (MATRIX_MRCR_RCB12_1_Val << MATRIX_MRCR_RCB12_Pos)   /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB13_Pos                 _U_(13)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 13 Position */
#define MATRIX_MRCR_RCB13_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB13_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 13 Mask */
#define MATRIX_MRCR_RCB13(value)              (MATRIX_MRCR_RCB13_Msk & ((value) << MATRIX_MRCR_RCB13_Pos))
#define   MATRIX_MRCR_RCB13_0_Val             _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB13_1_Val             _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB13_0                   (MATRIX_MRCR_RCB13_0_Val << MATRIX_MRCR_RCB13_Pos)   /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB13_1                   (MATRIX_MRCR_RCB13_1_Val << MATRIX_MRCR_RCB13_Pos)   /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB14_Pos                 _U_(14)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 14 Position */
#define MATRIX_MRCR_RCB14_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB14_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 14 Mask */
#define MATRIX_MRCR_RCB14(value)              (MATRIX_MRCR_RCB14_Msk & ((value) << MATRIX_MRCR_RCB14_Pos))
#define   MATRIX_MRCR_RCB14_0_Val             _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB14_1_Val             _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB14_0                   (MATRIX_MRCR_RCB14_0_Val << MATRIX_MRCR_RCB14_Pos)   /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB14_1                   (MATRIX_MRCR_RCB14_1_Val << MATRIX_MRCR_RCB14_Pos)   /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB15_Pos                 _U_(15)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 15 Position */
#define MATRIX_MRCR_RCB15_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB15_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 15 Mask */
#define MATRIX_MRCR_RCB15(value)              (MATRIX_MRCR_RCB15_Msk & ((value) << MATRIX_MRCR_RCB15_Pos))
#define   MATRIX_MRCR_RCB15_0_Val             _U_(0x0)                                             /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master.  */
#define   MATRIX_MRCR_RCB15_1_Val             _U_(0x1)                                             /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master.  */
#define MATRIX_MRCR_RCB15_0                   (MATRIX_MRCR_RCB15_0_Val << MATRIX_MRCR_RCB15_Pos)   /**< (MATRIX_MRCR) Disables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_RCB15_1                   (MATRIX_MRCR_RCB15_1_Val << MATRIX_MRCR_RCB15_Pos)   /**< (MATRIX_MRCR) Enables remapped address decoding for the selected Master. Position  */
#define MATRIX_MRCR_Msk                       _U_(0x0000FFFF)                                      /**< (MATRIX_MRCR) Register Mask  */

#define MATRIX_MRCR_RCB_Pos                   _U_(0)                                               /**< (MATRIX_MRCR Position) Remap Command Bit for Master x5 */
#define MATRIX_MRCR_RCB_Msk                   (_U_(0xFFFF) << MATRIX_MRCR_RCB_Pos)                 /**< (MATRIX_MRCR Mask) RCB */
#define MATRIX_MRCR_RCB(value)                (MATRIX_MRCR_RCB_Msk & ((value) << MATRIX_MRCR_RCB_Pos)) 

/* -------- MATRIX_MEIER : (MATRIX Offset: 0x150) ( /W 32) Master Error Interrupt Enable Register -------- */
#define MATRIX_MEIER_MERR0_Pos                _U_(0)                                               /**< (MATRIX_MEIER) Master 0 Access Error Position */
#define MATRIX_MEIER_MERR0_Msk                (_U_(0x1) << MATRIX_MEIER_MERR0_Pos)                 /**< (MATRIX_MEIER) Master 0 Access Error Mask */
#define MATRIX_MEIER_MERR0(value)             (MATRIX_MEIER_MERR0_Msk & ((value) << MATRIX_MEIER_MERR0_Pos))
#define   MATRIX_MEIER_MERR0_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR0_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR0_0                  (MATRIX_MEIER_MERR0_0_Val << MATRIX_MEIER_MERR0_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR0_1                  (MATRIX_MEIER_MERR0_1_Val << MATRIX_MEIER_MERR0_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR1_Pos                _U_(1)                                               /**< (MATRIX_MEIER) Master 1 Access Error Position */
#define MATRIX_MEIER_MERR1_Msk                (_U_(0x1) << MATRIX_MEIER_MERR1_Pos)                 /**< (MATRIX_MEIER) Master 1 Access Error Mask */
#define MATRIX_MEIER_MERR1(value)             (MATRIX_MEIER_MERR1_Msk & ((value) << MATRIX_MEIER_MERR1_Pos))
#define   MATRIX_MEIER_MERR1_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR1_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR1_0                  (MATRIX_MEIER_MERR1_0_Val << MATRIX_MEIER_MERR1_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR1_1                  (MATRIX_MEIER_MERR1_1_Val << MATRIX_MEIER_MERR1_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR2_Pos                _U_(2)                                               /**< (MATRIX_MEIER) Master 2 Access Error Position */
#define MATRIX_MEIER_MERR2_Msk                (_U_(0x1) << MATRIX_MEIER_MERR2_Pos)                 /**< (MATRIX_MEIER) Master 2 Access Error Mask */
#define MATRIX_MEIER_MERR2(value)             (MATRIX_MEIER_MERR2_Msk & ((value) << MATRIX_MEIER_MERR2_Pos))
#define   MATRIX_MEIER_MERR2_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR2_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR2_0                  (MATRIX_MEIER_MERR2_0_Val << MATRIX_MEIER_MERR2_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR2_1                  (MATRIX_MEIER_MERR2_1_Val << MATRIX_MEIER_MERR2_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR3_Pos                _U_(3)                                               /**< (MATRIX_MEIER) Master 3 Access Error Position */
#define MATRIX_MEIER_MERR3_Msk                (_U_(0x1) << MATRIX_MEIER_MERR3_Pos)                 /**< (MATRIX_MEIER) Master 3 Access Error Mask */
#define MATRIX_MEIER_MERR3(value)             (MATRIX_MEIER_MERR3_Msk & ((value) << MATRIX_MEIER_MERR3_Pos))
#define   MATRIX_MEIER_MERR3_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR3_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR3_0                  (MATRIX_MEIER_MERR3_0_Val << MATRIX_MEIER_MERR3_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR3_1                  (MATRIX_MEIER_MERR3_1_Val << MATRIX_MEIER_MERR3_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR4_Pos                _U_(4)                                               /**< (MATRIX_MEIER) Master 4 Access Error Position */
#define MATRIX_MEIER_MERR4_Msk                (_U_(0x1) << MATRIX_MEIER_MERR4_Pos)                 /**< (MATRIX_MEIER) Master 4 Access Error Mask */
#define MATRIX_MEIER_MERR4(value)             (MATRIX_MEIER_MERR4_Msk & ((value) << MATRIX_MEIER_MERR4_Pos))
#define   MATRIX_MEIER_MERR4_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR4_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR4_0                  (MATRIX_MEIER_MERR4_0_Val << MATRIX_MEIER_MERR4_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR4_1                  (MATRIX_MEIER_MERR4_1_Val << MATRIX_MEIER_MERR4_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR5_Pos                _U_(5)                                               /**< (MATRIX_MEIER) Master 5 Access Error Position */
#define MATRIX_MEIER_MERR5_Msk                (_U_(0x1) << MATRIX_MEIER_MERR5_Pos)                 /**< (MATRIX_MEIER) Master 5 Access Error Mask */
#define MATRIX_MEIER_MERR5(value)             (MATRIX_MEIER_MERR5_Msk & ((value) << MATRIX_MEIER_MERR5_Pos))
#define   MATRIX_MEIER_MERR5_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR5_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR5_0                  (MATRIX_MEIER_MERR5_0_Val << MATRIX_MEIER_MERR5_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR5_1                  (MATRIX_MEIER_MERR5_1_Val << MATRIX_MEIER_MERR5_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR6_Pos                _U_(6)                                               /**< (MATRIX_MEIER) Master 6 Access Error Position */
#define MATRIX_MEIER_MERR6_Msk                (_U_(0x1) << MATRIX_MEIER_MERR6_Pos)                 /**< (MATRIX_MEIER) Master 6 Access Error Mask */
#define MATRIX_MEIER_MERR6(value)             (MATRIX_MEIER_MERR6_Msk & ((value) << MATRIX_MEIER_MERR6_Pos))
#define   MATRIX_MEIER_MERR6_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR6_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR6_0                  (MATRIX_MEIER_MERR6_0_Val << MATRIX_MEIER_MERR6_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR6_1                  (MATRIX_MEIER_MERR6_1_Val << MATRIX_MEIER_MERR6_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR7_Pos                _U_(7)                                               /**< (MATRIX_MEIER) Master 7 Access Error Position */
#define MATRIX_MEIER_MERR7_Msk                (_U_(0x1) << MATRIX_MEIER_MERR7_Pos)                 /**< (MATRIX_MEIER) Master 7 Access Error Mask */
#define MATRIX_MEIER_MERR7(value)             (MATRIX_MEIER_MERR7_Msk & ((value) << MATRIX_MEIER_MERR7_Pos))
#define   MATRIX_MEIER_MERR7_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR7_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR7_0                  (MATRIX_MEIER_MERR7_0_Val << MATRIX_MEIER_MERR7_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR7_1                  (MATRIX_MEIER_MERR7_1_Val << MATRIX_MEIER_MERR7_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR8_Pos                _U_(8)                                               /**< (MATRIX_MEIER) Master 8 Access Error Position */
#define MATRIX_MEIER_MERR8_Msk                (_U_(0x1) << MATRIX_MEIER_MERR8_Pos)                 /**< (MATRIX_MEIER) Master 8 Access Error Mask */
#define MATRIX_MEIER_MERR8(value)             (MATRIX_MEIER_MERR8_Msk & ((value) << MATRIX_MEIER_MERR8_Pos))
#define   MATRIX_MEIER_MERR8_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR8_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR8_0                  (MATRIX_MEIER_MERR8_0_Val << MATRIX_MEIER_MERR8_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR8_1                  (MATRIX_MEIER_MERR8_1_Val << MATRIX_MEIER_MERR8_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR9_Pos                _U_(9)                                               /**< (MATRIX_MEIER) Master 9 Access Error Position */
#define MATRIX_MEIER_MERR9_Msk                (_U_(0x1) << MATRIX_MEIER_MERR9_Pos)                 /**< (MATRIX_MEIER) Master 9 Access Error Mask */
#define MATRIX_MEIER_MERR9(value)             (MATRIX_MEIER_MERR9_Msk & ((value) << MATRIX_MEIER_MERR9_Pos))
#define   MATRIX_MEIER_MERR9_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR9_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR9_0                  (MATRIX_MEIER_MERR9_0_Val << MATRIX_MEIER_MERR9_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR9_1                  (MATRIX_MEIER_MERR9_1_Val << MATRIX_MEIER_MERR9_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR10_Pos               _U_(10)                                              /**< (MATRIX_MEIER) Master 10 Access Error Position */
#define MATRIX_MEIER_MERR10_Msk               (_U_(0x1) << MATRIX_MEIER_MERR10_Pos)                /**< (MATRIX_MEIER) Master 10 Access Error Mask */
#define MATRIX_MEIER_MERR10(value)            (MATRIX_MEIER_MERR10_Msk & ((value) << MATRIX_MEIER_MERR10_Pos))
#define   MATRIX_MEIER_MERR10_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR10_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR10_0                 (MATRIX_MEIER_MERR10_0_Val << MATRIX_MEIER_MERR10_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR10_1                 (MATRIX_MEIER_MERR10_1_Val << MATRIX_MEIER_MERR10_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR11_Pos               _U_(11)                                              /**< (MATRIX_MEIER) Master 11 Access Error Position */
#define MATRIX_MEIER_MERR11_Msk               (_U_(0x1) << MATRIX_MEIER_MERR11_Pos)                /**< (MATRIX_MEIER) Master 11 Access Error Mask */
#define MATRIX_MEIER_MERR11(value)            (MATRIX_MEIER_MERR11_Msk & ((value) << MATRIX_MEIER_MERR11_Pos))
#define   MATRIX_MEIER_MERR11_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR11_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR11_0                 (MATRIX_MEIER_MERR11_0_Val << MATRIX_MEIER_MERR11_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR11_1                 (MATRIX_MEIER_MERR11_1_Val << MATRIX_MEIER_MERR11_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR12_Pos               _U_(12)                                              /**< (MATRIX_MEIER) Master 12 Access Error Position */
#define MATRIX_MEIER_MERR12_Msk               (_U_(0x1) << MATRIX_MEIER_MERR12_Pos)                /**< (MATRIX_MEIER) Master 12 Access Error Mask */
#define MATRIX_MEIER_MERR12(value)            (MATRIX_MEIER_MERR12_Msk & ((value) << MATRIX_MEIER_MERR12_Pos))
#define   MATRIX_MEIER_MERR12_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR12_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR12_0                 (MATRIX_MEIER_MERR12_0_Val << MATRIX_MEIER_MERR12_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR12_1                 (MATRIX_MEIER_MERR12_1_Val << MATRIX_MEIER_MERR12_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR13_Pos               _U_(13)                                              /**< (MATRIX_MEIER) Master 13 Access Error Position */
#define MATRIX_MEIER_MERR13_Msk               (_U_(0x1) << MATRIX_MEIER_MERR13_Pos)                /**< (MATRIX_MEIER) Master 13 Access Error Mask */
#define MATRIX_MEIER_MERR13(value)            (MATRIX_MEIER_MERR13_Msk & ((value) << MATRIX_MEIER_MERR13_Pos))
#define   MATRIX_MEIER_MERR13_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR13_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR13_0                 (MATRIX_MEIER_MERR13_0_Val << MATRIX_MEIER_MERR13_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR13_1                 (MATRIX_MEIER_MERR13_1_Val << MATRIX_MEIER_MERR13_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR14_Pos               _U_(14)                                              /**< (MATRIX_MEIER) Master 14 Access Error Position */
#define MATRIX_MEIER_MERR14_Msk               (_U_(0x1) << MATRIX_MEIER_MERR14_Pos)                /**< (MATRIX_MEIER) Master 14 Access Error Mask */
#define MATRIX_MEIER_MERR14(value)            (MATRIX_MEIER_MERR14_Msk & ((value) << MATRIX_MEIER_MERR14_Pos))
#define   MATRIX_MEIER_MERR14_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR14_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR14_0                 (MATRIX_MEIER_MERR14_0_Val << MATRIX_MEIER_MERR14_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR14_1                 (MATRIX_MEIER_MERR14_1_Val << MATRIX_MEIER_MERR14_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_MERR15_Pos               _U_(15)                                              /**< (MATRIX_MEIER) Master 15 Access Error Position */
#define MATRIX_MEIER_MERR15_Msk               (_U_(0x1) << MATRIX_MEIER_MERR15_Pos)                /**< (MATRIX_MEIER) Master 15 Access Error Mask */
#define MATRIX_MEIER_MERR15(value)            (MATRIX_MEIER_MERR15_Msk & ((value) << MATRIX_MEIER_MERR15_Pos))
#define   MATRIX_MEIER_MERR15_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR15_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR15_0                 (MATRIX_MEIER_MERR15_0_Val << MATRIX_MEIER_MERR15_Pos) /**< (MATRIX_MEIER) No effect. Position  */
#define MATRIX_MEIER_MERR15_1                 (MATRIX_MEIER_MERR15_1_Val << MATRIX_MEIER_MERR15_Pos) /**< (MATRIX_MEIER) Enables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIER_Msk                      _U_(0x0000FFFF)                                      /**< (MATRIX_MEIER) Register Mask  */

#define MATRIX_MEIER_MERR_Pos                 _U_(0)                                               /**< (MATRIX_MEIER Position) Master x5 Access Error */
#define MATRIX_MEIER_MERR_Msk                 (_U_(0xFFFF) << MATRIX_MEIER_MERR_Pos)               /**< (MATRIX_MEIER Mask) MERR */
#define MATRIX_MEIER_MERR(value)              (MATRIX_MEIER_MERR_Msk & ((value) << MATRIX_MEIER_MERR_Pos)) 

/* -------- MATRIX_MEIDR : (MATRIX Offset: 0x154) ( /W 32) Master Error Interrupt Disable Register -------- */
#define MATRIX_MEIDR_MERR0_Pos                _U_(0)                                               /**< (MATRIX_MEIDR) Master 0 Access Error Position */
#define MATRIX_MEIDR_MERR0_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR0_Pos)                 /**< (MATRIX_MEIDR) Master 0 Access Error Mask */
#define MATRIX_MEIDR_MERR0(value)             (MATRIX_MEIDR_MERR0_Msk & ((value) << MATRIX_MEIDR_MERR0_Pos))
#define   MATRIX_MEIDR_MERR0_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR0_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR0_0                  (MATRIX_MEIDR_MERR0_0_Val << MATRIX_MEIDR_MERR0_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR0_1                  (MATRIX_MEIDR_MERR0_1_Val << MATRIX_MEIDR_MERR0_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR1_Pos                _U_(1)                                               /**< (MATRIX_MEIDR) Master 1 Access Error Position */
#define MATRIX_MEIDR_MERR1_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR1_Pos)                 /**< (MATRIX_MEIDR) Master 1 Access Error Mask */
#define MATRIX_MEIDR_MERR1(value)             (MATRIX_MEIDR_MERR1_Msk & ((value) << MATRIX_MEIDR_MERR1_Pos))
#define   MATRIX_MEIDR_MERR1_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR1_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR1_0                  (MATRIX_MEIDR_MERR1_0_Val << MATRIX_MEIDR_MERR1_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR1_1                  (MATRIX_MEIDR_MERR1_1_Val << MATRIX_MEIDR_MERR1_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR2_Pos                _U_(2)                                               /**< (MATRIX_MEIDR) Master 2 Access Error Position */
#define MATRIX_MEIDR_MERR2_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR2_Pos)                 /**< (MATRIX_MEIDR) Master 2 Access Error Mask */
#define MATRIX_MEIDR_MERR2(value)             (MATRIX_MEIDR_MERR2_Msk & ((value) << MATRIX_MEIDR_MERR2_Pos))
#define   MATRIX_MEIDR_MERR2_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR2_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR2_0                  (MATRIX_MEIDR_MERR2_0_Val << MATRIX_MEIDR_MERR2_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR2_1                  (MATRIX_MEIDR_MERR2_1_Val << MATRIX_MEIDR_MERR2_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR3_Pos                _U_(3)                                               /**< (MATRIX_MEIDR) Master 3 Access Error Position */
#define MATRIX_MEIDR_MERR3_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR3_Pos)                 /**< (MATRIX_MEIDR) Master 3 Access Error Mask */
#define MATRIX_MEIDR_MERR3(value)             (MATRIX_MEIDR_MERR3_Msk & ((value) << MATRIX_MEIDR_MERR3_Pos))
#define   MATRIX_MEIDR_MERR3_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR3_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR3_0                  (MATRIX_MEIDR_MERR3_0_Val << MATRIX_MEIDR_MERR3_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR3_1                  (MATRIX_MEIDR_MERR3_1_Val << MATRIX_MEIDR_MERR3_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR4_Pos                _U_(4)                                               /**< (MATRIX_MEIDR) Master 4 Access Error Position */
#define MATRIX_MEIDR_MERR4_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR4_Pos)                 /**< (MATRIX_MEIDR) Master 4 Access Error Mask */
#define MATRIX_MEIDR_MERR4(value)             (MATRIX_MEIDR_MERR4_Msk & ((value) << MATRIX_MEIDR_MERR4_Pos))
#define   MATRIX_MEIDR_MERR4_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR4_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR4_0                  (MATRIX_MEIDR_MERR4_0_Val << MATRIX_MEIDR_MERR4_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR4_1                  (MATRIX_MEIDR_MERR4_1_Val << MATRIX_MEIDR_MERR4_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR5_Pos                _U_(5)                                               /**< (MATRIX_MEIDR) Master 5 Access Error Position */
#define MATRIX_MEIDR_MERR5_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR5_Pos)                 /**< (MATRIX_MEIDR) Master 5 Access Error Mask */
#define MATRIX_MEIDR_MERR5(value)             (MATRIX_MEIDR_MERR5_Msk & ((value) << MATRIX_MEIDR_MERR5_Pos))
#define   MATRIX_MEIDR_MERR5_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR5_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR5_0                  (MATRIX_MEIDR_MERR5_0_Val << MATRIX_MEIDR_MERR5_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR5_1                  (MATRIX_MEIDR_MERR5_1_Val << MATRIX_MEIDR_MERR5_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR6_Pos                _U_(6)                                               /**< (MATRIX_MEIDR) Master 6 Access Error Position */
#define MATRIX_MEIDR_MERR6_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR6_Pos)                 /**< (MATRIX_MEIDR) Master 6 Access Error Mask */
#define MATRIX_MEIDR_MERR6(value)             (MATRIX_MEIDR_MERR6_Msk & ((value) << MATRIX_MEIDR_MERR6_Pos))
#define   MATRIX_MEIDR_MERR6_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR6_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR6_0                  (MATRIX_MEIDR_MERR6_0_Val << MATRIX_MEIDR_MERR6_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR6_1                  (MATRIX_MEIDR_MERR6_1_Val << MATRIX_MEIDR_MERR6_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR7_Pos                _U_(7)                                               /**< (MATRIX_MEIDR) Master 7 Access Error Position */
#define MATRIX_MEIDR_MERR7_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR7_Pos)                 /**< (MATRIX_MEIDR) Master 7 Access Error Mask */
#define MATRIX_MEIDR_MERR7(value)             (MATRIX_MEIDR_MERR7_Msk & ((value) << MATRIX_MEIDR_MERR7_Pos))
#define   MATRIX_MEIDR_MERR7_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR7_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR7_0                  (MATRIX_MEIDR_MERR7_0_Val << MATRIX_MEIDR_MERR7_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR7_1                  (MATRIX_MEIDR_MERR7_1_Val << MATRIX_MEIDR_MERR7_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR8_Pos                _U_(8)                                               /**< (MATRIX_MEIDR) Master 8 Access Error Position */
#define MATRIX_MEIDR_MERR8_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR8_Pos)                 /**< (MATRIX_MEIDR) Master 8 Access Error Mask */
#define MATRIX_MEIDR_MERR8(value)             (MATRIX_MEIDR_MERR8_Msk & ((value) << MATRIX_MEIDR_MERR8_Pos))
#define   MATRIX_MEIDR_MERR8_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR8_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR8_0                  (MATRIX_MEIDR_MERR8_0_Val << MATRIX_MEIDR_MERR8_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR8_1                  (MATRIX_MEIDR_MERR8_1_Val << MATRIX_MEIDR_MERR8_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR9_Pos                _U_(9)                                               /**< (MATRIX_MEIDR) Master 9 Access Error Position */
#define MATRIX_MEIDR_MERR9_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR9_Pos)                 /**< (MATRIX_MEIDR) Master 9 Access Error Mask */
#define MATRIX_MEIDR_MERR9(value)             (MATRIX_MEIDR_MERR9_Msk & ((value) << MATRIX_MEIDR_MERR9_Pos))
#define   MATRIX_MEIDR_MERR9_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR9_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR9_0                  (MATRIX_MEIDR_MERR9_0_Val << MATRIX_MEIDR_MERR9_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR9_1                  (MATRIX_MEIDR_MERR9_1_Val << MATRIX_MEIDR_MERR9_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR10_Pos               _U_(10)                                              /**< (MATRIX_MEIDR) Master 10 Access Error Position */
#define MATRIX_MEIDR_MERR10_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR10_Pos)                /**< (MATRIX_MEIDR) Master 10 Access Error Mask */
#define MATRIX_MEIDR_MERR10(value)            (MATRIX_MEIDR_MERR10_Msk & ((value) << MATRIX_MEIDR_MERR10_Pos))
#define   MATRIX_MEIDR_MERR10_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR10_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR10_0                 (MATRIX_MEIDR_MERR10_0_Val << MATRIX_MEIDR_MERR10_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR10_1                 (MATRIX_MEIDR_MERR10_1_Val << MATRIX_MEIDR_MERR10_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR11_Pos               _U_(11)                                              /**< (MATRIX_MEIDR) Master 11 Access Error Position */
#define MATRIX_MEIDR_MERR11_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR11_Pos)                /**< (MATRIX_MEIDR) Master 11 Access Error Mask */
#define MATRIX_MEIDR_MERR11(value)            (MATRIX_MEIDR_MERR11_Msk & ((value) << MATRIX_MEIDR_MERR11_Pos))
#define   MATRIX_MEIDR_MERR11_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR11_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR11_0                 (MATRIX_MEIDR_MERR11_0_Val << MATRIX_MEIDR_MERR11_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR11_1                 (MATRIX_MEIDR_MERR11_1_Val << MATRIX_MEIDR_MERR11_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR12_Pos               _U_(12)                                              /**< (MATRIX_MEIDR) Master 12 Access Error Position */
#define MATRIX_MEIDR_MERR12_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR12_Pos)                /**< (MATRIX_MEIDR) Master 12 Access Error Mask */
#define MATRIX_MEIDR_MERR12(value)            (MATRIX_MEIDR_MERR12_Msk & ((value) << MATRIX_MEIDR_MERR12_Pos))
#define   MATRIX_MEIDR_MERR12_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR12_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR12_0                 (MATRIX_MEIDR_MERR12_0_Val << MATRIX_MEIDR_MERR12_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR12_1                 (MATRIX_MEIDR_MERR12_1_Val << MATRIX_MEIDR_MERR12_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR13_Pos               _U_(13)                                              /**< (MATRIX_MEIDR) Master 13 Access Error Position */
#define MATRIX_MEIDR_MERR13_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR13_Pos)                /**< (MATRIX_MEIDR) Master 13 Access Error Mask */
#define MATRIX_MEIDR_MERR13(value)            (MATRIX_MEIDR_MERR13_Msk & ((value) << MATRIX_MEIDR_MERR13_Pos))
#define   MATRIX_MEIDR_MERR13_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR13_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR13_0                 (MATRIX_MEIDR_MERR13_0_Val << MATRIX_MEIDR_MERR13_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR13_1                 (MATRIX_MEIDR_MERR13_1_Val << MATRIX_MEIDR_MERR13_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR14_Pos               _U_(14)                                              /**< (MATRIX_MEIDR) Master 14 Access Error Position */
#define MATRIX_MEIDR_MERR14_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR14_Pos)                /**< (MATRIX_MEIDR) Master 14 Access Error Mask */
#define MATRIX_MEIDR_MERR14(value)            (MATRIX_MEIDR_MERR14_Msk & ((value) << MATRIX_MEIDR_MERR14_Pos))
#define   MATRIX_MEIDR_MERR14_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR14_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR14_0                 (MATRIX_MEIDR_MERR14_0_Val << MATRIX_MEIDR_MERR14_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR14_1                 (MATRIX_MEIDR_MERR14_1_Val << MATRIX_MEIDR_MERR14_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_MERR15_Pos               _U_(15)                                              /**< (MATRIX_MEIDR) Master 15 Access Error Position */
#define MATRIX_MEIDR_MERR15_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR15_Pos)                /**< (MATRIX_MEIDR) Master 15 Access Error Mask */
#define MATRIX_MEIDR_MERR15(value)            (MATRIX_MEIDR_MERR15_Msk & ((value) << MATRIX_MEIDR_MERR15_Pos))
#define   MATRIX_MEIDR_MERR15_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR15_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR15_0                 (MATRIX_MEIDR_MERR15_0_Val << MATRIX_MEIDR_MERR15_Pos) /**< (MATRIX_MEIDR) No effect. Position  */
#define MATRIX_MEIDR_MERR15_1                 (MATRIX_MEIDR_MERR15_1_Val << MATRIX_MEIDR_MERR15_Pos) /**< (MATRIX_MEIDR) Disables Master x Access Error interrupt source. Position  */
#define MATRIX_MEIDR_Msk                      _U_(0x0000FFFF)                                      /**< (MATRIX_MEIDR) Register Mask  */

#define MATRIX_MEIDR_MERR_Pos                 _U_(0)                                               /**< (MATRIX_MEIDR Position) Master x5 Access Error */
#define MATRIX_MEIDR_MERR_Msk                 (_U_(0xFFFF) << MATRIX_MEIDR_MERR_Pos)               /**< (MATRIX_MEIDR Mask) MERR */
#define MATRIX_MEIDR_MERR(value)              (MATRIX_MEIDR_MERR_Msk & ((value) << MATRIX_MEIDR_MERR_Pos)) 

/* -------- MATRIX_MEIMR : (MATRIX Offset: 0x158) ( R/ 32) Master Error Interrupt Mask Register -------- */
#define MATRIX_MEIMR_RESETVALUE               _U_(0x00)                                            /**<  (MATRIX_MEIMR) Master Error Interrupt Mask Register  Reset Value */

#define MATRIX_MEIMR_MERR0_Pos                _U_(0)                                               /**< (MATRIX_MEIMR) Master 0 Access Error Position */
#define MATRIX_MEIMR_MERR0_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR0_Pos)                 /**< (MATRIX_MEIMR) Master 0 Access Error Mask */
#define MATRIX_MEIMR_MERR0(value)             (MATRIX_MEIMR_MERR0_Msk & ((value) << MATRIX_MEIMR_MERR0_Pos))
#define   MATRIX_MEIMR_MERR0_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR0_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR0_0                  (MATRIX_MEIMR_MERR0_0_Val << MATRIX_MEIMR_MERR0_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR0_1                  (MATRIX_MEIMR_MERR0_1_Val << MATRIX_MEIMR_MERR0_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR1_Pos                _U_(1)                                               /**< (MATRIX_MEIMR) Master 1 Access Error Position */
#define MATRIX_MEIMR_MERR1_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR1_Pos)                 /**< (MATRIX_MEIMR) Master 1 Access Error Mask */
#define MATRIX_MEIMR_MERR1(value)             (MATRIX_MEIMR_MERR1_Msk & ((value) << MATRIX_MEIMR_MERR1_Pos))
#define   MATRIX_MEIMR_MERR1_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR1_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR1_0                  (MATRIX_MEIMR_MERR1_0_Val << MATRIX_MEIMR_MERR1_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR1_1                  (MATRIX_MEIMR_MERR1_1_Val << MATRIX_MEIMR_MERR1_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR2_Pos                _U_(2)                                               /**< (MATRIX_MEIMR) Master 2 Access Error Position */
#define MATRIX_MEIMR_MERR2_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR2_Pos)                 /**< (MATRIX_MEIMR) Master 2 Access Error Mask */
#define MATRIX_MEIMR_MERR2(value)             (MATRIX_MEIMR_MERR2_Msk & ((value) << MATRIX_MEIMR_MERR2_Pos))
#define   MATRIX_MEIMR_MERR2_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR2_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR2_0                  (MATRIX_MEIMR_MERR2_0_Val << MATRIX_MEIMR_MERR2_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR2_1                  (MATRIX_MEIMR_MERR2_1_Val << MATRIX_MEIMR_MERR2_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR3_Pos                _U_(3)                                               /**< (MATRIX_MEIMR) Master 3 Access Error Position */
#define MATRIX_MEIMR_MERR3_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR3_Pos)                 /**< (MATRIX_MEIMR) Master 3 Access Error Mask */
#define MATRIX_MEIMR_MERR3(value)             (MATRIX_MEIMR_MERR3_Msk & ((value) << MATRIX_MEIMR_MERR3_Pos))
#define   MATRIX_MEIMR_MERR3_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR3_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR3_0                  (MATRIX_MEIMR_MERR3_0_Val << MATRIX_MEIMR_MERR3_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR3_1                  (MATRIX_MEIMR_MERR3_1_Val << MATRIX_MEIMR_MERR3_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR4_Pos                _U_(4)                                               /**< (MATRIX_MEIMR) Master 4 Access Error Position */
#define MATRIX_MEIMR_MERR4_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR4_Pos)                 /**< (MATRIX_MEIMR) Master 4 Access Error Mask */
#define MATRIX_MEIMR_MERR4(value)             (MATRIX_MEIMR_MERR4_Msk & ((value) << MATRIX_MEIMR_MERR4_Pos))
#define   MATRIX_MEIMR_MERR4_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR4_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR4_0                  (MATRIX_MEIMR_MERR4_0_Val << MATRIX_MEIMR_MERR4_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR4_1                  (MATRIX_MEIMR_MERR4_1_Val << MATRIX_MEIMR_MERR4_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR5_Pos                _U_(5)                                               /**< (MATRIX_MEIMR) Master 5 Access Error Position */
#define MATRIX_MEIMR_MERR5_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR5_Pos)                 /**< (MATRIX_MEIMR) Master 5 Access Error Mask */
#define MATRIX_MEIMR_MERR5(value)             (MATRIX_MEIMR_MERR5_Msk & ((value) << MATRIX_MEIMR_MERR5_Pos))
#define   MATRIX_MEIMR_MERR5_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR5_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR5_0                  (MATRIX_MEIMR_MERR5_0_Val << MATRIX_MEIMR_MERR5_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR5_1                  (MATRIX_MEIMR_MERR5_1_Val << MATRIX_MEIMR_MERR5_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR6_Pos                _U_(6)                                               /**< (MATRIX_MEIMR) Master 6 Access Error Position */
#define MATRIX_MEIMR_MERR6_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR6_Pos)                 /**< (MATRIX_MEIMR) Master 6 Access Error Mask */
#define MATRIX_MEIMR_MERR6(value)             (MATRIX_MEIMR_MERR6_Msk & ((value) << MATRIX_MEIMR_MERR6_Pos))
#define   MATRIX_MEIMR_MERR6_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR6_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR6_0                  (MATRIX_MEIMR_MERR6_0_Val << MATRIX_MEIMR_MERR6_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR6_1                  (MATRIX_MEIMR_MERR6_1_Val << MATRIX_MEIMR_MERR6_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR7_Pos                _U_(7)                                               /**< (MATRIX_MEIMR) Master 7 Access Error Position */
#define MATRIX_MEIMR_MERR7_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR7_Pos)                 /**< (MATRIX_MEIMR) Master 7 Access Error Mask */
#define MATRIX_MEIMR_MERR7(value)             (MATRIX_MEIMR_MERR7_Msk & ((value) << MATRIX_MEIMR_MERR7_Pos))
#define   MATRIX_MEIMR_MERR7_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR7_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR7_0                  (MATRIX_MEIMR_MERR7_0_Val << MATRIX_MEIMR_MERR7_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR7_1                  (MATRIX_MEIMR_MERR7_1_Val << MATRIX_MEIMR_MERR7_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR8_Pos                _U_(8)                                               /**< (MATRIX_MEIMR) Master 8 Access Error Position */
#define MATRIX_MEIMR_MERR8_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR8_Pos)                 /**< (MATRIX_MEIMR) Master 8 Access Error Mask */
#define MATRIX_MEIMR_MERR8(value)             (MATRIX_MEIMR_MERR8_Msk & ((value) << MATRIX_MEIMR_MERR8_Pos))
#define   MATRIX_MEIMR_MERR8_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR8_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR8_0                  (MATRIX_MEIMR_MERR8_0_Val << MATRIX_MEIMR_MERR8_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR8_1                  (MATRIX_MEIMR_MERR8_1_Val << MATRIX_MEIMR_MERR8_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR9_Pos                _U_(9)                                               /**< (MATRIX_MEIMR) Master 9 Access Error Position */
#define MATRIX_MEIMR_MERR9_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR9_Pos)                 /**< (MATRIX_MEIMR) Master 9 Access Error Mask */
#define MATRIX_MEIMR_MERR9(value)             (MATRIX_MEIMR_MERR9_Msk & ((value) << MATRIX_MEIMR_MERR9_Pos))
#define   MATRIX_MEIMR_MERR9_0_Val            _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR9_1_Val            _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR9_0                  (MATRIX_MEIMR_MERR9_0_Val << MATRIX_MEIMR_MERR9_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR9_1                  (MATRIX_MEIMR_MERR9_1_Val << MATRIX_MEIMR_MERR9_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR10_Pos               _U_(10)                                              /**< (MATRIX_MEIMR) Master 10 Access Error Position */
#define MATRIX_MEIMR_MERR10_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR10_Pos)                /**< (MATRIX_MEIMR) Master 10 Access Error Mask */
#define MATRIX_MEIMR_MERR10(value)            (MATRIX_MEIMR_MERR10_Msk & ((value) << MATRIX_MEIMR_MERR10_Pos))
#define   MATRIX_MEIMR_MERR10_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR10_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR10_0                 (MATRIX_MEIMR_MERR10_0_Val << MATRIX_MEIMR_MERR10_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR10_1                 (MATRIX_MEIMR_MERR10_1_Val << MATRIX_MEIMR_MERR10_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR11_Pos               _U_(11)                                              /**< (MATRIX_MEIMR) Master 11 Access Error Position */
#define MATRIX_MEIMR_MERR11_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR11_Pos)                /**< (MATRIX_MEIMR) Master 11 Access Error Mask */
#define MATRIX_MEIMR_MERR11(value)            (MATRIX_MEIMR_MERR11_Msk & ((value) << MATRIX_MEIMR_MERR11_Pos))
#define   MATRIX_MEIMR_MERR11_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR11_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR11_0                 (MATRIX_MEIMR_MERR11_0_Val << MATRIX_MEIMR_MERR11_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR11_1                 (MATRIX_MEIMR_MERR11_1_Val << MATRIX_MEIMR_MERR11_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR12_Pos               _U_(12)                                              /**< (MATRIX_MEIMR) Master 12 Access Error Position */
#define MATRIX_MEIMR_MERR12_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR12_Pos)                /**< (MATRIX_MEIMR) Master 12 Access Error Mask */
#define MATRIX_MEIMR_MERR12(value)            (MATRIX_MEIMR_MERR12_Msk & ((value) << MATRIX_MEIMR_MERR12_Pos))
#define   MATRIX_MEIMR_MERR12_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR12_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR12_0                 (MATRIX_MEIMR_MERR12_0_Val << MATRIX_MEIMR_MERR12_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR12_1                 (MATRIX_MEIMR_MERR12_1_Val << MATRIX_MEIMR_MERR12_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR13_Pos               _U_(13)                                              /**< (MATRIX_MEIMR) Master 13 Access Error Position */
#define MATRIX_MEIMR_MERR13_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR13_Pos)                /**< (MATRIX_MEIMR) Master 13 Access Error Mask */
#define MATRIX_MEIMR_MERR13(value)            (MATRIX_MEIMR_MERR13_Msk & ((value) << MATRIX_MEIMR_MERR13_Pos))
#define   MATRIX_MEIMR_MERR13_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR13_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR13_0                 (MATRIX_MEIMR_MERR13_0_Val << MATRIX_MEIMR_MERR13_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR13_1                 (MATRIX_MEIMR_MERR13_1_Val << MATRIX_MEIMR_MERR13_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR14_Pos               _U_(14)                                              /**< (MATRIX_MEIMR) Master 14 Access Error Position */
#define MATRIX_MEIMR_MERR14_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR14_Pos)                /**< (MATRIX_MEIMR) Master 14 Access Error Mask */
#define MATRIX_MEIMR_MERR14(value)            (MATRIX_MEIMR_MERR14_Msk & ((value) << MATRIX_MEIMR_MERR14_Pos))
#define   MATRIX_MEIMR_MERR14_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR14_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR14_0                 (MATRIX_MEIMR_MERR14_0_Val << MATRIX_MEIMR_MERR14_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR14_1                 (MATRIX_MEIMR_MERR14_1_Val << MATRIX_MEIMR_MERR14_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_MERR15_Pos               _U_(15)                                              /**< (MATRIX_MEIMR) Master 15 Access Error Position */
#define MATRIX_MEIMR_MERR15_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR15_Pos)                /**< (MATRIX_MEIMR) Master 15 Access Error Mask */
#define MATRIX_MEIMR_MERR15(value)            (MATRIX_MEIMR_MERR15_Msk & ((value) << MATRIX_MEIMR_MERR15_Pos))
#define   MATRIX_MEIMR_MERR15_0_Val           _U_(0x0)                                             /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR15_1_Val           _U_(0x1)                                             /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR15_0                 (MATRIX_MEIMR_MERR15_0_Val << MATRIX_MEIMR_MERR15_Pos) /**< (MATRIX_MEIMR) Master x Access Error does not trigger any interrupt. Position  */
#define MATRIX_MEIMR_MERR15_1                 (MATRIX_MEIMR_MERR15_1_Val << MATRIX_MEIMR_MERR15_Pos) /**< (MATRIX_MEIMR) Master x Access Error triggers the MATRIX interrupt line. Position  */
#define MATRIX_MEIMR_Msk                      _U_(0x0000FFFF)                                      /**< (MATRIX_MEIMR) Register Mask  */

#define MATRIX_MEIMR_MERR_Pos                 _U_(0)                                               /**< (MATRIX_MEIMR Position) Master x5 Access Error */
#define MATRIX_MEIMR_MERR_Msk                 (_U_(0xFFFF) << MATRIX_MEIMR_MERR_Pos)               /**< (MATRIX_MEIMR Mask) MERR */
#define MATRIX_MEIMR_MERR(value)              (MATRIX_MEIMR_MERR_Msk & ((value) << MATRIX_MEIMR_MERR_Pos)) 

/* -------- MATRIX_MESR : (MATRIX Offset: 0x15C) ( R/ 32) Master Error Status Register -------- */
#define MATRIX_MESR_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_MESR) Master Error Status Register  Reset Value */

#define MATRIX_MESR_MERR0_Pos                 _U_(0)                                               /**< (MATRIX_MESR) Master 0 Access Error Position */
#define MATRIX_MESR_MERR0_Msk                 (_U_(0x1) << MATRIX_MESR_MERR0_Pos)                  /**< (MATRIX_MESR) Master 0 Access Error Mask */
#define MATRIX_MESR_MERR0(value)              (MATRIX_MESR_MERR0_Msk & ((value) << MATRIX_MESR_MERR0_Pos))
#define   MATRIX_MESR_MERR0_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR0_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR0_0                   (MATRIX_MESR_MERR0_0_Val << MATRIX_MESR_MERR0_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR0_1                   (MATRIX_MESR_MERR0_1_Val << MATRIX_MESR_MERR0_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR1_Pos                 _U_(1)                                               /**< (MATRIX_MESR) Master 1 Access Error Position */
#define MATRIX_MESR_MERR1_Msk                 (_U_(0x1) << MATRIX_MESR_MERR1_Pos)                  /**< (MATRIX_MESR) Master 1 Access Error Mask */
#define MATRIX_MESR_MERR1(value)              (MATRIX_MESR_MERR1_Msk & ((value) << MATRIX_MESR_MERR1_Pos))
#define   MATRIX_MESR_MERR1_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR1_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR1_0                   (MATRIX_MESR_MERR1_0_Val << MATRIX_MESR_MERR1_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR1_1                   (MATRIX_MESR_MERR1_1_Val << MATRIX_MESR_MERR1_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR2_Pos                 _U_(2)                                               /**< (MATRIX_MESR) Master 2 Access Error Position */
#define MATRIX_MESR_MERR2_Msk                 (_U_(0x1) << MATRIX_MESR_MERR2_Pos)                  /**< (MATRIX_MESR) Master 2 Access Error Mask */
#define MATRIX_MESR_MERR2(value)              (MATRIX_MESR_MERR2_Msk & ((value) << MATRIX_MESR_MERR2_Pos))
#define   MATRIX_MESR_MERR2_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR2_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR2_0                   (MATRIX_MESR_MERR2_0_Val << MATRIX_MESR_MERR2_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR2_1                   (MATRIX_MESR_MERR2_1_Val << MATRIX_MESR_MERR2_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR3_Pos                 _U_(3)                                               /**< (MATRIX_MESR) Master 3 Access Error Position */
#define MATRIX_MESR_MERR3_Msk                 (_U_(0x1) << MATRIX_MESR_MERR3_Pos)                  /**< (MATRIX_MESR) Master 3 Access Error Mask */
#define MATRIX_MESR_MERR3(value)              (MATRIX_MESR_MERR3_Msk & ((value) << MATRIX_MESR_MERR3_Pos))
#define   MATRIX_MESR_MERR3_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR3_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR3_0                   (MATRIX_MESR_MERR3_0_Val << MATRIX_MESR_MERR3_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR3_1                   (MATRIX_MESR_MERR3_1_Val << MATRIX_MESR_MERR3_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR4_Pos                 _U_(4)                                               /**< (MATRIX_MESR) Master 4 Access Error Position */
#define MATRIX_MESR_MERR4_Msk                 (_U_(0x1) << MATRIX_MESR_MERR4_Pos)                  /**< (MATRIX_MESR) Master 4 Access Error Mask */
#define MATRIX_MESR_MERR4(value)              (MATRIX_MESR_MERR4_Msk & ((value) << MATRIX_MESR_MERR4_Pos))
#define   MATRIX_MESR_MERR4_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR4_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR4_0                   (MATRIX_MESR_MERR4_0_Val << MATRIX_MESR_MERR4_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR4_1                   (MATRIX_MESR_MERR4_1_Val << MATRIX_MESR_MERR4_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR5_Pos                 _U_(5)                                               /**< (MATRIX_MESR) Master 5 Access Error Position */
#define MATRIX_MESR_MERR5_Msk                 (_U_(0x1) << MATRIX_MESR_MERR5_Pos)                  /**< (MATRIX_MESR) Master 5 Access Error Mask */
#define MATRIX_MESR_MERR5(value)              (MATRIX_MESR_MERR5_Msk & ((value) << MATRIX_MESR_MERR5_Pos))
#define   MATRIX_MESR_MERR5_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR5_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR5_0                   (MATRIX_MESR_MERR5_0_Val << MATRIX_MESR_MERR5_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR5_1                   (MATRIX_MESR_MERR5_1_Val << MATRIX_MESR_MERR5_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR6_Pos                 _U_(6)                                               /**< (MATRIX_MESR) Master 6 Access Error Position */
#define MATRIX_MESR_MERR6_Msk                 (_U_(0x1) << MATRIX_MESR_MERR6_Pos)                  /**< (MATRIX_MESR) Master 6 Access Error Mask */
#define MATRIX_MESR_MERR6(value)              (MATRIX_MESR_MERR6_Msk & ((value) << MATRIX_MESR_MERR6_Pos))
#define   MATRIX_MESR_MERR6_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR6_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR6_0                   (MATRIX_MESR_MERR6_0_Val << MATRIX_MESR_MERR6_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR6_1                   (MATRIX_MESR_MERR6_1_Val << MATRIX_MESR_MERR6_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR7_Pos                 _U_(7)                                               /**< (MATRIX_MESR) Master 7 Access Error Position */
#define MATRIX_MESR_MERR7_Msk                 (_U_(0x1) << MATRIX_MESR_MERR7_Pos)                  /**< (MATRIX_MESR) Master 7 Access Error Mask */
#define MATRIX_MESR_MERR7(value)              (MATRIX_MESR_MERR7_Msk & ((value) << MATRIX_MESR_MERR7_Pos))
#define   MATRIX_MESR_MERR7_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR7_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR7_0                   (MATRIX_MESR_MERR7_0_Val << MATRIX_MESR_MERR7_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR7_1                   (MATRIX_MESR_MERR7_1_Val << MATRIX_MESR_MERR7_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR8_Pos                 _U_(8)                                               /**< (MATRIX_MESR) Master 8 Access Error Position */
#define MATRIX_MESR_MERR8_Msk                 (_U_(0x1) << MATRIX_MESR_MERR8_Pos)                  /**< (MATRIX_MESR) Master 8 Access Error Mask */
#define MATRIX_MESR_MERR8(value)              (MATRIX_MESR_MERR8_Msk & ((value) << MATRIX_MESR_MERR8_Pos))
#define   MATRIX_MESR_MERR8_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR8_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR8_0                   (MATRIX_MESR_MERR8_0_Val << MATRIX_MESR_MERR8_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR8_1                   (MATRIX_MESR_MERR8_1_Val << MATRIX_MESR_MERR8_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR9_Pos                 _U_(9)                                               /**< (MATRIX_MESR) Master 9 Access Error Position */
#define MATRIX_MESR_MERR9_Msk                 (_U_(0x1) << MATRIX_MESR_MERR9_Pos)                  /**< (MATRIX_MESR) Master 9 Access Error Mask */
#define MATRIX_MESR_MERR9(value)              (MATRIX_MESR_MERR9_Msk & ((value) << MATRIX_MESR_MERR9_Pos))
#define   MATRIX_MESR_MERR9_0_Val             _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR9_1_Val             _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR9_0                   (MATRIX_MESR_MERR9_0_Val << MATRIX_MESR_MERR9_Pos)   /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR9_1                   (MATRIX_MESR_MERR9_1_Val << MATRIX_MESR_MERR9_Pos)   /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR10_Pos                _U_(10)                                              /**< (MATRIX_MESR) Master 10 Access Error Position */
#define MATRIX_MESR_MERR10_Msk                (_U_(0x1) << MATRIX_MESR_MERR10_Pos)                 /**< (MATRIX_MESR) Master 10 Access Error Mask */
#define MATRIX_MESR_MERR10(value)             (MATRIX_MESR_MERR10_Msk & ((value) << MATRIX_MESR_MERR10_Pos))
#define   MATRIX_MESR_MERR10_0_Val            _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR10_1_Val            _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR10_0                  (MATRIX_MESR_MERR10_0_Val << MATRIX_MESR_MERR10_Pos) /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR10_1                  (MATRIX_MESR_MERR10_1_Val << MATRIX_MESR_MERR10_Pos) /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR11_Pos                _U_(11)                                              /**< (MATRIX_MESR) Master 11 Access Error Position */
#define MATRIX_MESR_MERR11_Msk                (_U_(0x1) << MATRIX_MESR_MERR11_Pos)                 /**< (MATRIX_MESR) Master 11 Access Error Mask */
#define MATRIX_MESR_MERR11(value)             (MATRIX_MESR_MERR11_Msk & ((value) << MATRIX_MESR_MERR11_Pos))
#define   MATRIX_MESR_MERR11_0_Val            _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR11_1_Val            _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR11_0                  (MATRIX_MESR_MERR11_0_Val << MATRIX_MESR_MERR11_Pos) /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR11_1                  (MATRIX_MESR_MERR11_1_Val << MATRIX_MESR_MERR11_Pos) /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR12_Pos                _U_(12)                                              /**< (MATRIX_MESR) Master 12 Access Error Position */
#define MATRIX_MESR_MERR12_Msk                (_U_(0x1) << MATRIX_MESR_MERR12_Pos)                 /**< (MATRIX_MESR) Master 12 Access Error Mask */
#define MATRIX_MESR_MERR12(value)             (MATRIX_MESR_MERR12_Msk & ((value) << MATRIX_MESR_MERR12_Pos))
#define   MATRIX_MESR_MERR12_0_Val            _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR12_1_Val            _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR12_0                  (MATRIX_MESR_MERR12_0_Val << MATRIX_MESR_MERR12_Pos) /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR12_1                  (MATRIX_MESR_MERR12_1_Val << MATRIX_MESR_MERR12_Pos) /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR13_Pos                _U_(13)                                              /**< (MATRIX_MESR) Master 13 Access Error Position */
#define MATRIX_MESR_MERR13_Msk                (_U_(0x1) << MATRIX_MESR_MERR13_Pos)                 /**< (MATRIX_MESR) Master 13 Access Error Mask */
#define MATRIX_MESR_MERR13(value)             (MATRIX_MESR_MERR13_Msk & ((value) << MATRIX_MESR_MERR13_Pos))
#define   MATRIX_MESR_MERR13_0_Val            _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR13_1_Val            _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR13_0                  (MATRIX_MESR_MERR13_0_Val << MATRIX_MESR_MERR13_Pos) /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR13_1                  (MATRIX_MESR_MERR13_1_Val << MATRIX_MESR_MERR13_Pos) /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR14_Pos                _U_(14)                                              /**< (MATRIX_MESR) Master 14 Access Error Position */
#define MATRIX_MESR_MERR14_Msk                (_U_(0x1) << MATRIX_MESR_MERR14_Pos)                 /**< (MATRIX_MESR) Master 14 Access Error Mask */
#define MATRIX_MESR_MERR14(value)             (MATRIX_MESR_MERR14_Msk & ((value) << MATRIX_MESR_MERR14_Pos))
#define   MATRIX_MESR_MERR14_0_Val            _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR14_1_Val            _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR14_0                  (MATRIX_MESR_MERR14_0_Val << MATRIX_MESR_MERR14_Pos) /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR14_1                  (MATRIX_MESR_MERR14_1_Val << MATRIX_MESR_MERR14_Pos) /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR15_Pos                _U_(15)                                              /**< (MATRIX_MESR) Master 15 Access Error Position */
#define MATRIX_MESR_MERR15_Msk                (_U_(0x1) << MATRIX_MESR_MERR15_Pos)                 /**< (MATRIX_MESR) Master 15 Access Error Mask */
#define MATRIX_MESR_MERR15(value)             (MATRIX_MESR_MERR15_Msk & ((value) << MATRIX_MESR_MERR15_Pos))
#define   MATRIX_MESR_MERR15_0_Val            _U_(0x0)                                             /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR15_1_Val            _U_(0x1)                                             /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR15_0                  (MATRIX_MESR_MERR15_0_Val << MATRIX_MESR_MERR15_Pos) /**< (MATRIX_MESR) No Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_MERR15_1                  (MATRIX_MESR_MERR15_1_Val << MATRIX_MESR_MERR15_Pos) /**< (MATRIX_MESR) At least one Master Access Error has occurred since the last read of the MATRIX_MESR. Position  */
#define MATRIX_MESR_Msk                       _U_(0x0000FFFF)                                      /**< (MATRIX_MESR) Register Mask  */

#define MATRIX_MESR_MERR_Pos                  _U_(0)                                               /**< (MATRIX_MESR Position) Master x5 Access Error */
#define MATRIX_MESR_MERR_Msk                  (_U_(0xFFFF) << MATRIX_MESR_MERR_Pos)                /**< (MATRIX_MESR Mask) MERR */
#define MATRIX_MESR_MERR(value)               (MATRIX_MESR_MERR_Msk & ((value) << MATRIX_MESR_MERR_Pos)) 

/* -------- MATRIX_MEAR : (MATRIX Offset: 0x160) ( R/ 32) Master x Error Address Register -------- */
#define MATRIX_MEAR_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_MEAR) Master x Error Address Register  Reset Value */

#define MATRIX_MEAR_ERRADD_Pos                _U_(0)                                               /**< (MATRIX_MEAR) Master Error Address Position */
#define MATRIX_MEAR_ERRADD_Msk                (_U_(0xFFFFFFFF) << MATRIX_MEAR_ERRADD_Pos)          /**< (MATRIX_MEAR) Master Error Address Mask */
#define MATRIX_MEAR_ERRADD(value)             (MATRIX_MEAR_ERRADD_Msk & ((value) << MATRIX_MEAR_ERRADD_Pos))
#define MATRIX_MEAR_Msk                       _U_(0xFFFFFFFF)                                      /**< (MATRIX_MEAR) Register Mask  */


/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1E4) (R/W 32) Write Protect Mode Register -------- */
#define MATRIX_WPMR_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_WPMR) Write Protect Mode Register  Reset Value */

#define MATRIX_WPMR_WPEN_Pos                  _U_(0)                                               /**< (MATRIX_WPMR) Write Protection Enable Position */
#define MATRIX_WPMR_WPEN_Msk                  (_U_(0x1) << MATRIX_WPMR_WPEN_Pos)                   /**< (MATRIX_WPMR) Write Protection Enable Mask */
#define MATRIX_WPMR_WPEN(value)               (MATRIX_WPMR_WPEN_Msk & ((value) << MATRIX_WPMR_WPEN_Pos))
#define   MATRIX_WPMR_WPEN_0_Val              _U_(0x0)                                             /**< (MATRIX_WPMR) Disables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII).  */
#define   MATRIX_WPMR_WPEN_1_Val              _U_(0x1)                                             /**< (MATRIX_WPMR) Enables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII).  */
#define MATRIX_WPMR_WPEN_0                    (MATRIX_WPMR_WPEN_0_Val << MATRIX_WPMR_WPEN_Pos)     /**< (MATRIX_WPMR) Disables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII). Position  */
#define MATRIX_WPMR_WPEN_1                    (MATRIX_WPMR_WPEN_1_Val << MATRIX_WPMR_WPEN_Pos)     /**< (MATRIX_WPMR) Enables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII). Position  */
#define MATRIX_WPMR_CFGFRZ_Pos                _U_(7)                                               /**< (MATRIX_WPMR) Configuration Freeze Position */
#define MATRIX_WPMR_CFGFRZ_Msk                (_U_(0x1) << MATRIX_WPMR_CFGFRZ_Pos)                 /**< (MATRIX_WPMR) Configuration Freeze Mask */
#define MATRIX_WPMR_CFGFRZ(value)             (MATRIX_WPMR_CFGFRZ_Msk & ((value) << MATRIX_WPMR_CFGFRZ_Pos))
#define   MATRIX_WPMR_CFGFRZ_0_Val            _U_(0x0)                                             /**< (MATRIX_WPMR) The MATRIX configuration is not frozen.  */
#define   MATRIX_WPMR_CFGFRZ_1_Val            _U_(0x1)                                             /**< (MATRIX_WPMR) Freezes the MATRIX configuration until hardware reset. The registers that can be protected by the WPEN bit and the Write Protection Mode Register are no longer modifiable.  */
#define MATRIX_WPMR_CFGFRZ_0                  (MATRIX_WPMR_CFGFRZ_0_Val << MATRIX_WPMR_CFGFRZ_Pos) /**< (MATRIX_WPMR) The MATRIX configuration is not frozen. Position  */
#define MATRIX_WPMR_CFGFRZ_1                  (MATRIX_WPMR_CFGFRZ_1_Val << MATRIX_WPMR_CFGFRZ_Pos) /**< (MATRIX_WPMR) Freezes the MATRIX configuration until hardware reset. The registers that can be protected by the WPEN bit and the Write Protection Mode Register are no longer modifiable. Position  */
#define MATRIX_WPMR_WPKEY_Pos                 _U_(8)                                               /**< (MATRIX_WPMR) Write Protection Key Position */
#define MATRIX_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << MATRIX_WPMR_WPKEY_Pos)             /**< (MATRIX_WPMR) Write Protection Key Mask */
#define MATRIX_WPMR_WPKEY(value)              (MATRIX_WPMR_WPKEY_Msk & ((value) << MATRIX_WPMR_WPKEY_Pos))
#define   MATRIX_WPMR_WPKEY_PASSWD_Val        _U_(0x4D4154)                                        /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0.  */
#define MATRIX_WPMR_WPKEY_PASSWD              (MATRIX_WPMR_WPKEY_PASSWD_Val << MATRIX_WPMR_WPKEY_Pos) /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0. Position  */
#define MATRIX_WPMR_Msk                       _U_(0xFFFFFF81)                                      /**< (MATRIX_WPMR) Register Mask  */


/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1E8) ( R/ 32) Write Protect Status Register -------- */
#define MATRIX_WPSR_RESETVALUE                _U_(0x00)                                            /**<  (MATRIX_WPSR) Write Protect Status Register  Reset Value */

#define MATRIX_WPSR_WPVS_Pos                  _U_(0)                                               /**< (MATRIX_WPSR) Write Protection Violation Status Position */
#define MATRIX_WPSR_WPVS_Msk                  (_U_(0x1) << MATRIX_WPSR_WPVS_Pos)                   /**< (MATRIX_WPSR) Write Protection Violation Status Mask */
#define MATRIX_WPSR_WPVS(value)               (MATRIX_WPSR_WPVS_Msk & ((value) << MATRIX_WPSR_WPVS_Pos))
#define   MATRIX_WPSR_WPVS_0_Val              _U_(0x0)                                             /**< (MATRIX_WPSR) No write protection violation has occurred since the last write of the MATRIX_WPMR.  */
#define   MATRIX_WPSR_WPVS_1_Val              _U_(0x1)                                             /**< (MATRIX_WPSR) A write protection violation has occurred since the last write of the MATRIX_WPMR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define MATRIX_WPSR_WPVS_0                    (MATRIX_WPSR_WPVS_0_Val << MATRIX_WPSR_WPVS_Pos)     /**< (MATRIX_WPSR) No write protection violation has occurred since the last write of the MATRIX_WPMR. Position  */
#define MATRIX_WPSR_WPVS_1                    (MATRIX_WPSR_WPVS_1_Val << MATRIX_WPSR_WPVS_Pos)     /**< (MATRIX_WPSR) A write protection violation has occurred since the last write of the MATRIX_WPMR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position  */
#define MATRIX_WPSR_WPVSRC_Pos                _U_(8)                                               /**< (MATRIX_WPSR) Write Protection Violation Source Position */
#define MATRIX_WPSR_WPVSRC_Msk                (_U_(0xFFFF) << MATRIX_WPSR_WPVSRC_Pos)              /**< (MATRIX_WPSR) Write Protection Violation Source Mask */
#define MATRIX_WPSR_WPVSRC(value)             (MATRIX_WPSR_WPVSRC_Msk & ((value) << MATRIX_WPSR_WPVSRC_Pos))
#define MATRIX_WPSR_Msk                       _U_(0x00FFFF01)                                      /**< (MATRIX_WPSR) Register Mask  */


/* -------- MATRIX_SSR : (MATRIX Offset: 0x200) (R/W 32) Security Slave x Register -------- */
#define MATRIX_SSR_RESETVALUE                 _U_(0x00)                                            /**<  (MATRIX_SSR) Security Slave x Register  Reset Value */

#define MATRIX_SSR_LANSECH0_Pos               _U_(0)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH0_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH0_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH0(value)            (MATRIX_SSR_LANSECH0_Msk & ((value) << MATRIX_SSR_LANSECH0_Pos))
#define   MATRIX_SSR_LANSECH0_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH0_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH0_0                 (MATRIX_SSR_LANSECH0_0_Val << MATRIX_SSR_LANSECH0_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH0_1                 (MATRIX_SSR_LANSECH0_1_Val << MATRIX_SSR_LANSECH0_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH1_Pos               _U_(1)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH1_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH1_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH1(value)            (MATRIX_SSR_LANSECH1_Msk & ((value) << MATRIX_SSR_LANSECH1_Pos))
#define   MATRIX_SSR_LANSECH1_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH1_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH1_0                 (MATRIX_SSR_LANSECH1_0_Val << MATRIX_SSR_LANSECH1_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH1_1                 (MATRIX_SSR_LANSECH1_1_Val << MATRIX_SSR_LANSECH1_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH2_Pos               _U_(2)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH2_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH2_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH2(value)            (MATRIX_SSR_LANSECH2_Msk & ((value) << MATRIX_SSR_LANSECH2_Pos))
#define   MATRIX_SSR_LANSECH2_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH2_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH2_0                 (MATRIX_SSR_LANSECH2_0_Val << MATRIX_SSR_LANSECH2_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH2_1                 (MATRIX_SSR_LANSECH2_1_Val << MATRIX_SSR_LANSECH2_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH3_Pos               _U_(3)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH3_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH3_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH3(value)            (MATRIX_SSR_LANSECH3_Msk & ((value) << MATRIX_SSR_LANSECH3_Pos))
#define   MATRIX_SSR_LANSECH3_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH3_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH3_0                 (MATRIX_SSR_LANSECH3_0_Val << MATRIX_SSR_LANSECH3_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH3_1                 (MATRIX_SSR_LANSECH3_1_Val << MATRIX_SSR_LANSECH3_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH4_Pos               _U_(4)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH4_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH4_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH4(value)            (MATRIX_SSR_LANSECH4_Msk & ((value) << MATRIX_SSR_LANSECH4_Pos))
#define   MATRIX_SSR_LANSECH4_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH4_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH4_0                 (MATRIX_SSR_LANSECH4_0_Val << MATRIX_SSR_LANSECH4_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH4_1                 (MATRIX_SSR_LANSECH4_1_Val << MATRIX_SSR_LANSECH4_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH5_Pos               _U_(5)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH5_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH5_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH5(value)            (MATRIX_SSR_LANSECH5_Msk & ((value) << MATRIX_SSR_LANSECH5_Pos))
#define   MATRIX_SSR_LANSECH5_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH5_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH5_0                 (MATRIX_SSR_LANSECH5_0_Val << MATRIX_SSR_LANSECH5_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH5_1                 (MATRIX_SSR_LANSECH5_1_Val << MATRIX_SSR_LANSECH5_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH6_Pos               _U_(6)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH6_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH6_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH6(value)            (MATRIX_SSR_LANSECH6_Msk & ((value) << MATRIX_SSR_LANSECH6_Pos))
#define   MATRIX_SSR_LANSECH6_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH6_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH6_0                 (MATRIX_SSR_LANSECH6_0_Val << MATRIX_SSR_LANSECH6_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH6_1                 (MATRIX_SSR_LANSECH6_1_Val << MATRIX_SSR_LANSECH6_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_LANSECH7_Pos               _U_(7)                                               /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Position */
#define MATRIX_SSR_LANSECH7_Msk               (_U_(0x1) << MATRIX_SSR_LANSECH7_Pos)                /**< (MATRIX_SSR) Low Area Not Secured in HSELx Security Region Mask */
#define MATRIX_SSR_LANSECH7(value)            (MATRIX_SSR_LANSECH7_Msk & ((value) << MATRIX_SSR_LANSECH7_Pos))
#define   MATRIX_SSR_LANSECH7_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access.  */
#define   MATRIX_SSR_LANSECH7_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx.  */
#define MATRIX_SSR_LANSECH7_0                 (MATRIX_SSR_LANSECH7_0_Val << MATRIX_SSR_LANSECH7_Pos) /**< (MATRIX_SSR) The security of the HSELx slave area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured according to RDNSECHx and WRNSECHx. The whole remaining HSELx upper address space is configured as Not Secured access. Position  */
#define MATRIX_SSR_LANSECH7_1                 (MATRIX_SSR_LANSECH7_1_Val << MATRIX_SSR_LANSECH7_Pos) /**< (MATRIX_SSR) The HSELx slave address area laying below the corresponding MATRIX_SASSR / SASPLITx boundary is configured as Not Secured access, and the whole remaining upper address space according to RDNSECHx and WRNSECHx. Position  */
#define MATRIX_SSR_RDNSECH0_Pos               _U_(8)                                               /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH0_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH0_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH0(value)            (MATRIX_SSR_RDNSECH0_Msk & ((value) << MATRIX_SSR_RDNSECH0_Pos))
#define   MATRIX_SSR_RDNSECH0_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH0_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH0_0                 (MATRIX_SSR_RDNSECH0_0_Val << MATRIX_SSR_RDNSECH0_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH0_1                 (MATRIX_SSR_RDNSECH0_1_Val << MATRIX_SSR_RDNSECH0_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH1_Pos               _U_(9)                                               /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH1_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH1_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH1(value)            (MATRIX_SSR_RDNSECH1_Msk & ((value) << MATRIX_SSR_RDNSECH1_Pos))
#define   MATRIX_SSR_RDNSECH1_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH1_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH1_0                 (MATRIX_SSR_RDNSECH1_0_Val << MATRIX_SSR_RDNSECH1_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH1_1                 (MATRIX_SSR_RDNSECH1_1_Val << MATRIX_SSR_RDNSECH1_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH2_Pos               _U_(10)                                              /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH2_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH2_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH2(value)            (MATRIX_SSR_RDNSECH2_Msk & ((value) << MATRIX_SSR_RDNSECH2_Pos))
#define   MATRIX_SSR_RDNSECH2_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH2_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH2_0                 (MATRIX_SSR_RDNSECH2_0_Val << MATRIX_SSR_RDNSECH2_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH2_1                 (MATRIX_SSR_RDNSECH2_1_Val << MATRIX_SSR_RDNSECH2_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH3_Pos               _U_(11)                                              /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH3_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH3_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH3(value)            (MATRIX_SSR_RDNSECH3_Msk & ((value) << MATRIX_SSR_RDNSECH3_Pos))
#define   MATRIX_SSR_RDNSECH3_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH3_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH3_0                 (MATRIX_SSR_RDNSECH3_0_Val << MATRIX_SSR_RDNSECH3_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH3_1                 (MATRIX_SSR_RDNSECH3_1_Val << MATRIX_SSR_RDNSECH3_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH4_Pos               _U_(12)                                              /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH4_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH4_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH4(value)            (MATRIX_SSR_RDNSECH4_Msk & ((value) << MATRIX_SSR_RDNSECH4_Pos))
#define   MATRIX_SSR_RDNSECH4_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH4_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH4_0                 (MATRIX_SSR_RDNSECH4_0_Val << MATRIX_SSR_RDNSECH4_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH4_1                 (MATRIX_SSR_RDNSECH4_1_Val << MATRIX_SSR_RDNSECH4_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH5_Pos               _U_(13)                                              /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH5_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH5_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH5(value)            (MATRIX_SSR_RDNSECH5_Msk & ((value) << MATRIX_SSR_RDNSECH5_Pos))
#define   MATRIX_SSR_RDNSECH5_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH5_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH5_0                 (MATRIX_SSR_RDNSECH5_0_Val << MATRIX_SSR_RDNSECH5_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH5_1                 (MATRIX_SSR_RDNSECH5_1_Val << MATRIX_SSR_RDNSECH5_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH6_Pos               _U_(14)                                              /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH6_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH6_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH6(value)            (MATRIX_SSR_RDNSECH6_Msk & ((value) << MATRIX_SSR_RDNSECH6_Pos))
#define   MATRIX_SSR_RDNSECH6_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH6_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH6_0                 (MATRIX_SSR_RDNSECH6_0_Val << MATRIX_SSR_RDNSECH6_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH6_1                 (MATRIX_SSR_RDNSECH6_1_Val << MATRIX_SSR_RDNSECH6_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH7_Pos               _U_(15)                                              /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_RDNSECH7_Msk               (_U_(0x1) << MATRIX_SSR_RDNSECH7_Pos)                /**< (MATRIX_SSR) Read Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_RDNSECH7(value)            (MATRIX_SSR_RDNSECH7_Msk & ((value) << MATRIX_SSR_RDNSECH7_Pos))
#define   MATRIX_SSR_RDNSECH7_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access.  */
#define   MATRIX_SSR_RDNSECH7_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access.  */
#define MATRIX_SSR_RDNSECH7_0                 (MATRIX_SSR_RDNSECH7_0_Val << MATRIX_SSR_RDNSECH7_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Read Secured and one Read Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Read access. Position  */
#define MATRIX_SSR_RDNSECH7_1                 (MATRIX_SSR_RDNSECH7_1_Val << MATRIX_SSR_RDNSECH7_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Read access. Position  */
#define MATRIX_SSR_WRNSECH0_Pos               _U_(16)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH0_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH0_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH0(value)            (MATRIX_SSR_WRNSECH0_Msk & ((value) << MATRIX_SSR_WRNSECH0_Pos))
#define   MATRIX_SSR_WRNSECH0_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH0_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH0_0                 (MATRIX_SSR_WRNSECH0_0_Val << MATRIX_SSR_WRNSECH0_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH0_1                 (MATRIX_SSR_WRNSECH0_1_Val << MATRIX_SSR_WRNSECH0_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH1_Pos               _U_(17)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH1_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH1_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH1(value)            (MATRIX_SSR_WRNSECH1_Msk & ((value) << MATRIX_SSR_WRNSECH1_Pos))
#define   MATRIX_SSR_WRNSECH1_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH1_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH1_0                 (MATRIX_SSR_WRNSECH1_0_Val << MATRIX_SSR_WRNSECH1_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH1_1                 (MATRIX_SSR_WRNSECH1_1_Val << MATRIX_SSR_WRNSECH1_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH2_Pos               _U_(18)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH2_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH2_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH2(value)            (MATRIX_SSR_WRNSECH2_Msk & ((value) << MATRIX_SSR_WRNSECH2_Pos))
#define   MATRIX_SSR_WRNSECH2_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH2_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH2_0                 (MATRIX_SSR_WRNSECH2_0_Val << MATRIX_SSR_WRNSECH2_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH2_1                 (MATRIX_SSR_WRNSECH2_1_Val << MATRIX_SSR_WRNSECH2_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH3_Pos               _U_(19)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH3_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH3_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH3(value)            (MATRIX_SSR_WRNSECH3_Msk & ((value) << MATRIX_SSR_WRNSECH3_Pos))
#define   MATRIX_SSR_WRNSECH3_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH3_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH3_0                 (MATRIX_SSR_WRNSECH3_0_Val << MATRIX_SSR_WRNSECH3_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH3_1                 (MATRIX_SSR_WRNSECH3_1_Val << MATRIX_SSR_WRNSECH3_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH4_Pos               _U_(20)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH4_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH4_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH4(value)            (MATRIX_SSR_WRNSECH4_Msk & ((value) << MATRIX_SSR_WRNSECH4_Pos))
#define   MATRIX_SSR_WRNSECH4_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH4_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH4_0                 (MATRIX_SSR_WRNSECH4_0_Val << MATRIX_SSR_WRNSECH4_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH4_1                 (MATRIX_SSR_WRNSECH4_1_Val << MATRIX_SSR_WRNSECH4_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH5_Pos               _U_(21)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH5_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH5_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH5(value)            (MATRIX_SSR_WRNSECH5_Msk & ((value) << MATRIX_SSR_WRNSECH5_Pos))
#define   MATRIX_SSR_WRNSECH5_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH5_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH5_0                 (MATRIX_SSR_WRNSECH5_0_Val << MATRIX_SSR_WRNSECH5_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH5_1                 (MATRIX_SSR_WRNSECH5_1_Val << MATRIX_SSR_WRNSECH5_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH6_Pos               _U_(22)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH6_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH6_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH6(value)            (MATRIX_SSR_WRNSECH6_Msk & ((value) << MATRIX_SSR_WRNSECH6_Pos))
#define   MATRIX_SSR_WRNSECH6_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH6_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH6_0                 (MATRIX_SSR_WRNSECH6_0_Val << MATRIX_SSR_WRNSECH6_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH6_1                 (MATRIX_SSR_WRNSECH6_1_Val << MATRIX_SSR_WRNSECH6_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH7_Pos               _U_(23)                                              /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Position */
#define MATRIX_SSR_WRNSECH7_Msk               (_U_(0x1) << MATRIX_SSR_WRNSECH7_Pos)                /**< (MATRIX_SSR) Write Not Secured for HSELx Security Region Mask */
#define MATRIX_SSR_WRNSECH7(value)            (MATRIX_SSR_WRNSECH7_Msk & ((value) << MATRIX_SSR_WRNSECH7_Pos))
#define   MATRIX_SSR_WRNSECH7_0_Val           _U_(0x0)                                             /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access.  */
#define   MATRIX_SSR_WRNSECH7_1_Val           _U_(0x1)                                             /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access.  */
#define MATRIX_SSR_WRNSECH7_0                 (MATRIX_SSR_WRNSECH7_0_Val << MATRIX_SSR_WRNSECH7_Pos) /**< (MATRIX_SSR) The HSELx slave security region is split into one Write Secured and one Write Not Secured area, according to LANSECHx and MATRIX_SASSR / SASPLITx. That is, the so defined securable high or low area is Secured for Write access. Position  */
#define MATRIX_SSR_WRNSECH7_1                 (MATRIX_SSR_WRNSECH7_1_Val << MATRIX_SSR_WRNSECH7_Pos) /**< (MATRIX_SSR) The HSELx slave security region is Not Secured for Write access. Position  */
#define MATRIX_SSR_DSSOA0_Pos                 _U_(24)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA0_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA0_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA0(value)              (MATRIX_SSR_DSSOA0_Msk & ((value) << MATRIX_SSR_DSSOA0_Pos))
#define   MATRIX_SSR_DSSOA0_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA0_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA0_0                   (MATRIX_SSR_DSSOA0_0_Val << MATRIX_SSR_DSSOA0_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA0_1                   (MATRIX_SSR_DSSOA0_1_Val << MATRIX_SSR_DSSOA0_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA1_Pos                 _U_(25)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA1_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA1_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA1(value)              (MATRIX_SSR_DSSOA1_Msk & ((value) << MATRIX_SSR_DSSOA1_Pos))
#define   MATRIX_SSR_DSSOA1_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA1_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA1_0                   (MATRIX_SSR_DSSOA1_0_Val << MATRIX_SSR_DSSOA1_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA1_1                   (MATRIX_SSR_DSSOA1_1_Val << MATRIX_SSR_DSSOA1_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA2_Pos                 _U_(26)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA2_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA2_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA2(value)              (MATRIX_SSR_DSSOA2_Msk & ((value) << MATRIX_SSR_DSSOA2_Pos))
#define   MATRIX_SSR_DSSOA2_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA2_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA2_0                   (MATRIX_SSR_DSSOA2_0_Val << MATRIX_SSR_DSSOA2_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA2_1                   (MATRIX_SSR_DSSOA2_1_Val << MATRIX_SSR_DSSOA2_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA3_Pos                 _U_(27)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA3_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA3_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA3(value)              (MATRIX_SSR_DSSOA3_Msk & ((value) << MATRIX_SSR_DSSOA3_Pos))
#define   MATRIX_SSR_DSSOA3_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA3_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA3_0                   (MATRIX_SSR_DSSOA3_0_Val << MATRIX_SSR_DSSOA3_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA3_1                   (MATRIX_SSR_DSSOA3_1_Val << MATRIX_SSR_DSSOA3_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA4_Pos                 _U_(28)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA4_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA4_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA4(value)              (MATRIX_SSR_DSSOA4_Msk & ((value) << MATRIX_SSR_DSSOA4_Pos))
#define   MATRIX_SSR_DSSOA4_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA4_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA4_0                   (MATRIX_SSR_DSSOA4_0_Val << MATRIX_SSR_DSSOA4_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA4_1                   (MATRIX_SSR_DSSOA4_1_Val << MATRIX_SSR_DSSOA4_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA5_Pos                 _U_(29)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA5_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA5_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA5(value)              (MATRIX_SSR_DSSOA5_Msk & ((value) << MATRIX_SSR_DSSOA5_Pos))
#define   MATRIX_SSR_DSSOA5_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA5_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA5_0                   (MATRIX_SSR_DSSOA5_0_Val << MATRIX_SSR_DSSOA5_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA5_1                   (MATRIX_SSR_DSSOA5_1_Val << MATRIX_SSR_DSSOA5_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA6_Pos                 _U_(30)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA6_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA6_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA6(value)              (MATRIX_SSR_DSSOA6_Msk & ((value) << MATRIX_SSR_DSSOA6_Pos))
#define   MATRIX_SSR_DSSOA6_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA6_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA6_0                   (MATRIX_SSR_DSSOA6_0_Val << MATRIX_SSR_DSSOA6_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA6_1                   (MATRIX_SSR_DSSOA6_1_Val << MATRIX_SSR_DSSOA6_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_DSSOA7_Pos                 _U_(31)                                              /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Position */
#define MATRIX_SSR_DSSOA7_Msk                 (_U_(0x1) << MATRIX_SSR_DSSOA7_Pos)                  /**< (MATRIX_SSR) Downward Security Split Offset Address for HSELx Security Region Mask */
#define MATRIX_SSR_DSSOA7(value)              (MATRIX_SSR_DSSOA7_Msk & ((value) << MATRIX_SSR_DSSOA7_Pos))
#define   MATRIX_SSR_DSSOA7_0_Val             _U_(0x0)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up.  */
#define   MATRIX_SSR_DSSOA7_1_Val             _U_(0x1)                                             /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down.  */
#define MATRIX_SSR_DSSOA7_0                   (MATRIX_SSR_DSSOA7_0_Val << MATRIX_SSR_DSSOA7_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the base address of the slave security region and up. Position  */
#define MATRIX_SSR_DSSOA7_1                   (MATRIX_SSR_DSSOA7_1_Val << MATRIX_SSR_DSSOA7_Pos)   /**< (MATRIX_SSR) For the HSELx slave security region, the security area split MATRIX_SASSR / SASPLITx defines the size of the slave security area starting from the end address of the slave security region and down. Position  */
#define MATRIX_SSR_Msk                        _U_(0xFFFFFFFF)                                      /**< (MATRIX_SSR) Register Mask  */

#define MATRIX_SSR_LANSECH_Pos                _U_(0)                                               /**< (MATRIX_SSR Position) Low Area Not Secured in HSELx Security Region */
#define MATRIX_SSR_LANSECH_Msk                (_U_(0xFF) << MATRIX_SSR_LANSECH_Pos)                /**< (MATRIX_SSR Mask) LANSECH */
#define MATRIX_SSR_LANSECH(value)             (MATRIX_SSR_LANSECH_Msk & ((value) << MATRIX_SSR_LANSECH_Pos)) 
#define MATRIX_SSR_RDNSECH_Pos                _U_(8)                                               /**< (MATRIX_SSR Position) Read Not Secured for HSELx Security Region */
#define MATRIX_SSR_RDNSECH_Msk                (_U_(0xFF) << MATRIX_SSR_RDNSECH_Pos)                /**< (MATRIX_SSR Mask) RDNSECH */
#define MATRIX_SSR_RDNSECH(value)             (MATRIX_SSR_RDNSECH_Msk & ((value) << MATRIX_SSR_RDNSECH_Pos)) 
#define MATRIX_SSR_WRNSECH_Pos                _U_(16)                                              /**< (MATRIX_SSR Position) Write Not Secured for HSELx Security Region */
#define MATRIX_SSR_WRNSECH_Msk                (_U_(0xFF) << MATRIX_SSR_WRNSECH_Pos)                /**< (MATRIX_SSR Mask) WRNSECH */
#define MATRIX_SSR_WRNSECH(value)             (MATRIX_SSR_WRNSECH_Msk & ((value) << MATRIX_SSR_WRNSECH_Pos)) 
#define MATRIX_SSR_DSSOA_Pos                  _U_(24)                                              /**< (MATRIX_SSR Position) Downward Security Split Offset Address for HSELx Security Region */
#define MATRIX_SSR_DSSOA_Msk                  (_U_(0xFF) << MATRIX_SSR_DSSOA_Pos)                  /**< (MATRIX_SSR Mask) DSSOA */
#define MATRIX_SSR_DSSOA(value)               (MATRIX_SSR_DSSOA_Msk & ((value) << MATRIX_SSR_DSSOA_Pos)) 

/* -------- MATRIX_SASSR : (MATRIX Offset: 0x240) (R/W 32) Security Areas Split Slave x Register -------- */
#define MATRIX_SASSR_RESETVALUE               _U_(0x00)                                            /**<  (MATRIX_SASSR) Security Areas Split Slave x Register  Reset Value */

#define MATRIX_SASSR_SASPLIT0_Pos             _U_(0)                                               /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT0_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT0_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT0(value)          (MATRIX_SASSR_SASPLIT0_Msk & ((value) << MATRIX_SASSR_SASPLIT0_Pos))
#define MATRIX_SASSR_SASPLIT1_Pos             _U_(4)                                               /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT1_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT1_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT1(value)          (MATRIX_SASSR_SASPLIT1_Msk & ((value) << MATRIX_SASSR_SASPLIT1_Pos))
#define MATRIX_SASSR_SASPLIT2_Pos             _U_(8)                                               /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT2_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT2_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT2(value)          (MATRIX_SASSR_SASPLIT2_Msk & ((value) << MATRIX_SASSR_SASPLIT2_Pos))
#define MATRIX_SASSR_SASPLIT3_Pos             _U_(12)                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT3_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT3_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT3(value)          (MATRIX_SASSR_SASPLIT3_Msk & ((value) << MATRIX_SASSR_SASPLIT3_Pos))
#define MATRIX_SASSR_SASPLIT4_Pos             _U_(16)                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT4_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT4_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT4(value)          (MATRIX_SASSR_SASPLIT4_Msk & ((value) << MATRIX_SASSR_SASPLIT4_Pos))
#define MATRIX_SASSR_SASPLIT5_Pos             _U_(20)                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT5_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT5_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT5(value)          (MATRIX_SASSR_SASPLIT5_Msk & ((value) << MATRIX_SASSR_SASPLIT5_Pos))
#define MATRIX_SASSR_SASPLIT6_Pos             _U_(24)                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT6_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT6_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT6(value)          (MATRIX_SASSR_SASPLIT6_Msk & ((value) << MATRIX_SASSR_SASPLIT6_Pos))
#define MATRIX_SASSR_SASPLIT7_Pos             _U_(28)                                              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Position */
#define MATRIX_SASSR_SASPLIT7_Msk             (_U_(0xF) << MATRIX_SASSR_SASPLIT7_Pos)              /**< (MATRIX_SASSR) Security Areas Split for HSELx Security Region Mask */
#define MATRIX_SASSR_SASPLIT7(value)          (MATRIX_SASSR_SASPLIT7_Msk & ((value) << MATRIX_SASSR_SASPLIT7_Pos))
#define MATRIX_SASSR_Msk                      _U_(0xFFFFFFFF)                                      /**< (MATRIX_SASSR) Register Mask  */


/* -------- MATRIX_SRTSR : (MATRIX Offset: 0x280) (R/W 32) Security Region Top Slave x Register -------- */
#define MATRIX_SRTSR_RESETVALUE               _U_(0x00)                                            /**<  (MATRIX_SRTSR) Security Region Top Slave x Register  Reset Value */

#define MATRIX_SRTSR_SRTOP0_Pos               _U_(0)                                               /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP0_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP0_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP0(value)            (MATRIX_SRTSR_SRTOP0_Msk & ((value) << MATRIX_SRTSR_SRTOP0_Pos))
#define MATRIX_SRTSR_SRTOP1_Pos               _U_(4)                                               /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP1_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP1_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP1(value)            (MATRIX_SRTSR_SRTOP1_Msk & ((value) << MATRIX_SRTSR_SRTOP1_Pos))
#define MATRIX_SRTSR_SRTOP2_Pos               _U_(8)                                               /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP2_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP2_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP2(value)            (MATRIX_SRTSR_SRTOP2_Msk & ((value) << MATRIX_SRTSR_SRTOP2_Pos))
#define MATRIX_SRTSR_SRTOP3_Pos               _U_(12)                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP3_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP3_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP3(value)            (MATRIX_SRTSR_SRTOP3_Msk & ((value) << MATRIX_SRTSR_SRTOP3_Pos))
#define MATRIX_SRTSR_SRTOP4_Pos               _U_(16)                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP4_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP4_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP4(value)            (MATRIX_SRTSR_SRTOP4_Msk & ((value) << MATRIX_SRTSR_SRTOP4_Pos))
#define MATRIX_SRTSR_SRTOP5_Pos               _U_(20)                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP5_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP5_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP5(value)            (MATRIX_SRTSR_SRTOP5_Msk & ((value) << MATRIX_SRTSR_SRTOP5_Pos))
#define MATRIX_SRTSR_SRTOP6_Pos               _U_(24)                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP6_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP6_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP6(value)            (MATRIX_SRTSR_SRTOP6_Msk & ((value) << MATRIX_SRTSR_SRTOP6_Pos))
#define MATRIX_SRTSR_SRTOP7_Pos               _U_(28)                                              /**< (MATRIX_SRTSR) HSELx Security Region Top Position */
#define MATRIX_SRTSR_SRTOP7_Msk               (_U_(0xF) << MATRIX_SRTSR_SRTOP7_Pos)                /**< (MATRIX_SRTSR) HSELx Security Region Top Mask */
#define MATRIX_SRTSR_SRTOP7(value)            (MATRIX_SRTSR_SRTOP7_Msk & ((value) << MATRIX_SRTSR_SRTOP7_Pos))
#define MATRIX_SRTSR_Msk                      _U_(0xFFFFFFFF)                                      /**< (MATRIX_SRTSR) Register Mask  */


/* -------- MATRIX_SPSELR : (MATRIX Offset: 0x2C0) (R/W 32) Security Peripheral Select 1 Register -------- */
#define MATRIX_SPSELR_NSECP0_Pos              _U_(0)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP0_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP0_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP0(value)           (MATRIX_SPSELR_NSECP0_Msk & ((value) << MATRIX_SPSELR_NSECP0_Pos))
#define   MATRIX_SPSELR_NSECP0_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP0_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP0_0                (MATRIX_SPSELR_NSECP0_0_Val << MATRIX_SPSELR_NSECP0_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP0_1                (MATRIX_SPSELR_NSECP0_1_Val << MATRIX_SPSELR_NSECP0_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP1_Pos              _U_(1)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP1_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP1_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP1(value)           (MATRIX_SPSELR_NSECP1_Msk & ((value) << MATRIX_SPSELR_NSECP1_Pos))
#define   MATRIX_SPSELR_NSECP1_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP1_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP1_0                (MATRIX_SPSELR_NSECP1_0_Val << MATRIX_SPSELR_NSECP1_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP1_1                (MATRIX_SPSELR_NSECP1_1_Val << MATRIX_SPSELR_NSECP1_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP2_Pos              _U_(2)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP2_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP2_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP2(value)           (MATRIX_SPSELR_NSECP2_Msk & ((value) << MATRIX_SPSELR_NSECP2_Pos))
#define   MATRIX_SPSELR_NSECP2_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP2_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP2_0                (MATRIX_SPSELR_NSECP2_0_Val << MATRIX_SPSELR_NSECP2_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP2_1                (MATRIX_SPSELR_NSECP2_1_Val << MATRIX_SPSELR_NSECP2_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP3_Pos              _U_(3)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP3_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP3_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP3(value)           (MATRIX_SPSELR_NSECP3_Msk & ((value) << MATRIX_SPSELR_NSECP3_Pos))
#define   MATRIX_SPSELR_NSECP3_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP3_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP3_0                (MATRIX_SPSELR_NSECP3_0_Val << MATRIX_SPSELR_NSECP3_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP3_1                (MATRIX_SPSELR_NSECP3_1_Val << MATRIX_SPSELR_NSECP3_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP4_Pos              _U_(4)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP4_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP4_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP4(value)           (MATRIX_SPSELR_NSECP4_Msk & ((value) << MATRIX_SPSELR_NSECP4_Pos))
#define   MATRIX_SPSELR_NSECP4_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP4_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP4_0                (MATRIX_SPSELR_NSECP4_0_Val << MATRIX_SPSELR_NSECP4_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP4_1                (MATRIX_SPSELR_NSECP4_1_Val << MATRIX_SPSELR_NSECP4_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP5_Pos              _U_(5)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP5_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP5_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP5(value)           (MATRIX_SPSELR_NSECP5_Msk & ((value) << MATRIX_SPSELR_NSECP5_Pos))
#define   MATRIX_SPSELR_NSECP5_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP5_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP5_0                (MATRIX_SPSELR_NSECP5_0_Val << MATRIX_SPSELR_NSECP5_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP5_1                (MATRIX_SPSELR_NSECP5_1_Val << MATRIX_SPSELR_NSECP5_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP6_Pos              _U_(6)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP6_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP6_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP6(value)           (MATRIX_SPSELR_NSECP6_Msk & ((value) << MATRIX_SPSELR_NSECP6_Pos))
#define   MATRIX_SPSELR_NSECP6_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP6_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP6_0                (MATRIX_SPSELR_NSECP6_0_Val << MATRIX_SPSELR_NSECP6_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP6_1                (MATRIX_SPSELR_NSECP6_1_Val << MATRIX_SPSELR_NSECP6_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP7_Pos              _U_(7)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP7_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP7_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP7(value)           (MATRIX_SPSELR_NSECP7_Msk & ((value) << MATRIX_SPSELR_NSECP7_Pos))
#define   MATRIX_SPSELR_NSECP7_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP7_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP7_0                (MATRIX_SPSELR_NSECP7_0_Val << MATRIX_SPSELR_NSECP7_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP7_1                (MATRIX_SPSELR_NSECP7_1_Val << MATRIX_SPSELR_NSECP7_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP8_Pos              _U_(8)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP8_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP8_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP8(value)           (MATRIX_SPSELR_NSECP8_Msk & ((value) << MATRIX_SPSELR_NSECP8_Pos))
#define   MATRIX_SPSELR_NSECP8_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP8_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP8_0                (MATRIX_SPSELR_NSECP8_0_Val << MATRIX_SPSELR_NSECP8_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP8_1                (MATRIX_SPSELR_NSECP8_1_Val << MATRIX_SPSELR_NSECP8_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP9_Pos              _U_(9)                                               /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP9_Msk              (_U_(0x1) << MATRIX_SPSELR_NSECP9_Pos)               /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP9(value)           (MATRIX_SPSELR_NSECP9_Msk & ((value) << MATRIX_SPSELR_NSECP9_Pos))
#define   MATRIX_SPSELR_NSECP9_0_Val          _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP9_1_Val          _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP9_0                (MATRIX_SPSELR_NSECP9_0_Val << MATRIX_SPSELR_NSECP9_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP9_1                (MATRIX_SPSELR_NSECP9_1_Val << MATRIX_SPSELR_NSECP9_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP10_Pos             _U_(10)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP10_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP10_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP10(value)          (MATRIX_SPSELR_NSECP10_Msk & ((value) << MATRIX_SPSELR_NSECP10_Pos))
#define   MATRIX_SPSELR_NSECP10_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP10_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP10_0               (MATRIX_SPSELR_NSECP10_0_Val << MATRIX_SPSELR_NSECP10_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP10_1               (MATRIX_SPSELR_NSECP10_1_Val << MATRIX_SPSELR_NSECP10_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP11_Pos             _U_(11)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP11_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP11_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP11(value)          (MATRIX_SPSELR_NSECP11_Msk & ((value) << MATRIX_SPSELR_NSECP11_Pos))
#define   MATRIX_SPSELR_NSECP11_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP11_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP11_0               (MATRIX_SPSELR_NSECP11_0_Val << MATRIX_SPSELR_NSECP11_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP11_1               (MATRIX_SPSELR_NSECP11_1_Val << MATRIX_SPSELR_NSECP11_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP12_Pos             _U_(12)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP12_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP12_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP12(value)          (MATRIX_SPSELR_NSECP12_Msk & ((value) << MATRIX_SPSELR_NSECP12_Pos))
#define   MATRIX_SPSELR_NSECP12_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP12_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP12_0               (MATRIX_SPSELR_NSECP12_0_Val << MATRIX_SPSELR_NSECP12_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP12_1               (MATRIX_SPSELR_NSECP12_1_Val << MATRIX_SPSELR_NSECP12_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP13_Pos             _U_(13)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP13_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP13_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP13(value)          (MATRIX_SPSELR_NSECP13_Msk & ((value) << MATRIX_SPSELR_NSECP13_Pos))
#define   MATRIX_SPSELR_NSECP13_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP13_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP13_0               (MATRIX_SPSELR_NSECP13_0_Val << MATRIX_SPSELR_NSECP13_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP13_1               (MATRIX_SPSELR_NSECP13_1_Val << MATRIX_SPSELR_NSECP13_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP14_Pos             _U_(14)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP14_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP14_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP14(value)          (MATRIX_SPSELR_NSECP14_Msk & ((value) << MATRIX_SPSELR_NSECP14_Pos))
#define   MATRIX_SPSELR_NSECP14_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP14_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP14_0               (MATRIX_SPSELR_NSECP14_0_Val << MATRIX_SPSELR_NSECP14_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP14_1               (MATRIX_SPSELR_NSECP14_1_Val << MATRIX_SPSELR_NSECP14_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP15_Pos             _U_(15)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP15_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP15_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP15(value)          (MATRIX_SPSELR_NSECP15_Msk & ((value) << MATRIX_SPSELR_NSECP15_Pos))
#define   MATRIX_SPSELR_NSECP15_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP15_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP15_0               (MATRIX_SPSELR_NSECP15_0_Val << MATRIX_SPSELR_NSECP15_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP15_1               (MATRIX_SPSELR_NSECP15_1_Val << MATRIX_SPSELR_NSECP15_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP16_Pos             _U_(16)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP16_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP16_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP16(value)          (MATRIX_SPSELR_NSECP16_Msk & ((value) << MATRIX_SPSELR_NSECP16_Pos))
#define   MATRIX_SPSELR_NSECP16_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP16_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP16_0               (MATRIX_SPSELR_NSECP16_0_Val << MATRIX_SPSELR_NSECP16_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP16_1               (MATRIX_SPSELR_NSECP16_1_Val << MATRIX_SPSELR_NSECP16_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP17_Pos             _U_(17)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP17_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP17_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP17(value)          (MATRIX_SPSELR_NSECP17_Msk & ((value) << MATRIX_SPSELR_NSECP17_Pos))
#define   MATRIX_SPSELR_NSECP17_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP17_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP17_0               (MATRIX_SPSELR_NSECP17_0_Val << MATRIX_SPSELR_NSECP17_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP17_1               (MATRIX_SPSELR_NSECP17_1_Val << MATRIX_SPSELR_NSECP17_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP18_Pos             _U_(18)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP18_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP18_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP18(value)          (MATRIX_SPSELR_NSECP18_Msk & ((value) << MATRIX_SPSELR_NSECP18_Pos))
#define   MATRIX_SPSELR_NSECP18_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP18_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP18_0               (MATRIX_SPSELR_NSECP18_0_Val << MATRIX_SPSELR_NSECP18_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP18_1               (MATRIX_SPSELR_NSECP18_1_Val << MATRIX_SPSELR_NSECP18_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP19_Pos             _U_(19)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP19_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP19_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP19(value)          (MATRIX_SPSELR_NSECP19_Msk & ((value) << MATRIX_SPSELR_NSECP19_Pos))
#define   MATRIX_SPSELR_NSECP19_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP19_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP19_0               (MATRIX_SPSELR_NSECP19_0_Val << MATRIX_SPSELR_NSECP19_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP19_1               (MATRIX_SPSELR_NSECP19_1_Val << MATRIX_SPSELR_NSECP19_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP20_Pos             _U_(20)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP20_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP20_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP20(value)          (MATRIX_SPSELR_NSECP20_Msk & ((value) << MATRIX_SPSELR_NSECP20_Pos))
#define   MATRIX_SPSELR_NSECP20_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP20_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP20_0               (MATRIX_SPSELR_NSECP20_0_Val << MATRIX_SPSELR_NSECP20_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP20_1               (MATRIX_SPSELR_NSECP20_1_Val << MATRIX_SPSELR_NSECP20_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP21_Pos             _U_(21)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP21_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP21_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP21(value)          (MATRIX_SPSELR_NSECP21_Msk & ((value) << MATRIX_SPSELR_NSECP21_Pos))
#define   MATRIX_SPSELR_NSECP21_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP21_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP21_0               (MATRIX_SPSELR_NSECP21_0_Val << MATRIX_SPSELR_NSECP21_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP21_1               (MATRIX_SPSELR_NSECP21_1_Val << MATRIX_SPSELR_NSECP21_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP22_Pos             _U_(22)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP22_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP22_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP22(value)          (MATRIX_SPSELR_NSECP22_Msk & ((value) << MATRIX_SPSELR_NSECP22_Pos))
#define   MATRIX_SPSELR_NSECP22_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP22_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP22_0               (MATRIX_SPSELR_NSECP22_0_Val << MATRIX_SPSELR_NSECP22_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP22_1               (MATRIX_SPSELR_NSECP22_1_Val << MATRIX_SPSELR_NSECP22_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP23_Pos             _U_(23)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP23_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP23_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP23(value)          (MATRIX_SPSELR_NSECP23_Msk & ((value) << MATRIX_SPSELR_NSECP23_Pos))
#define   MATRIX_SPSELR_NSECP23_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP23_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP23_0               (MATRIX_SPSELR_NSECP23_0_Val << MATRIX_SPSELR_NSECP23_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP23_1               (MATRIX_SPSELR_NSECP23_1_Val << MATRIX_SPSELR_NSECP23_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP24_Pos             _U_(24)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP24_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP24_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP24(value)          (MATRIX_SPSELR_NSECP24_Msk & ((value) << MATRIX_SPSELR_NSECP24_Pos))
#define   MATRIX_SPSELR_NSECP24_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP24_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP24_0               (MATRIX_SPSELR_NSECP24_0_Val << MATRIX_SPSELR_NSECP24_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP24_1               (MATRIX_SPSELR_NSECP24_1_Val << MATRIX_SPSELR_NSECP24_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP25_Pos             _U_(25)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP25_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP25_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP25(value)          (MATRIX_SPSELR_NSECP25_Msk & ((value) << MATRIX_SPSELR_NSECP25_Pos))
#define   MATRIX_SPSELR_NSECP25_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP25_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP25_0               (MATRIX_SPSELR_NSECP25_0_Val << MATRIX_SPSELR_NSECP25_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP25_1               (MATRIX_SPSELR_NSECP25_1_Val << MATRIX_SPSELR_NSECP25_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP26_Pos             _U_(26)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP26_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP26_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP26(value)          (MATRIX_SPSELR_NSECP26_Msk & ((value) << MATRIX_SPSELR_NSECP26_Pos))
#define   MATRIX_SPSELR_NSECP26_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP26_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP26_0               (MATRIX_SPSELR_NSECP26_0_Val << MATRIX_SPSELR_NSECP26_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP26_1               (MATRIX_SPSELR_NSECP26_1_Val << MATRIX_SPSELR_NSECP26_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP27_Pos             _U_(27)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP27_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP27_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP27(value)          (MATRIX_SPSELR_NSECP27_Msk & ((value) << MATRIX_SPSELR_NSECP27_Pos))
#define   MATRIX_SPSELR_NSECP27_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP27_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP27_0               (MATRIX_SPSELR_NSECP27_0_Val << MATRIX_SPSELR_NSECP27_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP27_1               (MATRIX_SPSELR_NSECP27_1_Val << MATRIX_SPSELR_NSECP27_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP28_Pos             _U_(28)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP28_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP28_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP28(value)          (MATRIX_SPSELR_NSECP28_Msk & ((value) << MATRIX_SPSELR_NSECP28_Pos))
#define   MATRIX_SPSELR_NSECP28_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP28_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP28_0               (MATRIX_SPSELR_NSECP28_0_Val << MATRIX_SPSELR_NSECP28_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP28_1               (MATRIX_SPSELR_NSECP28_1_Val << MATRIX_SPSELR_NSECP28_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP29_Pos             _U_(29)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP29_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP29_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP29(value)          (MATRIX_SPSELR_NSECP29_Msk & ((value) << MATRIX_SPSELR_NSECP29_Pos))
#define   MATRIX_SPSELR_NSECP29_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP29_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP29_0               (MATRIX_SPSELR_NSECP29_0_Val << MATRIX_SPSELR_NSECP29_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP29_1               (MATRIX_SPSELR_NSECP29_1_Val << MATRIX_SPSELR_NSECP29_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP30_Pos             _U_(30)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP30_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP30_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP30(value)          (MATRIX_SPSELR_NSECP30_Msk & ((value) << MATRIX_SPSELR_NSECP30_Pos))
#define   MATRIX_SPSELR_NSECP30_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP30_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP30_0               (MATRIX_SPSELR_NSECP30_0_Val << MATRIX_SPSELR_NSECP30_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP30_1               (MATRIX_SPSELR_NSECP30_1_Val << MATRIX_SPSELR_NSECP30_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_NSECP31_Pos             _U_(31)                                              /**< (MATRIX_SPSELR) Not Secured Peripheral Position */
#define MATRIX_SPSELR_NSECP31_Msk             (_U_(0x1) << MATRIX_SPSELR_NSECP31_Pos)              /**< (MATRIX_SPSELR) Not Secured Peripheral Mask */
#define MATRIX_SPSELR_NSECP31(value)          (MATRIX_SPSELR_NSECP31_Msk & ((value) << MATRIX_SPSELR_NSECP31_Pos))
#define   MATRIX_SPSELR_NSECP31_0_Val         _U_(0x0)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured").  */
#define   MATRIX_SPSELR_NSECP31_1_Val         _U_(0x1)                                             /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured").  */
#define MATRIX_SPSELR_NSECP31_0               (MATRIX_SPSELR_NSECP31_0_Val << MATRIX_SPSELR_NSECP31_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Secured" access (value of '0' has no effect if the peripheral security type is "Not Secured"). Position  */
#define MATRIX_SPSELR_NSECP31_1               (MATRIX_SPSELR_NSECP31_1_Val << MATRIX_SPSELR_NSECP31_Pos) /**< (MATRIX_SPSELR) The selected peripheral address space is configured as "Not Secured" access (value of '1' has no effect if the peripheral security type is "Always Secured"). Position  */
#define MATRIX_SPSELR_Msk                     _U_(0xFFFFFFFF)                                      /**< (MATRIX_SPSELR) Register Mask  */

#define MATRIX_SPSELR_NSECP_Pos               _U_(0)                                               /**< (MATRIX_SPSELR Position) Not Secured Peripheral */
#define MATRIX_SPSELR_NSECP_Msk               (_U_(0xFFFFFFFF) << MATRIX_SPSELR_NSECP_Pos)         /**< (MATRIX_SPSELR Mask) NSECP */
#define MATRIX_SPSELR_NSECP(value)            (MATRIX_SPSELR_NSECP_Msk & ((value) << MATRIX_SPSELR_NSECP_Pos)) 

/** \brief MATRIX register offsets definitions */
#define MATRIX_PRAS_REG_OFST           (0x00)              /**< (MATRIX_PRAS) Priority Register A for Slave x Offset */
#define MATRIX_PRBS_REG_OFST           (0x04)              /**< (MATRIX_PRBS) Priority Register B for Slave x Offset */
#define MATRIX_MCFG_REG_OFST           (0x00)              /**< (MATRIX_MCFG) Master Configuration Register x Offset */
#define MATRIX_MCFG0_REG_OFST          (0x00)              /**< (MATRIX_MCFG0) Master Configuration Register x Offset */
#define MATRIX_MCFG1_REG_OFST          (0x04)              /**< (MATRIX_MCFG1) Master Configuration Register x Offset */
#define MATRIX_MCFG2_REG_OFST          (0x08)              /**< (MATRIX_MCFG2) Master Configuration Register x Offset */
#define MATRIX_MCFG3_REG_OFST          (0x0C)              /**< (MATRIX_MCFG3) Master Configuration Register x Offset */
#define MATRIX_MCFG4_REG_OFST          (0x10)              /**< (MATRIX_MCFG4) Master Configuration Register x Offset */
#define MATRIX_MCFG5_REG_OFST          (0x14)              /**< (MATRIX_MCFG5) Master Configuration Register x Offset */
#define MATRIX_MCFG6_REG_OFST          (0x18)              /**< (MATRIX_MCFG6) Master Configuration Register x Offset */
#define MATRIX_MCFG7_REG_OFST          (0x1C)              /**< (MATRIX_MCFG7) Master Configuration Register x Offset */
#define MATRIX_MCFG8_REG_OFST          (0x20)              /**< (MATRIX_MCFG8) Master Configuration Register x Offset */
#define MATRIX_MCFG9_REG_OFST          (0x24)              /**< (MATRIX_MCFG9) Master Configuration Register x Offset */
#define MATRIX_MCFG10_REG_OFST         (0x28)              /**< (MATRIX_MCFG10) Master Configuration Register x Offset */
#define MATRIX_MCFG11_REG_OFST         (0x2C)              /**< (MATRIX_MCFG11) Master Configuration Register x Offset */
#define MATRIX_MCFG12_REG_OFST         (0x30)              /**< (MATRIX_MCFG12) Master Configuration Register x Offset */
#define MATRIX_MCFG13_REG_OFST         (0x34)              /**< (MATRIX_MCFG13) Master Configuration Register x Offset */
#define MATRIX_MCFG14_REG_OFST         (0x38)              /**< (MATRIX_MCFG14) Master Configuration Register x Offset */
#define MATRIX_MCFG15_REG_OFST         (0x3C)              /**< (MATRIX_MCFG15) Master Configuration Register x Offset */
#define MATRIX_SCFG_REG_OFST           (0x40)              /**< (MATRIX_SCFG) Slave Configuration Register x Offset */
#define MATRIX_SCFG0_REG_OFST          (0x40)              /**< (MATRIX_SCFG0) Slave Configuration Register x Offset */
#define MATRIX_SCFG1_REG_OFST          (0x44)              /**< (MATRIX_SCFG1) Slave Configuration Register x Offset */
#define MATRIX_SCFG2_REG_OFST          (0x48)              /**< (MATRIX_SCFG2) Slave Configuration Register x Offset */
#define MATRIX_SCFG3_REG_OFST          (0x4C)              /**< (MATRIX_SCFG3) Slave Configuration Register x Offset */
#define MATRIX_SCFG4_REG_OFST          (0x50)              /**< (MATRIX_SCFG4) Slave Configuration Register x Offset */
#define MATRIX_SCFG5_REG_OFST          (0x54)              /**< (MATRIX_SCFG5) Slave Configuration Register x Offset */
#define MATRIX_SCFG6_REG_OFST          (0x58)              /**< (MATRIX_SCFG6) Slave Configuration Register x Offset */
#define MATRIX_SCFG7_REG_OFST          (0x5C)              /**< (MATRIX_SCFG7) Slave Configuration Register x Offset */
#define MATRIX_SCFG8_REG_OFST          (0x60)              /**< (MATRIX_SCFG8) Slave Configuration Register x Offset */
#define MATRIX_SCFG9_REG_OFST          (0x64)              /**< (MATRIX_SCFG9) Slave Configuration Register x Offset */
#define MATRIX_SCFG10_REG_OFST         (0x68)              /**< (MATRIX_SCFG10) Slave Configuration Register x Offset */
#define MATRIX_SCFG11_REG_OFST         (0x6C)              /**< (MATRIX_SCFG11) Slave Configuration Register x Offset */
#define MATRIX_SCFG12_REG_OFST         (0x70)              /**< (MATRIX_SCFG12) Slave Configuration Register x Offset */
#define MATRIX_SCFG13_REG_OFST         (0x74)              /**< (MATRIX_SCFG13) Slave Configuration Register x Offset */
#define MATRIX_SCFG14_REG_OFST         (0x78)              /**< (MATRIX_SCFG14) Slave Configuration Register x Offset */
#define MATRIX_SCFG15_REG_OFST         (0x7C)              /**< (MATRIX_SCFG15) Slave Configuration Register x Offset */
#define MATRIX_MRCR_REG_OFST           (0x100)             /**< (MATRIX_MRCR) Master Remap Control Register Offset */
#define MATRIX_MEIER_REG_OFST          (0x150)             /**< (MATRIX_MEIER) Master Error Interrupt Enable Register Offset */
#define MATRIX_MEIDR_REG_OFST          (0x154)             /**< (MATRIX_MEIDR) Master Error Interrupt Disable Register Offset */
#define MATRIX_MEIMR_REG_OFST          (0x158)             /**< (MATRIX_MEIMR) Master Error Interrupt Mask Register Offset */
#define MATRIX_MESR_REG_OFST           (0x15C)             /**< (MATRIX_MESR) Master Error Status Register Offset */
#define MATRIX_MEAR_REG_OFST           (0x160)             /**< (MATRIX_MEAR) Master x Error Address Register Offset */
#define MATRIX_MEAR0_REG_OFST          (0x160)             /**< (MATRIX_MEAR0) Master x Error Address Register Offset */
#define MATRIX_MEAR1_REG_OFST          (0x164)             /**< (MATRIX_MEAR1) Master x Error Address Register Offset */
#define MATRIX_MEAR2_REG_OFST          (0x168)             /**< (MATRIX_MEAR2) Master x Error Address Register Offset */
#define MATRIX_MEAR3_REG_OFST          (0x16C)             /**< (MATRIX_MEAR3) Master x Error Address Register Offset */
#define MATRIX_MEAR4_REG_OFST          (0x170)             /**< (MATRIX_MEAR4) Master x Error Address Register Offset */
#define MATRIX_MEAR5_REG_OFST          (0x174)             /**< (MATRIX_MEAR5) Master x Error Address Register Offset */
#define MATRIX_MEAR6_REG_OFST          (0x178)             /**< (MATRIX_MEAR6) Master x Error Address Register Offset */
#define MATRIX_MEAR7_REG_OFST          (0x17C)             /**< (MATRIX_MEAR7) Master x Error Address Register Offset */
#define MATRIX_MEAR8_REG_OFST          (0x180)             /**< (MATRIX_MEAR8) Master x Error Address Register Offset */
#define MATRIX_MEAR9_REG_OFST          (0x184)             /**< (MATRIX_MEAR9) Master x Error Address Register Offset */
#define MATRIX_MEAR10_REG_OFST         (0x188)             /**< (MATRIX_MEAR10) Master x Error Address Register Offset */
#define MATRIX_MEAR11_REG_OFST         (0x18C)             /**< (MATRIX_MEAR11) Master x Error Address Register Offset */
#define MATRIX_MEAR12_REG_OFST         (0x190)             /**< (MATRIX_MEAR12) Master x Error Address Register Offset */
#define MATRIX_MEAR13_REG_OFST         (0x194)             /**< (MATRIX_MEAR13) Master x Error Address Register Offset */
#define MATRIX_MEAR14_REG_OFST         (0x198)             /**< (MATRIX_MEAR14) Master x Error Address Register Offset */
#define MATRIX_MEAR15_REG_OFST         (0x19C)             /**< (MATRIX_MEAR15) Master x Error Address Register Offset */
#define MATRIX_WPMR_REG_OFST           (0x1E4)             /**< (MATRIX_WPMR) Write Protect Mode Register Offset */
#define MATRIX_WPSR_REG_OFST           (0x1E8)             /**< (MATRIX_WPSR) Write Protect Status Register Offset */
#define MATRIX_SSR_REG_OFST            (0x200)             /**< (MATRIX_SSR) Security Slave x Register Offset */
#define MATRIX_SSR0_REG_OFST           (0x200)             /**< (MATRIX_SSR0) Security Slave x Register Offset */
#define MATRIX_SSR1_REG_OFST           (0x204)             /**< (MATRIX_SSR1) Security Slave x Register Offset */
#define MATRIX_SSR2_REG_OFST           (0x208)             /**< (MATRIX_SSR2) Security Slave x Register Offset */
#define MATRIX_SSR3_REG_OFST           (0x20C)             /**< (MATRIX_SSR3) Security Slave x Register Offset */
#define MATRIX_SSR4_REG_OFST           (0x210)             /**< (MATRIX_SSR4) Security Slave x Register Offset */
#define MATRIX_SSR5_REG_OFST           (0x214)             /**< (MATRIX_SSR5) Security Slave x Register Offset */
#define MATRIX_SSR6_REG_OFST           (0x218)             /**< (MATRIX_SSR6) Security Slave x Register Offset */
#define MATRIX_SSR7_REG_OFST           (0x21C)             /**< (MATRIX_SSR7) Security Slave x Register Offset */
#define MATRIX_SSR8_REG_OFST           (0x220)             /**< (MATRIX_SSR8) Security Slave x Register Offset */
#define MATRIX_SSR9_REG_OFST           (0x224)             /**< (MATRIX_SSR9) Security Slave x Register Offset */
#define MATRIX_SSR10_REG_OFST          (0x228)             /**< (MATRIX_SSR10) Security Slave x Register Offset */
#define MATRIX_SSR11_REG_OFST          (0x22C)             /**< (MATRIX_SSR11) Security Slave x Register Offset */
#define MATRIX_SSR12_REG_OFST          (0x230)             /**< (MATRIX_SSR12) Security Slave x Register Offset */
#define MATRIX_SSR13_REG_OFST          (0x234)             /**< (MATRIX_SSR13) Security Slave x Register Offset */
#define MATRIX_SSR14_REG_OFST          (0x238)             /**< (MATRIX_SSR14) Security Slave x Register Offset */
#define MATRIX_SSR15_REG_OFST          (0x23C)             /**< (MATRIX_SSR15) Security Slave x Register Offset */
#define MATRIX_SASSR_REG_OFST          (0x240)             /**< (MATRIX_SASSR) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR0_REG_OFST         (0x240)             /**< (MATRIX_SASSR0) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR1_REG_OFST         (0x244)             /**< (MATRIX_SASSR1) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR2_REG_OFST         (0x248)             /**< (MATRIX_SASSR2) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR3_REG_OFST         (0x24C)             /**< (MATRIX_SASSR3) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR4_REG_OFST         (0x250)             /**< (MATRIX_SASSR4) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR5_REG_OFST         (0x254)             /**< (MATRIX_SASSR5) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR6_REG_OFST         (0x258)             /**< (MATRIX_SASSR6) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR7_REG_OFST         (0x25C)             /**< (MATRIX_SASSR7) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR8_REG_OFST         (0x260)             /**< (MATRIX_SASSR8) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR9_REG_OFST         (0x264)             /**< (MATRIX_SASSR9) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR10_REG_OFST        (0x268)             /**< (MATRIX_SASSR10) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR11_REG_OFST        (0x26C)             /**< (MATRIX_SASSR11) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR12_REG_OFST        (0x270)             /**< (MATRIX_SASSR12) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR13_REG_OFST        (0x274)             /**< (MATRIX_SASSR13) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR14_REG_OFST        (0x278)             /**< (MATRIX_SASSR14) Security Areas Split Slave x Register Offset */
#define MATRIX_SASSR15_REG_OFST        (0x27C)             /**< (MATRIX_SASSR15) Security Areas Split Slave x Register Offset */
#define MATRIX_SRTSR_REG_OFST          (0x280)             /**< (MATRIX_SRTSR) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR0_REG_OFST         (0x280)             /**< (MATRIX_SRTSR0) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR1_REG_OFST         (0x284)             /**< (MATRIX_SRTSR1) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR2_REG_OFST         (0x288)             /**< (MATRIX_SRTSR2) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR3_REG_OFST         (0x28C)             /**< (MATRIX_SRTSR3) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR4_REG_OFST         (0x290)             /**< (MATRIX_SRTSR4) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR5_REG_OFST         (0x294)             /**< (MATRIX_SRTSR5) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR6_REG_OFST         (0x298)             /**< (MATRIX_SRTSR6) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR7_REG_OFST         (0x29C)             /**< (MATRIX_SRTSR7) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR8_REG_OFST         (0x2A0)             /**< (MATRIX_SRTSR8) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR9_REG_OFST         (0x2A4)             /**< (MATRIX_SRTSR9) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR10_REG_OFST        (0x2A8)             /**< (MATRIX_SRTSR10) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR11_REG_OFST        (0x2AC)             /**< (MATRIX_SRTSR11) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR12_REG_OFST        (0x2B0)             /**< (MATRIX_SRTSR12) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR13_REG_OFST        (0x2B4)             /**< (MATRIX_SRTSR13) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR14_REG_OFST        (0x2B8)             /**< (MATRIX_SRTSR14) Security Region Top Slave x Register Offset */
#define MATRIX_SRTSR15_REG_OFST        (0x2BC)             /**< (MATRIX_SRTSR15) Security Region Top Slave x Register Offset */
#define MATRIX_SPSELR_REG_OFST         (0x2C0)             /**< (MATRIX_SPSELR) Security Peripheral Select 1 Register Offset */
#define MATRIX_SPSELR0_REG_OFST        (0x2C0)             /**< (MATRIX_SPSELR0) Security Peripheral Select 1 Register Offset */
#define MATRIX_SPSELR1_REG_OFST        (0x2C4)             /**< (MATRIX_SPSELR1) Security Peripheral Select 1 Register Offset */
#define MATRIX_SPSELR2_REG_OFST        (0x2C8)             /**< (MATRIX_SPSELR2) Security Peripheral Select 1 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MATRIX_PR register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_PRAS;        /**< Offset: 0x00 (R/W  32) Priority Register A for Slave x */
  __IO  uint32_t                       MATRIX_PRBS;        /**< Offset: 0x04 (R/W  32) Priority Register B for Slave x */
} matrix_pr_registers_t;

#define MATRIX_PR_NUMBER _U_(16)

/** \brief MATRIX register API structure */
typedef struct
{  /* AHB Bus Matrix */
  __IO  uint32_t                       MATRIX_MCFG[16];    /**< Offset: 0x00 (R/W  32) Master Configuration Register x */
  __IO  uint32_t                       MATRIX_SCFG[16];    /**< Offset: 0x40 (R/W  32) Slave Configuration Register x */
        matrix_pr_registers_t          MATRIX_PR[MATRIX_PR_NUMBER]; /**< Offset: 0x80  */
  __IO  uint32_t                       MATRIX_MRCR;        /**< Offset: 0x100 (R/W  32) Master Remap Control Register */
  __I   uint8_t                        Reserved1[0x4C];
  __O   uint32_t                       MATRIX_MEIER;       /**< Offset: 0x150 ( /W  32) Master Error Interrupt Enable Register */
  __O   uint32_t                       MATRIX_MEIDR;       /**< Offset: 0x154 ( /W  32) Master Error Interrupt Disable Register */
  __I   uint32_t                       MATRIX_MEIMR;       /**< Offset: 0x158 (R/   32) Master Error Interrupt Mask Register */
  __I   uint32_t                       MATRIX_MESR;        /**< Offset: 0x15C (R/   32) Master Error Status Register */
  __I   uint32_t                       MATRIX_MEAR[16];    /**< Offset: 0x160 (R/   32) Master x Error Address Register */
  __I   uint8_t                        Reserved2[0x44];
  __IO  uint32_t                       MATRIX_WPMR;        /**< Offset: 0x1E4 (R/W  32) Write Protect Mode Register */
  __I   uint32_t                       MATRIX_WPSR;        /**< Offset: 0x1E8 (R/   32) Write Protect Status Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       MATRIX_SSR[16];     /**< Offset: 0x200 (R/W  32) Security Slave x Register */
  __IO  uint32_t                       MATRIX_SASSR[16];   /**< Offset: 0x240 (R/W  32) Security Areas Split Slave x Register */
  __IO  uint32_t                       MATRIX_SRTSR[16];   /**< Offset: 0x280 (R/W  32) Security Region Top Slave x Register */
  __IO  uint32_t                       MATRIX_SPSELR[3];   /**< Offset: 0x2C0 (R/W  32) Security Peripheral Select 1 Register */
} matrix_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G_MATRIX_COMPONENT_H_ */
