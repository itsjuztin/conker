#include <ultra64.h>
#include "functions.h"
#include "variables.h"


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Vec150D1F6C;

typedef struct {
    Vec150D1F6C unk0;
    f32 unkC;
} Arg150D1F6C;

typedef struct {
    u8 pad0[0x18];
    Vec150D1F6C unk18;
    u8 pad24[0x18];
    f32 unk3C;
    s32 unk40;
    u8 unk44;
} Sub150D1F6C;

typedef struct {
    u8 pad0[0x40];
    Vec150D1F6C unk40;
} Obj150D1F6C;

#pragma GLOBAL_ASM("asm/nonmatchings/game_FF0E0/func_150D1C30.s")

void func_150D1F6C(struct260 *arg0, s32 arg1, u8 arg2) {
    Sub150D1F6C *sub;
    Arg150D1F6C *arg;

    sub = (Sub150D1F6C *)((s32)arg0 + 0x28);
    if (arg2 == 0x32) {
        arg = (Arg150D1F6C *)arg1;
        sub->unk18 = arg->unk0;
        sub->unk3C = arg->unkC;
    dummy_label_150D1F6C_1: ;
    } else {
        if ((arg2 == 0x30) || (arg2 == 0x31)) {
            if (arg1 == sub->unk40) {
                if (arg2 == 0x30) {
                    sub->unk44 |= 1;
                } else {
                    sub->unk44 &= ~1;
                dummy_label_150D1F6C_2: ;
                }
            }
        } else if (arg2 == 0x4E) {
            ((Obj150D1F6C *)arg0)->unk40 = *(Vec150D1F6C *)&D_800A5480;
        } else if (arg2 == 0x4F) {
            func_1516972C((struct102 *)arg0);
        }
    }
}

void func_150D2054(struct260 *arg0) {
    s32 i;
    s32 *p;
    void *ptr;

    p = (s32 *)((u8 *)arg0 + 0x28);
    i = 0;
    do {
        ptr = (void *)p[i + 9];
        if (ptr != NULL) {
            func_1516972C((struct102 *)ptr);
        }
        i++;
        i = (u8)i;
    } while (i < 6);
}

extern void func_150D2054(struct260 *);

void func_150D20B0(struct260 *arg0) {
    func_150D2054(arg0);
    func_15149368(arg0);
}

void func_150D20DC(struct260 *arg0) {
    func_150D2054(arg0);
    func_1514933C(arg0);
}
