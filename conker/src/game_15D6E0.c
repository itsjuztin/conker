#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern void (*D_80089670[])(void *);

void func_15130230(void *arg0, s32 arg1) {
    if (D_800B0DF0->padF) {
        D_80089670[D_800B0DF0->padF](arg0);
    }
}
