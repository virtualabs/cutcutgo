# CutCutGo: GRBL for Cricut Maker

MPLABX project for a custom Cricut Maker compatible firmware.

## Cricut Maker 3 port

This tree also runs on the **Cricut Maker 3** (main board SCM-84-100-X7, PIC32MK1024MCF100), under the [cutcutgo-bl](https://github.com/DnG-Crafts/cutcutgo-bl) bootloader port for that chip.

- **Build:** run `./build_maker3.sh` in Git Bash, with XC32 v5.10 and the `PIC32MK-MC_DFP` pack. Copy `build_maker3/cutcutgo_maker3.uf2` onto the bootloader's drive.
- **What works:**
  - all five motors are driven by an encoder position servo, and the machine homes at power-on
  - the pen and blade holders, with the blade holder's offset applied by the firmware
  - mat load and eject with the feed button and mat sensor
  - holder-B drive tools are identified and steered (rotary blade, knife, scoring, perforation, wavy, debossing, engraving)
  - registration-mark scanning for print then cut.


## Download Boolloader
The latest pre-compiled maker3 compatible bootloader is available on this [Release page](https://github.com/DnG-Crafts/cutcutgo-bl/releases)


## Download Firmware
The latest pre-compiled maker3 compatible firmware is available on this [Release page](https://github.com/DnG-Crafts/cutcutgo/releases)


## Download CutCraft
The latest pre-compiled design and send software with maker3(cutcutgo) support is available on this [Release page](https://github.com/DnG-Crafts/CutCraft/releases)


## Documentation
The documentation is available on [GitHub Pages](https://virtualabs.github.io/cutcutgo/)


