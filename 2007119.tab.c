
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "2007119.y"

#include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
struct {
float tfloat;
int tint;
char *tstr;
}store[900];
int yylex(void);
int indexx=0;


/* Line 189 of yacc.c  */
#line 89 "2007119.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     CHAR = 259,
     FLOAT = 260,
     LB = 261,
     st = 262,
     et = 263,
     floattracker = 264,
     RB = 265,
     LP = 266,
     RP = 267,
     CM = 268,
     SM = 269,
     MAIN_FUNC = 270,
     ASSIGN = 271,
     PLUS = 272,
     MINUS = 273,
     MULT = 274,
     DIV = 275,
     GT = 276,
     LT = 277,
     Loop = 278,
     SWITCH = 279,
     CASE = 280,
     DEFAULT = 281,
     SHOW = 282,
     CC = 283,
     IF = 284,
     ELSE = 285,
     eo = 286,
     Multiply = 287,
     SUM = 288,
     IEC = 289,
     WHILE = 290,
     Prime = 291,
     powerf = 292,
     division = 293,
     YEAR = 294,
     pal = 295,
     FACTORIAL = 296,
     trigo = 297,
     sine = 298,
     cose = 299,
     tane = 300,
     incre = 301,
     decre = 302,
     lteq = 303,
     gteq = 304,
     and = 305,
     or = 306,
     equal = 307,
     notequal = 308,
     VARIABLE = 309,
     NFLOAT = 310,
     NINT = 311,
     SINGLE_COMMENT = 312,
     MULTI_COMMENT = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "2007119.y"

int iv;
float fv;
char *sv;



/* Line 214 of yacc.c  */
#line 191 "2007119.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 203 "2007119.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  302

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    18,    21,    24,    26,
      28,    32,    34,    36,    38,    42,    44,    46,    50,    54,
      58,    60,    64,    68,    70,    73,    76,   106,   144,   190,
     196,   204,   212,   221,   235,   257,   260,   274,   280,   288,
     294,   300,   306,   314,   320,   326,   332,   345,   358,   363,
     368,   373,   375,   378,   382,   386,   390,   394,   398,   402,
     406,   409,   412,   416,   420,   424,   428,   432,   436,   438,
     440,   444,   448,   452,   456,   460,   464,   468,   471,   474,
     478,   482,   486,   490,   494
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    15,    11,    12,     6,    61,    10,    -1,
      -1,    61,    63,    -1,    61,    67,    14,    -1,    61,    69,
      -1,    61,    62,    -1,    57,    -1,    58,    -1,    64,    65,
      14,    -1,     3,    -1,     5,    -1,     4,    -1,    65,    13,
      66,    -1,    66,    -1,    54,    -1,    54,    16,    55,    -1,
      54,    16,    56,    -1,    67,    13,    68,    -1,    68,    -1,
      54,    16,    55,    -1,    54,    16,    56,    -1,    14,    -1,
      73,    14,    -1,    72,    14,    -1,    24,    11,    73,    12,
       6,    25,    73,    28,    27,    11,    73,    12,    14,    25,
      73,    28,    27,    11,    73,    12,    14,    26,    28,    27,
      11,    73,    12,    14,    10,    -1,    24,    11,    73,    12,
       6,    25,    73,    28,    27,    11,    73,    12,    14,    25,
      73,    28,    27,    11,    73,    12,    14,    25,    73,    28,
      27,    11,    73,    12,    14,    26,    28,    27,    11,    73,
      12,    14,    10,    -1,    24,    11,    73,    12,     6,    25,
      73,    28,    27,    11,    73,    12,    14,    25,    73,    28,
      27,    11,    73,    12,    14,    25,    73,    28,    27,    11,
      73,    12,    14,    25,    73,    28,    27,    11,    73,    12,
      14,    26,    28,    27,    11,    73,    12,    14,    10,    -1,
      31,     7,    73,     8,    14,    -1,    32,     7,    73,    13,
      73,     8,    14,    -1,    33,     7,    73,    13,    73,     8,
      14,    -1,    29,    11,    73,    12,     6,    73,    14,    10,
      -1,    29,    11,    73,    12,     6,    73,    14,    10,    30,
       6,    73,    14,    10,    -1,    29,    11,    73,    12,     6,
      73,    14,    10,    34,    11,    73,    12,     6,    73,    14,
      10,    30,     6,    73,    14,    10,    -1,    23,    70,    -1,
      35,    11,    73,    22,    73,    12,     6,    73,    16,    73,
      17,    73,    10,    -1,    36,     7,    73,     8,    14,    -1,
      37,     7,    73,    13,    73,     8,    14,    -1,    41,     7,
      73,     8,    14,    -1,    39,     7,    73,     8,    14,    -1,
      40,     7,    73,     8,    14,    -1,    38,     7,    73,    13,
      73,     8,    14,    -1,    27,    11,    73,    12,    14,    -1,
      27,    11,    72,    12,    14,    -1,    42,     7,    71,     8,
      14,    -1,    11,    73,    13,    73,    12,     6,    73,    16,
      73,    19,    73,    10,    -1,    11,    73,    13,    73,    12,
       6,    73,    16,    73,    17,    73,    10,    -1,    43,    11,
      73,    12,    -1,    44,    11,    73,    12,    -1,    45,    11,
      73,    12,    -1,    55,    -1,    54,     9,    -1,    72,    17,
      72,    -1,    72,    18,    72,    -1,    72,    19,    72,    -1,
      72,    20,    72,    -1,    72,    22,    72,    -1,    72,    21,
      72,    -1,    11,    72,    12,    -1,    72,    46,    -1,    72,
      47,    -1,    72,    48,    72,    -1,    72,    49,    72,    -1,
      72,    51,    72,    -1,    72,    50,    72,    -1,    72,    52,
      72,    -1,    72,    53,    72,    -1,    56,    -1,    54,    -1,
      73,    17,    73,    -1,    73,    18,    73,    -1,    73,    19,
      73,    -1,    73,    20,    73,    -1,    73,    22,    73,    -1,
      73,    21,    73,    -1,    11,    73,    12,    -1,    73,    46,
      -1,    73,    47,    -1,    73,    48,    73,    -1,    73,    49,
      73,    -1,    73,    51,    73,    -1,    73,    50,    73,    -1,
      73,    52,    73,    -1,    73,    53,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    47,    48,    49,    50,    51,    55,    59,
      66,    72,    73,    74,    78,    79,    83,   100,   118,   140,
     141,   145,   161,   178,   179,   180,   181,   195,   212,   232,
     243,   254,   266,   277,   288,   302,   303,   321,   341,   347,
     358,   367,   381,   395,   396,   397,   399,   418,   438,   442,
     446,   451,   457,   474,   475,   476,   477,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   503,   509,
     523,   525,   527,   529,   538,   540,   542,   544,   546,   548,
     550,   552,   554,   556,   558
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "LB", "st", "et",
  "floattracker", "RB", "LP", "RP", "CM", "SM", "MAIN_FUNC", "ASSIGN",
  "PLUS", "MINUS", "MULT", "DIV", "GT", "LT", "Loop", "SWITCH", "CASE",
  "DEFAULT", "SHOW", "CC", "IF", "ELSE", "eo", "Multiply", "SUM", "IEC",
  "WHILE", "Prime", "powerf", "division", "YEAR", "pal", "FACTORIAL",
  "trigo", "sine", "cose", "tane", "incre", "decre", "lteq", "gteq", "and",
  "or", "equal", "notequal", "VARIABLE", "NFLOAT", "NINT",
  "SINGLE_COMMENT", "MULTI_COMMENT", "$accept", "program",
  "firststatement", "comment", "declaration", "TYPE", "ID", "id1",
  "assignop", "assign", "secondstatement", "list", "angle", "floatv",
  "expre", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    61,    61,    62,    62,
      63,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     3,     2,     2,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     2,     2,    29,    37,    45,     5,
       7,     7,     8,    13,    21,     2,    13,     5,     7,     5,
       5,     5,     7,     5,     5,     5,    12,    12,     4,     4,
       4,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    11,    13,
      12,     2,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      51,    68,     8,     9,     7,     4,     0,     0,    20,     6,
       0,     0,    69,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    16,     0,    15,     0,     5,    25,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
      77,    78,     0,     0,     0,     0,     0,     0,    59,    76,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,    10,     0,    19,     0,     0,
      53,    54,    55,    56,    58,    57,    62,    63,    65,    64,
      66,    67,    70,    71,    72,    73,    75,    74,    79,    80,
      82,    81,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    14,     0,     0,    44,    43,
       0,    29,     0,     0,    74,    37,     0,     0,    40,    41,
      39,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,    50,     0,     0,     0,    30,
      31,     0,    38,    42,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    72,     0,     0,     0,    70,
      47,    46,     0,    33,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    34,    35,    36,    64,    65,    37,    38,
      39,    46,   120,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yytype_int16 yypact[] =
{
      -6,    -4,    20,    12,   -42,    31,   -42,   262,   -42,   -42,
     -42,   -42,    -1,   -42,    17,    28,    46,    56,    64,    69,
      91,    94,   106,   112,   119,   120,   121,   122,   127,    -8,
     -42,   -42,   -42,   -42,   -42,   -42,    66,    -2,   -42,   -42,
     899,   919,   134,   420,   441,     2,   -42,     2,    -1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     -40,   -42,   -41,   130,     3,   -42,   107,   -42,   -42,    14,
      14,    14,    14,    14,    14,   -42,   -42,    14,    14,    14,
      14,    14,    14,   -42,     2,     2,     2,     2,     2,     2,
     -42,   -42,     2,     2,     2,     2,     2,     2,   -42,   -42,
       2,   -42,   797,   462,   483,   504,   525,    13,   818,   838,
    1152,    89,   859,   879,   288,   304,   325,   141,   145,   160,
     164,   -42,   -42,   -37,    66,   -42,   171,   -42,    14,   134,
     155,   155,   -24,   -24,    98,    98,    98,    98,   148,   148,
    1160,  1160,   204,   204,   -20,   -20,   166,   166,   166,   166,
     159,   159,  1197,  1197,     2,   176,   174,   177,   184,   178,
       2,     2,     2,   179,     2,     2,   186,   189,   195,     2,
       2,     2,   196,   -42,   -42,   -42,   546,   173,   -42,   -42,
       2,   -42,   341,   362,   113,   -42,   378,   399,   -42,   -42,
     -42,   567,   588,   609,   -42,   208,     2,   939,   202,   206,
     219,   213,   214,   -42,   -42,   -42,     2,  1054,   220,   -42,
     -42,     2,   -42,   -42,  1017,   205,   -28,  1037,     2,   218,
     225,   222,     2,  1205,     2,     2,     2,  1213,     2,     2,
     630,   959,   651,     2,   102,    26,   221,   224,   230,   104,
     -42,   -42,   215,   -42,     2,   -42,     2,   979,  1091,   228,
     216,   211,   231,   238,     2,     2,   672,   999,   232,   235,
      49,   -42,     2,   226,  1103,   229,   233,   241,   242,     2,
       2,   693,   714,   243,   244,   239,    58,   -42,     2,   236,
    1140,   234,   247,   248,   257,     2,     2,   735,   756,   255,
     256,   265,   251,   -42,   252,   254,   271,     2,   777,   269,
     274,   -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   163,   -42,   245,
     -42,   -42,   -42,    22,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      41,    61,   220,   117,   118,   119,   221,     3,    62,     1,
      12,    66,    67,   100,   121,   122,   124,   125,   173,   174,
       4,   159,    75,    76,     5,   128,    90,    91,    45,    40,
      84,    85,    86,    87,    88,    89,   241,     6,   102,    47,
     103,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    42,    30,    31,   101,    48,    31,    90,
      91,    92,    93,    94,    95,    96,    97,    49,   129,    30,
     104,    50,    90,    91,   262,   263,    51,   142,   143,   144,
     145,   146,   147,   278,   279,   148,   149,   150,   151,   152,
     153,   130,   131,   132,   133,   134,   135,   163,    52,   136,
     137,   138,   139,   140,   141,    53,    84,    85,    86,    87,
      88,    89,   240,    54,   245,    69,    70,    71,    72,    55,
      63,    86,    87,    86,    87,   200,    56,    57,    58,    59,
      84,    85,    86,    87,    60,    90,    91,    92,    93,    94,
      95,    96,    97,    61,    75,    76,   123,   176,    90,    91,
      90,    91,   169,   182,   183,   184,   170,   186,   187,    90,
      91,   126,   191,   192,   193,    69,    70,    71,    72,    73,
      74,   171,   172,   197,    71,    72,    84,    85,    86,    87,
      88,    89,   177,    84,    85,    86,    87,    62,   178,   207,
     180,   179,   181,   185,    75,    76,    77,    78,   196,   214,
     188,    75,    76,   189,   217,    90,    91,    92,    93,   190,
     194,   223,    90,    91,   206,   227,   209,   230,   231,   232,
     210,   234,   235,    86,    87,   211,   239,   212,   213,   224,
     216,   225,   219,   226,   243,   242,   244,   247,   251,   248,
     246,   253,   254,   252,   255,   261,   260,   256,   257,   277,
      90,    91,   269,   270,   265,   264,   267,   275,   276,   285,
     268,   283,   271,   272,   281,     8,     9,    10,   286,   291,
     292,   280,    11,    12,   284,   293,    13,   294,   287,   288,
     295,   296,   297,   300,   301,    14,    15,   175,     0,    16,
     298,    17,     0,    18,    19,    20,   166,    21,    22,    23,
      24,    25,    26,    27,    28,    84,    85,    86,    87,    88,
      89,   127,   167,     0,     0,     0,    29,    30,    31,    32,
      33,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,   168,    90,    91,    92,    93,    94,    95,
      96,    97,    84,    85,    86,    87,    88,    89,     0,   198,
      90,    91,    92,    93,    94,    95,    96,    97,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
     199,    90,    91,    92,    93,    94,    95,    96,    97,    84,
      85,    86,    87,    88,    89,     0,   201,    90,    91,    92,
      93,    94,    95,    96,    97,    84,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,   202,    90,    91,
      92,    93,    94,    95,    96,    97,    84,    85,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    99,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,   155,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,   156,     0,     0,     0,     0,
      69,    70,    71,    72,    73,    74,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   157,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,     0,     0,    75,
      76,    77,    78,    79,    80,    81,    82,   158,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,   195,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,   203,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
     204,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,   205,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,   236,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   238,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,   258,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,   273,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,   274,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,   289,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,   290,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,   299,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
     154,     0,     0,     0,    84,    85,    86,    87,    88,    89,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,   160,     0,     0,     0,    84,    85,    86,    87,    88,
      89,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,   161,     0,     0,     0,    84,    85,    86,    87,    88,
      89,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,   164,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,   165,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    68,     0,     0,    69,    70,    71,    72,
      73,    74,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    83,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,   208,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   237,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   249,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   259,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   218,    84,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   222,    84,    85,    86,    87,    88,    89,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,   215,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,   250,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    84,    85,    86,
      87,    88,    89,     0,     0,     0,     0,     0,   282,    84,
      85,    86,    87,    88,   162,     0,     0,    69,    70,    71,
      72,    73,    74,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    85,    86,    87,    88,    89,
       0,     0,   228,    85,   229,    87,    88,    89,     0,     0,
     233,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    90,    91,    92,    93,    94,    95,    96,    97,    90,
      91,    92,    93,    94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
       7,     9,    30,    43,    44,    45,    34,    11,    16,    15,
      11,    13,    14,    11,    55,    56,    13,    14,    55,    56,
       0,     8,    46,    47,    12,    11,    46,    47,    11,     7,
      17,    18,    19,    20,    21,    22,    10,     6,    45,    11,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    54,    55,    56,    54,    11,    56,    46,
      47,    48,    49,    50,    51,    52,    53,    11,    54,    55,
      48,     7,    46,    47,    25,    26,     7,    84,    85,    86,
      87,    88,    89,    25,    26,    92,    93,    94,    95,    96,
      97,    69,    70,    71,    72,    73,    74,     8,     7,    77,
      78,    79,    80,    81,    82,    11,    17,    18,    19,    20,
      21,    22,    10,     7,    10,    17,    18,    19,    20,     7,
      54,    19,    20,    19,    20,    12,     7,     7,     7,     7,
      17,    18,    19,    20,     7,    46,    47,    48,    49,    50,
      51,    52,    53,     9,    46,    47,    16,   154,    46,    47,
      46,    47,    11,   160,   161,   162,    11,   164,   165,    46,
      47,    54,   169,   170,   171,    17,    18,    19,    20,    21,
      22,    11,     8,   180,    19,    20,    17,    18,    19,    20,
      21,    22,     6,    17,    18,    19,    20,    16,    14,   196,
       6,    14,    14,    14,    46,    47,    48,    49,    25,   206,
      14,    46,    47,    14,   211,    46,    47,    48,    49,    14,
      14,   218,    46,    47,     6,   222,    14,   224,   225,   226,
      14,   228,   229,    19,    20,     6,   233,    14,    14,    11,
      10,     6,    27,    11,    10,    14,     6,   244,    10,   246,
      25,    30,    11,    27,     6,    10,    14,   254,   255,    10,
      46,    47,    11,    11,    28,   262,    27,    14,    14,    11,
      27,    27,   269,   270,    28,     3,     4,     5,    11,    14,
      14,   278,    10,    11,    27,    10,    14,    26,   285,   286,
      28,    27,    11,    14,    10,    23,    24,   124,    -1,    27,
     297,    29,    -1,    31,    32,    33,     8,    35,    36,    37,
      38,    39,    40,    41,    42,    17,    18,    19,    20,    21,
      22,    66,     8,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    46,    47,    48,    49,    50,    51,
      52,    53,    17,    18,    19,    20,    21,    22,    -1,     8,
      46,    47,    48,    49,    50,    51,    52,    53,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    46,    47,    48,    49,    50,    51,    52,    53,    17,
      18,    19,    20,    21,    22,    -1,     8,    46,    47,    48,
      49,    50,    51,    52,    53,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,     8,    46,    47,
      48,    49,    50,    51,    52,    53,    17,    18,    19,    20,
      21,    22,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      13,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    17,
      18,    19,    20,    21,    22,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    46,    47,    48,    49,
      50,    51,    52,    53,    17,    18,    19,    20,    21,    22,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    46,    47,    48,    49,    50,    51,    52,    53,    46,
      47,    48,    49,    50,    51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    60,    11,     0,    12,     6,    61,     3,     4,
       5,    10,    11,    14,    23,    24,    27,    29,    31,    32,
      33,    35,    36,    37,    38,    39,    40,    41,    42,    54,
      55,    56,    57,    58,    62,    63,    64,    67,    68,    69,
      72,    73,    54,    72,    73,    11,    70,    11,    11,    11,
       7,     7,     7,    11,     7,     7,     7,     7,     7,     7,
       7,     9,    16,    54,    65,    66,    13,    14,    14,    17,
      18,    19,    20,    21,    22,    46,    47,    48,    49,    50,
      51,    52,    53,    14,    17,    18,    19,    20,    21,    22,
      46,    47,    48,    49,    50,    51,    52,    53,    12,    12,
      11,    54,    73,    73,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    43,    44,    45,
      71,    55,    56,    16,    13,    14,    54,    68,    11,    54,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    13,    12,    12,    12,    12,     8,
      13,    13,    22,     8,    13,    13,     8,     8,     8,    11,
      11,    11,     8,    55,    56,    66,    73,     6,    14,    14,
       6,    14,    73,    73,    73,    14,    73,    73,    14,    14,
      14,    73,    73,    73,    14,    12,    25,    73,     8,     8,
      12,     8,     8,    12,    12,    12,     6,    73,    14,    14,
      14,     6,    14,    14,    73,    28,    10,    73,    16,    27,
      30,    34,    16,    73,    11,     6,    11,    73,    17,    19,
      73,    73,    73,    17,    73,    73,    12,    14,    12,    73,
      10,    10,    14,    10,     6,    10,    25,    73,    73,    14,
      28,    10,    27,    30,    11,     6,    73,    73,    12,    14,
      14,    10,    25,    26,    73,    28,    28,    27,    27,    11,
      11,    73,    73,    12,    12,    14,    14,    10,    25,    26,
      73,    28,    28,    27,    27,    11,    11,    73,    73,    12,
      12,    14,    14,    10,    26,    28,    27,    11,    73,    12,
      14,    10
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 44 "2007119.y"
    { printf("\n At last finished.... \n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 56 "2007119.y"
    {
            printf("\n !!!!! Encountered a single-line comment \n");
        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 60 "2007119.y"
    {
            printf("\n !!!!!Encountered a multi-line comment \n");
        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 66 "2007119.y"
    {
        printf("\n!!!!!!This is a  Valid declaration!!!!!!\n");
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 83 "2007119.y"
    {
        int f = 0, k = 0;

        for(k = 0; k < indexx; k++) {
            if(strcmp(store[k].tstr, (yyvsp[(1) - (1)].sv)) == 0) {
                printf("\n Error:  %s variable has already declared! This is invalid declaration \n", store[k].tstr);
                f = 1;
                break;
            }
        }

        if(f == 0) {
            store[indexx].tstr = (yyvsp[(1) - (1)].sv);
            printf("%s variable is declared successfully \n", store[indexx].tstr);
            indexx++;
        }
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 100 "2007119.y"
    {
        int f = 0, k = 0;

        for(k = 0; k < indexx; k++) {
            if(strcmp(store[k].tstr, (yyvsp[(1) - (3)].sv)) == 0) {
                printf("\n Error:  %s float type variable has already declared! This is invalid declaration \n", store[k].tstr);
                f = 1;
                break;
            }
        }

        if(f == 0) {
            store[indexx].tstr = (yyvsp[(1) - (3)].sv);
            store[indexx].tfloat = (yyvsp[(3) - (3)].fv);
            printf("\n value of variable %s = %f\t %d\n", store[indexx].tstr, store[indexx].tfloat);
            indexx++;
        }
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 118 "2007119.y"
    {
        int f = 0, k = 0;

        for(k = 0; k < indexx; k++) {
            if(strcmp(store[k].tstr, (yyvsp[(1) - (3)].sv)) == 0) {
                store[k].tint = (yyvsp[(3) - (3)].iv);
                printf("\n Error:  %s Integer type variable has declared! This is invalid declaration \n", store[k].tstr);
                f = 1;
                break;
            }
        }

        if(f == 0) {
            store[indexx].tstr = (yyvsp[(1) - (3)].sv);
            store[indexx].tint = (yyvsp[(3) - (3)].iv);
            printf("\n value of Variable %s = %d\n", store[indexx].tstr, store[indexx].tint);
            indexx++;
        }
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 145 "2007119.y"
    {
        int f = 0, k = 0;

        for(k = 0; k < indexx; k++) {
            if(strcmp(store[k].tstr, (yyvsp[(1) - (3)].sv)) == 0) {
                store[k].tfloat = (yyvsp[(3) - (3)].fv);
                printf("\n value of Variable %s = %f \n", store[k].tstr, store[k].tfloat);
                f = 1;
                break;
            }
        }

        if(f == 0) {
            printf("\n Error! Variable is not declared \n");
        }
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 161 "2007119.y"
    {
        int f = 0, k = 0;

        for(k = 0; k < indexx; k++) {
            if(strcmp(store[k].tstr, (yyvsp[(1) - (3)].sv)) == 0) {
                store[k].tint = (yyvsp[(3) - (3)].iv);
                printf("\n value of Variable %s = %d \n", store[k].tstr, store[k].tint);
                f = 1;
                break;
            }
        }

        if(f == 0) {
            printf("\n Error! Variable is not declared \n");
        }
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 179 "2007119.y"
    { printf("\n Value of expression : %d \n",(yyvsp[(1) - (2)].iv)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 180 "2007119.y"
    { printf("\n Value of expression : %f \n",(yyvsp[(1) - (2)].fv)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 182 "2007119.y"
    {
                      if((yyvsp[(7) - (29)].iv)==(yyvsp[(3) - (29)].iv))
                      {
                          printf("\n Value in switch: %d\n",(yyvsp[(11) - (29)].iv));
                      }
                      else if((yyvsp[(15) - (29)].iv)==(yyvsp[(3) - (29)].iv))
                      {
                          printf("\n Value in switch:%d\n",(yyvsp[(19) - (29)].iv));
                      }
                      else{
                          printf("\n Value in switch:%d\n",(yyvsp[(26) - (29)].iv));
                      }
                  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 196 "2007119.y"
    {
                      if((yyvsp[(7) - (37)].iv)==(yyvsp[(3) - (37)].iv))
                      {
                          printf("\n Value in switch: %d\n",(yyvsp[(11) - (37)].iv));
                      }
                      else if((yyvsp[(15) - (37)].iv)==(yyvsp[(3) - (37)].iv))
                      {
                          printf("\n Value in switch:%d\n",(yyvsp[(19) - (37)].iv));
                      }
                      else if((yyvsp[(23) - (37)].iv)==(yyvsp[(3) - (37)].iv)){
                          printf("\n Value in switch:%d\n",(yyvsp[(27) - (37)].iv));
                      }
                      else{
                          printf("\n Value in switch:%d\n",(yyvsp[(34) - (37)].iv));
                      }
                  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 213 "2007119.y"
    {
                      if((yyvsp[(7) - (45)].iv)==(yyvsp[(3) - (45)].iv))
                      {
                          printf("\n value in switch: %d\n",(yyvsp[(11) - (45)].iv));
                      }
                      else if((yyvsp[(15) - (45)].iv)==(yyvsp[(3) - (45)].iv))
                      {
                          printf("\n value in switch:%d\n",(yyvsp[(19) - (45)].iv));
                      }
                      else if((yyvsp[(23) - (45)].iv)==(yyvsp[(3) - (45)].iv)){
                          printf("\n value in switch:%d\n",(yyvsp[(27) - (45)].iv));
                      }
                      else if((yyvsp[(31) - (45)].iv)==(yyvsp[(3) - (45)].iv)){
                          printf("\n value in switch:%d\n",(yyvsp[(35) - (45)].iv));
                      }
                      else{
                          printf("\n value in switch:%d\n",(yyvsp[(42) - (45)].iv));
                      }
                  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 233 "2007119.y"
    {
                      int n=(yyvsp[(3) - (5)].iv);   

                      if(n%2==0){
                          printf(" %d is an even number \n",(yyvsp[(3) - (5)].iv));
                      }
                      else{
                          printf(" %d is an odd number \n",(yyvsp[(3) - (5)].iv));
                      }
                  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 244 "2007119.y"
    {
                      int n=(yyvsp[(3) - (7)].iv);
                      int rem=(yyvsp[(5) - (7)].iv);
                      int mul=1,i;

                      for(i=n;i<=rem;i++){
                          mul*=i;            
                      }
                      printf("Multiplication from %d to %d is: %d\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),mul);
                  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 255 "2007119.y"
    {
                      int n=(yyvsp[(3) - (7)].iv);
                      int rem=(yyvsp[(5) - (7)].iv);
                      int f=0,i;

                      for(i=n; i<=rem; i++)
                      {
                          f+=i;            
                      }
                      printf("Summation from %d to %d is: %d\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),f);
                  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 267 "2007119.y"
    {
                      if((yyvsp[(3) - (8)].iv))
                      { 
                          printf("\n Value of expression in EITHER BLOCK : %d\n",(yyvsp[(6) - (8)].iv));
                      }
                      else
                      {
                          printf("\n Condition value zero in EITHER BLOCK \n");
                      }
                  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 278 "2007119.y"
    {
                      if((yyvsp[(3) - (13)].iv)) 
                      {
                          printf("\n Value of expression in EITHER BLOCK : %d\n",(yyvsp[(6) - (13)].iv));
                      }
                      else
                      { 
                          printf("\n Value of expression in OR BLOCK : %d\n",(yyvsp[(11) - (13)].iv));
                      }
                  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 289 "2007119.y"
    {
                      if((yyvsp[(3) - (21)].iv)) 
                      {
                          printf("\n Value of expression in EITHER BLOCK : %d\n",(yyvsp[(6) - (21)].iv));
                      }
                      else if((yyvsp[(11) - (21)].iv))
                      { 
                          printf("\n Value of expression in OTHERWISE BLOCK : %d\n",(yyvsp[(14) - (21)].iv));
                      }
                      else{
                          printf("\n Value of expression in OR BLOCK : %d\n",(yyvsp[(19) - (21)].iv));
                      }
                  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 304 "2007119.y"
    { 
                      int n=(yyvsp[(12) - (13)].iv);
                      int f=(yyvsp[(10) - (13)].iv);
                      int o;
                      if(f<(yyvsp[(5) - (13)].iv)){
                          while(f<(yyvsp[(5) - (13)].iv)){
                              f=f+2;
                              printf("\n Value of expression in WHILE BLOCK : %d\n",f);
                          }
                      }
                      for(o=0;o<indexx;o++){
                          if((yyvsp[(10) - (13)].iv)==store[o].tint){
                              store[o].tint=f;
                              break;
                          }
                      }
                  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 322 "2007119.y"
    {
                      int n=(yyvsp[(3) - (5)].iv);
                      int primen=0,i;
                      for(i=2;i<n;i++){
                          if(n%i==0){
                              primen=1;
                              break;
                          }            
                      }
                      if(n==1){
                          printf("%d is neither a prime number nor a composite \n", (yyvsp[(3) - (5)].iv));
                      }
                      else if(primen==0){
                          printf("%d is a prime number \n", (yyvsp[(3) - (5)].iv));
                      }
                      else{
                          printf("%d is not a prime number \n", (yyvsp[(3) - (5)].iv));
                      }
                  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 342 "2007119.y"
    {
                      int n=(yyvsp[(3) - (7)].iv);
                      int rem=(yyvsp[(5) - (7)].iv);
                      printf("%d ^ %d = %lf\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),pow(n,rem));
                  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 348 "2007119.y"
    {
                      int n=(yyvsp[(3) - (5)].iv),i,fac=1;   

                      for(i=n; i>=2; i--)
                      {
                          fac*=i;            
                      }

                      printf("Factorial of %d : %d\n",(yyvsp[(3) - (5)].iv),fac);
                  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 359 "2007119.y"
    {
                      if((yyvsp[(3) - (5)].iv) % 4==0){
                          printf("\n %d is a leap year \n", (yyvsp[(3) - (5)].iv));
                      }
                      else{
                          printf("\n %d is not a leap year \n",(yyvsp[(3) - (5)].iv));
                      }
                  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 368 "2007119.y"
    {
                      int originalN = (yyvsp[(3) - (5)].iv),rem,reversedN=0;
                      while ((yyvsp[(3) - (5)].iv) != 0) {
                          rem = (yyvsp[(3) - (5)].iv) % 10;
                          reversedN = reversedN * 10 + rem;
                          (yyvsp[(3) - (5)].iv) /= 10;
                      }

                      if (originalN == reversedN)
                          printf("\n  %d is a palindrome. \n", originalN);
                      else
                          printf("\n %d is not a palindrome.\n", originalN);
                  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 382 "2007119.y"
    {
                      int n; 
                      if((yyvsp[(5) - (7)].iv)!=0)
                      {
                          n = (yyvsp[(3) - (7)].iv) / (yyvsp[(5) - (7)].iv);
                          printf("\n Result of division : %d\n",n);
                      }
                      else
                      {
                          n = 0;
                          printf("\n Divide by 0\t");
                      }
                  ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 395 "2007119.y"
    {printf("Print exp %d\n",(yyvsp[(3) - (5)].iv));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 396 "2007119.y"
    {printf("Print exp %f\n",(yyvsp[(3) - (5)].fv));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 400 "2007119.y"
    {
          int n=(yyvsp[(2) - (12)].iv);
          int rem=(yyvsp[(4) - (12)].iv);
          int l=(yyvsp[(9) - (12)].iv);
          int r=(yyvsp[(11) - (12)].iv);
          int k=(yyvsp[(7) - (12)].iv),o,p;
          for(p=n;p<=rem;p++){    
              k=k*(yyvsp[(11) - (12)].iv);

              printf("value of the loop: %d\n", k);    
          }
          for(o=0;o<indexx;o++){
              if((yyvsp[(7) - (12)].iv)==store[o].tint){
                  store[o].tint=k;
                  break;
              }
          }
      ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 419 "2007119.y"
    {
          int n=(yyvsp[(2) - (12)].iv);
          int rem=(yyvsp[(4) - (12)].iv);
          int l=(yyvsp[(9) - (12)].iv);
          int r=(yyvsp[(11) - (12)].iv);
          int k=(yyvsp[(7) - (12)].iv),o,p;
          for(p=n;p<=rem;p++){    
              k=k*(yyvsp[(11) - (12)].iv);

              printf("Value of the loop: %d\n", k);    
          }
          for(o=0;o<indexx;o++){
              if((yyvsp[(7) - (12)].iv)==store[o].tint){
                  store[o].tint=k;
                  break;
              }
          }
      ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 439 "2007119.y"
    {
          printf("Sine of %d degree is :%lf \n",(yyvsp[(3) - (4)].iv),sin((yyvsp[(3) - (4)].iv)*3.1416/180));
      ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 443 "2007119.y"
    {
          printf("CoSine of %d degree is :%lf \n",(yyvsp[(3) - (4)].iv),cos((yyvsp[(3) - (4)].iv)*3.1416/180));
      ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 447 "2007119.y"
    {
          printf("Tangent of %d degree is :%lf \n",(yyvsp[(3) - (4)].iv),tan((yyvsp[(3) - (4)].iv)*3.1416/180));
      ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 452 "2007119.y"
    {
             store[indexx].tfloat=(yyvsp[(1) - (1)].fv);
             (yyval.fv)=store[indexx].tfloat;
             indexx++;
         ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 458 "2007119.y"
    {
             int j=0,f=0;
             for(j=0;j<indexx;j++)
             {
                 if(strcmp(store[j].tstr,(yyvsp[(1) - (2)].sv))==0)
                 {
                     (yyval.fv)=store[j].tfloat;
                     f=1;
                     break;
                 }
             }
             if(f==0)
             {
                 printf("\n Variable is not declared \n");
             }
         ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 474 "2007119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) + (yyvsp[(3) - (3)].fv); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 475 "2007119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) - (yyvsp[(3) - (3)].fv); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 476 "2007119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) * (yyvsp[(3) - (3)].fv); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 478 "2007119.y"
    {
             if((yyvsp[(3) - (3)].fv))
             {
                 (yyval.fv) = (yyvsp[(1) - (3)].fv) / (yyvsp[(3) - (3)].fv);
             }
             else
             {
                 (yyval.fv) = 0;
                 printf("\n Error Message : divide by 0\t");
             }
         ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 491 "2007119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) < (yyvsp[(3) - (3)].fv); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 492 "2007119.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) > (yyvsp[(3) - (3)].fv); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 493 "2007119.y"
    { (yyval.fv) = (yyvsp[(2) - (3)].fv); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 494 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (2)].fv) + 1;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 495 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (2)].fv) - 1;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 496 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) <= (yyvsp[(3) - (3)].fv);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 497 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) >= (yyvsp[(3) - (3)].fv);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 498 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) || (yyvsp[(3) - (3)].fv);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 499 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) && (yyvsp[(3) - (3)].fv);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 500 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) == (yyvsp[(3) - (3)].fv);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 501 "2007119.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) != (yyvsp[(3) - (3)].fv);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 504 "2007119.y"
    { 
        store[indexx].tint = (yyvsp[(1) - (1)].iv);
        (yyval.iv) = store[indexx].tint;
        indexx++;
      ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 510 "2007119.y"
    { 
        int j = 0, f = 0;
        for (j = 0; j < indexx; j++) {
          if (strcmp(store[j].tstr, (yyvsp[(1) - (1)].sv)) == 0) {
            (yyval.iv) = store[j].tint;
            f = 1;
            break;
          }
        }
        if (f == 0) {
          printf("\n Variable is not declared \n");
        }
      ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 524 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) + (yyvsp[(3) - (3)].iv); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 526 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) - (yyvsp[(3) - (3)].iv); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 528 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) * (yyvsp[(3) - (3)].iv); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 530 "2007119.y"
    { 
        if ((yyvsp[(3) - (3)].iv)) {
          (yyval.iv) = (yyvsp[(1) - (3)].iv) / (yyvsp[(3) - (3)].iv);
        } else {
          (yyval.iv) = 0;
          printf("\n Error Message: Divide by 0\t");
        }
      ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 539 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) < (yyvsp[(3) - (3)].iv); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 541 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) > (yyvsp[(3) - (3)].iv); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 543 "2007119.y"
    { (yyval.iv) = (yyvsp[(2) - (3)].iv); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 545 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (2)].iv) + 1; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 547 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (2)].iv) - 1; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 549 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) <= (yyvsp[(3) - (3)].iv); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 551 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) >= (yyvsp[(3) - (3)].iv); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 553 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) || (yyvsp[(3) - (3)].iv); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 555 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) && (yyvsp[(3) - (3)].iv); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 557 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) == (yyvsp[(3) - (3)].iv); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 559 "2007119.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) != (yyvsp[(3) - (3)].iv); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2661 "2007119.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 563 "2007119.y"

