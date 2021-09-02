/* bashansi.h -- Typically included information required by picky compilers. */
	
	
typedef signed short bits16_t;
typedef signed short int_least16_t;
typedef signed char int_least8_t;
typedef unsigned int u_bits32_t;
typedef unsigned int u_int32_t;
	
	

/* Copyright (C) 1993-2009 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Bash is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash.  If not, see <http://www.gnu.org/licenses/>.
*/

#if !defined (_BASHANSI_H_)
#define _BASHANSI_H_

#if defined (HAVE_STRING_H)
#  if ! defined (STDC_HEADERS) && defined (HAVE_MEMORY_H)
#    include <memory.h>
#  endif
#  include <string.h>
#endif /* !HAVE_STRING_H */

#if defined (HAVE_STRINGS_H)
#  include <strings.h>
#endif /* !HAVE_STRINGS_H */

#if defined (HAVE_STDLIB_H)
#  include <stdlib.h>
#else
#  include "ansi_stdlib.h"
#endif /* !HAVE_STDLIB_H */

#endif /* !_BASHANSI_H_ */
