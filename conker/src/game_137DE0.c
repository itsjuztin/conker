#include <ultra64.h>
#include "functions.h"
#include "variables.h"


typedef struct {
    /* 0x00 */ void *unk0;
    /* 0x04 */ u8  pad4[0x4];
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 unk16;
    /* 0x18 */ s16 unk18;
    /* 0x1A */ u8  pad1A[0x2];
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ s16 unk24;
    /* 0x26 */ s16 unk26;
    /* 0x28 */ s16 unk28;
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ s16 unk2E;
    /* 0x30 */ u8  unk30;
    /* 0x31 */ u8  unk31;
    /* 0x32 */ u8  unk32;
    /* 0x33 */ u8  unk33;
    /* 0x34 */ u8  unk34;
    /* 0x35 */ u8  unk35;
    /* 0x36 */ u8  unk36;
    /* 0x37 */ u8  unk37;
    /* 0x38 */ u8  unk38;
    /* 0x39 */ u8  unk39;
} Struct1510A930;

extern void *D_800917EC;
extern f32 D_800A26A0;
struct102 *func_15169968(Struct1510A930 *);

void func_1510A930(s32 a0, s32 a1, s32 a2) {
    Struct1510A930 sp24;
    s32 padlo[2];

    sp24.unk0 = &D_800917EC;
    sp24.unk30 = 0xA;
    sp24.unk2C = 0x40;
    sp24.unk2E = 0x20;
    sp24.unk28 = 0x18FC;
    sp24.unk2A = 0x1A12;
    sp24.unk36 = 7;
    sp24.unk39 = 0;
    sp24.unk08 = (a0 << 16) | a1;
    sp24.unk0C = (a2 << 16) | (a0 + a1 + a2);
    sp24.unk10 = 0x2710;
    sp24.unk14 = a0 + a1 + a2;
    sp24.unk18 = 0;
    sp24.unk24 = 0;
    sp24.unk26 = 0;
    sp24.unk31 = 1;
    sp24.unk32 = 0xFF;
    sp24.unk33 = 0xFF;
    sp24.unk34 = 0xFF;
    sp24.unk37 = 0x11;
    sp24.unk35 = 0;
    sp24.unk16 = 0;
    sp24.unk1C = 228.0f;
    sp24.unk20 = D_800A26A0;
    func_15169968(&sp24);
}
