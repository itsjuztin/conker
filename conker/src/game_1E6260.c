#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1E6260/func_151B8DB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E6260/func_151B9214.s")

void func_150A8050(f32 (*)[4], f32, f32, f32);

s32 func_151B9310(s32 *arg0, s32 *arg1) {
    f32 m[18];

    func_150A8050((f32 (*)[4])&m[2], 0.0f, 0.0f, *(f32 *)((u8 *)arg1 + 0x170));

    m[14] = *(f32 *)((u8 *)arg1 + 0x38);
    m[15] = *(f32 *)((u8 *)arg1 + 0x3C);
    m[16] = *(f32 *)((u8 *)arg1 + 0x40);

    m[2] = *(f32 *)((u8 *)arg1 + 0x18) * m[2];
    m[3] = *(f32 *)((u8 *)arg1 + 0x18) * m[3];
    m[4] = *(f32 *)((u8 *)arg1 + 0x18) * m[4];

    m[6] = *(f32 *)((u8 *)arg1 + 0x1C) * m[6];
    m[7] = *(f32 *)((u8 *)arg1 + 0x1C) * m[7];
    m[8] = *(f32 *)((u8 *)arg1 + 0x1C) * m[8];

    m[10] = *(f32 *)((u8 *)arg1 + 0x18) * m[10];
    m[11] = *(f32 *)((u8 *)arg1 + 0x18) * m[11];
    m[12] = *(f32 *)((u8 *)arg1 + 0x18) * m[12];

    guMtxF2L((f32 (*)[4])&m[2], (Mtx *)arg0);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E6260/func_151B9408.s")

extern f32 D_800AA56C;
extern f32 D_800AA570;

void func_151B9660(s32 *arg0) {
    *(f32 *)((u8 *)arg0 + 0x188) = 5.0f;
    *(f32 *)((u8 *)arg0 + 0x18C) = D_800AA56C;
    *(f32 *)((u8 *)arg0 + 0x190) = D_800AA570;
}
