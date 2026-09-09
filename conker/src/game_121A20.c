#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_121A20/func_150F4570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_121A20/func_150F48D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_121A20/func_150F4A38.s")

struct sub150F4 { u8 pad[0x24]; u8 unk24; };

void func_150F4CFC(struct102 *arg0, s32 arg1, u8 arg2) {
    struct sub150F4 *p;
    p = (struct sub150F4 *)((u8 *)arg0 + 0x170);
    if (arg2 == 0x4E) {
        ((u8 *)arg0)[0x71] = 0;
        p->unk24 |= 0x5;
    } else if (arg2 == 0x4F) {
        func_1516972C(arg0);
    }
}

void func_150F4D5C(void *arg0, s8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    struct {
        void *unk0;
        f32 unk4;
        u8 unk8;
        u8 unk9;
        u8 padA;
        u8 padB;
    } sp34;
    struct260 *temp_v0;

    sp34.unk0 = arg0;
    sp34.unk4 = 0.0f;
    sp34.unk8 = arg1;
    sp34.unk9 = arg2;

    temp_v0 = func_15149130(0x12C, -1, 0x56, -1, 0, 0, (struct37 *)0xC, arg3, arg4);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp34, 0xC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_121A20/func_150F4DEC.s")
