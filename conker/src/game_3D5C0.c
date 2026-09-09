#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern s32 D_80090298[];

void func_15010110(void) {
    struct179 tmp;
    s32 i;

    func_15195AA8(D_800B0E00[0], D_80090298[0x14], 0, -1, 0, 0, 0, -8);
    func_15195AA8(D_800B0E00[1], D_80090298[0x14], 0, -1, 0, 1, 0, -8);

    tmp.unk20 = 0;
    for (i = 0; i < 6; i++) {
        tmp.unk4 = ((struct180 *)&D_800963A0)[i];
        tmp.unk0 = i + 1;
        tmp.unk1C = fabsf(tmp.unk4.unk4 - tmp.unk4.unk10);
        func_151ACBD4(&tmp, 0);
    }
}
