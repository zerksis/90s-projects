/*

File:	 mkopttab.c
Purpose: Build preformatted options table.

Last Update Time-stamp: "97/07/10 18:10:50 zdu"
Copyright (C) 1995, 1997 Zerksis D. Umrigar

See the file LICENSE for copying and distribution conditions.
THERE IS ABSOLUTELY NO WARRANTY FOR THIS PROGRAM.

*/

#define PO_OFFLINE_FMT 1

#include "parseopt.h"

#include "opttab0.c"

/* Produce a formatted options table from the raw table in opttab0.c */
int main() 
{
  fprintf(stdout, 
    "/* DO NOT EDIT. This file was automatically generated by mkopttab. */\n");
  fprintf(stdout, "\n\nOptInfo optTab[]= {\n");
  optTabFmt(stdout, optTab, N_ELEMENTS(optTab));
  fprintf(stdout, "};\n");
  return 0;
}
