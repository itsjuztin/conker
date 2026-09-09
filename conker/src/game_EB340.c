#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A0068;

void func_150BDE90(void *arg0, u8 arg1, s32 arg2) {
    struct {
        void *unk0;
        u16 unk4;
        u16 unk6;
    } sp38;
    struct260 *temp_v0;

    sp38.unk0 = arg0;
    sp38.unk4 = 0;

    temp_v0 = func_15149130(0x12C, -1, 0x4F, -1, 0, 0x3C, (struct37 *)0x8, arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp38, 8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_EB340/func_150BDF0C.s")

void func_1516972C(struct102 *arg0);

void func_150BE150(struct102 *arg0, s32 **arg1, u8 arg2) {
    if (arg2 == 0x21) {
        if (*(s32 *)((u8 *)arg0 + 0x28) == (s32)arg1[0]) {
            func_1516972C(arg0);
        }
    } else if (arg2 == 0) {
        s32 *temp = arg1[0];
        if (*(s32 *)((u8 *)arg0 + 0x28) == temp[0xC6]) {
            func_1516972C(arg0);
        }
    }
}

extern f32 D_800BE9A4;

s32 func_150BE1C4(f32 *arg0) {
    arg0[5] += arg0[32] * D_800BE9A4;
    if (arg0[5] > 120.0f) {
        return 0;
    }
    return 1;
}

extern void func_1511650C(struct131 *arg0, s32, s32, f32);

void func_150BE210(struct131 *arg0) {
    if ((((u8 *)arg0)[0x73] & 3) == 3) {
        return;
    }
    func_1511650C(arg0, 1, 0x62C, 500.0f);
    if (((u8 *)arg0)[0x4F] & 4) {
        *(f32 *)((u8 *)arg0 + 0x84) += *(f32 *)((u8 *)arg0 + 0x64);
    } else if (270.0f < *(f32 *)((u8 *)arg0 + 0x84)) {
        *(f32 *)((u8 *)arg0 + 0x84) = 270.0f;
    }
    if (360.0f < *(f32 *)((u8 *)arg0 + 0x84)) {
        u16 a0 = *(u16 *)((u8 *)arg0 + 0x74);
        ((u8 *)arg0)[0x73] &= 0xFFFC;
        ((u8 *)arg0)[0x73] |= 3;
        *(f32 *)((u8 *)arg0 + 0x64) = 0.0f;
        func_100111C8(a0);
        *(u16 *)((u8 *)arg0 + 0x74) = 0;
    }
}

void func_150BE2E8(s16 *arg0) {
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;

    temp_f0 = arg0[0x3E];
    temp_f2 = arg0[0x3F];
    temp_f12 = arg0[0x40];
    temp_f14 = arg0[0x41];
    temp_f16 = arg0[0x42];
    temp_f18 = arg0[0x43];
    temp_f20 = arg0[0x1E] * 0.00006103515625f;
    temp_f22 = arg0[0x1F] * 0.00006103515625f;
    temp_f20 -= temp_f20 * D_800A0068;
    temp_f22 += temp_f20 * D_800BE9E4;

    arg0[0x8] = (s32)((temp_f14 - temp_f0) * temp_f22 + temp_f0);
    arg0[0x9] = (s32)((temp_f16 - temp_f2) * temp_f22 + temp_f2);
    arg0[0xA] = (s32)((temp_f18 - temp_f12) * temp_f22 + temp_f12);
    if (1.0f < temp_f22) {
        temp_f22 = 1;
    }

    arg0[0x1E] = (s32)(temp_f20 * 16384.0f);
    arg0[0x1F] = (s32)(temp_f22 * 16384.0f);
}

s16 *func_150BE438(s16 *arg0, s32 arg1) {
    arg0[0] = 0x68;
    arg0[1] = D_800CC2D0[arg1].unk2E8;
    arg0[2] = 0xE;
    arg0[3] = D_800CC2D0[arg1].unk2E4;
    return arg0 + 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_EB340/func_150BE494.s")
