#include <ultra64.h>

#include "functions.h"
#include "variables.h"

extern s32 func_1502B020(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern u8 D_800BE580[];


void func_15016500(void) {
    D_800D1940 = (u8)0;
    D_800D1941 = (u8)0;
    D_800D1944 = 0;
    D_800D1948 = 0;
    D_800D194C = 0;
    D_800D1950 = 0;
    bzero(D_800D1958, 48); // bzero
    D_800D1988 = 0.0f;
    D_800D198C = 0.0f;
    D_800D1990 = 0.0f;
    D_800D1994 = (u8)0;
    D_800D1995 = (u8)0;
    D_800D1998 = 0;
}

// grim looking loop
void func_15016588(void) {
    s32 i;
    s32 idx;
    s32 mask;
    s32 value;

    bzero(D_800BE580, 8);

    idx = -1;

    for (i = 0; i != 0x43;) {
        if ((i & 7) == 0) {
            mask = 1;
            idx++;
        } else {
            mask = mask << 1;
        }

        func_1502B020(&value, 3, 0x1A, D_800BEAAB, i);
        i++;
        if (value != 0) {
            D_800BE580[idx] |= mask;
        }
    }
}
