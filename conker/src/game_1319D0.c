#include <ultra64.h>
#include "functions.h"
#include "variables.h"


void func_15104520(struct108 *arg0) {
    struct127 *temp;

    if (arg0->unk6FC != 0 || arg0->unk6C8 == 0) {
        arg0->unk348 = 117.0f;
        arg0->unk34C = 117.0f;
        arg0->unk374 = 370.0f;
        arg0->unk190 = 77.0f;
    }
    temp = arg0->unk3D0;
    if (temp->xz_velocity < 50.0f) {
        if (arg0->unk3E8 == 0) {
            if (0.5f * arg0->unk374 < *(f32 *)((u8 *)arg0 + 0x370) - arg0->unk374) {
                func_15128774(arg0, temp);
            }
        }
    }
}
