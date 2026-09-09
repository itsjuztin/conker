#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_8009FE7C;
extern f32 D_8009FE80;
extern f32 D_8009FE84;
extern f32 D_8009FE88;
extern f32 D_8009FE8C;
extern s32 func_15132A4C(void *, s32, s32, s32, u8, s32);


#pragma GLOBAL_ASM("asm/nonmatchings/game_E8090/func_150BABE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_E8090/func_150BAFEC.s")

s32 func_150BB260(void *arg0, s32 arg1) {
    s32 i;
    f32 *scale;

    scale = (f32 *)((u8 *)arg0 + 0xA8);
    for (i = D_800BE9E4; i != 0; i--) {
        *(f32 *)((u8 *)arg0 + 0x58) *= *scale;
        *(f32 *)((u8 *)arg0 + 0x60) *= *scale;
    }
    return 1;
}

extern void func_1513F6C0(void *arg0, s32 arg1, s32 arg2);

void func_150BB408(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x18) |= 1;
    *(s16 *)((u8 *)arg0 + 0xB0) = (*(s16 *)((u8 *)arg0 + 0x1C) = 0x32);
    *(s16 *)((u8 *)arg0 + 0xB2) = 5;
    func_1513F6C0(arg0, 6, *(u8 *)((u8 *)arg0 + 0x81));
}

s32 func_150BB450(void *arg0) {
    s32 temp;
    if (*(s16 *)((u8 *)arg0 + 0x1C) < *(s16 *)((u8 *)arg0 + 0xB0)) {
        temp = (s16)(*(s16 *)((u8 *)arg0 + 0xB2) * *(s16 *)((u8 *)arg0 + 0x1C));
        if (temp < *(u8 *)((u8 *)arg0 + 0x28)) {
            *(u8 *)((u8 *)arg0 + 0x28) = temp;
        }
    }
    return 1;
}

s32 func_150BB498(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5,
                  s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11,
                  s32 arg12, s32 arg13, u8 arg14) {
    s16 angle;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 temp_f2;
    struct {
        s32 pad00;
        f32 unk00;
        f32 unk04;
        f32 unk08;
        f32 unk0C;
        f32 unk10;
        f32 unk14;
        f32 unk18;
        f32 unk1C;
        f32 unk20;
        f32 unk24;
        f32 unk28;
        f32 unk2C;
        f32 unk30;
        f32 unk34;
        f32 unk38;
        f32 unk3C;
        f32 unk40;
        f32 unk44;
        f32 unk48;
        f32 unk4C;
        s32 unk50;
        s16 unk54;
        s16 unk56;
        u8 unk58;
        u8 pad59[3];
        s32 unk5C;
        u8 unk60;
        u8 unk61;
        u8 unk62;
        u8 unk63;
        u8 unk64;
        u8 unk65;
        u8 unk66;
        u8 unk67;
        u8 unk68;
        u8 pad69;
        u8 unk6A;
        u8 pad6B;
        s32 unk6C;
        u8 unk70;
        u8 pad71;
        s16 unk72;
        s16 unk74;
        u8 pad76[6];
    } sp2C;

    arg0 = arg8 - 0x40;
    spB8 = func_151423D8(arg0);
    spB4 = func_151423D8((u8)arg8);

    sp2C.unk50 = 0x9E8;
    sp2C.unk10 = 0.0f;
    sp2C.unk14 = 0.0f;
    sp2C.unk18 = 0.0f;
    sp2C.unk1C = 1.0f;
    sp2C.unk20 = 1.0f;
    sp2C.unk24 = 1.0f;
    sp2C.unk28 = arg2;
    sp2C.unk2C = arg3;
    sp2C.unk30 = arg4;
    sp2C.unk04 = D_8009FE7C;

    angle = (func_150ADA20() % 13U) - 0x34;
    arg0 = angle - 0x40;
    spB0 = func_151423D8(arg0);
    spAC = func_151423D8((u8)angle);

    temp_f2 = (func_150ADA68() * 9.0f) + 3.0f;
    sp2C.unk34 = (temp_f2 * spAC) * spB8;
    sp2C.unk38 = -temp_f2 * spB0;
    sp2C.unk3C = (temp_f2 * spAC) * spB4;

    sp2C.unk40 = (func_150ADA68() * 50.0f) + -25.0f;
    sp2C.unk44 = 0.0f;
    sp2C.unk48 = (func_150ADA68() * 50.0f) + -25.0f;
    sp2C.unk54 = (func_150ADA20() % 68U) + 0x26;

    sp2C.unk4C = (func_150ADA68() * D_8009FE80) + D_8009FE84;
    sp2C.unk00 = 1.0f;

    temp_f2 = (func_150ADA68() * D_8009FE88) + D_8009FE8C;
    sp2C.unk56 = 0x1F;
    sp2C.unk58 = 0;
    sp2C.unk5C = 0;
    sp2C.unk08 = temp_f2;
    sp2C.unk60 = 0xFF;
    sp2C.unk61 = 1;
    sp2C.unk62 = 0;
    sp2C.unk63 = 0;
    sp2C.unk64 = 0;
    sp2C.unk65 = 0;
    sp2C.unk66 = 0;
    sp2C.unk67 = 0;
    sp2C.unk68 = 0;
    sp2C.unk6A = 0;
    sp2C.unk6C = 0;
    sp2C.unk70 = 0;
    sp2C.unk72 = 1;
    sp2C.unk74 = 0xFF;
    sp2C.unk0C = temp_f2;

    func_15132A4C(&sp2C.unk00, 3, 0xFF, 0, arg14, 0);
    return 1;
}
