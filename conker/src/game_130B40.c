#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_15103828(void);

void func_15103690(s32 arg0) {
    func_15103828();
}

struct vec151036B4 {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
};

struct conker151036B4 {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ struct vec151036B4 unk08;
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 unk16;
    /* 0x18 */ s16 unk18;
    /* 0x1A */ s16 unk1A;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ s16 unk2E;
    /* 0x30 */ f32 unk30;
    /* 0x34 */ f32 unk34;
    /* 0x38 */ f32 unk38;
};

struct src151036B4 {
    /* 0x00 */ struct vec151036B4 unk00;
};

struct word151036B4 {
    s32 unk00;
};

extern struct word151036B4 D_800A2350;
extern struct word151036B4 D_800A2354;
extern f32 D_800A2358;
extern f32 D_800A235C;
extern f32 D_800A2360;
extern f32 D_800A2364;
extern f32 D_800A2368;

void func_15152190(struct conker151036B4 *a0, struct word151036B4 *a1, struct word151036B4 *a2, s32 a3, f32 a4, s32 a5, s32 a6, s32 a7);

void func_151036B4(struct src151036B4 *arg0, s32 arg1, s32 arg2) {
    struct conker151036B4 sp34;
    struct word151036B4 sp30;
    struct word151036B4 sp2C;

    sp30 = D_800A2350;
    sp2C = D_800A2354;
    sp34.unk00 = 8;
    sp34.unk04 = 4;
    sp34.unk08 = arg0->unk00;
    sp34.unk14 = 0;
    sp34.unk16 = 0xFF;
    sp34.unk18 = -0x40;
    sp34.unk1A = 0x5D;
    sp34.unk1C = 8.0f;
    sp34.unk20 = 4.0f;
    sp34.unk24 = D_800A2358;
    sp34.unk28 = D_800A235C;
    sp34.unk2C = 0x14;
    sp34.unk2E = 0xA;
    sp34.unk30 = D_800A2360;
    sp34.unk34 = D_800A2364;
    sp34.unk38 = D_800A2368;
    func_15152190(&sp34, &sp30, &sp2C, 1, 0.0f, 1, (u8)arg1, arg2);
}

s32 func_151037DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return 0;
}
