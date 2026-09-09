#include <ultra64.h>
#include "functions.h"
#include "variables.h"


s32 func_1509BE40(s32, s32, s32, s32);

void func_15103430(struct108 *arg0) {
    s32 temp_a3;

    temp_a3 = arg0->unk23D | 0x9000;
    if (arg0->unk3D0->in_water == 1) {
        arg0->unk84 |= 0x01000000;
    } else {
        arg0->unk84 &= ~0x01000000;
    }

    if (D_800BE9F0 == 0x34) {
        if (func_1509BE40(1, 0x406D, 6, temp_a3) != 0) {
            arg0->unk84 |= 0x200;
            return;
        }
        arg0->unk84 &= ~0x200;
        return;
    }

    if (D_800BE9F0 == 0x30) {
        if ((func_1509BE40(1, 0x403C, 6, temp_a3) != 0) ||
            (func_1509BE40(1, 0x403D, 6, temp_a3) != 0)) {
            arg0->unk84 |= 0x200;
            return;
        }
        arg0->unk84 &= ~0x200;
        return;
    }

    if (D_800BE9F0 == 0x2D) {
        if ((func_1509BE40(1, 0x4053, 6, temp_a3) != 0) ||
            (func_1509BE40(1, 0x4054, 6, temp_a3) != 0) ||
            (func_1509BE40(1, 0x4056, 6, temp_a3) != 0) ||
            (func_1509BE40(1, 0x4057, 6, temp_a3) != 0)) {
            arg0->unk84 |= 0x20000000;
        } else {
            arg0->unk84 &= ~0x20000000;
        }

        if ((func_1509BE40(1, 0x4058, 6, 0x9000) != 0) ||
            (func_1509BE40(1, 0x4059, 6, 0x9000) != 0)) {
            arg0->unk84 |= 0x80000000;
            return;
        }
        arg0->unk84 &= ~0x80000000;
        return;
    }

    if (D_800BE9F0 == 0x34) {
        if (func_1509BE40(1, 0x406E, 6, temp_a3) != 0) {
            arg0->unk84 |= 0x20000000;
            return;
        }
        arg0->unk84 &= ~0x20000000;
    }
}
