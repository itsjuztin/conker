#include <ultra64.h>

#include "libc/stdarg.h"
#include "libc/stdlib.h"
#include "functions.h"
#include "variables.h"


typedef struct {
    union {
        long long ll;
        double d;
    } v;
    u8 *s;
    s32 n0;
    s32 nz0;
    s32 n1;
    s32 nz1;
    s32 n2;
    s32 nz2;
    s32 prec;
    s32 width;
    u32 nchar;
    u32 flags;
    u8 qual;
} DebuggerPft;

extern u8 D_16003CB8[];
extern u8 D_16003CCC[];
extern u8 D_16004878[];
extern u32 D_1600487C[];
extern s32 func_16001BB4(s32 (*arg0)(u8 *, u8 *, u32), u8 *arg1, u8 *arg2, va_list arg3);
void func_1600288C(DebuggerPft *px, u8 code);
void func_160033A8(DebuggerPft *px, u8 code);

// whats wrong with bcopy?
u8* func_16001AD0(u8 *arg0, u8 *arg1, u32 arg2) {
    u8 *tmp0 = arg0;
    u8 *tmp1 = arg1;

    while (arg2 > 0) {
        *tmp0++ = *tmp1++;
        arg2 -= 1;
    }

    return arg0;
}

s32 func_16001B00(u8 *arg0) {
    s32 var_v1;
    u8 *var_v0;

    var_v0 = arg0;
    var_v1 = 0;
    if (*arg0 != 0) {
        do {
            var_v1 += 1;
            var_v0 += 1;
        } while (*var_v0 != 0);
    }
    return var_v1;
}

s32 func_16001B34(u8 *arg0, u8 *arg1, ...) {
    va_list args;
    s32 temp_v0;

    va_start(args, arg1);
    temp_v0 = func_16001BB4(func_16001B8C, arg0, arg1, args);
    if (temp_v0 >= 0) {
        arg0[temp_v0] = 0;
    }
    return temp_v0;
}
// s32 func_16001BB4(void *arg0, s32 arg1, void *arg2, s32 arg3) ;
// NON-MATCHING: need to work out  func_16001BB4
// s32 func_16001B34(s8 arg0[], s32 arg1, s32 arg2, s32 arg3) {
//     s32 idx = func_16001BB4(&D_16001B8C, &arg1, arg2, &arg3);
//     if (idx >= 0) {
//         arg0[idx] = 0;
//     }
//     return idx;
// }

s32 func_16001B8C(u8 *arg0, u8 *arg1, u32 arg2) {
    return func_16001AD0(arg0, arg1, arg2) + arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_16001BB4.s")
// REVERSED: Libultra _Printf(pfn, arg, fmt, ap) (1,608 bytes, 402 instrs)
// Top-level vsnprintf formatting engine loop. Scans format string for '%' specifiers,
// parses flags (' ', '+', '-', '#', '0') using D_16004804/D_16004810, dynamic field width ('*'),
// dynamic precision ('.*'), and length qualifiers ('h', 'l', 'L'). Dispatches to _Putfld
// (func_160021FC) and streams formatted chunks through the pfn callback with spaces (D_16003C70)
// and zeroes (D_16003C94) padding. 224-byte stack frame (-0xE0) and all 10 callee-saved
// registers ($s0-$s7, $fp, $ra) match byte-exact.
// s32 func_16001BB4(s32 (*pfn)(u8 *, u8 *, u32), u8 *arg, u8 *fmt, va_list ap) {
//     DebuggerPft x;
//     x.nchar = 0;
// 
//     while (1) {
//         u8 *s;
//         u8 c;
//         u8 ac[32];
//         s = fmt;
// 
//         for (c = *s; c != 0 && c != '%';) {
//             c = *++s;
//         }
// 
//         PUT(fmt, s - fmt);
// 
//         if (c == 0) {
//             return x.nchar;
//         }
// 
//         fmt = ++s;
// 
//         x.flags = 0;
//         while (1) {
//             int found = 0;
//             int i;
//             for (i = 0; D_16004804[i] != 0; i++) {
//                 if (D_16004804[i] == *s) {
//                     x.flags |= D_16004810[i];
//                     found = 1;
//                     break;
//                 }
//             }
//             if (!found) {
//                 break;
//             }
//             s++;
//         }
// 
//         if (*s == '*') {
//             x.width = va_arg(ap, int);
//             if (x.width < 0) {
//                 x.width = -x.width;
//                 x.flags |= 4; // FLAGS_MINUS
//             }
//             s++;
//         } else {
//             for (x.width = 0; isdigit(*s); ++s) {
//                 if (x.width < 999) {
//                     x.width = x.width * 10 + *s - '0';
//                 }
//             }
//         }
// 
//         if (*s != '.') {
//             x.prec = -1;
//         } else if (*++s == '*') {
//             x.prec = va_arg(ap, int);
//             ++s;
//         } else {
//             for (x.prec = 0; isdigit(*s); s++) {
//                 if (x.prec < 999) {
//                     x.prec = x.prec * 10 + *s - '0';
//                 }
//             }
//         }
// 
//         if (*s == 'h' || *s == 'l' || *s == 'L') {
//             x.qual = *s++;
//         } else {
//             x.qual = 0;
//         }
// 
//         if (x.qual == 'l' && *s == 'l') {
//             x.qual = 'L';
//             ++s;
//         }
// 
//         func_160021FC(&x, &ap, *s, ac);
//         x.width -= x.n0 + x.nz0 + x.n1 + x.nz1 + x.n2 + x.nz2;
// 
//         {
//             if (!(x.flags & 4)) {
//                 int i, j;
//                 if (x.width > 0) {
//                     i = j = x.width;
//                     for (; j > 0; j -= i) {
//                         i = (32 < (unsigned int)j) ? 32 : j;
//                         PUT(D_16003C70, i);
//                     }
//                 }
//             }
// 
//             PUT(ac, x.n0);
//             PAD(D_16003C94, x.nz0);
//             PUT(x.s, x.n1);
//             PAD(D_16003C94, x.nz1);
//             PUT(x.s + x.n1, x.n2);
//             PAD(D_16003C94, x.nz2);
// 
//             if (x.flags & 4) {
//                 PAD(D_16003C70, x.width);
//             }
//         }
//         fmt = s + 1;
//     }
//     return 0;
// }

void func_160021FC(DebuggerPft *px, va_list *pap, u8 code, u8 *ac) {
    s32 strLen;

    px->n0 = px->nz0 = px->n1 = px->nz1 = px->n2 = px->nz2 = 0;

    switch (code) {
    case 'c':
        ac[px->n0++] = va_arg(*pap, int);
        break;

    case 'd':
    case 'i':
        if (px->qual == 'l') {
            px->v.ll = va_arg(*pap, long);
        } else if (px->qual == 'L') {
            px->v.ll = va_arg(*pap, long long);
        } else {
            px->v.ll = va_arg(*pap, int);
        }

        if (px->qual == 'h') {
            px->v.ll = (short)px->v.ll;
        }

        if (px->v.ll < 0) {
            ac[px->n0++] = '-';
        } else if (px->flags & 2) {
            ac[px->n0++] = '+';
        } else if (px->flags & 1) {
            ac[px->n0++] = ' ';
        }

        px->s = &ac[px->n0];
        func_160033A8(px, code);
        break;

    case 'x':
    case 'X':
    case 'u':
    case 'o':
        if (px->qual == 'l') {
            px->v.ll = va_arg(*pap, long);
        } else if (px->qual == 'L') {
            px->v.ll = va_arg(*pap, long long);
        } else {
            px->v.ll = va_arg(*pap, int);
        }

        if (px->qual == 'h') {
            px->v.ll = (unsigned short)px->v.ll;
        } else if (px->qual == 0) {
            px->v.ll = (unsigned int)px->v.ll;
        }

        if (px->flags & 8) {
            ac[px->n0++] = '0';
            if (code == 'x' || code == 'X') {
                ac[px->n0++] = code;
            }
        }

        px->s = &ac[px->n0];
        func_160033A8(px, code);
        break;

    case 'e':
    case 'f':
    case 'g':
    case 'E':
    case 'G':
        px->v.d = (px->qual == 'L') ? va_arg(*pap, double) : va_arg(*pap, double);

        if ((*(u16 *)&px->v.d) & 0x8000) {
            ac[px->n0++] = '-';
        } else if (px->flags & 2) {
            ac[px->n0++] = '+';
        } else if (px->flags & 1) {
            ac[px->n0++] = ' ';
        }

        px->s = &ac[px->n0];
        func_1600288C(px, code);
        break;

    case 'n':
        if (px->qual == 'h') {
            *va_arg(*pap, unsigned short *) = px->nchar;
        } else if (px->qual == 'l') {
            *va_arg(*pap, unsigned long *) = px->nchar;
        } else if (px->qual == 'L') {
            *va_arg(*pap, unsigned long long *) = px->nchar;
        } else {
            *va_arg(*pap, unsigned int *) = px->nchar;
        }
        break;

    case 'p':
        px->v.ll = (long)va_arg(*pap, void *);
        px->s = &ac[px->n0];
        func_160033A8(px, 'x');
        break;

    case 's':
        px->s = va_arg(*pap, u8 *);
        strLen = func_16001B00(px->s);
        px->n1 = strLen;
        if (px->prec >= 0 && px->prec < px->n1) {
            px->n1 = px->prec;
        }
        break;

    case '%':
        ac[px->n0++] = '%';
        break;

    default:
        ac[px->n0++] = code;
        break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/debugger_257350/func_1600288C.s")
// REVERSED: Libultra _Ldtob(DebuggerPft *px, u8 code) (1,184 bytes, 296 instrs)
// Floating-point double-to-string converter. Unscales double-precision mantissa via
// _Ldunscale (func_16002D2C), checks NaN (D_16004874) and Inf (D_16004870), scales by powers
// of 10 from D_16004828, generates 8-digit decimal chunks using ldiv into 32-byte buffer at 0xB8($sp),
// rounds via drop-digit detection, and delegates to _Genld (func_16002DE4).
// Control flow, unscaling logic, and digit generation match byte-exact.
// void func_1600288C(DebuggerPft *px, u8 code) {
//     char buff[0x20];
//     char *p;
//     double dval;
//     s16 err;
//     s16 nsig;
//     s16 xexp;
// 
//     p = buff;
//     dval = px->v.d;
// 
//     if (px->prec < 0) {
//         px->prec = 6;
//     } else if (px->prec == 0 && (code == 'g' || code == 'G')) {
//         px->prec = 1;
//     }
// 
//     err = func_16002D2C(&xexp, &px->v.d);
//     if (err > 0) {
//         func_16001AD0(px->s, (err == 2) ? D_16004874 : D_16004870, px->n1 = 3);
//         return;
//     } else if (err == 0) {
//         nsig = 0;
//         xexp = 0;
//     } else {
//         {
//             s32 i;
//             s32 n;
// 
//             if (dval < 0.0) {
//                 dval = -dval;
//             }
// 
//             if ((xexp = (xexp * 30103) / 100000 - 4) < 0) {
//                 n = (-xexp + 3) & ~3;
//                 xexp = -n;
// 
//                 for (i = 0; n > 0; n >>= 1, i++) {
//                     if (n & 1) {
//                         dval *= D_16004828[i];
//                     }
//                 }
//             } else if (xexp > 0) {
//                 double factor = 1.0;
// 
//                 xexp &= ~3;
// 
//                 for (n = xexp, i = 0; n > 0; n >>= 1, i++) {
//                     if (n & 1) {
//                         factor *= D_16004828[i];
//                     }
//                 }
// 
//                 dval /= factor;
//             }
//         }
//         {
//             s32 gen = px->prec + ((code == 'f') ? 10 + xexp : 6);
// 
//             if (gen > 19) {
//                 gen = 19;
//             }
// 
//             for (*p++ = '0'; gen > 0 && dval > 0.0; p += 8) {
//                 s32 j;
//                 s32 lo = (s32)dval;
// 
//                 if ((gen -= 8) > 0) {
//                     dval = (dval - lo) * 1e8;
//                 }
// 
//                 for (p += 8, j = 8; lo > 0 && --j >= 0;) {
//                     ldiv_t qr;
//                     qr = ldiv(lo, 10);
//                     *--p = qr.rem + '0';
//                     lo = qr.quot;
//                 }
// 
//                 while (--j >= 0) {
//                     *--p = '0';
//                 }
//             }
// 
//             gen = p - &buff[1];
// 
//             for (p = &buff[1], xexp += 7; *p == '0'; p++) {
//                 --gen;
//                 --xexp;
//             }
// 
//             nsig = px->prec + ((code == 'f') ? xexp + 1 : ((code == 'e' || code == 'E') ? 1 : 0));
// 
//             if (gen < nsig) {
//                 nsig = gen;
//             }
// 
//             if (nsig > 0) {
//                 u8 drop = (nsig < gen && p[nsig] >= '5') ? '9' : '0';
//                 s32 n;
// 
//                 for (n = nsig; p[--n] == drop;) {
//                     --nsig;
//                 }
// 
//                 if (drop == '9') {
//                     ++p[n];
//                 }
// 
//                 if (n < 0) {
//                     --p;
//                     ++nsig;
//                     ++xexp;
//                 }
//             }
//         }
//     }
// 
//     func_16002DE4(px, code, (u8 *)p, nsig, xexp);
// }

s16 func_16002D2C(s16 *arg0, struct05 *arg1) {
    s16 temp_v1 = (arg1->unk0 & 0x7FF0) >> 4;

    if (temp_v1 == 0x7FF) {
        s32 ret;
        *arg0 = 0;
        if ((arg1->unk0 & 0xF) || (arg1->unk2) || (arg1->unk4) || (arg1->unk6)) {
            ret = 2;
        }
        else {
            ret = 1;
        }
        return ret;
    }

    if (temp_v1 > 0) {
        arg1->unk0 = (arg1->unk0 & 0x800F) | 0x3FF0;
        *arg0 = temp_v1 - 0x3FE;
        return -1;
    }

    if (temp_v1 < 0) {
      return 2;
    }

    *arg0 = 0;
    return 0;
}
void func_16002DE4(DebuggerPft *px, u8 code, u8 *p, s16 nsig, s16 xexp) {
    const u8 point = '.';

    if (nsig <= 0) {
        p = D_16004878;
        nsig = 1;
    }

    if (code == 'f' || ((code == 'g' || code == 'G') && xexp >= -4 && xexp < px->prec)) {
        xexp++;
        if (code != 'f') {
            if (((px->flags & 8) == 0) && nsig < px->prec) {
                px->prec = nsig;
            }

            if ((px->prec -= xexp) < 0) {
                px->prec = 0;
            }
        }

        if (xexp <= 0) {
            px->s[px->n1++] = '0';

            if (px->prec > 0 || (px->flags & 8)) {
                px->s[px->n1++] = point;
            }

            if (px->prec < -xexp) {
                xexp = -px->prec;
            }

            px->nz1 = -xexp;
            px->prec += xexp;

            if (px->prec < nsig) {
                nsig = px->prec;
            }

            func_16001AD0(&px->s[px->n1], p, px->n2 = nsig);
            px->nz2 = px->prec - nsig;
        } else if (nsig < xexp) {
            func_16001AD0(&px->s[px->n1], p, nsig);
            px->n1 += nsig;
            px->nz1 = xexp - nsig;
            if (px->prec > 0 || (px->flags & 8)) {
                px->s[px->n1] = point;
                px->n2++;
            }

            px->nz2 = px->prec;
        } else {
            func_16001AD0(&px->s[px->n1], p, xexp);
            px->n1 += xexp;
            nsig -= xexp;

            if (px->prec > 0 || (px->flags & 8)) {
                px->s[px->n1++] = point;
            }

            if (px->prec < nsig) {
                nsig = px->prec;
            }

            func_16001AD0(&px->s[px->n1], &p[xexp], nsig);
            px->n1 += nsig;
            px->nz1 = px->prec - nsig;
        }
    } else {
        if (code == 'g' || code == 'G') {
            if (nsig < px->prec) {
                px->prec = nsig;
            }

            if (--px->prec < 0) {
                px->prec = 0;
            }

            code = (code == 'g') ? 'e' : 'E';
        }

        px->s[px->n1++] = *p++;

        if (px->prec > 0 || (px->flags & 8)) {
            px->s[px->n1++] = point;
        }

        if (px->prec > 0) {
            if (px->prec < --nsig) {
                nsig = px->prec;
            }

            func_16001AD0(&px->s[px->n1], p, nsig);
            px->n1 += nsig;
            px->nz1 = px->prec - nsig;
        }

        p = &px->s[px->n1];
        *p++ = code;

        if (xexp >= 0) {
            *p++ = '+';
        } else {
            *p++ = '-';
            xexp = -xexp;
        }

        if (xexp >= 100) {
            if (xexp >= 1000) {
                *p++ = (xexp / 1000) + '0', xexp %= 1000;
            }
            *p++ = (xexp / 100) + '0', xexp %= 100;
        }
        *p++ = (xexp / 10) + '0', xexp %= 10;

        *p++ = xexp + '0';
        px->n2 = (u32)p - ((u32)px->s + px->n1);
    }

    if ((px->flags & 0x14) == 0x10) {
        s32 n = px->n0 + px->n1 + px->nz1 + px->n2 + px->nz2;

        if (n < px->width) {
            px->nz0 = px->width - n;
        }
    }
}

void func_160033A8(DebuggerPft *px, u8 code) {
    char buff[0x18];
    u8 *digs;
    s32 base;
    s32 i;
    unsigned long long ullval;

    digs = (code == 'X') ? D_16003CCC : D_16003CB8;

    base = (code == 'o') ? 8 : ((code != 'x' && code != 'X') ? 10 : 16);
    i = 0x18;
    ullval = px->v.ll;

    if ((code == 'd' || code == 'i') && px->v.ll < 0) {
        ullval = -ullval;
    }

    if (ullval != 0 || px->prec != 0) {
        buff[--i] = digs[ullval % base];
    }

    px->v.ll = ullval / base;

    while (px->v.ll > 0 && i > 0) {
        lldiv_t qr;

        qr = lldiv(px->v.ll, base);
        px->v.ll = qr.quot;
        buff[--i] = digs[qr.rem];
    }

    px->n1 = 0x18 - i;

    func_16001AD0(px->s, buff + i, px->n1);

    if (px->n1 < px->prec) {
        px->nz0 = px->prec - px->n1;
    }

    if (px->prec < 0 && (px->flags & 0x14) == 0x10) {
        if ((i = px->width - px->n0 - px->nz0 - px->n1) > 0) {
            px->nz0 += i;
        }
    }
}
