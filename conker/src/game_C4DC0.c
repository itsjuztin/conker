#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_C4DC0/func_15097910.s")

struct C4DC0_arg1 {
    u8 pad0[4];
    s32 unk4;
};
struct C4DC0_elem {
    u8 pad0[2];
    u8 unk2;
    u8 pad3[0x2D];
};
extern struct127 *func_1505EEF4(s32);
extern s32 func_15053430(struct127 *);
extern u8 D_800D2100;
extern s32 D_800D3840;

s32 func_150979CC(s32 arg0, struct C4DC0_arg1 *arg1) {
    struct127 *temp;

    temp = func_1505EEF4(arg0);
    if (temp == 0) {
        return 0;
    }
    if (arg0 < D_800D2100) {
        ((struct C4DC0_elem *)D_800D20FC)[arg0].unk2 = 1;
    }
    if (D_800D3840 == 2) {
        if (arg1->unk4 == 0) {
            func_15060F28(temp, 0);
        } else {
            func_15053430(temp);
        }
    } else {
        func_15060F28(temp, 0);
    }
    return 999999;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C4DC0/func_15097A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C4DC0/func_15099C14.s")
