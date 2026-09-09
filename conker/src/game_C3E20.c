#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern u8 D_800D2DC0[];
extern s32 D_800D2E30[];

void func_15096970(void) {
    bzero(D_800D2DC0, 0x6C);
    D_800D2DB4 = 0;
}

s32 func_150969A0(s32 arg0) {
    s32 i;

    for (i = 0; i < arg0; i++) {
        if (D_800D2DC0[i * 0x24] != 0) {
            return 1;
        }
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C3E20/func_15096A68.s")

extern u8 D_800C35EA;
extern s32 func_15096A68(s32);

void func_15096D08(void) {
    s32 i;
    u8 *p;

    i = 0;
    if (D_800C35EA != 1) {
        p = D_800D2DC0;
        while (1) {
            if (*p != 0) {
                if (func_15096A68(i) != 0) {
                    break;
                }
            }
            i++;
            p += 0x24;
            if (i == 3) {
                break;
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_C3E20/func_15096D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_C3E20/func_1509759C.s")

void func_15097798(s32 arg0) {
    struct108 *temp_v0;
    struct17 sp20;
    s32 *temp_v1;

    temp_v0 = &D_800DBFF0[arg0];
    if (D_800D2DB4 != 0) {
        func_15048F90((struct17 *)&temp_v0->unk2A4, (struct17 *)&temp_v0->unk2F8, &sp20);
        func_1504917C(&sp20, &sp20);

        temp_v1 = &D_800D2E30[arg0];
        ((struct17 *)&temp_v0->unk2A4)->unk0 += (sp20.unk0 * -2.5f) * (f32)*temp_v1;
        ((struct17 *)&temp_v0->unk2A4)->unk4 += (sp20.unk4 * -2.0f) * (f32)*temp_v1;
        ((struct17 *)&temp_v0->unk2A4)->unk8 += (sp20.unk8 * -2.5f) * (f32)*temp_v1;
        ((struct17 *)&temp_v0->unk2F8)->unk0 += (sp20.unk0 * -2.5f) * (f32)*temp_v1;
        ((struct17 *)&temp_v0->unk2F8)->unk4 += (sp20.unk4 * -2.0f) * (f32)*temp_v1;
        ((struct17 *)&temp_v0->unk2F8)->unk8 += (sp20.unk8 * -2.5f) * (f32)*temp_v1;
    }
}
