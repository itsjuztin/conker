#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern u8 D_80088B94;
extern s32 D_800A1FC8;
extern f32 D_800A1FEC;
extern s32 D_800A1FE0;
extern f32 D_800A1FF0;
extern f32 D_800A1FF4;
extern s32 func_15145EA4(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3);
extern s32 D_800A1FD4;
void func_151D3E6C(struct127 *arg0, struct17 *arg1, struct17 *arg2, s32 arg3);
void func_151D3F14(struct17 *arg0, u8 arg1, s32 arg2);
void func_150FE604(struct127 *arg0, struct17 *arg1, s32 arg2, s32 arg3);
void func_150FE7D4(struct127 *arg0);
extern void func_15102B38(s32, u8, s32, s32, f32 *, s32, s32, f32, s32, s32, s32, s32, u8, s32);
void func_15145740(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 arg4);
void func_150FE49C(struct127 *arg0, s32 arg1, s32 arg2, struct17 *arg3, struct17 *arg4);
s32 func_151C229C(struct17 *arg0, struct17 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, s32 arg11, struct127 *arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20, f32 arg21, s32 arg22, s32 arg23, s32 arg24, s32 arg25, s32 arg26);

s32 func_150FE320(struct127 *arg0, s32 arg1, s32 arg2) {
    s32 unused;
    struct17 spA8;
    struct17 sp9C;
    struct17 sp90;
    struct17 sp84;
    s32 temp_v0;
    f32 rand1;
    f32 rand0;

    if (arg0 == 0) {
        return 0;
    }

    func_15145740(arg0, &sp84, &spA8, 0, 0.0f);
    func_150FE49C(arg0, ((u8 *)&arg1)[3], arg2, &sp9C, &sp90);

    rand0 = func_150ADA68();
    rand1 = func_150ADA68();
    temp_v0 = func_150ADA20();

    return func_151C229C(&sp90, &sp84, 0, 0, 0, 0, 300.0f, D_800A1FEC,
                         rand0 * 10.0f + 25.0f,
                         rand1 * 200.0f + 600.0f, 50.0f,
                         (temp_v0 % 0x38U) + 0xC8, arg0, 1, 1, 0, 0xFF, 1, 1,
                         0, 0x23, 0.0f, 0xFF, -1, 0, ((u8 *)&arg1)[3], arg2);
}

void func_150FE49C(struct127 *arg0, s32 arg1, s32 arg2, struct17 *arg3, struct17 *arg4) {
    struct17 sp3C;
    struct17 sp30;
    s32 sp28[2];
    s32 sp20[2];

    if (arg0 != 0) {
        if (arg0->unk1D4 != 0) {
            sp28[0] = (s32)&D_800A1FC8;
            sp28[1] = (s32)&D_800A1FD4;
            sp20[0] = (s32)&sp3C;
            sp20[1] = (s32)&sp30;
            func_15145EA4(sp28, sp20, (s32)arg0->unk1D4 + (D_80088B94 << 6), 2);
        } else {
            sp3C.unk0 = arg0->x_position;
            sp3C.unk4 = arg0->y_position + 70.0f;
            sp3C.unk8 = arg0->z_position;
            sp30 = sp3C;
        }
        func_151D3E6C(arg0, &sp3C, &sp30, 0x23);
        func_151D3F14(&sp3C, ((u8 *)&arg1)[3], arg2);
        func_150FE604(arg0, &sp3C, ((u8 *)&arg1)[3], arg2);
        func_150FE7D4(arg0);
        if (arg3 != 0) {
            *arg3 = sp3C;
        }
        if (arg4 != 0) {
            *arg4 = sp30;
        }
    }
}

void func_150FE604(struct127 *arg0, struct17 *arg1, s32 arg2, s32 arg3) {
    f32 sp60[2];
    union { u8 b[8]; f64 d; } sp58;
    s32 sp50;
    s32 sp54;

    if (arg0->unk1D4 != 0) {
        if ((arg0->unk74 & 0xF) != 0xF) {
            sp60[1] = func_150ADA68() * (1.0f + 1.0f) + D_800A1FF0;
            sp60[0] = func_150ADA68() * 15.0f + 35.0f;

            if ((arg0->unk31C != 0) && (*(u8 *)((u8 *)arg0->unk31C + 0x197) != 0) && (arg0->camera != 0)) {
                sp58.b[7] = (~(1 << arg0->camera->unk23D)) & 0xFF;
            } else {
                sp58.b[7] = 0xFF;
            }

            sp54 = func_150ADA20();
            sp50 = func_150ADA20();
            func_15102B38((s32)arg0, D_80088B94, (s32)&D_800A1FC8, (s32)&D_800A1FE0, sp60,
                          (sp54 % 3U) + 4, (sp50 % 0x38U) + 0xC8,
                          func_150ADA68() * D_800A1FF4 + 500.0f, (s32)arg1, sp58.b[7],
                          0, -1, ((u8 *)&arg2)[3], arg3);
        }
    }
}

extern u8 D_80088B94;
extern s32 D_800A1FC8;
void func_151D3E04(s32, s32, void*, u8, f32);

void func_150FE794(s32 arg0, s32 arg1, s32 arg2) {
    func_151D3E04(arg0, arg2, &D_800A1FC8, D_80088B94, 0.0f);
}

extern void func_151D8868(void *arg0, s32 arg1, s32 arg2, s32 arg3);

struct sp18_150FE7D4 {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 unk1;
    /* 0x2 */ s16 unk2;
    /* 0x4 */ u8 unk4;
    /* 0x5 */ u8 unk5;
    /* 0x6 */ s8 unk6;
    /* 0x7 */ u8 unk7;
};

void func_150FE7D4(struct127 *arg0) {
    struct sp18_150FE7D4 sp18;

    if (arg0->camera != 0) {
        sp18.unk0 = 1;
        sp18.unk2 = (func_150ADA20() % 0xDU) + 0x14;
        sp18.unk5 = 1 << arg0->camera->unk23D;
        func_150ADA20();
        sp18.unk4 = 8;
        sp18.unk6 = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}
