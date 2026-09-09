#include <ultra64.h>
#define func_150EB430 func_150EB430_header
#include "functions.h"
#undef func_150EB430
#include "variables.h"

void func_150EB484(void *arg0, struct17 *arg1, void *arg2);

void func_150EB430(void *arg0, void *arg1, void *arg2) {
    struct17 sp1C;

    sp1C.unk0 = ((struct17 *) arg0)->unk0 + ((struct17 *) arg1)->unk0;
    sp1C.unk4 = ((struct17 *) arg0)->unk4 + ((struct17 *) arg1)->unk4;
    sp1C.unk8 = ((struct17 *) arg0)->unk8 + ((struct17 *) arg1)->unk8;
    func_150EB484(arg0, &sp1C, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1188E0/func_150EB484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1188E0/func_150EB614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1188E0/func_150EB8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1188E0/func_150EBC80.s")
