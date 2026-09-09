#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern s32 *D_800DBF94;
extern s32 func_151149AC(u32);
extern s32 func_1505D024(struct127 *, s32, u16, s32);
extern void func_150A7960(f32 *, f32, f32, f32, f32 *, f32 *, f32 *);
extern void func_150E1AB0(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, u16, s32, s32, s16, s16, s32, u8, s16, s32, s32, u8, f32, f32, f32, f32, f32, f32);
extern void func_150E2DB4(struct127 *, u8, s16, s32, f32, f32, f32, f32, f32, f32, s16, s16, u16, u8);
extern void func_15179008(s32);
extern void func_15131828(void *, void *, void *, void *);
extern void func_15131958(void *, s32, void *);

typedef struct {
    char pad0[0xC];
    s32 unkC;
} struct150AF6E4;

void func_150AF200(s32 arg0, s32 arg1) {
    struct131 *temp;
    s32 idx;

    if (D_800CC3D4[0] != 0) {
        return;
    }

    temp = (struct131 *)func_151149AC(arg0 & 0xFF);
    idx = temp - D_800DBEF4;
    if (D_800DBF94[idx] & 1) {
        func_1505D024(&D_800CC2D0[0], 0x3F, 0x6E00, -1);
        return;
    }

    temp = (struct131 *)func_151149AC((u8)arg1);
    idx = temp - D_800DBEF4;
    if (D_800DBF94[idx] & 1) {
        func_1505D024(&D_800CC2D0[0], 0x3F, 0xEE00, -1);
    }
}

extern void func_151CF898(void *, f32, f32);

void func_150AF2E0(void *arg0, s16 *arg1) {
    func_151CF898(arg0, (f32)(arg1[4] + arg1[1]), (f32)arg1[1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DC6B0/func_150AF328.s")

s32 func_150AF6E4(u8 *arg0, s32 arg1) {
    struct150AF6E4 *temp_a2;

    temp_a2 = (struct150AF6E4 *)(arg0 + 0xA8);
    func_15131828(arg0, arg0 + 0xAC, temp_a2, arg0 + 0xAA);
    func_15131958(arg0 + 0x58, temp_a2->unkC, temp_a2);
    return 1;
}

extern void func_1515FF74(void *, s32, u8, s32);

struct sp18 {
    s8 unk0;
    s8 unk1;
    s8 unk2;
    s8 pad3;
    s16 unk4;
    s8 unk6;
};

void func_150AF738(s16 arg0, u8 arg1, s32 arg2) {
    struct sp18 sp18;

    sp18.unk0 = 1;
    sp18.unk1 = -1;
    sp18.unk2 = 2;
    sp18.unk4 = arg0;
    sp18.unk6 = 0;
    func_1515FF74(&sp18, 0, arg1, arg2);
}

extern void func_150B1DB0(void *, void *);

void func_150AF790(void *arg0, u8 *arg1) {
    func_150B1DB0(arg1, arg1 + 0x1ECC0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DC6B0/func_150AF7C4.s")

extern f32 sinf(f32);

struct Sub150AFBF4 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct Obj150AFBF4 {
    char pad0[0x10];
    f32 unk10;
    char pad14[0x5C];
    struct Sub150AFBF4 unk70;
};

s32 func_150AFBF4(struct Obj150AFBF4 *arg0) {
    struct Sub150AFBF4 *p = &arg0->unk70;
    p->unk8 = p->unk8 + p->unkC * D_800BE9A4;
    p->unk8 = func_15144B68(p->unk8);
    arg0->unk10 = sinf(p->unk8) * p->unk4 + p->unk0;
    return 1;
}

extern void func_1516D99C();

void func_150AFC68(s32 a0, s32 a1, s32 a2, s32 a3, u8 a4, s32 a5) {
    func_1516D99C(1, 0, 0, 0xD,
        0, 0, 0, 0, 0, 0, 0, 0,
        4, 0, 0, 0, 0xFF, 0xFF, 0xFF, 0,
        0xFF, 0, 1, 0, 0, 0, 0, 0xAA,
        0xAA, 0xAA, 0xAA, a2, a3, 0, a0, 0xF0,
        0x50, 0x50, 1, 4, 0, 1, 0, 0,
        0, a1, 0, a4, a5);
}

extern void *D_800DCE94;

struct Node150AFDB0 {
    char pad0[0x8];
    struct Node150AFDB0 *unk8;
    char pad0C[0x33];
    u8 unk3F;
};

void func_150AFDB0(void) {
    struct Node150AFDB0 *node;

    D_800DD190++;
    node = D_800DCE94;
    while (node != 0) {
        ((struct Node150AFDB0 **)D_800DD198)[(s8)D_800DD190] = node->unk8;
        if (node->unk3F == D_800C3E78) {
            func_1516972C((struct102 *)node);
        }
        node = ((struct Node150AFDB0 **)D_800DD198)[(s8)D_800DD190];
    }
    D_800DD190--;
}

void func_150AFE64(s32 arg0) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s32 idx;
    f32 *mtx;
    f32 zero;

    if (D_800D154C->unk1D4 != 0) {
        if (arg0 == 0) {
            idx = 3;
        } else {
            idx = 2;
        }

        zero = 0.0f;
        mtx = (f32 *)((u8 *)D_800D154C->unk1D4 + (idx << 6));
        spA4 = zero;
        spA0 = zero;
        sp9C = -20.0f;
        func_150A7960(mtx, spA4, spA0, sp9C, &spA4, &spA0, &sp9C);
        sp98 = zero;
        sp94 = zero;
        sp90 = -150.0f;
        func_150A7960(mtx, sp98, sp94, sp90, &sp98, &sp94, &sp90);
        func_150E1AB0(0, spA4, spA0, sp9C, sp98, sp94, sp90, 40.0f, zero, 2.0f, 120.0f, 0x3C, 0x23, 0, 0, 0, 0, 0, 0, 0, 0, 0, zero, zero, zero, zero, zero, zero);
        func_150E2DB4(D_800D154C, D_800D154C->unique_id, (s16)idx, -1, zero, zero, -39.0f, zero, zero, -150.0f, 3, 0xFF, 4, 0);
    }
}

void func_150B003C(s32 arg0) {
    if (D_800BE9F0 == 6) {
        func_15179008(0);
        func_150AF200(0xE2, 0xE1);
        return;
    }
    func_150AF200(0xDF, 0xDE);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DC6B0/func_150B0094.s")

void func_150B02C0(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x170) != 0) {
        func_1516972C(*(struct102 **)((u8 *)arg0 + 0x170));
    }
}

extern void func_150B02C0(void *);
extern void func_15132570(void *);

void func_150B02F0(void *arg0) {
    func_150B02C0(arg0);
    func_15132570(arg0);
}

extern void func_1513259C(void *);

void func_150B031C(void *arg0) {
    func_150B02C0(arg0);
    func_1513259C(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DC6B0/func_150B0348.s")

extern s32 func_151149AC(u32);

struct Obj150B060C {
    f32 unk0;
    f32 unk4;
    s16 *unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
};

s32 func_150B060C(u8 arg0, struct Obj150B060C *arg1) {
    arg1->unk8 = (s16 *)func_151149AC(arg0);
    if (arg1->unk8 == 0) {
        return 0;
    }
    arg1->unk0 = -150.0f;
    arg1->unk4 = 4.5f;
    arg1->unkC = (f32)arg1->unk8[8];
    arg1->unk10 = (f32)arg1->unk8[9];
    arg1->unk14 = (f32)arg1->unk8[10];
    return 1;
}
