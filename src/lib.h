#ifndef CPRIMITIVES_H
#define CPRIMITIVES_H


typedef __UINT8_TYPE__ u8;
typedef __UINT16_TYPE__ u16;
typedef __UINT32_TYPE__ u32;
typedef __UINT64_TYPE__ u64;
typedef __uint128_t u128;

typedef __INT8_TYPE__ i8;
typedef __INT16_TYPE__ i16;
typedef __INT32_TYPE__ i32;
typedef __INT64_TYPE__ i64;
typedef __int128_t i128;

// pointer sized ints.
#if __WORDSIZE==64
typedef i64 isize;
typedef u64 usize;
#else
typedef i32 isize;
typedef u32 usize;
#endif

typedef struct {
  char chars[4];
} utf8char;

typedef _Float16 f16;
typedef float f32;
typedef double f64;
#ifdef __FLOAT128__
typedef __float128 f128;
#endif

#ifndef __STDBOOL_H
#define __bool_true_false_are_defined 1

#if defined(__STDC_VERSION__) && __STDC_VERSION__ > 201710L
#elif !defined(__cplusplus)
typedef _Bool bool;
#define true 1
#define false 0
#elif defined(__GNUC__) && !defined(__STRICT_ANSI__)
/* Define _Bool as a GNU extension. */
#define _Bool bool
#if defined(__cplusplus) && __cplusplus < 201103L
/* For C++98, define bool, false, true as a GNU extension. */
typedef bool bool;
#define false false
#define true true
#endif
#endif
#endif


#endif
