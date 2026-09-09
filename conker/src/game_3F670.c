#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void func_1510F800(s32);
extern void *func_15132A4C(void *, s32, s32, s32, u8, s32);
extern Mtx D_80089470;
extern struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} D_80096550;

void func_150121C0(s32 arg0) {
    void *ret;
    s32 i;
    struct {
        s32 saved;
        struct {
            f32 unk00;
            f32 unk04;
            f32 unk08;
            f32 unk0C;
            f32 unk10;
            f32 unk14;
            f32 unk18;
            f32 unk1C;
            f32 unk20;
            f32 unk24;
            f32 unk28;
            f32 unk2C;
            f32 unk30;
            f32 unk34;
            f32 unk38;
            f32 unk3C;
            f32 unk40;
            f32 unk44;
            f32 unk48;
            f32 unk4C;
            s32 unk50;
            s16 unk54;
            s16 unk56;
            u8 unk58;
            u8 pad59[3];
            s32 unk5C;
            u8 unk60;
            u8 unk61;
            u8 unk62;
            u8 unk63;
            u8 unk64;
            u8 unk65;
            u8 unk66;
            u8 unk67;
            u8 unk68;
            u8 pad69;
            u8 unk6A;
            u8 pad6B;
            s32 unk6C;
            u8 unk70;
            u8 pad71;
            s16 unk72;
            s16 unk74;
            u8 pad76[2];
        } payload;
    } stack;

    stack.payload.unk00 = 1.0f;
    stack.payload.unk04 = 1.0f;
    stack.payload.unk08 = 1.0f;
    stack.payload.unk0C = 1.0f;
    stack.payload.unk10 = 0.0f;
    stack.payload.unk14 = 0.0f;
    stack.payload.unk18 = 0.0f;
    stack.payload.unk1C = 1.0f;
    stack.payload.unk20 = 1.0f;
    stack.payload.unk24 = 1.0f;
    stack.payload.unk28 = 0.0f;
    stack.payload.unk2C = 0.0f;
    stack.payload.unk30 = 0.0f;
    stack.payload.unk34 = 0.0f;
    stack.payload.unk38 = 0.0f;
    stack.payload.unk3C = 0.0f;
    stack.payload.unk40 = 0.0f;
    stack.payload.unk44 = 0.0f;
    stack.payload.unk48 = 0.0f;
    stack.payload.unk4C = 0.0f;
    stack.payload.unk50 = 0xC0500;
    stack.payload.unk54 = 0x12C;
    stack.payload.unk56 = 0x21;
    stack.saved = arg0;
    stack.payload.unk58 = 0;

    func_1510F800(0);
    stack.payload.unk5C = func_1510FD20((s32)D_80096550.unk0, (s32)D_80096550.unk8);
    stack.payload.unk60 = 0xFF;
    stack.payload.unk61 = 0;
    stack.payload.unk62 = 6;
    stack.payload.unk63 = 0;
    stack.payload.unk64 = 0;
    stack.payload.unk65 = 0;
    stack.payload.unk66 = 0;
    stack.payload.unk67 = 0;
    stack.payload.unk68 = 3;
    stack.payload.unk6A = 0;
    stack.payload.unk6C = 0;
    stack.payload.unk70 = 0;
    stack.payload.unk72 = 1;
    stack.payload.unk74 = 0xFF;

    ret = func_15132A4C(&stack.payload, 0, 0, 4, 0xFF, 1);
    if (ret != 0) {
        memcpy((u8 *)ret + 0x170, &stack.saved, 4);
        for (i = 0; i < 2; i = (i + 1) & 0xFF) {
            memcpy((u8 *)ret + (i << 6) + 0x90, &D_80089470, 0x40);
        }
    }
}
