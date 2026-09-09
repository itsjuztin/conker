#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_E7380/func_150B9ED0.s")

s32 func_150BA35C(s16 *arg0) {
    s16 temp = arg0[0xE];
    if (temp < 0x40) {
        *((s8 *)arg0 + 0x28) = temp << 2;
    }
    return 1;
}

extern f32 D_800BE9A4;
extern f32 D_8009FE2C;

s32 func_150BA37C(s32 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x114) = *(f32 *)((s8 *)arg0 + 0x114) + D_8009FE2C * D_800BE9A4;
    *(f32 *)((s8 *)arg0 + 0x34) = *(f32 *)((s8 *)arg0 + 0x110) * D_800BE9A4 + *(f32 *)((s8 *)arg0 + 0x34);
    *(f32 *)((s8 *)arg0 + 0x38) = *(f32 *)((s8 *)arg0 + 0x114) * D_800BE9A4 + *(f32 *)((s8 *)arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x3C) = *(f32 *)((s8 *)arg0 + 0x118) * D_800BE9A4 + *(f32 *)((s8 *)arg0 + 0x3C);
    *(f32 *)((s8 *)arg0 + 0x40) = *(f32 *)((s8 *)arg0 + 0x11C) * D_800BE9A4 + *(f32 *)((s8 *)arg0 + 0x40);
    *(f32 *)((s8 *)arg0 + 0x44) = *(f32 *)((s8 *)arg0 + 0x120) * D_800BE9A4 + *(f32 *)((s8 *)arg0 + 0x44);
    return 1;
}

s32 func_150BA424(s32 *arg0) {
    f32 diff = *(f32 *)((s8 *)arg0 + 0x38) - *(f32 *)((s8 *)arg0 + 0x124);
    s32 a;
    s32 b;

    if (diff < 0.0f) {
        return 0;
    }

    a = *(s16 *)((s8 *)arg0 + 0x1C) << 4;
    if (a >= 0x100) {
        a = 0xFF;
    }

    b = (s32)diff << 2;
    if (b >= 0x100) {
        b = 0xFF;
    }

    if (b < a) {
        *((s8 *)arg0 + 0x5C) = b;
    } else {
        *((s8 *)arg0 + 0x5C) = a;
    }

    if (*((u8 *)arg0 + 0x5C) < 0) {
        return 0;
    }
    return 1;
}
