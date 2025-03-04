/*******************************************************************************
 * Copyright (C) 2015 Maxim Integrated Products, Inc., All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY,  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated shall
 * not be used except as stated in the Maxim Integrated Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all ownership rights.
 *******************************************************************************/

#ifndef __BIGNUM_ECDSA_GENERIC_API_H__
#define __BIGNUM_ECDSA_GENERIC_API_H__

#include "ucl_config.h"
#include "ucl_types.h"

#define DOUBLE_DIGIT unsigned long long int
#define MAX_DIGIT 0xFFFFFFFF
#define HALF_DIGIT 0xFFFF
#define MAX_DIGITS 65
#define DIGIT_BITS 32

/* Length of digit in bytes */
#define DIGIT_LEN (DIGIT_BITS / 8)

void bignum_modsquare(u32 *r,u32 *a,u32 *m,u32 k);
int bignum_modmult(u32 *r,u32 *a,u32 *b,u32 *m,u32 k);
extern void bignum_d2us(u8 *a,u32  len,u32 *b,u32 digits);
extern void bignum_us2d(u32 *a,u32 digits,u8 *b,u32 len);
extern int bignum_cmp(u32 *a,u32 *b,u32 s);
int bignum_isnul(u32 *A,u32 tA);
extern u32 bignum_digits(u32 *N,u32 tn);
extern u32 bignum_digitbits(u32 a);
extern void bignum_copydigit(u32 *E,u32 F,u32 tE);
extern void bignum_copyzero(u32 *E,u32 tE);
extern void bignum_copy(u32 *E,u32 *F,u32 tE);

u32 bignum_add(u32 *w,u32 *x,u32 *y,u32 digits);
u32 bignum_sub(u32 *w,u32 *x,u32 *y,u32 digits);
void bignum_mult(u32 *t,u32 *a,u32 *b,u32 n);
void bignum_mult_operand_scanning_form(u32 *t,u32 *a,u32 *b,u32 n);
void bignum_multopt(u32 *t,u32 *a,u32 *b,u32 n);
void bignum_multlimited(u32 *t,u32 *a,u32 *b,u32 n);
void bignum_multscalar(u32 *t,u32 a,u32 *b,u32 n);
void bignum_mult2sizes(u32 *t,u32 *a,u32 na,u32 *b,u32 nb);
void bignum_square(u32 *a,u32 *b,u32 digits);
u32 bignum_leftshift(u32 *a,u32 *b,u32 c,u32 digits);
u32 bignum_rightshift(u32 *a,u32 *b,u32 c,u32 digits);

void bignum_modinv(u32 *x,u32 *a0,u32 *b0,u32 digits);
void bignum_modinv_subs(u32 *x,u32 *a0,u32 *b0,u32 digits);
void bignum_modinv3(u32 *x,u32 *a0,u32 *b0,u32 digits);
void bignum_modinv4(u32 *x,u32 *a0,u32 *b0,u32 digits);
void bignum_modadd(u32 *r,u32 *a,u32 *b,u32 *m,u32 k);
void bignum_modexp(u32 *r,u32 *a,u32 *b,u32 *m,u32 k);
void bignum_mod(u32 *b,u32 *c,u32 cDigits,u32 *d,u32 dDigits);
void bignum_div(u32 *rmd,u32 *b,u32 *c,u32 cDigits,u32 *d,u32 dDigits);
#endif
