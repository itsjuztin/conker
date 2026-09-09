#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_15004FE0(s32 arg0);
void func_1500AC14(void);
void func_1500BEC0(void);
void func_1500E5C0(void);
void func_15012370(void);
void func_150127B0(void);
void func_15012FE0(void);
void func_151645C4(s32 arg0);
void func_151732E0(s32 arg0);
void func_15178EB0(void);
void func_151872B0(s32 arg0);
void func_1519582C(void);
void func_151EF640(s32 arg0);

void func_1500E470(s32 arg0) {
    D_800DD190 = -1;
    bzero(&D_800DD198, 24);
    D_800DD404 = 0xFF;
    D_800DD405 = 0;
    D_800DD406 = 0;
    D_800E0930 = 0;
    D_800E0934 = 0;
    D_800E0940 = 0;
    D_8008CD00 = 0;
    D_80088B60 = 0;
    D_800BE4E0 = 0;
    goto block_0;
block_0:
    D_800E0A10 = func_15012720();
    goto block_1;
block_1:
    func_15012370();

    func_151EF640(64);
    func_151732E0(arg0);
    func_15004FE0(arg0);
    func_150127B0();

    func_1519582C();
    func_15008BE0();
    func_15008B90();
    func_1500E5C0();

    if (D_800B0DF0->unkA) {
        D_80082D90[D_800B0DF0->unkA]();
    }
    func_1500ABA0(arg0);
    func_1500BEC0();
    func_1500AC14();
    func_151872B0(arg0);
    func_15178EB0();
    func_15012FE0();

    {
        register u8 tmp;

        tmp = !(((u8 *)D_800D2E4C)[4] & 128);
        func_151645C4(tmp);
    }
}
