#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A73C0;
extern f32 D_800A73C4;
extern f32 D_800A73C8;

typedef struct {
    char pad_0[0x68];
    u8 field_0x68;
    char pad_0x69;
    u8 field_0x6A;
    char pad_0x6B[0x4];
    u8 field_0x6F;
} GameObjectStateBytes;

typedef struct {
    char pad_0[0x18];
    f32 field_0x18;
    f32 field_0x1C;
} GameObjectFloatPair;

typedef struct {
    char pad_0[0x28];
    u8 field_0x28;
    u8 field_0x29;
    u8 field_0x2A;
    char pad_0x2B[0x2D];
    s32 field_0x58;
    char pad_0x5C[0xB4];
    GameObjectFloatPair field_0x110;
    char pad_0x130[0x58];
    GameObjectStateBytes *field_0x188;
} GameObjectWithStateBytes;

#pragma GLOBAL_ASM("asm/nonmatchings/game_1B74A0/func_15189FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1B74A0/func_1518A094.s")

s32 func_1518A214(void *arg0, u8 *arg1) {
    s32 temp_v0;
    GameObjectFloatPair *temp_v0_2;
    f32 temp_f0;

    temp_v0 = ((GameObjectWithStateBytes *)arg0)->field_0x188->field_0x68 - 0xF;
    temp_v0_2 = (GameObjectFloatPair *)((u8 *)arg0 + 0x110);
    switch (temp_v0) {
    default:
        temp_f0 = D_800A73C0;
        temp_v0_2->field_0x18 = temp_f0;
        temp_v0_2->field_0x1C = temp_f0;
        ((GameObjectWithStateBytes *)arg0)->field_0x2A = 0;
        ((GameObjectWithStateBytes *)arg0)->field_0x29 = 0;
        ((GameObjectWithStateBytes *)arg0)->field_0x28 = 0xFF;
        *arg1 = 1;
        break;
    case 0:
        ((GameObjectWithStateBytes *)arg0)->field_0x58 &= ~2;
        *arg1 = 0;
        break;
    case 1:
        temp_f0 = D_800A73C4;
        temp_v0_2->field_0x18 = temp_f0;
        temp_v0_2->field_0x1C = temp_f0;
        ((GameObjectWithStateBytes *)arg0)->field_0x28 = 0x80;
        ((GameObjectWithStateBytes *)arg0)->field_0x29 = 0;
        ((GameObjectWithStateBytes *)arg0)->field_0x2A = 0;
        *arg1 = 1;
        break;
    case 2:
        temp_f0 = D_800A73C8;
        temp_v0_2->field_0x18 = temp_f0;
        temp_v0_2->field_0x1C = temp_f0;
        ((GameObjectWithStateBytes *)arg0)->field_0x28 = 0xFF;
        ((GameObjectWithStateBytes *)arg0)->field_0x29 = 0;
        ((GameObjectWithStateBytes *)arg0)->field_0x2A = 0;
        *arg1 = 1;
        break;
    }
    return 1;
}

s32 func_1518A2E8(GameObjectWithStateBytes *arg0, u8 *arg1) {
    if (arg0->field_0x188->field_0x6A != 0) {
        arg0->field_0x58 &= ~2;
        *arg1 = 0;
    } else {
        *arg1 = 1;
    }
    return 1;
}

s32 func_1518A324(GameObjectWithStateBytes *arg0, u8 *arg1) {
    if (arg0->field_0x188->field_0x6F == 0) {
        arg0->field_0x58 &= ~2;
        *arg1 = 0;
    } else {
        *arg1 = 1;
    }
    return 1;
}

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
} GameStruct1518A360a;

typedef struct {
    u8 unk0[0x18];
    s32 unk18;
    u8 unk1C;
    u8 unk1D;
} GameStruct1518A360b;

void func_1518A360(void *arg0, GameStruct1518A360a *arg1, u8 arg2) {
    GameStruct1518A360b *v0 = (GameStruct1518A360b *)((u8 *)arg0 + 0x170);
    if (arg2 == 0x2D) {
        if (v0->unk18 == arg1->unk0) {
            v0->unk18 = arg1->unk4;
            v0->unk1D = arg1->unk9;
        } else if (v0->unk18 == arg1->unk4) {
            v0->unk18 = arg1->unk0;
            v0->unk1D = arg1->unk8;
        }
    }
}
