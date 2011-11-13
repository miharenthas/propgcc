#ifndef _CTYPE_H
#define _CTYPE_H

#if defined(__cplusplus)
extern "C" {
#endif

extern unsigned char __ctype[];
#define _CTc    0x01            /* control character */
#define _CTd    0x02            /* numeric digit */
#define _CTu    0x04            /* upper case */
#define _CTl    0x08            /* lower case */
#define _CTs    0x10            /* whitespace */
#define _CTp    0x20            /* punctuation */
#define _CTx    0x40            /* hexadecimal */

#define isalnum(c)      (__ctype[(unsigned char)(c)]&(_CTu|_CTl|_CTd))
#define isalpha(c)      (__ctype[(unsigned char)(c)]&(_CTu|_CTl))
#define iscntrl(c)      (__ctype[(unsigned char)(c)]&_CTc)
#define isdigit(c)      (__ctype[(unsigned char)(c)]&_CTd)
#define isgraph(c)      (!(__ctype[(unsigned char)(c)]&(_CTc|_CTs)) && (__ctype[(unsigned char)(c)]))
#define islower(c)      (__ctype[(unsigned char)(c)]&_CTl)
#define isprint(c)      (!(__ctype[(unsigned char)(c)]&_CTc) && (__ctype[(unsigned char)(c)]))
#define ispunct(c)      (__ctype[(unsigned char)(c)]&_CTp)
#define isspace(c)      (__ctype[(unsigned char)(c)]&_CTs)
#define isupper(c)      (__ctype[(unsigned char)(c)]&_CTu)
#define isxdigit(c)     (__ctype[(unsigned char)(c)]&_CTx)

  extern int tolower(int c);
  extern int toupper(int c);

#if defined(__cplusplus)
}
#endif

#endif
