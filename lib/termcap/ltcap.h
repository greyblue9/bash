/* ltcap.h - Local declarations for termcap library. */
	
	
typedef signed short bits16_t;
typedef signed short int_least16_t;
typedef signed char int_least8_t;
typedef unsigned int u_bits32_t;
typedef unsigned int u_int32_t;
	
	

/* Copyright (C) 1999-2009 Free Software Foundation, Inc.

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

#ifndef _LTCAP_H_
#define _LTCAP_H_ 1

#if !defined (__APPLE__)
#  define __private_extern__
#endif

#ifndef MAX_TGETENT_BUFSIZ
#  define MAX_TGETENT_BUFSIZ 2048
#endif

#endif /* _LTCAP_H_ */
