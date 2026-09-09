#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void __osSiGetAccess(void);
extern void __osSiRelAccess(void);
extern s32 func_151DD710(s32 arg0, u16 *arg1);

s32 func_151DD460(s32 arg0) {
    u16 sp28[4];
    u16 *sp24;
    s32 temp_t7;
    s32 var_v1;

    __osSiGetAccess();
    sp24 = &sp28[-2];
    if (func_151DD710(arg0, sp24) != 0) {
        var_v1 = 0;
    } else {
        temp_t7 = (sp24[0] & 0xC000) & 0xFFFFFFFFFFFFFFFF;
        switch (temp_t7) {
            case 0x8000:
                var_v1 = 1;
                break;

            case 0xC000:
                var_v1 = 2;
                break;

            default:
                var_v1 = 0;
                break;
        }
    }
    *((s32 *) (&sp24[4])) = var_v1;
    __osSiRelAccess();
    var_v1 = *((s32 *) (&sp24[4]));
    return var_v1;
}
