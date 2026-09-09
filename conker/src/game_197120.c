#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_197120/func_15169C70.s")

struct Struct1516A3F4 {
    u8 pad0;
    u8 unk1;
    u8 padb[0xA];
    u8 unkC;
    u8 padd[0x7];
    s32 unk14;
    u8 pad18[0x8];
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    s16 unk2A;
    u8 pad2c[0xC];
    s16 unk38;
    u8 pad3a[0x1];
    u8 unk3B;
};

struct Struct15167AD8 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s8 unk12;
    u8 pad13[0x1];
    s8 unk14;
    u8 unk15;
};

extern s32 func_1510F800(s32);
extern s32 func_1510F8D8(s32, s32, s32, s32);
extern void func_15167AD8(struct Struct15167AD8 *, s32, s32);
extern s32 D_8008CADC;
extern f32 D_800A6CC8;

void func_1516A3F4(struct Struct1516A3F4 *arg0) {
    s32 temp;
    s32 t0;
    s32 v1;
    struct Struct15167AD8 sp;

    t0 = arg0->unk22 + arg0->unk2A;
    v1 = arg0->unk14;
    if (v1 >= t0) {
        func_1510F800(0);
        v1 = arg0->unk14 = func_1510F8D8(arg0->unk20, arg0->unk22, arg0->unk24, 0);
    }
    if (v1 >= t0) {
        arg0->unk38 = 0;
        if (t0 - v1 < 0x32) {
            sp.unk0 = D_8008CADC;
            sp.unk4 = 0;
            sp.unk6 = 0x100;
            sp.unk8 = arg0->unk20;
            sp.unkA = arg0->unk14 + 0xA;
            sp.unkC = arg0->unk24;
            temp = arg0->unk3B;
            sp.unk12 = 0;
            v1 = (temp << 12) / 0x13EC + 0xCC;
            sp.unkE = v1;
            sp.unk10 = v1;
            sp.unk15 = temp;
            sp.unk14 = 3;
            func_15167AD8(&sp, arg0->unkC, arg0->unk1);
        }
    } else {
        f32 sc = D_800A6CC8;
        arg0->unk26 = (s16)((f32)(s32)arg0->unk26 * sc);
        arg0->unk28 = (s16)((f32)(s32)arg0->unk28 * sc);
    }
}

struct Struct1516A538 {
    u8 pad0;
    u8 unk1;
    u8 padb[0xA];
    u8 unkC;
    u8 padd[0x7];
    s16 unk14;
    u8 pad16[0x2];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 pad1e[0x7];
    u8 unk25;
};

extern u8 func_150ADA20(void);
extern void func_15171D4C(f32, f32, f32, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32);
extern void func_1516F864(s32);
extern void func_1516F94C(s32, s32);

void func_1516A538(struct Struct1516A538 *arg0) {
    u32 b;
    u32 a;
    s32 c;

    if (arg0->unk14 >= 0x300) {
        a = (u32)func_150ADA20() % 3;
        c = arg0->unk25;
        b = (u32)func_150ADA20() % 0x168;
        func_15171D4C(
            (f32)(s32)arg0->unk18,
            (f32)((s32)arg0->unk1A - 0xA),
            (f32)(s32)arg0->unk1C,
            0x64,
            0,
            a + 0x20,
            (f32)(u32)b,
            0,
            (c * 25) / 255 + 0x19,
            0,
            0x100,
            0,
            arg0->unkC,
            arg0->unk1);
    }
}

typedef struct {
    char pad_0[0xE];
    s16 field_0xE;
    s16 field_0x10;
    s16 field_0x12;
    s16 field_0x14;
    s16 field_0x16;
    s16 field_0x18;
    char pad_0x1A[0x5];
    u8 field_0x1F;
    char pad_0x20[0x4];
    u8 field_0x24;
    char pad_0x25[0x7];
    u8 field_0x2C;
    u8 field_0x2D;
} Obj1516A648;

s32 func_1516A648(Obj1516A648 *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    temp_a1 = arg0->field_0x24;
    temp_v0 = arg0->field_0x1F;
    if (temp_a1 != 0) {
        if (temp_v0 != 0xFF) {
            temp_v0 += D_800BE9E4 << 4;
            if (temp_v0 >= 0x100) {
                temp_v0 = 0xFF;
            }
            arg0->field_0x1F = temp_v0;
            temp_a1 = ((volatile Obj1516A648 *)arg0)->field_0x24;
        }
    } else {
        if (temp_v0 != 0) {
            temp_v0 -= D_800BE9E4 << 2;
            if (temp_v0 < 0) {
                temp_v0 = 0;
            }
            arg0->field_0x1F = temp_v0;
            temp_a1 = ((volatile Obj1516A648 *)arg0)->field_0x24;
        }
    }

    if ((temp_a1 == 0) && (temp_v0 == 0)) {
        return 1;
    }

    arg0->field_0x18 = arg0->field_0x18 - 0x12C;
    func_1516F864((s32)arg0);
    temp_v1 = func_1510F8D8(arg0->field_0xE, arg0->field_0x10, arg0->field_0x12, 0) + 0xA;
    arg0->field_0x2C = temp_v1 >> 8;
    arg0->field_0x2D = temp_v1 & 0xFF;
    if (arg0->field_0x10 < temp_v1) {
        arg0->field_0x10 = temp_v1;
        arg0->field_0x18 = (s16)(s32)((f32)(s32)arg0->field_0x18 * -0.5f);
        func_1516F94C((s32)arg0, 0xE6);
    }
    return 0;
}
