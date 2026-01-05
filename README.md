# CutCutGo: GRBL for Cricut Maker

MPLABX project for a custom Cricut Maker compatible firmware.

## Download Firmware
The latest pre-compiled firmwares (standalone and bootloader versions) are available on this [Release page](https://github.com/virtualabs/cutcutgo/releases/tag/latest)

## Documentation
The documentation is available on [GitHub Pages](https://virtualabs.github.io/cutcutgo/)

## How to contribute ?

Current version of CutcutGo has been developed for the Cricut Maker Champagne (version 1) which is quite old now. Support for
newer versions like the Cricut Maker 3 require a complete reverse-engineering of their electronics and critical modifications
made to the firmware to make it compile and run on multiple targets (and same for our custom bootloader).

Moreover, current version of CutcutGo still has issues and missing features that really need to be taken care of. Below is
a short list of what needs to be done to free all Cricut Makers and let users control them through different means.

**Core issues and features**

[ ] Improve GRBL to drive DC motors not like steppers but with a decent PID-based algorithm (smoother movements, reduce vibrations when X and Y axes are driven together)
[ ] Add support for Cricut's color sensor located in the tool holder (at least for loading/unloading cutting mat)
[ ] Add support for motorized tool located in the head (DC motor driver as well as position sensing through the associated IR LED ?)
[ ] Add a Bluetooth Low Energy communication channel to allow wireless cutting (serial communication over BLE through a standard GATT profile ?)
[ ] Get rid of MPLABX because it's just a nightmare to use for development

**Cricut Maker 3 reverse-engineering**

[ ] Reverse-engineering and documentation of its hardware (micro-controller used, debug port, schematics, motors' characteristics like reduction ratio, etc...)
[ ] Implement specific compilation directives to allow CutcutGo to compile on different targets (if possible)
