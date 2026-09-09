#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    u8 pad_0[0x4];
    u8 field_0x04;
    u8 pad_5[0x11];
    u8 field_0x16;
} EventPayloadFlags;


#pragma GLOBAL_ASM("asm/nonmatchings/game_F15D0/func_150C4120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_F15D0/func_150C44A4.s")

void func_150C4AD8(struct260 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x34) != 0) {
        func_1516972C(*(struct102 **)((u8 *)arg0 + 0x34));
    }
}

extern void func_150C4AD8(struct260 *);

void func_150C4B08(struct260 *arg0) {
    func_150C4AD8(arg0);
    func_1514933C(arg0);
}

extern void func_15149368(struct260 *);

void func_150C4B34(struct260 *arg0) {
    func_150C4AD8(arg0);
    func_15149368(arg0);
}

void func_150C4B60(s32 arg0, s32 arg1, u8 arg2) {
    s32 *p = &arg0;
    EventPayloadFlags *q;

    if (arg2 == 0x55) {
        q = (EventPayloadFlags *)*p;
        q = (EventPayloadFlags *)((s32)q + 0x28);
        q->field_0x16 = q->field_0x16 & 0xFFFD;
    } else if (arg2 == 0x56) {
        q = (EventPayloadFlags *)*p;
        q = (EventPayloadFlags *)((s32)q + 0x28);
        q->field_0x16 = q->field_0x16 | 2;
    } else {
        q = (EventPayloadFlags *)(*p + 0x28);
        func_15149514(arg1, arg2, (s32)q, (s32)&q->field_0x04, *p);
    }
}
