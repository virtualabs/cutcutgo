#ifndef HAL_BLUETOOTH_H
#define HAL_BLUETOOTH_H

/*
 * Bluetooth serial link (original Cricut Maker, Maker 3 and Explore 3): the boards' Microchip RN4678
 * module runs in transparent mode, so a paired PC sees a "Standard Serial over Bluetooth" COM port
 * that carries Grbl exactly like USB. The Explore 3 board wires it like the Maker 3's.
 */

#include <stdbool.h>

#if defined(BOARD_MAKER3)          /* original Maker, Maker 3 and Explore 3 builds */
#define CCG_HAS_BT
#endif

#ifdef CCG_HAS_BT
void bt_init(void);
/* Called on every APP_Tasks() pass: feeds received bytes to Grbl and sends its replies. */
void bt_tasks(void);
/* True while the last command came over Bluetooth: Grbl's replies go there, not to USB. */
bool bt_owns_tx(void);
/* A command arrived over USB: replies go back to USB. */
void bt_release_tx(void);
#endif

#endif /* HAL_BLUETOOTH_H */
