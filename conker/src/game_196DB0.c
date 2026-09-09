#include <ultra64.h>
#include "functions.h"
#include "variables.h"


s32 func_15167A68(s32, s32, s32, s32, s32, s32);
extern void (*D_8008CA20[])(struct102 *);

s32 func_15169900(s32 arg0, s32 arg1) {
    s32 ret;

    ret = func_15167A68(0x5E, 0, 0x4C, 0, arg1, 1);
    if (ret != 0) {
        bcopy((void *)arg0, (void *)(ret + 0x10), 0x3C);
    }
    return ret;
}

s32 func_15169968(s32 arg0) {
    return func_15169900(arg0, 0xFF);
}

void func_15169988(struct102 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_t1;

    temp_v0 = *(s8 *)((u8 *)arg0 + 0x40);
    if (temp_v0 != 0) {
        D_8008CA20[temp_v0](arg0);
    }

    temp_v0 = *(s16 *)((u8 *)arg0 + 0x26);
    temp_v0 += *(s16 *)((u8 *)arg0 + 0x28) * D_800BE9E4;
    temp_t1 = *(u8 *)((u8 *)arg0 + 0x41) << 8;
    if (temp_v0 >= temp_t1) {
        temp_v0 -= temp_t1;
    } else if (temp_v0 < 0) {
        temp_v0 += temp_t1;
    }

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x24);
    *(s16 *)((u8 *)arg0 + 0x26) = temp_v0;
    if (temp_v1 != 0) {
        temp_v1 -= D_800BE9E4;
        if (temp_v1 <= 0) {
            func_1516972C(arg0);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x24) = temp_v1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_196DB0/func_15169A48.s")
