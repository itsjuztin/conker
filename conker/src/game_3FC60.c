#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern u8 D_800DF7D0;
extern u8 D_800DF7D1;
extern u8 D_800DF7D2;
extern u8 D_800DF7D3[];
extern u8 D_800DF9B3[];
extern u8 *D_800BE510;
extern u16 D_800BE528;

typedef struct {
    u8 pad0[0xC];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 padF;
} struct_func_15012C84;


#pragma GLOBAL_ASM("asm/nonmatchings/game_3FC60/func_150127B0.s")

void func_15012C84(struct_func_15012C84 *arg0, u32 arg1) {
    u32 i;

    for (i = 0; i < arg1; i++) {
        D_800BE510[D_800BE528 * 3] = arg0[i].unkC;
        D_800BE510[(D_800BE528 * 3) + 1] = arg0[i].unkD;
        D_800BE510[(D_800BE528 * 3) + 2] = arg0[i].unkE;
        D_800BE528++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_3FC60/func_15012ED8.s")

void func_15012F90(void) {
    s32 i;

    D_800DF7D0 = 0;
    D_800DF7D1 = 0;
    for (D_800DF7D2 = 0, i = 0;;) {
        i += 4;
        D_800DF7D3[i - 3] = 0;
        D_800DF7D3[i - 2] = 0;
        D_800DF7D3[i - 1] = 0;
        D_800DF7D3[i - 4] = 0;
        if (&D_800DF9B3[0] != &D_800DF7D3[i]) {
            continue;
        }
        break;
    }
}
