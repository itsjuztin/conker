#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A1970;
extern f32 D_800A1980;
extern f32 D_800A1984;
extern f32 D_800A1950[];

s32 func_1509BE40();
void func_15143134(void *, f32 *, s32);

typedef struct {
    /* 0x00 */ struct127 *unk0;
    /* 0x04 */ u8 unk4;
    /* 0x05 */ u8 pad5[3];
    /* 0x08 */ f32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
} Struct150F3214_110;

typedef struct {
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ f32 unk2C;
    /* 0x030 */ f32 unk30;
    /* 0x034 */ f32 unk34[3];
    /* 0x040 */ u8 pad40[0x1C];
    /* 0x05C */ u8 unk5C;
    /* 0x05D */ u8 pad5D[0xB3];
    /* 0x110 */ Struct150F3214_110 unk110;
} Struct150F3214;

#pragma GLOBAL_ASM("asm/nonmatchings/game_11FF10/func_150F2A60.s")

void func_150F2C8C(struct127 *arg0) {
    struct {
        struct127 *unk0;
        u8 unk4;
        u8 unk5;
        f32 unk8;
        u8 unkC;
    } sp38;
    struct260 *temp_v0;

    sp38.unk0 = arg0;
    sp38.unk4 = arg0->unique_id;
    sp38.unk5 = 0;
    sp38.unk8 = 0.0f;
    sp38.unkC = 0;

    temp_v0 = func_15149130(0x12C, -1, 0x5C, -1, 0, 0x44, (struct37 *)0x10, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp38, 0x10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_11FF10/func_150F2D14.s")

void func_150F3194(s32 arg0, s32 arg1, u8 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150F31D4(s32 arg0, s32 arg1, u8 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x110, arg0 + 0x114, arg0);
}

s32 func_150F3214(Struct150F3214 *arg0) {
    Struct150F3214_110 *temp_v0;
    struct127 *temp_v1;
    f32 temp_f2;

    temp_v0 = &arg0->unk110;
    temp_v1 = temp_v0->unk0;

    if (temp_v1->interaction_state == 0) {
        goto return_zero;
    }

    do {
        if (temp_v1->unique_id != temp_v0->unk4) {
            goto return_zero;
        }

        if (temp_v1->unk1D4 != NULL) {
            break;
        }
return_zero:
        return 0;
    } while (0);

    func_15143134(D_800A1950, arg0->unk34, (s32)temp_v1->unk1D4 + 0x3C0);

    temp_f2 = sqrtf(temp_v0->unk8) * temp_v0->unk10;
    arg0->unk30 = temp_f2;
    arg0->unk2C = temp_f2;

    arg0->unk5C = (u32)(temp_v0->unk14 - ((temp_v0->unk18 * temp_v0->unk8) * temp_v0->unk8));
    temp_v0->unk8 = temp_v0->unk8 + D_800BE9A4;

    if (temp_v0->unkC < temp_v0->unk8) {
        return 0;
    }
    return 1;
}

void func_150F337C(s32 arg0, s16 arg1) {
    func_15140410(arg0, arg0 + 0x12C, arg0 + 0x138, arg1);
}

void func_150F33B0(struct131 *arg0) {
    if (D_800DBFF0->unk300 < -2000.0f) {
        *(u8*)&arg0->unk4F &= ~1;
        return;
    }

    *(u8*)&arg0->unk4F = (*(u8*)&arg0->unk4F & 0xFF) | 1;
}

void func_150F33F8(s32 arg0) {
    s16 *temp_v0_2;

    if (D_800DBFF0[arg0].unk300 < D_800A1970) {
        if (D_800DBFF0[arg0].unk2FC > 840.0f) {
            temp_v0_2 = (s16 *)D_800D9A40;
            *temp_v0_2 |= 1 << arg0;
            return;
        }
        temp_v0_2 = (s16 *)D_800D9A40;
        *temp_v0_2 &= ~(1 << arg0);
    }
}

f32 func_150F34A0(s32 arg0, f32 arg1) {
    f32 var_f2;

    if (arg1 < -5.0f) {
        var_f2 = (arg1 * D_800A1980) + D_800A1984;
    } else {
        var_f2 = 0.75f;
    }

    return var_f2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_11FF10/func_150F34F4.s")

void func_150F43F0(struct108 *arg0) {
    if (arg0->unk23E == 0x3B) {
        func_1509BFB0(0, 0x405C, 1);
        if (arg0->unk2C == 0x100) {
            goto set_zero;
        }
        if (arg0->unk6C8 == 0) {
            if (func_15123934(arg0, 8, 0, 0, 0) != 0) {
                arg0->unk84 |= 0x300000;
                arg0->unk84 &= -5;
                arg0->unk1B4 = 1;
                arg0->unk1E0 = 3;
                func_15124B18(arg0);
            }
            arg0->unk134 = 0;
            arg0->unk348 = 125.0f;
            arg0->unk34C = 125.0f;
            arg0->unk374 = 220.0f;
            arg0->unk190 = 30.0f;
        } else {
set_zero:
            arg0->unk190 = 0.0f;
        }
    } else if (arg0->unk2C == 8) {
        if (arg0->unk6C8 == 0) {
            func_151239CC(arg0, 0);
            func_1509BFB0(0, 0x405C, 0);
        }
    }

    if ((func_1509BE40(1, 0x4054, 6, 0x9000) != 0) && (func_1509BE40(1, 0x405E, 6, 0x9000) == 0)) {
        arg0->unk84 |= (s32)0x80000000;
    } else {
        arg0->unk84 &= 0x7FFFFFFF;
    }
}
