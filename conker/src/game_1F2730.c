#include <ultra64.h>
#include "functions.h"
#include "variables.h"

struct225 *func_151602C0(Header *header, Header2 *header2, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, s32 offset, u8 arg9, s32 argA);

#pragma GLOBAL_ASM("asm/nonmatchings/game_1F2730/func_151C5280.s")

extern void func_15102B38(s32, u8, s32, s32, f32 *, s32, s32, f32, s32, s32, s32, s32, u8, s32);
extern f32 D_800AAABC, D_800AAAC0, D_800AAAC4, D_800AAAC8;
extern s32 D_800AAA90, D_800AAA9C;

void func_151C5588(s32 arg0, s32 arg1, s16 arg2, u8 arg3, s32 arg4) {
    f32 sp50[2];
    union { volatile s32 w; f64 d; } sp48;
    s32 sp44;

    sp50[1] = (func_150ADA68() * D_800AAABC + 604.0f) * D_800AAAC0;
    sp50[0] = (func_150ADA68() * 59.0f + 141.0f) * D_800AAAC4;
    sp44 = func_150ADA20();
    sp48.w = func_150ADA20();
    func_15102B38(arg0, 0, (s32)&D_800AAA90, (s32)&D_800AAA9C, sp50,
                  (sp44 & 3) + 6, 0xFF, func_150ADA68() * 270.0f + D_800AAAC8,
                  arg1, 0xFF, 0, arg2, arg3, arg4);
}

void func_151C56A4(f32 *arg0, u8 arg1, s32 arg2) {
    Header header;
    Header2 header2;

    header.unk0 = 3;
    header.unk1 = -1;
    header.unk2 = (func_150ADA20() % 3U) + 3;
    header.unk4 = 0;

    header2.unk0 = (s32) arg0[0];
    header2.unk4 = (s32) arg0[1];
    header2.unk8 = (s32) arg0[2];

    func_151602C0(&header, &header2, (func_150ADA20() & 1) + 6, 0xFF, 0xE8, 0xAB, 0xFF, 0, 0, arg1, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1F2730/func_151C577C.s")

void func_15137F30(f32 *a0, f32 *a1, f32 *a2, f32 *a3, f32 arg4, void *arg5, f32 *out6C, f32 *out60, f32 *out54, f32 *out50, s16 *out4E, u8 *out4D, f32 *out48);
void func_151D9014(f32 *a0, f32 *a1, s32 a2, f32 a3, s16 sp10, u8 sp14, f32 sp18, s32 sp1C, f32 sp20, f32 sp24, s32 sp28, s32 sp2C, s32 sp30, s32 sp34, u8 sp38, u8 sp3C);

void func_151C5E74(f32 *a0, f32 *a1, f32 *a2, f32 *a3, f32 arg4, u8 *arg5) {
    f32 sp6C[3];
    f32 sp60[3];
    f32 sp54[3];
    f32 sp50;
    s16 sp4E;
    u8 sp4D;
    f32 sp48;

    func_15137F30(a0, a1, a2, a3, arg4, arg5, sp6C, sp60, sp54, &sp50, &sp4E, &sp4D, &sp48);
    func_151D9014(sp6C, sp54, 1, sp50, sp4E, sp4D, sp48, 0, 1.0f, 1.0f, 1, 0, 1, 0, arg5[0xC], arg5[1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1F2730/func_151C5F44.s")

struct conker151C61A0 {
    /* 0x00 */ s16 unk00;
    /* 0x02 */ s16 unk02;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s16 unk08;
    /* 0x0A */ s16 unk0A;
    /* 0x0C */ s16 unk0C;
    /* 0x0E */ s16 unk0E;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ s8 unk25;
    /* 0x26 */ s16 unk26;
    /* 0x28 */ s16 unk28;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ f32 unk30;
    /* 0x34 */ f32 unk34;
    /* 0x38 */ s32 unk38;
};

void func_15154684(struct conker151C61A0 *arg0, u8 arg1, s32 arg2);

extern f32 D_800AAAF4;
extern f32 D_800AAAF8;
extern f32 D_800AAAFC;

void func_151C61A0(s32 a0, s32 a1, u8 a2, s32 a3) {
    struct conker151C61A0 sp1C;

    sp1C.unk00 = 0xA;
    sp1C.unk02 = 4;
    sp1C.unk04 = a0;
    sp1C.unk08 = 0;
    sp1C.unk0C = 0xFF;
    sp1C.unk0A = -0x18;
    sp1C.unk0E = 0x19;
    sp1C.unk10 = 5.0f;
    sp1C.unk14 = 7.0f;
    sp1C.unk18 = D_800AAAF4;
    sp1C.unk1C = D_800AAAF8;
    sp1C.unk20 = D_800AAAFC;
    sp1C.unk24 = 0xBE;
    sp1C.unk25 = 0x41;
    sp1C.unk26 = 0xC8;
    sp1C.unk28 = 0x96;
    sp1C.unk2C = 96.0f;
    sp1C.unk30 = 109.0f;
    sp1C.unk34 = 1.0f;
    sp1C.unk38 = a1;
    func_15154684(&sp1C, a2, a3);
}

s32 func_151C6290(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg0[4] == 0x5A || arg0[4] == 0x74 || arg0[4] == 0x7A) {
        return 0;
    }
    return 1;
}
