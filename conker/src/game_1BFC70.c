#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_151927C0(struct114 *arg0) {
    s16 tmp0;
    tmp0 = (arg0->unk14 & 0xFF) >> 1;
    arg0->unk38 = 300;
    arg0->unk3A = 10;
    arg0->unk14 = (tmp0 << 16) + tmp0;
    arg0->unk3B = 0;
}
