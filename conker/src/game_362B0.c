#include <ultra64.h>
#include "functions.h"
#include "variables.h"

typedef struct {
    u8 pad0[0x14];
    s16 unk14;
    u8 pad16;
    u8 unk17;
} struct_8008D050;

typedef struct {
    /* 0x00 */ f32 field_0x00;
    /* 0x04 */ f32 field_0x04;
    /* 0x08 */ f32 field_0x08;
    /* 0x0C */ f32 field_0x0C;
    /* 0x10 */ f32 field_0x10;
    /* 0x14 */ f32 field_0x14;
    /* 0x18 */ f32 field_0x18;
    /* 0x1C */ f32 field_0x1C;
    /* 0x20 */ f32 field_0x20;
    /* 0x24 */ f32 field_0x24;
    /* 0x28 */ f32 field_0x28;
    /* 0x2C */ f32 field_0x2C;
} D800DDE60Entry;

extern void *allocate_memory(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern struct_8008D050 D_8008D050[];
extern u8 D_800DDE54[];
extern D800DDE60Entry *D_800DDE60[];


void func_15008E00(void) {
    D_800DDE50 = (u8)0;
}

void func_15008E10(s32 arg0) {
    s32 i;
    f32 temp;
    struct_8008D050 *entry;

    D_800DDE54[D_800DDE50] = arg0;
    D_800DDE60[D_800DDE50] = allocate_memory(0x1E0, 1, 0, 0);

    for (i = 0; i != 0x1E0; i += 0x30) {
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x00 = 0.0f;
        temp = ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x00;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x04 = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x08 = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x0C = 0.0f;
        temp = ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x0C;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x10 = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x14 = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x18 = 0.0f;
        temp = ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x18;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x1C = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x20 = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x24 = 0.0f;
        temp = ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x24;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x28 = temp;
        ((D800DDE60Entry *)((u8 *)D_800DDE60[D_800DDE50] + i))->field_0x2C = temp;
    }

    entry = &D_8008D050[arg0];
    D_800DDE60[D_800DDE50][9].field_0x2C = entry->unk14;
    entry->unk17 = 0;
    D_800DDE50++;
}
