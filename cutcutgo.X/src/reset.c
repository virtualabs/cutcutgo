#include "reset.h"

__attribute__((__noreturn__)) void reset_soft(void)
{
    /* Software reset */
    SYSKEY = 0x00000000; //write invalid key to force lock
    SYSKEY = 0xAA996655; //write key1 to SYSKEY
    SYSKEY = 0x556699AA; //write key2 to SYSKEY

    /* set SWRST bit to arm reset */
    RSWRSTSET = 1;

    /* read RSWRST register to trigger reset */
    unsigned int dummy;
    dummy = RSWRST;
    dummy++;

    /* prevent any unwanted code execution until reset occurs*/
    while(1);
}