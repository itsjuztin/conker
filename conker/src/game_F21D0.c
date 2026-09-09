#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_F21D0/func_150C4D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_F21D0/func_150C4E9C.s")

extern s32 *D_800D98D0[];

void func_150C522C(void) {
    s32 i;
    s32 v;

    i = 0;
    do {
        v = (s32)D_800D98D0[i];
        if (v != 0) {
            func_1516972C((struct102 *)v);
        }
        i++;
        D_800D98D0[i - 1] = 0;
    } while ((s32 **)&D_800D98E0 != &D_800D98D0[i]);
}

extern u8 D_800C35E8;

s32 func_150C5280(void) {
    u8 v0;
    if (D_800C35EA == 1) {
        v0 = D_800C35E8;
        if (v0 == 0xB || v0 == 0xC || v0 == 0xD) {
            return 1;
        }
    }
    return 0;
}

extern s32 func_150C5280(void);
extern s32 (*D_8008ADA8)(s32);

s32 func_150C52CC(s32 arg0) {
    if (func_150C5280()) {
        return 0;
    }
    return D_8008ADA8(arg0);
}

s32 func_150C5310(s32 *arg0) {
    if (func_150C5280()) {
        arg0[0x18] |= 0x20000;
    } else {
        arg0[0x18] &= ~0x20000;
    }
    return 1;
}
