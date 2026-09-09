#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_1D43B0/func_151A6F00.s")

struct S151A73EC {
    s32 unk0;
    void *unk4;
};
s32 func_151A73EC(void *arg0) {
    struct S151A73EC *p = (struct S151A73EC *)((u8 *)arg0 + 0x170);
    if (*(s16 *)((u8 *)arg0 + 0x64) < 0x20) {
        if (p->unk4 != 0) {
            func_1516972C((struct102 *)p->unk4);
            p->unk4 = 0;
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1D43B0/func_151A743C.s")

u8 func_150ADA20(void);
f32 func_150ADA68(void);
extern f32 D_800BE9A8;
extern f32 D_800A8DC8;
extern f32 D_800A8DCC;
extern f32 D_800A8DD0;
void func_151A26EC(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, s32 argD, s32 argE, s32 argF, s32 arg10);
void func_151A7610(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 *arg6)
{
  f32 sp8C[3];
  f32 sp80[3];
  f32 sp74[3];
  f32 r;
  f32 sp6C;
  struct 
  {
    f32 a;
    f32 b;
    u32 c;
    u32 pad0;
    u32 pad1;
  } sp58;
  f32 dt;
  sp6C = *((f32 *) (arg6 + 0x40));
  sp8C[0] = arg0;
  sp8C[1] = arg1;
  sp8C[2] = arg2;
 do { } while (0);
  if (dt && dt)
  {
  }
  r = func_150ADA68();
  dt = D_800BE9A8;
  r = (r * 166.0f) + 160.0f;
  sp74[0] = 0.0f;
  sp74[1] = 0.0f;
  sp74[2] = 0.0f;
  r *= D_800A8DC8;
  sp80[0] = ((-arg3) * dt) * r;
  sp80[1] = ((-arg4) * dt) * r;
  sp80[2] = ((-arg5) * dt) * r;
  sp58.a = func_150ADA68();
  sp58.b = func_150ADA68();
  sp58.c = func_150ADA20();
  func_151A26EC(sp8C, sp74, sp80, 1.0f, ((sp58.a * D_800A8DCC) + (-600.0f)) * D_800A8DD0, ((sp58.b * 500.0f) + 400.0f) * sp6C, (sp58.c % 21U) + 15, (func_150ADA20() % 101U) + 100, 15, 20, 0, -1, 86, 39, 0, arg6[0xC], arg6[1]);
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_1D43B0/func_151A77C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_1D43B0/func_151A787C.s")

struct S151A7908 {
    s32 unk0;
    void *unk4;
};
void func_151A7908(void *arg0) {
    struct S151A7908 *p = (struct S151A7908 *)((u8 *)arg0 + 0x170);
    if (p->unk4 != 0) {
        func_1516972C((struct102 *)p->unk4);
        p->unk4 = 0;
    }
}
