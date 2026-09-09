#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1B81D0/func_1518AD20.s")

s32 func_1518B1AC(void *arg0) {
    if (*(f32 *)((u8 *)arg0 + 0x3C) < *(f32 *)((u8 *)arg0 + 0x170)) {
        return 0;
    }
    return 1;
}

s32 func_1518B1D8(void *arg0) {
    f32 temp_f0;
    s32 var_v0;
    s32 var_a1;
    s32 temp_v1;

    temp_f0 = *(f32 *)((u8 *)arg0 + 0x3C) - *(f32 *)((u8 *)arg0 + 0x170);
    if (temp_f0 < 0.0f) {
        return 0;
    }

    var_v0 = *(s16 *)((u8 *)arg0 + 0x64);
    var_v0 <<= 2;
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }

    temp_v1 = (s32)temp_f0 >> 1;
    var_a1 = var_v0;
    if (temp_v1 >= 0x100) {
        temp_v1 = 0xFF;
    }

    var_a1 = (temp_v1 < var_v0) ? temp_v1 : var_v0;

    if (var_a1 < 0) {
        return 0;
    }

    *(u8 *)((u8 *)arg0 + 0x70) = var_a1;
    return 1;
}

void func_1518B2A8(s32, f32, f32, s32, s32, s32, s32);

void func_1518B264(s32 arg0, f32 arg1, f32 arg2, s32 arg3, u8 arg4) {
    func_1518B2A8(arg0, arg1, arg2, arg3, 4, 0xFF, arg4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1B81D0/func_1518B2A8.s")
