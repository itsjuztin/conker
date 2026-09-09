#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern struct127 *func_1505EEF4();

#pragma GLOBAL_ASM("asm/nonmatchings/game_CBDB0/func_1509E900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_CBDB0/func_1509ED74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_CBDB0/func_1509EFF0.s")

s32 func_1509F248(s32 arg0, u32 *arg1) {
    if (arg0 != 0) {
        func_100111C8((*arg1 & 0xFFFF0000) >> 16);
    }
    return 1;
}

void func_1509F660(s32 arg0, s32 arg1);
void func_1509F77C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

s32 func_1509F284(s32 arg0, s32 arg1, u32 *arg2) {
    switch (arg1) {
    case 1:
        func_1509F660(arg2[2] & 0xFFF, 0);
        return 1;
    case 0:
        func_1509F660(arg2[2] & 0xFFF, 1);
        return 1;
    case 2:
        func_1509F77C((arg2[0] & 0xFFFF0000) >> 16, arg2[2] & 0xFFF, arg2[3], arg2[4], arg2[5]);
        return 1;
    }
    return 0;
}

s32 func_1509F33C(s32 arg0, s32 arg1, s32 arg2) {
    return 0;
}

s32 func_1509F354(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s32 arg6) {
    struct127 *temp;
    s32 range;
    u8 idx;

    temp = func_1505EEF4(arg4);
    if ((u32)arg3 >= 0x8000U) {
        arg3 = 0x7FFF;
    }
    if (temp == 0) {
        return arg2;
    }
    if (func_10010894(temp) == 0) {
        if (arg2 == 0) {
            arg2 = (u32)-1 >> -(u8)(arg1 - arg0 + 1);
        }
        range = (u8)(arg1 - arg0 + 1);
        do {
            idx = (u8)(func_150ADA20() % (u32)range);
        } while (((1 << idx) & arg2) == 0);

        range = idx;
        if (func_10010344((u16)(idx + arg0), temp, arg3, arg5, arg6) != 0) {
            arg2 ^= 1 << range;
        }
    }
    return arg2;
}

extern s32 func_151149AC(u32);
extern s32 func_1000F568(s32, u8);
extern void func_15114D24(s32, s32, s32, s16, s32, s32);

void func_1509F47C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5) {
    s32 temp;

    temp = func_151149AC(arg3 & 0xFF);
    func_15114D24(temp, func_1000F568(arg0, (u8)(arg1 - arg0 + 1)), arg2, arg4, arg5, 0);
}

void func_10010F88(s32 arg0, u16 arg1, s16 arg2, u8 arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9);
extern struct178 D_800D3098[73];
extern s32 func_1000F568(s32, u8);
void func_1509F4E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  struct178 *e;
  s32 h;
  e = &((struct178 *) (*((s32 *) (&D_800D3098))))[0, arg3];
  h = *((s16 *) (&e->unk6[0]));
  if (((u32) arg4) >= ((u32) h))
  {
    arg4 = h - 1;
  }
  func_10010F88(func_1000F568(arg0, (u8) ((arg1 - arg0) + 1)), (u16) arg2, 0, 0, 0, e->unk0, e->pad2, e->unk4, arg4, h);
}

extern s32 func_1000F568(s32, u8);


extern s32 func_1000F568(s32, u8);

void func_1509F5A8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp;

    temp = func_1000F568(arg0, (u8)(arg1 - arg0 + 1));
    func_10010F30(temp, (u16)arg2, 0x40, 0, 0);
}

void func_1509F5F4(u16 arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4, s32 arg5) {
    struct127 *temp;

    temp = func_1505EEF4(arg2);
    if (temp != 0) {
        if ((arg5 != 0) || (func_10010894(temp) == 0)) {
            func_10010344(arg0, temp, arg1, arg3, arg4);
        }
    }
}

extern struct127 *func_1505EEF4();

void func_1509F660(s32 arg0, s32 arg1) {
    struct127 *temp;

    temp = func_1505EEF4(arg0);
    if (temp != 0) {
        if (arg1 != 0) {
            func_10010A3C(temp);
        } else {
            func_100109D0(temp);
        }
    }
}

void func_1509F6B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_10010F30(arg0, arg1, arg3, arg2, 0);
}

s32 func_1509F6E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct127 *temp;
    s32 x;
    s32 y;
    s32 z;

    temp = func_1505EEF4(arg1);
    if (temp == 0) {
        return 0;
    }
    x = temp->x_position;
    y = temp->y_position;
    z = temp->z_position;
    func_10010F88(arg0, (u16)arg2, 0, 0, 0, x, y, z, arg3, arg4);
}

void func_1509F77C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct127 *temp;
    s32 x;
    s32 y;
    s32 z;

    temp = func_1505EEF4(arg1);
    x = temp->x_position;
    y = temp->y_position;
    z = temp->z_position;
    func_1000F91C((u16)arg0, 0x7FFF, (s16)arg2, 0, 0,
                  x, y, z, arg3, arg4);
}

s32 func_1509F800(s32 arg0, s32 arg1, s32 arg2) {
    arg0 = arg0;
    arg1 = arg1;
    arg2 = arg2;
    return 0;
}

s32 func_1509F818(s32 arg0, s32 arg1, s32 arg2) {
    func_150AD770();
    return 0;
}
