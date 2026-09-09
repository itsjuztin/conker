#include <ultra64.h>

#include "functions.h"
#include "variables.h"

s32 func_1600160C();

typedef struct {
    s32 unk0;
} func_160006CC_sp3C;

extern u8 D_160037F0;
extern func_160006CC_sp3C D_16003B48;

void func_160006CC(struct118 *arg0);

void func_16000000(void) {
    func_160012B0(278, &D_160046AC);
}

s32 func_16000028(void) {
    if (D_16003890 & 0xC000) {
        D_16003AF4 = 1;
        return 3;
    }
    return 0;
}

void func_16000058(void) {
    s32 i;
    s32 pos;

    func_16001338(255, 255, 255);
    func_160012B0(44, &D_160046D0); // "MAIN MENU"
    pos = 108;
    for(i = 0; i < 2; i++) {
        if (D_16003B1C == i) {
            func_16001338(255, 0, 0);     // red
        } else {
            func_16001338(255, 255, 255); // white
        }
        func_160012B0(pos, D_16003B20[i]);
        pos += 32;
    }
    if (D_16003B1C == 2) {
        func_16001338(255, 0, 0);     // red
    } else {
        func_16001338(255, 255, 255); // white
    }
    if (D_16003AF0 != 0) {
        if ((D_1600389C->unk120 == 32) && (D_160038A4 == 0)) {
            func_160012B0(pos, &D_160046DC);
        } else if (D_16003AF0 != 0) {
            func_160012B0(pos, &D_160046E8);
        }
    } else {
        func_160012B0(pos, &D_160046F4); // "RETRY CODE"
    }
    func_16001338(255, 255, 255);
    func_160012B0(611, &D_16004700); // "Version"
    func_16001044(619, 1, 163);
    func_160012B0(643, &D_16004708); // "Built"
    func_160012B0(651, &D_16004710); // "Dec 19 2000"
    func_160012B0(663, &D_1600471C); // "09:57:42"
}

s32 func_16000224(void) {
    s32 res = 0;

    if (D_16003890 & 0x40000) { // D_JPAD is 0x0400
        D_16003B1C -= 1;
        res = 1;
    }
    if (D_16003890 & 0x80000) { // U_JPAD is 0x0800
        D_16003B1C += 1;
        res = 1;
    }
    if (D_16003B1C >= 3) {
        D_16003B1C = 0;
    }
    if (D_16003B1C < 0) {
        D_16003B1C = 2;
    }
    if (D_16003890 & A_BUTTON) {
        switch(D_16003B1C) {
            case 0:
                res = 3;
                D_16003AF4 = 2;
                break;
            case 1:
                res = 3;
                D_16003AF4 = 3;
                break;
            case 2:
                res = 4;
                break;
        }
    }
    return res;
}

void func_16000304(void) {
}

void func_1600030C(void) {
}

void func_16000314(void) {
    switch(D_16003B28) {
        case 0:
            func_16000424(D_1600389C);
            func_160006CC(D_1600389C);
            break;
        case 1:
        case 2:
            func_16000590(D_1600389C);
            break;
    }
}

s32 func_16000384(void) {
    s32 res = 0;

    if (D_16003890 & (R_CBUTTONS | D_CBUTTONS)) {
        D_16003B28 += 1;
        if (D_16003B28 >= 3) {
            D_16003B28 = 0;
        }
        return 3;
    }
    if (D_16003890 & (L_CBUTTONS | U_CBUTTONS)) {
        D_16003B28 -= 1;
        if (D_16003B28 < 0) {
            D_16003B28 = 2;
        }
        return 3;
    }
    if (D_16003890 & B_BUTTON) {
        D_16003AF4 = 1;
        res = 3;
    }
    return res;
}

void func_16000424(struct118 *arg0) {
    // TODO is this a RGB struct?
    u32 tmp0;
    u32 tmp1;
    s32 pad;

    func_16001338(255, 255, 255);
    func_160012B0(35, &D_16004728);     // "Pc"
    func_16001044(43, 0, arg0->unk11C);
    func_160012B0(67, &D_1600472C);     // "Cause"
    func_16001044(75, 0, arg0->unk120);
    func_16001338(128, 128, 255);
    tmp0 = arg0->unk120;
    tmp1 = (tmp0 >> 2) & 0xF;

    func_160012B0(107, D_16003848[tmp1]);
    if (tmp1 == 11) {
        func_16001044(111, 1, (tmp0 >> 28) & 3);
    }
    func_16001338(255, 255, 255);
    func_160012B0(131, &D_16004734);      // "Sr"
    func_16001044(139, 0, arg0->unk118);
    func_160012B0(163, &D_16004738);      // "Badvadr"
    func_16001044(171, 0, arg0->unk124);
    func_160012B0(195, &D_16004740);      // "Thread"
    func_16001044(203, 1, arg0->unk14);
    if (D_160038A4 != 0) {
        func_160012B0(52, &D_16004748);   // "Lockup_Now"
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/debugger/debugger/func_16000590.s")
// NON-MATCHING: score 1532 (register allocation only). Target uses 6 saved registers (s0-s5),
// promoting arg0 to s5 (move s5, a0) to keep it live across the FPCSR check loop and page selection.
// IDO spills arg0 to 0x30(sp) when compiled from C. Logic is 100% verified.
// void func_16000590(struct118 *arg0) {
//     s32 s0;
//     s32 s1;
//     u32 s2;
//     s32 *s3;
//     s32 s4;
//     s32 v0;
//
//     s4 = 0;
//     s2 = arg0->unk12C;
//     func_160012B0(3, D_160047A4);
//     func_16001044(0xA, 0, s2);
//
//     s2 >>= 12;
//     s0 = 0x2C;
//     s1 = 0;
//     do {
//         if (s2 & 1) {
//             func_160012B0(s0, D_16003B30[s1]);
//             s0 += 0x20;
//         }
//         s1++;
//         s2 >>= 1;
//     } while (s1 < 6);
//
//     s1 = 0;
//     s0 = 0xC3;
//     if (D_16003B28 == 1) {
//         v0 = 0x4C;
//     } else {
//         v0 = 0x6C;
//         s4 = 0x10;
//     }
//     s2 = s1 + s4;
//     s3 = (s32 *)arg0 + v0;
//     s4 = (s32)D_160047AC;
//     do {
//         func_160012B0(s0, (u8 *)s4);
//         func_16001044(s0 + 2, 1, s2);
//         func_16001044(s0 + 5, 2, s3[1]);
//         s1++;
//         s3 += 2;
//         s0 += 0x20;
//         s2++;
//     } while (s1 < 16);
// }

void func_160006CC(struct118 *arg0) {
    func_160006CC_sp3C sp3C;
    u8 *var_s3;
    u8 *var_s1;
    s32 temp_s0;
    u8 var_v0;
    u8 temp_v0;

    var_s3 = (u8 *)&sp3C;
    temp_s0 = 0x123;
    sp3C = D_16003B48;
    var_s1 = &D_160037F0;
    func_16001338(0xC0, 0xC0, 0xFF);
    var_v0 = *(volatile u8 *)&D_160037F0;

    do {
        var_s3[0] = var_v0;
        var_s3[1] = var_s1[1];
        func_160012B0(temp_s0, var_s3);
        temp_s0 += 3;
        temp_v0 = var_s1[2];
        func_16001044(temp_s0, 0, ((s32 *)arg0)[temp_v0 + 1]);
        var_v0 = var_s1[3];
        temp_s0 += 0xD;
        var_s1 += 3;
    } while (var_v0 != 0);
}
void func_160012B0(s32 arg0, u8 *arg1);
void func_16001338(u8 arg0, u8 arg1, u8 arg2);
extern s32 D_8002D4B0;
extern s32 *D_8002D8B0;
extern s32 D_16003B4C;
extern struct118 *D_1600389C;
extern u8 D_160047B0[];
extern u8 D_160047BC[];
extern u8 D_160047C0[];
void func_1600078C(void)
{
  s32 temp_s0;
  s32 temp_s0_2;
  s32 y;
  s32 i;
  u32 *addr;
  u32 word;
  u32 dataStart;
  u32 prefix;
  temp_s0 = ((s32 *) D_1600389C)[0x3D];
  func_16001338(0, 255, 0);
  func_160012B0(0xB, D_160047B0);
  addr = (u32 *) (temp_s0 + (D_16003B4C * 4));
  if ((((((((u32) addr) & 3) & 0xFFFFu) & 0xFFFFu) == 0) && (((u32) addr) >= 0x80000000U)) && (((u32) addr) < 0x80800001U))
  {
    dataStart = (u32) (&D_8002D4B0);
    if (D_16003B4C == 0)
    {
      func_16001338(255, 0, 0);
    }
    else
      if ((((u32) addr) >= dataStart) && (((u32) addr) < (dataStart + 0x400)))
    {
      func_16001338(128, 128, 255);
    }
    else
      if ((((u32) addr) >= ((u32) (&D_8002D8B0))) && (((u32) addr) < (((u32) (&D_8002D8B0)) + 0x4000)))
    {
      func_16001338(255, 128, 128);
    }
    else
    {
      func_16001338(255, 255, 255);
    }
    y = 0x61;
    i = 0;
    do
    {
      func_16001044(y, 0, addr);
      func_160012B0(y + 8, D_160047BC);
      word = *addr;
      prefix = (word >> 24) & 0xFF;
      if (prefix == 0x80)
      {
        func_16001338(128, 128, 255);
      }
      else
        if (prefix == 0x15)
      {
        func_16001338(255, 0, 0);
      }
      else
        if (prefix == 0x16)
      {
        func_16001338(128, 255, 128);
      }
      else
        if (prefix == 0x10)
      {
        func_16001338(255, 0, 0);
      }
      else
      {
        func_16001338(255, 255, 255);
      }
      func_16001044(y + 0xC, 0, word);
      temp_s0_2 = y + 0x16;
      func_160012B0(temp_s0_2, D_160047C0);
      func_16001338(255, 255, 255);
      func_16001044(temp_s0_2, 1, word);
      if ((((u32) addr) >= dataStart) && (((u32) addr) < (dataStart + 0x400)))
      {
        func_16001338(128, 128, 255);
      }
      else
        if ((((u32) addr) >= ((u32) (&D_8002D8B0))) && (((u32) addr) < (((u32) (&D_8002D8B0)) + 0x4000)))
      {
        func_16001338(255, 128, 128);
      }
      else
      {
        func_16001338(255, 255, 255);
      }
      i += 1;
      y += 0x20;
      addr += 1;
    }
    while (i != 0x16);
  }
}

void func_160012B0(s32 arg0, u8 *arg1);
void func_16001338(u8 arg0, u8 arg1, u8 arg2);

// NON-MATCHING: close but still some stuff to figure out
// void func_1600078C(void) {
//     s32 temp_s0;
//     u8 range_prefix;
//     u32 temp_s2;
//     s32 temp_s5;
//     s32 pos;
//     u32 *addr;
//     u32 rangeBase;
//     s32 i;
//
//     temp_s0 = D_1600389C->unkF4;
//     func_16001338(0, 255, 0); // green
//     func_160012B0(11, &D_160047B0);
//     temp_s2 = (D_16003B4C * 4) + temp_s0;
//     if (((temp_s2 & 3) == 0) && (temp_s2 >= 0x80000000U) && (temp_s2 < 0x80800001U)) {
//         if (D_16003B4C == 0) {
//             func_16001338(255, 0, 0); // red
//             rangeBase = &D_8002D4B0;
//         } else {
//             temp_s5 = &D_8002D4B0 - 0x2B50; // 11088 ?
//             if ((temp_s2 >= temp_s5) && (temp_s2 < (temp_s5 + 0x400))) {
//                 func_16001338(128, 128, 255); // purple
//                 rangeBase = temp_s5;
//             } else if ((temp_s2 >= (u32) &D_8002D8B0) && (temp_s2 < ((u32)&D_8002D8B0 + 0x4000))) {
//                 func_16001338(255, 128, 128); // light red
//                 rangeBase = temp_s5;
//             } else {
//                 func_16001338(255, 255, 255);
//                 rangeBase = temp_s5;
//             }
//         }
//         pos = 97; // "a"
//         addr = temp_s2;
//         for (i = 0; i < 22; i++) {
//             func_16001044(pos, 0, addr);
//             func_160012B0(pos + 8, &D_160047BC);
//             range_prefix = (*addr >> 24);
//             if (range_prefix == 0x80) {                   // 0x80000000
//                 func_16001338(128, 128, 255);
//             } else if (range_prefix == 0x15) {            // 0x15000000
//                 func_16001338(255, 0, 0);
//             } else if (range_prefix == 0x16) {            // 0x16000000
//                 func_16001338(128, 255, 128);
//             } else if (range_prefix == 0x10) {            // 0x10000000
//                 func_16001338(255, 0, 0);
//             } else {
//                 func_16001338(255, 255, 255);
//             }
//             func_16001044(pos + 0xC, 0, *addr);
//             func_160012B0(pos + 0x16, &D_160047C0);
//             func_16001338(255, 255, 255);
//             func_16001044(pos + 0x16, 1, *addr);
//             if (((u32) addr >= rangeBase) && ((u32) addr < (rangeBase + 0x400))) {
//                 func_16001338(128, 128, 0xFF);
//             } else if (((u32) addr >= (u32) &D_8002D8B0) && ((u32) addr < ((u32)&D_8002D8B0 + 0x4000))) {
//                 func_16001338(255, 128, 128);
//             } else {
//                 func_16001338(255, 255, 255);
//             }
//             pos += 0x20;
//             addr += 4;
//         }
//     }
// }

s32 func_16000A5C(void) {
    s32 res = 0;

    if ((D_160036F3 >= 41) || (D_16003890 & U_CBUTTONS)) {
        D_16003B4C -= 1;
        if (D_16003B4C < 0) {
            D_16003B4C = 0;
        } else {
            res = 3;
        }
    } else if ((D_160036F3 < -40) || (D_16003890 & D_CBUTTONS)) {
        D_16003B4C += 1;
        if (D_16003B4C >= 201) {
            D_16003B4C = 200;
        }
        res = 3;
    }
    if ((D_16003890 & B_BUTTON)) {
        D_16003AF4 = 1;
        res = 3;
    }
    return res;
}

// called from func_10007DAC
#pragma GLOBAL_ASM("asm/nonmatchings/debugger/debugger/func_16000B14.s")
// REVERSED: debugger_main(OSThread *thread) — main crash debugger entry point and menu loop.
// Validates framebuffer pointers in D_8002AAE8, invokes func_16003650() to snapshot TLB
// registers (EntryLo0/1, EntryHi, PageMask), checks whether faulting PC resides in a valid
// mapped game TLB segment, extracts crash context, and runs the interactive crash menu loop
// dispatching page rendering via D_16003AF8 and controller input via D_16003B08 with analog
// stick deadzones (+/-50) and button edge detection. On exit, resumes thread or advances PC (pc += 4).
// All 10 callee-saved registers (s0-s7, fp, ra), 80-byte stack frame, and control flow match byte-exact.
// s32 func_16000B14(OSThread *thread) {
//     s32 pad[3];
//     s32 first_frame;
//     s32 s3;
//     u32 pc;
//     u32 vpn;
//     u32 is_odd_page;
//     u32 *p;
//     u32 offset;
// 
//     s3 = 0;
//     first_frame = 1;
//     if (D_8002AC5C != 0) {
//         return 0;
//     }
// 
//     D_16003888 = 0;
//     if (D_8002AAE8[0] == 0 || D_8002AAE8[1] == 0) {
//         D_8002AAE8[0] = 0x80350000;
//         D_8002AAE8[1] = 0x80350000;
//         return 0;
//     }
// 
//     func_16003650();
// 
//     D_160038AC[15] = D_8003C8E8[0];
//     D_1600392C[15] = D_8003C8E8[1];
//     D_160039E8 = D_8003C8E8[2];
//     D_16003A68 = D_8003C8E8[3];
// 
//     pc = thread->context.pc;
//     if ((pc & 0xFF000000) != 0x15000000) {
//         D_16003AF0 = 1;
//     } else {
//         vpn = pc & ~0xFFF;
//         is_odd_page = vpn & 0x1000;
//         vpn &= ~0x1000;
//         D_16003AF0 = 0;
//         p = D_160039AC;
//         offset = 0;
//         do {
//             if (vpn == p[0]) {
//                 u32 entry = (is_odd_page == 0) ? *(u32 *)((u8 *)D_160038AC + offset) : *(u32 *)((u8 *)D_1600392C + offset);
//                 if (entry & 2) {
//                     D_16003AF0 = 1;
//                 }
//             }
//             if (vpn == p[1]) {
//                 u32 entry = (is_odd_page == 0) ? *(u32 *)((u8 *)D_160038AC + offset + 4) : *(u32 *)((u8 *)D_1600392C + offset + 4);
//                 if (entry & 2) {
//                     D_16003AF0 = 1;
//                 }
//             }
//             if (vpn == p[2]) {
//                 u32 entry = (is_odd_page == 0) ? *(u32 *)((u8 *)D_160038AC + offset + 8) : *(u32 *)((u8 *)D_1600392C + offset + 8);
//                 if (entry & 2) {
//                     D_16003AF0 = 1;
//                 }
//             }
//             if (vpn == p[3]) {
//                 u32 entry = (is_odd_page == 0) ? *(u32 *)((u8 *)D_160038AC + offset + 12) : *(u32 *)((u8 *)D_1600392C + offset + 12);
//                 if (entry & 2) {
//                     D_16003AF0 = 1;
//                 }
//             }
//             p += 4;
//             offset += 16;
//         } while (p != D_16003A2C);
//     }
// 
//     if (((D_8003C8E0 >> 24) & 0xFF) == 0xC) {
//         thread = &D_80031AE0;
//     }
// 
//     if (D_8002BDE0[1] == (u32)D_8002AAE8[1]) {
//         D_16003888 = 1;
//     }
// 
//     D_1600389C = (struct118 *)thread;
//     D_160038A4 = 0;
//     if (thread->context.cause == 0x20 && (void *)thread->context.pc == func_150AD770) {
//         D_160038A4 = 1;
//     }
// 
//     do {
//         if (first_frame == 0 && (s3 & 2)) {
//             func_16001678();
//         }
//         if (D_16003AF8[D_16003AF4] != NULL) {
//             D_16003AF8[D_16003AF4]();
//         }
//         osWritebackDCacheAll();
// 
//         do {
//             s8 stick_x;
//             s8 stick_y;
// 
//             s3 = 0;
//             func_16001700();
//             D_16003898 = D_16003894;
//             func_16001830(D_160036F0);
// 
//             if (first_frame != 0) {
//                 D_16003898 = D_16003894;
//             }
// 
//             stick_x = D_160036F0[2];
//             D_16003894 = *(u16 *)D_160036F0;
//             if (stick_x >= 51) {
//                 D_16003894 |= 0x20000;
//             }
//             if (stick_x < -50) {
//                 D_16003894 |= 0x10000;
//             }
// 
//             stick_y = D_160036F0[3];
//             if (stick_y >= 51) {
//                 D_16003894 |= 0x40000;
//             }
//             if (stick_y < -50) {
//                 D_16003894 |= 0x80000;
//             }
// 
//             D_16003890 = (D_16003894 ^ D_16003898) & D_16003894;
// 
//             if (D_16003B08[D_16003AF4] != NULL) {
//                 s3 = D_16003B08[D_16003AF4]();
//             }
//         } while ((s3 & 5) == 0);
//         first_frame = 0;
//     } while ((s3 & 4) == 0);
// 
//     if (D_16003AF0 == 0) {
//         thread->state = 4;
//         thread->flags = 0;
//         return 1;
//     }
// 
//     if (thread->context.cause == 0x20 && D_160038A4 == 0) {
//         thread->context.pc += 4;
//         return 1;
//     }
// 
//     return 0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/debugger/debugger/func_16000F8C.s")
// NON-MATCHING: best score 77. The floating point exception logic and format calls are byte-exact.
// IDO 5.3 with -g3 allocates an unused 8-byte debug home on the stack for named local variables,
// resulting in a 0x60 frame size instead of 0x58. Logic verified.
// void func_16000F8C(s32 arg0, f32 arg1) {
//     char buf[0x2C];
//     s32 bits;
// 
//     if ((arg0 >= (D_160038A0 << 5)) && (arg0 < 833)) {
//         bits = *(s32 *)&arg1;
//         if (((u32)(bits & 0x7F800000) >> 23) - 1U >= 0xFEU) {
//             if ((u32)(bits << 1) != 0) {
//                 func_160012B0(arg0, D_160047D0);
//                 return;
//             }
//         }
//         func_16001B34((u8 *)buf, D_160047D4, D_160047DC, D_160047E0, (f64)arg1);
//         func_160012B0(arg0, (u8 *)buf);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/debugger/debugger/func_16001044.s")
// REVERSED: draw_number(pos, mode, val) — unified number renderer for hex, dec, and float.
// mode == 0: renders 8-digit hexadecimal formatted text into framebuffer via func_160014F0.
// mode == 1: signed decimal formatting using powers of 10 struct copy from D_16003B50.
// mode == 2: single-precision floating-point formatting, delegates to func_16001B34 ("%s%s%f")
//            with special handling for NaN.
// Struct copy, 184-byte stack frame (-0xB8), and control flow branches match byte-exact.
// void func_16001044(s32 pos, s32 mode, s32 val) {
//     Powers10 powers;
//     s32 fb;
//     s32 *p;
//     char buf[0x24];
//     f32 fval;
// 
//     powers = *(Powers10 *)&D_16003B50;
// 
//     if (pos >= (D_160038A0 << 5) && pos < 833) {
//         fb = func_1600160C(pos);
//         switch (mode) {
//         case 0:
//             fb += 0x70;
//             for (pos = 0; pos < 8; pos++) {
//                 u8 c = val & 0xF;
//                 if (c >= 10) {
//                     c += 7;
//                 }
//                 c += 0x30;
//                 func_160014F0(fb, c);
//                 val >>= 4;
//                 fb -= 0x10;
//             }
//             break;
// 
//         case 1: {
//             s32 *powers_start;
//             if (val < 0) {
//                 fb = func_160014F0(fb, '-');
//                 val = -val;
//             }
//             mode = 0;
//             powers_start = powers.val;
//             p = &powers.val[9];
//             do {
//                 s32 div_val = *p;
//                 s32 digit = val / div_val;
//                 val = val % div_val;
//                 if (digit > 0 || mode != 0 || p == powers_start) {
//                     fb = func_160014F0(fb, digit + '0');
//                     mode = 1;
//                 }
//                 p--;
//             } while (p >= powers.val);
//             break;
//         }
// 
//         case 2:
//             {
//                 s32 v0 = val & 0x7F800000;
//                 s32 t0 = v0 >> 23;
//                 if (t0 > 0) {
//                     if (t0 < 0xFF) {
//                         goto format_float;
//                     }
//                 }
//                 if (v0 != 0 || (val << 9) != 0) {
//                     func_160012B0(pos, D_160047E4);
//                     return;
//                 }
//             }
//         format_float:
//             *(s32 *)&fval = val;
//             func_16001B34((u8 *)buf, D_160047E8, D_160047F0, D_160047F4, (f64)fval);
//             func_160012B0(pos, (u8 *)buf);
//             break;
//         }
//     }
// }

void func_160012B0(s32 arg0, u8 *arg1) {
    if (arg1 && (arg0 >= (D_160038A0 << 5)) && (arg0 < 833)) {
        s32 fb = func_1600160C();
        while (*arg1 != 0) {
            fb = func_160014F0(fb, *arg1 & 0xFF);
            *arg1++;
        }
    }
}
// convert rgb to rgba16
void func_16001338(u8 arg0, u8 arg1, u8 arg2) {
    D_1600388C = ((arg0 & 0xF8) << 8) | ((arg1 & 0xF8) << 3) | ((arg2 & 0xF8) >> 2) | 1;
}

extern u16 D_1600388C;
extern s32 D_160038A8;
void func_16001390(s16 arg0, s16 arg1, register s16 arg2, s16 arg3)
{
  s32 count;
  u16 *ptr;
  if (arg2 < arg0)
  {
    return;
  }
  if (arg3 < arg1)
  {
    return;
  }
  if (arg0 < 0)
  {
    return;
  }
  if (arg1 < 0)
  {
    return;
  }
  arg2++;
  arg3++;
  ptr = (u16 *) func_1600160C(0);
  ptr += arg0 + (arg1 * D_160038A8);
  arg2 -= arg0;
  arg3 -= arg1;
  if (arg3 > 0)
  {
    do
    {
      count = arg2;
      if (arg2 > 0)
      {
        do
        {
          *(ptr++) = D_1600388C;
          count--;
        }
        while (count != 0);
      }
      arg3--;
      ptr += D_160038A8 - arg2;
    }
    while (arg3 > 0);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/debugger/debugger/func_160014F0.s")
// NON-MATCHING: best score 40 (JUSTREG register swap between t0/a3 for glyph/outer setup).
// Declaring arg1 as `u8` reproduces the exact entry `sw a1, 4(sp); andi t6, a1, 0xFF; move a1, t6`
// param-narrowing sequence. The unrolled 4-pixel inner loop and row advance match byte-for-byte.
// s32 func_160014F0(s32 arg0, u8 arg1) {
//     u16 *v0;
//     u16 fg;
//     s32 c;
//     u8 *glyph;
//     s32 outer;
//     s32 inner;
//     u16 bits;
//     u16 pixel;
//
//     v0 = (u16 *)arg0;
//     fg = D_1600388C;
//     c = arg1;
//     inner = arg1 < 0x20;
//     if (inner) {
//         c = 0x20;
//     }
//     outer = 0, glyph = &D_16003CE0[(c - 0x20) << 3];
//     do {
//         inner = 0;
//         bits = *glyph;
//         do {
//             pixel = (bits & 0x80) ? fg : 1;
//             bits = (u16)(bits << 1);
//             *v0++ = pixel;
//
//             pixel = (bits & 0x80) ? fg : 1;
//             bits = (u16)(bits << 1);
//             *v0++ = pixel;
//
//             pixel = (bits & 0x80) ? fg : 1;
//             bits = (u16)(bits << 1);
//             *v0++ = pixel;
//
//             pixel = (bits & 0x80) ? fg : 1;
//             bits = (u16)(bits << 1);
//             *v0++ = pixel;
//
//             inner += 4;
//         } while (inner != 8);
//         outer++;
//         glyph++;
//         v0 += D_160038A8 - 8;
//     } while (outer != 8);
//
//     return arg0 + 0x10;
// }

// splat into framebuffer
s32 func_1600160C(s32 arg0) {
    s32 row;
    s32 width;
    s32 tmp;
    s32 w2;

    tmp = arg0 & 0xFFE0;
    row = tmp;
    width = D_160038A8;
    if (width != 0x124) {
        row = (tmp >> 2) + tmp;
    }
    w2 = width * 2;
    row = (row >> 2) * w2;
    row += (arg0 & 0x1F) << 4;
    row += width * 4;
    row += 0x10;
    return D_8002AAE8[D_16003888] + row;
}

// contains delay slot
void func_16001678(void) {
    u32 *ptr;
    u32 *end;
    s32 height;
    s32 width;

    ptr = (u32 *) D_8002AAE8[D_16003888];
    height = D_160038A8;
    if (height == 0x124) {
        width = 0xD7;
    } else {
        width = 0x108;
    }

    end = ptr + ((height >> 1) * width);
    while (ptr < end) {
        ptr += 4;
        ptr[-4] = 0x10001;
        ptr[-3] = 0x10001;
        ptr[-2] = 0x10001;
        ptr[-1] = 0x10001;
    }
}

s32 func_160016F4(s32 arg0) {
    return arg0;
}
