#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern OSTimer D_80042A58;
extern OSMesg D_80042A90;
extern OSMesgQueue __osEepromTimerQ;
extern OSMesgQueue *D_800E0A20;
extern u8 D_800E0A24;
extern u8 *D_800E0A28;
extern s32 D_800E0A2C;

s32 func_151DD4E0(OSMesgQueue *arg0, u8 arg1, u8 *arg2);
s32 func_151DCFD8(s32 arg0);
s64 __ll_mul(u64 arg0, s32 arg1, s32 arg2);
u64 __ull_div(u64 arg0, u64 arg1);

void func_151DCEF0(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    while (func_151DCFD8(1) != 0) {
    }
    D_800E0A20 = arg0;
    D_800E0A24 = arg1;
    D_800E0A28 = arg2;
    D_800E0A2C = arg3;
    osSetTimer(&D_80042A58, __ull_div(__ll_mul(0x2EE0LL, *(s32 *)&D_8002BD10, D_8002BD14), 1000000ULL), 0, &__osEepromTimerQ, &D_80042A90);
}

s32 func_151DCFD8(s32 arg0) {
    OSMesgQueue *queue;
    u8 block;
    u8 *data;

    if (D_800E0A20 == NULL) {
        return 0;
    }
    if (osRecvMesg(&__osEepromTimerQ, NULL, arg0) != -1) {
        if (D_800E0A2C <= 0) {
            D_800E0A20 = NULL;
            D_800E0A2C = 0;
            return 0;
        }

        queue = D_800E0A20;
        block = D_800E0A24;
        data = D_800E0A28;
        if (func_151DD4E0(queue, block, data) != 0) {
            D_800E0A20 = NULL;
            D_800E0A2C = 0;
            return 0;
        }
        D_800E0A2C -= 8;
        D_800E0A24++;
        D_800E0A28 += 8;
        osSetTimer(&D_80042A58, __ull_div(__ll_mul(12000ULL, *(s32 *) &D_8002BD10, D_8002BD14), 1000000ULL), 0, &__osEepromTimerQ, &D_80042A90);
        return 1;
    }
    return 0;
}
