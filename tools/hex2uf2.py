#!/usr/bin/env python3
"""
hex2uf2.py - convert an XC32 Intel HEX application into a UF2 file for the
cutcutgo-bl PIC32MK1024MCF100 bootloader.

  python tools/hex2uf2.py app.hex app.uf2

Rules enforced (they match fat32.c in the bootloader):
  * family ID 0x4d4b4d43 ("MKMC")
  * only program-flash data in the application window
    0x1D010000 .. 0x1D100000 (physical) is kept; KSEG0/KSEG1 addresses
    (0x9Dxxxxxx / 0xBDxxxxxx) are converted to physical
  * 256 data bytes per block, block addresses 256-byte aligned, gaps filled
    with 0xFF inside a block
  * anything else (boot flash, configuration words, the bootloader area) is
    dropped with a warning: the bootloader can't and mustn't write it
"""
import struct
import sys

UF2_MAGIC0 = 0x0A324655
UF2_MAGIC1 = 0x9E5D5157
UF2_MAGICEND = 0x0AB16F30
UF2_FLAG_FAMILY = 0x00002000
FAMILY_ID = 0x4D4B4D43          # "MKMC" - must match UF2_FAMILYID in fat32.h
APP_START = 0x1D010000
APP_END = 0x1D100000
PAYLOAD = 256


def read_hex(path):
    mem, base = {}, 0
    for lineno, line in enumerate(open(path), 1):
        line = line.strip()
        if not line:
            continue
        if not line.startswith(":"):
            raise SystemExit("%s:%d: not an Intel HEX record" % (path, lineno))
        raw = bytes.fromhex(line[1:])
        if sum(raw) & 0xFF:
            raise SystemExit("%s:%d: bad checksum" % (path, lineno))
        n, addr, typ = raw[0], (raw[1] << 8) | raw[2], raw[3]
        data = raw[4:4 + n]
        if typ == 0:
            for i, b in enumerate(data):
                mem[base + addr + i] = b
        elif typ == 1:
            break
        elif typ == 2:
            base = int.from_bytes(data, "big") << 4
        elif typ == 4:
            base = int.from_bytes(data, "big") << 16
    return mem


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        sys.exit(1)
    mem = read_hex(sys.argv[1])

    app, dropped = {}, {}
    for addr, b in mem.items():
        pa = addr & 0x1FFFFFFF
        if APP_START <= pa < APP_END:
            app[pa] = b
        else:
            region = "boot flash/config" if pa >= 0x1FC00000 else (
                "bootloader area" if 0x1D000000 <= pa < APP_START else "other")
            dropped[region] = dropped.get(region, 0) + 1

    for region, count in dropped.items():
        print("warning: dropped %d bytes in %s (not writable by the bootloader)" % (count, region))
    if not app:
        raise SystemExit("error: no data in the application window 0x%08X-0x%08X" % (APP_START, APP_END))
    if APP_START not in app:
        print("warning: nothing at 0x%08X - the bootloader jumps there and treats an empty "
              "first word as 'no application'" % APP_START)

    blocks = sorted({a & ~(PAYLOAD - 1) for a in app})
    out = bytearray()
    for i, baddr in enumerate(blocks):
        data = bytes(app.get(baddr + k, 0xFF) for k in range(PAYLOAD))
        header = struct.pack("<8I", UF2_MAGIC0, UF2_MAGIC1, UF2_FLAG_FAMILY, baddr,
                             PAYLOAD, i, len(blocks), FAMILY_ID)
        block = header + data + bytes(476 - PAYLOAD) + struct.pack("<I", UF2_MAGICEND)
        assert len(block) == 512
        out += block

    open(sys.argv[2], "wb").write(out)
    print("wrote %s: %d blocks, 0x%08X-0x%08X" % (sys.argv[2], len(blocks), blocks[0],
                                                   blocks[-1] + PAYLOAD))


if __name__ == "__main__":
    main()
