/* { dg-do run } */
/* { dg-require-effective-target avx } */
/* { dg-require-effective-target lp64 } */
/* { dg-options "-O2 -mavx" } */

#define CHECK_H "avx-check.h"
#define TEST avx_test

#include "sse4_1-pinsrq.c"
