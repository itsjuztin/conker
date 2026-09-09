#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern s32 allocate_memory(s32, s32, s32, s32);
extern s32 *D_800C4020[];

struct Src1503D804 {
    u8 pad0[8];
    s16 unk8;
    s16 unkA;
    u8 padC[4];
};

struct Dst1503D804 {
    s16 unk0;
    s16 unk2;
};

struct D800D19A0Header {
    u8 pad_0[0x30];
    u8 *field_0x30;
    u32 field_0x34;
};

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503CF20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503D368.s")

void func_1503D438(s32 *arg0, s32 arg1) {
    s32 temp = *arg0;
    if (temp != 0 && (temp & 0x0F000000) == 0) {
        *arg0 = temp + arg1;
    }
}

void func_1503D45C(s32 *arg0, s32 arg1) {
    s32 temp = *arg0;
    while (temp != 0) {
        *arg0 = temp + arg1;
        temp = arg0[2];
        arg0 += 2;
    }
}

struct Elem1503D484 {
    u16 unk0;
    s32 unk4;
};

void func_1503D484(struct Elem1503D484 *arg0, s32 arg1) {
    struct Elem1503D484 *p = arg0;

    while (arg0->unk0 != 0x3E7) {
        if (arg0->unk4 != 0) {
            func_1503D438(&arg0->unk4, (s32)p);
        }
        arg0++;
    }

    D_800C5A90[arg1] = arg0 - p;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503D510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503D5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503D660.s")

extern struct124 *D_800D1C90[];
struct124 *func_1502B6BC(s32, s32, s32, s32, s32, s32);

s32 func_1503D774(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct124 *r;

    if (D_800D1C90[arg0] != 0) {
        return 0;
    }
    r = func_1502B6BC((s32)&sp2C, 2, 0, 2, 17, arg0);
    if (r == 0) {
        D_800D1C90[arg0] = 0;
        return 2;
    } else {
        D_800D1C90[arg0] = r;
        D_800D1C90[arg0] = r->unk0;
    }
    return 0;
}

s32 func_1503D804(s32 arg0) {
    s32 count;
    s32 temp_v1;
    struct Src1503D804 *src;
    s32 *slot;

    if (arg0 == 0x24) {
        count = 0x5E;
        temp_v1 = 0;
    } else {
        temp_v1 = -1;
        count = 0;
    }

    if (count == 0) {
        return 0;
    }

    slot = &D_800C6360[arg0];
    if (*slot != 0) {
        return 0;
    }

    src = (struct Src1503D804 *)(&D_800D19A0)[arg0];
    if (temp_v1 != -1) {
        src += D_800C4020[arg0][temp_v1];
    }

    {
        s32 i;

        *slot = allocate_memory(count * sizeof(struct Dst1503D804), 1, 0, 2);
        if (*slot == 0) {
            return 1;
        }

        slot = (s32 *)*slot;
        for (i = 0; i < count; i++) {
            ((struct Dst1503D804 *)slot)[i].unk0 = src[i].unk8;
            ((struct Dst1503D804 *)slot)[i].unk2 = src[i].unkA;
        }
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503D984.s")

s32 func_1503DA3C(s32 arg0, s32 arg1) {
    u8 *v0 = (u8 *)(&D_800D19A0)[arg0];
    struct D800D19A0Header *v1 = (struct D800D19A0Header *)(v0 - 0x38);
    u8 *temp;
    s32 ret;

    if (v0 == 0) {
        return 0xFF;
    }
    if (v1->field_0x34 < (u32)(arg1 + 1)) {
        return 0xFF;
    }
    temp = v1->field_0x30;
    ret = temp ? temp[arg1] : 0xFF;
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503DA9C.s")

extern u16 D_800C5628[];
extern struct E1503DC3C *D_800C5338[];
extern s32 func_1510D0EC(s32, s32, s32, s32);

struct E1503DC3C {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

s32 func_1503DC3C(s32 arg0) {
    s32 ret = 0;
    s32 i = 0;

    if ((s32)D_800C5628[arg0] > 0) {
        struct E1503DC3C *ptr = D_800C5338[arg0];
        s32 j = 0;
        do {
            *(s32 *)((s32)D_800C5338[arg0] + j) = func_1510D0EC(ptr->unk4, 0, 0x3E, 1);
            ptr = (struct E1503DC3C *)((s32)D_800C5338[arg0] + j);
            if (ptr->unk0 == (s32)0x80000000) {
                ret |= 0x10;
            }
            i++;
            j += 0xC;
            ptr++;
        } while (i < (s32)D_800C5628[arg0]);
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_6A3D0/func_1503DD1C.s")
