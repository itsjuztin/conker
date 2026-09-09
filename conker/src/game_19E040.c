#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A6FC0;
extern f32 D_800A6FC4;
void func_151717FC(struct127 *, f32, f32, f32, f32, f32, s32, s32, s32, s32, f32, s32, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/game_19E040/func_15170B90.s")

extern s32 D_800BE9F0;
void func_15170B90(s32, s32, s32, s32, u8, s32);

void func_15170EC4(s32 arg0, u8 arg1, s32 arg2) {
    switch (D_800BE9F0) {
    case 2:
        func_15170B90(arg0, 1, 1, 1, arg1, arg2);
        break;
    case 0x10:
        func_15170B90(arg0, 0xA9, 8, 0, arg1, arg2);
        break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_19E040/func_15170F4C.s")

extern void func_150C3D5C(struct127 *);

void func_151711C4(struct127 *arg0) {
    if (((u8 *)arg0)[4] == 0x33) {
        func_150C3D5C(arg0);
    }
    func_15060F28(arg0, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_19E040/func_15171200.s")

void func_15171600(struct127 *arg0, s32 arg1, s32 arg2) {
    u8 temp;

    switch (((u8 *)arg0)[0x72]) {
    case 0xEB:
        temp = arg1;
        func_151717FC(arg0, 400.0f, 500.0f, 0.0f, D_800A6FC0, 0.0f, 2, 5, 0x14, 0x14, 1.0f, temp, arg2);
        break;
    case 0xF6:
        temp = arg1;
        func_151717FC(arg0, 200.0f, 400.0f, -1800.0f, -1000.0f, -1200.0f, 2, 5, 4, 0xA, 1.0f, temp, arg2);
        break;
    case 0xF8:
        temp = arg1;
        func_151717FC(arg0, 100.0f, 160.0f, -2500.0f, D_800A6FC4, 0.0f, 2, 5, 4, 4, 0.5f, temp, arg2);
        break;
    case 0xF9:
        temp = arg1;
        func_151717FC(arg0, 200.0f, 100.0f, 100.0f, -300.0f, 0.0f, 1, 5, 4, 4, 1.0f, temp, arg2);
        break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_19E040/func_151717FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_19E040/func_151718F0.s")

extern void func_150AEEB0(void *);
extern void func_150BD740(void *, u8, s32);
extern void func_150CDBB0(void *, u8, s32);

void func_15171BF4(void *arg0, u8 arg1) {
    switch (((u8 *)arg0)[4]) {
    case 0x13:
    case 0x23:
        func_150AEEB0(arg0);
        func_10010154(0x69, arg0, 0x7D00, 0xC8, 0x7D0);
        break;
    case 0x1E:
        func_150BD740(arg0, arg1, 1);
        break;
    case 0x54:
        func_150CDBB0(arg0, arg1, 1);
        break;
    }
}
