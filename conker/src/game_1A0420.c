#include <ultra64.h>
#include "functions.h"
#include "variables.h"

#define WGFX15172F70(pkt, a, b)     \
{                                   \
    Gfx *_g = (Gfx *)(pkt);         \
    _g->words.w0 = (u32)(a);        \
    _g->words.w1 = (u32)(b);        \
}

Gfx *func_15172F70(Gfx *arg0) {
    typedef struct {
        char pad0[0x24];
        f32 unk24;
        f32 unk28;
        f32 unk2C;
        f32 unk30;
    } Struct15172F70;
    u32 color;

    color = D_800DD2D0;
    if (color != 0) {
        WGFX15172F70(arg0++, 0xD9E0FFFE, 0);
        WGFX15172F70(arg0++, 0xD9FFFFFF, 0x00200004);
        WGFX15172F70(arg0++, 0xE7000000, 0);
        WGFX15172F70(arg0++, 0xE3000A01, 0);
        WGFX15172F70(arg0++, 0xFA000000, (color & 0xFF) | ~0xFF);
        WGFX15172F70(arg0++, 0xE200001C, 0x00504340);
        WGFX15172F70(arg0++, 0xE3000C00, 0);
        WGFX15172F70(arg0++, 0xE3000F00, 0);
        WGFX15172F70(arg0++, 0xFCFFFFFF, 0xFFFDF6FB);
        WGFX15172F70(arg0++,
            0xF6000000 | ((((u32)((Struct15172F70 *)D_800BE628)->unk28) & 0x3FF) << 2) | ((((u32)((Struct15172F70 *)D_800BE628)->unk30) & 0x3FF) << 14),
            ((((u32)((Struct15172F70 *)D_800BE628)->unk24) & 0x3FF) << 2) | ((((u32)((Struct15172F70 *)D_800BE628)->unk2C) & 0x3FF) << 14));
    }

    return arg0;
}
