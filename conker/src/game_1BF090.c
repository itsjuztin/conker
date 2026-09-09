#include <ultra64.h>
#include "functions.h"
#include "variables.h"

struct Struct15191BE0Arg0 {
    u8 pad0[0x3B];
    u8 unk3B;
};

struct Struct15191BE0Local {
    struct Struct15191BE0Arg0 *unk0;
    u8 unk4;
    u8 pad5[3];
    Header2 unk8;
    s32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24[9];
    f32 unk48;
    f32 unk4C;
    s16 unk50;
    s16 unk52;
    u8 unk54;
    u8 unk55;
    u8 pad56[2];
    f32 unk58;
    f32 unk5C;
    f32 unk60;
    u8 unk64;
    u8 pad65[3];
};

struct Struct15191BE0Stack {
    s32 pad0;
    struct Struct15191BE0Local local;
};

typedef struct AngleVelocityState {
    u8 pad_0x00[0x38];
    f32 field_0x38;
    f32 field_0x3C;
    u8 pad_0x40[0x68];
    s32 field_0xA8;
    u8 field_0xAC[2];
    s8 field_0xAE[2];
    f32 field_0xB0;
} AngleVelocityState;

void func_1504715C(s32, s32);

struct260 *func_15191BE0(struct Struct15191BE0Arg0 *arg0, Header2 *arg1, u8 arg2, f32 arg3, f32 arg4, s16 arg5, f32 arg6, f32 arg7, s16 arg8, s16 arg9, u8 argA, u8 argB, f32 argC, f32 argD, f32 argE, u8 argF, u8 arg10, s32 arg11) {
    struct260 *temp_v0;
    struct Struct15191BE0Stack sp3C;
    s32 temp_a0;
    u8 temp_arg4;

    if (arg0 == 0) {
        return 0;
    }

    sp3C.local.unk0 = arg0;
    sp3C.local.unk4 = arg0->unk3B;
    sp3C.local.unk8 = *arg1;
    sp3C.local.unk14 = arg2 << 6;
    sp3C.local.unk1C = arg3;
    sp3C.local.unk18 = 0.0f;
    sp3C.local.unk20 = arg4;
    func_1504715C((s32) sp3C.local.unk24, (s32) arg0);

    sp3C.local.unk48 = arg6;
    sp3C.local.unk4C = arg7;
    sp3C.local.unk50 = arg8;
    sp3C.local.unk52 = arg9;
    sp3C.local.unk54 = argA;
    sp3C.local.unk55 = argB;
    sp3C.local.unk58 = argC;
    sp3C.local.unk5C = argD;
    sp3C.local.unk60 = argE;
    sp3C.local.unk64 = argF;

    if (arg5 == -1) {
        temp_a0 = 0x12C;
    } else {
        temp_a0 = arg5;
    }

    if (arg5 == -1) {
        temp_arg4 = 0;
    } else {
        temp_arg4 = 1;
    }

    temp_v0 = func_15149130(temp_a0, -1, 0x1D, -1, temp_arg4, 0x1D, (struct37 *)0x68, arg10, arg11);
    if (temp_v0 != 0) {
        memcpy((s32) temp_v0 + 0x28, &sp3C.local, sizeof(sp3C.local));
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1BF090/func_15191D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1BF090/func_1519203C.s")

extern void func_15131C84(s32, s32, s32, s32, s32, s32);

u8 func_15192308(AngleVelocityState *arg0, s32 arg1) {
    func_15131C84((s32) arg0->field_0xAC, (s32) arg0->field_0xAE, arg0->field_0xA8, (s32) &arg0->field_0xB0, (s32) &arg0->field_0x38, (s32) &arg0->field_0x3C);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1BF090/func_15192358.s")

u8 func_15192308(AngleVelocityState *arg0, s32 arg1);
u8 func_15192358(s32 arg0, s32 arg1);

u8 func_1519257C(s32 arg0, s32 arg1) {
    u8 ret;
    ret = func_15192308((AngleVelocityState *) arg0, arg1);
    if (ret != 0) {
        ret = func_15192358(arg0, arg1);
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1BF090/func_151925C4.s")

void func_1519277C(s32 arg0, s32 arg1, u8 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}
