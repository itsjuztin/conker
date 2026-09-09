#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern u8 D_800A0FE0[];
extern void *func_151149AC(u8);
extern void func_1510F800(s32);


#pragma GLOBAL_ASM("asm/nonmatchings/game_10E240/func_150E0D90.s")

struct260 *func_150E1060(u8 arg0, u8 arg1, s32 arg2) {
    struct260 *temp_v0;
    struct {
        u8 unk0;
        u8 pad1;
        u8 pad2;
        u8 pad3;
        void *unk4;
        s32 unk8;
        f32 unkC;
    } sp34;

    if ((s32)arg0 < 0) {
        return NULL;
    }

    if (arg0 >= 2) {
        return NULL;
    }

    sp34.unk0 = arg0;
    sp34.unk4 = func_151149AC(D_800A0FE0[arg0]);
    if (sp34.unk4 == NULL) {
        return NULL;
    }

    func_1510F800(0);
    sp34.unk8 = func_1510FD20(*(s16 *)((s32)sp34.unk4 + 0x10), *(s16 *)((s32)sp34.unk4 + 0x14));
    sp34.unkC = 0.0f;

    temp_v0 = func_15149130(0x12C, -1, 0x1F, -1, 0, 0x1F, (struct37 *)0x10, arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp34, 0x10);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_10E240/func_150E114C.s")
