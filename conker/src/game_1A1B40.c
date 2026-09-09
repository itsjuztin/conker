#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1A1B40/func_15174690.s")

void func_15174920(void *arg0) {
    s32 v0 = *(u8 *)((u8 *)arg0 + 0x3F);

    if (v0 >= 0xC9) {
        v0 = 0xC8;
    }
    v0 -= D_800BE9E4 * *(s32 *)((u8 *)arg0 + 0x18);
    if (v0 < 0) {
        *(s16 *)((u8 *)arg0 + 0x38) = 0;
        return;
    }
    *(u8 *)((u8 *)arg0 + 0x3F) = v0;
    *(s16 *)((u8 *)arg0 + 0x34) += *(s32 *)((u8 *)arg0 + 0x14);
    *(s16 *)((u8 *)arg0 + 0x36) += (*(s32 *)((u8 *)arg0 + 0x14) << 3) / 7;
}
