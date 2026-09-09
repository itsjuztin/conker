#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern u8 D_80084060[];
extern struct17 *func_15144B34(s32);
extern f32 func_15143E64(struct17 *);
extern void (*D_8008FCC0[])(struct102 *);
void func_1501C010(u8, u8);
void func_1501C17C(u8);

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    u8 unk18;
} Struct151D8C00;

s32 func_151D87E0(u8 arg0) {
    u8 v;
    u8 i;

    for (i = 0; i < 4; i++) {
        if (arg0 & (1 << i)) {
            v = D_80084060[i];
            if (v >= 4) {
                return 0;
            }
            if (D_800BE944[v] != 0) {
                return 1;
            }
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_205C90/func_151D8868.s")

void func_151D8A24(struct102 *arg0) {
    u8 dummy[4];
    s32 temp;
    u8 i;
    s32 index;

    ((u8 *)&temp)[3] = 0;
    if (arg0->unkE & 1) {
        arg0->unk10 -= D_800BE9E4;
        if (arg0->unk10 < 0) {
            ((u8 *)&temp)[3] = 1;
        }
    }

    index = *(s8 *)&arg0->unk14;
    if (index != -1) {
        D_8008FCC0[index](arg0);
    }

    if (arg0->unk12 != ((u8 *)arg0)[0x16]) {
        for (i = 0; i < 4; i++) {
            if (arg0->unk13 & (1 << i)) {
                func_1501C17C(i);
                func_1501C010(i, arg0->unk12);
            }
        }
        ((u8 *)arg0)[0x16] = arg0->unk12;
    }

    if (((u8 *)&temp)[3] != 0) {
        func_1516972C(arg0);
    }
}

void func_1501C17C(u8);
void func_151D8B24(struct102 *arg0)
{
  s32 i;
  s32 j;
  i = 0;
  j = 0;
  do
  {
    if (arg0->unk13 & (1 << j))
    {
      func_1501C17C((u8) i);
    }
    i++;
    j = (i = (u8) i);
  }
  while (j < 4);
}

void func_151D8B24(struct102 *);


void func_151D8B24(struct102 *);

void func_151D8B88(struct102 *arg0) {
    func_151D8B24(arg0);
    func_15169804(arg0);
}

void func_151D8BB4(struct102 *arg0) {
    func_151D8B24(arg0);
    func_15169824(arg0);
}

void func_151D8C00(u8 *, Struct151D8C00 *);

void func_151D8BE0(u8 *arg0) {
    func_151D8C00(arg0, arg0 + 0x18);
}

void func_151D8C00(u8 *arg0, Struct151D8C00 *arg1) {
    f32 temp_f12;
    struct17 sp28;
    struct17 *temp_v0;
    f32 temp_f0;

    temp_v0 = func_15144B34(arg1->unk18);
    sp28.unk0 = arg1->unk0 - temp_v0->unk0;
    sp28.unk4 = arg1->unk4 - temp_v0->unk4;
    sp28.unk8 = arg1->unk8 - temp_v0->unk8;

    temp_f0 = func_15143E64(&sp28);
    if (temp_f0 < arg1->unkC) {
        temp_f12 = 1.0f;
    } else if (arg1->unkC + arg1->unk10 < temp_f0) {
        temp_f12 = 0.0f;
    } else {
        temp_f12 = 1.0f - (temp_f0 - arg1->unkC) * arg1->unk14;
    }

    arg0[0x12] = (u32)(temp_f12 * 8.0f);
}

void func_151D8D5C(struct102 *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 0x58) {
        func_1516972C(arg0);
    } else if (arg2 == 0x47) {
        func_1516972C(arg0);
    }
}

extern f32 D_800AB300;

void func_151D8DB4(s32 arg0, u8 arg1) {
    func_15169260(&D_800AB300, 1, arg0, arg1);
}

extern u8 D_800E0A00;

void func_151D8DE8(void) {
    D_800E0A00 = 1;
    func_151D8DB4(0, 0x58);
}
