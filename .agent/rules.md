# Conker Decompilation Rules

## Context
This is an N64 decompilation repository using `splat` and SGI IDO 5.3 (`-O2 -mips2 -G 0`). This is **not** a standard software repository.

## Structural Topology
- **Root**: Contains Makefiles, tools, and `conker` directory.
- **`conker/conker.<version>.yaml`**: The single source of truth for ROM memory mapping and segment definitions.
- **`conker/src/`**: Decompiled C code and `libultra` components. Game files are split by offset (e.g. `game_2D4B0.c`).
- **`conker/include/`**: `structs.h`, `variables.h`, and `functions.h`. This is where all reverse-engineered types and global state are defined.
- **Assembly**: Included inline via `#pragma GLOBAL_ASM` pointing to `asm/nonmatchings/`. 
- **Symbol Tables**: `symbol_addrs.<version>.txt` and `undefined_syms.<version>.txt` define raw offsets for un-decompiled code.
- **Reference Index**: See `index.md` for architectural mapping, sister codebase references (`banjo-kazooie`, `BanjoRecomp`, `DK64`), and IDO 5.3 compiler heuristics.

## Development Guidelines for Agents
1. **Never alter hardware register values directly** unless inside `libultra/io`.
2. **Follow existing struct conventions** (`struct<number>` like `struct127`) in `structs.h` until a system's true name is discovered. Cross-reference sister repositories (`c:\repos\banjo-kazooie`, `c:\repos\Donkey-Kong-64-Recompiled`) for actor, camera, and physics struct layouts.
3. **Use the specific types**: `s32`, `u32`, `s16`, `u16`, `s8`, `u8`, `f32` (defined in `ultra64.h`).
4. **Matching**: Any C code written must be byte-matching. Always run `make -C conker replace` and `make check` to verify the `sha1sum` (`build/conker.us.z64: OK`).
5. **Cross-Referencing**: When a C function needs to call a raw assembly function, refer to `functions.h` and the global symbol tables.
6. **IDO 5.3 Compiler Quirks**:
   - **Delay-Slot Forcing**: For delay slots where permuters plateau, precompute pointer offsets (e.g., `s32 *p = arg0 - 3;` then `*(p + 2)`) to keep pending computations active for IDO's delay-slot scheduler.
   - **Stack Pinning**: Use variable declaration sandwiching (`void *temp_v0; struct_12b sp28; void *temp_v1;`) to pin stack offsets (e.g. forcing `0x28($sp)`).
   - **Variadics**: 32-byte frames saving `$a0-$a3` to `0x20($sp)` are variadic (`void func(const char *fmt, ...)`).
   - **Struct Typing**: Access struct fields through typed structs (`arg0->unk24`) rather than raw casts to prevent operand register inversion in delay slots.
