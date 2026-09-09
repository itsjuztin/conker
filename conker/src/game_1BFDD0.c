#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_15192920(void *arg0) {
    struct260 *temp_v0;
    struct {
        void *unk0;
        u8 unk4;
        f32 unk8;
    } sp28;

    if (*(s32 *)&arg0 != 0) {
        sp28.unk0 = arg0;
        sp28.unk4 = *(u8 *)((s32)arg0 + 0x3B);
        sp28.unk8 = 0.0f;

        temp_v0 = func_151491F4(0x23, -1, 0x14, 1, 0x10, 0xC, 0xFF, 1);
        if (temp_v0 != NULL) {
            memcpy((void *)((s32)temp_v0 + 0x28), &sp28, 0xC);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1BFDD0/func_151929A4.s")

struct260 *func_15192D48(void *arg0, s16 arg1, u8 arg2, s32 arg3) {
    struct260 *temp_v0;
    struct {
        void *unk0;
        u8 unk4;
        f32 unk8;
    } sp28;

    if (arg0 == NULL) {
        return NULL;
    }

    sp28.unk0 = arg0;
    sp28.unk4 = *(u8 *)((s32)arg0 + 0x3B);
    sp28.unk8 = 0.0f;

    temp_v0 = func_151491F4(arg1, -1, 0x18, 1, 0x16, 0xC, arg2, arg3);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp28, 0xC);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1BFDD0/func_15192DF0.s")

































typedef struct {
    s32 unk0;
    u8  unk4;
} SubA_15193234;

typedef struct {
    s32 unk0;
    union {
        s32 w4;
        u8  b4;
    } u4;
    u8  unk8;
    u8  unk9;
} ArgB_15193234;

void func_15193234(struct260 *arg0, s32 arg1, u8 arg2) {
    SubA_15193234 *temp_v0 = (SubA_15193234 *)((u8 *)arg0 + 0x28);
    ArgB_15193234 *b = (ArgB_15193234 *)arg1;
    s32 b0;

    if (arg2 == 0x2D) {
        if (temp_v0->unk0 == b->unk0) {
            temp_v0->unk0 = b->u4.w4;
            temp_v0->unk4 = b->unk9;
        } else {
            if (temp_v0->unk0 == b->u4.w4) {
                temp_v0->unk0 = b->unk0;
                ((volatile SubA_15193234 *)temp_v0)->unk4 = b->unk8;
            }
trailing_label_15193234:
            ;
        }
    } else if (arg2 == 0) {
        b0 = b->unk0;
        if ((b0 == temp_v0->unk0) || (b->u4.b4 == temp_v0->unk4)) {
            func_1516972C((struct102 *)arg0);
        }
    }
}

void func_151932E0(struct260 *arg0, s32 arg1, u8 arg2) {
    SubA_15193234 *temp_v0 = (SubA_15193234 *)((u8 *)arg0 + 0x28);
    ArgB_15193234 *b = (ArgB_15193234 *)arg1;
    s32 b0;

    if (arg2 == 0x2D) {
        if (temp_v0->unk0 == b->unk0) {
            temp_v0->unk0 = b->u4.w4;
            temp_v0->unk4 = b->unk9;
        } else {
            if (temp_v0->unk0 == b->u4.w4) {
                temp_v0->unk0 = b->unk0;
                ((volatile SubA_15193234 *)temp_v0)->unk4 = b->unk8;
            }
trailing_label_151932E0:
            ;
        }
    } else if (arg2 == 0) {
        b0 = b->unk0;
        if ((b0 == temp_v0->unk0) || (b->u4.b4 == temp_v0->unk4)) {
            func_1516972C((struct102 *)arg0);
        }
    }
}
