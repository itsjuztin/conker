#include <ultra64.h>
#include "functions.h"
#include "variables.h"

void func_15142314(s32, s32, f32 *);
void func_1504715C(s32, s32);
s32 func_15046C80(f32 *, s32, f32, s32);
extern void func_15141F78(u8, struct157 *, f32, u8, struct157 *, u8);
extern f32 D_800A1470;
extern f32 D_800A1474;

typedef struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
} Struct150EB090;

typedef struct {
    char pad_0[0x40];
    f32 field_0x40;
    char pad_1[0x190];
    s32 field_0x1D4;
} ActorFields;

s32 func_150EAF50(f32 *arg0, ActorFields *arg1, s32 arg2, u8 arg3) {
    f32 sp2C[3];
    s32 temp_a1;

    if ((arg3 != 1) && (arg3 != 2)) {
        return 0;
    }

    if (arg3 == 1) {
        temp_a1 = 0x21;
    } else {
        temp_a1 = 0x1D;
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

extern s32 func_151420F8(s32);

s32 func_150EB030(s32 arg0, s32 arg1) {
    if (arg0 == 1) {
        if (D_800BE9F0 == 4) {
            if (func_151420F8(arg1) != 0) {
                return 6;
            }
            return 3;
        }
        return -1;
    }
    return -1;
}

void func_150EB090(ActorFields *arg0, s32 arg1, s32 arg2) {
    Struct150EB090 sp4C;
    s32 sp2C[8];
    s32 temp_a3;

    temp_a3 = (u8)arg1;
    if (arg0->field_0x1D4 != 0) {
        if (func_150EAF50((f32 *)&sp4C, *(s32 *)&arg0, (s32)&sp2C[-1], temp_a3) != 0) {
            func_15141F78(0xA, (struct157 *)&sp2C[-1], (f32)arg2 * D_800A1470,
                          (u8)(u32)(arg0->field_0x40 * D_800A1474),
                          (struct157 *)&sp4C, temp_a3);
        }
    }
}
