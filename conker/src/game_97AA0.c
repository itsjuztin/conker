#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_80099A28;
struct225 *func_151602C0(Header *, Header2 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern f32 D_80099A10;
extern f32 D_80099A14;
extern f32 D_80099A18;
extern f32 D_80099A1C;
extern f32 D_80099A20;
extern f32 D_80099A24;
extern void func_151A6F00(void *, s32, u8, s32);
struct struct1506A5F0
{
  s16 unk00;
  u8 pad02[2];
  struct17 unk04;
  s16 unk10;
  u8 pad12[2];
  f32 unk14;
  s16 unk18;
  s16 unk1A;
  s16 unk1C;
  s16 unk1E;
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
  f32 unk50;
  s8 unk54;
  s8 unk55;
  s16 unk56;
  s16 unk58;
};
void func_1506A5F0(struct127 *arg0, s32 arg1)
{
  struct struct1506A5F0 sp1C;
  sp1C.unk00 = 3;
  sp1C.unk04.unk0 = arg0->x_position;
  sp1C.unk04.unk4 = arg0->y_position;
  sp1C.unk04.unk8 = arg0->z_position;
  sp1C.unk14 = D_80099A10;
  sp1C.unk20 = D_80099A14;
  sp1C.unk24 = D_80099A18;
  sp1C.unk10 = 0x5A;
  sp1C.unk18 = 0;
  sp1C.unk1A = 0xFF;
  sp1C.unk1C = -0x40;
  sp1C.unk1E = 0x28;
  sp1C.unk30 = 0.0f;
  sp1C.unk34 = 0.0f;
  sp1C.unk38 = 0.0f;
  sp1C.unk54 = 0;
  sp1C.unk55 = 0;
  sp1C.unk56 = 0x32;
  sp1C.unk58 = 0x19;
  sp1C.unk3C = D_80099A1C;
  sp1C.unk40 = D_80099A20;
  sp1C.unk44 = D_80099A24;
  sp1C.unk48 = (f32) ((s16) 0);
  sp1C.unk4C = -4.0f;
  sp1C.unk50 = 8.0f;
  func_151A6F00(&sp1C, 1, 0xFF, 1);
}


s32 func_150E0348(s32, s32, s32);

s32 func_1506A6FC(s32 arg0, s32 arg1) {
    return func_150E0348(arg0, 0xFF, 1);
}

extern f32 D_800D1560[3];
extern f32 D_800D1570[3];
s32 func_151BB61C(s32, s32, s32, s32, s32);

s32 func_1506A724(s32 arg0, s32 arg1) {
    return func_151BB61C(arg0, (s32)&D_800D1560, (s32)&D_800D1570, 0xFF, 1);
}

s32 func_151BBA9C(s32, s32, s32, s32, s32);

s32 func_1506A760(s32 arg0, s32 arg1) {
    return func_151BBA9C(arg0, (s32)&D_800D1560, (s32)&D_800D1570, 0xFF, 1);
}

void func_151D3480(f32 *, f32 *, s32, s32, s32, s32);

void func_1506A79C(struct127 *arg0, s32 arg1) {
    f32 sp2C[3];
    f32 sp20[3];

    sp2C[0] = arg0->x_position;
    sp2C[1] = arg0->y_position;
    sp2C[2] = arg0->z_position;
    sp20[0] = D_800D1570[0] - D_800D1560[0];
    sp20[1] = D_800D1570[1] - D_800D1560[1];
    sp20[2] = D_800D1570[2] - D_800D1560[2];
    func_151D3480(sp2C, sp20, 0, 0, 0xFF, 1);
}

s32 func_151BC104(s32, s32, s32);

s32 func_1506A83C(s32 arg0, s32 arg1) {
    return func_151BC104(arg0, 0xFF, 1);
}

void func_1506A864(struct127 *arg0, s32 arg1) {
    struct225 *temp_v0;
    Header header;
    struct {
        f32 unk0;
        f32 unk4;
        f32 unk8;
        f32 unkC;
    } sp44;
    Header2 header2;

    header2.unk0 = (s32)arg0->x_position;
    header2.unk4 = (s32)(arg0->y_position + 50.0f);
    header2.unk8 = (s32)arg0->z_position;
    sp44.unk0 = 0.0f;
    sp44.unk8 = 0.0f;
    header.unk0 = 2;
    header.unk1 = 0xF;
    header.unk2 = 0x12C;
    header.unk4 = 5;
    sp44.unk4 = 80.0f;
    sp44.unkC = D_80099A28;

    temp_v0 = func_151602C0(&header, &header2, 0, 0xFF, 0xFF, 0x5A, 0xFF, 0, 0x10, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy(&temp_v0->unk18, &sp44, 0x10);
    }
}

void func_1506A968(struct127 *arg0, s32 arg1) {
    f32 sp2C[3];
    f32 sp20[3];

    sp2C[0] = arg0->x_position;
    sp2C[1] = arg0->y_position;
    sp2C[2] = arg0->z_position;
    sp20[0] = D_800D1570[0] - D_800D1560[0];
    sp20[1] = D_800D1570[1] - D_800D1560[1];
    sp20[2] = D_800D1570[2] - D_800D1560[2];
    func_151D3480(sp2C, sp20, 0, 1, 0xFF, 1);
}

s32 func_151B7144(s32, s32, s32);
s32 func_151B6320(s32, s32, s32);

s32 func_1506AA08(s32 arg0, s32 arg1) {
    func_151B7144(arg0, 0xFF, 1);
    return func_151B6320(arg0, 0xFF, 1);
}

struct s1506AA48 {
    s32 unk0;
    s32 unk4;
};

void func_1506AA48(struct127 *arg0, struct s1506AA48 *arg1) {
    struct260 *temp_v0;
    struct {
        struct127 *unk0;
        u8 unk4;
        struct s1506AA48 unk8;
    } sp34;

    sp34.unk0 = arg0;
    sp34.unk4 = arg0->unique_id;
    sp34.unk8 = *arg1;

    temp_v0 = func_15149130(0xA, 0x7, 0x23, -1, 1, 0x21, (struct37 *)0x10, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp34, 0x10);
    }
}

extern s32 D_800CC260;
void func_15137610(struct127 *, s32, s32, s32, s32, s32);

void func_1506AAE0(s32 arg0, s32 arg1) {
    s32 mask;
    struct127 *ptr;

    mask = D_800CC260;
    ptr = &D_800CC2D0[0];
    while (mask != 0) {
        if (mask & 1) {
            func_15137610(ptr, (s32)&D_800D1560, (s32)&D_800D1570, 0, 0xFF, 1);
        }
        mask >>= 1;
        ptr++;
    }
}

void func_15103E40(struct127 *, struct127 *, struct17 *, u8, u8, u8, u8);

struct struct1506AB7C {
    /* 0x00 */ struct127 *unk0;
    /* 0x04 */ struct17 unk4;
    /* 0x10 */ s32 unk10;
};

void func_1506AB7C(s32 arg0, struct struct1506AB7C *arg1) {
    func_15103E40(arg0, arg1->unk0, &arg1->unk4, 1, arg1->unk10, 0xFF, 1);
}

void func_1506ABC4(s32 arg0, struct struct1506AB7C *arg1) {
    func_15103E40(arg0, arg1->unk0, &arg1->unk4, 2, arg1->unk10, 0xFF, 1);
}

s32 func_151B7328(void *, s32, s32, s32, s32);

struct struct1506AC0C {
    /* 0x00 */ s32 *unk0;
    /* 0x04 */ u8 unk4;
};

void func_1506AC0C(s32 *arg0, s32 arg1) {
    struct struct1506AC0C sp20;
    sp20.unk0 = arg0;
    sp20.unk4 = *(u8 *)((s32)arg0 + 0x3B);
    func_151B7328(&sp20, 0, 8, 0xFF, 1);
}

s32 func_151CEAAC(s32, s32, s32, s32, s32);

s32 func_1506AC58(s32 arg0, s32 arg1) {
    return func_151CEAAC(arg0, 0, 1, 0xFF, 1);
}

extern f32 D_800CC254;
extern f32 D_800CC258;
extern f32 D_800CC25C;
extern void (*D_80086110[])(struct127 *, s32);

void func_1506AC8C(struct127 *arg0, s32 arg1, s32 arg2) {
    if (arg1 >= 0 && arg1 < 0xF) {
        D_800D1560[0] = *(f32 *)((s32)arg0 + 0x2C);
        D_800D1560[1] = *(f32 *)((s32)arg0 + 0x30);
        D_800D1560[2] = *(f32 *)((s32)arg0 + 0x34);
        D_800D1570[0] = D_800CC254;
        D_800D1570[1] = D_800CC258;
        D_800D1570[2] = D_800CC25C;
        if (D_80086110[arg1] != NULL) {
            D_80086110[arg1](arg0, arg2);
        }
    }
}
