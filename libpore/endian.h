#include <ccan/endian/endian.h>

#ifndef __BYTE_ORDER
#define	__LITTLE_ENDIAN	1234
#define	__BIG_ENDIAN	4321

/* Support Glibc style endianess check */
#ifdef HAVE_LITTLE_ENDIAN
	#define __BYTE_ORDER __LITTLE_ENDIAN
#elif HAVE_BIG_ENDIAN
	#define __BYTE_ORDER __BIG_ENDIAN
#else
	#error
#endif
#endif /* __BYTE_ORDER */
