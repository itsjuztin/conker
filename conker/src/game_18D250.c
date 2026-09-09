#include <ultra64.h>
#define func_15169260 func_15169260_s32
#include "functions.h"
#undef func_15169260
#include "variables.h"


extern void *func_15167A68(s32, s32, s32, s32, u8, s32);
extern s32 (*D_8008B0D0[])(void *);
extern char D_800A6540[];
extern char D_800A6548[];
extern char D_800A657C[];
extern char D_800A6584[];
extern char D_800A65B8[];
extern char D_800A65C0[];
extern char D_800A65F4[];
extern char D_800A65FC[];
extern char D_800A6630[];
extern char D_800A663C[];
extern f32 D_800A6674;
extern f32 D_800A6678;
extern f32 D_800A667C;
extern f32 D_800A6680;

typedef struct {
    s32 unk0;
} Data_15160274;

extern Data_15160274 D_800A6670;
void func_15169260(Data_15160274 *, s32, s32, u8);

#pragma GLOBAL_ASM("asm/nonmatchings/game_18D250/func_1515FDA0.s")

void *func_1515FF74(void *arg0, s32 arg1, u8 arg2, s32 arg3) {
    void *temp_v0;
    void *sp24;

    temp_v0 = func_15167A68(0x34, arg3, arg1 + 0x18, 1, arg2, 1);
    if (temp_v0 == 0) {
        return NULL;
    }
    sp24 = temp_v0;
    memcpy((s32)temp_v0 + 0xE, arg0, 8);
    return sp24;
}

typedef struct {
    u8 pad0[0xE];
    u8 unkE;
    s8 unkF;
    u8 pad10[2];
    s16 unk12;
} Struct1515FFEC;

void func_1515FFEC(Struct1515FFEC *arg0) {
    s32 temp;
    u8 failed;

    failed = 0;
    if (arg0->unkE & 1) {
        arg0->unk12 -= D_800BE9E4;
        if (arg0->unk12 < 0) {
            failed = 1;
        }
    }
    if (failed == 0) {
        temp = arg0->unkF;
        if (temp != -1) {
            if (D_8008B0D0[temp](arg0) == 0) {
                failed = 1;
            }
        }
    }
    if (failed) {
        func_1516972C((struct102 *) arg0);
    }
}

extern void (*D_8008B0E4[])(void*, s32, u8);

void func_15160090(void *arg0, s32 arg1, u8 arg2) {
    void (*func)(void*, s32, u8);

    func = D_8008B0E4[*(u8*)((char*)arg0 + 0x14)];
    if (func != NULL) {
        func(arg0, arg1, arg2);
    }
}

s32 func_151600D8(void *arg0) {
    f32 *p;
    s32 i;

    p = (f32 *)((s32)arg0 + 0x18);
    i = 0;
    p[0] = (f32)func_151422DC(i++, D_800A6540, -2000, 2000, 0, D_800A6548, 0x1C4) * D_800A6674;
    p[1] = (f32)func_151422DC(i++, D_800A657C, -2000, 2000, 0, D_800A6584, 0x1C9) * D_800A6678;
    p[2] = (f32)func_151422DC(i++, D_800A65B8, 0, 2000, 500, D_800A65C0, 0x1CE) * D_800A667C;
    p[3] = (f32)func_151422DC(i++, D_800A65F4, 0, 2000, 500, D_800A65FC, 0x1D3) * D_800A6680;
    *(s32 *)&p[4] = func_151422DC(i, D_800A6630, 0, 0x10000, 0x10000, D_800A663C, 0x1D9);
    return 1;
}

void func_15160274(s32 arg0, u8 arg1) {
    Data_15160274 sp1C;

    sp1C = D_800A6670;
    func_15169260(&sp1C, 1, arg0, arg1);
}
