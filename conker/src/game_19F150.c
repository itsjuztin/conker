#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 cosf(f32);
extern f32 sinf(f32);
extern f32 D_800A7154;
extern f32 D_800A7158;
extern s32 D_800BE9E4;
extern void func_1510E82C(s32 *, s32, f32 *, s32, s32 *, s32, f32, f32, f32, f32, s32, s32);

struct Obj15171CA0 {
    char pad0[0x16];
    s16 unk16;
    char pad18[0x26 - 0x18];
    s16 unk26;
    char pad28[0x36 - 0x28];
    s16 unk36;
    char pad38[0x46 - 0x38];
    s16 unk46;
    char pad48[0x50 - 0x48];
    s16 unk50;
    s16 unk52;
    s16 unk54;
    s16 unk56;
    u8  unk58;
    u8  unk59;
};

extern struct Obj15171CA0 *func_15167A68(s32, s32, s32, s32, s32, s32);

struct Obj15171CA0 *func_15171CA0(s16 arg0, u16 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, s32 arg7) {
    struct Obj15171CA0 *ret = func_15167A68(arg5 == 0 ? 0xF : 0x43, arg7, 0x60, 1, arg6, 1);
    if (ret == 0) {
        return NULL;
    }
    ret->unk50 = arg0;
    ret->unk52 = 0;
    ret->unk54 = arg4;
    ret->unk56 = arg1;
    ret->unk58 = arg2;
    ret->unk59 = arg3;
    ret->unk16 = 0;
    ret->unk26 = 0;
    ret->unk36 = 0;
    ret->unk46 = 0;
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_19F150/func_15171D4C.s")

struct Some15171F04 {
    u8 pad0[4];
    u8 unk4;
    u8 pad5;
    u16 unk6;
    u16 unk8;
};
extern struct Some15171F04 *D_8008CA4C[];
s32 func_151725FC(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7);

void func_15171F04(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s16 arg4, u16 arg5, u8 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, u8 arg11, s32 arg12) {
    struct Obj15171CA0 *temp;

    temp = func_15171CA0(arg4, arg5, arg6, arg8, arg9, arg10, arg11, arg12);
    if (temp != NULL) {
        if (func_151725FC((u8 *)temp + 0x10, arg3, arg0, arg1, arg2, 0.0f, arg7, D_8008CA4C[temp->unk58]->unk6) == 0) {
            func_1516972C((struct102 *)temp);
        }
    }
}

void func_15171FC0(struct Obj15171CA0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk50;
    if (temp_v0 < -1) {
        arg0->unk50 = temp_v0 + 1;
        if (arg0->unk50 == -1) {
            func_1516972C((struct102 *)arg0);
        }
        return;
    }

    if (temp_v0 == 0) {
        arg0->unk50 = -3;
        return;
    }

    if (temp_v0 == -1) {
        return;
    }

    if ((arg0->unk59 & 4) == 0) {
        if (D_800BE9E4 < temp_v0) {
            arg0->unk50 = temp_v0 - D_800BE9E4;
        } else {
            arg0->unk50 = 0;
        }
    }

    arg0->unk52 += arg0->unk54;
    temp_v0 = D_8008CA4C[arg0->unk58]->unk4;
    if ((arg0->unk52 / 256) < temp_v0) {
        return;
    }

    if (arg0->unk59 & 4) {
        arg0->unk50 = -3;
    } else {
        arg0->unk52 = (temp_v0 << 8) - 0x100;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_19F150/func_151720C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_19F150/func_151725FC.s")

s32 func_15172B20(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6, u8 arg7) {
    struct sp15172B20 {
        s32 unk0;
        f32 unk4;
        s32 unk8;
        s32 unkC;
    };
    f32 temp_f0;
    f32 temp_f6;
    struct sp15172B20 sp40;
    f32 temp_f12;

    temp_f12 = (arg4 - 90.0f) * D_800A7154;
    temp_f6 = cosf(temp_f12);
    temp_f0 = sinf(temp_f12);
    arg1 += (f32) arg5 * temp_f0;
    arg3 += (f32) arg5 * temp_f6;
    func_1510E82C(&sp40.unk0, 0, &sp40.unk4, 0, &sp40.unk8, 0, arg1, arg2, arg3, arg2, 0, 0);
    if (sp40.unk0 == 0) {
        return 0;
    }
    if (sp40.unk4 == D_800A7158) {
        return 0;
    }
    return func_151725FC(arg0, sp40.unk0, arg1, sp40.unk4, arg3, arg4, arg6, arg7);
}
