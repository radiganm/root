/* /% C %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file newsos.h
 ************************************************************************
 * Description:
 *  Patch header for supporting NewsOS
 ************************************************************************
 * Copyright(c) 1995~1999  Masaharu Goto (MXJ02154@niftyserve.or.jp)
 *
 * Permission to use, copy, modify and distribute this software and its 
 * documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  The author makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 ************************************************************************/

#if defined(G__NONANSI) || defined(G__NEWSOS6) || defined(G__NEWSOS4)

#ifndef G__NEWSOS_H
#define G__NEWSOS_H

#include <stdio.h>

#ifndef SEEK_SET
#define SEEK_SET 0
#endif

#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif

#ifndef SEEK_END
#define SEEK_END 2
#endif

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif

#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif

#ifndef HUGE_VAL
#define HUGE_VAL 1.0e99
#endif

typedef long fpos_t;

extern void G__fsigint();
extern void G__fsigill();
extern void G__fsigfpe();
extern void G__fsigabrt();
extern void G__fsigsegv();
extern void G__fsigterm();

#endif /* G__NEWSOS_H */

#endif /* G__NONANSI || G__NEWSOS6 || G__NEWSOS4 */
