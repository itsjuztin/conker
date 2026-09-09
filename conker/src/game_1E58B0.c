#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern u8 D_800AA490;
extern f32 D_800AA4C8;
extern f32 D_800DCA24;
extern void func_15134908(void *, s32, u8, s32);

struct blk12_B8400 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct arg0_B8400 {
    u8 unk0;
    u8 unk1;
    u8 pad2[0xA];
    u8 unkC;
    u8 padD[0x2B];
    struct blk12_B8400 unk38;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
};

s32 func_151B8400(struct arg0_B8400 *arg0) {
    s32 temp_v0;
    struct {
        u8 unk0;
        u8 unk1;
        s16 unk2;
        s16 unk4;
        u8 pad6[2];
        s32 unk8;
        s32 unkC;
        u8 unk10;
        u8 unk11;
        u8 unk12;
        u8 unk13;
        f32 unk14;
        f32 unk18;
        struct blk12_B8400 unk1C;
        struct blk12_B8400 unk28;
        f32 unk34;
        f32 unk38;
        f32 unk3C;
        s32 unk40;
        u8 unk44;
        u8 unk45;
        u8 unk46;
        u8 unk47;
        s32 unk48;
        u8 unk4C;
        u8 pad4Dh[3];
        s32 unk50;
        s16 unk54;
        s16 unk56;
        s32 unk58;
    } sp50;

    sp50.unk58 = (s32)arg0;
    sp50.unk0 = 0xFF;
    sp50.unk1 = 0;
    sp50.unk2 = 0x5901;
    sp50.unk4 = 0x32;
    sp50.unk8 = 0;
    sp50.unkC = 0;
    sp50.unk10 = 0xFF;
    sp50.unk11 = 0xE6;
    sp50.unk12 = 0xB6;
    sp50.unk13 = 0xFF;
    sp50.unk14 = 9.0f;
    sp50.unk18 = 1.0f;
    sp50.unk1C = sp50.unk28 = arg0->unk38;
    sp50.unk34 = arg0->unk44 * 0.25f;
    sp50.unk38 = arg0->unk48 * 0.25f;
    sp50.unk3C = arg0->unk4C * 0.25f;
    sp50.unk40 = 0x0CCC0000;
    sp50.unk44 = 0xC8;
    sp50.unk45 = 0xFF;
    sp50.unk46 = 0;
    sp50.unk47 = 0x6;
    sp50.unk48 = 0;
    sp50.unk4C = 0xFF;
    sp50.unk50 = 0;
    sp50.unk54 = 0x32;
    sp50.unk56 = 0x5;

    temp_v0 = (s32)func_1513D2F0(&sp50, (s32)&D_800AA490, 0x1B, 0, 0, 0x19, 0, 0, 0, 4,
                                 arg0->unkC, arg0->unk1);
    if (temp_v0 != 0) {
        memcpy((void *)(temp_v0 + 0x110), &sp50.unk58, 4);
    }
    return temp_v0;
}

struct vec3w_151B85AC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct blk151B85AC {
    u8 pad0[0x38];
    struct vec3w_151B85AC unk38;
};

struct arg0151B85AC {
    u8 pad0[0x34];
    struct vec3w_151B85AC unk34;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54;
    s32 unk58;
    u8 pad5C[0xB4];
    struct blk151B85AC *unk110;
};

s32 func_151B85AC(struct arg0151B85AC *arg0) {
    struct blk151B85AC *temp_v0;

    temp_v0 = arg0->unk110;
    if (temp_v0 != 0) {
        arg0->unk34 = temp_v0->unk38;
        arg0->unk40 += arg0->unk4C * D_800BE9A4;
        arg0->unk44 += arg0->unk50 * D_800BE9A4;
        arg0->unk48 += arg0->unk54 * D_800BE9A4;
    } else {
        arg0->unk58 |= 1;
    }
    return 1;
}

void func_1513FA70(s32, s32);

void func_151B863C(s32 a0, s16 a1) {
    func_1513FA70(a0, a1);
}

typedef struct {
    s32 unk00;
    s32 unk04;
    s32 unk08;
    f32 unk0C;
    f32 unk10;
    s16 unk14;
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 pad19[7];
} Struct151B8668;

void func_151B8668(s32 arg0, u8 arg1, s32 arg2) {
    Struct151B8668 sp18;

    sp18.unk0C = 10.0f;
    sp18.unk00 = arg0 + 0x38;
    sp18.unk04 = arg0 + 0x3C;
    sp18.unk08 = arg0 + 0x40;
    sp18.unk10 = D_800AA4C8 * D_800DCA24;
    sp18.unk14 = 0x12C;
    sp18.unk16 = 0;
    sp18.unk17 = 3;
    sp18.unk18 = 0;
    func_15134908(&sp18, 0, arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E58B0/func_151B86F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E58B0/func_151B8908.s")
