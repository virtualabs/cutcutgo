/*******************************************************************************
  Clock configuration for the PIC32MK1024MCF100 port of cutcutgo-bl.

  This is the ONLY place you need to touch when your board has a different
  primary oscillator. Both the configuration bits (initialization.c) and the
  run-time USB PLL setup (plib_clk.c) are derived from these two settings.

  Target clocks:
    SYSCLK = 120 MHz (System PLL, from POSC)
    USBCLK =  48 MHz (USB PLL, from POSC)
*******************************************************************************/

#ifndef CLOCK_CONFIG_H
#define CLOCK_CONFIG_H

/* Primary oscillator frequency in MHz. Supported values: 8, 12 or 24. */
#ifndef BOARD_POSC_MHZ
#define BOARD_POSC_MHZ          12
#endif

/* Primary oscillator type:
 *   1 = crystal / resonator on OSCI+OSCO  (POSCMOD = HS)
 *   0 = external clock signal on OSCI      (POSCMOD = EC)
 */
#ifndef BOARD_POSC_IS_CRYSTAL
#define BOARD_POSC_IS_CRYSTAL   1
#endif

#define SYS_CLK_FREQ_HZ         120000000UL
/* The MIPS core timer (CP0 Count) runs at SYSCLK / 2. */
#define CORE_TIMER_FREQ_HZ      (SYS_CLK_FREQ_HZ / 2UL)

/*
 * USB PLL (UPLLCON) field values. Fout = POSC / IDIV * MULT / ODIV = 48 MHz.
 *   PLLRANGE: 1 = 5-10 MHz, 2 = 8-16 MHz (input after IDIV)
 *   PLLIDIV : divider - 1
 *   PLLMULT : multiplier - 1
 *   PLLODIV : 1 = /2, 2 = /4, 3 = /8, 4 = /16, 5 = /32
 */
#if (BOARD_POSC_MHZ == 12)
    /* 12 MHz / 1 * 32 / 8 = 48 MHz */
    #define UPLL_RANGE          2U
    #define UPLL_IDIV           0U
    #define UPLL_MULT           31U
    #define UPLL_ODIV           3U
#elif (BOARD_POSC_MHZ == 24)
    /* 24 MHz / 2 * 32 / 8 = 48 MHz */
    #define UPLL_RANGE          2U
    #define UPLL_IDIV           1U
    #define UPLL_MULT           31U
    #define UPLL_ODIV           3U
#elif (BOARD_POSC_MHZ == 8)
    /* 8 MHz / 1 * 48 / 8 = 48 MHz */
    #define UPLL_RANGE          1U
    #define UPLL_IDIV           0U
    #define UPLL_MULT           47U
    #define UPLL_ODIV           3U
#else
    #error "BOARD_POSC_MHZ must be 8, 12 or 24 (see clock_config.h)"
#endif

#define UPLLCON_VALUE   ( (UPLL_ODIV  << _UPLLCON_PLLODIV_POSITION)  \
                        | (UPLL_MULT  << _UPLLCON_PLLMULT_POSITION)  \
                        | (UPLL_IDIV  << _UPLLCON_PLLIDIV_POSITION)  \
                        | (UPLL_RANGE << _UPLLCON_PLLRANGE_POSITION) )

#endif /* CLOCK_CONFIG_H */
