#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct GameStruct151B2100Sub {
    struct127 *unk0;
    u8 unk4;
    u8 pad5[3];
    struct127 *unk8;
    u8 unkC;
    u8 unkD;
    u8 padE[2];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} GameStruct151B2100Sub;

typedef struct GameStruct151B2100 {
    u8 pad0[0xE];
    s16 unkE;
    u8 pad10[0x18];
    GameStruct151B2100Sub unk28;
} GameStruct151B2100;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} GameStruct151B2690Vec;

typedef struct {
    struct127 *unk0;
    u8 unk4;
    u8 unk5;
    u8 pad6[2];
    GameStruct151B2690Vec unk8;
    struct127 *unk14;
    u8 unk18;
    u8 unk19;
    u8 pad1A[2];
    GameStruct151B2690Vec unk1C;
    s32 *unk28;
    u8 unk2C;
} GameStruct151B2690Sub30;

typedef struct {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 unk1C;
    u8 unk1D;
    u8 unk1E;
    u8 pad1F;
    f32 unk20;
    u8 unk24;
    u8 pad25[3];
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    u8 unk34;
} GameStruct151B2690Sub38;

typedef struct {
    struct127 *unk0;
    u8 unk4;
    u8 unk5;
    u8 pad6[2];
    GameStruct151B2690Vec unk8;
    GameStruct151B2690Vec unk14;
    f32 unk20;
    s32 *unk24;
} GameStruct151B2690Sub28;

extern void *func_151B30B0(void *arg0, s32 arg1, s32 arg2, u8 arg3);
extern GameStruct151B2690Vec D_800AA320;
extern GameStruct151B2690Vec D_800AA32C;
extern GameStruct151B2690Vec D_800AA368;
extern GameStruct151B2690Vec D_800AA374;
extern f32 D_800AA388;
extern f32 D_800AA38C;

s32 func_151B22F4(s32 *arg0);
void func_151B222C();
void func_151B2348(s32 *arg0);
void func_151B2690(s32 *arg0);
void func_151B47D8(s32 arg0, s32 arg1, s32 arg2, u8 arg3);


void func_151B2060(void *arg0) {
    struct260 *temp_v0;
    struct {
        void *unk0;
        s8 unk4;
        struct127 *unk8;
        s8 unkC;
        s8 unkD;
        u8 padE[2];
        s32 unk10;
        s32 unk14;
        s32 unk18;
        s32 unk1C;
    } tmp;

    if (arg0 != NULL) {
        tmp.unk0 = arg0;
        tmp.unk4 = *((u8 *)arg0 + 0x3B);
        tmp.unk8 = func_15083E90(1);
        tmp.unkC = 1;
        tmp.unkD = 0;
        bzero(&tmp.unk10, 0xC);
        tmp.unk1C = 0;

        temp_v0 = func_151491F4(0x12C, -1, 0x16, 0, 0x12, 0x20, 0xFF, 1);
        if (temp_v0 != NULL) {
            memcpy((u8 *)temp_v0 + 0x28, &tmp, 0x20);
        }
    }
}

void func_151B2100(GameStruct151B2100 *arg0) {
    GameStruct151B2100Sub *sub;
    struct127 *obj0;
    struct127 *obj1;
    u8 old;

    obj0 = arg0->unk28.unk0;
    obj1 = arg0->unk28.unk8;
    sub = &arg0->unk28;
    if ((obj0->interaction_state == 0) || (obj0->id == 0xFF) || (obj0->unique_id != sub->unk4) ||
        (obj1->interaction_state == 0) || (obj1->id == 0xFF) || (obj1->unique_id != sub->unkC)) {
        arg0->unkE = -1;
        return;
    }

    old = sub->unkD;
    sub->unkD = func_151B22F4((s32 *)arg0);
    if (sub->unkD != old) {
        func_151B222C(arg0);
        if (sub->unkD == 1) {
            func_151B2348((s32 *)arg0);
        }

        if ((sub->unkD == 2) || (sub->unkD == 0)) {
            func_151B2690((s32 *)arg0);
        }
    }
}

void func_151B222C();

void func_151B220C() {
    func_151B222C();
}

void func_151B222C(arg0)
struct260 *arg0;
{
    s32 i;
    s32 v;
    s32 *p = (s32 *)((u8 *)arg0 + 0x28);

    for (i = 0; i < 3; i = (u8)(i + 1)) {
        v = p[i + 4];
        if (v != 0) {
            func_1516972C((struct102 *)v);
        }
    }
    v = p[7];
    if (v != 0) {
        func_1516972C((struct102 *)v);
    }
}

void func_151B229C(struct260 *arg0) {
    func_151B220C(arg0);
    func_1514933C(arg0);
}

void func_151B22C8(struct260 *arg0) {
    func_151B220C(arg0);
    func_15149368(arg0);
}

s32 func_151B22F4(s32 *arg0) {
    s32 temp = arg0[0x28 / 4];
    if ((((((s32)temp - (s32)D_800CC2D0) / 0x32C) + 1) == ((struct127 *)arg0[0x30 / 4])->unk65)) {
        if (((struct127 *)arg0[0x30 / 4])->unk5C == 1) {
            return 1;
        }
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1DF510/func_151B2348.s")

void func_151B2690(s32 *arg0) {
    struct260 *ret;
    struct127 *obj;
    struct {
        u8 pad0[8];
        GameStruct151B2690Sub28 sp40;
        GameStruct151B2690Sub30 sp68;
        GameStruct151B2690Sub38 sp98;
    } stack;

    obj = ((GameStruct151B2100 *)arg0)->unk28.unk0;
    stack.sp68.unk28 = arg0;
    stack.sp68.unk2C = 1;
    stack.sp68.unk0 = obj;
    stack.sp68.unk4 = obj->unique_id;
    stack.sp68.unk5 = 5;
    stack.sp68.unk8 = D_800AA320;
    stack.sp68.unk14 = obj;
    stack.sp68.unk18 = obj->unique_id;
    stack.sp68.unk19 = 2;
    stack.sp68.unk1C = D_800AA368;

    stack.sp98.unk34 = 0;
    stack.sp98.unk0 = 0;
    stack.sp98.unk2 = 0x64;
    stack.sp98.unk4 = obj->x_position;
    stack.sp98.unk8 = obj->y_position;
    stack.sp98.unkC = obj->z_position;
    stack.sp98.unk10 = obj->x_position;
    stack.sp98.unk14 = obj->y_position;
    stack.sp98.unk18 = obj->z_position;
    stack.sp98.unk1C = 1;
    stack.sp98.unk1D = 1;
    stack.sp98.unk1E = 1;
    stack.sp98.unk24 = 3;
    stack.sp98.unk20 = 5.0f;
    stack.sp98.unk28 = 180.0f;
    stack.sp98.unk2C = D_800AA388;
    stack.sp98.unk30 = D_800AA38C;

    *(s32 *)((u8 *)&stack - 0x28) = 0; *(s32 **)((u8 *)&stack + 0xA0) = arg0; ret = func_151B30B0(&stack.sp98, 0x3AC49BA6, 0x30, 0xFF);
    arg0 = *(s32 **)((u8 *)&stack + 0xA0);
    arg0 = (s32 *)((u8 *)arg0 + 0x28);
    ((GameStruct151B2100Sub *)arg0)->unk14 = (s32)ret;
    if (ret != NULL) {
        memcpy((u8 *)ret + 0x150, &stack.sp68, 0x30);
    }

    stack.sp68.unk2C = 0;
    stack.sp68.unk8 = D_800AA32C;
    stack.sp68.unk1C = D_800AA374;
    stack.sp98.unk1E = 1;
    *(s32 *)((u8 *)&stack - 0x28) = 0;
    ret = func_151B30B0(&stack.sp98, 0x3AC49BA6, 0x30, 0xFF);
    ((GameStruct151B2100Sub *)arg0)->unk10 = (s32)ret;
    if (ret != NULL) {
        memcpy((u8 *)ret + 0x150, &stack.sp68, 0x30);
    }

    stack.sp40.unk0 = obj;
    stack.sp40.unk4 = obj->unique_id;
    stack.sp40.unk5 = 2;
    stack.sp40.unk8 = D_800AA368;
    stack.sp40.unk14 = D_800AA374;
    stack.sp40.unk20 = 5.0f;
    stack.sp40.unk24 = *(s32 **)((u8 *)&stack + 0xA0);
    ret = func_15149130(0x12C, -1, -1, 0, 0, 0x13, (struct37 *)0x28, 0xFF, 1);
    ((GameStruct151B2100Sub *)arg0)->unk1C = (s32)ret;
    if (ret != NULL) {
        memcpy((u8 *)ret + 0x28, &stack.sp40, 0x28);
    }
}

typedef struct {
    u8 pad0[0x178];
    s32 *unk178;
    u8 unk17C;
} GameStruct151B2950;

void func_151B2950(GameStruct151B2950 *arg0) {
    s32 *temp;

    temp = arg0->unk178;
    if (temp != NULL) {
        temp[arg0->unk17C + (0x38 / 4)] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1DF510/func_151B2974.s")

void func_151B2EC4(s32 arg0, s32 arg1, u8 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
} GameStruct151B2F04a;

typedef struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[3];
    s32 unk8;
    u8 unkC;
} GameStruct151B2F04b;

void func_151B2F04(void *a0, GameStruct151B2F04a *a1, u8 a2) {
    GameStruct151B2F04b *v0 = (GameStruct151B2F04b *)((u8 *)a0 + 0x28);
    if (a2 == 0x2D) {
        if (v0->unk0 == a1->unk0) {
            v0->unk0 = a1->unk4;
            v0->unk4 = a1->unk9;
        } else if (v0->unk0 == a1->unk4) {
            v0->unk0 = a1->unk0;
            v0->unk4 = a1->unk8;
        }
        if (v0->unk8 == a1->unk0) {
            v0->unk8 = a1->unk4;
            v0->unkC = a1->unk9;
        } else if (v0->unk8 == a1->unk4) {
            v0->unk8 = a1->unk0;
            v0->unkC = a1->unk8;
        }
    }
}

void func_151B2FA0(s32 arg0, s32 arg1, u8 arg2) {
    func_151B47D8(arg0, arg0 + 0x150, arg1, arg2);
}

void func_151B2FD0(s32 *arg0) {
    s32 *temp = (s32 *)arg0[0x4C / 4];
    if (temp != 0) {
        temp[0x44 / 4] = 0;
    }
}

void func_151B2FE8(s32 *arg0) {
    func_151B2FD0(arg0);
    func_1514933C((struct260 *)arg0);
}

void func_151B3014(s32 *arg0) {
    func_151B2FD0(arg0);
    func_15149368((struct260 *)arg0);
}

void func_151B3040(s32 arg0, s32 arg1, u8 arg2) {
    s32 a;
    s32 temp;
    temp = arg0 + 0x150;
    func_15169850(arg1, arg2, temp, arg0 + 0x154, arg0);
    func_15169850(arg1, arg2, temp + 0x14, temp + 0x18, arg0);
}
