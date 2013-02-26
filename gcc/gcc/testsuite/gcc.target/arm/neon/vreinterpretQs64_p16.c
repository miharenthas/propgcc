/* Test the `vreinterpretQs64_p16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretQs64_p16 (void)
{
  int64x2_t out_int64x2_t;
  poly16x8_t arg0_poly16x8_t;

  out_int64x2_t = vreinterpretq_s64_p16 (arg0_poly16x8_t);
}

/* { dg-final { cleanup-saved-temps } } */
