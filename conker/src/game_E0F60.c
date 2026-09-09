#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void func_151429E0(u8, u8 *, u8 *, u8 *);
extern void func_15156190(void *, u8, s32, u8, s32);
extern void func_15156388(void *, u8, s32);
extern void func_15143134(void *, f32 *, s32);
extern void func_1514C858(f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_151D3FF4(f32 *, u8, s32);
extern void func_151D8868(void *, s32, s32, s32);
extern f32 D_8009FBC0;
extern f32 D_8009FBCC;
extern f32 D_8009FBD0;
extern f32 D_8009FBD4;
extern f32 D_8009FBD8;
extern f32 D_8009FBDC;
extern f32 D_8009FBE0;

typedef struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    s8 unk6;
    u8 unk7;
} struct_150B3AB0_sp48;

void func_150B3AB0(struct127 *arg0, u8 arg1) {
    s16 sp5E;
    f32 sp50[3];
    struct_150B3AB0_sp48 sp48;

    if ((arg0 != NULL) && (arg0->unk1D4 != NULL)) {
        func_1512D748(&D_800DBFF0[D_800BE9E8], 6, 1);
        sp5E = (arg0->unk7A >> 8) + 0x40;
        func_15143134(&D_8009FBC0, sp50, (s32)arg0->unk1D4 + 0x640);
        func_1514C858(sp50[0], sp50[1], sp50[2], 10.0f, sp5E, 0, 0xFF,
                      (func_150ADA20() % 31U) + 0x28, 8, 0, 0.0f, 0, ((u8 *)&arg1)[0]);

        sp48.unk0 = 1;
        sp48.unk2 = (func_150ADA20() & 0xF) + 0xC;
        sp48.unk4 = (func_150ADA20() & 3) + 5;
        sp48.unk6 = -1;
        sp48.unk5 = 1;
        func_151D8868(&sp48, 0, ((u8 *)&arg1)[0], 0);
        func_151D3FF4(sp50, ((u8 *)&arg1)[0], 0);
    }
}

s32 func_150B3C0C(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5,
                  s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11,
                  s32 arg12, s32 arg13, u8 arg14) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 temp_f2;
    u8 sp24[0x3C];

    arg0 = arg9 - 0x40;
    sp6C = func_151423D8(arg0);
    sp68 = func_151423D8((u8)arg9);
    arg0 = arg8 - 0x40;
    sp64 = func_151423D8(arg0);
    temp_f2 = func_151423D8((u8)arg8);
    temp_f2 = 10.0f * temp_f2;
    *(f32 *)&sp24[0x00] = arg2;
    *(f32 *)&sp24[0x04] = arg3;
    *(f32 *)&sp24[0x08] = arg4;
    *(f32 *)&sp24[0x0C] = temp_f2 * sp6C;
    *(f32 *)&sp24[0x10] = -10.0f * sp64;
    *(f32 *)&sp24[0x14] = temp_f2 * sp68;

    *(f32 *)&sp24[0x18] = (func_150ADA68() * D_8009FBCC) + D_8009FBD0;
    *(f32 *)&sp24[0x1C] = (func_150ADA68() * D_8009FBD4) + D_8009FBD8;
    func_151429E0(8, &sp24[0x20], &sp24[0x21], &sp24[0x22]);
    func_151429E0(8, &sp24[0x24], &sp24[0x25], &sp24[0x26]);
    sp24[0x23] = 0xFF;
    sp24[0x27] = 0xFF;
    sp24[0x28] = 9;
    *(s16 *)&sp24[0x2A] = (func_150ADA20() & 0xF) + 0xF;

    *(f32 *)&sp24[0x30] = (func_150ADA68() * D_8009FBDC) + D_8009FBE0;
    *(s16 *)&sp24[0x2C] = 0x1601;
    sp24[0x34] = 0xFF;
    *(s16 *)&sp24[0x36] = 0xA;
    *(s16 *)&sp24[0x38] = 0x19;
    func_15156190(sp24, 1, 0, arg14, 1);
    func_15156388(sp24, 1, 0);
    return 1;
}
