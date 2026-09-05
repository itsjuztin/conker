#include <ultra64.h>

#include "functions.h"
#include "variables.h"

void func_151D3354(struct224 *arg0);
void func_151D3308(struct224 *arg0);

void func_151D2AB0(s32 arg0) {
    u32 tmp;

    (&D_800E0950)[arg0] = (&D_800E0950)[arg0] + 1;

    if ((&D_800E0950)[arg0] < 2) {
        D_800E0990[arg0] = func_1502B5C8(&tmp, 2, 9, D_800AB140[arg0]);
        D_800E0968[arg0] = tmp >> 4;
    }
}

void func_151D2B4C(s32 arg0) {
    if ((&D_800E0950)[arg0] != 0) {
        (&D_800E0950)[arg0] = (&D_800E0950)[arg0] - 1;
        if ((&D_800E0950)[arg0] == 0) {
            func_100043B4(D_800E0990[arg0], 4);
        }
    }
}

typedef struct { s32 a[9]; } struct_36b;
s32 func_15167A68(s32, s32, s32, s32, s32, s32);
typedef struct { s32 a[3]; } struct_12b;
typedef struct { s32 a[1]; } struct_4b;
struct224 *func_151D2BA4(s32 arg0, struct00 *arg1, s32 arg2, u8 arg3, s32 arg4) {
    struct224 *tmp = func_15167A68(0x3D, arg4, arg2 + 0x48, 1, arg3, 1);

    if (tmp == 0) {
        return 0;
    }

    memcpy(&tmp->unk10, arg0, 36);
    
    *(struct_12b*)&tmp->unk34 = *(struct_12b*)arg1;

    func_151D3308(tmp);
    return tmp;
}

#define S_U8(ptr, offset)  (*(u8*)((u8*)(ptr) + (offset)))
#define S_S8(ptr, offset)  (*(s8*)((u8*)(ptr) + (offset)))
#define S_S16(ptr, offset) (*(s16*)((u8*)(ptr) + (offset)))
#define S_S32(ptr, offset) (*(s32*)((u8*)(ptr) + (offset)))
#define S_U32(ptr, offset) (*(u32*)((u8*)(ptr) + (offset)))
#define S_PTR(ptr, offset) (*(void**)((u8*)(ptr) + (offset)))

extern void (*D_8008FC48[])(struct224*, struct_12b*);
extern s32 (*D_8008FC40[])(struct224*, struct_12b*);
extern void func_15143134(void*, void*, void*);

typedef struct {
    u8 pad0[0x10];
    void *unk10;
    u8 unk14;
    u8 pad15[0xB];
    s16 unk20;
    u8 pad22[0x2];
    u8 unk24;
    u8 unk25;
    s16 unk26;
    u8 unk28;
    s8 unk29;
    s8 unk2A;
    u8 pad2B;
    s32 unk2C;
    void *unk30;
    struct_12b unk34;
} struct_1FFF60_node;

void func_151D2C40(struct_1FFF60_node *arg0) {
    void *temp_v0;
    struct_12b sp28;
    void *temp_v1;

    temp_v0 = arg0->unk10;
    if (S_U32(temp_v0, 0) == 0 || S_U8(temp_v0, 4) == 0xFF || arg0->unk14 != S_U8(temp_v0, 0x3B) || (temp_v1 = S_PTR(temp_v0, 0x1D4)) == 0 || (S_U8(temp_v0, 0x74) & 0xF) == 0xF) {
        func_1516972C((struct224 *)arg0);
        return;
    }

    func_15143134((u8 *)arg0 + 0x18, &sp28, (u8 *)temp_v1 + (arg0->unk24 << 6));

    if (arg0->unk28 & 1) {
        arg0->unk26 -= D_800BE9E4;
        if (arg0->unk26 < 0) {
            if (arg0->unk2A != -1) {
                D_8008FC48[arg0->unk2A]((struct224 *)arg0, &sp28);
            }
            arg0->unk2C = 0;
            func_1516972C((struct224 *)arg0);
            return;
        }
    }

    if (arg0->unk29 != -1) {
        if (D_8008FC40[arg0->unk29]((struct224 *)arg0, &sp28) == 0) {
            func_1516972C((struct224 *)arg0);
            return;
        }
    }

    arg0->unk34 = sp28;
}

void func_151D2DAC(struct102 *arg0) {
    func_151D3354(arg0);
}

void func_151D2DCC(struct102 *arg0) {
    struct102 *tmp = arg0;

    func_151D2DAC(tmp);

    if (tmp->unk2C != 0) {
        func_1516972C(tmp->unk2C);
    }
    func_15169804(tmp);
}

void func_151D2E14(struct102 *arg0) {
    struct102 *tmp = arg0;

    func_151D2DAC(tmp);

    if (tmp->unk2C != 0) {
        func_1516979C(tmp->unk2C);
    }
    func_15169824(tmp);
}

void func_151D2E5C(struct224 *arg0, struct223 *arg1, u8 arg2) {
    s32 *new_var;

    if (arg2 == 0) {
        s32 tmp0;
        s32 tmp1;
        s32 tmp2;
        s32 tmp3;

        tmp0 = arg0->unk10;
        tmp1 = arg0->unk14;
        tmp2 = arg1->unk4.ub;
        tmp3 = arg1->unk0;
        if ((tmp0 == tmp3) || (tmp2 == tmp1)) {
            func_1516972C(arg0);
        }
        return;
    }
    new_var = &arg0->unk10;
    if (arg2 != 0x2D) {
        return;
    }
    {
        s32 unk0 = arg1->unk0;

        if (unk0 == (*new_var)) {
            arg0->unk10 = arg1->unk4.w;
            arg0->unk14 = arg1->unk9;
            return;
        }
        if (arg1->unk4.w == (*new_var)) {
            arg0->unk10 = unk0;
            arg0->unk14 = arg1->unk8;
        }
    }
}

struct224 *func_151D2F00(void *arg0, s32 arg1, u8 arg2, struct224 *arg3) {
    struct224 *tmp = func_15167A68(0x3E, arg3, arg1 + 0x30, 1, arg2, 1);
    
    if (tmp == 0) {
        return 0;
    }
    
    memcpy(&tmp->unk10, arg0, 0x10);
    tmp->unk20 = 0;
    tmp->unk24 = 0;
    tmp->unk28 = 0;
    tmp->pad15[3] &= ~2;
    
    return tmp;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D2F90.s")

extern void (*D_8008FC5C[])(struct102 *);
extern void func_1514EDF0(struct102 *, void *);

void func_151D3130(struct102 *arg0) {
    struct224 *curr;
    struct224 *next;
    void (*func)(struct102 *);
    u32 neg_one;

    func = D_8008FC5C[S_U8(arg0, 0x1D)];
    if (func != NULL) {
        func(arg0);
    }

    neg_one = -1;
    curr = (struct224 *)S_PTR(arg0, 0x24);
    if (curr != NULL) {
        do {
            s8 unk2A = S_S8(curr, 0x2A);
            next = curr->unk40;
            if (neg_one != unk2A) {
                D_8008FC48[unk2A](curr, (struct_12b *)&curr->unk34);
            }
            S_S32(curr, 0x2C) = 0;
            func_1516972C(curr);
            curr = next;
        } while (curr != NULL);
    }

    func_1514EDF0(arg0, S_PTR(arg0, 0x10));
}

void func_151D31F4(struct102 *arg0) {
    func_151D3130(arg0);
    func_15169804(arg0);
}

void func_151D3220(struct102 *arg0) {
    func_151D3130(arg0);
    func_15169824(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_1FFF60/func_151D324C.s")

void func_151D3308(struct224 *arg0) {
    struct224 *temp_v0;
    struct224 *temp_v1;

    temp_v0 = arg0->unk30;
    if (temp_v0 != 0) {
        arg0->unk40 = temp_v0->unk24;
        temp_v1 = temp_v0->unk24;
        if (temp_v1 != 0) {
            temp_v1->unk44 = arg0;
        } else {
            temp_v0->unk28 = arg0;
        }
        arg0->unk44 = 0;
        temp_v0->unk24 = arg0;
        temp_v0->unk20 += 1;
        arg0->unk30 = temp_v0;
    }
}

void func_151D3354(struct224 *arg0) {
    struct224 *temp_v0;
    struct224 *temp_v1;
    struct224 *temp_v2;

    if (arg0->unk30) {
        temp_v0 = arg0->unk30;
        if (temp_v1 = arg0->unk44) {
            temp_v1->unk40 = arg0->unk40;
        } else {
            temp_v0->unk24 = arg0->unk40;
        }

        if (temp_v2 = arg0->unk40) {
            temp_v2->unk44 = arg0->unk44;
        } else {
            temp_v0->unk28 = arg0->unk44;
        }

        temp_v0->unk20 -= 1;
    }
}

void func_151D33B8(struct224 *arg0) {
    while (arg0->unk20 > 0) {
        func_1516972C(arg0->unk24);
    };
}

void func_151D33FC(struct224 *arg0, struct223 *arg1) {
    s32 tmp0;
    s32 tmp1;
    s32 tmp2;
    s32 tmp3;

    tmp0 = arg0->unk10;
    tmp1 = arg0->unk14;
    tmp2 = arg1->unk4.ub;
    tmp3 = arg1->unk0;
    if ((tmp0 == tmp3) || (tmp2 == tmp1)) {
        func_1516972C(arg0);
    }
}

void func_151D343C(s32 arg0, u8 arg1) {
    struct_4b sp1C;
    sp1C = *(struct_4b *)D_800AB168;
    func_15169260(&sp1C, 1, arg0, arg1);
}
