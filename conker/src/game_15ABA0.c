#include <ultra64.h>
#include "functions.h"
#include "variables.h"


typedef struct {
    char unk00[0x28];
    f32 unk28;
    f32 unk2C;
    char unk30[0x20];
    s32 unk50;
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    f32 unk60;
    char unk64[0x4];
} SomeStruct1512;

extern SomeStruct1512 D_800DC2C0[];

void func_1512D6F0(u8 *arg0) {
    SomeStruct1512 *sp = &D_800DC2C0[arg0[0x23D]];
    sp->unk50 = 5;
    sp->unk54 = 0.0f;
    sp->unk58 = 0.0f;
    sp->unk5C = 0.0f;
    sp->unk60 = 0.0f;
    sp->unk2C = 0.0f;
    sp->unk28 = -1.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_15ABA0/func_1512D748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_15ABA0/func_1512D980.s")
