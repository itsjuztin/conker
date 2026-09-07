#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_100038E0(void) {
    int val;
    u16 *ptr;
    u16 *ptr2;
    s32 addr;

    addr = 0xBC000C02;
    do {
        D_80038070 = addr;
        val = 0x4040;
        ptr2 = (u16 *)addr;
        D_80038074 = val;
        ptr = ptr2;
    } while (0);
    addr = (s32)ptr;
    *ptr = val;
    return addr;
}

s32 func_1000390C(void) {
    return 0;
}
