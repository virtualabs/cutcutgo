#!/bin/bash
# Command-line build of cutcutgo for the Cricut Explore 3 (PIC32MK1024MCF100, board VLD-84-100-X5),
# to run under the cutcutgo-bl bootloader.
# Usage (Git Bash):  ./build_explore3.sh   ->  build_explore3/cutcutgo_explore3.uf2 (copy it onto the bootloader drive)
# The Explore 3 shares the Maker 3 code (same PIC32MK); BOARD_EXPLORE3 switches the differences.
# Override tool locations with XC32_DIR / DFP_DIR if yours differ.
set -euo pipefail

XC32_DIR="${XC32_DIR:-/c/Program Files/Microchip/xc32/v5.10}"
DFP_DIR="${DFP_DIR:-/c/Program Files/Microchip/MPLABX/v6.20/packs/Microchip/PIC32MK-MC_DFP/1.11.151}"
CC="$XC32_DIR/bin/xc32-gcc"
BIN2HEX="$XC32_DIR/bin/xc32-bin2hex"

ROOT="$(cd "$(dirname "$0")" && pwd)"
SRC="$ROOT/cutcutgo.X/src"
OUT="$ROOT/build_explore3"
NAME="cutcutgo_explore3"
mkdir -p "$OUT/obj"

COMMON=(-mprocessor=32MK1024MCF100 "-mdfp=$DFP_DIR")
CFLAGS=("${COMMON[@]}" -g -O1 -fno-common -ffunction-sections -fdata-sections
        -DBOARD_MAKER3 -DBOARD_EXPLORE3 -DBOOTLOADER_MODE
        -I"$SRC" -I"$SRC/config/maker3" -Werror-implicit-function-declaration)

SRCS=(
  config/maker3/driver/usb/usbfs/src/drv_usbfs.c
  config/maker3/driver/usb/usbfs/src/drv_usbfs_device.c
  config/maker3/exceptions.c
  config/maker3/initialization.c
  config/maker3/interrupts.c
  config/maker3/peripheral/clk/plib_clk.c
  config/maker3/peripheral/evic/plib_evic.c
  config/maker3/peripheral/gpio/plib_gpio.c
  config/maker3/stdio/xc32_monitor.c
  config/maker3/system/int/src/sys_int.c
  config/maker3/tasks.c
  config/maker3/usb/src/usb_device.c
  config/maker3/usb/src/usb_device_cdc.c
  config/maker3/usb/src/usb_device_cdc_acm.c
  config/maker3/usb_device_init_data.c
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

python -I "$ROOT/tools/make_app_ld.py" "$DFP_DIR/xc32/32MK1024MCF100/p32MK1024MCF100.ld" "$OUT/app.ld"

ELF="$OUT/$NAME.elf"
echo "LD  $ELF"
"$CC" "${COMMON[@]}" -o "$ELF" "${OBJS[@]}" \
  -Wl,--script="$(cygpath -m "$OUT/app.ld")",-Map="$(cygpath -m "$OUT/$NAME.map")" \
  -Wl,--defsym=_min_heap_size=512,--gc-sections
"$BIN2HEX" "$ELF"
python -I "$ROOT/tools/hex2uf2.py" "$OUT/$NAME.hex" "$OUT/$NAME.uf2"
