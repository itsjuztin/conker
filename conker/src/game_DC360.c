#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_DC360/func_150AEEB0.s")

s32 func_150AF1C0(void *arg0) {
    void *v0 = *(void **)((u8 *)arg0 + 0x98);
    s32 v1 = *(s16 *)((u8 *)arg0 + 0x1C) << 5;

    if (v1 >= 0x100) {
        v1 = 0xFF;
    }
    *(u8 *)((u8 *)v0 + 0x1B) = v1;
    if ((v1 & 0xFF) < 0) {
        return 0;
    }
    return 1;
}
