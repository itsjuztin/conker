#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern void *allocate_memory(s32, s32, s32, s32);
extern void func_10004074(void *);

s32 func_15004FE0(s32 arg0) {
    struct161 *sp34;
    s32 temp_lo;
    s32 i;

    sp34 = NULL;
    i = 0;
    temp_lo = func_1502B7F0((s32 *)&sp34, 3, 12, arg0, 3) / 24U;
    (*(struct160 **)&D_800C6650) = allocate_memory(temp_lo * 20, 1, 1, 0);
    D_800C6654 = temp_lo;
    if (temp_lo > 0) {
        do {
            (*(struct160 **)&D_800C6650)[i].unk0 = (s16)(s32)sp34[i].unk0;
            (*(struct160 **)&D_800C6650)[i].unk2 = (s16)(s32)sp34[i].unk4;
            (*(struct160 **)&D_800C6650)[i].unk4 = (s16)(s32)sp34[i].unk8;
            (*(struct160 **)&D_800C6650)[i].unk6 = 0;
            (*(struct160 **)&D_800C6650)[i].unk8 = (u32)(sp34[i].unkC * sp34[i].unkC);
            (*(struct160 **)&D_800C6650)[i].unkC = (s16)(s32)sp34[i].unk10;
            (*(struct160 **)&D_800C6650)[i].unkE = (s16)(s32)(sp34[i].unk0 + sp34[i].unkC);
            (*(struct160 **)&D_800C6650)[i].unk10 = (s16)(s32)(sp34[i].unk0 - sp34[i].unkC);
            (*(struct160 **)&D_800C6650)[i].unk12 = (s16)(s32)sp34[i].unk14;
            temp_lo--;
            i++;
        } while (temp_lo > 0);
    }
    if (sp34 != NULL) {
        func_10004074(sp34);
    }
    return i;
}
