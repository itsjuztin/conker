#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 D_800A81B0;
void func_1516865C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_15168800(s32 arg0, s32 arg1, s32 arg2);

typedef struct {
    u8 pad_0x00[0x1];
    u8 field_0x01;
    u8 pad_0x02[0xA];
    u8 field_0x0C;
    u8 pad_0x0D[0x1];
    s16 field_0x0E;
    u8 pad_0x10[0x18];
    s16 field_0x28;
    s16 field_0x2A;
    s16 field_0x2C;
    s16 field_0x2E;
    u8 field_0x30;
} EffectSpawnSource;

typedef struct {
    s16 field_0x00;
    s16 field_0x02;
    s16 field_0x04;
    u8 pad_0x06[0x2];
    u8 field_0x08;
} EffectSpawnSourcePayload;

typedef struct {
    u8 pad_0x00[0x86];
    s16 field_0x86;
    u8 pad_0x88[0x4];
    s16 field_0x8C;
    s16 field_0x8E;
    s16 field_0x90;
    s16 field_0x92;
    s16 field_0x94;
    s16 field_0x96;
    s16 field_0x98;
    u8 pad_0x9A[0x6];
    u8 field_0xA0;
    u8 pad_0xA1[0x1];
    u8 field_0xA2;
    u8 field_0xA3;
    u8 field_0xA4;
    u8 pad_0xA5[0xB];
} EffectSpawnRequest;

void func_15193390(EffectSpawnSource * volatile arg0) {
    EffectSpawnRequest sp28;
    EffectSpawnSourcePayload *temp_v0;
    s16 temp_v1;

    bzero(&sp28, 0xA8);
    temp_v0 = (EffectSpawnSourcePayload *)arg0;
    temp_v1 = ((EffectSpawnSource *)temp_v0)->field_0x2E;
    temp_v0 = (EffectSpawnSourcePayload *)&((EffectSpawnSource *)temp_v0)->field_0x28;

    if (D_800A81B0 != (f32)temp_v1) {
        sp28.field_0x96 = temp_v1;
    } else {
        sp28.field_0x96 = (s32)((f32)temp_v0->field_0x02 - 200.0f);
        temp_v0->field_0x08 = 0;
    }

    sp28.field_0x8C = temp_v0->field_0x00;
    sp28.field_0x8E = temp_v0->field_0x02;
    sp28.field_0x90 = temp_v0->field_0x04;
    sp28.field_0x92 = 0;
    sp28.field_0x94 = 0;
    sp28.field_0xA2 = 0xF;
    sp28.field_0xA0 = 0x45;
    sp28.field_0x86 = 0xA;
    sp28.field_0xA3 = temp_v0->field_0x08;
    sp28.field_0x98 = 0x4880;
    sp28.field_0xA4 = 0x80;

    func_1516865C(&sp28, 0xFF, 0xFF, 0xFF, 0x80);
    temp_v0 = (EffectSpawnSourcePayload *)arg0;
    func_15168800((s32)&sp28, ((EffectSpawnSource *)temp_v0)->field_0x0C, ((EffectSpawnSource *)temp_v0)->field_0x01);
    arg0->field_0x0E = (func_150ADA20() & 0x7F) + 0x64;
}

void func_151934B4(struct42 *arg0) {
    f32 sp38[4];

    if (arg0->unkA4 < arg0->unk96) {
        arg0->unkA4 = ((*(s16 *)((u8 *)arg0 + 0xAA) >> 2) * 24) / 3;
        arg0->unkA2 = ((*(s16 *)((u8 *)arg0 + 0xAA) >> 2) * 6) / 3;
        *(s16 *)((u8 *)arg0 + 0xAA) = *(s16 *)((u8 *)arg0 + 0xAA) + D_800BE9E4;
        return;
    }

    arg0->unk94++;
    if (arg0->unk94 >= 0x15) {
        arg0->unk94 = 0x14;
    }

    arg0->unk9E = arg0->unk9E - (((s32)((u32) arg0->unk94 * D_800BE9E4)) >> 1);
    if (arg0->unk9E < arg0->unkA6) {
        if (*(s8 *)((u8 *)arg0 + 0xB3) == 1) {
            sp38[0] = (f32)arg0->unk9C;
            sp38[1] = (f32)arg0->unkA6;
            sp38[2] = (f32)*(s16 *)((u8 *)arg0 + 0xA0);
            func_151DBCBC(5, 30.0f, 0xFF, 0, sp38, *(u8 *)((u8 *)arg0 + 0xC), *(u8 *)((u8 *)arg0 + 1));
        }
        *(s16 *)((u8 *)arg0 + 0x98) = -1;
    }
}
