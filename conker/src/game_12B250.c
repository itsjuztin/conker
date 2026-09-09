#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern u8 D_80088B80;
extern s32 D_800A1F70;
extern s32 D_800A1F7C;
extern s32 D_800A1F88;
extern f32 D_800A1F9C;
extern f32 D_800A1FA0;
extern f32 D_800A1FA4;
extern s32 func_15145EA4(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3);
extern void func_15102B38(s32, u8, s32, s32, f32 *, s32, s32, f32, s32, s32, s32, s32, u8, s32);
void func_151D3E6C(struct127 *arg0, struct17 *arg1, struct17 *arg2, s32 arg3);
void func_151D3F14(struct17 *arg0, u8 arg1, s32 arg2);
void func_150FE0B8(struct127 *arg0, struct17 *arg1, s32 arg2, s32 arg3);
void func_150FE288(struct127 *arg0);

#pragma GLOBAL_ASM("asm/nonmatchings/game_12B250/func_150FDDA0.s")

void func_150FDF38(struct127 *arg0, s32 arg1, s32 arg2, struct17 *arg3, struct17 *arg4) {
    struct17 sp44;
    struct17 sp38;
    s32 sp30[2];
    s32 sp28[2];

    if (arg0 != 0) {
        if (arg0->unk1D4 != 0) {
            sp30[0] = (s32)&D_800A1F70;
            sp30[1] = (s32)&D_800A1F88;
            sp28[0] = (s32)&sp44;
            sp28[1] = (s32)&sp38;
            func_15145EA4(sp30, sp28, (s32)arg0->unk1D4 + (D_80088B80 << 6), 2);
        } else {
            sp44.unk0 = arg0->x_position;
            sp44.unk4 = arg0->y_position + 56.0f;
            sp44.unk8 = arg0->z_position;
            sp38 = sp44;
        }
        func_151D3E6C(arg0, &sp44, &sp38, (D_800BE9F0 == 0x2B) ? 0x28 : 0x1E);
        func_151D3F14(&sp44, ((u8 *)&arg1)[3], arg2);
        func_150FE0B8(arg0, &sp44, ((u8 *)&arg1)[3], arg2);
        func_150FE288(arg0);
        if (arg3 != 0) {
            *arg3 = sp44;
        }
        if (arg4 != 0) {
            *arg4 = sp38;
        }
    }
}

void func_150FE0B8(struct127 *arg0, struct17 *arg1, s32 arg2, s32 arg3) {
    f32 sp60[2];
    union { u8 b[8]; f64 d; } sp58;
    s32 sp50;
    s32 sp54;

    if (arg0->unk1D4 != 0) {
        if ((arg0->unk74 & 0xF) != 0xF) {
            sp60[1] = func_150ADA68() * 1.5f + 2.0f;
            sp60[0] = func_150ADA68() * D_800A1F9C + D_800A1FA0;

            if ((arg0->unk31C != 0) && (*(u8 *)((u8 *)arg0->unk31C + 0x197) != 0) && (arg0->camera != 0)) {
                sp58.b[7] = (~(1 << arg0->camera->unk23D)) & 0xFF;
            } else {
                sp58.b[7] = 0xFF;
            }

            sp54 = func_150ADA20();
            sp50 = func_150ADA20();
            func_15102B38((s32)arg0, D_80088B80, (s32)&D_800A1F70, (s32)&D_800A1F7C, sp60,
                          (sp54 % 5U) + 6, (sp50 % 0x65U) + 0x9B,
                          func_150ADA68() * 199.0f + D_800A1FA4, (s32)arg1, sp58.b[7],
                          0, -1, ((u8 *)&arg2)[3], arg3);
        }
    }
}

void func_151D3E04(s32, s32, s32*, s32, f32);

void func_150FE248(s32 arg0, s32 arg1, s32 arg2) {
    func_151D3E04(arg0, arg2, &D_800A1F70, D_80088B80, 0.0f);
}

extern u8 func_150ADA20(void);
extern void func_151D8868(void *arg0, s32 arg1, s32 arg2, s32 arg3);

struct sp18_150FE288 {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 unk1;
    /* 0x2 */ s16 unk2;
    /* 0x4 */ u8 unk4;
    /* 0x5 */ u8 unk5;
    /* 0x6 */ s8 unk6;
    /* 0x7 */ u8 unk7;
};

void func_150FE288(struct127 *arg0) {
    struct sp18_150FE288 sp18;

    if (arg0->camera != 0) {
        sp18.unk0 = 1;
        sp18.unk2 = (func_150ADA20() % 9U) + 0xF;
        sp18.unk5 = 1 << arg0->camera->unk23D;
        sp18.unk4 = (func_150ADA20() & 3) + 3;
        sp18.unk6 = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}
