#include <ultra64.h>
#include "functions.h"
#include "variables.h"

struct Vec3F15109C20 {
    f32 x;
    f32 y;
    f32 z;
};

struct Arg15109C20 {
    u8 pad0;
    u8 unk1;
    u8 pad2[0xA];
    u8 unkC;
    u8 padD[0x6];
    u8 unk13;
    u8 pad14[0x14];
    void *unk28;
};

struct Arg15109C20Sub {
    u8 pad0[0x3B];
    u8 unk3B;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
} GameStruct1510A8CCa;

typedef struct {
    s32 unk0;
    u8 unk4;
} GameStruct1510A8CCb;

extern f32 D_800A2650;
extern f32 D_800A2654;
extern f32 D_800A2658;
extern f32 D_800A265C;
extern f32 D_800A2660;
extern f32 D_800A2664;
extern f32 D_800A2668;
extern f32 D_800A266C;
extern f32 D_800A2670;
extern f32 D_800A2674;
extern f32 D_800A2678;
extern f32 D_800A267C;
extern f32 D_800A2680;
extern void func_15132A4C(void *, s32, s32, s32, u8, s32);


struct260 *func_15109410(void *arg0, s16 arg1, s8 arg2, s8 arg3, f32 arg4, s32 arg5, u8 arg6, s32 arg7) {
    struct260 *temp_v0;
    struct {
        void *unk0;
        u8 unk4;
        u8 pad5;
        u8 pad6;
        u8 pad7;
        f32 unk8;
        f32 unkC;
        u8 unk10;
        u8 unk11;
    } sp38;
    s16 sp44;
    u8 sp40;

    if (arg0 == NULL) {
        return NULL;
    }

    sp40 = 0;
    if (arg1 < 0) {
        sp44 = 0x12C;
    } else {
        sp40 = 1;
        sp44 = (s16)arg1;
    }

    sp38.unk8 = 0.0f;
    sp38.unkC = arg4;
    sp38.unk10 = arg2;
    sp38.unk11 = arg3;
    sp38.unk0 = arg0;
    sp38.unk4 = *(u8 *)((s32)arg0 + 0x3B);

    temp_v0 = func_15149130(sp44, -1, 0x1A, -1, sp40, 0x1A, (struct37 *)((s32)arg5 + 0x14), arg6, arg7);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp38, 0x14);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1368C0/func_151094FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1368C0/func_15109848.s")

void func_15109C20(struct Arg15109C20 *arg0, struct Vec3F15109C20 *arg1, s32 arg2, s32 arg3, s32 arg4, struct Vec3F15109C20 *arg5) {
    s32 padA4;
    struct Arg15109C20Sub *sub;
    f32 scale;
    s32 pad98;
    struct {
        f32 unk00;
        f32 unk04;
        f32 unk08;
        f32 unk0C;
        f32 unk10;
        f32 unk14;
        f32 unk18;
        f32 unk1C;
        f32 unk20;
        f32 unk24;
        struct Vec3F15109C20 unk28;
        f32 unk34;
        f32 unk38;
        f32 unk3C;
        f32 unk40;
        f32 unk44;
        f32 unk48;
        f32 unk4C;
        s32 unk50;
        s16 unk54;
        s16 unk56;
        u8 unk58;
        u8 pad59[3];
        s32 unk5C;
        u8 unk60;
        u8 unk61;
        u8 unk62;
        u8 unk63;
        u8 unk64;
        u8 unk65;
        u8 unk66;
        u8 unk67;
        u8 unk68;
        u8 pad69;
        u8 unk6A;
        u8 pad6B;
        struct Arg15109C20Sub *unk6C;
        u8 unk70;
        u8 pad71;
        s16 unk72;
        s16 unk74;
        u8 pad76[2];
    } sp20;

    sub = arg0->unk28;
    scale = ((func_150ADA68() * D_800A2650) + D_800A2654) * D_800A2658;
    sp20.unk00 = 1.0f;
    sp20.unk04 = 1.0f;
    sp20.unk08 = sp20.unk0C = ((func_150ADA68() * D_800A265C) + D_800A2660) * D_800A2664;
    sp20.unk10 = func_150ADA68() * 360.0f;
    sp20.unk14 = func_150ADA68() * 360.0f;
    sp20.unk18 = func_150ADA68() * 360.0f;
    sp20.unk1C = 1.0f;
    sp20.unk20 = 1.0f;
    sp20.unk24 = 1.0f;
    sp20.unk28 = *arg1;
    sp20.unk34 = arg5->x * scale;
    sp20.unk38 = arg5->y * scale;
    sp20.unk3C = arg5->z * scale;
    sp20.unk40 = ((func_150ADA68() * D_800A2668) + D_800A266C) * D_800A2670;
    sp20.unk44 = 0.0f;
    sp20.unk48 = ((func_150ADA68() * D_800A2674) + D_800A2678) * D_800A267C;
    sp20.unk4C = ((func_150ADA68() * 124.0f) + -231.0f) * D_800A2680;
    sp20.unk50 = 0x29E8;
    sp20.unk54 = (func_150ADA20() % 15U) + 0x14;

    if (func_150ADA20() & 1) {
        sp20.unk56 = 0x23;
    } else {
        sp20.unk56 = 0x24;
    }

    sp20.unk58 = 0;
    sp20.unk5C = 0;
    sp20.unk60 = 0xFF;
    sp20.unk61 = 8;
    sp20.unk62 = 0;
    sp20.unk63 = 0;
    sp20.unk64 = 0;
    sp20.unk65 = 0;
    sp20.unk66 = 0;
    sp20.unk67 = 0;
    sp20.unk68 = 2;
    if (arg0->unk13 == 0x1A) {
        sp20.unk6A = 1;
    } else {
        sp20.unk6A = 2;
    }
    sp20.unk6C = sub;
    sp20.unk70 = sub->unk3B;
    sp20.unk72 = 0xA;
    sp20.unk74 = 0x19;

    func_15132A4C(&sp20, 3, 0xFF, 0, arg0->unkC, arg0->unk1);
}

struct260 *func_15109ED4(void *arg0, s16 arg1, s8 arg2, s8 arg3, f32 arg4, s32 arg5, u8 arg6, s32 arg7) {
    struct260 *temp_v0;
    struct {
        void *unk0;
        f32 unk4;
        f32 unk8;
        u8 unkC;
        u8 unkD;
    } sp34;
    s16 sp44;
    u8 sp40;

    if (arg0 == NULL) {
        return NULL;
    }

    sp40 = 0;
    if (arg1 < 0) {
        sp44 = 0x12C;
    } else {
        sp40 = 1;
        sp44 = (s16)arg1;
    }

    sp34.unk4 = 0.0f;
    sp34.unk8 = arg4;
    sp34.unkC = arg2;
    sp34.unkD = arg3;
    sp34.unk0 = arg0;

    temp_v0 = func_15149130(sp44, -1, 0x1B, -1, sp40, 0x1B, (struct37 *)((s32)arg5 + 0x10), arg6, arg7);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp34, 0x10);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1368C0/func_15109FB8.s")

extern f32 D_800A2684;
extern f32 D_800A2688;

struct260 *func_1510A344(void *arg0, s32 arg1, u8 arg2, s32 arg3) {
    struct260 *temp_v0;
    struct {
        void *unk0;
        u8 unk4;
        u8 pad5;
        u8 pad6;
        u8 pad7;
        f32 unk8;
        f32 unkC;
        f32 unk10;
    } sp30;

    if (arg0 == NULL) {
        return NULL;
    }

    sp30.unk0 = arg0;
    sp30.unk4 = *(u8 *)((s32)arg0 + 0x3B);
    sp30.unk8 = 0.0f;
    sp30.unkC = D_800A2684;
    sp30.unk10 = D_800A2688;

    temp_v0 = func_15149130((s16)arg1, -1, 0x1C, -1, 1, 0x1C, (struct37 *)0x14, arg2, arg3);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp30, 0x14);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1368C0/func_1510A40C.s")

void func_1510A870(void *arg0, GameStruct1510A8CCa *arg1, u8 arg2) {
    GameStruct1510A8CCb *v0 = (GameStruct1510A8CCb *)((u8 *)arg0 + 0x28);
    if (arg2 == 0x2D) {
        if (v0->unk0 == arg1->unk0) {
            v0->unk0 = arg1->unk4;
            v0->unk4 = arg1->unk9;
        } else if (v0->unk0 == arg1->unk4) {
            v0->unk0 = arg1->unk0;
            v0->unk4 = arg1->unk8;
        }
    }
}

void func_1510A8CC(void *arg0, GameStruct1510A8CCa *arg1, u8 arg2) {
    GameStruct1510A8CCb *v0 = (GameStruct1510A8CCb *)((u8 *)arg0 + 0x28);
    if (arg2 == 0x2D) {
        if (v0->unk0 == arg1->unk0) {
            v0->unk0 = arg1->unk4;
            v0->unk4 = arg1->unk9;
        } else if (v0->unk0 == arg1->unk4) {
            v0->unk0 = arg1->unk0;
            v0->unk4 = arg1->unk8;
        }
    }
}
