#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern s32 func_151149AC(u32);
extern void func_150A3444(s32, s16, s16, s16);
extern void func_151749A0(s32, s32);
extern f32 D_800A0830;
extern f32 D_800A0834;

struct Obj150CEF60 {
    u8 pad0[0x8];
    f32 unk8;
};

struct CPad150CEF60 {
    f32 c;
    f32 pad[6];
};

void func_150CEF60(s32 arg0) {
    struct Obj150CEF60 *temp_v0;
    f32 angle;
    struct CPad150CEF60 c;
    f32 s;
    f32 cx;
    f32 cy;

    cx = -1.0f;
    cy = 44.0f;
    temp_v0 = (struct Obj150CEF60 *)func_151149AC(4);
    angle = temp_v0->unk8 * D_800A0830;
    c.c = func_150AD78C(angle);
    s = func_150AD780(angle);
    func_150A3444(2,
                  (s16)((76.0f - cx) * s - (241.0f - cy) * c.c + cx),
                  (s16)((76.0f - cx) * c.c + (241.0f - cy) * s + cy),
                  (s16)D_800A0834);
    func_151749A0(5, 3);
}

extern f32 D_800A0838;

f32 func_150CF040(s32 arg0, s32 arg1) {
    arg0 += 1;
    arg1 -= 0x2C;
    return func_150484A0((f32)arg0, (f32)arg1) * D_800A0838;
}

void func_150CF080(s32 *arg0) {
    arg0[0x21] |= 0x4000;
}
