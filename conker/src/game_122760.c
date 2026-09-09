#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_151827D0(void);
s32 func_1509BE40(s32, s32, s32, s32);

void func_150F52B0(s32 *arg0) {
    if (func_1509BE40(1, 0x401C, 6, 0x9000) != 0) {
        arg0[0x84 / 4] |= 0x80000000;
    } else {
        arg0[0x84 / 4] &= ~0x80000000;
    }
}

void func_150F5310(s32 arg0) {
    func_151827D0();
}
