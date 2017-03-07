/* DO NOT EDIT. This file was automatically generated by mkopttab. */


OptInfo optTab[]= {
  OPT_ENTRY(
    /* longOpt */	"intFlag0",
    /* shortOpt */	'0',
    /* argType */	NO_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&intFlag0,
    /* optFn */		intOptFn0,
    /* doc */		"\
--intFlag0 | -0           Set integer flag 0 to 0 (default: `1').\n\
\t1\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"intFlag1",
    /* shortOpt */	'1',
    /* argType */	NO_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&intFlag1,
    /* optFn */		intOptFn1,
    /* doc */		"\
--intFlag1 | -1           Set integer flag 1 to 1 (default: `0').\n\
\t0\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"intVal",
    /* shortOpt */	'V',
    /* argType */	REQUIRED_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&intVal,
    /* optFn */		intOptFn0,
    /* doc */		"\
--intVal VALUE |          Set integer value to VALUE. (default: `0').\n\
  -V VALUE                \n\
\t0\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"charAltFlag",
    /* shortOpt */	'C',
    /* argType */	SYNONYM_OPT_FLAG,
    /* id */		0,
    /* checkP */		0,
    /* valP */		NULL,
    /* optFn */		NULL,
    /* doc */		NULL
  ),
  OPT_ENTRY(
    /* longOpt */	"charFlag",
    /* shortOpt */	'c',
    /* argType */	NO_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&charFlag,
    /* optFn */		charOptFn,
    /* doc */		"\
--charAltFlag | -C |      Reset char flag. (default: `1').\n\
  --charFlag | -c         \n\
\t1\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"charVal",
    /* shortOpt */	'v',
    /* argType */	OPTIONAL_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&charVal,
    /* optFn */		charOptFn,
    /* doc */		"\
--charVal[=Char] |        Set charVal to Char.  Continuing on with\n\
  -v[Char]                this description... This character option\n\
                          has a very long description. It continues\n\
                          for more than one line.  It goes on and on\n\
                          and on and on and on and on and on... \n\
                          (default: `A').\n\
\tA\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"stringFlag",
    /* shortOpt */	'\0',
    /* argType */	OPTIONAL_OPT_FLAG|INTERN_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&stringFlag,
    /* optFn */		stringOptFn,
    /* doc */		"\
--stringFlag[=VALUE]      Set string flag to VALUE (default: ` ').\n\
\t \
"
  ),
  OPT_ENTRY(
    /* longOpt */	"stringAltVal",
    /* shortOpt */	'S',
    /* argType */	SYNONYM_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		NULL,
    /* optFn */		NULL,
    /* doc */		NULL
  ),
  OPT_ENTRY(
    /* longOpt */	"stringVal",
    /* shortOpt */	's',
    /* argType */	REQUIRED_OPT_FLAG|INTERN_OPT_FLAG,
    /* id */		0,
    /* checkP */		NULL,
    /* valP */		&stringVal,
    /* optFn */		stringOptFn,
    /* doc */		"\
--stringAltVal String |   Set string value to String (default).\n\
  -S String |             \n\
  --stringVal String |    \n\
  -s String               \n\
\t\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"rangeVal",
    /* shortOpt */	'r',
    /* argType */	REQUIRED_OPT_FLAG,
    /* id */		0,
    /* checkP */		rangeSpec,
    /* valP */		&rangeVal,
    /* optFn */		intOptFn0,
    /* doc */		"\
--rangeVal Int | -r Int   Range option between `-2' and `5' \n\
                          (default: `3').\n\
\t3\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"primeVal",
    /* shortOpt */	'p',
    /* argType */	REQUIRED_OPT_FLAG,
    /* id */		0,
    /* checkP */		primeSpec,
    /* valP */		&primeVal,
    /* optFn */		shortOptFn0,
    /* doc */		"\
--primeVal Int | -p Int   Prime # `2', `3', `5', `7' or `11' \n\
                          (default: `7').\n\
\t7\
"
  ),
  OPT_ENTRY(
    /* longOpt */	"names",
    /* shortOpt */	'\0',
    /* argType */	REQUIRED_OPT_FLAG,
    /* id */		0,
    /* checkP */		nameSpec,
    /* valP */		&nameVal,
    /* optFn */		stringValOptFn,
    /* doc */		"\
--names Name              Name must be one of `mary', `marge' or \n\
                          `marty' (default: `mary').\n\
\tmary\
"
  )
};
