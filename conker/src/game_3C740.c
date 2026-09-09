#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern s32 func_151EF610(void);

struct LocalDef1500F290 {
    s32 unk0;
    s16 unk4;
    s8  unk6;
    s8  unk7;
    s32 unk8;
    s32 unkC;
    u8  unk10;
    u8  unk11;
    u8  unk12;
    u8  unk13;
    u8  unk14;
    u8  unk15;
    s8  unk16;
    s8  unk17;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

void func_1500F290(f32 arg0, f32 arg1, f32 arg2) {
    struct LocalDef1500F290 tmp;
    s32 temp;

    tmp.unk6 = 0x38;
    tmp.unk8 = 0;
    temp = func_151EF610();
    tmp.unkC = (temp % 0x1000) + 0x4000;
    tmp.unk0 = 0x20014;
    tmp.unk4 = 1;
    tmp.unk10 = 0xFF;
    tmp.unk11 = 0xFF;
    tmp.unk12 = 0;
    tmp.unk13 = 0;
    tmp.unk14 = 0;
    tmp.unk15 = 0xFF;
    tmp.unk18 = 0x30001;
    func_1513C5B0((s32)&tmp, 0, 0, 0, arg0, arg1, arg2, 110.0f, 110.0f, 0, 0, 0, 0xFF, 0);
}

typedef struct {
    u8  pad0[0x28];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s8  unk30;
} Struct1500F378;

s32 func_1500F378(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Struct1500F378 *temp;

    temp = (Struct1500F378 *)func_151491F4((s16)((func_150ADA20() & 0x7F) + 0xA), 1, -1, 1, 0, 0xA, 0xFF, 0);
    if (temp != 0) {
        temp->unk28 = arg0;
        temp->unk2A = arg1;
        temp->unk2C = arg2;
        temp->unk2E = arg3;
        temp->unk30 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3C740/func_1500F40C.s")
