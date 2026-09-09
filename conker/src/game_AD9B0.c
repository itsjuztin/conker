#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern u8 *D_800D199C;
extern struct127 *D_800CC5EC[];
s32 func_15080738(s32 arg0);

void func_15080500(struct127 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct127 *temp;
    s32 idx;
    s32 mask;

    if (arg0 != NULL) {
        if (arg0->interaction_state != 0) {
            if (arg0->unk127 != 0xFF) {
                if ((arg3 == 0x2B) || (arg3 == 0x2C)) {
                    D_800D1940 = arg3;
                    D_800D199C = (u8 *)arg1;
                    arg3 = 0x2A;
                } else if (func_15080738(arg3)) {
                    idx = arg3 >> 3;
                    mask = 1 << (arg3 & 7);
                    D_800D1940 = arg3;
                    if (!(D_800D2E60[idx] & mask)) {
                        arg3 = 0x1A;
                    }
                }

                if (arg2 == 0) {
                    temp = (struct127 *)arg0->unk31C;
                    if (!(temp->unk74 & 0x80)) {
                        temp->unk74 = arg3;
                    }
                } else {
                    temp = (struct127 *)arg0->unk31C;
                    if (!(*(u8 *)&temp->pad75 & 0x80)) {
                        *(u8 *)&temp->pad75 = arg3;
                        *(u8 *)((u8 *)arg0->unk31C + 0x7A) = (arg1 - *(s32 *)&D_800D3098) / 0x34;
                    }
                }
            }
        }
    }
}

void func_15080620(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 != 0) {
        arg2 |= 0x80;
    }
    if (arg1 == 0) {
        ((struct127 *)*(s32 *)((u8 *)D_800CC5EC + (arg0 * 0x32C)))->unk74 = arg2;
    } else {
        *(u8 *)&((struct127 *)*(s32 *)((u8 *)D_800CC5EC + (arg0 * 0x32C)))->pad75 = arg2;
    }
}

void func_150806A8(s32 arg0) {
    struct127 *e = &D_800CC2D0[arg0];
    struct127 *p = (struct127 *)e->unk31C;

    if (p->unk74 != 0) {
        if (!(p->unk74 & 0x80)) {
            p->unk74 = 0;
            p = (struct127 *)e->unk31C;
        }
    }
    if (*(u8 *)&p->pad75 != 0) {
        if (!(*(u8 *)&p->pad75 & 0x80)) {
            *(u8 *)&p->pad75 = 0;
        }
    }
}

void func_15080718(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg2 = 1 << (arg0 & 7);
    *arg1 = arg0 >> 3;
}

extern u8 D_800BE580[];

s32 func_15080738(s32 arg0) {
    s32 idx;
    s32 mask;
    func_15080718(arg0, &idx, &mask);
    if (D_800BE580[idx] & mask) {
        return 1;
    }
    return 0;
}

void func_15080784(void) {
    s32 temp_a0;

    if (D_800D1998 != 0) {
        if (D_800D1994 != D_800D1995) {
            temp_a0 = ((u16 *)D_800D1998)[D_800D1994];
            if (temp_a0 != 0) {
                func_1001263C(temp_a0, 0x7FFF, 0x40);
            }
            D_800D1994++;
        }
    }
}

extern void func_15080784(void);

void func_150807F4(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0x20) {
        func_15080784();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_AD9B0/func_15080828.s")

extern void func_1516D2E0(s32);
extern s32 func_10004074(s32);
extern void func_151F2D6C(s32, s32);

void func_15080BE8(void) {
    s32 temp;
    D_800D1941 = 0;
    func_1516D2E0(D_800D1950);
    func_10004074(D_800D1944);
    if (D_800D1948) {
        temp = D_800D1948;
        func_10004074(temp);
        func_10004074(D_800D194C);
        func_10004074(D_800D1998);
        D_800D1948 = 0;
    }
    func_151F2D6C(0, 0x5622);
}

extern u8 *D_800D199C;

void func_15080C64(void) {
    if (D_800D1941) {
        if (((u8 *)D_800D1950)[0x15] == 0) {
            func_15080BE8();
            if ((D_800BE9F0 != 0x29) && (D_800BE9F0 != 0x2E)) {
                D_800D2E60[8] |= 0x10;
            }
            if (D_800D199C != 0) {
                D_800D199C[0x14] = 1;
                D_800D199C = 0;
            }
        }
    }
}

s32 func_15080CF4(void) {
    if (!D_800D1941) {
        return 1;
    }
    return 0;
}
