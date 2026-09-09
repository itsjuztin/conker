#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    char pad_0[0x88];
    s32 field_0x88;
} Game1E30A0Data;


#pragma GLOBAL_ASM("asm/nonmatchings/game_1E30A0/func_151B5BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E30A0/func_151B5E94.s")

void func_151B5FCC(Game1E30A0Data *arg0) {
    if (arg0->field_0x88 != 0) {
        func_100111C8(arg0->field_0x88);
        arg0->field_0x88 = 0;
    }
}
