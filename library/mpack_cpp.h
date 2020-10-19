# 1 "./C/include/mpack/mpack.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "./C/include/mpack/mpack.h"
# 488 "./C/include/mpack/mpack.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
} max_align_t;
# 489 "./C/include/mpack/mpack.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 2 3 4
# 490 "./C/include/mpack/mpack.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h" 1 3 4
# 491 "./C/include/mpack/mpack.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 492 "./C/include/mpack/mpack.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/9/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 2 3 4
# 493 "./C/include/mpack/mpack.h" 2


# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 122 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 154 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 385 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 410 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 428 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 499 "/usr/include/string.h" 3 4

# 496 "./C/include/mpack/mpack.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 647 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 820 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 840 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1003 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1014 "/usr/include/stdlib.h" 2 3 4
# 1023 "/usr/include/stdlib.h" 3 4

# 497 "./C/include/mpack/mpack.h" 2



# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 173 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 279 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 292 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 379 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 873 "/usr/include/stdio.h" 3 4

# 501 "./C/include/mpack/mpack.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 52 "/usr/include/errno.h" 3 4

# 502 "./C/include/mpack/mpack.h" 2
# 570 "./C/include/mpack/mpack.h"


# 1040 "./C/include/mpack/mpack.h"
    
# 1040 "./C/include/mpack/mpack.h"
   void mpack_assert_fail(const char* message);







    void mpack_assert_fail_wrapper(const char* message) __attribute__((noreturn));

        void mpack_assert_fail_format(const char* format, ...) __attribute__((noreturn));
# 1079 "./C/include/mpack/mpack.h"
    void mpack_break_hit(const char* message);

        void mpack_break_hit_format(const char* format, ...);
# 1221 "./C/include/mpack/mpack.h"
        inline void* mpack_realloc(void* old_ptr, size_t used_size, size_t new_size) {
            ((void)(used_size));
            return realloc(old_ptr, new_size);
        }
# 1236 "./C/include/mpack/mpack.h"


# 1259 "./C/include/mpack/mpack.h"


# 1383 "./C/include/mpack/mpack.h"
typedef enum mpack_error_t {
    mpack_ok = 0,
    mpack_error_io = 2,
    mpack_error_invalid,
    mpack_error_unsupported,
    mpack_error_type,
    mpack_error_too_big,
    mpack_error_memory,
    mpack_error_bug,
    mpack_error_data,
    mpack_error_eof,
} mpack_error_t;





const char* mpack_error_to_string(mpack_error_t error);
# 1409 "./C/include/mpack/mpack.h"
typedef enum mpack_type_t {
    mpack_type_missing = 0,
    mpack_type_nil,
    mpack_type_bool,
    mpack_type_int,
    mpack_type_uint,
    mpack_type_float,
    mpack_type_double,
    mpack_type_str,
    mpack_type_bin,
    mpack_type_array,
    mpack_type_map,
# 1430 "./C/include/mpack/mpack.h"
} mpack_type_t;





const char* mpack_type_to_string(mpack_type_t type);
# 1462 "./C/include/mpack/mpack.h"
typedef struct mpack_tag_t mpack_tag_t;



struct mpack_tag_t {
    mpack_type_t type;






    union {
        uint64_t u;
        int64_t i;
        double d;
        float f;
        
# 1479 "./C/include/mpack/mpack.h" 3 4
       _Bool 
# 1479 "./C/include/mpack/mpack.h"
                b;


        uint32_t l;



        uint32_t n;
    } v;
};
# 1511 "./C/include/mpack/mpack.h"
inline mpack_tag_t mpack_tag_make_nil(void) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_nil;
    return ret;
}


inline mpack_tag_t mpack_tag_make_bool(
# 1518 "./C/include/mpack/mpack.h" 3 4
                                            _Bool 
# 1518 "./C/include/mpack/mpack.h"
                                                 value) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_bool;
    ret.v.b = value;
    return ret;
}


inline mpack_tag_t mpack_tag_make_true(void) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_bool;
    ret.v.b = 
# 1529 "./C/include/mpack/mpack.h" 3 4
             1
# 1529 "./C/include/mpack/mpack.h"
                 ;
    return ret;
}


inline mpack_tag_t mpack_tag_make_false(void) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_bool;
    ret.v.b = 
# 1537 "./C/include/mpack/mpack.h" 3 4
             0
# 1537 "./C/include/mpack/mpack.h"
                  ;
    return ret;
}


inline mpack_tag_t mpack_tag_make_int(int64_t value) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_int;
    ret.v.i = value;
    return ret;
}


inline mpack_tag_t mpack_tag_make_uint(uint64_t value) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_uint;
    ret.v.u = value;
    return ret;
}


inline mpack_tag_t mpack_tag_make_float(float value) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_float;
    ret.v.f = value;
    return ret;
}


inline mpack_tag_t mpack_tag_make_double(double value) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_double;
    ret.v.d = value;
    return ret;
}


inline mpack_tag_t mpack_tag_make_array(uint32_t count) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_array;
    ret.v.n = count;
    return ret;
}


inline mpack_tag_t mpack_tag_make_map(uint32_t count) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_map;
    ret.v.n = count;
    return ret;
}


inline mpack_tag_t mpack_tag_make_str(uint32_t length) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_str;
    ret.v.l = length;
    return ret;
}


inline mpack_tag_t mpack_tag_make_bin(uint32_t length) {
    mpack_tag_t ret = {(mpack_type_t)0, {0}};
    ret.type = mpack_type_bin;
    ret.v.l = length;
    return ret;
}
# 1632 "./C/include/mpack/mpack.h"
inline mpack_type_t mpack_tag_type(mpack_tag_t* tag) {
    return tag->type;
}
# 1643 "./C/include/mpack/mpack.h"
inline 
# 1643 "./C/include/mpack/mpack.h" 3 4
            _Bool 
# 1643 "./C/include/mpack/mpack.h"
                 mpack_tag_bool_value(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_bool)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1644" "\n%s\n" "tag is not a bool!", "tag->type == mpack_type_bool", "", 
# 1644 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1644 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.b;
}
# 1661 "./C/include/mpack/mpack.h"
inline int64_t mpack_tag_int_value(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_int)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1662" "\n%s\n" "tag is not an int!", "tag->type == mpack_type_int", "", 
# 1662 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1662 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.i;
}
# 1679 "./C/include/mpack/mpack.h"
inline uint64_t mpack_tag_uint_value(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_uint)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1680" "\n%s\n" "tag is not a uint!", "tag->type == mpack_type_uint", "", 
# 1680 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1680 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.u;
}
# 1695 "./C/include/mpack/mpack.h"
inline float mpack_tag_float_value(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_float)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1696" "\n%s\n" "tag is not a float!", "tag->type == mpack_type_float", "", 
# 1696 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1696 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.f;
}
# 1711 "./C/include/mpack/mpack.h"
inline double mpack_tag_double_value(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_double)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1712" "\n%s\n" "tag is not a double!", "tag->type == mpack_type_double", "", 
# 1712 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1712 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.d;
}
# 1724 "./C/include/mpack/mpack.h"
inline uint32_t mpack_tag_array_count(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_array)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1725" "\n%s\n" "tag is not an array!", "tag->type == mpack_type_array", "", 
# 1725 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1725 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.n;
}
# 1737 "./C/include/mpack/mpack.h"
inline uint32_t mpack_tag_map_count(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_map)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1738" "\n%s\n" "tag is not a map!", "tag->type == mpack_type_map", "", 
# 1738 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1738 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.n;
}
# 1750 "./C/include/mpack/mpack.h"
inline uint32_t mpack_tag_str_length(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_str)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1751" "\n%s\n" "tag is not a str!", "tag->type == mpack_type_str", "", 
# 1751 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1751 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.l;
}
# 1763 "./C/include/mpack/mpack.h"
inline uint32_t mpack_tag_bin_length(mpack_tag_t* tag) {
    ((!(tag->type == mpack_type_bin)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1764" "\n%s\n" "tag is not a bin!", "tag->type == mpack_type_bin", "", 
# 1764 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1764 "./C/include/mpack/mpack.h"
   ) : (void)0);
    return tag->v.l;
}
# 1811 "./C/include/mpack/mpack.h"
inline uint32_t mpack_tag_bytes(mpack_tag_t* tag) {




    ((!(tag->type == mpack_type_str || tag->type == mpack_type_bin)) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "1816" "\n%s\n" "tag is not a str or bin!", "tag->type == mpack_type_str || tag->type == mpack_type_bin", "", 
# 1816 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 1816 "./C/include/mpack/mpack.h"
   ) : (void)0)
                                       ;

    return tag->v.l;
}
# 1854 "./C/include/mpack/mpack.h"
int mpack_tag_cmp(mpack_tag_t left, mpack_tag_t right);
# 1872 "./C/include/mpack/mpack.h"
inline 
# 1872 "./C/include/mpack/mpack.h" 3 4
            _Bool 
# 1872 "./C/include/mpack/mpack.h"
                 mpack_tag_equal(mpack_tag_t left, mpack_tag_t right) {
    return mpack_tag_cmp(left, right) == 0;
}
# 1886 "./C/include/mpack/mpack.h"
void mpack_tag_debug_pseudo_json(mpack_tag_t tag, char* buffer, size_t buffer_size,
        const char* prefix, size_t prefix_size);







void mpack_tag_debug_describe(mpack_tag_t tag, char* buffer, size_t buffer_size);
# 1904 "./C/include/mpack/mpack.h"
typedef void (*mpack_print_callback_t)(void* context, const char* data, size_t count);



typedef struct mpack_print_t {
    char* buffer;
    size_t size;
    size_t count;
    mpack_print_callback_t callback;
    void* context;
} mpack_print_t;

void mpack_print_append(mpack_print_t* print, const char* data, size_t count);

inline void mpack_print_append_cstr(mpack_print_t* print, const char* cstr) {
    mpack_print_append(print, cstr, strlen(cstr));
}

void mpack_print_flush(mpack_print_t* print);

void mpack_print_file_callback(void* context, const char* data, size_t count);
# 1950 "./C/include/mpack/mpack.h"
inline mpack_tag_t mpack_tag_nil(void) {
    return mpack_tag_make_nil();
}


inline mpack_tag_t mpack_tag_bool(
# 1955 "./C/include/mpack/mpack.h" 3 4
                                       _Bool 
# 1955 "./C/include/mpack/mpack.h"
                                            value) {
    return mpack_tag_make_bool(value);
}


inline mpack_tag_t mpack_tag_true(void) {
    return mpack_tag_make_true();
}


inline mpack_tag_t mpack_tag_false(void) {
    return mpack_tag_make_false();
}


inline mpack_tag_t mpack_tag_int(int64_t value) {
    return mpack_tag_make_int(value);
}


inline mpack_tag_t mpack_tag_uint(uint64_t value) {
    return mpack_tag_make_uint(value);
}


inline mpack_tag_t mpack_tag_float(float value) {
    return mpack_tag_make_float(value);
}


inline mpack_tag_t mpack_tag_double(double value) {
    return mpack_tag_make_double(value);
}


inline mpack_tag_t mpack_tag_array(int32_t count) {
    return mpack_tag_make_array((uint32_t)count);
}


inline mpack_tag_t mpack_tag_map(int32_t count) {
    return mpack_tag_make_map((uint32_t)count);
}


inline mpack_tag_t mpack_tag_str(int32_t length) {
    return mpack_tag_make_str((uint32_t)length);
}


inline mpack_tag_t mpack_tag_bin(int32_t length) {
    return mpack_tag_make_bin((uint32_t)length);
}
# 2031 "./C/include/mpack/mpack.h"
inline uint8_t mpack_load_u8(const char* p) {
    return (uint8_t)p[0];
}

inline uint16_t mpack_load_u16(const char* p) {





    return (uint16_t)((((uint16_t)(uint8_t)p[0]) << 8) |
           ((uint16_t)(uint8_t)p[1]));

}

inline uint32_t mpack_load_u32(const char* p) {





    return (((uint32_t)(uint8_t)p[0]) << 24) |
           (((uint32_t)(uint8_t)p[1]) << 16) |
           (((uint32_t)(uint8_t)p[2]) << 8) |
            ((uint32_t)(uint8_t)p[3]);

}

inline uint64_t mpack_load_u64(const char* p) {

    uint64_t val;
    memcpy(&val, p, sizeof(val));
    return __builtin_bswap64(val);
# 2074 "./C/include/mpack/mpack.h"
}

inline void mpack_store_u8(char* p, uint8_t val) {
    uint8_t* u = (uint8_t*)p;
    u[0] = val;
}

inline void mpack_store_u16(char* p, uint16_t val) {




    uint8_t* u = (uint8_t*)p;
    u[0] = (uint8_t)((val >> 8) & 0xFF);
    u[1] = (uint8_t)( val & 0xFF);

}

inline void mpack_store_u32(char* p, uint32_t val) {




    uint8_t* u = (uint8_t*)p;
    u[0] = (uint8_t)((val >> 24) & 0xFF);
    u[1] = (uint8_t)((val >> 16) & 0xFF);
    u[2] = (uint8_t)((val >> 8) & 0xFF);
    u[3] = (uint8_t)( val & 0xFF);

}

inline void mpack_store_u64(char* p, uint64_t val) {

    val = __builtin_bswap64(val);
    memcpy(p, &val, sizeof(val));
# 2120 "./C/include/mpack/mpack.h"
}

inline int8_t mpack_load_i8 (const char* p) {return (int8_t) mpack_load_u8 (p);}
inline int16_t mpack_load_i16(const char* p) {return (int16_t)mpack_load_u16(p);}
inline int32_t mpack_load_i32(const char* p) {return (int32_t)mpack_load_u32(p);}
inline int64_t mpack_load_i64(const char* p) {return (int64_t)mpack_load_u64(p);}
inline void mpack_store_i8 (char* p, int8_t val) {mpack_store_u8 (p, (uint8_t) val);}
inline void mpack_store_i16(char* p, int16_t val) {mpack_store_u16(p, (uint16_t)val);}
inline void mpack_store_i32(char* p, int32_t val) {mpack_store_u32(p, (uint32_t)val);}
inline void mpack_store_i64(char* p, int64_t val) {mpack_store_u64(p, (uint64_t)val);}

inline float mpack_load_float(const char* p) {
    _Static_assert(1234 == 1234, "float byte order does not match int byte order! float/double " "encoding is not properly implemented on this platform.");
    _Static_assert(sizeof(float) == sizeof(uint32_t), "float is wrong size??");
    union {
        float f;
        uint32_t u;
    } v;
    v.u = mpack_load_u32(p);
    return v.f;
}

inline double mpack_load_double(const char* p) {
    _Static_assert(1234 == 1234, "float byte order does not match int byte order! float/double " "encoding is not properly implemented on this platform.");
    _Static_assert(sizeof(double) == sizeof(uint64_t), "double is wrong size??");
    union {
        double d;
        uint64_t u;
    } v;
    v.u = mpack_load_u64(p);
    return v.d;
}

inline void mpack_store_float(char* p, float value) {
    _Static_assert(1234 == 1234, "float byte order does not match int byte order! float/double " "encoding is not properly implemented on this platform.");
    union {
        float f;
        uint32_t u;
    } v;
    v.f = value;
    mpack_store_u32(p, v.u);
}

inline void mpack_store_double(char* p, double value) {
    _Static_assert(1234 == 1234, "float byte order does not match int byte order! float/double " "encoding is not properly implemented on this platform.");
    union {
        double d;
        uint64_t u;
    } v;
    v.d = value;
    mpack_store_u64(p, v.u);
}
# 2228 "./C/include/mpack/mpack.h"
typedef struct mpack_track_element_t {
    mpack_type_t type;
    uint32_t left;




    
# 2235 "./C/include/mpack/mpack.h" 3 4
   _Bool 
# 2235 "./C/include/mpack/mpack.h"
        key_needs_value;
} mpack_track_element_t;

typedef struct mpack_track_t {
    size_t count;
    size_t capacity;
    mpack_track_element_t* elements;
} mpack_track_t;
# 2299 "./C/include/mpack/mpack.h"


# 2320 "./C/include/mpack/mpack.h"




struct mpack_track_t;
# 2351 "./C/include/mpack/mpack.h"
typedef struct mpack_writer_t mpack_writer_t;
# 2360 "./C/include/mpack/mpack.h"
typedef void (*mpack_writer_flush_t)(mpack_writer_t* writer, const char* buffer, size_t count);
# 2386 "./C/include/mpack/mpack.h"
typedef void (*mpack_writer_error_t)(mpack_writer_t* writer, mpack_error_t error);




typedef void (*mpack_writer_teardown_t)(mpack_writer_t* writer);




struct mpack_writer_t {



    mpack_writer_flush_t flush;
    mpack_writer_error_t error_fn;
    mpack_writer_teardown_t teardown;
    void* context;

    char* buffer;
    char* current;
    char* end;
    mpack_error_t error;


    mpack_track_t track;





    void* reserved[2];

};


void mpack_writer_track_push(mpack_writer_t* writer, mpack_type_t type, uint32_t count);
void mpack_writer_track_pop(mpack_writer_t* writer, mpack_type_t type);
void mpack_writer_track_element(mpack_writer_t* writer);
void mpack_writer_track_bytes(mpack_writer_t* writer, size_t count);
# 2465 "./C/include/mpack/mpack.h"
void mpack_writer_init(mpack_writer_t* writer, char* buffer, size_t size);
# 2485 "./C/include/mpack/mpack.h"
void mpack_writer_init_growable(mpack_writer_t* writer, char** data, size_t* size);






void mpack_writer_init_error(mpack_writer_t* writer, mpack_error_t error);
# 2501 "./C/include/mpack/mpack.h"
void mpack_writer_init_filename(mpack_writer_t* writer, const char* filename);






inline void mpack_writer_init_file(mpack_writer_t* writer, const char* filename) {
    mpack_writer_init_filename(writer, filename);
}
# 2527 "./C/include/mpack/mpack.h"
void mpack_writer_init_stdfile(mpack_writer_t* writer, FILE* stdfile, 
# 2527 "./C/include/mpack/mpack.h" 3 4
                                                                     _Bool 
# 2527 "./C/include/mpack/mpack.h"
                                                                          close_when_done);
# 2577 "./C/include/mpack/mpack.h"
mpack_error_t mpack_writer_destroy(mpack_writer_t* writer);
# 2611 "./C/include/mpack/mpack.h"
inline void mpack_writer_set_context(mpack_writer_t* writer, void* context) {
    writer->context = context;
}







inline void* mpack_writer_context(mpack_writer_t* writer) {
    return writer->context;
}
# 2639 "./C/include/mpack/mpack.h"
void mpack_writer_set_flush(mpack_writer_t* writer, mpack_writer_flush_t flush);
# 2654 "./C/include/mpack/mpack.h"
inline void mpack_writer_set_error_handler(mpack_writer_t* writer, mpack_writer_error_t error_fn) {
    writer->error_fn = error_fn;
}
# 2667 "./C/include/mpack/mpack.h"
inline void mpack_writer_set_teardown(mpack_writer_t* writer, mpack_writer_teardown_t teardown) {
    writer->teardown = teardown;
}
# 2698 "./C/include/mpack/mpack.h"
void mpack_writer_flush_message(mpack_writer_t* writer);






inline size_t mpack_writer_buffer_used(mpack_writer_t* writer) {
    return (size_t)(writer->current - writer->buffer);
}





inline size_t mpack_writer_buffer_left(mpack_writer_t* writer) {
    return (size_t)(writer->end - writer->current);
}





inline size_t mpack_writer_buffer_size(mpack_writer_t* writer) {
    return (size_t)(writer->end - writer->buffer);
}
# 2741 "./C/include/mpack/mpack.h"
void mpack_writer_flag_error(mpack_writer_t* writer, mpack_error_t error);







inline mpack_error_t mpack_writer_error(mpack_writer_t* writer) {
    return writer->error;
}
# 2769 "./C/include/mpack/mpack.h"
void mpack_write_tag(mpack_writer_t* writer, mpack_tag_t tag);
# 2781 "./C/include/mpack/mpack.h"
void mpack_write_i8(mpack_writer_t* writer, int8_t value);


void mpack_write_i16(mpack_writer_t* writer, int16_t value);


void mpack_write_i32(mpack_writer_t* writer, int32_t value);


void mpack_write_i64(mpack_writer_t* writer, int64_t value);


inline void mpack_write_int(mpack_writer_t* writer, int64_t value) {
    mpack_write_i64(writer, value);
}


void mpack_write_u8(mpack_writer_t* writer, uint8_t value);


void mpack_write_u16(mpack_writer_t* writer, uint16_t value);


void mpack_write_u32(mpack_writer_t* writer, uint32_t value);


void mpack_write_u64(mpack_writer_t* writer, uint64_t value);


inline void mpack_write_uint(mpack_writer_t* writer, uint64_t value) {
    mpack_write_u64(writer, value);
}
# 2824 "./C/include/mpack/mpack.h"
void mpack_write_float(mpack_writer_t* writer, float value);


void mpack_write_double(mpack_writer_t* writer, double value);


void mpack_write_bool(mpack_writer_t* writer, 
# 2830 "./C/include/mpack/mpack.h" 3 4
                                             _Bool 
# 2830 "./C/include/mpack/mpack.h"
                                                  value);


void mpack_write_true(mpack_writer_t* writer);


void mpack_write_false(mpack_writer_t* writer);


void mpack_write_nil(mpack_writer_t* writer);


void mpack_write_object_bytes(mpack_writer_t* writer, const char* data, size_t bytes);
# 2895 "./C/include/mpack/mpack.h"
void mpack_start_array(mpack_writer_t* writer, uint32_t count);
# 2909 "./C/include/mpack/mpack.h"
void mpack_start_map(mpack_writer_t* writer, uint32_t count);
# 2921 "./C/include/mpack/mpack.h"
inline void mpack_finish_array(mpack_writer_t* writer) {
    mpack_writer_track_pop(writer, mpack_type_array);
}
# 2935 "./C/include/mpack/mpack.h"
inline void mpack_finish_map(mpack_writer_t* writer) {
    mpack_writer_track_pop(writer, mpack_type_map);
}
# 2961 "./C/include/mpack/mpack.h"
void mpack_write_str(mpack_writer_t* writer, const char* str, uint32_t length);
# 2974 "./C/include/mpack/mpack.h"
void mpack_write_utf8(mpack_writer_t* writer, const char* str, uint32_t length);
# 2987 "./C/include/mpack/mpack.h"
void mpack_write_cstr(mpack_writer_t* writer, const char* cstr);
# 3001 "./C/include/mpack/mpack.h"
void mpack_write_cstr_or_nil(mpack_writer_t* writer, const char* cstr);
# 3015 "./C/include/mpack/mpack.h"
void mpack_write_utf8_cstr(mpack_writer_t* writer, const char* cstr);
# 3030 "./C/include/mpack/mpack.h"
void mpack_write_utf8_cstr_or_nil(mpack_writer_t* writer, const char* cstr);
# 3040 "./C/include/mpack/mpack.h"
void mpack_write_bin(mpack_writer_t* writer, const char* data, uint32_t count);
# 3079 "./C/include/mpack/mpack.h"
void mpack_start_str(mpack_writer_t* writer, uint32_t count);






void mpack_start_bin(mpack_writer_t* writer, uint32_t count);
# 3124 "./C/include/mpack/mpack.h"
void mpack_write_bytes(mpack_writer_t* writer, const char* data, size_t count);
# 3137 "./C/include/mpack/mpack.h"
inline void mpack_finish_str(mpack_writer_t* writer) {
    mpack_writer_track_pop(writer, mpack_type_str);
}
# 3152 "./C/include/mpack/mpack.h"
inline void mpack_finish_bin(mpack_writer_t* writer) {
    mpack_writer_track_pop(writer, mpack_type_bin);
}
# 3184 "./C/include/mpack/mpack.h"
inline void mpack_finish_type(mpack_writer_t* writer, mpack_type_t type) {
    mpack_writer_track_pop(writer, type);
}
# 3259 "./C/include/mpack/mpack.h"

# 3406 "./C/include/mpack/mpack.h"

# 3425 "./C/include/mpack/mpack.h"






struct mpack_track_t;
# 3476 "./C/include/mpack/mpack.h"
typedef struct mpack_reader_t mpack_reader_t;
# 3495 "./C/include/mpack/mpack.h"
typedef size_t (*mpack_reader_fill_t)(mpack_reader_t* reader, char* buffer, size_t count);
# 3505 "./C/include/mpack/mpack.h"
typedef void (*mpack_reader_skip_t)(mpack_reader_t* reader, size_t count);
# 3531 "./C/include/mpack/mpack.h"
typedef void (*mpack_reader_error_t)(mpack_reader_t* reader, mpack_error_t error);




typedef void (*mpack_reader_teardown_t)(mpack_reader_t* reader);




struct mpack_reader_t {
    void* context;
    mpack_reader_fill_t fill;
    mpack_reader_error_t error_fn;
    mpack_reader_teardown_t teardown;
    mpack_reader_skip_t skip;

    char* buffer;
    size_t size;

    const char* data;
    const char* end;

    mpack_error_t error;


    mpack_track_t track;

};
# 3578 "./C/include/mpack/mpack.h"
void mpack_reader_init(mpack_reader_t* reader, char* buffer, size_t size, size_t count);





void mpack_reader_init_error(mpack_reader_t* reader, mpack_error_t error);
# 3594 "./C/include/mpack/mpack.h"
void mpack_reader_init_data(mpack_reader_t* reader, const char* data, size_t count);







void mpack_reader_init_filename(mpack_reader_t* reader, const char* filename);






inline void mpack_reader_init_file(mpack_reader_t* reader, const char* filename) {
    mpack_reader_init_filename(reader, filename);
}
# 3627 "./C/include/mpack/mpack.h"
void mpack_reader_init_stdfile(mpack_reader_t* reader, FILE* stdfile, 
# 3627 "./C/include/mpack/mpack.h" 3 4
                                                                     _Bool 
# 3627 "./C/include/mpack/mpack.h"
                                                                          close_when_done);
# 3666 "./C/include/mpack/mpack.h"
mpack_error_t mpack_reader_destroy(mpack_reader_t* reader);
# 3686 "./C/include/mpack/mpack.h"
inline void mpack_reader_set_context(mpack_reader_t* reader, void* context) {
    reader->context = context;
}
# 3697 "./C/include/mpack/mpack.h"
inline void* mpack_reader_context(mpack_reader_t* reader) {
    return reader->context;
}
# 3718 "./C/include/mpack/mpack.h"
void mpack_reader_set_fill(mpack_reader_t* reader, mpack_reader_fill_t fill);
# 3736 "./C/include/mpack/mpack.h"
void mpack_reader_set_skip(mpack_reader_t* reader, mpack_reader_skip_t skip);
# 3751 "./C/include/mpack/mpack.h"
inline void mpack_reader_set_error_handler(mpack_reader_t* reader, mpack_reader_error_t error_fn) {
    reader->error_fn = error_fn;
}
# 3764 "./C/include/mpack/mpack.h"
inline void mpack_reader_set_teardown(mpack_reader_t* reader, mpack_reader_teardown_t teardown) {
    reader->teardown = teardown;
}
# 3783 "./C/include/mpack/mpack.h"
inline mpack_error_t mpack_reader_error(mpack_reader_t* reader) {
    return reader->error;
}
# 3797 "./C/include/mpack/mpack.h"
void mpack_reader_flag_error(mpack_reader_t* reader, mpack_error_t error);
# 3809 "./C/include/mpack/mpack.h"
inline mpack_error_t mpack_reader_flag_if_error(mpack_reader_t* reader, mpack_error_t error) {
    if (error != mpack_ok)
        mpack_reader_flag_error(reader, error);
    return mpack_reader_error(reader);
}
# 3833 "./C/include/mpack/mpack.h"
size_t mpack_reader_remaining(mpack_reader_t* reader, const char** data);
# 3857 "./C/include/mpack/mpack.h"
mpack_tag_t mpack_read_tag(mpack_reader_t* reader);
# 3874 "./C/include/mpack/mpack.h"
mpack_tag_t mpack_peek_tag(mpack_reader_t* reader);
# 3889 "./C/include/mpack/mpack.h"
void mpack_skip_bytes(mpack_reader_t* reader, size_t count);
# 3909 "./C/include/mpack/mpack.h"
void mpack_read_bytes(mpack_reader_t* reader, char* p, size_t count);
# 3934 "./C/include/mpack/mpack.h"
void mpack_read_utf8(mpack_reader_t* reader, char* p, size_t byte_count);
# 3962 "./C/include/mpack/mpack.h"
void mpack_read_cstr(mpack_reader_t* reader, char* buf, size_t buffer_size, size_t byte_count);
# 3994 "./C/include/mpack/mpack.h"
void mpack_read_utf8_cstr(mpack_reader_t* reader, char* buf, size_t buffer_size, size_t byte_count);






char* mpack_read_bytes_alloc_impl(mpack_reader_t* reader, size_t count, 
# 4001 "./C/include/mpack/mpack.h" 3 4
                                                                       _Bool 
# 4001 "./C/include/mpack/mpack.h"
                                                                            null_terminated);
# 4013 "./C/include/mpack/mpack.h"
inline char* mpack_read_bytes_alloc(mpack_reader_t* reader, size_t count) {
    return mpack_read_bytes_alloc_impl(reader, count, 
# 4014 "./C/include/mpack/mpack.h" 3 4
                                                     0
# 4014 "./C/include/mpack/mpack.h"
                                                          );
}
# 4048 "./C/include/mpack/mpack.h"
const char* mpack_read_bytes_inplace(mpack_reader_t* reader, size_t count);
# 4084 "./C/include/mpack/mpack.h"
const char* mpack_read_utf8_inplace(mpack_reader_t* reader, size_t count);
# 4100 "./C/include/mpack/mpack.h"
inline 
# 4100 "./C/include/mpack/mpack.h" 3 4
            _Bool 
# 4100 "./C/include/mpack/mpack.h"
                 mpack_should_read_bytes_inplace(mpack_reader_t* reader, size_t count) {
    return (reader->size == 0 || count <= reader->size / 32);
}
# 4140 "./C/include/mpack/mpack.h"
void mpack_done_type(mpack_reader_t* reader, mpack_type_t type);
# 4153 "./C/include/mpack/mpack.h"
inline void mpack_done_array(mpack_reader_t* reader) {
    mpack_done_type(reader, mpack_type_array);
}
# 4164 "./C/include/mpack/mpack.h"
inline void mpack_done_map(mpack_reader_t* reader) {
    mpack_done_type(reader, mpack_type_map);
}
# 4175 "./C/include/mpack/mpack.h"
inline void mpack_done_str(mpack_reader_t* reader) {
    mpack_done_type(reader, mpack_type_str);
}
# 4186 "./C/include/mpack/mpack.h"
inline void mpack_done_bin(mpack_reader_t* reader) {
    mpack_done_type(reader, mpack_type_bin);
}
# 4209 "./C/include/mpack/mpack.h"
void mpack_discard(mpack_reader_t* reader);
# 4232 "./C/include/mpack/mpack.h"
void mpack_print_data_to_buffer(const char* data, size_t data_size, char* buffer, size_t buffer_size);
# 4243 "./C/include/mpack/mpack.h"
void mpack_print_data_to_callback(const char* data, size_t size, mpack_print_callback_t callback, void* context);





void mpack_print_data_to_file(const char* data, size_t len, FILE* file);





inline void mpack_print_data_to_stdout(const char* data, size_t len) {
    mpack_print_data_to_file(data, len, 
# 4256 "./C/include/mpack/mpack.h" 3 4
                                       stdout
# 4256 "./C/include/mpack/mpack.h"
                                             );
}






void mpack_print_stdfile_to_callback(FILE* file, mpack_print_callback_t callback, void* context);






inline void mpack_print(const char* data, size_t len) {
    mpack_print_data_to_stdout(data, len);
}
# 4352 "./C/include/mpack/mpack.h"


# 4371 "./C/include/mpack/mpack.h"


# 4415 "./C/include/mpack/mpack.h"
uint8_t mpack_expect_u8(mpack_reader_t* reader);
# 4425 "./C/include/mpack/mpack.h"
uint16_t mpack_expect_u16(mpack_reader_t* reader);
# 4435 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_u32(mpack_reader_t* reader);
# 4445 "./C/include/mpack/mpack.h"
uint64_t mpack_expect_u64(mpack_reader_t* reader);
# 4455 "./C/include/mpack/mpack.h"
int8_t mpack_expect_i8(mpack_reader_t* reader);
# 4465 "./C/include/mpack/mpack.h"
int16_t mpack_expect_i16(mpack_reader_t* reader);
# 4475 "./C/include/mpack/mpack.h"
int32_t mpack_expect_i32(mpack_reader_t* reader);
# 4485 "./C/include/mpack/mpack.h"
int64_t mpack_expect_i64(mpack_reader_t* reader);
# 4496 "./C/include/mpack/mpack.h"
float mpack_expect_float(mpack_reader_t* reader);
# 4507 "./C/include/mpack/mpack.h"
double mpack_expect_double(mpack_reader_t* reader);







float mpack_expect_float_strict(mpack_reader_t* reader);







double mpack_expect_double_strict(mpack_reader_t* reader);
# 4542 "./C/include/mpack/mpack.h"
uint8_t mpack_expect_u8_range(mpack_reader_t* reader, uint8_t min_value, uint8_t max_value);
# 4552 "./C/include/mpack/mpack.h"
uint16_t mpack_expect_u16_range(mpack_reader_t* reader, uint16_t min_value, uint16_t max_value);
# 4562 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_u32_range(mpack_reader_t* reader, uint32_t min_value, uint32_t max_value);
# 4572 "./C/include/mpack/mpack.h"
uint64_t mpack_expect_u64_range(mpack_reader_t* reader, uint64_t min_value, uint64_t max_value);
# 4582 "./C/include/mpack/mpack.h"
inline unsigned int mpack_expect_uint_range(mpack_reader_t* reader, unsigned int min_value, unsigned int max_value) {


    if (sizeof(unsigned int) == 4)
        return (unsigned int)mpack_expect_u32_range(reader, (uint32_t)min_value, (uint32_t)max_value);
    return (unsigned int)mpack_expect_u64_range(reader, min_value, max_value);
}
# 4598 "./C/include/mpack/mpack.h"
inline uint8_t mpack_expect_u8_max(mpack_reader_t* reader, uint8_t max_value) {
    return mpack_expect_u8_range(reader, 0, max_value);
}
# 4610 "./C/include/mpack/mpack.h"
inline uint16_t mpack_expect_u16_max(mpack_reader_t* reader, uint16_t max_value) {
    return mpack_expect_u16_range(reader, 0, max_value);
}
# 4622 "./C/include/mpack/mpack.h"
inline uint32_t mpack_expect_u32_max(mpack_reader_t* reader, uint32_t max_value) {
    return mpack_expect_u32_range(reader, 0, max_value);
}
# 4634 "./C/include/mpack/mpack.h"
inline uint64_t mpack_expect_u64_max(mpack_reader_t* reader, uint64_t max_value) {
    return mpack_expect_u64_range(reader, 0, max_value);
}
# 4646 "./C/include/mpack/mpack.h"
inline unsigned int mpack_expect_uint_max(mpack_reader_t* reader, unsigned int max_value) {
    return mpack_expect_uint_range(reader, 0, max_value);
}
# 4658 "./C/include/mpack/mpack.h"
int8_t mpack_expect_i8_range(mpack_reader_t* reader, int8_t min_value, int8_t max_value);
# 4668 "./C/include/mpack/mpack.h"
int16_t mpack_expect_i16_range(mpack_reader_t* reader, int16_t min_value, int16_t max_value);
# 4678 "./C/include/mpack/mpack.h"
int32_t mpack_expect_i32_range(mpack_reader_t* reader, int32_t min_value, int32_t max_value);
# 4688 "./C/include/mpack/mpack.h"
int64_t mpack_expect_i64_range(mpack_reader_t* reader, int64_t min_value, int64_t max_value);
# 4698 "./C/include/mpack/mpack.h"
inline int mpack_expect_int_range(mpack_reader_t* reader, int min_value, int max_value) {


    if (sizeof(int) == 4)
        return (int)mpack_expect_i32_range(reader, (int32_t)min_value, (int32_t)max_value);
    return (int)mpack_expect_i64_range(reader, min_value, max_value);
}
# 4715 "./C/include/mpack/mpack.h"
inline int8_t mpack_expect_i8_max(mpack_reader_t* reader, int8_t max_value) {
    return mpack_expect_i8_range(reader, 0, max_value);
}
# 4728 "./C/include/mpack/mpack.h"
inline int16_t mpack_expect_i16_max(mpack_reader_t* reader, int16_t max_value) {
    return mpack_expect_i16_range(reader, 0, max_value);
}
# 4741 "./C/include/mpack/mpack.h"
inline int32_t mpack_expect_i32_max(mpack_reader_t* reader, int32_t max_value) {
    return mpack_expect_i32_range(reader, 0, max_value);
}
# 4754 "./C/include/mpack/mpack.h"
inline int64_t mpack_expect_i64_max(mpack_reader_t* reader, int64_t max_value) {
    return mpack_expect_i64_range(reader, 0, max_value);
}
# 4766 "./C/include/mpack/mpack.h"
inline int mpack_expect_int_max(mpack_reader_t* reader, int max_value) {
    return mpack_expect_int_range(reader, 0, max_value);
}
# 4780 "./C/include/mpack/mpack.h"
float mpack_expect_float_range(mpack_reader_t* reader, float min_value, float max_value);
# 4792 "./C/include/mpack/mpack.h"
double mpack_expect_double_range(mpack_reader_t* reader, double min_value, double max_value);
# 4815 "./C/include/mpack/mpack.h"
inline unsigned int mpack_expect_uint(mpack_reader_t* reader) {


    if (sizeof(unsigned int) == 4)
        return (unsigned int)mpack_expect_u32(reader);


    return (unsigned int)mpack_expect_u64_max(reader, 
# 4822 "./C/include/mpack/mpack.h" 3 4
                                                     (0x7fffffff * 2U + 1U)
# 4822 "./C/include/mpack/mpack.h"
                                                             );

}
# 4834 "./C/include/mpack/mpack.h"
inline int mpack_expect_int(mpack_reader_t* reader) {


    if (sizeof(int) == 4)
        return (int)mpack_expect_i32(reader);


    return (int)mpack_expect_i64_range(reader, 
# 4841 "./C/include/mpack/mpack.h" 3 4
                                              (-0x7fffffff - 1)
# 4841 "./C/include/mpack/mpack.h"
                                                     , 0x7fffffff);

}
# 4862 "./C/include/mpack/mpack.h"
void mpack_expect_uint_match(mpack_reader_t* reader, uint64_t value);







void mpack_expect_int_match(mpack_reader_t* reader, int64_t value);
# 4880 "./C/include/mpack/mpack.h"
void mpack_expect_nil(mpack_reader_t* reader);







# 4887 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 4887 "./C/include/mpack/mpack.h"
    mpack_expect_bool(mpack_reader_t* reader);




void mpack_expect_true(mpack_reader_t* reader);




void mpack_expect_false(mpack_reader_t* reader);
# 4955 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_map(mpack_reader_t* reader);
# 4974 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_map_range(mpack_reader_t* reader, uint32_t min_count, uint32_t max_count);
# 4993 "./C/include/mpack/mpack.h"
inline uint32_t mpack_expect_map_max(mpack_reader_t* reader, uint32_t max_count) {
    return mpack_expect_map_range(reader, 0, max_count);
}
# 5011 "./C/include/mpack/mpack.h"
void mpack_expect_map_match(mpack_reader_t* reader, uint32_t count);
# 5038 "./C/include/mpack/mpack.h"

# 5038 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 5038 "./C/include/mpack/mpack.h"
    mpack_expect_map_or_nil(mpack_reader_t* reader, uint32_t* count);
# 5058 "./C/include/mpack/mpack.h"

# 5058 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 5058 "./C/include/mpack/mpack.h"
    mpack_expect_map_max_or_nil(mpack_reader_t* reader, uint32_t max_count, uint32_t* count);
# 5075 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_array(mpack_reader_t* reader);
# 5089 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_array_range(mpack_reader_t* reader, uint32_t min_count, uint32_t max_count);
# 5103 "./C/include/mpack/mpack.h"
inline uint32_t mpack_expect_array_max(mpack_reader_t* reader, uint32_t max_count) {
    return mpack_expect_array_range(reader, 0, max_count);
}
# 5116 "./C/include/mpack/mpack.h"
void mpack_expect_array_match(mpack_reader_t* reader, uint32_t count);
# 5139 "./C/include/mpack/mpack.h"

# 5139 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 5139 "./C/include/mpack/mpack.h"
    mpack_expect_array_or_nil(mpack_reader_t* reader, uint32_t* count);
# 5154 "./C/include/mpack/mpack.h"

# 5154 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 5154 "./C/include/mpack/mpack.h"
    mpack_expect_array_max_or_nil(mpack_reader_t* reader, uint32_t max_count, uint32_t* count);
# 5216 "./C/include/mpack/mpack.h"
void* mpack_expect_array_alloc_impl(mpack_reader_t* reader,
        size_t element_size, uint32_t max_count, uint32_t* out_count, 
# 5217 "./C/include/mpack/mpack.h" 3 4
                                                                     _Bool 
# 5217 "./C/include/mpack/mpack.h"
                                                                          allow_nil);
# 5238 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_str(mpack_reader_t* reader);
# 5249 "./C/include/mpack/mpack.h"
size_t mpack_expect_str_buf(mpack_reader_t* reader, char* buf, size_t bufsize);
# 5266 "./C/include/mpack/mpack.h"
size_t mpack_expect_utf8(mpack_reader_t* reader, char* buf, size_t bufsize);
# 5279 "./C/include/mpack/mpack.h"
inline uint32_t mpack_expect_str_max(mpack_reader_t* reader, uint32_t maxsize) {
    uint32_t length = mpack_expect_str(reader);
    if (length > maxsize) {
        mpack_reader_flag_error(reader, mpack_error_too_big);
        return 0;
    }
    return length;
}
# 5299 "./C/include/mpack/mpack.h"
inline void mpack_expect_str_length(mpack_reader_t* reader, uint32_t count) {
    if (mpack_expect_str(reader) != count)
        mpack_reader_flag_error(reader, mpack_error_type);
}







void mpack_expect_str_match(mpack_reader_t* reader, const char* str, size_t length);
# 5319 "./C/include/mpack/mpack.h"
void mpack_expect_cstr(mpack_reader_t* reader, char* buf, size_t size);
# 5332 "./C/include/mpack/mpack.h"
void mpack_expect_utf8_cstr(mpack_reader_t* reader, char* buf, size_t size);
# 5347 "./C/include/mpack/mpack.h"
char* mpack_expect_cstr_alloc(mpack_reader_t* reader, size_t maxsize);
# 5371 "./C/include/mpack/mpack.h"
char* mpack_expect_utf8_cstr_alloc(mpack_reader_t* reader, size_t maxsize);
# 5381 "./C/include/mpack/mpack.h"
inline void mpack_expect_cstr_match(mpack_reader_t* reader, const char* cstr) {
    ((!(cstr != 
# 5382 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 5382 "./C/include/mpack/mpack.h"
   )) ? mpack_assert_fail_format("mpack assertion failed at " "./C/include/mpack/mpack.h" ":" "5382" "\n%s\n" "cstr pointer is NULL", "cstr != ((void *)0)", "", 
# 5382 "./C/include/mpack/mpack.h" 3 4
   ((void *)0)
# 5382 "./C/include/mpack/mpack.h"
   ) : (void)0);
    mpack_expect_str_match(reader, cstr, strlen(cstr));
}
# 5404 "./C/include/mpack/mpack.h"
uint32_t mpack_expect_bin(mpack_reader_t* reader);
# 5417 "./C/include/mpack/mpack.h"
inline uint32_t mpack_expect_bin_max(mpack_reader_t* reader, uint32_t maxsize) {
    uint32_t length = mpack_expect_bin(reader);
    if (length > maxsize) {
        mpack_reader_flag_error(reader, mpack_error_type);
        return 0;
    }
    return length;
}
# 5437 "./C/include/mpack/mpack.h"
inline void mpack_expect_bin_size(mpack_reader_t* reader, uint32_t count) {
    if (mpack_expect_bin(reader) != count)
        mpack_reader_flag_error(reader, mpack_error_type);
}
# 5449 "./C/include/mpack/mpack.h"
size_t mpack_expect_bin_buf(mpack_reader_t* reader, char* buf, size_t size);
# 5461 "./C/include/mpack/mpack.h"
void mpack_expect_bin_size_buf(mpack_reader_t* reader, char* buf, uint32_t size);




char* mpack_expect_bin_alloc(mpack_reader_t* reader, size_t maxsize, size_t* size);
# 5649 "./C/include/mpack/mpack.h"
void mpack_expect_tag(mpack_reader_t* reader, mpack_tag_t tag);
# 5683 "./C/include/mpack/mpack.h"
size_t mpack_expect_enum(mpack_reader_t* reader, const char* strings[], size_t count);
# 5718 "./C/include/mpack/mpack.h"
size_t mpack_expect_enum_optional(mpack_reader_t* reader, const char* strings[], size_t count);
# 5745 "./C/include/mpack/mpack.h"
size_t mpack_expect_key_uint(mpack_reader_t* reader, 
# 5745 "./C/include/mpack/mpack.h" 3 4
                                                    _Bool 
# 5745 "./C/include/mpack/mpack.h"
                                                         found[], size_t count);
# 5773 "./C/include/mpack/mpack.h"
size_t mpack_expect_key_cstr(mpack_reader_t* reader, const char* keys[],
        
# 5774 "./C/include/mpack/mpack.h" 3 4
       _Bool 
# 5774 "./C/include/mpack/mpack.h"
            found[], size_t count);
# 5786 "./C/include/mpack/mpack.h"


# 5806 "./C/include/mpack/mpack.h"


# 5836 "./C/include/mpack/mpack.h"
typedef struct mpack_node_t mpack_node_t;
# 5847 "./C/include/mpack/mpack.h"
typedef struct mpack_node_data_t mpack_node_data_t;







typedef struct mpack_tree_t mpack_tree_t;
# 5881 "./C/include/mpack/mpack.h"
typedef void (*mpack_tree_error_t)(mpack_tree_t* tree, mpack_error_t error);
# 5904 "./C/include/mpack/mpack.h"
typedef size_t (*mpack_tree_read_t)(mpack_tree_t* tree, char* buffer, size_t count);




typedef void (*mpack_tree_teardown_t)(mpack_tree_t* tree);






struct mpack_node_t {
    mpack_node_data_t* data;
    mpack_tree_t* tree;
};

struct mpack_node_data_t {
    mpack_type_t type;






    uint32_t len;

    union
    {
        
# 5933 "./C/include/mpack/mpack.h" 3 4
       _Bool 
# 5933 "./C/include/mpack/mpack.h"
                b;
        float f;
        double d;
        int64_t i;
        uint64_t u;
        size_t offset;
        mpack_node_data_t* children;
    } value;
};

typedef struct mpack_tree_page_t {
    struct mpack_tree_page_t* next;
    mpack_node_data_t nodes[1];
} mpack_tree_page_t;

typedef enum mpack_tree_parse_state_t {
    mpack_tree_parse_state_not_started,
    mpack_tree_parse_state_in_progress,
    mpack_tree_parse_state_parsed,
} mpack_tree_parse_state_t;

typedef struct mpack_level_t {
    mpack_node_data_t* child;
    size_t left;
} mpack_level_t;

typedef struct mpack_tree_parser_t {
    mpack_tree_parse_state_t state;
# 5980 "./C/include/mpack/mpack.h"
    size_t possible_nodes_left;

    mpack_node_data_t* nodes;
    size_t nodes_left;

    size_t current_node_reserved;
    size_t level;




    mpack_level_t* stack;
    size_t stack_capacity;
    
# 5993 "./C/include/mpack/mpack.h" 3 4
   _Bool 
# 5993 "./C/include/mpack/mpack.h"
        stack_owned;
    mpack_level_t stack_local[8];





} mpack_tree_parser_t;

struct mpack_tree_t {
    mpack_tree_error_t error_fn;
    mpack_tree_read_t read_fn;
    mpack_tree_teardown_t teardown;
    void* context;

    mpack_node_data_t nil_node;
    mpack_node_data_t missing_node;
    mpack_error_t error;


    char* buffer;
    size_t buffer_capacity;


    const char* data;
    size_t data_length;

    size_t size;
    size_t node_count;

    size_t max_size;
    size_t max_nodes;

    mpack_tree_parser_t parser;
    mpack_node_data_t* root;

    mpack_node_data_t* pool;
    size_t pool_count;


    mpack_tree_page_t* next;

};



inline mpack_node_t mpack_node(mpack_tree_t* tree, mpack_node_data_t* data) {
    mpack_node_t node;
    node.data = data;
    node.tree = tree;
    return node;
}

inline mpack_node_data_t* mpack_node_child(mpack_node_t node, size_t child) {
    return node.data->value.children + child;
}

inline mpack_node_t mpack_tree_nil_node(mpack_tree_t* tree) {
    return mpack_node(tree, &tree->nil_node);
}

inline mpack_node_t mpack_tree_missing_node(mpack_tree_t* tree) {
    return mpack_node(tree, &tree->missing_node);
}
# 6080 "./C/include/mpack/mpack.h"
void mpack_tree_init_data(mpack_tree_t* tree, const char* data, size_t length);






inline void mpack_tree_init(mpack_tree_t* tree, const char* data, size_t length) {
    mpack_tree_init_data(tree, data, length);
}
# 6118 "./C/include/mpack/mpack.h"
void mpack_tree_init_stream(mpack_tree_t* tree, mpack_tree_read_t read_fn, void* context,
        size_t max_message_size, size_t max_message_nodes);
# 6133 "./C/include/mpack/mpack.h"
void mpack_tree_init_pool(mpack_tree_t* tree, const char* data, size_t length,
        mpack_node_data_t* node_pool, size_t node_pool_count);






void mpack_tree_init_error(mpack_tree_t* tree, mpack_error_t error);
# 6155 "./C/include/mpack/mpack.h"
void mpack_tree_init_filename(mpack_tree_t* tree, const char* filename, size_t max_bytes);






inline void mpack_tree_init_file(mpack_tree_t* tree, const char* filename, size_t max_bytes) {
    mpack_tree_init_filename(tree, filename, max_bytes);
}
# 6186 "./C/include/mpack/mpack.h"
void mpack_tree_init_stdfile(mpack_tree_t* tree, FILE* stdfile, size_t max_bytes, 
# 6186 "./C/include/mpack/mpack.h" 3 4
                                                                                 _Bool 
# 6186 "./C/include/mpack/mpack.h"
                                                                                      close_when_done);
# 6212 "./C/include/mpack/mpack.h"
void mpack_tree_set_limits(mpack_tree_t* tree, size_t max_message_size,
        size_t max_message_nodes);
# 6232 "./C/include/mpack/mpack.h"
void mpack_tree_parse(mpack_tree_t* tree);
# 6256 "./C/include/mpack/mpack.h"

# 6256 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 6256 "./C/include/mpack/mpack.h"
    mpack_tree_try_parse(mpack_tree_t* tree);
# 6265 "./C/include/mpack/mpack.h"
mpack_node_t mpack_tree_root(mpack_tree_t* tree);




inline mpack_error_t mpack_tree_error(mpack_tree_t* tree) {
    return tree->error;
}
# 6284 "./C/include/mpack/mpack.h"
inline size_t mpack_tree_size(mpack_tree_t* tree) {
    return tree->size;
}




mpack_error_t mpack_tree_destroy(mpack_tree_t* tree);
# 6301 "./C/include/mpack/mpack.h"
inline void mpack_tree_set_context(mpack_tree_t* tree, void* context) {
    tree->context = context;
}







inline void* mpack_tree_context(mpack_tree_t* tree) {
    return tree->context;
}
# 6328 "./C/include/mpack/mpack.h"
inline void mpack_tree_set_error_handler(mpack_tree_t* tree, mpack_tree_error_t error_fn) {
    tree->error_fn = error_fn;
}
# 6341 "./C/include/mpack/mpack.h"
inline void mpack_tree_set_teardown(mpack_tree_t* tree, mpack_tree_teardown_t teardown) {
    tree->teardown = teardown;
}
# 6355 "./C/include/mpack/mpack.h"
void mpack_tree_flag_error(mpack_tree_t* tree, mpack_error_t error);
# 6376 "./C/include/mpack/mpack.h"
void mpack_node_flag_error(mpack_node_t node, mpack_error_t error);




inline mpack_error_t mpack_node_error(mpack_node_t node) {
    return mpack_tree_error(node.tree);
}





mpack_tag_t mpack_node_tag(mpack_node_t node);
# 6404 "./C/include/mpack/mpack.h"
void mpack_node_print_to_buffer(mpack_node_t node, char* buffer, size_t buffer_size);
# 6415 "./C/include/mpack/mpack.h"
void mpack_node_print_to_callback(mpack_node_t node, mpack_print_callback_t callback, void* context);
# 6424 "./C/include/mpack/mpack.h"
void mpack_node_print_to_file(mpack_node_t node, FILE* file);
# 6433 "./C/include/mpack/mpack.h"
inline void mpack_node_print_to_stdout(mpack_node_t node) {
    mpack_node_print_to_file(node, 
# 6434 "./C/include/mpack/mpack.h" 3 4
                                  stdout
# 6434 "./C/include/mpack/mpack.h"
                                        );
}






inline void mpack_node_print(mpack_node_t node) {
    mpack_node_print_to_stdout(node);
}
# 6461 "./C/include/mpack/mpack.h"
mpack_type_t mpack_node_type(mpack_node_t node);








# 6469 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 6469 "./C/include/mpack/mpack.h"
    mpack_node_is_nil(mpack_node_t node);








# 6477 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 6477 "./C/include/mpack/mpack.h"
    mpack_node_is_missing(mpack_node_t node);







void mpack_node_nil(mpack_node_t node);







void mpack_node_missing(mpack_node_t node);






# 6499 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 6499 "./C/include/mpack/mpack.h"
    mpack_node_bool(mpack_node_t node);





void mpack_node_true(mpack_node_t node);





void mpack_node_false(mpack_node_t node);





uint8_t mpack_node_u8(mpack_node_t node);





int8_t mpack_node_i8(mpack_node_t node);





uint16_t mpack_node_u16(mpack_node_t node);





int16_t mpack_node_i16(mpack_node_t node);





uint32_t mpack_node_u32(mpack_node_t node);





int32_t mpack_node_i32(mpack_node_t node);





uint64_t mpack_node_u64(mpack_node_t node);





int64_t mpack_node_i64(mpack_node_t node);
# 6568 "./C/include/mpack/mpack.h"
unsigned int mpack_node_uint(mpack_node_t node);
# 6577 "./C/include/mpack/mpack.h"
int mpack_node_int(mpack_node_t node);
# 6588 "./C/include/mpack/mpack.h"
float mpack_node_float(mpack_node_t node);
# 6599 "./C/include/mpack/mpack.h"
double mpack_node_double(mpack_node_t node);







float mpack_node_float_strict(mpack_node_t node);







double mpack_node_double_strict(mpack_node_t node);
# 6671 "./C/include/mpack/mpack.h"
void mpack_node_check_utf8(mpack_node_t node);
# 6694 "./C/include/mpack/mpack.h"
void mpack_node_check_utf8_cstr(mpack_node_t node);
# 6714 "./C/include/mpack/mpack.h"
size_t mpack_node_bin_size(mpack_node_t node);
# 6724 "./C/include/mpack/mpack.h"
uint32_t mpack_node_data_len(mpack_node_t node);
# 6734 "./C/include/mpack/mpack.h"
size_t mpack_node_strlen(mpack_node_t node);
# 6751 "./C/include/mpack/mpack.h"
const char* mpack_node_str(mpack_node_t node);
# 6768 "./C/include/mpack/mpack.h"
const char* mpack_node_data(mpack_node_t node);
# 6778 "./C/include/mpack/mpack.h"
const char* mpack_node_bin_data(mpack_node_t node);
# 6793 "./C/include/mpack/mpack.h"
size_t mpack_node_copy_data(mpack_node_t node, char* buffer, size_t bufsize);
# 6808 "./C/include/mpack/mpack.h"
size_t mpack_node_copy_utf8(mpack_node_t node, char* buffer, size_t bufsize);
# 6823 "./C/include/mpack/mpack.h"
void mpack_node_copy_cstr(mpack_node_t node, char* buffer, size_t size);
# 6838 "./C/include/mpack/mpack.h"
void mpack_node_copy_utf8_cstr(mpack_node_t node, char* buffer, size_t size);
# 6858 "./C/include/mpack/mpack.h"
char* mpack_node_data_alloc(mpack_node_t node, size_t maxsize);
# 6877 "./C/include/mpack/mpack.h"
char* mpack_node_cstr_alloc(mpack_node_t node, size_t maxsize);
# 6897 "./C/include/mpack/mpack.h"
char* mpack_node_utf8_cstr_alloc(mpack_node_t node, size_t maxsize);
# 6928 "./C/include/mpack/mpack.h"
size_t mpack_node_enum(mpack_node_t node, const char* strings[], size_t count);
# 6957 "./C/include/mpack/mpack.h"
size_t mpack_node_enum_optional(mpack_node_t node, const char* strings[], size_t count);
# 6972 "./C/include/mpack/mpack.h"
size_t mpack_node_array_length(mpack_node_t node);







mpack_node_t mpack_node_array_at(mpack_node_t node, size_t index);





size_t mpack_node_map_count(mpack_node_t node);
# 6996 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_key_at(mpack_node_t node, size_t index);
# 7006 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_value_at(mpack_node_t node, size_t index);
# 7022 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_int(mpack_node_t node, int64_t num);
# 7039 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_int_optional(mpack_node_t node, int64_t num);
# 7055 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_uint(mpack_node_t node, uint64_t num);
# 7072 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_uint_optional(mpack_node_t node, uint64_t num);
# 7088 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_str(mpack_node_t node, const char* str, size_t length);
# 7105 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_str_optional(mpack_node_t node, const char* str, size_t length);
# 7122 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_cstr(mpack_node_t node, const char* cstr);
# 7139 "./C/include/mpack/mpack.h"
mpack_node_t mpack_node_map_cstr_optional(mpack_node_t node, const char* cstr);
# 7151 "./C/include/mpack/mpack.h"

# 7151 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 7151 "./C/include/mpack/mpack.h"
    mpack_node_map_contains_int(mpack_node_t node, int64_t num);
# 7163 "./C/include/mpack/mpack.h"

# 7163 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 7163 "./C/include/mpack/mpack.h"
    mpack_node_map_contains_uint(mpack_node_t node, uint64_t num);
# 7175 "./C/include/mpack/mpack.h"

# 7175 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 7175 "./C/include/mpack/mpack.h"
    mpack_node_map_contains_str(mpack_node_t node, const char* str, size_t length);
# 7187 "./C/include/mpack/mpack.h"

# 7187 "./C/include/mpack/mpack.h" 3 4
_Bool 
# 7187 "./C/include/mpack/mpack.h"
    mpack_node_map_contains_cstr(mpack_node_t node, const char* cstr);
# 7199 "./C/include/mpack/mpack.h"


