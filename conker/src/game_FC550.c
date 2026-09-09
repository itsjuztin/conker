#include <ultra64.h>
#include "functions.h"
#include "variables.h"


extern s32 func_151149AC(u32);
extern void func_15117798(void);

struct Obj150CF0A0 {
    u8 pad0[0x4F];
    u8 unk4F;
    u8 pad50[0x23];
    u8 unk73;
};

struct DObj800CC5EC {
    u8 pad0[0x57];
    u8 unk57;
};

extern struct DObj800CC5EC *D_800CC5EC;

void func_150CF0A0(struct Obj150CF0A0 *arg0) {
    struct Obj150CF0A0 *temp;

    if ((arg0->unk73 & 0x3) != 2) {
        if (arg0->unk4F & 0x4) {
            if (D_800CC5EC->unk57 != 0) {
                temp = (struct Obj150CF0A0 *)func_151149AC(0xFE);
                temp->unk73 &= 0xFFFC;
                temp->unk73 |= 0x2;
                temp = (struct Obj150CF0A0 *)func_151149AC(0xFD);
                temp->unk73 &= 0xFFFC;
                temp->unk73 |= 0x2;
            }
        }
    } else {
        func_15117798();
    }
}
