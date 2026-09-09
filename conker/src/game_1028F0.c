#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern f32 D_800A0AB8;
extern f32 D_800A0ABC;
extern f32 D_800A0AC0;
extern f32 D_800A0AC4;
extern f32 D_800A0AC8;
extern f32 D_800A0AB0;
extern f32 D_800A0AB4;

extern void func_15182670(s32, s32, s32, s32, s32, s32, s32, s32);
extern void *func_15154884(struct Vec3F *, f32, f32, f32, u8, s32);

void func_150D5440(void *arg0, u8 arg1, s32 arg2) {
    struct {
        void *unk0;
        u8 unk4;
        u8 pad5;
        u8 pad6;
        u8 pad7;
        f32 unk8;
    } sp34;
    struct260 *temp_v0;

    sp34.unk0 = arg0;
    sp34.unk4 = *(u8 *)((s32)arg0 + 0x3B);
    sp34.unk8 = 0.0f;

    temp_v0 = func_15149130(0x12C, -1, 0x38, -1, 0, 0x28, (struct37 *)0xC, arg1, arg2);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp34, 0xC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1028F0/func_150D54C8.s")

typedef struct {
    s32 unk0;
    u8  unk4;
} SubA150D596C;

typedef struct {
    s32 unk0;
    union {
        s32 w4;
        u8  b4;
    } u4;
    u8  unk8;
    u8  unk9;
} ArgB150D596C;

void func_150D596C(struct260 *arg0, s32 arg1, u8 arg2) {
    SubA150D596C *temp_v0 = (SubA150D596C *)((u8 *)arg0 + 0x28);
    ArgB150D596C *b = (ArgB150D596C *)arg1;
    s32 b0;

    if (arg2 == 0 || arg2 == 0x2F || arg2 == 0x3) {
        b0 = b->unk0;
        if ((b0 == temp_v0->unk0) || (b->u4.b4 == temp_v0->unk4)) {
            func_1516972C((struct102 *)arg0);
        }
    } else if (arg2 == 0x2D) {
        if (temp_v0->unk0 == b->unk0) {
            temp_v0->unk0 = b->u4.w4;
            temp_v0->unk4 = b->unk9;
        } else if (temp_v0->unk0 == b->u4.w4) {
            temp_v0->unk0 = b->unk0;
            temp_v0->unk4 = b->unk8;
        }
    }
}

void func_150D5A2C(struct260 *arg0) {
    func_1514933C(arg0);
}

void func_150D5A4C(struct260 *arg0) {
    func_15149368(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1028F0/func_150D5A6C.s")

void func_151541B8(void *, f32, s32, f32, f32, u8, s32);

void func_150D6388(void *arg0, u8 arg1, s32 arg2) {
    union { f32 f; f64 _a; } temp_f0;
    u32 temp_a;

    temp_f0.f = func_150ADA68();
    temp_a = func_150ADA20();
    func_151541B8(arg0, temp_f0.f * 4.0f + 15.0f, 0x3FAFF1E9,
                  (f32)(u32)((temp_a % 0x38U) + 0xC8), 0.0f, arg1, arg2);
}

void func_150D6434(struct Vec3F *arg0, u8 arg1, s32 arg2) {
    union { f32 f; f64 _a; } temp1;
    f32 temp0;

    temp0 = func_150ADA68();
    temp1.f = func_150ADA68();
    func_15154884(arg0, temp0 * 3.0f + 8.0f, temp1.f * D_800A0AB0 + D_800A0AB4,
                  func_150ADA68() * 50.0f + 100.0f, arg1, arg2);
}

typedef struct {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8  pad08[0xC];
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ s32 unk30;
    /* 0x34 */ f32 unk34;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ s16 unk44;
    /* 0x46 */ s16 unk46;
    /* 0x48 */ s16 unk48;
    /* 0x4A */ s16 unk4A;
    /* 0x4C */ s16 unk4C;
    /* 0x4E */ s16 unk4E;
    /* 0x50 */ s8  unk50;
} Struct150D64E8;

void func_150D64E8(Struct150D64E8 *arg0, f32 *arg1) {
    arg0->unk00 = 6;
    arg0->unk04 = 3;
    arg1[0] = D_800A0AB8;
    arg0->unk14 = D_800A0ABC;
    arg0->unk18 = D_800A0AC0;
    arg0->unk1C = 150.0f;
    arg0->unk20 = 105.0f;
    arg0->unk24 = 396.0f;
    arg0->unk28 = 612.0f;
    arg0->unk2C = 4;
    arg0->unk30 = 3;
    arg0->unk34 = 25.0f;
    arg0->unk38 = D_800A0AC4;
    arg0->unk3C = -2.0f;
    arg0->unk40 = D_800A0AC8;
    arg0->unk44 = 20;
    arg0->unk46 = 30;
    arg0->unk48 = 100;
    arg0->unk4A = 100;
    arg0->unk4C = 12;
    arg0->unk4E = 20;

    if (D_80082FA0 < 2) {
        if (D_8008FD8C < 8) {
            goto zero;
        }
    }

    arg0->unk50 = -1;
    return;

zero:
    arg0->unk50 = 0;
}

void func_151A5D58(f32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_150D65F0(s32 arg0, s32 arg1, u8 arg2, s32 arg3) {
    union { u32 w; f64 _a; } temp_a;
    f32 temp_f0;
    u32 temp_b;

    temp_f0 = func_150ADA68();
    temp_a.w = func_150ADA20();
    temp_b = func_150ADA20();
    func_151A5D58(temp_f0 * 100.0f + 150.0f, ((temp_a.w % 71) + 0x82) & 0xFF, arg0, arg1,
                  (temp_b % 31) + 0x32, 0, 1, arg2, arg3);
}

void func_150D66A4(u8 arg0, u8 arg1, s32 arg2) {
    u32 temp1;
    u32 temp0;

    temp0 = func_150ADA20();
    temp1 = func_150ADA20();
    func_15182670(0xFF, 0xFF, 0xFF, (u8)(temp0 % 0x38 + 0xC8), temp1 % 6 + 0x19, arg0, arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1028F0/func_150D6730.s")

void func_150D6C98(f32 *arg0, f32 *arg1) {
    arg1[0] = arg0[5];
    arg1[1] = arg0[6] + 60.0f;
    arg1[2] = arg0[7];
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1028F0/func_150D6CC4.s")

void func_150D6E60(struct260 *arg0, s32 arg1, u8 arg2) {
    SubA150D596C *temp_v0 = (SubA150D596C *)((u8 *)arg0 + 0xA8);
    ArgB150D596C *b = (ArgB150D596C *)arg1;
    s32 b0;

    if (arg2 == 0x2D) {
        if (temp_v0->unk0 == b->unk0) {
            temp_v0->unk0 = b->u4.w4;
            temp_v0->unk4 = b->unk9;
        } else {
            if (temp_v0->unk0 == b->u4.w4) {
                temp_v0->unk0 = b->unk0;
                temp_v0->unk4 = b->unk8;
            }
trailing_150D6E60:
            ;
        }
    } else if (arg2 == 0) {
        b0 = b->unk0;
        if ((b0 == temp_v0->unk0) || (b->u4.b4 == temp_v0->unk4)) {
            func_1516972C((struct102 *)arg0);
        }
    }
}

typedef struct {
    /* 0x00 */ struct127 *unk0;
    /* 0x04 */ u8 unk4;
    /* 0x05 */ u8 pad5[3];
    /* 0x08 */ f32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
} Struct150D6F0C_A8;

typedef struct {
    /* 0x00 */ u8 pad0[0x2B];
    /* 0x2B */ u8 unk2B;
    /* 0x2C */ u8 pad2C[0xC];
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40[3];
    /* 0x4C */ u8 pad4C[0x5C];
    /* 0xA8 */ Struct150D6F0C_A8 unkA8;
} Struct150D6F0C;

s32 func_150D6F0C(Struct150D6F0C *arg0, s32 arg1) {
    Struct150D6F0C_A8 *temp_v0;
    struct127 *temp_a3;
    f32 temp_f2;

    temp_v0 = &arg0->unkA8;
    temp_a3 = temp_v0->unk0;

    if (temp_a3->interaction_state == 0) {
        goto return_zero;
    }

    do {
        if (temp_a3->unique_id == temp_v0->unk4) {
            break;
        }
return_zero:
        return 0;
    } while (0);

    func_150D6C98((f32 *)temp_a3, arg0->unk40);

    temp_f2 = sqrtf(temp_v0->unk8) * temp_v0->unk10;
    arg0->unk3C = temp_f2;
    arg0->unk38 = temp_f2;

    arg0->unk2B = (u32)(temp_v0->unk14 - ((temp_v0->unk18 * temp_v0->unk8) * temp_v0->unk8));
    temp_v0->unk8 = temp_v0->unk8 + D_800BE9A4;

    if (temp_v0->unkC < temp_v0->unk8) {
        return 0;
    }
    return 1;
}

void func_150D7068(struct260 *arg0, s32 arg1, u8 arg2) {
    SubA150D596C *temp_v0 = (SubA150D596C *)((u8 *)arg0 + 0xA8);
    ArgB150D596C *b = (ArgB150D596C *)arg1;
    s32 b0;

    if (arg2 == 0x2D) {
        if (temp_v0->unk0 == b->unk0) {
            temp_v0->unk0 = b->u4.w4;
            temp_v0->unk4 = b->unk9;
        } else {
            if (temp_v0->unk0 == b->u4.w4) {
                temp_v0->unk0 = b->unk0;
                temp_v0->unk4 = b->unk8;
            }
trailing_150D7068:
            ;
        }
    } else if (arg2 == 0) {
        b0 = b->unk0;
        if ((b0 == temp_v0->unk0) || (b->u4.b4 == temp_v0->unk4)) {
            func_1516972C((struct102 *)arg0);
        }
    }
}
