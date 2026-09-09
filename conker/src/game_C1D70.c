#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} struct150948C0;

typedef struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[2];
    s32 unk4;
} struct1509499C_arg0;

extern f32 *D_800D2C20;
void func_1509499C(struct1509499C_arg0 *, s32 *);
void func_150A7960(f32 *, f32, f32, f32, f32 *, f32 *, f32 *);

void func_150948C0(void *arg0, s32 arg1) {
    struct150948C0 *sp50[16];
    s32 i;
    struct150948C0 *point;
    s32 out;

    func_1509499C(arg0, (s32 *)sp50);
    for (i = 0; i != 0x10; i++) {
        point = sp50[i];
        if (point != 0) {
            out = (i * 0xC) + arg1;
            func_150A7960(D_800D2C20, (f32)point->unk0, (f32)point->unk2, (f32)point->unk4,
                          (f32 *)out, (f32 *)(out + 4), (f32 *)(out + 8));
        }
    }
}

void func_1509499C(struct1509499C_arg0 *arg0, s32 *arg1) {
    s32 packed;
    s32 value;
    s32 i;
    s32 lo;

    value = arg0->unk4;
    packed = arg0->unk1;
    lo = (s16)(packed & 0xF);
    i = 0;
    packed = (s16)((packed >> 4) + 1);

    for (; i < lo; i++) {
        arg1[i] = 0;
    }

    i = lo;
    for (; i < packed; i++) {
        arg1[i] = value;
        value += 0x10;
    }

    for (; i < 0x10; i++) {
        arg1[i] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C1D70/func_15094AB8.s")

extern Mtx D_800D2CA8[];
void func_150A7A48(f32 a[4][4], f32 b[4][4], f32 c[4][4]);
void func_150A7A00(void *, f32, f32, f32, f32 *, f32 *, f32 *, f32 *);

typedef struct {
    u8 pad0[0xC];
    f32 unkC;
    f32 unk10;
    u8 pad14[0x20];
    f32 unk34;
    f32 unk38;
    u8 pad3C[0x144];
} struct1509563C; // size 0x180

void func_15094EA0(s32 arg0) {
    f32 sp58[4][4];
    f32 sp18[4][4];

    guMtxL2F(&sp58, &((Mtx *)((s32 *)&D_800DC2A0)[D_800BE9C0])[arg0]);
    guMtxL2F(&sp18, (Mtx *)((u8 *)((struct259 *)D_800BE628 + arg0) + (D_800BE9C0 << 6) + 0x100));
    func_150A7A48(&sp58, &sp18, (f32 (*)[4])&D_800D2CA8[arg0]);
}

extern Gfx D_800873D0[];
extern s32 D_800D2CA0;

Gfx *func_15094F40(Gfx *arg0) {
    gSPDisplayList(arg0++, D_800873D0);
    D_800D2CA0 = 0;
    return arg0;
}

typedef struct {
    u32 unk0;
    u8 unk4;
    u8 pad5;
    u16 unk6;
    u16 unk8;
    u8 unkA;
    u8 unkB;
} struct15095060_arg0;

typedef struct {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
} struct15095060_d;

typedef struct {
    u8 pad0[0x10];
    struct15095060_d *unk10;
} struct15095060_arg2;

extern void func_15095060(struct15095060_arg0 *, s32, struct15095060_arg2 *);
extern void func_150950D4(s32, s32 *, s32, s32, s32, s32, s32, s32, s32, s32);
extern struct15095060_d D_800D2C90;

void func_15094F70(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    func_15095060((struct15095060_arg0 *)arg1, arg2, (struct15095060_arg2 *)arg3);
    func_150950D4(arg0, (s32 *)&D_800D2C90, arg4, arg5, 0, arg6, arg7, 0x100, 0x100, arg8);
}

void func_15094FE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    func_15095060((struct15095060_arg0 *)arg1, arg2, (struct15095060_arg2 *)arg3);
    func_150950D4(arg0, (s32 *)&D_800D2C90, arg4, arg5, 0, arg6, arg7, arg8, arg9, arg10);
}

void func_15095060(struct15095060_arg0 *arg0, s32 arg1, struct15095060_arg2 *arg2) {
    u32 temp_v0;

    if (arg2 != 0) {
        arg2->unk10 = &D_800D2C90;
    }

    temp_v0 = arg0->unk0;
    if (temp_v0 < 0x10000000U) {
        D_800D2C90.unk0 = temp_v0;
    } else {
        D_800D2C90.unk0 = ((u32 *)temp_v0)[arg1 >> 8];
    }

    D_800D2C90.unk4 = arg0->unk6;
    D_800D2C90.unk6 = arg0->unk8;
    D_800D2C90.unk8 = arg0->unkA;
    D_800D2C90.unk9 = arg0->unkB;
    D_800D2C90.unkA = arg0->unk4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C1D70/func_150950D4.s")

s32 func_1509563C(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 arg7) {
    f32 temp_f14;
    f32 temp_f12;
    f32 temp_f0;
    f32 temp_f2;
    struct1509563C *temp_v1;

    func_150A7A00(&D_800D2CA8[D_80082FA4], arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    temp_f14 = *arg6;
    if ((arg7 <= temp_f14) || (temp_f14 <= D_800D9B20)) {
        return 0;
    }
    temp_f12 = 1.0f / temp_f14;
    temp_v1 = &((struct1509563C *)D_800BE628)[D_80082FA4];
    temp_f0 = *arg3;
    temp_f2 = *arg4;
    temp_f0 = (temp_v1->unkC + 5.0f) * temp_f0 * temp_f12;
    temp_f2 = (temp_v1->unk10 + 5.0f) * temp_f2 * temp_f12;
    temp_f0 += temp_v1->unk34;
    temp_f2 = temp_v1->unk38 - temp_f2;
    *arg3 = temp_f0;
    *arg4 = temp_f2;
    return 1;
}

s32 func_1509563C(f32, f32, f32, f32 *, f32 *, f32 *, f32 *, f32);
void func_15095B08(s32, f32, f32, f32, s32, s32 *);
s32 func_15095A90(s32, s32, f32, f32, f32, s32, s32, s32, s32);
s32 func_15095D34(s32, s32, s32, s32, s32);

struct Pt15095760 {
    s16 x;
    s16 y;
    s16 z;
};

#define WGFX15095760(pkt, a, b)     \
{                                   \
    Gfx *_g = (Gfx *)(pkt);         \
    _g->words.w0 = (u32)(a);        \
    _g->words.w1 = (u32)(b);        \
}

s32 func_15095760(Gfx *arg0, struct Pt15095760 *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;

    if (func_1509563C((f32)arg1->x, (f32)arg1->y, (f32)arg1->z, &sp44, &sp40, &sp3C, &sp38, 4000.0f) == 0) {
        return (s32)arg0;
    }
    gDPPipeSync(arg0++);
    gDPSetPrimDepth(arg0++,
        (s32)(((sp3C / sp38) * (f32)*(s16 *)(((s32)D_800BE628 + D_80082FA4 * 0x180 + (D_800BE9C0 << 4)) + 0x44)
            + (f32)*(s16 *)(((s32)D_800BE628 + D_80082FA4 * 0x180 + (D_800BE9C0 << 4)) + 0x4C)) * 32.0f), 0);
    return func_15095A90((s32)arg0, (s32)arg1, sp44, sp40, sp38, 1, 0, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C1D70/func_150958B0.s")

void func_15095A48(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    func_15095A90(arg0, arg1, arg2, arg3, 4096.0f, 0, 0, 0, 0);
}

s32 func_15095A90(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 sp24;

    func_15095B08(arg1, arg2, arg3, arg4, arg5, &sp24);
    if (sp24 != 0) {
        arg0 = func_15095D34(arg0, arg1, arg6, arg7, arg8);
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C1D70/func_15095B08.s")

s32 func_15095D34(s32, s32, s32, s32, s32);

void func_15095D0C(s32 arg0, s32 arg1) {
    func_15095D34(arg0, arg1, 0, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C1D70/func_15095D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C1D70/func_1509629C.s")

extern Gfx D_80087408[];

Gfx *func_15096934(Gfx *arg0) {
    gSPDisplayList(arg0++, D_80087408);
    D_800D2DAB = 0;
    return arg0;
}
