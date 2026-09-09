#include <ultra64.h>
#define func_15178E14 func_15178E14_header_mismatch
#include "functions.h"
#undef func_15178E14
#include "variables.h"

typedef struct Func15178750Inner {
    u8 pad0[0x36];
    u8 unk36;
} Func15178750Inner;

typedef struct Func15178750Arg1 {
    u8 pad0[0x14];
    Func15178750Inner *unk14;
} Func15178750Arg1;

extern s32 func_15168118();

#pragma GLOBAL_ASM("asm/nonmatchings/game_1A5440/func_15177F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1A5440/func_15178268.s")

s32 func_15178750(s32 arg0, Func15178750Arg1 *arg1, s16 arg2) {
    Func15178750Inner *temp;

    temp = arg1->unk14;
    if (temp->unk36 & (1 << arg2)) {
        return func_15168118();
    }
    return arg0;
}

static void func_15178750_pad(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1A5440/func_151787AC.s")

typedef struct Node15178B98 {
    char pad0[0x8];
    struct Node15178B98 *unk8;
    char padC[0x4];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    char pad24[0xC];
    s16 unk30;
    char pad32[0x2];
    u8 unk34;
} Node15178B98;

extern Node15178B98 *D_800DCF38;

Node15178B98 *func_15178B98(u8 arg0) {
    Node15178B98 *node;

    for (node = D_800DCF38; node != NULL; node = node->unk8) {
        if (node->unk34 == arg0) {
            return node;
        }
    }
    return NULL;
}

Node15178B98 *func_15178BE4(u8 arg0, s32 arg1, s16 arg2) {
    Node15178B98 *node;

    node = func_15178B98(arg0);
    if (node != NULL) {
        node->unk10 = arg1;
        node->unk14 = 0x80000000;
        node->unk30 = arg2;
    }
}

Node15178B98 *func_15178C34(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4) {
    Node15178B98 *node;

    node = func_15178B98(arg0);
    if (node != NULL) {
        node->unk10 = (arg1 << 16) | (arg2 & 0xFFFF);
        node->unk14 = arg3 << 16;
        node->unk30 = arg4;
    }
}

extern f32 sqrtf(f32);

s32 func_15178C9C(u8 arg0, s32 arg1) {
    Node15178B98 *node;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 sum;

    node = func_15178B98(arg0);
    if (node != NULL) {
        dx = (s32)(D_800CC2D0[arg1].x_position - (f32)node->unk18);
        dy = (s32)(D_800CC2D0[arg1].y_position - (f32)node->unk1C);
        dz = (s32)(D_800CC2D0[arg1].z_position - (f32)node->unk20);
        dx = dx * dx;
        dy = dy * dy;
        dz = dz * dz;
        sum = dx + dy + dz;
        return (s32)sqrtf((f32)sum);
    }
    return 1;
}

typedef struct Node15178DA4 {
    char pad0[0x8];
    struct Node15178DA4 *unk8;
    char padC[0x8];
    struct Node15178DA4 *unk14;
    char pad18[0x16];
    u16 unk2E;
} Node15178DA4;

extern Node15178DA4 *D_800DCF3C;

void func_15178DA4(Node15178DA4 *arg0) {
    Node15178DA4 *next;
    Node15178DA4 *node;

    node = D_800DCF3C;
    func_100111C8(arg0->unk2E);
    if (node != NULL) {
        do {
            next = node->unk8;
            if (arg0 == node->unk14) {
                func_1516972C((struct102 *)node);
            }
            node = next;
        } while (next != NULL);
    }
    func_15169824((struct102 *)arg0);
}

void func_15178E14(u8 arg0) {
    func_15178DA4(func_15178B98(arg0));
}
