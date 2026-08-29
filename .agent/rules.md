# Conker Decompilation Rules

## Context
This is an N64 decompilation repository using `splat`. This is **not** a standard software repository.

## Structural Topology
- **Root**: Contains Makefiles, tools, and `conker` directory.
- **`conker/conker.<version>.yaml`**: The single source of truth for ROM memory mapping and segment definitions.
- **`conker/src/`**: Decompiled C code and `libultra` components. Game files are split by offset (e.g. `game_2D4B0.c`).
- **`conker/include/`**: `structs.h`, `variables.h`, and `functions.h`. This is where all reverse-engineered types and global state are defined.
- **Assembly**: Included inline via `#pragma GLOBAL_ASM` pointing to `asm/nonmatchings/`. 
- **Symbol Tables**: `symbol_addrs.<version>.txt` and `undefined_syms.<version>.txt` define raw offsets for un-decompiled code.

## Development Guidelines for Agents
1. **Never alter hardware register values directly** unless inside `libultra/io`.
2. **Follow existing struct conventions** (`struct<number>` like `struct127`) in `structs.h` until a system's true name is discovered.
3. **Use the specific types**: `s32`, `u32`, `s16`, `u16`, `s8`, `u8`, `f32` (defined in `ultra64.h`).
4. **Matching**: Any C code written must be byte-matching. Always run `make` to verify the `sha1sum` against `baserom.us.z64`.
5. **Cross-Referencing**: When a C function needs to call a raw assembly function, refer to `functions.h` and the global symbol tables.
