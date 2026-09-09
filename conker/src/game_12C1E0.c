#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A2110;
struct126 *func_150FF288(struct127 *arg0);
void func_150FF2AC(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3);
void func_151D5148(struct127 *arg0);
void func_150FF2D4(u8 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, s32 *, s32 *, struct17 *, struct127 *, struct126 *);
s32 func_151C229C(struct17 *arg0, struct17 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, s32 arg11, struct127 *arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20, f32 arg21, s32 arg22, s32 arg23, s32 arg24, s32 arg25, s32 arg26);
void func_151D3F14(struct17 *arg0, u8 arg1, s32 arg2);
void func_151D4408(struct17 *, struct17 *, void *, struct127 *, f32, s32, s32);
void func_150FF474(struct17 *, struct17 *, s32, s32);

typedef u8 Func150FED30Entry[0x40];

void func_150FED30(struct127 *arg0, s32 arg1, s32 arg2) {
    struct17 sp14C;
    struct17 sp140;
    struct17 sp134;
    struct17 sp128;
    struct17 sp11C;
    struct17 sp110;
    struct17 sp104;
    struct17 spF8;
    struct17 spEC;
    struct17 spA4[6];
    s32 spA0;
    s32 sp9C;
    struct126 *temp;
    u8 sp97;
    s32 rand;
    s32 mode;
    s32 variant;
    f32 rand1;
    f32 rand0;

    temp = func_150FF288(arg0);
    if (temp != 0) {
        func_151D5148(arg0);
        func_150FF2AC(arg0, &sp134, &sp128, &sp11C);

        if ((arg0->unk1D4 != 0) && ((arg0->unk74 & 0xF) != 0xF)) {
            sp97 = 1;
        } else {
            sp97 = 0;
        }

        func_150FF2D4(&sp97, spA4, &sp14C, &sp110, &sp104, &sp134, &sp128, &sp11C, &spF8, &spEC, &spA0, &sp9C, &sp140, arg0, temp);

        rand0 = func_150ADA68();
        rand1 = func_150ADA68();
        rand = func_150ADA20();

        if (D_800BE616 != 0) {
            mode = 0x35;
        } else {
            mode = 0x1A;
        }

        if (arg0->id == 0x98) {
            variant = 1;
        } else {
            variant = -1;
        }

        func_151C229C(&sp140, &sp134, spA0, sp9C, 1, 0, 300.0f, D_800A2110,
                      (rand0 * 10.0f) + 25.0f, (rand1 * 200.0f) + 600.0f,
                      50.0f, (rand % 0x9CU) + 0x64, arg0, 0x63, 1, 1, 1,
                      0, 1, 0, mode, 0.0f, 0xFF, variant, 0,
                      ((u8 *)&arg1)[3], arg2);

        if (sp97 != 0) {
            func_151D3F14(&sp14C, ((u8 *)&arg1)[3], arg2);
            func_151D4408(&sp110, &sp104, (*(Func150FED30Entry **)&arg0->unk1D4)[*((u8 *)temp + 2)], arg0, 1.0f, ((u8 *)&arg1)[3], arg2);
            func_150FF474(&sp14C, spA4, ((u8 *)&arg1)[3], arg2);
        }
    }
}

extern s32 func_1514654C(struct127 *, struct126 *, s32, void *, void *, s32);
extern f32 D_800A2050;
extern f32 D_800A2114;
extern f32 D_800A2118;
struct126 *func_150FF288(struct127 *arg0);
void func_150FF2AC(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3);
void func_151D5148(struct127 *arg0);
void func_150FF2D4(u8 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, struct17 *, s32 *, s32 *, struct17 *, struct127 *, struct126 *);
void func_150F7470(struct17 *, struct17 *, s32, s32, s32, s32, f32, f32, f32, struct127 *, s32, s32, s32, s32, s32, s32, s32, s32, u8, s32);
void func_151D3F14(struct17 *arg0, u8 arg1, s32 arg2);
void func_151D4408(struct17 *, struct17 *, void *, struct127 *, f32, s32, s32);
void func_150FF474(struct17 *, struct17 *, s32, s32);
extern void func_1505D1C4(f32, f32, f32, s32, s32, s32, s32, s32);

typedef u8 Func150FF084Entry[0x40];

void func_150FEFD0(struct127 *arg0, s16 arg1, struct17 *arg2) {
    f32 *p1;
    struct17 *p2;
    struct126 *temp;

    if (arg1 == -1) {
        arg2->unk0 = arg0->x_position;
        arg2->unk4 = arg0->y_position;
        arg2->unk8 = arg0->z_position;
    } else {
        temp = func_1503195C(arg0, arg1, 0);
        if (temp == 0) {
            arg2->unk0 = arg0->x_position;
            arg2->unk4 = arg0->y_position;
            arg2->unk8 = arg0->z_position;
        } else {
            p1 = &D_800A2050;
            p2 = arg2;
            func_1514654C(arg0, temp, 0, &p1, &p2, 1);
        }
    }
}

void func_150FF084(struct127 *arg0, s32 arg1, s32 arg2) {
    struct17 sp124;
    struct17 sp118;
    struct17 sp10C;
    struct17 sp100;
    struct17 spF4;
    struct17 spE8;
    struct17 spDC;
    struct17 spD0;
    struct17 spC4;
    struct17 sp7C[6];
    s32 sp78;
    s32 sp74;
    struct126 *temp;
    u8 sp6F;
    s32 rand;
    s32 sp64;

    temp = func_150FF288(arg0);
    if (temp != 0) {
        func_151D5148(arg0);
        func_150FF2AC(arg0, &sp10C, &sp100, &spF4);

        if (arg0->unk1D4 != 0) {
            sp6F = 1;
        } else {
            sp6F = 0;
        }

        func_150FF2D4(&sp6F, sp7C, &sp124, &spE8, &spDC, &sp10C, &sp100, &spF4, &spD0, &spC4, &sp78, &sp74, &sp118, arg0, temp);

        if (sp74 == 0) {
            sp64 = 0;
        } else {
            sp64 = 1;
        }

        rand = func_150ADA20();
        func_150F7470(&sp124, &sp10C, sp78, sp74, sp64, 0, D_800A2114, D_800A2118, 300.0f, arg0, 1, 1, 1, 0, 0x1A, 1, (rand % 5U) + 0x327, 0, ((u8 *)&arg1)[3], arg2);

        if (sp6F != 0) {
            func_151D3F14(&sp124, ((u8 *)&arg1)[3], arg2);
            func_151D4408(&spE8, &spDC, (*(Func150FF084Entry **)&arg0->unk1D4)[*((u8 *)temp + 2)], arg0, 1.0f, ((u8 *)&arg1)[3], arg2);
            func_150FF474(&sp124, sp7C, ((u8 *)&arg1)[3], arg2);
        }
    }
}

struct126 *func_150FF288(struct127 *arg0) {
    return func_1503195C(arg0, 0x82, 0);
}

extern f32 D_800A211C;
void func_15145740(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 arg4);

void func_150FF2AC(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3) {
    func_15145740(arg0, arg1, arg2, arg3, D_800A211C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_12C1E0/func_150FF2D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_12C1E0/func_150FF474.s")

s32 func_150FF6B4(struct127 *arg0, s32 arg1, s32 arg2) {
    if (arg0->id == 0x98) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_12C1E0/func_150FF6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_12C1E0/func_150FF840.s")

void func_150FFB6C(struct17 *arg0, s32 arg1, struct127 *arg2, s32 arg3) {
    struct127 *obj;
    s32 flags;
    s32 index;
    u16 angle;

    obj = arg2;
    flags = arg3 | 0x60000;
    index = obj - D_800CC2D0;
    angle = obj->unk7A;
    func_1505D1C4(arg0->unk0, arg0->unk4, arg0->unk8, flags, index, angle, 0, arg1);
}

extern s32 func_15145EA4(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3);
extern u8 D_80088BB0;
extern s32 D_800A2130;

void func_150FFBDC(struct127 *arg0, s32 arg1, s32 arg2) {
    s32 sp1C;
    s32 sp18;

    sp1C = (s32)&D_800A2130;
    sp18 = arg2;
    func_15145EA4(&sp1C, &sp18, (s32) arg0->unk1D4 + D_80088BB0 * 0x40, 1);
}

extern void func_151D8868(void *arg0, s32 arg1, s32 arg2, s32 arg3);

struct sp18_150FFC3C {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 unk1;
    /* 0x2 */ s16 unk2;
    /* 0x4 */ u8 unk4;
    /* 0x5 */ u8 unk5;
    /* 0x6 */ s8 unk6;
    /* 0x7 */ u8 unk7;
};

void func_150FFC3C(struct127 *arg0) {
    struct sp18_150FFC3C sp18;

    if (arg0->camera != 0) {
        sp18.unk0 = 1;
        sp18.unk2 = (func_150ADA20() % 0xBU) + 0x14;
        sp18.unk5 = 1 << arg0->camera->unk23D;
        sp18.unk4 = (func_150ADA20() & 1) + 7;
        sp18.unk6 = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}

extern s32 D_8008FC8C;
extern u8 *D_8008FC94;
void func_151D5A18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6);
void func_151D3E6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_150FFCC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_151D5A18(arg0, arg1, arg2, arg3, arg4, D_8008FC8C, *D_8008FC94);
    func_151D3E6C(arg0, arg1, arg1, 0x8003A);
}

void func_15081E0C(struct127 *arg0, s32 arg1, s32 arg2);

void func_150FFD2C(struct127 *arg0, struct127 *arg1, s32 arg2) {
    if (arg1->id == 0x9F || arg1->id == 0xA0) {
        if (!(arg1->unk94 & 0x80)) {
            func_15081E0C(arg1, 4, 0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_12C1E0/func_150FFD84.s")
