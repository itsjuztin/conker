#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    s32 unk0;
    u8 unk4;
} struct_func_15100230;

typedef struct {
    char pad_0[0x3B];
    u8 field_0x3B;
} ActorUniqueIdFields;

void func_15100180(ActorUniqueIdFields *arg0) {
    struct {
        s32 unk0;
        u8 unk4;
    } sp18;

    sp18.unk0 = (s32)arg0;
    sp18.unk4 = arg0->field_0x3B;
    func_151494E0((s32)&sp18, 0x48);
}

void func_151001B4(struct127 *arg0) {
    struct {
        struct127 *unk0;
        u8 unk4;
        u16 unk6;
    } sp38;
    struct260 *temp_v0;

    sp38.unk0 = arg0;
    sp38.unk4 = arg0->unique_id;
    sp38.unk6 = 0;

    temp_v0 = func_15149130(0x12C, -1, 0x4E, -1, 0, 0x3B, (struct37 *)0x8, 0xFF, 1);
    if (temp_v0 != NULL) {
        memcpy((void *)((s32)temp_v0 + 0x28), &sp38, 8);
    }
}

void func_15100230(struct102 *arg0, void *arg1, u8 arg2) {
    struct {
        s32 unk0;
        u8 unk4;
    } *p;

    p = (void *)((u8 *)arg0 + 0x28);
    if (arg2 == 0x48) {
        if ((p->unk0 == *(s32 *)arg1) || (p->unk4 == *(u8 *)(*(s32 *)&arg1 + 4))) {
            func_1516972C(arg0);
        }
    } else {
        func_15149514((s32)arg1, arg2, (s32)p, (s32)&p->unk4, (s32)arg0);
    }
}

void func_151002BC(struct260 *arg0) {
    struct {
        struct127 *unk0;
        u8 unk4;
        u8 pad5;
        s16 unk6;
    } *p;
    struct127 *obj;

    p = (void *)((u8 *)arg0 + 0x28);
    obj = *(struct127 **)((u8 *)arg0 + 0x28);
    if ((obj->interaction_state == 0) || (obj->id == 0xFF) || (obj->unique_id != p->unk4)) {
        arg0->unkE = -1;
        return;
    }
    if (obj->camera != 0) {
        p->unk6 = p->unk6 - D_800BE9E4;
    }
}
