#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1E6B40/func_151B9690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E6B40/func_151B9964.s")

typedef struct {
    u8  unk0;
    u8  unk1;
    u8  pad2[0xA];
    u8  unkC;
    u8  padD[0x3];
    s32 unk10;
    u8  unk14;
    u8  unk15;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    s16 unk2A;
} struct_151B9BF0;

s32 func_15167A68(s32, s32, s32, s32, s32, s32);
void func_151B9690(u8, u8, s16, s16, s16, s16, f32, s16, s16, s16, s16, s16, s16, s16, s16, u8, s32);

void func_151B9BF0(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5,
                   s16 arg6, s16 arg7, s16 arg8, s16 arg9, s16 arg10, s16 arg11,
                   s16 arg12, s32 arg13, u8 arg14, s32 arg15) {
    struct_151B9BF0 *ret;

    ret = (struct_151B9BF0 *)func_15167A68(7, arg15, 0x2C, 0, arg14, 1);
    if (ret != 0) {
        ret->unk14 = arg0;
        ret->unk15 = arg1;
        ret->unk16 = arg2;
        ret->unk18 = arg3;
        ret->unk1A = arg4;
        ret->unk1C = arg5;
        ret->unk1E = arg6;
        ret->unk20 = arg7;
        ret->unk22 = arg8;
        ret->unk24 = arg9;
        ret->unk26 = arg10;
        ret->unk28 = arg11;
        ret->unk2A = arg12;
        ret->unk10 = arg13;
    }
}

void func_151B9CB0(struct_151B9BF0 *arg0) {
    f32 *temp_v0;
    struct_151B9BF0 *temp_s5;
    s16 temp_s2;
    s16 temp_s3;
    s16 temp_s4;
    s32 i;
    f32 temp_f20;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_v0_2;

    temp_v0 = (f32 *)arg0->unk10;
    temp_s5 = arg0;
    if (temp_v0 == 0) {
        temp_s2 = arg0->unk16;
        temp_s3 = arg0->unk18;
        temp_s4 = arg0->unk1A;
    } else {
        temp_s2 = (s16)(s32)temp_v0[0];
        temp_s3 = (s16)(s32)temp_v0[1];
        temp_s4 = (s16)(s32)temp_v0[2];
    }

    i = 0;
    if (arg0->unk28 > 0) {
        temp_f20 = 0.0f;
        do {
            func_151B9690(arg0->unk14, arg0->unk15, temp_s2, temp_s3, temp_s4, -0x50,
                          temp_f20, 0x168, arg0->unk1C, arg0->unk1E, arg0->unk20,
                          arg0->unk22, 0xF, arg0->unk24, arg0->unk26, arg0->unkC,
                          arg0->unk1);
            i++;
        } while (i < temp_s5->unk28);
        i = 0;
    }
    temp_f20 = 0.0f;

    temp_s6 = 4;
    temp_s5_2 = 3;
    while (1) {
        func_151B9690(arg0->unk14, arg0->unk15, temp_s2, temp_s3, temp_s4, -0x50,
                      temp_f20, 0x168, (arg0->unk1C * temp_s5_2) / 2,
                      arg0->unk1E * 2, arg0->unk20, arg0->unk22, 0xF,
                      arg0->unk24, arg0->unk26, arg0->unkC, arg0->unk1);
        i++;
        if (i == temp_s6) {
            break;
        }
    }

    temp_v0_2 = arg0->unk2A;
    temp_v0_2 -= D_800BE9E4;
    if (temp_v0_2 < 0) {
        func_1516972C((struct102 *)arg0);
    } else {
        arg0->unk2A = temp_v0_2;
    }
}
