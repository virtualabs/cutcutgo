#!/usr/bin/env bash

FAMILY_ID='0x4d414b52'
APP_BASE_ADDR='0x1d010000'
CCG_BL_HEX='../cutcutgo.X/dist/cutcutgo_bl/production/cutcutgo.X.production.hex'
CCG_BL_BIN='../cutcutgo.X/dist/cutcutgo_bl/production/cutcutgo-app.bin'
CCG_BL_UF2='../release/Cutcutgo-app.uf2'

# Make sure our hex file exists
if [ -f "$CCG_BL_HEX" ]; then
	# Convert hex file into bin
	objcopy -Iihex -Obinary $CCG_BL_HEX $CUTCUTH $CCG_BL_BIN
	./uf2conv.py -c -f $FAMILY_ID -b $APP_BASE_ADDR -o $CCG_BL_UF2 $CCG_BL_BIN
fi
