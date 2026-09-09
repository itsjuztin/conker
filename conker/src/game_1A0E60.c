#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1A0E60/func_151739B0.s")

extern s32 func_151739B0(s32, s32, s32, s32, s32);

s32 func_15173C60(s32 arg0, s32 arg1) {
    return func_151739B0(0, 0, arg0, arg1, 0);
}

extern s32 func_151149AC(u32);

void func_15173C90(s32 arg0, s32 arg1, s32 arg2) {
    struct131 *temp_v0;

    temp_v0 = (struct131 *)func_151149AC(arg2 & 0xFF);
    if (temp_v0 != NULL) {
        u32 temp;
        temp = *(u16 *)((u8 *)temp_v0 + 0x54) & 0xFFFF7FFF;
        func_151739B0(temp, 1, arg0, arg1, temp_v0 - D_800DBEF4);
    }
}
