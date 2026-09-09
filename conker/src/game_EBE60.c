#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
} Struct150BEACC;

typedef struct {
    char pad_0[0x40];
    f32 field_0x40;
    char pad_1[0x190];
    s32 field_0x1D4;
} ActorFields;

void func_15142314(s32, s32, f32 *);
void func_1504715C(s32, s32);
s32 func_15046C80(f32 *, s32, f32, s32);
extern void func_15141F78(u8, struct157 *, f32, u8, struct157 *, u8);
extern void func_15142180(u8, Struct150BEACC *, s32, f32, f32);
extern f32 D_800A00C0;
extern f32 D_800A00C4;
extern f32 D_800A00C8;
extern f32 D_800A00CC;
extern f32 D_800A00D0;
extern f32 D_800A00D4;
extern f32 D_800A00D8;

s32 func_150BE9B0(f32 *arg0, ActorFields *arg1, s32 arg2, u8 arg3) {
    f32 sp2C[3];
    s32 temp_a1;

    switch (arg3) {
    case 4:
        temp_a1 = 0x17;
        break;
    case 5:
        temp_a1 = 0x14;
        break;
    case 6:
        temp_a1 = 0xC;
        break;
    case 7:
    default:
        temp_a1 = 0x10;
        break;
    }
    func_15142314(arg1->field_0x1D4, temp_a1, arg0);
    if (arg2 == 0) {
        return 1;
    }

    sp2C[0] = arg0[0];
    sp2C[1] = arg0[1] + 10.0f;
    sp2C[2] = arg0[2];
    func_1504715C(arg2, (s32)arg1);
    return func_15046C80(sp2C, 0, arg0[1] - 50.0f, arg2);
}

s32 func_150BEAA8(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
    case 1:
        return 0x11;
    default:
        return -1;
    }
}

void func_150BEACC(ActorFields *arg0, s32 arg1, s32 arg2) {
    Struct150BEACC sp4C;
    s32 sp2C[8];
    s32 temp_a3;

    temp_a3 = (u8)arg1;
    if (arg0->field_0x1D4 != 0) {
        if (func_150BE9B0((f32 *)&sp4C, *(s32 *)&arg0, (s32)&sp2C[-1], temp_a3) != 0) {
            func_15141F78(0xB, (struct157 *)&sp2C[-1], (f32)arg2 * D_800A00C0 * D_800A00C4,
                          (u8)(u32)(arg0->field_0x40 * D_800A00C8),
                          (struct157 *)&sp4C, temp_a3);
            if (arg2 >= 0x4C) {
                func_15142180(2, &sp4C, sp2C[5], 3.232000113f, D_800A00CC);
            }
        }
    }
}

s32 func_150BEC30(f32 *arg0, ActorFields *arg1, s32 arg2, u8 arg3) {
    f32 sp2C[3];
    s32 temp_a1;

    switch (arg3) {
    case 4:
        temp_a1 = 0x19;
        break;
    case 5:
        temp_a1 = 0x16;
        break;
    case 6:
        temp_a1 = 0xC;
        break;
    case 7:
    default:
        temp_a1 = 0x10;
        break;
    }
    func_15142314(arg1->field_0x1D4, temp_a1, arg0);
    if (arg2 == 0) {
        return 1;
    }

    sp2C[0] = arg0[0];
    sp2C[1] = arg0[1] + 10.0f;
    sp2C[2] = arg0[2];
    func_1504715C(arg2, (s32)arg1);
    return func_15046C80(sp2C, 0, arg0[1] - 50.0f, arg2);
}

s32 func_150BED28(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
    case 1:
        return 0x12;
    default:
        return -1;
    }
}

void func_150BED4C(ActorFields *arg0, s32 arg1, s32 arg2) {
    Struct150BEACC sp4C;
    s32 sp2C[8];
    s32 temp_a3;

    temp_a3 = (u8)arg1;
    if (arg0->field_0x1D4 != 0) {
        if (func_150BEC30((f32 *)&sp4C, *(s32 *)&arg0, (s32)&sp2C[-1], temp_a3) != 0) {
            func_15141F78(0xB, (struct157 *)&sp2C[-1], ((f32)arg2 * D_800A00D0) * 2,
                          (u8)(u32)(arg0->field_0x40 * D_800A00D4),
                          (struct157 *)&sp4C, temp_a3);
            if (arg2 >= 0x4C) {
                func_15142180(2, &sp4C, sp2C[5], 3.232000113f, D_800A00D8);
            }
        }
    }
}

void func_150BEEB0(struct108 *arg0) {
    if (func_1509BE40(1, 0x4063, 6, 0x2000) || func_1509BE40(1, 0x4001, 6, 0x9000)) {
        arg0->unk84 |= 0x1010;
    } else {
        arg0->unk84 &= ~0x1010;
    }
    if (func_1509BE40(1, 0x4069, 6, 0x2000)) {
        arg0->unk84 |= 0x1000000;
    } else {
        arg0->unk84 &= ~0x1000000;
    }
}
