#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_119370/func_150EBEC0.s")

typedef struct {
    s32 unk0;
    u8 unk4;
} Struct150EC3D4;

s32 func_150EC3D4(Struct150EC3D4 *arg0, Struct150EC3D4 *arg1) {
    s32 temp;

    if (arg0 == arg1) {
        return 0;
    }
    if (arg0->unk0 == 0) {
        return 0;
    }
    temp = arg0->unk4;
    if (temp == 0xFF) {
        return 0;
    }
    if ((temp == 0) || (temp == 1) || (temp == 2) || (temp == 3) || (temp == 4) || (temp == 0x28) || (temp == 0x77)) {
        return 1;
    }
    return 0;
}

void func_151C3B0C(s32, f32, f32, f32, f32, s32, s32, s32);

void func_150EC45C(s32 arg0) {
    func_151C3B0C(arg0, 1.0f, 1.0f, 1.0f, 0.0f, 0xFF, 0xFF, 0xFF);
}
