#include <ultra64.h>

#include "functions.h"
#include "variables.h"

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 padC[0x174];
} D_800BE628View15012370;

void func_15012370(void) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f24;
    f32 one;
    f32 half;
    s32 i;

    i = 0;
    if (D_80082FA0 >= 0) {
        temp_f24 = D_80096560;
        one = 1.0f;
        half = 0.5f;
        do {
            func_151EF954(
                ((f32 (*)[4][4])D_800DCC10)[i],
                -(temp_f0 = (*(D_800BE628View15012370 **)&D_800BE628)[i].unk4 * half),
                temp_f0,
                -(temp_f2 = (*(D_800BE628View15012370 **)&D_800BE628)[i].unk8 * half),
                temp_f2,
                one,
                temp_f24,
                one);
            i = (i + 1) & 0xFF;
        } while (D_80082FA0 >= i);
    }
}
// void func_15012370(void) {
//     f32 temp_f0;
//     f32 temp_f2;
//     u8 i;
//
//     f32 foo = D_80096560; // 20000.0f
//     f32 **tmp = D_800BE628;
//
//     for (i = 0; i <= D_80082FA0; i++) {
//         temp_f0 = tmp[i][1] * 0.5f;
//         temp_f2 = tmp[i][2] * 0.5f;
//         func_151EF954(D_800DCC10[i], -temp_f0, temp_f0, -temp_f2, temp_f2, 1.0f, foo, 1.0f);
//     }
// }

void func_15012470(void) {
    D_80088750 = func_1518AADC(4, 300, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3F820/func_150124A0.s")
