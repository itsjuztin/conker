#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern void func_1511650C(struct131 *arg0, s32, s32, f32);
extern struct131 *func_151149AC(u8);

void func_150C7870(struct131 *arg0) {
    if (!(((u8 *)D_800D2E4C)[0xA] & 8)) {
        if (!(((u8 *)D_800DBEF4)[0x73] & 4)) {
            func_1511650C(arg0, 1, 0x353, 1000.0f);
        } else {
            func_1511650C(arg0, 1, 0x43, 400.0f);
        }
    }
}

typedef struct {
    u8  pad00[0x3C];
    s32 unk3C;
    u8  pad40[0x33];
    u8  unk73;
    u8  pad74[0x16C];
    s32 unk1E0;
    u8  pad1E4[0x38];
    s32 unk21C;
} GameObj150C78E0;

typedef struct {
    u8  pad00[0x3C];
    s32 unk3C;
} SubObj150C78E0;

extern void func_151150BC(GameObj150C78E0 *);

void func_150C78E0(GameObj150C78E0 *arg0) {
    SubObj150C78E0 *temp;

    if (!(arg0->unk73 & 4)) {
        temp = (SubObj150C78E0 *)((u8 *)D_800DBEF4 + 0x1E0);
        arg0->unk3C = -(temp->unk3C & 0xFFFF0000) & 0xFFFF0000;
        func_151150BC(arg0);
    }
}

void func_150C7930(GameObj150C78E0 *arg0) {
    SubObj150C78E0 *temp;

    temp = (SubObj150C78E0 *)((u8 *)D_800DBEF4 + 0x1E0);
    arg0->unk3C = temp->unk3C & 0xFFFF0000;
    func_151150BC(arg0);
}

extern s32 func_15116110(GameObj150C78E0 *);

typedef struct {
    u8  pad00[0x13];
    s8  unk13;
} Obj7C;

typedef struct {
    u8  pad00[0x3C];
    s16 unk3C;
} SubObj7968;

typedef struct {
    u8  pad00[0x73];
    u8  unk73;
    u8  pad74[0x8];
    Obj7C *unk7C;
} GameObj150C7968;

void func_150C7968(GameObj150C7968 *arg0) {
    SubObj7968 *temp;
    Obj7C *obj;
    s32 t;

    func_15116110((GameObj150C78E0 *)arg0);
    if (!(arg0->unk73 & 4)) {
        temp = (SubObj7968 *)((u8 *)D_800DBEF4 + 0x1E0);
        obj = arg0->unk7C;
        t = temp->unk3C >> 4;
        if (obj != 0) {
            obj->unk13 = t;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_F4D20/func_150C79BC.s")

typedef struct {
    s32 unk0;
    s32 unk4;
} Entry150C7C90;

typedef struct {
    u8 pad00[0x1C];
    Entry150C7C90 *unk1C;
    u8 pad20[0x1C];
    s32 unk3C;
    u8 pad40[0x3C];
    s32 unk7C;
} GameObj150C7C90;

void func_150C7C90(GameObj150C7C90 *arg0) {
    Entry150C7C90 *entry;
    Entry150C7C90 *selected;
    s32 idx;
    s32 count;
    s32 angle;
    s32 word;
    s32 newWord;

    idx = arg0->unk7C;
    if (idx == 0) {
        selected = arg0->unk1C;
        count = 0;
        if (*(s8 *)&selected->unk0 != -0xE) {
            do {
                count++;
            } while (*(s8 *)&selected[count].unk0 != -0xE);
        }
        arg0->unk7C = count;
        idx = count;
    }
    selected = &arg0->unk1C[idx];
    angle = -0x29D - func_151149AC(arg0->unk3C & 0xFF)->unk12;
    if (arg0->unk3C & 0x8000) {
        angle = 0x344 - angle;
    }
    while (angle < 0) {
        angle += 0x400;
    }
    while (angle >= 0x400) {
        angle -= 0x400;
    }
    selected->unk0 &= ~0xFFF;
    selected->unk0 |= angle;
}

typedef struct {
    u8 pad00[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} GameObj150C7D7C;

void func_150C7D7C(GameObj150C7D7C *arg0) {
    struct127 *temp_v0;

    temp_v0 = func_15083E90(0xC);
    arg0->unk10 = (s16)(s32)(temp_v0->x_position - 30.0f);
    arg0->unk12 = (s16)(s32)(temp_v0->y_position + 50.0f);
    arg0->unk14 = (s16)(s32)(temp_v0->z_position + 30.0f);
}
