#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A34A0;
void func_150495B0(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5);
void func_15123A54(struct108 *arg0);
void func_1512E140(struct108 *arg0);
void func_1512A390(struct108 *arg0);


#pragma GLOBAL_ASM("asm/nonmatchings/game_14F8F0/func_15122440.s")

void func_15122980(struct108 *arg0) {
    struct17 sp44;
    struct17 sp38;
    f32 temp_f12;
    f32 temp_f14;

    if (arg0->unkDC != 4) {
        func_15048F90((struct17 *)&arg0->unk2F8, (struct17 *)&arg0->unk2C8, &sp44);
        func_15048F90((struct17 *)&arg0->unk2F8, (struct17 *)&arg0->unk2BC, &sp38);
        temp_f12 = func_15048FC8(&sp44);
        temp_f14 = func_15048FC8(&sp38);
        if (*(s16 *)&arg0->unk298 == 0) {
            *(f32 *)((u8 *)arg0 + 0x8D4) = 0.0f;
        } else {
            if (((arg0->unk84 << 11) < 0) || ((arg0->unk390 > 180.0f) && (arg0->unk390 < 270.0f))) {
                *(f32 *)((u8 *)arg0 + 0x8D4) = 0.75f;
            } else {
                *(f32 *)((u8 *)arg0 + 0x8D4) = 0.5f;
            }
        }

        func_150495B0((f32 *)((u8 *)arg0 + 0x8DC), *(f32 *)((u8 *)arg0 + 0x8D4), (f32 *)((u8 *)arg0 + 0x8D8), 1.0f, 2.0f, arg0->unk7B4);
        arg0->unk37C += func_15048A70(temp_f12, temp_f14) * *(f32 *)((u8 *)arg0 + 0x8DC);
        arg0->unk39C = arg0->unk37C * D_800A34A0;
    }

    func_15123A54(arg0);
    func_1512E140(arg0);
    func_1512A390(arg0);
}
