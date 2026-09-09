#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void func_151254F4(struct108 *arg0, s32 arg1);
extern void func_1517F488(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern f32 func_15144BC8(f32 arg0);

f32 func_150ED1D0(f32 arg0, f32 arg1) {
    f32 c;

    arg1 = arg1;
    arg0 = func_15144BC8(arg0);
    c = func_15144BC8(func_15144BC8(arg1) - arg0);
    if (c > 180.0f) {
        c = -360.0f + c;
    }
    return c;
}

void func_150ED234(f32 *arg0, f32 *arg1) {
    s32 temp;
    temp = func_1505A630(arg1[5] - arg0[5], arg0[7] - arg1[7], 0) + 0x4000;
    func_150ED1D0((f32)temp * 0.0054931640625f, arg0[0x10]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_11A680/func_150ED298.s")

void func_150ED578(struct127 *arg0) {
    struct126 *temp_v0;
    s32 idx;
    struct127 *temp_v1;
    struct108 *camera;

    temp_v0 = arg0->unk31C;
    if ((temp_v0 != 0) && (temp_v0->unk84 == 0)) {
        idx = D_800BE616 ? arg0->unk127 : arg0->unk124;
        if ((*(u16 *)(((s32 *)D_800BE728[0])[idx]) & 0x10) != 0) {
            temp_v1 = &D_800CC2D0[idx];
            if (temp_v1->unk31C->pad196[1] != 0) {
                camera = temp_v1->camera;
                if (camera != 0) {
                    arg0->pad2FC[0] |= 1 << camera->unk23D;
                }
            }
        }
    }
}

extern void func_15062FC0(struct127 *, s32, s32, s32, s32, s32, s32, s32);

void func_150ED638(struct127 *arg0, s32 arg1, s32 arg2) {
    s32 temp;
    s32 count;

    if (arg1 < -0x2D) {
        arg1 = -0x2D;
    } else {
        temp = (arg1 >= 0x2E) ? 0x2D : arg1;
        arg1 = temp;
    }

    if (arg2 < -0x2D) {
        arg2 = -0x2D;
    } else {
        temp = (arg2 >= 0x2E) ? 0x2D : arg2;
        arg2 = temp;
    }

    if (arg0->id == 0x28) {
        count = 0x7C;
    } else {
        temp = arg1;
        arg1 = arg2;
        count = 0x1C;
        arg2 = temp;
    }

    func_15062FC0(arg0, 0, 0, 0x800, 0x800, count, -arg2 * 7, 0);
    func_15062FC0(arg0, 1, count, 0x800, 0x800, count, -arg1 * 7, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_11A680/func_150ED748.s")

void func_150EEC84(struct127 *arg0) {
    struct108 *camera;
    struct127 *obj;
    s32 idx;

    arg0->unk5 = 3;
    arg0->unkE4 = 0;
    arg0->immune = 0xFF;
    arg0->pad320[8] = 0;
    if (arg0->camera != 0) {
        camera = arg0->camera;
        idx = 0;
        if (camera->unk23D == 3) {
            idx = 1;
        }
        func_151254F4(camera, idx);
        arg0->unk31C->unk78 = 0x29;
        *(u16 *)((u8 *)D_800BE748 + (idx * 6)) &= ~0x10;
        obj = &D_800CC2D0[idx];
        obj->pad2FC[0] |= 1 << camera->unk23D;
        if (obj->pad10A != 0) {
            func_1517F488(0xFF, 0, 0, 0xB4, 0x14, camera->unk23D);
            obj->pad10A = 0;
        }
    }
}

extern void func_151045E0(void *, s32, f32);
extern void func_15052590(void);

void func_150EEDA8(struct127 *arg0) {
    if (arg0->unk5 != 3) {
        func_151045E0(arg0, 0xF, 250.0f);
        arg0->unk5 = 3;
        arg0->unkE4 = 0;
        arg0->immune = 0xFF;
    }
    func_15052590();
}
