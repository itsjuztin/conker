#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void *func_15167A68(s32, s32, s32, s32, s32, s32);

struct sub150C0AC0 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
};

struct s150C0AC0_arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s16 unk14;
    s16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
};

struct s150C0AC0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
    struct s150C0AC0_arg unk18;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    struct sub150C0AC0 *unk40;
    s16 unk44;
    s16 unk46;
};


void func_150C09B0(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, (u8)arg2, arg0 + 0x20, arg0 + 0x24, arg0);
}

extern void func_150C0A48(struct102 *);

void func_150C09F0(struct102 *arg0) {
    func_150C0A48(arg0);
    func_15169804(arg0);
}

extern void func_15169824(struct102 *);

void func_150C0A1C(struct102 *arg0) {
    func_150C0A48(arg0);
    func_15169824(arg0);
}

struct sub150C0A48 {
    struct102 *unk0;
    s16        unk4;
};

struct s150C0A48 {
    u8 pad0[0x40];
    struct sub150C0A48 *unk40;
    s16 unk44;
};

void func_150C0A48(struct102 *arg0x) {
    struct s150C0A48 *arg0 = (struct s150C0A48 *)arg0x;
    s16 i;

    i = arg0->unk44;
    while (i != -1) {
        func_1516972C(arg0->unk40[i].unk0);
        i = arg0->unk40[i].unk4;
    }
}

struct s150C0AC0 *func_150C0AC0(struct s150C0AC0_arg *arg0, s32 arg1, s32 arg2) {
    struct s150C0AC0 *ret;
    s32 size;
    s16 i;
    s32 *ptr;

    size = (arg0->unk14 * 8) + 0x48;
    if ((arg0->unk18 & 2) == 0) {
        ptr = (s32 *)arg0->unk8;
        if (ptr == NULL) {
            return NULL;
        }
        if (*ptr == 0) {
            return NULL;
        }
    }

    ret = func_15167A68(0x25, arg2, size, 1, (u8)arg1, 1);
    if (ret == NULL) {
        return NULL;
    }

    memcpy(&ret->unk18, arg0, 0x1C);
    ret->unk40 = (struct sub150C0AC0 *)((u8 *)ret + 0x48);
    if (arg0->unk18 & 2) {
        ptr = (s32 *)ret->unk18.unk0;
        ret->unk34 = *(f32 *)((u8 *)ptr + 0);
        ret->unk38 = *(f32 *)((u8 *)ptr + 8);
    } else {
        ptr = (s32 *)ret->unk18.unk8;
        ret->unk34 = *(f32 *)((u8 *)ptr + 0x14);
        ret->unk38 = *(f32 *)((u8 *)ptr + 0x1C);
    }
    ret->unk3C = 0.0f;
    ret->unk44 = -1;
    ret->unk46 = 0;
    for (i = 0; i < arg0->unk14 - 1; i++) {
        ret->unk40[i].unk4 = i + 1;
    }
    ret->unk40[arg0->unk14 - 1].unk4 = -1;
    ret->unk10 = 1;
    ret->unk14 = 0;
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_EDE60/func_150C0C38.s")

struct s150C1198 {
    u8 pad0[0xA8];
    struct s150C1198List *unkA8;
};

struct s150C1198List {
    u8 pad0[0x40];
    struct sub150C0A48 *unk40;
    s16 unk44;
    s16 unk46;
};

void func_150C1198(struct s150C1198 *arg0) {
    struct s150C1198List *temp;
    s32 found;
    s16 prev;
    s16 idx;

    temp = arg0->unkA8;
    found = 0;
    prev = -1;
    idx = temp->unk44;
    while ((idx != -1) && (found == 0)) {
        if ((struct102 *)arg0 == temp->unk40[idx].unk0) {
            found = 1;
        } else {
            prev = idx;
            idx = temp->unk40[idx].unk4;
        }
    }

    if (found) {
        if (idx == temp->unk44) {
            temp->unk44 = temp->unk40[idx].unk4;
        } else {
            temp->unk40[prev].unk4 = temp->unk40[idx].unk4;
        }
        temp->unk40[idx].unk4 = temp->unk46;
        temp->unk46 = idx;
    }
}
