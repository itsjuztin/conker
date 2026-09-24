#include <ultra64.h>

#include "functions.h"
#define D_8002AE54 D_8002AE54_orig
#define D_8003E388 D_8003E388_orig
#define D_800406B8 D_800406B8_orig
#define D_80040AC8 D_80040AC8_orig
#include "variables.h"
#undef D_8002AE54
#undef D_8003E388
#undef D_800406B8
#undef D_80040AC8

extern u8 D_8002C960[];
Acmd *n_alAudioFrame(Acmd *cmdList, s32 *cmdLen, s16 *outBuf, s32 maxSamples);
s32 func_100095A0(struct50 *arg0, struct51 *arg1);
void func_100099BC(void);
void func_1000A03C(void);


typedef struct {
    s32 maxVVoices;
    s32 maxPVoices;
    s32 maxUpdates;
    s32 maxFXbusses;
    void *dmaNew;
    void *unk14;
    void *unk18;
    void *unk1C;
    void *unk20;
    void *waveRom;
    ALHeap *heap;
    s32 outputRate;
    u8 fxType[4];
    void *unk34;
    void *unk38;
} SynDriverConfig;

typedef struct {
    u32 frequency;
    u32 numFields;
    u32 maxACMDSize;
} AudioSpec;

typedef struct {
    s32 unk0[66];
    s32 unk108[66];
} FxParams;

typedef struct DMAState_s {
    ALLink link;
    s32 unk8;
    s32 unkC;
    void *unk10;
} DMAState;

typedef struct {
    Acmd *ACMDList[2];
    struct50 *audio_info[3];
} AudioMgrPtrs;

extern FxParams D_8002AE54;
extern void *D_8003E380;
extern AudioMgrPtrs D_8003E388;
extern DMAState D_800406B8[52];
extern struct54 D_80040AC8[50];
extern u32 D_80040F94;

void func_10008F90(SynDriverConfig *arg0, OSPri arg1, AudioSpec *arg2) {
    u32 i;
    f32 fsize;

    func_10012588((struct14 *)&D_8003E370);
    arg0->dmaNew = func_10009980;
    arg0->outputRate = osAiSetFrequency(arg2->frequency);
    arg0->unk14 = func_10009FFC;
    arg0->unk18 = func_10009B2C;
    arg0->unk1C = func_10009B90;
    arg0->unk20 = func_10009B4C;

    fsize = (f32)arg2->numFields * arg0->outputRate / 30.0f;
    D_80040F8C = (s32)fsize;
    if (D_80040F8C < fsize) {
        D_80040F8C++;
    }
    D_80040F8C = ((D_80040F8C / 0xB8) * 0xB8) + 0xB8;
    D_80040F88 = D_80040F8C - 0xB8;
    D_80040F90 = D_80040F8C + 0x54;
    D_80040F84 = 0;

    {
        FxParams sp58;
        sp58 = D_8002AE54;
        arg0->unk34 = sp58.unk0;
        arg0->unk38 = sp58.unk108;
        n_alInit(&D_8003E640, arg0);
    }
    D_8003E380 = &D_8003E640;

    D_800406B8[0].link.prev = NULL;
    D_800406B8[0].link.next = NULL;
    for (i = 0; i < 51; i++) {
        {
            ALLink *dl1 = &D_800406B8[i + 1].link;
            ALLink *dl2 = &D_800406B8[i].link;
            dl1->next = dl2->next;
            dl1->prev = dl2;
            if (dl2->next != NULL) {
                dl2->next->prev = dl1;
            }
            dl2->next = dl1;
        }
        D_800406B8[i].unk10 = alHeapDBAlloc(0, 0, arg0->heap, 1, 0x800);
    }
    D_800406B8[i].unk10 = alHeapDBAlloc(0, 0, arg0->heap, 1, 0x800);

    bzero(D_80040AC8, 0x4B0);
    D_80040AC8[0].unk4 = NULL;
    D_80040AC8[0].unk0 = NULL;
    for (i = 0; i < 49; i++) {
        {
            struct54 *ol1 = &D_80040AC8[i + 1];
            struct54 *ol2 = &D_80040AC8[i];
            ol1->unk0 = ol2->unk0;
            ol1->unk4 = ol2;
            if (ol2->unk0 != NULL) {
                ol2->unk0->unk4 = ol1;
            }
            ol2->unk0 = ol1;
        }
        D_80040AC8[i].unk10 = 0;
    }
    D_80040AC8[i].unk10 = 0;

    for (i = 0; i < 2; i++) {
        D_8003E388.ACMDList[i] = alHeapDBAlloc(0, 0, arg0->heap, 1, arg2->maxACMDSize * sizeof(Acmd));
    }
    D_80040F94 = arg2->maxACMDSize;

    for (i = 0; i < 3; i++) {
        D_8003E388.audio_info[i] = alHeapDBAlloc(0, 0, arg0->heap, 1, sizeof(struct50));
        D_8003E388.audio_info[i]->unk70 = 2;
        D_8003E388.audio_info[i]->unk74 = D_8003E388.audio_info[i];
        D_8003E388.audio_info[i]->unk0 = (s32)alHeapDBAlloc(0, 0, arg0->heap, 1, 4 * D_80040F90);
    }

    osCreateMesgQueue((OSMesgQueue *)&D_8003E608, (OSMesg *)&D_8003E620, 8);
    osCreateMesgQueue((OSMesgQueue *)&D_8003E5D0, (OSMesg *)&D_8003E5E8, 8);
    osCreateMesgQueue((OSMesgQueue *)&D_80041298, (OSMesg *)&D_800412B0, 0x20);
    osCreateMesgQueue((OSMesgQueue *)&D_800416F0, (OSMesg *)&D_80041708, 0x28);
    osCreateThread(&D_8003E3A0, 4, (void (*)(void *))func_10009400, NULL, &D_800406A0, arg1);
    D_8002AE40 = 1;
    osStartThread(&D_8003E3A0);
}

void func_100093CC(void) {
    if (D_8002AE40 != 0) {
        osStopThread(&D_8003E3A0);
    }
}

void func_10009400(s32 arg0) {
    u32 phi_s1;
    struct51 *phi_s5;
    struct53 *msg;
    u32 phi_s0;
    struct {
        s32 unk0;
        s32 unk4;
        s32 unk8;
    } sp4C;
    s32 phi_s4;

    phi_s1 = 0;
    msg = NULL;
    phi_s5 = NULL;
    phi_s0 = 0;
    phi_s4 = 1;
    sp4C.unk8 = 0;
    func_100051C8((OSPfs *)&sp4C, (OSMesgQueue *)&D_8003E5D0);
    while (phi_s1 == 0) {
        osRecvMesg((OSMesgQueue *)&D_8003E5D0, (OSMesg *)&msg, 1);
        if (D_8002AC5C != 0) {
            msg->unk0 = 4;
        }
        switch (msg->unk0) {
            case 1:
                if (phi_s0 >= 2U) {
                    phi_s0 = 0;
                }
                if ((phi_s0 == 0) && (func_100095A0(D_8003E390[D_8002AE44 % 3U], phi_s5) != 0)) {
                    if (phi_s4 == 0) {
                        osRecvMesg((OSMesgQueue *)&D_8003E608, (OSMesg *)&msg, 1);
                        phi_s5 = (struct51 *)msg->unk4;
                    }
                    phi_s4 = 0;
                }
                phi_s0++;
                break;
            case 4:
                phi_s1 = 1U;
                break;
            case 10:
                phi_s1 = 1U;
                break;
        }
    }
    n_alClose(&D_8003E640);
    do {
        osRecvMesg((OSMesgQueue *)&D_8003E5D0, (OSMesg *)&msg, 1);
    } while (1);
}

s32 func_100095A0(struct50 *arg0, struct51 *arg1) {
    s16 *sp3C;
    Acmd *cmdLp;
    s32 sp34;
    s32 phi_v1;
    s32 temp_v0;
    s32 pad1;

    sp3C = (s16 *)osVirtualToPhysical((void *)arg0->unk0);
    func_100099BC();
    func_1000A03C();
    phi_v1 = IO_READ(AI_LEN_REG) >> 2;
    if (arg1 != NULL) {
        osAiSetNextBuffer((void *)arg1->unk4, arg1->unk8 * 4);
    }
    if ((phi_v1 >= 0xF9) && (D_80040F84 == 0)) {
        arg0->unk8 = D_80040F88;
        D_80040F84 = 2;
    } else {
        arg0->unk8 = D_80040F8C;
        if (D_80040F84 != 0) {
            D_80040F84--;
        }
    }
    temp_v0 = (s32)sp3C + (arg0->unk8 * 4);
    if ((temp_v0 & 0x1FFF) == 0) {
        arg0->unk4 = arg0->unk0 + 16;
        sp3C = (s16 *)((s32)sp3C + 16);
    } else {
        arg0->unk4 = arg0->unk0;
    }
    cmdLp = n_alAudioFrame(((Acmd **)&D_8003E388)[D_8002AE4C], &sp34, sp3C, arg0->unk8);
    if (sp34 == 0) {
        return 0;
    }
    arg0->unk10 = 0;
    arg0->unk68 = (s32)&D_8003E608;
    arg0->unk6C = (s32)&arg0->unk70;
    arg0->unk1C = 2;
    arg0->unk20 = 0;
    arg0->unk58 = (s32)((Acmd **)&D_8003E388)[D_8002AE4C];
    arg0->unk5C = (cmdLp - ((Acmd **)&D_8003E388)[D_8002AE4C]) * 8;
    arg0->unk28 = 2;
    arg0->unk30 = (s32)&D_100290D0;
    arg0->unk34 = (s32)rspbootTextEnd - (s32)&D_100290D0;
    arg0->unk2C = 0;
    arg0->unk38 = (s32)&D_100291A0;
    arg0->unk40 = (s32)D_8002C960;
    arg0->unk44 = 2048;
    arg0->unk60 = 0;
    arg0->unk64 = 1024;
    osWritebackDCacheAll();
    osSendMesg(&D_8003B200, (OSMesg)&arg0->unk10, 1);
    D_8002AE4C ^= 1;
    return 1;
}

s32 func_100097CC(u32 arg0, s32 arg1, s32 arg2) {
    void *sp2C;
    s32 sp28;
    struct54 *v1;
    struct54 *a2;
    struct54 *v0;
    s32 temp_a0;

    v1 = (struct54 *)D_80040F78.unk4;
    a2 = NULL;
    while (v1 != NULL) {
        temp_a0 = v1->unk8 + 0x800;
        if (arg0 < v1->unk8) {
            break;
        }
        if (temp_a0 >= ((s32)arg0 + arg1)) {
            v1->unkC = D_8002AE44;
            return osVirtualToPhysical((void *)((v1->unk10 + arg0) - v1->unk8));
        }
        a2 = v1;
        v1 = v1->unk0;
    }
    v1 = (struct54 *)D_80040F78.unk8;
    if ((v1 == NULL) || ((u32)D_8002AE48 >= 0x20U)) {
        return 0;
    }
    D_80040F78.unk8 = (s32)v1->unk0;
    if (v1->unk0 != NULL) {
        v1->unk0->unk4 = v1->unk4;
    }
    if (v1->unk4 != NULL) {
        v1->unk4->unk0 = v1->unk0;
    }
    if (a2 != NULL) {
        {
            struct54 *dl1 = v1;
            struct54 *dl2 = a2;
            dl1->unk0 = dl2->unk0;
            dl1->unk4 = dl2;
            if (dl2->unk0 != NULL) {
                dl2->unk0->unk4 = dl1;
            }
            dl2->unk0 = dl1;
        }
    } else {
        v0 = (struct54 *)D_80040F78.unk4;
        if (v0 != NULL) {
            D_80040F78.unk4 = (s32)v1;
            v1->unk0 = v0;
            v1->unk4 = NULL;
            v0->unk4 = v1;
        } else {
            D_80040F78.unk4 = (s32)v1;
            v1->unk0 = NULL;
            v1->unk4 = NULL;
        }
    }
    sp2C = (void *)v1->unk10;
    sp28 = arg0 & 1;
    arg0 -= sp28;
    v1->unk8 = arg0;
    v1->unkC = D_8002AE44;
    osPiStartDma((OSIoMesg *)&D_80040F98[D_8002AE48++], 1, 0, arg0, sp2C, 0x800, (OSMesgQueue *)&D_80041298);
    return osVirtualToPhysical(sp2C) + sp28;
}

s32 func_10009980(s32 *arg0) {
    if (D_80040F78.unk0 == 0) {
        D_80040F78.unk4 = (u8) 0;
        D_80040F78.unk8 = &D_800406B8;
        D_80040F78.unk0 = 1;
    }
    *arg0 = 0;
    return func_100097CC;
}

void func_100099BC(void) {
    s32 pad1;
    OSMesg sp50;
    u32 i;
    struct54 *temp_v0;
    struct54 *temp_v1;
    struct54 *temp_a0;
    struct54 *temp_a1;
    struct54 *temp_a2;
    s32 pad2;

    sp50 = NULL;
    for (i = 0; i < (u32)D_8002AE48; i++) {
        if (osRecvMesg((OSMesgQueue *)&D_80041298, &sp50, 0) == -1) {
            osRecvMesg((OSMesgQueue *)&D_80041298, &sp50, 1);
        }
    }
    temp_v0 = (struct54 *)D_80040F78.unk4;
    if (temp_v0 != NULL) {
        do {
            temp_a2 = temp_v0->unk0;
            if ((u32)(temp_v0->unkC + 1) < D_8002AE44) {
                if ((s32)temp_v0 == D_80040F78.unk4) {
                    D_80040F78.unk4 = (s32)temp_a2;
                }
                if (temp_v0->unk0 != NULL) {
                    temp_v0->unk0->unk4 = temp_v0->unk4;
                }
                if (temp_v0->unk4 != NULL) {
                    temp_v0->unk4->unk0 = temp_v0->unk0;
                }
                if (D_80040F78.unk8 != 0) {
                    temp_v1 = (struct54 *)D_80040F78.unk8;
                    temp_v0->unk0 = temp_v1->unk0;
                    temp_v0->unk4 = temp_v1;
                    temp_a1 = temp_v1->unk0;
                    if (temp_a1 != NULL) {
                        temp_a1->unk4 = temp_v0;
                    }
                    temp_v1->unk0 = temp_v0;
                inserted:
                    ;
                } else {
                    D_80040F78.unk8 = (s32)temp_v0;
                    temp_v0->unk0 = NULL;
                    temp_v0->unk4 = NULL;
                }
            }
        } while ((temp_v0 = temp_a2) != NULL);
    }
    D_8002AE48 = 0;
    D_8002AE44++;
}

void func_10009B2C(struct54 *arg0) {
    if (((s32)arg0 & 1) == 0) {
        arg0->unk14--;
    }
}

void func_10009B4C(struct54 *arg0) { // struct147 unk14 is wrong type
    if (((s32)arg0 & 1) == 0) {
        arg0->unk14--;
        if (arg0->unk14 == 0) {
            func_10009BE4(arg0);
        }
    }
}

void func_10009B90(struct54 *arg0) {
    if (((s32)arg0 & 1) == 0) {
        if (1 == arg0->unk15) {
            if (1 == arg0->unk16) {
                arg0->unk14 += 1;
            }
            arg0->unk15 = 2;
            return;
        }
        arg0->unk14 += 1;
    }
}

void func_10009BE4(struct54 *arg0) {
    struct54 *temp_v0;
    struct54 *temp_v1;
    struct54 *temp_a1;
    s32 new_var5;

    new_var5 = ((u32)arg0) & 1;
    if (new_var5 != 0) {
        D_8003C8E0 = 0x0F000004;
        func_150AD770();
        return;
    }
    if (((!(&D_800406A0)->unk4) && (!(&D_800406A0)->unk4)) && (!(&D_800406A0)->unk4)) {
    }
    temp_v0 = (struct54 *)arg0->unkC;
    temp_v0->unk0 = (struct54 *)arg0->unk8;
    if (arg0 == ((struct54 *)(&D_800406A0)->unk4)) {
        D_800406A4 = arg0->unk0;
    }
    temp_v0 = arg0->unk0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = arg0->unk4;
    }
    temp_v0 = arg0->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk0 = arg0->unk0;
    }
    temp_v1 = (&D_800406A0)->unk10;
    if (temp_v1 != NULL) {
        arg0->unk0 = temp_v1->unk0;
        arg0->unk4 = temp_v1;
        temp_v0 = temp_v1;
        temp_a1 = temp_v1->unk0;
        temp_v1 = NULL;
        if (temp_a1 != NULL) {
            temp_a1->unk4 = arg0;
        }
        temp_v0->unk0 = arg0;
    inserted:
        ;
    } else {
        D_800406B0 = arg0;
        arg0->unk0 = NULL;
        arg0->unk4 = NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_8F90/func_10009CBC.s")

s32 func_10009FFC(void) {
    if (D_800406A0.unk0 == 0) {
        D_800406A0.unk4 = NULL;
        D_800406A0.unk8 = &D_80040AC8;
        D_800406A0.unkC = 0;
        D_800406A0.unk10 = NULL;
        D_800406A0.unk0 = (u8)1U;
    }
    return func_10009CBC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/init_8F90/func_1000A03C.s")
void func_1000A348(void) {
    struct54 *temp_v0;
    struct54 *temp_v1;
    struct54 *temp_a0;
    volatile struct54 *temp_a1;
    struct54 *temp_a2;

    temp_v0 = (struct54 *)D_800406A0.unk4;
    if (temp_v0 != NULL) {
        do {
            temp_v1 = temp_v0->unk0;
            if ((temp_v0->unk14 == 0) && (temp_v0->unk16 == 0)) {
                temp_a0 = (struct54 *)temp_v0->unkC;
                temp_a0->unk0 = temp_v0->unk8;
                temp_v0->unkC = NULL;
                if ((s32)temp_v0 == D_800406A0.unk4) {
                    D_800406A0.unk4 = (s32)temp_v1;
                }
                temp_a0 = temp_v0->unk0;
                if (temp_a0 != NULL) {
                    temp_a0->unk4 = temp_v0->unk4;
                }
                temp_a0 = temp_v0->unk4;
                if (temp_a0 != NULL) {
                    temp_a0->unk0 = temp_v0->unk0;
                }
                temp_a0 = D_800406A0.unk10;
                if (temp_a0 != NULL) {
                    temp_v0->unk0 = temp_a0->unk0;
                    temp_v0->unk4 = temp_a0;
                    temp_a1 = temp_a0;
                    temp_a2 = temp_a0->unk0;
                    temp_a0 = NULL;
                    if (temp_a2 != NULL) {
                        temp_a2->unk4 = temp_v0;
                    }
                    temp_a1->unk0 = temp_v0;
                inserted:
                    ;
                } else {
                    D_800406A0.unk10 = temp_v0;
                    temp_v0->unk0 = NULL;
                    temp_v0->unk4 = NULL;
                }
            }
        } while ((temp_v0 = temp_v1) != NULL);
    }
}

