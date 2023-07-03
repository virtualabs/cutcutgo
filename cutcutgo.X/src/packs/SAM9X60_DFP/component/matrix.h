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

/* file generated from device description version 2021-05-04T16:22:14Z */
#ifndef _SAM9X_MATRIX_COMPONENT_H_
#define _SAM9X_MATRIX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MATRIX                                       */
/* ************************************************************************** */

/* -------- MATRIX_PRAS : (MATRIX Offset: 0x00) (R/W 32) Priority Register A for Slave 0 -------- */
#define MATRIX_PRAS_M0PR_Pos                  _U_(0)                                               /**< (MATRIX_PRAS) Master 0 Priority Position */
#define MATRIX_PRAS_M0PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M0PR_Pos)                   /**< (MATRIX_PRAS) Master 0 Priority Mask */
#define MATRIX_PRAS_M0PR(value)               (MATRIX_PRAS_M0PR_Msk & ((value) << MATRIX_PRAS_M0PR_Pos))
#define MATRIX_PRAS_LQOSEN0_Pos               _U_(2)                                               /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 0 Position */
#define MATRIX_PRAS_LQOSEN0_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN0_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 0 Mask */
#define MATRIX_PRAS_LQOSEN0(value)            (MATRIX_PRAS_LQOSEN0_Msk & ((value) << MATRIX_PRAS_LQOSEN0_Pos))
#define MATRIX_PRAS_M1PR_Pos                  _U_(4)                                               /**< (MATRIX_PRAS) Master 1 Priority Position */
#define MATRIX_PRAS_M1PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M1PR_Pos)                   /**< (MATRIX_PRAS) Master 1 Priority Mask */
#define MATRIX_PRAS_M1PR(value)               (MATRIX_PRAS_M1PR_Msk & ((value) << MATRIX_PRAS_M1PR_Pos))
#define MATRIX_PRAS_LQOSEN1_Pos               _U_(6)                                               /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 1 Position */
#define MATRIX_PRAS_LQOSEN1_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN1_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 1 Mask */
#define MATRIX_PRAS_LQOSEN1(value)            (MATRIX_PRAS_LQOSEN1_Msk & ((value) << MATRIX_PRAS_LQOSEN1_Pos))
#define MATRIX_PRAS_M2PR_Pos                  _U_(8)                                               /**< (MATRIX_PRAS) Master 2 Priority Position */
#define MATRIX_PRAS_M2PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M2PR_Pos)                   /**< (MATRIX_PRAS) Master 2 Priority Mask */
#define MATRIX_PRAS_M2PR(value)               (MATRIX_PRAS_M2PR_Msk & ((value) << MATRIX_PRAS_M2PR_Pos))
#define MATRIX_PRAS_LQOSEN2_Pos               _U_(10)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 2 Position */
#define MATRIX_PRAS_LQOSEN2_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN2_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 2 Mask */
#define MATRIX_PRAS_LQOSEN2(value)            (MATRIX_PRAS_LQOSEN2_Msk & ((value) << MATRIX_PRAS_LQOSEN2_Pos))
#define MATRIX_PRAS_M3PR_Pos                  _U_(12)                                              /**< (MATRIX_PRAS) Master 3 Priority Position */
#define MATRIX_PRAS_M3PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M3PR_Pos)                   /**< (MATRIX_PRAS) Master 3 Priority Mask */
#define MATRIX_PRAS_M3PR(value)               (MATRIX_PRAS_M3PR_Msk & ((value) << MATRIX_PRAS_M3PR_Pos))
#define MATRIX_PRAS_LQOSEN3_Pos               _U_(14)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 3 Position */
#define MATRIX_PRAS_LQOSEN3_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN3_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 3 Mask */
#define MATRIX_PRAS_LQOSEN3(value)            (MATRIX_PRAS_LQOSEN3_Msk & ((value) << MATRIX_PRAS_LQOSEN3_Pos))
#define MATRIX_PRAS_M4PR_Pos                  _U_(16)                                              /**< (MATRIX_PRAS) Master 4 Priority Position */
#define MATRIX_PRAS_M4PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M4PR_Pos)                   /**< (MATRIX_PRAS) Master 4 Priority Mask */
#define MATRIX_PRAS_M4PR(value)               (MATRIX_PRAS_M4PR_Msk & ((value) << MATRIX_PRAS_M4PR_Pos))
#define MATRIX_PRAS_LQOSEN4_Pos               _U_(18)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 4 Position */
#define MATRIX_PRAS_LQOSEN4_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN4_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 4 Mask */
#define MATRIX_PRAS_LQOSEN4(value)            (MATRIX_PRAS_LQOSEN4_Msk & ((value) << MATRIX_PRAS_LQOSEN4_Pos))
#define MATRIX_PRAS_M5PR_Pos                  _U_(20)                                              /**< (MATRIX_PRAS) Master 5 Priority Position */
#define MATRIX_PRAS_M5PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M5PR_Pos)                   /**< (MATRIX_PRAS) Master 5 Priority Mask */
#define MATRIX_PRAS_M5PR(value)               (MATRIX_PRAS_M5PR_Msk & ((value) << MATRIX_PRAS_M5PR_Pos))
#define MATRIX_PRAS_LQOSEN5_Pos               _U_(22)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 5 Position */
#define MATRIX_PRAS_LQOSEN5_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN5_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 5 Mask */
#define MATRIX_PRAS_LQOSEN5(value)            (MATRIX_PRAS_LQOSEN5_Msk & ((value) << MATRIX_PRAS_LQOSEN5_Pos))
#define MATRIX_PRAS_M6PR_Pos                  _U_(24)                                              /**< (MATRIX_PRAS) Master 6 Priority Position */
#define MATRIX_PRAS_M6PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M6PR_Pos)                   /**< (MATRIX_PRAS) Master 6 Priority Mask */
#define MATRIX_PRAS_M6PR(value)               (MATRIX_PRAS_M6PR_Msk & ((value) << MATRIX_PRAS_M6PR_Pos))
#define MATRIX_PRAS_LQOSEN6_Pos               _U_(26)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 6 Position */
#define MATRIX_PRAS_LQOSEN6_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN6_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 6 Mask */
#define MATRIX_PRAS_LQOSEN6(value)            (MATRIX_PRAS_LQOSEN6_Msk & ((value) << MATRIX_PRAS_LQOSEN6_Pos))
#define MATRIX_PRAS_M7PR_Pos                  _U_(28)                                              /**< (MATRIX_PRAS) Master 7 Priority Position */
#define MATRIX_PRAS_M7PR_Msk                  (_U_(0x3) << MATRIX_PRAS_M7PR_Pos)                   /**< (MATRIX_PRAS) Master 7 Priority Mask */
#define MATRIX_PRAS_M7PR(value)               (MATRIX_PRAS_M7PR_Msk & ((value) << MATRIX_PRAS_M7PR_Pos))
#define MATRIX_PRAS_LQOSEN7_Pos               _U_(30)                                              /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 7 Position */
#define MATRIX_PRAS_LQOSEN7_Msk               (_U_(0x1) << MATRIX_PRAS_LQOSEN7_Pos)                /**< (MATRIX_PRAS) Latency Quality of Service Enable for Master 7 Mask */
#define MATRIX_PRAS_LQOSEN7(value)            (MATRIX_PRAS_LQOSEN7_Msk & ((value) << MATRIX_PRAS_LQOSEN7_Pos))
#define MATRIX_PRAS_Msk                       _U_(0x77777777)                                      /**< (MATRIX_PRAS) Register Mask  */


/* -------- MATRIX_PRBS : (MATRIX Offset: 0x04) (R/W 32) Priority Register B for Slave 0 -------- */
#define MATRIX_PRBS_M8PR_Pos                  _U_(0)                                               /**< (MATRIX_PRBS) Master 8 Priority Position */
#define MATRIX_PRBS_M8PR_Msk                  (_U_(0x3) << MATRIX_PRBS_M8PR_Pos)                   /**< (MATRIX_PRBS) Master 8 Priority Mask */
#define MATRIX_PRBS_M8PR(value)               (MATRIX_PRBS_M8PR_Msk & ((value) << MATRIX_PRBS_M8PR_Pos))
#define MATRIX_PRBS_LQOSEN8_Pos               _U_(2)                                               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 8 Position */
#define MATRIX_PRBS_LQOSEN8_Msk               (_U_(0x1) << MATRIX_PRBS_LQOSEN8_Pos)                /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 8 Mask */
#define MATRIX_PRBS_LQOSEN8(value)            (MATRIX_PRBS_LQOSEN8_Msk & ((value) << MATRIX_PRBS_LQOSEN8_Pos))
#define MATRIX_PRBS_M9PR_Pos                  _U_(4)                                               /**< (MATRIX_PRBS) Master 9 Priority Position */
#define MATRIX_PRBS_M9PR_Msk                  (_U_(0x3) << MATRIX_PRBS_M9PR_Pos)                   /**< (MATRIX_PRBS) Master 9 Priority Mask */
#define MATRIX_PRBS_M9PR(value)               (MATRIX_PRBS_M9PR_Msk & ((value) << MATRIX_PRBS_M9PR_Pos))
#define MATRIX_PRBS_LQOSEN9_Pos               _U_(6)                                               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 9 Position */
#define MATRIX_PRBS_LQOSEN9_Msk               (_U_(0x1) << MATRIX_PRBS_LQOSEN9_Pos)                /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 9 Mask */
#define MATRIX_PRBS_LQOSEN9(value)            (MATRIX_PRBS_LQOSEN9_Msk & ((value) << MATRIX_PRBS_LQOSEN9_Pos))
#define MATRIX_PRBS_M10PR_Pos                 _U_(8)                                               /**< (MATRIX_PRBS) Master 10 Priority Position */
#define MATRIX_PRBS_M10PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M10PR_Pos)                  /**< (MATRIX_PRBS) Master 10 Priority Mask */
#define MATRIX_PRBS_M10PR(value)              (MATRIX_PRBS_M10PR_Msk & ((value) << MATRIX_PRBS_M10PR_Pos))
#define MATRIX_PRBS_LQOSEN10_Pos              _U_(10)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 10 Position */
#define MATRIX_PRBS_LQOSEN10_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN10_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 10 Mask */
#define MATRIX_PRBS_LQOSEN10(value)           (MATRIX_PRBS_LQOSEN10_Msk & ((value) << MATRIX_PRBS_LQOSEN10_Pos))
#define MATRIX_PRBS_M11PR_Pos                 _U_(12)                                              /**< (MATRIX_PRBS) Master 11 Priority Position */
#define MATRIX_PRBS_M11PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M11PR_Pos)                  /**< (MATRIX_PRBS) Master 11 Priority Mask */
#define MATRIX_PRBS_M11PR(value)              (MATRIX_PRBS_M11PR_Msk & ((value) << MATRIX_PRBS_M11PR_Pos))
#define MATRIX_PRBS_LQOSEN11_Pos              _U_(14)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 11 Position */
#define MATRIX_PRBS_LQOSEN11_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN11_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 11 Mask */
#define MATRIX_PRBS_LQOSEN11(value)           (MATRIX_PRBS_LQOSEN11_Msk & ((value) << MATRIX_PRBS_LQOSEN11_Pos))
#define MATRIX_PRBS_M12PR_Pos                 _U_(16)                                              /**< (MATRIX_PRBS) Master 12 Priority Position */
#define MATRIX_PRBS_M12PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M12PR_Pos)                  /**< (MATRIX_PRBS) Master 12 Priority Mask */
#define MATRIX_PRBS_M12PR(value)              (MATRIX_PRBS_M12PR_Msk & ((value) << MATRIX_PRBS_M12PR_Pos))
#define MATRIX_PRBS_LQOSEN12_Pos              _U_(18)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 12 Position */
#define MATRIX_PRBS_LQOSEN12_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN12_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 12 Mask */
#define MATRIX_PRBS_LQOSEN12(value)           (MATRIX_PRBS_LQOSEN12_Msk & ((value) << MATRIX_PRBS_LQOSEN12_Pos))
#define MATRIX_PRBS_M13PR_Pos                 _U_(20)                                              /**< (MATRIX_PRBS) Master 13 Priority Position */
#define MATRIX_PRBS_M13PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M13PR_Pos)                  /**< (MATRIX_PRBS) Master 13 Priority Mask */
#define MATRIX_PRBS_M13PR(value)              (MATRIX_PRBS_M13PR_Msk & ((value) << MATRIX_PRBS_M13PR_Pos))
#define MATRIX_PRBS_LQOSEN13_Pos              _U_(22)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 13 Position */
#define MATRIX_PRBS_LQOSEN13_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN13_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 13 Mask */
#define MATRIX_PRBS_LQOSEN13(value)           (MATRIX_PRBS_LQOSEN13_Msk & ((value) << MATRIX_PRBS_LQOSEN13_Pos))
#define MATRIX_PRBS_M14PR_Pos                 _U_(24)                                              /**< (MATRIX_PRBS) Master 14 Priority Position */
#define MATRIX_PRBS_M14PR_Msk                 (_U_(0x3) << MATRIX_PRBS_M14PR_Pos)                  /**< (MATRIX_PRBS) Master 14 Priority Mask */
#define MATRIX_PRBS_M14PR(value)              (MATRIX_PRBS_M14PR_Msk & ((value) << MATRIX_PRBS_M14PR_Pos))
#define MATRIX_PRBS_LQOSEN14_Pos              _U_(26)                                              /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 14 Position */
#define MATRIX_PRBS_LQOSEN14_Msk              (_U_(0x1) << MATRIX_PRBS_LQOSEN14_Pos)               /**< (MATRIX_PRBS) Latency Quality of Service Enable for Master 14 Mask */
#define MATRIX_PRBS_LQOSEN14(value)           (MATRIX_PRBS_LQOSEN14_Msk & ((value) << MATRIX_PRBS_LQOSEN14_Pos))
#define MATRIX_PRBS_Msk                       _U_(0x07777777)                                      /**< (MATRIX_PRBS) Register Mask  */


/* -------- MATRIX_MCFG : (MATRIX Offset: 0x00) (R/W 32) Master Configuration Register -------- */
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
#define   MATRIX_MCFG_ULBT_128_BEAT_Val       _U_(0x7)                                             /**< (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats. Unless duly needed, the ULBT should be left at its default 0 value for power saving.  */
#define MATRIX_MCFG_ULBT_UNLIMITED            (MATRIX_MCFG_ULBT_UNLIMITED_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next system bus 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts. This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave. Position  */
#define MATRIX_MCFG_ULBT_SINGLE               (MATRIX_MCFG_ULBT_SINGLE_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence. Position  */
#define MATRIX_MCFG_ULBT_4_BEAT               (MATRIX_MCFG_ULBT_4_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats. Position  */
#define MATRIX_MCFG_ULBT_8_BEAT               (MATRIX_MCFG_ULBT_8_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats. Position  */
#define MATRIX_MCFG_ULBT_16_BEAT              (MATRIX_MCFG_ULBT_16_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats. Position  */
#define MATRIX_MCFG_ULBT_32_BEAT              (MATRIX_MCFG_ULBT_32_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats. Position  */
#define MATRIX_MCFG_ULBT_64_BEAT              (MATRIX_MCFG_ULBT_64_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats. Position  */
#define MATRIX_MCFG_ULBT_128_BEAT             (MATRIX_MCFG_ULBT_128_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /**< (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats. Unless duly needed, the ULBT should be left at its default 0 value for power saving. Position  */
#define MATRIX_MCFG_Msk                       _U_(0x00000007)                                      /**< (MATRIX_MCFG) Register Mask  */


/* -------- MATRIX_SCFG : (MATRIX Offset: 0x40) (R/W 32) Slave Configuration Register -------- */
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
#define MATRIX_MRCR_RCB0_Pos                  _U_(0)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 0 Position */
#define MATRIX_MRCR_RCB0_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB0_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 0 Mask */
#define MATRIX_MRCR_RCB0(value)               (MATRIX_MRCR_RCB0_Msk & ((value) << MATRIX_MRCR_RCB0_Pos))
#define MATRIX_MRCR_RCB1_Pos                  _U_(1)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 1 Position */
#define MATRIX_MRCR_RCB1_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB1_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 1 Mask */
#define MATRIX_MRCR_RCB1(value)               (MATRIX_MRCR_RCB1_Msk & ((value) << MATRIX_MRCR_RCB1_Pos))
#define MATRIX_MRCR_RCB2_Pos                  _U_(2)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 2 Position */
#define MATRIX_MRCR_RCB2_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB2_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 2 Mask */
#define MATRIX_MRCR_RCB2(value)               (MATRIX_MRCR_RCB2_Msk & ((value) << MATRIX_MRCR_RCB2_Pos))
#define MATRIX_MRCR_RCB3_Pos                  _U_(3)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 3 Position */
#define MATRIX_MRCR_RCB3_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB3_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 3 Mask */
#define MATRIX_MRCR_RCB3(value)               (MATRIX_MRCR_RCB3_Msk & ((value) << MATRIX_MRCR_RCB3_Pos))
#define MATRIX_MRCR_RCB4_Pos                  _U_(4)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 4 Position */
#define MATRIX_MRCR_RCB4_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB4_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 4 Mask */
#define MATRIX_MRCR_RCB4(value)               (MATRIX_MRCR_RCB4_Msk & ((value) << MATRIX_MRCR_RCB4_Pos))
#define MATRIX_MRCR_RCB5_Pos                  _U_(5)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 5 Position */
#define MATRIX_MRCR_RCB5_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB5_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 5 Mask */
#define MATRIX_MRCR_RCB5(value)               (MATRIX_MRCR_RCB5_Msk & ((value) << MATRIX_MRCR_RCB5_Pos))
#define MATRIX_MRCR_RCB6_Pos                  _U_(6)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 6 Position */
#define MATRIX_MRCR_RCB6_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB6_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 6 Mask */
#define MATRIX_MRCR_RCB6(value)               (MATRIX_MRCR_RCB6_Msk & ((value) << MATRIX_MRCR_RCB6_Pos))
#define MATRIX_MRCR_RCB7_Pos                  _U_(7)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 7 Position */
#define MATRIX_MRCR_RCB7_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB7_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 7 Mask */
#define MATRIX_MRCR_RCB7(value)               (MATRIX_MRCR_RCB7_Msk & ((value) << MATRIX_MRCR_RCB7_Pos))
#define MATRIX_MRCR_RCB8_Pos                  _U_(8)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 8 Position */
#define MATRIX_MRCR_RCB8_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB8_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 8 Mask */
#define MATRIX_MRCR_RCB8(value)               (MATRIX_MRCR_RCB8_Msk & ((value) << MATRIX_MRCR_RCB8_Pos))
#define MATRIX_MRCR_RCB9_Pos                  _U_(9)                                               /**< (MATRIX_MRCR) Remap Command Bit for Master 9 Position */
#define MATRIX_MRCR_RCB9_Msk                  (_U_(0x1) << MATRIX_MRCR_RCB9_Pos)                   /**< (MATRIX_MRCR) Remap Command Bit for Master 9 Mask */
#define MATRIX_MRCR_RCB9(value)               (MATRIX_MRCR_RCB9_Msk & ((value) << MATRIX_MRCR_RCB9_Pos))
#define MATRIX_MRCR_RCB10_Pos                 _U_(10)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 10 Position */
#define MATRIX_MRCR_RCB10_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB10_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 10 Mask */
#define MATRIX_MRCR_RCB10(value)              (MATRIX_MRCR_RCB10_Msk & ((value) << MATRIX_MRCR_RCB10_Pos))
#define MATRIX_MRCR_RCB11_Pos                 _U_(11)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 11 Position */
#define MATRIX_MRCR_RCB11_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB11_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 11 Mask */
#define MATRIX_MRCR_RCB11(value)              (MATRIX_MRCR_RCB11_Msk & ((value) << MATRIX_MRCR_RCB11_Pos))
#define MATRIX_MRCR_RCB12_Pos                 _U_(12)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 12 Position */
#define MATRIX_MRCR_RCB12_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB12_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 12 Mask */
#define MATRIX_MRCR_RCB12(value)              (MATRIX_MRCR_RCB12_Msk & ((value) << MATRIX_MRCR_RCB12_Pos))
#define MATRIX_MRCR_RCB13_Pos                 _U_(13)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 13 Position */
#define MATRIX_MRCR_RCB13_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB13_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 13 Mask */
#define MATRIX_MRCR_RCB13(value)              (MATRIX_MRCR_RCB13_Msk & ((value) << MATRIX_MRCR_RCB13_Pos))
#define MATRIX_MRCR_RCB14_Pos                 _U_(14)                                              /**< (MATRIX_MRCR) Remap Command Bit for Master 14 Position */
#define MATRIX_MRCR_RCB14_Msk                 (_U_(0x1) << MATRIX_MRCR_RCB14_Pos)                  /**< (MATRIX_MRCR) Remap Command Bit for Master 14 Mask */
#define MATRIX_MRCR_RCB14(value)              (MATRIX_MRCR_RCB14_Msk & ((value) << MATRIX_MRCR_RCB14_Pos))
#define MATRIX_MRCR_Msk                       _U_(0x00007FFF)                                      /**< (MATRIX_MRCR) Register Mask  */

#define MATRIX_MRCR_RCB_Pos                   _U_(0)                                               /**< (MATRIX_MRCR Position) Remap Command Bit for Master x4 */
#define MATRIX_MRCR_RCB_Msk                   (_U_(0x7FFF) << MATRIX_MRCR_RCB_Pos)                 /**< (MATRIX_MRCR Mask) RCB */
#define MATRIX_MRCR_RCB(value)                (MATRIX_MRCR_RCB_Msk & ((value) << MATRIX_MRCR_RCB_Pos)) 

/* -------- MATRIX_MEIER : (MATRIX Offset: 0x150) ( /W 32) Master Error Interrupt Enable Register -------- */
#define MATRIX_MEIER_MERR0_Pos                _U_(0)                                               /**< (MATRIX_MEIER) Master 0 Access Error Position */
#define MATRIX_MEIER_MERR0_Msk                (_U_(0x1) << MATRIX_MEIER_MERR0_Pos)                 /**< (MATRIX_MEIER) Master 0 Access Error Mask */
#define MATRIX_MEIER_MERR0(value)             (MATRIX_MEIER_MERR0_Msk & ((value) << MATRIX_MEIER_MERR0_Pos))
#define MATRIX_MEIER_MERR1_Pos                _U_(1)                                               /**< (MATRIX_MEIER) Master 1 Access Error Position */
#define MATRIX_MEIER_MERR1_Msk                (_U_(0x1) << MATRIX_MEIER_MERR1_Pos)                 /**< (MATRIX_MEIER) Master 1 Access Error Mask */
#define MATRIX_MEIER_MERR1(value)             (MATRIX_MEIER_MERR1_Msk & ((value) << MATRIX_MEIER_MERR1_Pos))
#define MATRIX_MEIER_MERR2_Pos                _U_(2)                                               /**< (MATRIX_MEIER) Master 2 Access Error Position */
#define MATRIX_MEIER_MERR2_Msk                (_U_(0x1) << MATRIX_MEIER_MERR2_Pos)                 /**< (MATRIX_MEIER) Master 2 Access Error Mask */
#define MATRIX_MEIER_MERR2(value)             (MATRIX_MEIER_MERR2_Msk & ((value) << MATRIX_MEIER_MERR2_Pos))
#define MATRIX_MEIER_MERR3_Pos                _U_(3)                                               /**< (MATRIX_MEIER) Master 3 Access Error Position */
#define MATRIX_MEIER_MERR3_Msk                (_U_(0x1) << MATRIX_MEIER_MERR3_Pos)                 /**< (MATRIX_MEIER) Master 3 Access Error Mask */
#define MATRIX_MEIER_MERR3(value)             (MATRIX_MEIER_MERR3_Msk & ((value) << MATRIX_MEIER_MERR3_Pos))
#define MATRIX_MEIER_MERR4_Pos                _U_(4)                                               /**< (MATRIX_MEIER) Master 4 Access Error Position */
#define MATRIX_MEIER_MERR4_Msk                (_U_(0x1) << MATRIX_MEIER_MERR4_Pos)                 /**< (MATRIX_MEIER) Master 4 Access Error Mask */
#define MATRIX_MEIER_MERR4(value)             (MATRIX_MEIER_MERR4_Msk & ((value) << MATRIX_MEIER_MERR4_Pos))
#define MATRIX_MEIER_MERR5_Pos                _U_(5)                                               /**< (MATRIX_MEIER) Master 5 Access Error Position */
#define MATRIX_MEIER_MERR5_Msk                (_U_(0x1) << MATRIX_MEIER_MERR5_Pos)                 /**< (MATRIX_MEIER) Master 5 Access Error Mask */
#define MATRIX_MEIER_MERR5(value)             (MATRIX_MEIER_MERR5_Msk & ((value) << MATRIX_MEIER_MERR5_Pos))
#define MATRIX_MEIER_MERR6_Pos                _U_(6)                                               /**< (MATRIX_MEIER) Master 6 Access Error Position */
#define MATRIX_MEIER_MERR6_Msk                (_U_(0x1) << MATRIX_MEIER_MERR6_Pos)                 /**< (MATRIX_MEIER) Master 6 Access Error Mask */
#define MATRIX_MEIER_MERR6(value)             (MATRIX_MEIER_MERR6_Msk & ((value) << MATRIX_MEIER_MERR6_Pos))
#define MATRIX_MEIER_MERR7_Pos                _U_(7)                                               /**< (MATRIX_MEIER) Master 7 Access Error Position */
#define MATRIX_MEIER_MERR7_Msk                (_U_(0x1) << MATRIX_MEIER_MERR7_Pos)                 /**< (MATRIX_MEIER) Master 7 Access Error Mask */
#define MATRIX_MEIER_MERR7(value)             (MATRIX_MEIER_MERR7_Msk & ((value) << MATRIX_MEIER_MERR7_Pos))
#define MATRIX_MEIER_MERR8_Pos                _U_(8)                                               /**< (MATRIX_MEIER) Master 8 Access Error Position */
#define MATRIX_MEIER_MERR8_Msk                (_U_(0x1) << MATRIX_MEIER_MERR8_Pos)                 /**< (MATRIX_MEIER) Master 8 Access Error Mask */
#define MATRIX_MEIER_MERR8(value)             (MATRIX_MEIER_MERR8_Msk & ((value) << MATRIX_MEIER_MERR8_Pos))
#define MATRIX_MEIER_MERR9_Pos                _U_(9)                                               /**< (MATRIX_MEIER) Master 9 Access Error Position */
#define MATRIX_MEIER_MERR9_Msk                (_U_(0x1) << MATRIX_MEIER_MERR9_Pos)                 /**< (MATRIX_MEIER) Master 9 Access Error Mask */
#define MATRIX_MEIER_MERR9(value)             (MATRIX_MEIER_MERR9_Msk & ((value) << MATRIX_MEIER_MERR9_Pos))
#define MATRIX_MEIER_MERR10_Pos               _U_(10)                                              /**< (MATRIX_MEIER) Master 10 Access Error Position */
#define MATRIX_MEIER_MERR10_Msk               (_U_(0x1) << MATRIX_MEIER_MERR10_Pos)                /**< (MATRIX_MEIER) Master 10 Access Error Mask */
#define MATRIX_MEIER_MERR10(value)            (MATRIX_MEIER_MERR10_Msk & ((value) << MATRIX_MEIER_MERR10_Pos))
#define MATRIX_MEIER_MERR11_Pos               _U_(11)                                              /**< (MATRIX_MEIER) Master 11 Access Error Position */
#define MATRIX_MEIER_MERR11_Msk               (_U_(0x1) << MATRIX_MEIER_MERR11_Pos)                /**< (MATRIX_MEIER) Master 11 Access Error Mask */
#define MATRIX_MEIER_MERR11(value)            (MATRIX_MEIER_MERR11_Msk & ((value) << MATRIX_MEIER_MERR11_Pos))
#define MATRIX_MEIER_MERR12_Pos               _U_(12)                                              /**< (MATRIX_MEIER) Master 12 Access Error Position */
#define MATRIX_MEIER_MERR12_Msk               (_U_(0x1) << MATRIX_MEIER_MERR12_Pos)                /**< (MATRIX_MEIER) Master 12 Access Error Mask */
#define MATRIX_MEIER_MERR12(value)            (MATRIX_MEIER_MERR12_Msk & ((value) << MATRIX_MEIER_MERR12_Pos))
#define MATRIX_MEIER_MERR13_Pos               _U_(13)                                              /**< (MATRIX_MEIER) Master 13 Access Error Position */
#define MATRIX_MEIER_MERR13_Msk               (_U_(0x1) << MATRIX_MEIER_MERR13_Pos)                /**< (MATRIX_MEIER) Master 13 Access Error Mask */
#define MATRIX_MEIER_MERR13(value)            (MATRIX_MEIER_MERR13_Msk & ((value) << MATRIX_MEIER_MERR13_Pos))
#define MATRIX_MEIER_MERR14_Pos               _U_(14)                                              /**< (MATRIX_MEIER) Master 14 Access Error Position */
#define MATRIX_MEIER_MERR14_Msk               (_U_(0x1) << MATRIX_MEIER_MERR14_Pos)                /**< (MATRIX_MEIER) Master 14 Access Error Mask */
#define MATRIX_MEIER_MERR14(value)            (MATRIX_MEIER_MERR14_Msk & ((value) << MATRIX_MEIER_MERR14_Pos))
#define MATRIX_MEIER_Msk                      _U_(0x00007FFF)                                      /**< (MATRIX_MEIER) Register Mask  */

#define MATRIX_MEIER_MERR_Pos                 _U_(0)                                               /**< (MATRIX_MEIER Position) Master x4 Access Error */
#define MATRIX_MEIER_MERR_Msk                 (_U_(0x7FFF) << MATRIX_MEIER_MERR_Pos)               /**< (MATRIX_MEIER Mask) MERR */
#define MATRIX_MEIER_MERR(value)              (MATRIX_MEIER_MERR_Msk & ((value) << MATRIX_MEIER_MERR_Pos)) 

/* -------- MATRIX_MEIDR : (MATRIX Offset: 0x154) ( /W 32) Master Error Interrupt Disable Register -------- */
#define MATRIX_MEIDR_MERR0_Pos                _U_(0)                                               /**< (MATRIX_MEIDR) Master 0 Access Error Position */
#define MATRIX_MEIDR_MERR0_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR0_Pos)                 /**< (MATRIX_MEIDR) Master 0 Access Error Mask */
#define MATRIX_MEIDR_MERR0(value)             (MATRIX_MEIDR_MERR0_Msk & ((value) << MATRIX_MEIDR_MERR0_Pos))
#define MATRIX_MEIDR_MERR1_Pos                _U_(1)                                               /**< (MATRIX_MEIDR) Master 1 Access Error Position */
#define MATRIX_MEIDR_MERR1_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR1_Pos)                 /**< (MATRIX_MEIDR) Master 1 Access Error Mask */
#define MATRIX_MEIDR_MERR1(value)             (MATRIX_MEIDR_MERR1_Msk & ((value) << MATRIX_MEIDR_MERR1_Pos))
#define MATRIX_MEIDR_MERR2_Pos                _U_(2)                                               /**< (MATRIX_MEIDR) Master 2 Access Error Position */
#define MATRIX_MEIDR_MERR2_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR2_Pos)                 /**< (MATRIX_MEIDR) Master 2 Access Error Mask */
#define MATRIX_MEIDR_MERR2(value)             (MATRIX_MEIDR_MERR2_Msk & ((value) << MATRIX_MEIDR_MERR2_Pos))
#define MATRIX_MEIDR_MERR3_Pos                _U_(3)                                               /**< (MATRIX_MEIDR) Master 3 Access Error Position */
#define MATRIX_MEIDR_MERR3_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR3_Pos)                 /**< (MATRIX_MEIDR) Master 3 Access Error Mask */
#define MATRIX_MEIDR_MERR3(value)             (MATRIX_MEIDR_MERR3_Msk & ((value) << MATRIX_MEIDR_MERR3_Pos))
#define MATRIX_MEIDR_MERR4_Pos                _U_(4)                                               /**< (MATRIX_MEIDR) Master 4 Access Error Position */
#define MATRIX_MEIDR_MERR4_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR4_Pos)                 /**< (MATRIX_MEIDR) Master 4 Access Error Mask */
#define MATRIX_MEIDR_MERR4(value)             (MATRIX_MEIDR_MERR4_Msk & ((value) << MATRIX_MEIDR_MERR4_Pos))
#define MATRIX_MEIDR_MERR5_Pos                _U_(5)                                               /**< (MATRIX_MEIDR) Master 5 Access Error Position */
#define MATRIX_MEIDR_MERR5_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR5_Pos)                 /**< (MATRIX_MEIDR) Master 5 Access Error Mask */
#define MATRIX_MEIDR_MERR5(value)             (MATRIX_MEIDR_MERR5_Msk & ((value) << MATRIX_MEIDR_MERR5_Pos))
#define MATRIX_MEIDR_MERR6_Pos                _U_(6)                                               /**< (MATRIX_MEIDR) Master 6 Access Error Position */
#define MATRIX_MEIDR_MERR6_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR6_Pos)                 /**< (MATRIX_MEIDR) Master 6 Access Error Mask */
#define MATRIX_MEIDR_MERR6(value)             (MATRIX_MEIDR_MERR6_Msk & ((value) << MATRIX_MEIDR_MERR6_Pos))
#define MATRIX_MEIDR_MERR7_Pos                _U_(7)                                               /**< (MATRIX_MEIDR) Master 7 Access Error Position */
#define MATRIX_MEIDR_MERR7_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR7_Pos)                 /**< (MATRIX_MEIDR) Master 7 Access Error Mask */
#define MATRIX_MEIDR_MERR7(value)             (MATRIX_MEIDR_MERR7_Msk & ((value) << MATRIX_MEIDR_MERR7_Pos))
#define MATRIX_MEIDR_MERR8_Pos                _U_(8)                                               /**< (MATRIX_MEIDR) Master 8 Access Error Position */
#define MATRIX_MEIDR_MERR8_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR8_Pos)                 /**< (MATRIX_MEIDR) Master 8 Access Error Mask */
#define MATRIX_MEIDR_MERR8(value)             (MATRIX_MEIDR_MERR8_Msk & ((value) << MATRIX_MEIDR_MERR8_Pos))
#define MATRIX_MEIDR_MERR9_Pos                _U_(9)                                               /**< (MATRIX_MEIDR) Master 9 Access Error Position */
#define MATRIX_MEIDR_MERR9_Msk                (_U_(0x1) << MATRIX_MEIDR_MERR9_Pos)                 /**< (MATRIX_MEIDR) Master 9 Access Error Mask */
#define MATRIX_MEIDR_MERR9(value)             (MATRIX_MEIDR_MERR9_Msk & ((value) << MATRIX_MEIDR_MERR9_Pos))
#define MATRIX_MEIDR_MERR10_Pos               _U_(10)                                              /**< (MATRIX_MEIDR) Master 10 Access Error Position */
#define MATRIX_MEIDR_MERR10_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR10_Pos)                /**< (MATRIX_MEIDR) Master 10 Access Error Mask */
#define MATRIX_MEIDR_MERR10(value)            (MATRIX_MEIDR_MERR10_Msk & ((value) << MATRIX_MEIDR_MERR10_Pos))
#define MATRIX_MEIDR_MERR11_Pos               _U_(11)                                              /**< (MATRIX_MEIDR) Master 11 Access Error Position */
#define MATRIX_MEIDR_MERR11_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR11_Pos)                /**< (MATRIX_MEIDR) Master 11 Access Error Mask */
#define MATRIX_MEIDR_MERR11(value)            (MATRIX_MEIDR_MERR11_Msk & ((value) << MATRIX_MEIDR_MERR11_Pos))
#define MATRIX_MEIDR_MERR12_Pos               _U_(12)                                              /**< (MATRIX_MEIDR) Master 12 Access Error Position */
#define MATRIX_MEIDR_MERR12_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR12_Pos)                /**< (MATRIX_MEIDR) Master 12 Access Error Mask */
#define MATRIX_MEIDR_MERR12(value)            (MATRIX_MEIDR_MERR12_Msk & ((value) << MATRIX_MEIDR_MERR12_Pos))
#define MATRIX_MEIDR_MERR13_Pos               _U_(13)                                              /**< (MATRIX_MEIDR) Master 13 Access Error Position */
#define MATRIX_MEIDR_MERR13_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR13_Pos)                /**< (MATRIX_MEIDR) Master 13 Access Error Mask */
#define MATRIX_MEIDR_MERR13(value)            (MATRIX_MEIDR_MERR13_Msk & ((value) << MATRIX_MEIDR_MERR13_Pos))
#define MATRIX_MEIDR_MERR14_Pos               _U_(14)                                              /**< (MATRIX_MEIDR) Master 14 Access Error Position */
#define MATRIX_MEIDR_MERR14_Msk               (_U_(0x1) << MATRIX_MEIDR_MERR14_Pos)                /**< (MATRIX_MEIDR) Master 14 Access Error Mask */
#define MATRIX_MEIDR_MERR14(value)            (MATRIX_MEIDR_MERR14_Msk & ((value) << MATRIX_MEIDR_MERR14_Pos))
#define MATRIX_MEIDR_Msk                      _U_(0x00007FFF)                                      /**< (MATRIX_MEIDR) Register Mask  */

#define MATRIX_MEIDR_MERR_Pos                 _U_(0)                                               /**< (MATRIX_MEIDR Position) Master x4 Access Error */
#define MATRIX_MEIDR_MERR_Msk                 (_U_(0x7FFF) << MATRIX_MEIDR_MERR_Pos)               /**< (MATRIX_MEIDR Mask) MERR */
#define MATRIX_MEIDR_MERR(value)              (MATRIX_MEIDR_MERR_Msk & ((value) << MATRIX_MEIDR_MERR_Pos)) 

/* -------- MATRIX_MEIMR : (MATRIX Offset: 0x158) ( R/ 32) Master Error Interrupt Mask Register -------- */
#define MATRIX_MEIMR_MERR0_Pos                _U_(0)                                               /**< (MATRIX_MEIMR) Master 0 Access Error Position */
#define MATRIX_MEIMR_MERR0_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR0_Pos)                 /**< (MATRIX_MEIMR) Master 0 Access Error Mask */
#define MATRIX_MEIMR_MERR0(value)             (MATRIX_MEIMR_MERR0_Msk & ((value) << MATRIX_MEIMR_MERR0_Pos))
#define MATRIX_MEIMR_MERR1_Pos                _U_(1)                                               /**< (MATRIX_MEIMR) Master 1 Access Error Position */
#define MATRIX_MEIMR_MERR1_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR1_Pos)                 /**< (MATRIX_MEIMR) Master 1 Access Error Mask */
#define MATRIX_MEIMR_MERR1(value)             (MATRIX_MEIMR_MERR1_Msk & ((value) << MATRIX_MEIMR_MERR1_Pos))
#define MATRIX_MEIMR_MERR2_Pos                _U_(2)                                               /**< (MATRIX_MEIMR) Master 2 Access Error Position */
#define MATRIX_MEIMR_MERR2_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR2_Pos)                 /**< (MATRIX_MEIMR) Master 2 Access Error Mask */
#define MATRIX_MEIMR_MERR2(value)             (MATRIX_MEIMR_MERR2_Msk & ((value) << MATRIX_MEIMR_MERR2_Pos))
#define MATRIX_MEIMR_MERR3_Pos                _U_(3)                                               /**< (MATRIX_MEIMR) Master 3 Access Error Position */
#define MATRIX_MEIMR_MERR3_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR3_Pos)                 /**< (MATRIX_MEIMR) Master 3 Access Error Mask */
#define MATRIX_MEIMR_MERR3(value)             (MATRIX_MEIMR_MERR3_Msk & ((value) << MATRIX_MEIMR_MERR3_Pos))
#define MATRIX_MEIMR_MERR4_Pos                _U_(4)                                               /**< (MATRIX_MEIMR) Master 4 Access Error Position */
#define MATRIX_MEIMR_MERR4_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR4_Pos)                 /**< (MATRIX_MEIMR) Master 4 Access Error Mask */
#define MATRIX_MEIMR_MERR4(value)             (MATRIX_MEIMR_MERR4_Msk & ((value) << MATRIX_MEIMR_MERR4_Pos))
#define MATRIX_MEIMR_MERR5_Pos                _U_(5)                                               /**< (MATRIX_MEIMR) Master 5 Access Error Position */
#define MATRIX_MEIMR_MERR5_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR5_Pos)                 /**< (MATRIX_MEIMR) Master 5 Access Error Mask */
#define MATRIX_MEIMR_MERR5(value)             (MATRIX_MEIMR_MERR5_Msk & ((value) << MATRIX_MEIMR_MERR5_Pos))
#define MATRIX_MEIMR_MERR6_Pos                _U_(6)                                               /**< (MATRIX_MEIMR) Master 6 Access Error Position */
#define MATRIX_MEIMR_MERR6_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR6_Pos)                 /**< (MATRIX_MEIMR) Master 6 Access Error Mask */
#define MATRIX_MEIMR_MERR6(value)             (MATRIX_MEIMR_MERR6_Msk & ((value) << MATRIX_MEIMR_MERR6_Pos))
#define MATRIX_MEIMR_MERR7_Pos                _U_(7)                                               /**< (MATRIX_MEIMR) Master 7 Access Error Position */
#define MATRIX_MEIMR_MERR7_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR7_Pos)                 /**< (MATRIX_MEIMR) Master 7 Access Error Mask */
#define MATRIX_MEIMR_MERR7(value)             (MATRIX_MEIMR_MERR7_Msk & ((value) << MATRIX_MEIMR_MERR7_Pos))
#define MATRIX_MEIMR_MERR8_Pos                _U_(8)                                               /**< (MATRIX_MEIMR) Master 8 Access Error Position */
#define MATRIX_MEIMR_MERR8_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR8_Pos)                 /**< (MATRIX_MEIMR) Master 8 Access Error Mask */
#define MATRIX_MEIMR_MERR8(value)             (MATRIX_MEIMR_MERR8_Msk & ((value) << MATRIX_MEIMR_MERR8_Pos))
#define MATRIX_MEIMR_MERR9_Pos                _U_(9)                                               /**< (MATRIX_MEIMR) Master 9 Access Error Position */
#define MATRIX_MEIMR_MERR9_Msk                (_U_(0x1) << MATRIX_MEIMR_MERR9_Pos)                 /**< (MATRIX_MEIMR) Master 9 Access Error Mask */
#define MATRIX_MEIMR_MERR9(value)             (MATRIX_MEIMR_MERR9_Msk & ((value) << MATRIX_MEIMR_MERR9_Pos))
#define MATRIX_MEIMR_MERR10_Pos               _U_(10)                                              /**< (MATRIX_MEIMR) Master 10 Access Error Position */
#define MATRIX_MEIMR_MERR10_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR10_Pos)                /**< (MATRIX_MEIMR) Master 10 Access Error Mask */
#define MATRIX_MEIMR_MERR10(value)            (MATRIX_MEIMR_MERR10_Msk & ((value) << MATRIX_MEIMR_MERR10_Pos))
#define MATRIX_MEIMR_MERR11_Pos               _U_(11)                                              /**< (MATRIX_MEIMR) Master 11 Access Error Position */
#define MATRIX_MEIMR_MERR11_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR11_Pos)                /**< (MATRIX_MEIMR) Master 11 Access Error Mask */
#define MATRIX_MEIMR_MERR11(value)            (MATRIX_MEIMR_MERR11_Msk & ((value) << MATRIX_MEIMR_MERR11_Pos))
#define MATRIX_MEIMR_MERR12_Pos               _U_(12)                                              /**< (MATRIX_MEIMR) Master 12 Access Error Position */
#define MATRIX_MEIMR_MERR12_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR12_Pos)                /**< (MATRIX_MEIMR) Master 12 Access Error Mask */
#define MATRIX_MEIMR_MERR12(value)            (MATRIX_MEIMR_MERR12_Msk & ((value) << MATRIX_MEIMR_MERR12_Pos))
#define MATRIX_MEIMR_MERR13_Pos               _U_(13)                                              /**< (MATRIX_MEIMR) Master 13 Access Error Position */
#define MATRIX_MEIMR_MERR13_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR13_Pos)                /**< (MATRIX_MEIMR) Master 13 Access Error Mask */
#define MATRIX_MEIMR_MERR13(value)            (MATRIX_MEIMR_MERR13_Msk & ((value) << MATRIX_MEIMR_MERR13_Pos))
#define MATRIX_MEIMR_MERR14_Pos               _U_(14)                                              /**< (MATRIX_MEIMR) Master 14 Access Error Position */
#define MATRIX_MEIMR_MERR14_Msk               (_U_(0x1) << MATRIX_MEIMR_MERR14_Pos)                /**< (MATRIX_MEIMR) Master 14 Access Error Mask */
#define MATRIX_MEIMR_MERR14(value)            (MATRIX_MEIMR_MERR14_Msk & ((value) << MATRIX_MEIMR_MERR14_Pos))
#define MATRIX_MEIMR_Msk                      _U_(0x00007FFF)                                      /**< (MATRIX_MEIMR) Register Mask  */

#define MATRIX_MEIMR_MERR_Pos                 _U_(0)                                               /**< (MATRIX_MEIMR Position) Master x4 Access Error */
#define MATRIX_MEIMR_MERR_Msk                 (_U_(0x7FFF) << MATRIX_MEIMR_MERR_Pos)               /**< (MATRIX_MEIMR Mask) MERR */
#define MATRIX_MEIMR_MERR(value)              (MATRIX_MEIMR_MERR_Msk & ((value) << MATRIX_MEIMR_MERR_Pos)) 

/* -------- MATRIX_MESR : (MATRIX Offset: 0x15C) ( R/ 32) Master Error Status Register -------- */
#define MATRIX_MESR_MERR0_Pos                 _U_(0)                                               /**< (MATRIX_MESR) Master 0 Access Error Position */
#define MATRIX_MESR_MERR0_Msk                 (_U_(0x1) << MATRIX_MESR_MERR0_Pos)                  /**< (MATRIX_MESR) Master 0 Access Error Mask */
#define MATRIX_MESR_MERR0(value)              (MATRIX_MESR_MERR0_Msk & ((value) << MATRIX_MESR_MERR0_Pos))
#define MATRIX_MESR_MERR1_Pos                 _U_(1)                                               /**< (MATRIX_MESR) Master 1 Access Error Position */
#define MATRIX_MESR_MERR1_Msk                 (_U_(0x1) << MATRIX_MESR_MERR1_Pos)                  /**< (MATRIX_MESR) Master 1 Access Error Mask */
#define MATRIX_MESR_MERR1(value)              (MATRIX_MESR_MERR1_Msk & ((value) << MATRIX_MESR_MERR1_Pos))
#define MATRIX_MESR_MERR2_Pos                 _U_(2)                                               /**< (MATRIX_MESR) Master 2 Access Error Position */
#define MATRIX_MESR_MERR2_Msk                 (_U_(0x1) << MATRIX_MESR_MERR2_Pos)                  /**< (MATRIX_MESR) Master 2 Access Error Mask */
#define MATRIX_MESR_MERR2(value)              (MATRIX_MESR_MERR2_Msk & ((value) << MATRIX_MESR_MERR2_Pos))
#define MATRIX_MESR_MERR3_Pos                 _U_(3)                                               /**< (MATRIX_MESR) Master 3 Access Error Position */
#define MATRIX_MESR_MERR3_Msk                 (_U_(0x1) << MATRIX_MESR_MERR3_Pos)                  /**< (MATRIX_MESR) Master 3 Access Error Mask */
#define MATRIX_MESR_MERR3(value)              (MATRIX_MESR_MERR3_Msk & ((value) << MATRIX_MESR_MERR3_Pos))
#define MATRIX_MESR_MERR4_Pos                 _U_(4)                                               /**< (MATRIX_MESR) Master 4 Access Error Position */
#define MATRIX_MESR_MERR4_Msk                 (_U_(0x1) << MATRIX_MESR_MERR4_Pos)                  /**< (MATRIX_MESR) Master 4 Access Error Mask */
#define MATRIX_MESR_MERR4(value)              (MATRIX_MESR_MERR4_Msk & ((value) << MATRIX_MESR_MERR4_Pos))
#define MATRIX_MESR_MERR5_Pos                 _U_(5)                                               /**< (MATRIX_MESR) Master 5 Access Error Position */
#define MATRIX_MESR_MERR5_Msk                 (_U_(0x1) << MATRIX_MESR_MERR5_Pos)                  /**< (MATRIX_MESR) Master 5 Access Error Mask */
#define MATRIX_MESR_MERR5(value)              (MATRIX_MESR_MERR5_Msk & ((value) << MATRIX_MESR_MERR5_Pos))
#define MATRIX_MESR_MERR6_Pos                 _U_(6)                                               /**< (MATRIX_MESR) Master 6 Access Error Position */
#define MATRIX_MESR_MERR6_Msk                 (_U_(0x1) << MATRIX_MESR_MERR6_Pos)                  /**< (MATRIX_MESR) Master 6 Access Error Mask */
#define MATRIX_MESR_MERR6(value)              (MATRIX_MESR_MERR6_Msk & ((value) << MATRIX_MESR_MERR6_Pos))
#define MATRIX_MESR_MERR7_Pos                 _U_(7)                                               /**< (MATRIX_MESR) Master 7 Access Error Position */
#define MATRIX_MESR_MERR7_Msk                 (_U_(0x1) << MATRIX_MESR_MERR7_Pos)                  /**< (MATRIX_MESR) Master 7 Access Error Mask */
#define MATRIX_MESR_MERR7(value)              (MATRIX_MESR_MERR7_Msk & ((value) << MATRIX_MESR_MERR7_Pos))
#define MATRIX_MESR_MERR8_Pos                 _U_(8)                                               /**< (MATRIX_MESR) Master 8 Access Error Position */
#define MATRIX_MESR_MERR8_Msk                 (_U_(0x1) << MATRIX_MESR_MERR8_Pos)                  /**< (MATRIX_MESR) Master 8 Access Error Mask */
#define MATRIX_MESR_MERR8(value)              (MATRIX_MESR_MERR8_Msk & ((value) << MATRIX_MESR_MERR8_Pos))
#define MATRIX_MESR_MERR9_Pos                 _U_(9)                                               /**< (MATRIX_MESR) Master 9 Access Error Position */
#define MATRIX_MESR_MERR9_Msk                 (_U_(0x1) << MATRIX_MESR_MERR9_Pos)                  /**< (MATRIX_MESR) Master 9 Access Error Mask */
#define MATRIX_MESR_MERR9(value)              (MATRIX_MESR_MERR9_Msk & ((value) << MATRIX_MESR_MERR9_Pos))
#define MATRIX_MESR_MERR10_Pos                _U_(10)                                              /**< (MATRIX_MESR) Master 10 Access Error Position */
#define MATRIX_MESR_MERR10_Msk                (_U_(0x1) << MATRIX_MESR_MERR10_Pos)                 /**< (MATRIX_MESR) Master 10 Access Error Mask */
#define MATRIX_MESR_MERR10(value)             (MATRIX_MESR_MERR10_Msk & ((value) << MATRIX_MESR_MERR10_Pos))
#define MATRIX_MESR_MERR11_Pos                _U_(11)                                              /**< (MATRIX_MESR) Master 11 Access Error Position */
#define MATRIX_MESR_MERR11_Msk                (_U_(0x1) << MATRIX_MESR_MERR11_Pos)                 /**< (MATRIX_MESR) Master 11 Access Error Mask */
#define MATRIX_MESR_MERR11(value)             (MATRIX_MESR_MERR11_Msk & ((value) << MATRIX_MESR_MERR11_Pos))
#define MATRIX_MESR_MERR12_Pos                _U_(12)                                              /**< (MATRIX_MESR) Master 12 Access Error Position */
#define MATRIX_MESR_MERR12_Msk                (_U_(0x1) << MATRIX_MESR_MERR12_Pos)                 /**< (MATRIX_MESR) Master 12 Access Error Mask */
#define MATRIX_MESR_MERR12(value)             (MATRIX_MESR_MERR12_Msk & ((value) << MATRIX_MESR_MERR12_Pos))
#define MATRIX_MESR_MERR13_Pos                _U_(13)                                              /**< (MATRIX_MESR) Master 13 Access Error Position */
#define MATRIX_MESR_MERR13_Msk                (_U_(0x1) << MATRIX_MESR_MERR13_Pos)                 /**< (MATRIX_MESR) Master 13 Access Error Mask */
#define MATRIX_MESR_MERR13(value)             (MATRIX_MESR_MERR13_Msk & ((value) << MATRIX_MESR_MERR13_Pos))
#define MATRIX_MESR_MERR14_Pos                _U_(14)                                              /**< (MATRIX_MESR) Master 14 Access Error Position */
#define MATRIX_MESR_MERR14_Msk                (_U_(0x1) << MATRIX_MESR_MERR14_Pos)                 /**< (MATRIX_MESR) Master 14 Access Error Mask */
#define MATRIX_MESR_MERR14(value)             (MATRIX_MESR_MERR14_Msk & ((value) << MATRIX_MESR_MERR14_Pos))
#define MATRIX_MESR_Msk                       _U_(0x00007FFF)                                      /**< (MATRIX_MESR) Register Mask  */

#define MATRIX_MESR_MERR_Pos                  _U_(0)                                               /**< (MATRIX_MESR Position) Master x4 Access Error */
#define MATRIX_MESR_MERR_Msk                  (_U_(0x7FFF) << MATRIX_MESR_MERR_Pos)                /**< (MATRIX_MESR Mask) MERR */
#define MATRIX_MESR_MERR(value)               (MATRIX_MESR_MERR_Msk & ((value) << MATRIX_MESR_MERR_Pos)) 

/* -------- MATRIX_MEAR : (MATRIX Offset: 0x160) ( R/ 32) Master 0 Error Address Register -------- */
#define MATRIX_MEAR_ERRADD_Pos                _U_(0)                                               /**< (MATRIX_MEAR) Master Error Address Position */
#define MATRIX_MEAR_ERRADD_Msk                (_U_(0xFFFFFFFF) << MATRIX_MEAR_ERRADD_Pos)          /**< (MATRIX_MEAR) Master Error Address Mask */
#define MATRIX_MEAR_ERRADD(value)             (MATRIX_MEAR_ERRADD_Msk & ((value) << MATRIX_MEAR_ERRADD_Pos))
#define MATRIX_MEAR_Msk                       _U_(0xFFFFFFFF)                                      /**< (MATRIX_MEAR) Register Mask  */


/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1E4) (R/W 32) Write Protect Mode Register -------- */
#define MATRIX_WPMR_WPEN_Pos                  _U_(0)                                               /**< (MATRIX_WPMR) Write Protection Enable Position */
#define MATRIX_WPMR_WPEN_Msk                  (_U_(0x1) << MATRIX_WPMR_WPEN_Pos)                   /**< (MATRIX_WPMR) Write Protection Enable Mask */
#define MATRIX_WPMR_WPEN(value)               (MATRIX_WPMR_WPEN_Msk & ((value) << MATRIX_WPMR_WPEN_Pos))
#define MATRIX_WPMR_CFGFRZ_Pos                _U_(7)                                               /**< (MATRIX_WPMR) Configuration Freeze Position */
#define MATRIX_WPMR_CFGFRZ_Msk                (_U_(0x1) << MATRIX_WPMR_CFGFRZ_Pos)                 /**< (MATRIX_WPMR) Configuration Freeze Mask */
#define MATRIX_WPMR_CFGFRZ(value)             (MATRIX_WPMR_CFGFRZ_Msk & ((value) << MATRIX_WPMR_CFGFRZ_Pos))
#define MATRIX_WPMR_WPKEY_Pos                 _U_(8)                                               /**< (MATRIX_WPMR) Write Protection Key Position */
#define MATRIX_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << MATRIX_WPMR_WPKEY_Pos)             /**< (MATRIX_WPMR) Write Protection Key Mask */
#define MATRIX_WPMR_WPKEY(value)              (MATRIX_WPMR_WPKEY_Msk & ((value) << MATRIX_WPMR_WPKEY_Pos))
#define   MATRIX_WPMR_WPKEY_PASSWD_Val        _U_(0x4D4154)                                        /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0.  */
#define MATRIX_WPMR_WPKEY_PASSWD              (MATRIX_WPMR_WPKEY_PASSWD_Val << MATRIX_WPMR_WPKEY_Pos) /**< (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0. Position  */
#define MATRIX_WPMR_Msk                       _U_(0xFFFFFF81)                                      /**< (MATRIX_WPMR) Register Mask  */


/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1E8) ( R/ 32) Write Protect Status Register -------- */
#define MATRIX_WPSR_WPVS_Pos                  _U_(0)                                               /**< (MATRIX_WPSR) Write Protection Violation Status Position */
#define MATRIX_WPSR_WPVS_Msk                  (_U_(0x1) << MATRIX_WPSR_WPVS_Pos)                   /**< (MATRIX_WPSR) Write Protection Violation Status Mask */
#define MATRIX_WPSR_WPVS(value)               (MATRIX_WPSR_WPVS_Msk & ((value) << MATRIX_WPSR_WPVS_Pos))
#define MATRIX_WPSR_WPVSRC_Pos                _U_(8)                                               /**< (MATRIX_WPSR) Write Protection Violation Source Position */
#define MATRIX_WPSR_WPVSRC_Msk                (_U_(0xFFFF) << MATRIX_WPSR_WPVSRC_Pos)              /**< (MATRIX_WPSR) Write Protection Violation Source Mask */
#define MATRIX_WPSR_WPVSRC(value)             (MATRIX_WPSR_WPVSRC_Msk & ((value) << MATRIX_WPSR_WPVSRC_Pos))
#define MATRIX_WPSR_Msk                       _U_(0x00FFFF01)                                      /**< (MATRIX_WPSR) Register Mask  */


/** \brief MATRIX register offsets definitions */
#define MATRIX_PRAS_REG_OFST           (0x00)              /**< (MATRIX_PRAS) Priority Register A for Slave 0 Offset */
#define MATRIX_PRBS_REG_OFST           (0x04)              /**< (MATRIX_PRBS) Priority Register B for Slave 0 Offset */
#define MATRIX_MCFG_REG_OFST           (0x00)              /**< (MATRIX_MCFG) Master Configuration Register Offset */
#define MATRIX_MCFG0_REG_OFST          (0x00)              /**< (MATRIX_MCFG0) Master Configuration Register Offset */
#define MATRIX_MCFG1_REG_OFST          (0x04)              /**< (MATRIX_MCFG1) Master Configuration Register Offset */
#define MATRIX_MCFG2_REG_OFST          (0x08)              /**< (MATRIX_MCFG2) Master Configuration Register Offset */
#define MATRIX_MCFG3_REG_OFST          (0x0C)              /**< (MATRIX_MCFG3) Master Configuration Register Offset */
#define MATRIX_MCFG4_REG_OFST          (0x10)              /**< (MATRIX_MCFG4) Master Configuration Register Offset */
#define MATRIX_MCFG5_REG_OFST          (0x14)              /**< (MATRIX_MCFG5) Master Configuration Register Offset */
#define MATRIX_MCFG6_REG_OFST          (0x18)              /**< (MATRIX_MCFG6) Master Configuration Register Offset */
#define MATRIX_MCFG7_REG_OFST          (0x1C)              /**< (MATRIX_MCFG7) Master Configuration Register Offset */
#define MATRIX_MCFG8_REG_OFST          (0x20)              /**< (MATRIX_MCFG8) Master Configuration Register Offset */
#define MATRIX_MCFG9_REG_OFST          (0x24)              /**< (MATRIX_MCFG9) Master Configuration Register Offset */
#define MATRIX_MCFG10_REG_OFST         (0x28)              /**< (MATRIX_MCFG10) Master Configuration Register Offset */
#define MATRIX_MCFG11_REG_OFST         (0x2C)              /**< (MATRIX_MCFG11) Master Configuration Register Offset */
#define MATRIX_MCFG12_REG_OFST         (0x30)              /**< (MATRIX_MCFG12) Master Configuration Register Offset */
#define MATRIX_MCFG13_REG_OFST         (0x34)              /**< (MATRIX_MCFG13) Master Configuration Register Offset */
#define MATRIX_MCFG14_REG_OFST         (0x38)              /**< (MATRIX_MCFG14) Master Configuration Register Offset */
#define MATRIX_SCFG_REG_OFST           (0x40)              /**< (MATRIX_SCFG) Slave Configuration Register Offset */
#define MATRIX_SCFG0_REG_OFST          (0x40)              /**< (MATRIX_SCFG0) Slave Configuration Register Offset */
#define MATRIX_SCFG1_REG_OFST          (0x44)              /**< (MATRIX_SCFG1) Slave Configuration Register Offset */
#define MATRIX_SCFG2_REG_OFST          (0x48)              /**< (MATRIX_SCFG2) Slave Configuration Register Offset */
#define MATRIX_SCFG3_REG_OFST          (0x4C)              /**< (MATRIX_SCFG3) Slave Configuration Register Offset */
#define MATRIX_SCFG4_REG_OFST          (0x50)              /**< (MATRIX_SCFG4) Slave Configuration Register Offset */
#define MATRIX_SCFG5_REG_OFST          (0x54)              /**< (MATRIX_SCFG5) Slave Configuration Register Offset */
#define MATRIX_SCFG6_REG_OFST          (0x58)              /**< (MATRIX_SCFG6) Slave Configuration Register Offset */
#define MATRIX_SCFG7_REG_OFST          (0x5C)              /**< (MATRIX_SCFG7) Slave Configuration Register Offset */
#define MATRIX_SCFG8_REG_OFST          (0x60)              /**< (MATRIX_SCFG8) Slave Configuration Register Offset */
#define MATRIX_SCFG9_REG_OFST          (0x64)              /**< (MATRIX_SCFG9) Slave Configuration Register Offset */
#define MATRIX_SCFG10_REG_OFST         (0x68)              /**< (MATRIX_SCFG10) Slave Configuration Register Offset */
#define MATRIX_SCFG11_REG_OFST         (0x6C)              /**< (MATRIX_SCFG11) Slave Configuration Register Offset */
#define MATRIX_SCFG12_REG_OFST         (0x70)              /**< (MATRIX_SCFG12) Slave Configuration Register Offset */
#define MATRIX_MRCR_REG_OFST           (0x100)             /**< (MATRIX_MRCR) Master Remap Control Register Offset */
#define MATRIX_MEIER_REG_OFST          (0x150)             /**< (MATRIX_MEIER) Master Error Interrupt Enable Register Offset */
#define MATRIX_MEIDR_REG_OFST          (0x154)             /**< (MATRIX_MEIDR) Master Error Interrupt Disable Register Offset */
#define MATRIX_MEIMR_REG_OFST          (0x158)             /**< (MATRIX_MEIMR) Master Error Interrupt Mask Register Offset */
#define MATRIX_MESR_REG_OFST           (0x15C)             /**< (MATRIX_MESR) Master Error Status Register Offset */
#define MATRIX_MEAR_REG_OFST           (0x160)             /**< (MATRIX_MEAR) Master 0 Error Address Register Offset */
#define MATRIX_MEAR0_REG_OFST          (0x160)             /**< (MATRIX_MEAR0) Master 0 Error Address Register Offset */
#define MATRIX_MEAR1_REG_OFST          (0x164)             /**< (MATRIX_MEAR1) Master 0 Error Address Register Offset */
#define MATRIX_MEAR2_REG_OFST          (0x168)             /**< (MATRIX_MEAR2) Master 0 Error Address Register Offset */
#define MATRIX_MEAR3_REG_OFST          (0x16C)             /**< (MATRIX_MEAR3) Master 0 Error Address Register Offset */
#define MATRIX_MEAR4_REG_OFST          (0x170)             /**< (MATRIX_MEAR4) Master 0 Error Address Register Offset */
#define MATRIX_MEAR5_REG_OFST          (0x174)             /**< (MATRIX_MEAR5) Master 0 Error Address Register Offset */
#define MATRIX_MEAR6_REG_OFST          (0x178)             /**< (MATRIX_MEAR6) Master 0 Error Address Register Offset */
#define MATRIX_MEAR7_REG_OFST          (0x17C)             /**< (MATRIX_MEAR7) Master 0 Error Address Register Offset */
#define MATRIX_MEAR8_REG_OFST          (0x180)             /**< (MATRIX_MEAR8) Master 0 Error Address Register Offset */
#define MATRIX_MEAR9_REG_OFST          (0x184)             /**< (MATRIX_MEAR9) Master 0 Error Address Register Offset */
#define MATRIX_MEAR10_REG_OFST         (0x188)             /**< (MATRIX_MEAR10) Master 0 Error Address Register Offset */
#define MATRIX_MEAR11_REG_OFST         (0x18C)             /**< (MATRIX_MEAR11) Master 0 Error Address Register Offset */
#define MATRIX_MEAR12_REG_OFST         (0x190)             /**< (MATRIX_MEAR12) Master 0 Error Address Register Offset */
#define MATRIX_MEAR13_REG_OFST         (0x194)             /**< (MATRIX_MEAR13) Master 0 Error Address Register Offset */
#define MATRIX_MEAR14_REG_OFST         (0x198)             /**< (MATRIX_MEAR14) Master 0 Error Address Register Offset */
#define MATRIX_WPMR_REG_OFST           (0x1E4)             /**< (MATRIX_WPMR) Write Protect Mode Register Offset */
#define MATRIX_WPSR_REG_OFST           (0x1E8)             /**< (MATRIX_WPSR) Write Protect Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MATRIX_PR register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_PRAS;        /**< Offset: 0x00 (R/W  32) Priority Register A for Slave 0 */
  __IO  uint32_t                       MATRIX_PRBS;        /**< Offset: 0x04 (R/W  32) Priority Register B for Slave 0 */
} matrix_pr_registers_t;

#define MATRIX_PR_NUMBER _U_(13)

/** \brief MATRIX register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_MCFG[15];    /**< Offset: 0x00 (R/W  32) Master Configuration Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       MATRIX_SCFG[13];    /**< Offset: 0x40 (R/W  32) Slave Configuration Register */
  __I   uint8_t                        Reserved2[0x0C];
        matrix_pr_registers_t          MATRIX_PR[MATRIX_PR_NUMBER]; /**< Offset: 0x80  */
  __I   uint8_t                        Reserved3[0x18];
  __IO  uint32_t                       MATRIX_MRCR;        /**< Offset: 0x100 (R/W  32) Master Remap Control Register */
  __I   uint8_t                        Reserved4[0x4C];
  __O   uint32_t                       MATRIX_MEIER;       /**< Offset: 0x150 ( /W  32) Master Error Interrupt Enable Register */
  __O   uint32_t                       MATRIX_MEIDR;       /**< Offset: 0x154 ( /W  32) Master Error Interrupt Disable Register */
  __I   uint32_t                       MATRIX_MEIMR;       /**< Offset: 0x158 (R/   32) Master Error Interrupt Mask Register */
  __I   uint32_t                       MATRIX_MESR;        /**< Offset: 0x15C (R/   32) Master Error Status Register */
  __I   uint32_t                       MATRIX_MEAR[15];    /**< Offset: 0x160 (R/   32) Master 0 Error Address Register */
  __I   uint8_t                        Reserved5[0x48];
  __IO  uint32_t                       MATRIX_WPMR;        /**< Offset: 0x1E4 (R/W  32) Write Protect Mode Register */
  __I   uint32_t                       MATRIX_WPSR;        /**< Offset: 0x1E8 (R/   32) Write Protect Status Register */
} matrix_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X_MATRIX_COMPONENT_H_ */
