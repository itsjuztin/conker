#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// loops and loops
extern u8 D_800DCE50[];
extern void (*D_80082BD0)(void);
extern void (*D_80082BD4)(void);
extern s32 D_800DD1B0;

void func_15008870(s32 arg0) {
    s32 lo;
    s32 hi;
    s32 i;
    s32 j;

    lo = 0;
    hi = 0x68;
    if (arg0 == 1) {
        hi = 0x65;
    } else if (arg0 == 2) {
        lo = 0x65;
    }
    for (i = 0; i < 2; i++) {
        for (j = lo; j < hi; j++) {
            ((s32 *)&D_800DCE50[i * 0x1A0])[j] = 0;
        }
    }
}

void func_15008930(s32 arg0) {
    void (**sp2C)(void);
    void (**var_s1)(void);
    s32 var_s0;
    s32 var_s2;

    if (arg0 == 1) {
        sp2C = &D_80082BD0;
        var_s2 = 1;
    } else {
        var_s2 = 0;
        if (arg0 == 2) {
            sp2C = &D_80082BD4;
            var_s2 = 1;
        } else {
            var_s2 = 0;
        }
    }

    var_s0 = 0;
    if (var_s2 > 0) {
        var_s1 = sp2C;
        do {
            (*var_s1)();
            var_s0++;
            var_s1++;
        } while (var_s0 != var_s2);
    }

    D_800DD1B0 = -1;
}
