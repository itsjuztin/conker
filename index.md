# Conker's Bad Fur Day Decompilation Index

## Overview
This repository contains a work-in-progress decompilation of Conker's Bad Fur Day (N64). It uses `n64splat` to split the ROM and `ido-static-recomp` for compilation. The project aims to convert raw MIPS assembly into byte-perfect C code.

## Architecture Map
- **Core Entry Points**:
  - Boot/Init: `conker/src/init_1050.c` (specifically `func_10001050` at `0x10001000`) acts as the primary hardware entry, resetting memory and kicking off the libultra OS initialization.
  - Game Entry: `conker/src/game/entrypoint.c` (at `0x80034CE0`), called after decompression and threading setup.
- **Main Loops & Threading**:
  - `init_1050.c` establishes thread 1 (`func_100010F8`) and thread 3 (`func_10001194`). Thread 3 handles ViManager creation and ROM data decompression.
  - The game is heavily threaded through libultra's standard OS threading (`osCreateThread`).
- **Rendering Engines**:
  - Utilizes standard libultra RSP microcode. 
  - Display list building is scattered through `game_*.c` files (e.g., `game_45B80.c` and `game_476D0.c`), employing standard `gSP` and `gDP` macros (`gSPViewport`, `gSPDisplayList`).
- **Memory-Mapping Files**:
  - `conker/conker.us.yaml` (and EU/ECTS variants): The main Splat configuration that maps ROM addresses to VRAM. It defines segments: `boot`, `init`, `game`, `debugger`, and the `rzip` compressed blocks.
  - `build/conker.ld`: Generated linker script mapping symbols.

## Structural Code Parsing
- **C Source Code**: Located in `conker/src/`. File names match their VRAM offsets (e.g., `game_2D4B0.c`).
- **Assembly**: Non-matching or un-decompiled functions are wrapped with `#pragma GLOBAL_ASM("asm/nonmatchings/...")` and compiled via `asm-processor`.
- **Data Structures**: 
  - `conker/include/structs.h`: Contains over 260 massive struct definitions reverse-engineered from the binary (e.g., `struct127`, `struct210`).
  - `conker/include/variables.h`: Contains global variable definitions and their memory types (`bss`, `data`, `rodata`).
  - `conker/include/functions.h`: Contains signatures for all decompiled functions.
- **Hardware Registers**: Abstracted via Nintendo's `libultra` OS/IO interfaces (e.g., `libultra/io/piint.h`, `osInitialize()`). Direct register manipulation occurs mostly in the `libultra` subfolder and handwritten TLB mapping assemblies (`init_5AB0.s`).
- **Global Symbol Tables**: `conker/symbol_addrs.us.txt` and `conker/undefined_syms.us.txt` catalog function pointers and offsets not yet matched.

## Subsystem Breakdown
1. **Init & OS**: `conker/src/init_*.c` handles boot sequence, TLB setup, exception handling, and threading.
2. **Game Core**: `conker/src/game_*.c` handles entity logic, camera math, and state.
3. **Audio**: `conker/src/libultra/audio/` heavily features standard N64 audio libraries (`n_audio`, synthesis, sequences).
4. **Gu/Math**: `conker/src/libultra/gu/` contains matrix math, trigonometry (sinf/cosf), and normalization routines.

## Development Workflow for Sub-Agents
When creating or matching functions, agents must:
- Consult `conker.us.yaml` for segment boundaries.
- Find the unmatched `.s` file in `asm/nonmatchings/`.
- Translate the MIPS assembly into C, replacing the `#pragma GLOBAL_ASM` hook.
- Ensure `make` and `make check` perfectly match the sha1 hash of the original `.z64` ROM.
