/* Copyright 2017 IBM Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Adding GLIBC style endianness check required for p9_stop_api
 */

#include <ccan/endian/endian.h>

#ifndef __BYTE_ORDER
#define	__LITTLE_ENDIAN	1234
#define	__BIG_ENDIAN	4321

/* Support Glibc style endianness check */
#ifdef HAVE_LITTLE_ENDIAN
	#define __BYTE_ORDER __LITTLE_ENDIAN
#elif HAVE_BIG_ENDIAN
	#define __BYTE_ORDER __BIG_ENDIAN
#else
	#error
#endif
#endif /* __BYTE_ORDER */
