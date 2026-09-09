#include <ultra64.h>
#include "functions.h"
#include "variables.h"

struct Entry151298C0 {
    s16 unk0;
    s16 unk2;
    f32 unk4;
    f32 unk8;
    u8 padC[0x18];
};

extern f32 D_800A3610;
extern struct Entry151298C0 D_800DC028[];

#pragma GLOBAL_ASM("asm/nonmatchings/game_156160/func_15128CB0.s")

void func_151298C0(void *arg0, s32 arg1)
{
    struct Entry151298C0 *entries;

    if (D_80089550 != 0) {
        entries = D_800DC028;
        entries[*(volatile u8 *)((u8 *)arg0 + 0x23D)].unk2 = 0;
        entries[*(volatile u8 *)((u8 *)arg0 + 0x23D)].unk4 = -1.0f;
        entries[*(volatile u8 *)((u8 *)arg0 + 0x23D)].unk8 = D_800A3610;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_156160/func_15129934.s")
