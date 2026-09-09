#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1B5370/func_15187EC0.s")

extern u8 D_800DF700[0xB4];
extern s32 D_800DF7B4;

void func_15187F90(void) {
    bzero(D_800DF700, 0xB4);
    D_800DF7B4 = 0;
}

struct S_DF700b { u8 pad[6]; u8 unk6; u8 unk7; u8 unk8; u8 pad2[0x1B]; };

void func_15187FC0(s32 arg0, s32 *arg1) {
    struct S_DF700b *p = (struct S_DF700b *)D_800DF700;
    if (arg0 < D_800DF7B4 && arg0 >= 0) {
        arg1[0] = p[arg0].unk6;
        arg1[1] = p[arg0].unk7;
        arg1[2] = p[arg0].unk8;
    }
}

struct S_DF700 { f32 unkC; s32 pad[8]; };
extern struct S_DF700 D_800DF70C[];

void func_15188010(s32 arg0, f32 *arg1) {
    if (arg0 < D_800DF7B4 && arg0 >= 0) {
        *arg1 = D_800DF70C[arg0].unkC;
    }
}

void func_1518804C(s32 arg0, f32 arg1) {
    if (arg0 < D_800DF7B4 && arg0 >= 0) {
        if (arg1 > 1.0f) {
            arg1 = 1.0f;
        } else if (arg1 < 0.0f) {
            arg1 = 0.0f;
        }
        D_800DF70C[arg0].unkC = arg1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1B5370/func_151880C0.s")
