#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_DF260/func_150B1DB0.s")

void func_150B1E20(struct108 *arg0) {
    struct127 *temp;

    if (func_1509BE40(1, 0x4054, 6, 0x9000)) {
        arg0->unk84 |= 0x10000;
    } else {
        arg0->unk84 &= ~0x10000;
    }
    if (!func_1509BE40(1, 0x405C, 6, 0x9000)) {
        if (func_1509BE40(1, 0x405B, 6, 0x2000) && (arg0->unk2C != 0x40)) {
            temp = arg0->unk3D0;
            *(f32 *)((u8 *)temp + 0x17C) = temp->unk180 + 10.0f;
        }
    }
}

struct df260a { s32 unk0[3]; };

void func_150B1EE0(struct127 *arg0, struct df260a *arg1, s32 arg2, s32 arg3) {
    struct {
        struct df260a unk0;
        f32 unkC;
    } sp38;
    struct260 *temp_v0;

    sp38.unk0 = *arg1;
    sp38.unkC = 0.0f;

    temp_v0 = func_15149130((func_150ADA20() % 0x85U) + 0x45, -1, 0x49, -1, 1, 0, (struct37 *)0x10, *(u8 *)((s32)arg0 + 0xC), *(u8 *)((s32)arg0 + 0x1));
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp38, 0x10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_DF260/func_150B1F90.s")

void func_150B2340(struct108 *arg0) {
    s32 temp1;
    s32 temp2;

    temp1 = func_1509BE40(0, func_1509BE40(0, 0x2007, 0xB7) | 0x2000, 0xBC);
    temp2 = func_1509BE40(0, 0x2000, 0xBB);

    if (func_1509BE40(0, 0x5043, 0x1A) != 0) {
        if (func_1509BE40(0, 0x5045, 0x1A) != 0) {
            arg0->unk84 |= 0x4000;
        }
        arg0->unk84 |= 0x400000;
        arg0->unk190 = 0.0f;
    } else {
        if (func_1509BE40(1, 0x4030, 6, 0x2000) != 0) {
            arg0->unk190 = 235.0f;
        } else {
            arg0->unk348 = 114.0f;
            arg0->unk34C = 114.0f;
            arg0->unk374 = 384.0f;
            arg0->unk190 = 60.0f;
        }
    }

    if ((temp1 != 0) && (temp2 != -1)) {
        arg0->unk5F0 |= 0x100;
    } else {
        arg0->unk5F0 &= ~0x100;
    }
}
