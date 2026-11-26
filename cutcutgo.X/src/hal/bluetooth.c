/*
 * bluetooth.c - Bluetooth serial link for the original Cricut Maker, the Maker 3 and the Explore 3.
 *
 * All three main boards carry a Microchip RN4678 dual-mode module ("Maker-xxxx", "Maker3-xxxx",
 * "Explore3-xxxx"). The Explore 3 board wires it exactly like the Maker 3 (same pins, UART1, 921600:
 * checked 2026-11-27 with the same pin hunt and UART scans).
 * It runs in transparent mode: a PC that pairs with it gets a "Standard Serial over Bluetooth"
 * COM port, and whatever is sent there comes out of the module's UART, and the other way round.
 * Wiring, found on the machines (2026-11-26) with pin-hunt test builds, a multimeter map of the
 * module pads (original Maker) and a scan of every UART routing code (Maker 3):
 *
 *                    original Maker (PIC32MX470)      Maker 3 (PIC32MK1024MCF100)
 *   RN4678 TXD  ->   RC13 = U3RX (input code 7)       RC1 = U1RX (input code 6)
 *   RN4678 RXD  <-   RD10 = U3TX (RPD10R = 1)         RF1 = U1TX (RPF1R = 1)
 *   RN4678 CTS  <-   RB8  (GPIO)                      RC9 (GPIO)
 *   RN4678 RTS  ->   (not needed at 115200)           RC8 (low = module can take more)
 *   connected   ->   RD15 high                        RA8 low
 *   baud             115200                           921600 (UART clocked from SYSCLK)
 *
 * CTS: low = the module may send; it stalls (buffering about 540 bytes) while CTS is high.
 * The module's reset and boot-mode pins are left alone (pulled up on the boards).
 *
 * Received bytes go through a receive interrupt into a ring buffer, then into Grbl the same way
 * USB bytes do (serial_on_receive(), which also picks off ?, !, ~ and Ctrl-X). Grbl's replies
 * go to the link that sent the last command: Bluetooth from the first byte it delivers, back to
 * USB as soon as USB delivers a byte or the Bluetooth link drops.
 */
#include "hal/config.h"
#include "hal/bluetooth.h"

#ifdef CCG_HAS_BT

#include <stdint.h>
#include <stdbool.h>
#include "definitions.h"
#include "grbl/grbl/grbl.h"

#ifdef BOARD_MAKER1
/* ---- original Maker: UART3 ---- */
#define BT_BAUD          115200UL
#define BT_UCLK          (SYS_FREQ / 2UL)               /* PBCLK */
#define BT_MODE          U3MODE
#define BT_MODESET       U3MODESET
#define BT_STA           U3STA
#define BT_STASET        U3STASET
#define BT_STACLR        U3STACLR
#define BT_BRG           U3BRG
#define BT_TXREG         U3TXREG
#define BT_RXREG         U3RXREG
#define BT_VECTOR        _UART_3_VECTOR
#define BT_IFSCLR        IFS1CLR
#define BT_IECSET        IEC1SET
#define BT_IF_MASK       _IFS1_U3RXIF_MASK
#define BT_IPCCLR        IPC9CLR
#define BT_IPCSET        IPC9SET
#define BT_IP_MASK       (_IPC9_U3IP_MASK | _IPC9_U3IS_MASK)
#define BT_IP_POS        _IPC9_U3IP_POSITION
#define BT_CTS_LAT_SET   LATBSET
#define BT_CTS_LAT_CLR   LATBCLR
#define BT_CTS_BIT       (1UL << 8)                     /* RB8 */
#define BT_LINK_PORT     PORTD
#define BT_LINK_BIT      (1UL << 15)                    /* RD15 */
#define BT_LINK_ACTIVE   BT_LINK_BIT                    /* high = connected */
#define BT_MODULE_READY() (true)                        /* 115200: the module always keeps up */
static void bt_pins(void)
{
    PMD5CLR = _PMD5_U3MD_MASK;          /* plib_clk switches every UART off (PMD5 = 0xfeffffff) */
    TRISCSET = (1UL << 13);             /* RC13: module TXD */
    ANSELBCLR = BT_CTS_BIT;
    LATBCLR = BT_CTS_BIT;
    TRISBCLR = BT_CTS_BIT;              /* RB8: CTS low */
    TRISDSET = BT_LINK_BIT;
    LATDSET = (1UL << 10);
    TRISDCLR = (1UL << 10);             /* RD10: module RXD */
    U3RXR = 0x7U;                       /* U3RX <- RPC13 */
    RPD10R = 0x1U;                      /* RPD10 <- U3TX */
}
#else
/* ---- Maker 3 and Explore 3: UART1 ---- */
#define BT_BAUD          921600UL
#define BT_UCLK          SYS_FREQ                       /* CLKSEL = SYSCLK */
#define BT_MODE          U1MODE
#define BT_MODESET       U1MODESET
#define BT_STA           U1STA
#define BT_STASET        U1STASET
#define BT_STACLR        U1STACLR
#define BT_BRG           U1BRG
#define BT_TXREG         U1TXREG
#define BT_RXREG         U1RXREG
#define BT_VECTOR        _UART1_RX_VECTOR
#define BT_IFSCLR        IFS1CLR
#define BT_IECSET        IEC1SET
#define BT_IF_MASK       _IFS1_U1RXIF_MASK
#define BT_IPCCLR        IPC9CLR
#define BT_IPCSET        IPC9SET
#define BT_IP_MASK       (_IPC9_U1RXIP_MASK | _IPC9_U1RXIS_MASK)
#define BT_IP_POS        _IPC9_U1RXIP_POSITION
#define BT_CTS_LAT_SET   LATCSET
#define BT_CTS_LAT_CLR   LATCCLR
#define BT_CTS_BIT       (1UL << 9)                     /* RC9 */
#define BT_LINK_PORT     PORTA
#define BT_LINK_BIT      (1UL << 8)                     /* RA8 */
#define BT_LINK_ACTIVE   0UL                            /* low = connected */
/* Module RTS (RC8): at 921600 the main chip outruns the Bluetooth link, so only send while the
 * module says it can take more (without this, long replies such as $$ came out garbled). */
#define BT_MODULE_READY() ((PORTC & (1UL << 8)) == 0U)
static void bt_pins(void)
{
    ANSELCCLR = (1UL << 1) | BT_CTS_BIT;
    TRISCSET = (1UL << 1);              /* RC1: module TXD */
    LATCCLR = BT_CTS_BIT;
    TRISCCLR = BT_CTS_BIT;              /* RC9: CTS low */
    ANSELCCLR = (1UL << 8);
    TRISCSET = (1UL << 8);              /* RC8: module RTS */
    ANSELACLR = BT_LINK_BIT;
    TRISASET = BT_LINK_BIT;
    ANSELFCLR = (1UL << 1);
    LATFSET = (1UL << 1);
    TRISFCLR = (1UL << 1);              /* RF1: module RXD */
    U1RXR = 0x6U;                       /* U1RX <- RPC1 */
    RPF1R = 0x1U;                       /* RPF1 <- U1TX */
}
#endif

#define BT_RX_N          512U        /* receive ring (power of two) */
#define BT_PAUSE_AT      384U        /* raise CTS (pause the module) above this many waiting bytes */
#define BT_RESUME_AT     128U        /* lower it again below this */

static volatile uint8_t  g_bt_rx[BT_RX_N];
static volatile uint32_t g_bt_rx_head = 0U;     /* written by the interrupt */
static volatile uint32_t g_bt_rx_tail = 0U;     /* read by bt_tasks() */
static volatile bool     g_bt_owns_tx = false;

static uint32_t bt_rx_count(void)
{
    return (g_bt_rx_head - g_bt_rx_tail) & (BT_RX_N - 1U);
}

/* Empty the UART's receive FIFO into the ring and clear an overrun (which stops reception). */
static void bt_rx_drain(void)
{
    while ((BT_STA & 0x1U) != 0U)                       /* URXDA */
    {
        uint8_t c = (uint8_t)BT_RXREG;
        uint32_t next = (g_bt_rx_head + 1U) & (BT_RX_N - 1U);
        if (next != g_bt_rx_tail) { g_bt_rx[g_bt_rx_head] = c; g_bt_rx_head = next; }
    }
    if ((BT_STA & 0x2U) != 0U) { BT_STACLR = 0x2U; }    /* OERR */
    if (bt_rx_count() >= BT_PAUSE_AT) { BT_CTS_LAT_SET = BT_CTS_BIT; }
}

void __attribute__((vector(BT_VECTOR), interrupt(IPL2SOFT), nomips16)) bt_uart_rx_isr(void)
{
    /* Clear the flag BEFORE emptying the FIFO: the flag is only raised again when the FIFO goes
     * from empty to not empty, so a byte that arrived after the last read but before a late clear
     * left data waiting with no interrupt; the FIFO then overran and reception stopped
     * (Maker 3 at 921600, mid-drawing, 2026-11-27). */
    BT_IFSCLR = BT_IF_MASK;
    bt_rx_drain();
}

void bt_init(void)
{
    bt_pins();

    /* 8N1, high-speed baud generator (BRGH: baud = clock / (4 * (BRG + 1))). */
    BT_MODE = 0U;
    BT_STA = 0U;
    BT_BRG = (uint32_t)(((BT_UCLK + (2UL * BT_BAUD)) / (4UL * BT_BAUD)) - 1UL);
#ifdef BOARD_MAKER1
    BT_MODESET = (1UL << 3);                            /* BRGH */
#else
    BT_MODESET = (1UL << 17) | (1UL << 3);              /* CLKSEL = SYSCLK, BRGH */
#endif
    BT_STASET = (1UL << 12) | (1UL << 10);              /* URXEN, UTXEN; interrupt on any byte */
    BT_MODESET = (1UL << 15);                           /* ON */

    BT_IPCCLR = BT_IP_MASK;
    BT_IPCSET = (2UL << BT_IP_POS);
    BT_IFSCLR = BT_IF_MASK;
    BT_IECSET = BT_IF_MASK;
}

bool bt_owns_tx(void)
{
    return g_bt_owns_tx;
}

/* Drop output still queued for the other link, so each link only sees replies to its own commands
 * (the greeting and power-on messages, printed before anyone connected, are dropped too). */
static void bt_drop_pending_tx(void)
{
    uint8_t c;
    while (serial_get_tx_buffer_count() > 0U) { if (serial_copy_pending_tx(&c, 1) != 1) { break; } }
}

void bt_release_tx(void)
{
    if (g_bt_owns_tx) { bt_drop_pending_tx(); }
    g_bt_owns_tx = false;
}

/*
 * "#Y..." lines (registration-mark scan #YE, #YN 1, #YZ) are firmware commands, not G-code: on USB
 * app.c hands them to hal_motor_y_cmd(). Bluetooth bytes are split into lines here the same way, so
 * those commands (and so print then cut) work over Bluetooth too. Real-time characters (? ! ~ Ctrl-X
 * and the extended ones) always go straight to Grbl.
 */
extern void hal_motor_y_cmd(const char *line);
extern volatile bool g_y_cmd_busy;

#define BT_LS_START   0U    /* at the start of a line */
#define BT_LS_GRBL    1U    /* inside a line for Grbl */
#define BT_LS_HASH    2U    /* "#" at the start of a line: "#Y" or G-code? */
#define BT_LS_YCMD    3U    /* inside a "#Y" line */
static uint8_t  g_bt_ls = BT_LS_START;
static char     g_bt_yline[48];
static uint32_t g_bt_ylen = 0U;

static bool bt_is_realtime(uint8_t c)
{
    return (c == '?') || (c == '!') || (c == '~') || (c == 0x18U) || (c > 0x7FU);
}

static bool bt_is_eol(uint8_t c)
{
    return (c == '\n') || (c == '\r');
}

void bt_tasks(void)
{
    uint8_t buf[32];
    uint8_t out[sizeof(buf) + 1U];
    uint32_t n = 0U, room, i, o = 0U;

    /* Safety net: data or an overrun waiting with no interrupt pending -> empty it here. */
    if (((BT_STA & 0x3U) != 0U) && ((IFS1 & BT_IF_MASK) == 0U))
    {
        uint32_t st = __builtin_disable_interrupts();
        bt_rx_drain();
        if (st & 1U) { __builtin_enable_interrupts(); }
    }

    /* Link dropped: replies go back to USB. */
    if (g_bt_owns_tx && ((BT_LINK_PORT & BT_LINK_BIT) != BT_LINK_ACTIVE)) { g_bt_owns_tx = false; }

    /* Received bytes into Grbl, as far as its line buffer has room (CTS holds back the rest). */
    room = serial_get_rx_buffer_available();
    room = (room > 2U) ? (room - 2U) : 0U;
    while ((n < sizeof(buf)) && (n < room) && (g_bt_rx_tail != g_bt_rx_head))
    {
        buf[n++] = g_bt_rx[g_bt_rx_tail];
        g_bt_rx_tail = (g_bt_rx_tail + 1U) & (BT_RX_N - 1U);
    }
    if (n > 0U)
    {
        if (!g_bt_owns_tx) { bt_drop_pending_tx(); }
        g_bt_owns_tx = true;
    }
    for (i = 0U; i < n; i++)
    {
        const uint8_t c = buf[i];

        if (bt_is_realtime(c)) { out[o++] = c; continue; }
        switch (g_bt_ls)
        {
        case BT_LS_START:
            if (c == '#') { g_bt_ls = BT_LS_HASH; break; }
            out[o++] = c;
            g_bt_ls = bt_is_eol(c) ? BT_LS_START : BT_LS_GRBL;
            break;
        case BT_LS_GRBL:
            out[o++] = c;
            if (bt_is_eol(c)) { g_bt_ls = BT_LS_START; }
            break;
        case BT_LS_HASH:
            if ((c == 'Y') || (c == 'y'))
            {
                g_bt_yline[0] = '#'; g_bt_yline[1] = 'Y'; g_bt_ylen = 2U;
                g_bt_ls = BT_LS_YCMD;
                break;
            }
            out[o++] = '#';                                     /* not "#Y": give Grbl both */
            out[o++] = c;
            g_bt_ls = bt_is_eol(c) ? BT_LS_START : BT_LS_GRBL;
            break;
        default:                                                /* BT_LS_YCMD */
            if (!bt_is_eol(c))
            {
                if (g_bt_ylen < (sizeof(g_bt_yline) - 1U)) { g_bt_yline[g_bt_ylen++] = (char)c; }
                break;
            }
            g_bt_yline[g_bt_ylen] = 0;
            g_bt_ls = BT_LS_START;
            if (o > 0U) { (void)serial_on_receive(out, (int)o); o = 0U; }   /* G-code before it first */
            if (!g_y_cmd_busy)                                  /* one #Y command at a time, as on USB */
            {
                /* A copy: a long command keeps the serial links serviced, which re-enters
                 * bt_tasks() and could overwrite g_bt_yline. */
                char yline[sizeof(g_bt_yline)];
                uint32_t k;
                for (k = 0U; k <= g_bt_ylen; k++) { yline[k] = g_bt_yline[k]; }
                g_y_cmd_busy = true;
                hal_motor_y_cmd(yline);
                g_y_cmd_busy = false;
            }
            break;
        }
    }
    if (o > 0U) { (void)serial_on_receive(out, (int)o); }
    if (bt_rx_count() <= BT_RESUME_AT) { BT_CTS_LAT_CLR = BT_CTS_BIT; }

    /* Grbl's replies to Bluetooth while it owns them: fill the UART's transmit FIFO. */
    if (g_bt_owns_tx)
    {
        uint8_t c;
#ifdef BOARD_MAKER1
        while (((BT_STA & (1UL << 9)) == 0U) && (serial_get_tx_buffer_count() > 0U))   /* UTXBF: fill the FIFO */
        {
            if (serial_copy_pending_tx(&c, 1) != 1) { break; }
            BT_TXREG = c;
        }
#else
        /* One byte at a time, only when the last one has left (TRMT) and the module is ready:
         * filling the 8-byte FIFO let a few bytes past the module's RTS and garbled long replies. */
        if (((BT_STA & (1UL << 8)) != 0U) && (serial_get_tx_buffer_count() > 0U) && BT_MODULE_READY())
        {
            if (serial_copy_pending_tx(&c, 1) == 1) { BT_TXREG = c; }
        }
#endif
    }
}


#endif /* CCG_HAS_BT */
