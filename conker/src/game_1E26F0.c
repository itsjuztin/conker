#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern f32 D_800AA418;
struct127 *func_15083E90(s32);
struct260 *func_15149130(s16 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, struct37 *arg6, u8 arg7, s32 arg8);

typedef struct {
    u8 pad0[0x580];
    s32 unk580;
    u8 unk584;
    s32 unk588;
    u8 unk58C;
} SubA151B5A9C;

typedef struct {
    s32 unk0;
    union {
        s32 w4;
        u8 b4;
    } u4;
    u8 unk8;
    u8 unk9;
} ArgB151B5A9C;

s32 func_151B5240(s16 arg0, u8 arg1, s32 arg2) {
    struct260 *temp_v0;
    struct {
        f64 pad0[0xB0];
        s32 unk580;
        u8 unk584;
        s32 unk588;
        u8 unk58C;
        f32 unk590;
        f32 unk594;
        f32 unk598;
        f32 unk59C;
        f32 unk5A0;
        u8 unk5A4[4];
    } tmp;

    tmp.unk584 = 0x17;
    tmp.unk58C = 0x16;
    tmp.unk580 = (s32)func_15083E90(0x17);
    tmp.unk588 = (s32)func_15083E90(tmp.unk58C);
    tmp.unk598 = 250.0f;
    tmp.unk590 = 18.0f;
    tmp.unk594 = 0.0f;
    tmp.unk5A0 = D_800AA418;
    tmp.unk59C = 1.0f / tmp.unk598;

    temp_v0 = func_15149130(arg0, -1, -1, 1, 1, 0x15, (struct37 *)0x5A8, arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy((u8 *)temp_v0 + 0x28, &tmp, 0x5A8);
    }
    return (s32)temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1E26F0/func_151B5328.s")

void func_151B5A9C(struct260 *arg0, s32 arg1, u8 arg2) {
    SubA151B5A9C *temp_v0 = (SubA151B5A9C *)((u8 *)arg0 + 0x28);
    ArgB151B5A9C *b = (ArgB151B5A9C *)arg1;
    s32 b0;

    if (arg2 == 0x2D) {
        if (temp_v0->unk580 == b->unk0) {
            temp_v0->unk580 = b->u4.w4;
            temp_v0->unk584 = b->unk9;
        } else {
            if (temp_v0->unk580 == b->u4.w4) {
                temp_v0->unk580 = b->unk0;
                temp_v0->unk584 = b->unk8;
            }
        }

        if (temp_v0->unk588 == b->unk0) {
            temp_v0->unk588 = b->u4.w4;
            temp_v0->unk58C = b->unk9;
        } else {
            if (temp_v0->unk588 == b->u4.w4) {
                temp_v0->unk588 = b->unk0;
                ((volatile SubA151B5A9C *)temp_v0)->unk58C = b->unk8;
            }
trailing_label_151B5A9C:
            ;
        }
    } else if (arg2 == 0) {
        b0 = b->unk0;
        if ((b0 == temp_v0->unk580) || (b0 == temp_v0->unk588) || (b->u4.b4 == temp_v0->unk584) || (b->u4.b4 == temp_v0->unk58C)) {
            func_1516972C((struct102 *)arg0);
        }
    }
}
