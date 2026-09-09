#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_1509BFB0(s32 num, s32, s32, ...);
s32 func_15123934(struct108 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_151239CC(struct108 *arg0, s32 arg1);
s32 func_1509BE40();
void func_151254F4(struct108 *arg0, s32 arg1);
extern f32 D_800A1480;
extern s32 D_80088A90;
void func_150EB1C0(struct108 *arg0)
{
  s32 temp1;
  s32 temp2;
  f32 temp3;
  f32 temp4;
  temp1 = func_1509BE40(0, func_1509BE40(0, 0x2006, 0xB7) | 0x2000, 0xBC);
  temp2 = func_1509BE40(0, 0x2000, 0xBB);
  if ((0 != temp1) && (temp2 != 0))
  {
    func_1509BFB0(0, 0x405D, 1);
    func_1509BFB0(0, 0x405E, 1);
    func_1509BFB0(0, 0x405F, 1);
    func_1509BFB0(0, 0x4060, 1);
    func_1509BFB0(0, 0x4061, 1);
    if (arg0->unk2C == 0x100)
    {
      return;
    }
    if (arg0->unk6C8 == 0)
    {
      if (func_15123934(arg0, 8, 0, 0, 3) != 0)
      {
        arg0->unk84 |= 0x01100004;
        arg0->unk84 &= ~2;
        arg0->unk674 = 0.0f;
        func_151254F4(arg0, arg0->unk3D0->unk65 - 1);
        arg0->unk5F0 |= 0x10;
      }
      temp3 = (arg0->unk374 = D_800A1480);
      temp4 = 180.0f;
      arg0->unk134 = 0;
      arg0->unk348 = (arg0->unk34C = 320.0f);
      arg0->unk190 = temp4;
      D_80088A90 = 1;
      func_1509BFB0(0, 0x405C, 0);
      return;
    }
  }
  else
  {
    if (func_151239CC(arg0, 3) != 0)
    {
      arg0->unk190 = 0.0f;
      func_151254F4(arg0, arg0->unk23D);
      arg0->unk5F0 &= ~0x10;
      arg0->unk674 = 0.0;
      D_80088A90 = 0;
    }
    func_1509BFB0(0, 0x405C, 1);
    if (1)
    {
      func_1509BFB0(0, 0x405D, 0);
      func_1509BFB0(0, 0x405E, 0);
      func_1509BFB0(0, 0x405F, 0);
      func_1509BFB0(0, 0x4060, 0);
    }
    func_1509BFB0(0, 0x4061, 0);
    if (func_1509BE40(1, 0x4040, 6, 0x9000) != 0)
    {
      arg0->unk84 = arg0->unk84 | 0x80;
    }
    else
    {
      arg0->unk84 &= ~0x80;
    }
  }
}

