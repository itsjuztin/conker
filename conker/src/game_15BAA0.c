#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern s16 D_80082FA6;
Gfx *func_1501A680(Gfx *arg0);

Gfx *func_1512E5F0(Gfx *arg0, struct108 *arg1) {
    Gfx *ret;

    gDPPipeSync(arg0++);
    gDPSetOtherMode(arg0++, 0x202CFF, 0);
    gDPSetTextureImage(arg0++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1,
                       (*(u16 *)((u8 *)arg1 + 0x8BA) * D_800BE620 * 2) + D_800BE9C4);
    gDPSetTile(arg0++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0,
               0, 0, 0, 0, 0, 0);
    gDPLoadSync(arg0++);
    gDPLoadBlock(arg0++, G_TX_LOADTILE, 0, 0, D_800BE620 - 1,
                 CALC_DXT(D_800BE620, G_IM_SIZ_16b_BYTES));
    gDPPipeSync(arg0++);
    gDPSetTile(arg0++, G_IM_FMT_RGBA, G_IM_SIZ_16b, ((D_800BE620 * 2) + 7) >> 3,
               0, G_TX_RENDERTILE, 0, 0, 0, 0, 0, 0, 0);
    gDPSetTileSize(arg0++, G_TX_RENDERTILE, 0, 0, (D_800BE620 - 1) << 2, 0);
    gDPSetColorImage(arg0++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800BE620, arg1->unk8BC);
    gDPSetScissor(arg0++, 0, 0, 0, D_800BE620, 1);
    gSPTextureRectangle(arg0++, 0, 0, D_800BE620 * 4, 4, G_TX_RENDERTILE, 0, 0, 0x1000, 0x400);
    gDPPipeSync(arg0++);

    ret = (Gfx *)func_1501A490((s32)func_1501A680(arg0), D_80082FA6, 0, 0, 0, 0);
    gDPSetOtherMode(ret, 0x082C3F, 0x00552230);
    return ret + 1;
}
