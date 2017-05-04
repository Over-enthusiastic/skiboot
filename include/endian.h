#include <ccan/endian/endian.h>


#define	__LITTLE_ENDIAN	1234
#define	__BIG_ENDIAN	4321

#ifdef HAVE_LITTLE_ENDIAN
	#define __BYTE_ORDER __LITTLE_ENDIAN
#elif HAVE_BIG_ENDIAN
	#define __BYTE_ORDER __BIG_ENDIAN
#else
	#error
#endif
