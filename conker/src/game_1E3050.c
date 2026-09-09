#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void *func_151B4FE0(struct102 *arg0, s32 arg1, s32 arg2);

void func_151B5BA0(struct102 *arg0, struct102 *arg1) {
    if (arg0->unk4 == 0x53) {
        if (arg1->unk4 == 0x16) {
            func_151B4FE0(arg1, 0xFF, 1);
        }
    }
}
