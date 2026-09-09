#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_150F9A20(struct108 *arg0) {
    if (func_1509BE40(1, 0x4025, 6, 0x2000)) {
        arg0->unk84 |= 0x80;
        arg0->unk84 &= ~8;
        arg0->unk190 = 85.0f;
    } else {
        arg0->unk84 &= ~0x80;
        arg0->unk84 |= 8;
        arg0->unk190 = 0.0f;
    }
}
