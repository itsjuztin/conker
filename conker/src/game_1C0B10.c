#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1C0B10/func_15193660.s")

typedef struct {
    /* 0x00 */ u8  unk0;
    /* 0x01 */ u8  pad1[0x3];
    /* 0x04 */ void *unk4;
    /* 0x08 */ u8  unk8;
    /* 0x09 */ u8  pad9[0x3];
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ u8  unk24;
    /* 0x25 */ u8  pad25[0x1];
    /* 0x26 */ s16 unk26;
    /* 0x28 */ s16 unk28;
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ u8  unk2E;
    /* 0x2F */ u8  unk2F;
    /* 0x30 */ s8  unk30;
    /* 0x31 */ u8  pad31[0x3];
    /* 0x34 */ f32 unk34;
    /* 0x38 */ u8  unk38;
    /* 0x39 */ s8  unk39;
} struct_10E4_1937F4;

extern f32 D_800A81E4;
void func_15134DAC(struct_10E4_1937F4 *, s32);

void func_151937F4(s32 *arg0, s32 arg1, s32 arg2) {
    struct_10E4_1937F4 sp1C;

    if (arg0 != 0) {
        if (arg0[0] != 0) {
            sp1C.unk0 = *((u8 *)arg0 + 0x3B);
            sp1C.unk4 = arg0;
            sp1C.unk8 = 0;
            sp1C.unkC = -28.0f;
            sp1C.unk10 = 6.0f;
            sp1C.unk14 = 1.0f;
            sp1C.unk18 = -58.0f;
            sp1C.unk1C = -3.0f;
            sp1C.unk20 = -31.0f;
            sp1C.unk24 = 2;
            sp1C.unk26 = 30;
            sp1C.unk28 = 25;
            sp1C.unk2A = 750;
            sp1C.unk2E = 3;
            sp1C.unk2F = 3;
            sp1C.unk30 = -1;
            sp1C.unk34 = D_800A81E4;
            sp1C.unk38 = 4;
            sp1C.unk39 = -1;
            func_15134DAC(&sp1C, 0);
        }
    }
}

extern f32 D_800A81E8;

s32 func_151938E4(f32 *arg0) {
    arg0[0x1D] = D_800A81E8;
    return 1;
}

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3F151938FC;

typedef struct {
    u8 pad0[0x3B];
    u8 unk3B;
    u8 pad3C[0x71];
    u8 unkAD;
} Struct151938FCSub;

typedef struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[0xA];
    u8 unkC;
    u8 padD[0xF];
    Struct151938FCSub *unk1C;
    u8 pad20[0x54];
    f32 unk74;
} Struct151938FCArg5;

typedef struct {
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
    f32 unk28;
    f32 unk2C;
    u8 unk30;
    u8 pad31[3];
} Struct151938FCMotion;

typedef struct {
    u8 unk00;
    u8 unk01;
    u8 unk02;
    s8 unk03;
    s8 unk04;
    u8 pad05;
    s16 unk06;
    s32 unk08;
    s32 unk0C;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    u8 unk2C;
    u8 unk2D;
    u8 pad2E[2];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    u8 unk38;
    u8 pad39[3];
    Struct151938FCSub *unk3C;
    u8 unk40;
    u8 unk41;
    u8 pad42[2];
    Vec3F151938FC unk44;
    u8 pad50[4];
    s16 unk54;
    s16 unk56;
} Struct151938FCParams;

extern f32 sqrtf(f32);
extern f32 D_800A81EC;
extern f32 D_800A81F0;
extern f32 D_800A81F4;
extern f32 D_800A81F8;
extern f32 D_800A81FC;
extern f32 D_800A8200;
extern f32 D_800A8204;
extern f32 D_800A8208;
extern s32 func_1515C0F8(Struct151938FCSub *, Vec3F151938FC **);
extern void func_15157898(Struct151938FCParams *, Struct151938FCMotion *, s32, f32, s32, s32, s32, s32, s32);

void func_151938FC(Vec3F151938FC *arg0, Vec3F151938FC *arg1, s32 arg2, s32 arg3, f32 arg4, Struct151938FCArg5 *arg5) {
    Struct151938FCParams sp88;
    Struct151938FCMotion sp54;
    Vec3F151938FC *sp50;
    s32 pad48[2];
    f32 temp_f2;
    f32 temp_f12;
    f32 temp_f14;

    if (func_1515C0F8(arg5->unk1C, &sp50) == 0) {
        return;
    }
    if (arg5->unk1C->unkAD != 0) {
        return;
    }

    temp_f2 = sp50->x;
    temp_f12 = sp50->y;
    temp_f14 = sp50->z;
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < D_800A81EC) {
        return;
    }

    sp88.unk38 = 0;
    sp88.unk00 = 0x27;
    sp88.unk01 = 0;
    sp88.unk02 = 1;
    sp88.unk03 = -1;
    sp88.unk04 = -1;
    sp88.unk06 = (func_150ADA20() % 41U) + 0x5A;
    sp88.unk08 = 0xA0;
    sp88.unk0C = 0x13;
    sp88.unk14 = 0x220405;
    sp88.unk18 = 0x40200;
    sp88.unk2D = 8;
    sp88.unk1C = 1;
    sp88.unk20 = 0x38;
    sp88.unk10 = 0;
    sp88.unk2C = 0;
    sp88.unk24 = 0x80;
    sp88.unk28 = 0x20;
    sp88.unk30 = 0xFF;
    sp88.unk31 = 0xFF;
    sp88.unk32 = 0xFF;
    sp88.unk33 = 0xFF;
    sp88.unk34 = 0xFF;
    sp88.unk35 = 0xFF;
    sp88.unk36 = 0xFF;
    sp88.unk37 = 0xFF;
    sp88.unk3C = arg5->unk1C;
    sp88.unk40 = arg5->unk1C->unk3B;
    sp88.unk41 = 1;
    sp88.unk44 = *arg0;
    sp54.unk10 = (arg1->x - arg0->x) * arg5->unk74;
    sp54.unk14 = (arg1->y - arg0->y) * arg5->unk74;
    sp54.unk18 = (arg1->z - arg0->z) * arg5->unk74;
    sp88.unk44.x += sp54.unk10 * arg4;
    sp88.unk44.y += sp54.unk14 * arg4;
    sp88.unk44.z += sp54.unk18 * arg4;
    sp54.unk00 = func_150ADA68() * 360.0f;
    sp54.unk04 = func_150ADA68() * 360.0f;
    sp54.unk08 = func_150ADA68() * 360.0f;
    func_150ADA68();
    sp54.unk0C = 340.0f * D_800A81F0;
    sp54.unk1C = ((func_150ADA68() * 1000.0f) + -500.0f) * D_800A81F4;
    sp54.unk20 = 0.0f;
    sp54.unk24 = ((func_150ADA68() * 1000.0f) + -500.0f) * D_800A81F8;
    sp54.unk28 = ((func_150ADA68() * 121.0f) + -135.0f) * D_800A81FC;
    sp54.unk2C = D_800A8200;
    sp88.unk54 = 0x19;
    sp88.unk56 = 0xA;
    sp54.unk30 = 0xF;
    func_15157898(&sp88, &sp54, 0, (func_150ADA68() * D_800A8204) * D_800A8208, 0, 0, 0, arg5->unkC, arg5->unk1);
}
