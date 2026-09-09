#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_135780/func_151082D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_135780/func_15108658.s")

struct SubFC {
    u8 pad[8];
    u8 flag;
};

struct ObjFC {
    u8 pad[0x28];
    struct SubFC sub;
};

void func_151087FC(struct ObjFC *arg0, s32 arg1, u8 arg2) {
    struct SubFC *p = &arg0->sub;
    if (arg2 == 0x2B) {
        p->flag |= 0x1;
    } else if (arg2 == 0x2C) {
        p->flag &= 0xFFFE;
    }
}
