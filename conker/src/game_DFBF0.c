#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_DFBF0/func_150B2740.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_DFBF0/func_150B2EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_DFBF0/func_150B3188.s")

struct Obj150B36AC {
    u8 pad0[0x10];
    f32 x10;
    f32 x14;
    u8 pad18[0x3C - 0x18];
    f32 x3C;
    u8 pad40[0x44 - 0x40];
    f32 x44;
    f32 x48;
    f32 x4C;
    f32 x50;
    f32 x54;
    f32 x58;
    u8 pad5C[0x60 - 0x5C];
    s32 x60;
    s16 x64;
    u8 pad66[0x170 - 0x66];
    f32 x170;
};

s32 func_150B36AC(struct Obj150B36AC *arg0, s32 a1, s32 a2, s32 a3, f32 arg5) {
    arg0->x3C = arg0->x10 + arg5;
    if (arg0->x170 < arg0->x48) {
        arg0->x60 &= ~0x7;
        arg0->x60 &= ~0x8;
        arg0->x60 &= ~0x40;
        arg0->x60 &= ~0x20;
        arg0->x44 = 0.0f;
        arg0->x48 = 0.0f;
        arg0->x4C = 0.0f;
        if (arg0->x64 >= 0x21) {
            arg0->x64 = 0x20;
        }
    } else {
        arg0->x44 = arg0->x44 * arg0->x14;
        arg0->x48 = -arg0->x48 * arg0->x14;
        arg0->x4C = arg0->x4C * arg0->x14;
        arg0->x50 = arg0->x50 * arg0->x14;
        arg0->x54 = arg0->x54 * arg0->x14;
        arg0->x58 = arg0->x58 * arg0->x14;
    }
    return 1;
}

s32 func_150B378C(void *a0) {
    u8 *p;
    s32 v1;
    p = *(u8 **)((u8 *)a0 + 0x98);
    v1 = *(s16 *)((u8 *)a0 + 0x1C) << 4;
    if (v1 >= 0x100) {
        v1 = 0xFF;
    }
    if (v1 < p[0x1B]) {
        p[0x1B] = v1;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DFBF0/func_150B37C8.s")
