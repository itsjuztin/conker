#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern struct127 *func_1505EEF4(s32);
extern void func_15022190(s16, s16, s16, f32);
extern void func_150221E8(s16, s16, s16, f32);

#pragma GLOBAL_ASM("asm/nonmatchings/game_C98F0/func_1509C440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C98F0/func_1509C7C8.s")

void func_1509C8FC(s32 arg0, s32 arg1) {
    struct127 *temp_v1;
    struct108 *temp_v0;
    f32 temp_f0;

    temp_v1 = func_1505EEF4(arg0 & 0xFFF);
    if (temp_v1 != 0) {
        temp_v0 = D_800DBFF0;
        if (temp_v0->unk2C & 0x100) {
            temp_f0 = *(f32 *)((u8 *)temp_v0 + 0x760);
        } else {
            temp_f0 = temp_v0->unk37C;
        }

        if (arg1 != 0) {
            func_150221E8(temp_v1->x_position, temp_v1->y_position, temp_v1->z_position, temp_f0 + 180.0f);
        } else {
            func_15022190(temp_v1->x_position, temp_v1->y_position, temp_v1->z_position, temp_f0 + 180.0f);
        }
    }
}
