#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern f32 D_800A0F60;
extern f32 D_800A0F64;
void func_15124B18(struct108 *arg0);

void func_150DF820(struct108 *arg0) {
    arg0->unk84 &= ~0x4000;
    arg0->unk84 |= 0x4;
    arg0->unk84 &= ~0x1010;
    if (arg0->unk3D0->in_water != 0) {
        arg0->unk84 |= 0x1010;
        arg0->unk84 &= ~0x4;
        arg0->unk374 = D_800A0F60;
    } else {
        if (D_800A0F64 == arg0->unk374) {
            arg0->unk1B4 = 3;
            func_15124B18(arg0);
        }
    }
}
