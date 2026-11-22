#!/bin/bash
# Command-line build of cutcutgo for the original Cricut Maker (PIC32MX470F512L),
# to run under the cutcutgo-bl bootloader (built with "./build.sh maker" in cutcutgo-bl).
# Usage (Git Bash):  ./build_maker.sh   ->  build_maker/cutcutgo_maker.uf2 (copy it onto the bootloader drive)
# Override tool locations with XC32_DIR / DFP_DIR if yours differ.
set -euo pipefail

XC32_DIR="${XC32_DIR:-/c/Program Files/Microchip/xc32/v5.10}"
DFP_DIR="${DFP_DIR:-/c/Program Files/Microchip/MPLABX/v6.20/packs/Microchip/PIC32MX_DFP/1.5.259}"
CC="$XC32_DIR/bin/xc32-gcc"
BIN2HEX="$XC32_DIR/bin/xc32-bin2hex"

ROOT="$(cd "$(dirname "$0")" && pwd)"
SRC="$ROOT/cutcutgo.X/src"
OUT="$ROOT/build_maker"
NAME="cutcutgo_maker"
CFG="config/cutcutgo"
mkdir -p "$OUT/obj"

COMMON=(-mprocessor=32MX470F512L "-mdfp=$DFP_DIR")
CFLAGS=("${COMMON[@]}" -g -O1 -fno-common -ffunction-sections -fdata-sections
        -DBOARD_MAKER3 -DBOARD_MAKER1 -DBOOTLOADER_MODE
        -I"$SRC" -I"$SRC/$CFG" -Werror-implicit-function-declaration)

SRCS=(
  $CFG/driver/usb/usbfs/src/drv_usbfs.c
  $CFG/driver/usb/usbfs/src/drv_usbfs_device.c
  $CFG/bsp/bsp.c
  $CFG/exceptions.c
  $CFG/initialization.c
  $CFG/interrupts.c
  $CFG/peripheral/clk/plib_clk.c
  $CFG/peripheral/evic/plib_evic.c
  $CFG/peripheral/gpio/plib_gpio.c
  $CFG/stdio/xc32_monitor.c
  $CFG/system/int/src/sys_int.c
  $CFG/tasks.c
  $CFG/usb/src/usb_device.c
  $CFG/usb/src/usb_device_cdc.c
  $CFG/usb/src/usb_device_cdc_acm.c
  $CFG/usb_device_init_data.c
  grbl/grbl/settings.c grbl/grbl/gcode.c grbl/grbl/coolant_control.c grbl/grbl/jog.c
  grbl/grbl/print.c grbl/grbl/motion_control.c grbl/grbl/protocol.c
  grbl/grbl/spindle_control.c grbl/grbl/serial.c grbl/grbl/planner.c grbl/grbl/system.c
  grbl/grbl/stepper.c grbl/grbl/nuts_bolts.c grbl/grbl/main.c grbl/grbl/report.c
  grbl/grbl/eeprom.c grbl/grbl/limits.c grbl/grbl/probe.c
  hal/motor_maker3.c hal/timer.c hal/led.c hal/watchdog.c hal/button.c
  main.c app.c reset.c
)

OBJS=()
cd "$SRC"
for s in "${SRCS[@]}"; do
  o="$OUT/obj/$(echo "$s" | tr '/' '_').o"
  echo "CC  $s"
  "$CC" "${CFLAGS[@]}" -c "$s" -o "$o"
  OBJS+=("$o")
done

# Application linker script for the bootloader (app at 0x9D010000), from the MPLAB X project.
ELF="$OUT/$NAME.elf"
echo "LD  $ELF"
"$CC" "${COMMON[@]}" -o "$ELF" "${OBJS[@]}" \
  -Wl,--script="$(cygpath -m "$SRC/$CFG/p32MX470F512H.bl.ld")",-Map="$(cygpath -m "$OUT/$NAME.map")" \
  -Wl,--defsym=_min_heap_size=512,--gc-sections
"$BIN2HEX" "$ELF"
python -I "$ROOT/tools/hex2uf2.py" --maker "$OUT/$NAME.hex" "$OUT/$NAME.uf2"
