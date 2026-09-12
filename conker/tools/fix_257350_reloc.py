#!/usr/bin/env python3
"""
Fix relocations for func_160021FC's switch jump table in debugger_257350.c.o.

While debugger_257350.c still contains GLOBAL_ASM blocks (func_16001BB4 and func_1600288C),
its rodata is not yet migrated to a separate subsegment in conker.us.yaml.
IDO 5.3 compiles func_160021FC's switch statement into a local jump table in .rodata.
Since .rodata of debugger_257350.c.o is not included in the linker script, GNU ld discards
it and fails the link.

This script retargets the two switch relocations (R_MIPS_HI16 and R_MIPS_LO16) to the
canonical jump table symbol D_1600487C (located in asm/data/25A0F0.rodata.s), producing
a 100% bit-exact match against the retail US cartridge.
"""
import sys
import struct

def fix_relocs(obj_path):
    with open(obj_path, 'rb') as f:
        data = bytearray(f.read())

    e_shoff, = struct.unpack('>I', data[32:36])
    e_shentsize, = struct.unpack('>H', data[46:48])
    e_shnum, = struct.unpack('>H', data[48:50])
    e_shstrndx, = struct.unpack('>H', data[50:52])

    shstr_hdr = data[e_shoff + e_shstrndx * e_shentsize : e_shoff + (e_shstrndx + 1) * e_shentsize]
    shstr_offset, = struct.unpack('>I', shstr_hdr[16:20])

    sections = {}
    for i in range(e_shnum):
        sh = data[e_shoff + i * e_shentsize : e_shoff + (i + 1) * e_shentsize]
        sh_name, sh_type, sh_flags, sh_addr, sh_offset, sh_size, sh_link, sh_info = struct.unpack('>IIIIIIII', sh[:32])
        name_end = data.find(b'\0', shstr_offset + sh_name)
        name = data[shstr_offset + sh_name : name_end].decode()
        sections[name] = (i, sh_offset, sh_size, sh_link, sh_info)

    symtab_idx, symtab_offset, symtab_size, _, _ = sections['.symtab']
    strtab_idx, strtab_offset, strtab_size, _, _ = sections['.strtab']
    rel_text_idx, rel_text_offset, rel_text_size, _, _ = sections['.rel.text']

    # Find symbol index for D_1600487C
    num_syms = symtab_size // 16
    d_sym_idx = None
    for i in range(num_syms):
        st_name, = struct.unpack('>I', data[symtab_offset + i * 16 : symtab_offset + i * 16 + 4])
        name_end = data.find(b'\0', strtab_offset + st_name)
        sname = data[strtab_offset + st_name : name_end].decode()
        if sname == 'D_1600487C':
            d_sym_idx = i
            break

    if d_sym_idx is None:
        raise ValueError("Cannot find D_1600487C in symtab")

    # Retarget relocations at 0x784 and 0x78c
    num_rels = rel_text_size // 8
    patched = 0
    for i in range(num_rels):
        rel_pos = rel_text_offset + i * 8
        r_offset, r_info = struct.unpack('>II', data[rel_pos : rel_pos + 8])
        if r_offset in (0x784, 0x78c):
            r_type = r_info & 0xff
            new_r_info = (d_sym_idx << 8) | r_type
            data[rel_pos + 4 : rel_pos + 8] = struct.pack('>I', new_r_info)
            patched += 1

    if patched > 0:
        with open(obj_path, 'wb') as f:
            f.write(data)
        print(f"Patched {patched} switch jump-table relocations to D_1600487C in {obj_path}")

if __name__ == '__main__':
    if len(sys.argv) < 2:
        sys.exit(1)
    fix_relocs(sys.argv[1])
