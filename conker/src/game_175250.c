#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern s32 func_15147A80(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

struct Struct15147DA0_cpy { s32 unk0[8]; };

struct Struct15148AF4_entry {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
};

struct Struct15148AF4_data {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    u8 pad14[4];
    u8 unk18;
};

struct Struct15148AF4_arg0 {
    u8 pad0[0x25];
    u8 unk25;
    u8 pad26[6];
    s8 unk2C;
    s8 unk2D;
    s8 unk2E;
    u8 pad2F[0x65];
    struct Struct15148AF4_entry *unk94;
    struct Struct15148AF4_data *unk98;
};

s32 func_15147DA0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5,
                  s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11,
                  s32 arg12, u8 arg13, s32 arg14) {
    s32 v1;
    u8 *temp;

    *(s32 *)((u8 *)arg0 + 0x10) = 1;
    v1 = func_15147A80(arg0, (s32)arg2 + 0x48, 0x14, 1, 0, 1, arg9, arg10,
                       arg12, arg13, arg14);
    if (v1 == 0) {
        return 0;
    }
    temp = (u8 *)*(s32 *)((u8 *)v1 + 0x98);
    memcpy(temp, arg1, 0x20);
    temp[0x20] = arg3;
    temp[0x21] = arg4;
    temp[0x22] = arg5;
    temp[0x23] = arg6;
    temp[0x24] = arg7;
    temp[0x25] = arg8;
    *(struct Struct15147DA0_cpy *)(temp + 0x28) = *(struct Struct15147DA0_cpy *)arg11;
    return v1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/game_175250/func_15147EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_175250/func_1514803C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_175250/func_151488C4.s")

s32 func_15148AF4(struct Struct15148AF4_arg0 *arg0) {
    s32 idx;
    struct Struct15148AF4_entry *entries;
    struct Struct15148AF4_data *data;
    struct Struct15148AF4_entry *entry;

    entries = arg0->unk94;
    data = arg0->unk98;
    idx = arg0->unk2E;
    do {
        idx -= 1;
        if (idx < 0) {
            idx = arg0->unk25 - 1;
        }
        entry = (struct Struct15148AF4_entry *)((u8 *)entries + (idx * 0x14));
        entry->unkC = entry->unkC - (data->unk10 * D_800BE9A4);
        entry->unk0 = entry->unk0 + (data->unk4 * D_800BE9A4);
        entry->unk4 = entry->unk4 + (entry->unkC * D_800BE9A4);
        entry->unk8 = entry->unk8 + (data->unkC * D_800BE9A4);
    } while (idx != arg0->unk2D);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_175250/func_15148BA4.s")

s32 func_15148DE0(void *arg0) {
    s32 idx;
    s32 step;
    s32 step2;
    s8 temp_v0;
    s32 phase;
    struct Struct15148AF4_data *data;
    struct Struct15148AF4_entry *entries;

    temp_v0 = *(s8 *)((u8 *)arg0 + 0x2C);
    if (temp_v0 >= 3) {
        *(s8 *)((u8 *)arg0 + 0x2C) = temp_v0 - 1;
        entries = *(struct Struct15148AF4_entry **)((u8 *)arg0 + 0x94);
        data = *(struct Struct15148AF4_data **)((u8 *)arg0 + 0x98);
        idx = *(s8 *)((u8 *)arg0 + 0x2D);
        step = (0x1000 / *(s8 *)((u8 *)arg0 + 0x2C)) & 0xFFFF;
        phase = (data->unk18 & 0x20) ? 0x1000 : 0;
        *(s8 *)((u8 *)arg0 + 0x2E) = *(s8 *)((u8 *)arg0 + 0x2E) - 1;
        if (*(s8 *)((u8 *)arg0 + 0x2E) < 0) {
            *(s8 *)((u8 *)arg0 + 0x2E) = *(u8 *)((u8 *)arg0 + 0x25) - 1;
        }
        if (idx != *(s8 *)((u8 *)arg0 + 0x2E)) {
            step2 = step;
            step = 0x14;
            do {
                ((struct Struct15148AF4_entry *)((u8 *)entries + (idx * step)))->unk10 = phase;
                if (data->unk18 & 0x20) {
                    phase = (phase - step2) & 0xFFFF;
                } else {
                    phase = (phase + step2) & 0xFFFF;
                }
                idx++;
                if (idx == *(u8 *)((u8 *)arg0 + 0x25)) {
                    idx = 0;
                }
            } while (idx != *(s8 *)((u8 *)arg0 + 0x2E));
        }
        return 1;
    }
    return 0;
}

s32 func_15148EF8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp = (u8 *)*(s32 *)((u8 *)arg0 + 0x98);
    temp[0x20] = 4;
    return 1;
}

void func_15148F1C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5,
                   s32 arg6, f32 arg7, s16 arg8, f32 arg9, f32 arg10, u8 arg11) {
    f32 temp_f2;
    struct { f32 x; f32 y; f32 z; s16 unk0C; s16 unk0E; s32 unk10; u8 pad14; u8 unk15; } sp9C;
    f32 temp_f0;
    struct { f32 unk00; f32 unk04; f32 unk08; f32 unk0C; f32 unk10; u8 pad14[4]; u8 unk18; u8 unk19; u8 unk1A; u8 unk1B; } sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    u8 temp_v0;
    struct { s32 unk00; s32 unk04; s32 unk08; s32 unk0C; s32 unk10; s32 unk14; s32 unk18; u8 unk1C; u8 unk1D; } sp4C;

    sp78 = func_151423D8((u8)arg6);
    sp74 = func_151423D8((u8)(arg6 - 0x40));
    sp70 = func_151423D8((u8)arg5);
    temp_f2 = func_151423D8((u8)(arg5 - 0x40));

    sp9C.unk10 = 1;
    sp9C.unk0E = 1;
    sp7C.unk1A = 0xFF;
    sp7C.unk18 = 8;
    temp_v0 = *(((u8 *)&arg0) + 3);
    sp7C.unk19 = temp_v0;
    if (temp_v0 == 0xA) {
        sp7C.unk18 = 0x28;
    }

    temp_f0 = arg7 * sp78;
    sp9C.x = arg1;
    sp9C.y = arg2;
    sp9C.z = arg3;
    sp7C.unk00 = arg9;
    sp7C.unk10 = arg10;
    sp7C.unk04 = temp_f0 * temp_f2;
    sp7C.unk08 = -arg7 * sp74;
    sp7C.unk0C = temp_f0 * sp70;
    sp7C.unk1B = 0xFF;
    sp9C.unk15 = arg4 + 3;
    sp9C.unk0C = arg8;

    sp4C.unk00 = 0;
    sp4C.unk04 = 1;
    sp4C.unk08 = 0x160600;
    sp4C.unk0C = 3;
    sp4C.unk10 = 0x10;
    sp4C.unk14 = 0x80;
    sp4C.unk18 = 0x20;
    sp4C.unk1C = 0;
    sp4C.unk1D = 9;
    func_15147DA0(&sp9C, &sp7C, 0, 1, 0, 0, 0, 0, 0, 0, 0, (s32 *)&sp4C, 0, arg11, 1);
}

s32 func_151490C8(void *arg0) {
    u8 *v0 = (u8 *)*(s32 *)((u8 *)arg0 + 0x98);
    s32 v1 = *(s16 *)((u8 *)arg0 + 0x1C) << 3;

    if (v1 >= 0x100) {
        v1 = 0xFF;
    }
    v0[0x1B] = v1;
    if ((v1 & 0xFF) < 0) {
        return 0;
    }
    return 1;
}

void func_151478F4(void);

void func_15149104(void) {
    func_151478F4();
}
