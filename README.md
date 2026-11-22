# CutCutGo: GRBL for Cricut Maker

MPLABX project for a custom Cricut Maker compatible firmware, with ports to the Cricut Maker 3 and the Cricut Explore 3, and the original Cricut Maker.

## Cricut Maker 3 port

This tree also runs on the **Cricut Maker 3** (main board SCM-84-100-X7, PIC32MK1024MCF100), under the [cutcutgo-bl](https://github.com/DnG-Crafts/cutcutgo-bl) bootloader port for that chip.

- **Build:** run `./build_maker3.sh` in Git Bash, with XC32 v5.10 and the `PIC32MK-MC_DFP` pack. Copy `build_maker3/cutcutgo_maker3.uf2` onto the bootloader's drive.
- **What works:**
  - all five motors are driven by an encoder position servo, and the machine homes at power-on
  - the pen and blade holders, with the blade holder's offset applied by the firmware
  - mat load and eject with the feed button and mat sensor
  - holder-B drive tools are identified and steered (rotary blade, knife, scoring, perforation, wavy, debossing, engraving)
  - registration-mark scanning for print then cut.

## Cricut Explore 3 port

The same tree also builds for the **Cricut Explore 3** (main board VLD-84-100-X5, also a PIC32MK1024MCF100), under the same bootloader. It shares the Maker 3 code; the `BOARD_EXPLORE3` build switch selects the differences.

- **Build:** run `./build_explore3.sh` in Git Bash (same tools as the Maker 3). Copy `build_explore3/cutcutgo_explore3.uf2` onto the bootloader's drive.
- **What works:**
  - X and Y on the encoder position servo, and the machine homes both clamps and X at power-on (and on `$H`)
  - both clamps (stepper motors with a top sensor): pen in clamp A (`T0`), fine-point drag blade in clamp B (`T1`), with clamp B's offset applied by the firmware
  - mat load and eject with the feed button and mat sensor
  - registration-mark scanning for print then cut (`#YE`), using the Explore 3's own colour sensor.

## Original Cricut Maker

The same tree also builds for the original **Cricut Maker** (PIC32MX470F512L), running the Maker 3 code: the encoder position servo, homing, tool detection and steering, and print then cut. The `BOARD_MAKER1` build switch selects its pins and settings. It runs under the [cutcutgo-bl](https://github.com/DnG-Crafts/cutcutgo-bl) bootloader's original Maker build (`./build.sh maker`, UF2 family "MAKR").

- **Build:** run `./build_maker.sh` in Git Bash, with XC32 v5.10 and the `PIC32MX_DFP` pack. Copy `build_maker/cutcutgo_maker.uf2` onto the bootloader's drive.
- **What works** (tested on the machine):
  - all five motors on the encoder position servo, with damping tuned on the machine; the machine homes at power-on
  - X travel 0 to 340 mm, as on the Maker 3; the pen draws to size (a 40 mm square measured 40 x 40 mm)
  - pen in holder A (`T0`) and blades in holder B (`T1`), with holder B's offset applied by the firmware
  - holder-B drive tools: every tool type is identified (scoring wheel, perforation, fine debossing, wavy blade, engraving, knife, rotary blade), and every steered tool lines up with the direction of travel
  - print then cut (`#YE`), using the carriage's colour sensor; a full run cut on the printed line.


## Download Boolloader
The latest pre-compiled compatible bootloader is available on this [Release page](https://github.com/DnG-Crafts/cutcutgo-bl/releases)


## Download Firmware
The latest pre-compiled firmwares are available on this [Release page](https://github.com/DnG-Crafts/cutcutgo/releases/tag/latest)


## Download CutCraft
The latest pre-compiled design and send software with cutcutgo support is available on this [Release page](https://github.com/DnG-Crafts/CutCraft/releases)


## Documentation
The documentation is available on [GitHub Pages](https://virtualabs.github.io/cutcutgo/)