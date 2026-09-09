#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern f32 sinf(f32);
extern f32 cosf(f32);
extern f32 D_800A3730;

void func_1512E4B0(struct108 *arg0) {
    s32 idx;
    struct127 *obj;
    s32 temp;
    f32 angle;

    idx = 0;
    if (arg0->unk23D == 3) {
        idx = 1;
    }

    obj = &D_800CC2D0[idx];
    arg0->unk2BC = obj->x_position;
    arg0->unk2C0 = obj->y_position + 150.0f;
    arg0->unk2C4 = obj->z_position;

    temp = (s16)-*(s16 *)((u8 *)obj + 0x2E4);
    temp = (s16)(s32)((f32)temp + (obj->unk40 * 10.0f));
    angle = ((f32)temp * D_800A3730) / 1800.0f;

    arg0->unk2F8 = arg0->unk2BC - (sinf(angle) * 60.0f);
    arg0->unk2FC = arg0->unk2C0;
    arg0->unk300 = arg0->unk2C4 - (cosf(angle) * 60.0f);
}
