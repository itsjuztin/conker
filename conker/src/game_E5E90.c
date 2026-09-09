#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_8009FDD4;
extern f32 D_8009FDD8;
extern f32 D_8009FDDC;

#pragma GLOBAL_ASM("asm/nonmatchings/game_E5E90/func_150B89E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_E5E90/func_150B8F44.s")

s32 func_150B9560(void *arg0) {
    f32 *temp_v0;
    f32 temp_f0;
    s16 v1;

    temp_v0 = (f32 *)((u8 *)arg0 + 0x110);
    v1 = *(volatile s16 *)((u8 *)arg0 + 0x1C);
    if (v1 < 0x50) {
        *temp_v0 += D_8009FDD4 * D_800BE9A4;
        *(f32 *)((u8 *)arg0 + 0x38) = *(volatile f32 *)((u8 *)arg0 + 0x38) - *temp_v0;
        v1 = *(volatile s16 *)((u8 *)arg0 + 0x1C);
    }

    if (v1 >= 0x73) {
        temp_f0 = D_8009FDD8;
        *(f32 *)((u8 *)arg0 + 0x2C) *= temp_f0;
        *(f32 *)((u8 *)arg0 + 0x30) *= temp_f0;
    } else if (v1 < 0x41) {
        *(f32 *)((u8 *)arg0 + 0x30) += D_8009FDDC;
    }

    return 1;
}

s32 func_150B95FC(void *arg0) {
    s16 v0 = *(s16*)((u8*)arg0 + 0x1C);
    if (v0 < 0x20) {
        *(u8*)((u8*)arg0 + 0x5C) = v0 << 3;
    }
    return 1;
}

s32 func_150B961C(void *arg0) {
    s16 v0 = *(s16*)((u8*)arg0 + 0x1C);
    if (v0 < 0x40) {
        *(u8*)((u8*)arg0 + 0x28) = v0 << 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_E5E90/func_150B963C.s")

struct Struct150B9D14 {
    char pad0[0x18];
    s32 unk18;
    s32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    s32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
};

extern void func_15142600(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_150B9D14(s32 arg0, struct Struct150B9D14 *arg1) {
    func_15142600(arg0, arg1->unk18, arg1->unk1C, arg1->unk2C,
                  arg1->unk30, arg1->unk34, arg1->unk38, arg1->unk3C,
                  arg1->unk40, arg1->unk20, arg1->unk24, arg1->unk28);
    return 1;
}

struct Struct150B9D8C {
    char pad0[0x1];
    u8  unk1;
    char pad2[0xA];
    u8  unkC;
    char padD[0x83];
    s32 unk90;
    char pad94[0x4];
    s16 unk98;
    char pad9A[0x2];
    s16 unk9C;
    char pad9E[0x2];
    s16 unkA0;
    s16 unkA2;
    char padA4[0x2];
    s16 unkA6;
};

struct Struct150B9D8CTmp {
    s32 unk0;
    s16 unk4;
    s8  unk6;
    char pad7[0x1];
    s32 unk8;
    s32 unkC;
    u8  unk10;
    u8  unk11;
    u8  unk12;
    u8  unk13;
    u8  unk14;
    u8  unk15;
    char pad16[0x2];
    s32 unk18;
    char pad1C[0x10];
};

void func_150B9D8C(struct Struct150B9D8C *arg0) {
    struct Struct150B9D8CTmp tmp;
    s32 c;
    s32 b;
    s32 a;

    if (arg0->unk98 == -1) {
        tmp.unk6 = 4;
        tmp.unk8 = 0;
        tmp.unkC = 0;
        tmp.unk0 = 0x11;
        tmp.unk4 = 0x64;
        tmp.unk10 = 0xFF;
        tmp.unk11 = arg0->unk90;
        tmp.unk12 = 0;
        tmp.unk13 = 0;
        tmp.unk14 = 0;
        tmp.unk15 = 0xFF;
        tmp.unk18 = 0x30001;

        a = func_150ADA20();
        b = func_150ADA20();
        c = func_150ADA20();

        func_1513C4EC((s32)&tmp, 0, 2, 0,
                      (f32)arg0->unk9C,
                      (f32)(arg0->unkA6 + 2),
                      (f32)arg0->unkA0,
                      (f32)arg0->unkA2,
                      (f32)arg0->unkA2,
                      a & 0xFF,
                      ((c & 1) << 1) + (b & 1),
                      3, 0xFF, 0,
                      arg0->unkC,
                      arg0->unk1);
    }
}
