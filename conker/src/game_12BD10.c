#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_12BD10/func_150FE860.s")

extern s32 func_15145EA4(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3);
extern u8 D_80088BA0;
extern s32 D_800A2000;

typedef struct {
    char pad_0[0x1D4];
    s32 field_0x1D4;
} ActorFields;

void func_150FEBC8(ActorFields *arg0, s32 arg1, s32 arg2) {
    s32 sp20[2];
    s32 sp1C;
    s32 a2;

    a2 = arg0->field_0x1D4 + D_80088BA0 * 0x40;
    sp20[0] = (s32)&D_800A2000;
    sp1C = arg2;
    func_15145EA4(sp20, &sp1C, a2, 1);
}

extern void func_15102B38(s32, u8, s32, s32, f32 *, s32, s32, f32, s32, s32, s32, s32, u8, s32);
extern f32 D_800A203C, D_800A2040, D_800A2044, D_800A2048, D_800A204C;

void func_150FEC28(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6) {
    f32 sp50[2];
    union { volatile s32 w; f64 d; } sp48;
    s32 sp44;

    sp50[1] = func_150ADA68() * D_800A203C + D_800A2040;
    sp50[0] = func_150ADA68() * D_800A2044 + D_800A2048;
    sp44 = func_150ADA20();
    sp48.w = func_150ADA20();
    func_15102B38(arg0, (u8)arg1, arg2, arg3, sp50, (sp44 & 3) + 6, 0xFF,
                  func_150ADA68() * 270.0f + D_800A204C, arg4, 0xFF, 0, -1,
                  arg5, arg6);
}
