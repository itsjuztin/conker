#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern u8 *D_800C35F0[];
extern s32 func_1505EEF4(s32);

void func_15023870(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp;

    if (arg0 == 0xB && arg1 == 2) {
        temp = func_1505EEF4(arg3);
        if (temp != 0) {
            D_800C35F0[arg2][0x2A] = ((u8 *)temp)[0x3B];
        }
    }
}
