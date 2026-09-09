#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_6CCB0/func_1503F800.s")

struct Game1503F904 {
    char pad14[0x14];
    f32 unk14;
    char pad18[0x4];
    f32 unk1C;
};

extern void func_1503F800(void *, s16, s16, s32, s32);

void func_1503F904(struct Game1503F904 *arg0, s32 arg1, s32 arg2) {
    func_1503F800((s32)arg0 + 0x320, (s16)(s32)arg0->unk14, (s16)(s32)arg0->unk1C, arg1, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_6CCB0/func_1503F964.s")
