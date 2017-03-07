/*

File:	 idsinit.c
Purpose: Non-reentrant id routines initialization.

Copyright (C) 1995 Zerksis D. Umrigar

See the file LICENSE for copying and distribution conditions.
THERE IS ABSOLUTELY NO WARRANTY FOR THIS PROGRAM.

*/

#include "idsp.h"

Globs _ZidsGlobs= { 0, 0 };

/* Initialize: if ignoreCase is TRUE, then case is ignored in subsequent
 * character comparison.
 */
VOID initID(ignoreCase)
  Boolean ignoreCase;
{
  G.ss= initStrSpace(FALSE);
  G.idTab= initTextID(ignoreCase);
}

VOID
terminateID()
{
  delStrSpace(G.ss); delTextID(G.idTab);
  VOID_RET();
}

