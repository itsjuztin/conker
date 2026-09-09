#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    u8 *unk0;
    s32 unk4;
} struct_game_197C20_0;

typedef struct {
    s32 unk0;
    s32 unk4;
} struct_game_197C20_1;

typedef struct {
    s32 field_0x0;
    char pad_0[0x4];
    u8 field_0x8;
} struct_game_197C20_2;

typedef struct {
    u8 field_0x0;
    char pad_0[0xF];
    struct_game_197C20_2 *field_0x10;
    char pad_1[0x1];
    u8 field_0x15;
    char pad_2[0xA];
    u8 field_0x20;
} struct_game_197C20_3;

extern struct_game_197C20_0 *D_800DD254;
extern struct_game_197C20_0 *D_800DD258;


s32 func_1516A770(u8 *arg0) {
    s32 count = 1;

    while (*arg0 != 0) {
        if (*arg0 == 0xBD) {
            *arg0 = 0;
            count++;
        }
        arg0++;
    }
    return count;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_197C20/func_1516A7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_197C20/func_1516AA70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_197C20/func_1516B6BC.s")

u8 *func_1516C878(struct_game_197C20_1 *arg0, s32 arg1, s16 arg2) {
    u8 *temp_v1;
    u8 *sp0;
    s32 temp_v0;
    s32 temp_a0;

    switch (arg2) {
    case 0:
        temp_v1 = D_800DD254[arg0->unk4].unk0;
        break;
    case 1:
        temp_v1 = D_800DD258[arg0->unk4].unk0;
        break;
    case 2:
        temp_v1 = (u8 *)arg0->unk4;
        break;
    default:
        temp_v1 = sp0;
        break;
    }

    temp_v0 = 0;
    if (arg1 > 0) {
        temp_a0 = temp_v1[0];
        do {
            temp_v0++;
            if (temp_a0 != 0) {
                do {
                    temp_a0 = temp_v1[1];
                    temp_v1++;
                } while (temp_a0 != 0);
            }
            if (temp_a0 == 0) {
                do {
                    temp_a0 = temp_v1[1];
                    temp_v1++;
                } while (temp_a0 == 0);
            }
        } while (temp_v0 != arg1);
    }

    return temp_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_197C20/func_1516C934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_197C20/func_1516CC58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_197C20/func_1516D0CC.s")

void func_1516D2E0(struct_game_197C20_3 *arg0) {
    if ((arg0 != 0) && (arg0->field_0x0 == 0x51)) {
        arg0->field_0x10->field_0x8 = 0;
        func_1516972C((struct102 *)arg0);
        arg0->field_0x15 = 0;
    }
}

void func_1516D328(struct_game_197C20_3 *arg0) {
    if ((arg0 != 0) && (arg0->field_0x0 == 0x51)) {
        arg0->field_0x10->field_0x0 |= 0x100;
        arg0->field_0x10->field_0x0 &= ~0x400;
        arg0->field_0x20 = arg0->field_0x10->field_0x8;
    }
}

u8 *func_1516D378(struct_game_197C20_3 *arg0) {
    if ((arg0 != 0) && (arg0->field_0x0 == 0x51)) {
        arg0->field_0x10->field_0x0 |= 0x100;
        arg0->field_0x10->field_0x0 &= ~0x400;
        return (u8 *)arg0;
    }
    return 0;
}

s32 func_1516D3C4(u8 *arg0) {
    s32 *temp;

    if ((arg0 != 0) && (*arg0 == 0x51)) {
        temp = *(s32 **)(arg0 + 0x10);
        *temp |= 0x500;
        return (s32)arg0;
    }
    return 0;
}
