/* A Bison parser, made by GNU Bison 3.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "SPparser.y"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "symbolTable.h"
#include "parsedValue.h"

extern "C" int yylex();
extern "C" int yyparse();
extern FILE * yyin;

int line_no = 1;
int whileCounter = 0;
std::ofstream outFile;
SymbolTable symTable;

bool isReal(char value[]);
const char * createTempIntegerAddress();
const char * createTempRealAddress();
void assign (char [], ParsedValue *);
void decl_id ( char [], const char [] );
void finish();
ParsedValue * gen_infix(ParsedValue* o1, char op[], ParsedValue* o2);
ParsedValue * relation_infix(ParsedValue * operand1, char * op, ParsedValue * operand2);
ParsedValue * boolean_infix(ParsedValue * operand1, char * op, ParsedValue * operand2);
ParsedValue * boolean_not(char * op, ParsedValue * operand1);
void read_id (char []);
void write_expr(char []);
void write_label(const char * label);
void verify_sym_decl(char []);
void error(const char []);
void yyerror(const char []);
void printSymbolTable();
ParsedValue * conditionalJump(const char * jump_if, ParsedValue * cond);
ParsedValue * jump (char * label);
int expCheck(ParsedValue * cond, int whileCounter);
const char * createTempLabel();

#line 114 "SPparser.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PASCAL_TAB_H_INCLUDED
# define YY_YY_PASCAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    VAR = 259,
    START = 260,
    END = 261,
    READ = 262,
    WRITE = 263,
    ASSIGNOP = 264,
    INTEGER = 265,
    REAL = 266,
    CHARACTER = 267,
    STRING = 268,
    BOOLEAN = 269,
    BOOL = 270,
    INTLITERAL = 271,
    REALLITERAL = 272,
    CHARLITERAL = 273,
    STRINGLITERAL = 274,
    LPAREN = 275,
    RPAREN = 276,
    LBRACKET = 277,
    RBRACKET = 278,
    COMMA = 279,
    PERIOD = 280,
    SEMICOLON = 281,
    COLON = 282,
    PLUSOP = 283,
    MINUSOP = 284,
    MULTOP = 285,
    DIVOP = 286,
    MODOP = 287,
    COMMENT = 288,
    ID = 289,
    GT_OP = 290,
    LT_OP = 291,
    GTEQUAL_OP = 292,
    LTEQUAL_OP = 293,
    EQUALOP = 294,
    NOTEQUALOP = 295,
    ANDOP = 296,
    OR_OP = 297,
    NOTOP = 298,
    IF = 299,
    THEN = 300,
    ELSE = 301,
    WHILE = 302,
    DO = 303,
    REPEAT = 304,
    UNTIL = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "SPparser.y"

	int ival;
	char * sval;
	ParsedValue * rawval;

#line 214 "SPparser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PASCAL_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

#define YYUNDEFTOK  2
#define YYMAXUTOK   305

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    73,    73,    73,    73,    75,    76,    76,    78,    79,
      81,    82,    83,    84,    85,    87,    88,    88,    89,    90,
      90,    92,    93,    93,    94,    95,    95,    97,    98,    98,
      99,   100,   100,   102,   103,   103,   104,   105,   105,   107,
     108,   108,   109,   110,   110,   113,   114,   117,   118,   121,
     122,   123,   124,   127,   128,   129,   129,   130,   131,   132,
     133,   136,   137,   139,   140,   143,   146,   149,   152,   155,
     158,   161,   164,   167,   168,   171,   172,   175,   176,   179,
     180,   183,   184,   186,   187,   188,   190,   191,   192,   195,
     196,   197,   198,   199,   200,   203,   204,   206,   207,   210,
     213,   216,   219,   220,   221,   222,   223,   224,   227,   228,
     230,   231,   232,   234,   235,   237
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "VAR", "START", "END", "READ",
  "WRITE", "ASSIGNOP", "INTEGER", "REAL", "CHARACTER", "STRING", "BOOLEAN",
  "BOOL", "INTLITERAL", "REALLITERAL", "CHARLITERAL", "STRINGLITERAL",
  "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "COMMA", "PERIOD",
  "SEMICOLON", "COLON", "PLUSOP", "MINUSOP", "MULTOP", "DIVOP", "MODOP",
  "COMMENT", "ID", "GT_OP", "LT_OP", "GTEQUAL_OP", "LTEQUAL_OP", "EQUALOP",
  "NOTEQUALOP", "ANDOP", "OR_OP", "NOTOP", "IF", "THEN", "ELSE", "WHILE",
  "DO", "REPEAT", "UNTIL", "$accept", "program", "$@1", "$@2", "variables",
  "$@3", "d_list", "declaration", "bool_var_list", "$@4", "$@5",
  "int_var_list", "$@6", "$@7", "real_var_list", "$@8", "$@9",
  "char_var_list", "$@10", "$@11", "string_var_list", "$@12", "$@13",
  "statement_list", "statement", "unmatched_statement",
  "matched_statement", "$@14", "id_list", "expr_list", "while_do", "while",
  "do_match", "repeat_until", "repeat", "if_then", "if_match",
  "else_match", "expression", "boolean_and", "boolean_not", "rel_expr",
  "math_expr", "expr", "term", "literal", "lparen", "rparen", "or", "and",
  "not", "relation", "add_op", "mult_op", "ident", "system_goal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -104

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-104)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,  -104,  -104,    33,    10,  -104,  -104,  -104,    24,    68,
    -104,    16,    16,    16,    16,    16,    68,  -104,   111,  -104,
      29,    45,    66,    52,   104,    55,   118,    74,   123,    75,
    -104,   111,    69,    69,  -104,    83,  -104,  -104,    80,  -104,
    -104,  -104,   111,    83,    -6,   127,   111,  -104,   111,    84,
      16,  -104,    98,    16,  -104,    99,    16,  -104,   103,    16,
    -104,   134,    16,  -104,   141,    89,  -104,    16,   147,  -104,
    -104,  -104,  -104,  -104,  -104,    -5,    72,  -104,  -104,   169,
     109,  -104,  -104,   147,   160,  -104,   126,  -104,  -104,   111,
     -21,  -104,   111,    -6,   102,  -104,   127,   127,  -104,   108,
    -104,  -104,    83,   148,   140,   150,   151,   161,   154,   164,
     163,   174,   170,  -104,    23,  -104,    28,   142,  -104,  -104,
     147,  -104,   147,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,   160,   160,  -104,  -104,  -104,   160,   -12,  -104,  -104,
     111,  -104,    83,   108,  -104,   142,   177,  -104,   178,  -104,
     179,  -104,   180,  -104,   182,  -104,  -104,    16,   143,   147,
     166,    72,  -104,    -9,   109,  -104,  -104,   142,   167,   183,
     184,   192,   176,   181,  -104,  -104,   142,  -104,  -104,  -104,
    -104,  -104,  -104,  -104
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,   115,     0,     0,     1,     6,     5,     0,     0,
       3,   114,   114,   114,   114,   114,     7,     9,   114,   113,
       0,    21,     0,    27,     0,    33,     0,    39,     0,    15,
       8,   114,    96,    96,    60,    85,    66,    69,   114,    45,
      48,    47,    54,    85,     0,   114,   114,    53,   114,     0,
     114,    10,     0,   114,    11,     0,   114,    12,     0,   114,
      13,     0,   114,    14,     0,   114,    95,   114,    85,    93,
      89,    90,    92,    91,   101,     0,    73,    75,    77,    79,
      81,    83,    88,    85,    85,    87,     0,    46,    51,   114,
       0,    52,   114,     0,     0,    54,   114,   114,    49,    47,
      50,    71,    85,    24,     0,    30,     0,    36,     0,    42,
       0,    18,     0,    59,    98,    61,    98,    63,    99,    70,
      85,   100,    85,   108,   109,   102,   103,   104,   105,   106,
     107,    85,    85,   110,   111,   112,    94,    98,    78,     4,
      65,    67,    85,     0,    72,    55,     0,    23,     0,    29,
       0,    35,     0,    41,     0,    17,    97,   114,     0,    85,
       0,    74,    76,    80,    82,    84,    86,    68,     0,     0,
       0,     0,     0,     0,    62,    57,    64,    58,    56,    26,
      32,    38,    44,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,  -104,  -104,  -104,  -104,   186,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,   -26,   -30,   -33,   -20,  -104,  -104,  -104,
     -27,  -104,  -104,  -104,  -104,   -38,  -104,   -22,   -37,    91,
      78,   128,    82,    85,    79,  -104,    35,  -103,  -104,  -104,
    -104,  -104,  -104,  -104,   -11,  -104
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    18,     8,     9,    16,    17,    28,    64,
     154,    20,    52,   146,    22,    55,   148,    24,    58,   150,
      26,    61,   152,    38,    39,    40,    41,   168,   114,   116,
      42,    43,    89,    44,    45,    46,    47,    48,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   158,   120,   122,
      84,   131,   132,   136,    49,     3
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    23,    25,    27,    29,    65,    90,    96,    87,   156,
       1,    91,    88,   160,     6,   100,    98,    92,    95,   123,
     124,   118,    93,    97,    85,    94,    99,   141,   101,    10,
     118,   117,    85,     5,   166,    87,     7,   118,    35,   103,
     119,    36,   105,    37,   156,   107,   137,   157,   109,   156,
      19,   111,   159,    50,   -22,    51,   115,    85,    96,    96,
     100,   -28,    88,   140,   -34,   145,    92,    67,    68,    95,
      95,    93,    85,    85,    97,    97,   143,   101,    11,    12,
      13,    14,    15,   -40,   -16,    31,    86,    32,    33,    66,
      53,    85,    54,   102,    31,   113,    32,    33,    69,    70,
      71,    72,    73,    66,   -96,   167,    34,   104,   106,    85,
      87,    85,   108,   121,    19,    34,    31,    19,    32,    33,
      85,    85,   176,    19,    35,    85,    74,    36,    56,    37,
      57,    85,    31,    35,    32,    33,    36,    34,    37,   133,
     134,   135,    59,   110,    60,    19,   174,    62,    85,    63,
     112,   139,   142,    34,   144,    35,   147,   -25,    36,   -31,
      37,    19,    69,    70,    71,    72,    73,    66,   149,   175,
     -37,    35,   151,   -43,    36,    69,    70,    71,    72,    73,
      66,    19,   153,   -19,   118,   155,   169,   170,   171,   172,
      74,   173,   177,   178,    19,   182,   183,   123,   124,   179,
     162,   180,    30,   -96,   125,   126,   127,   128,   129,   130,
     181,   161,   138,   163,     0,   165,     0,   164
};

static const yytype_int16 yycheck[] =
{
      11,    12,    13,    14,    15,    31,    43,    45,    38,    21,
       3,    44,    42,   116,     4,    48,    46,    44,    45,    28,
      29,    42,    44,    45,    35,    45,    46,    48,    48,     5,
      42,    68,    43,     0,   137,    65,    26,    42,    44,    50,
      45,    47,    53,    49,    21,    56,    83,    24,    59,    21,
      34,    62,    24,    24,     9,    26,    67,    68,    96,    97,
      93,     9,    92,    89,     9,   102,    93,    32,    33,    96,
      97,    93,    83,    84,    96,    97,    96,    97,    10,    11,
      12,    13,    14,     9,     9,     5,     6,     7,     8,    20,
      24,   102,    26,     9,     5,     6,     7,     8,    15,    16,
      17,    18,    19,    20,    21,   142,    26,     9,     9,   120,
     140,   122,     9,    41,    34,    26,     5,    34,     7,     8,
     131,   132,   159,    34,    44,   136,    43,    47,    24,    49,
      26,   142,     5,    44,     7,     8,    47,    26,    49,    30,
      31,    32,    24,     9,    26,    34,   157,    24,   159,    26,
       9,    25,    50,    26,    46,    44,    16,     9,    47,     9,
      49,    34,    15,    16,    17,    18,    19,    20,    17,    26,
       9,    44,    18,     9,    47,    15,    16,    17,    18,    19,
      20,    34,    19,     9,    42,    15,     9,     9,     9,     9,
      43,     9,    26,    26,    34,    19,    15,    28,    29,    16,
     122,    17,    16,    43,    35,    36,    37,    38,    39,    40,
      18,   120,    84,   131,    -1,   136,    -1,   132
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,   106,    53,     0,     4,    26,    55,    56,
       5,    10,    11,    12,    13,    14,    57,    58,    54,    34,
      62,   105,    65,   105,    68,   105,    71,   105,    59,   105,
      58,     5,     7,     8,    26,    44,    47,    49,    74,    75,
      76,    77,    81,    82,    84,    85,    86,    87,    88,   105,
      24,    26,    63,    24,    26,    66,    24,    26,    69,    24,
      26,    72,    24,    26,    60,    74,    20,    97,    97,    15,
      16,    17,    18,    19,    43,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   101,   105,     6,    75,    75,    83,
      89,    76,    81,    88,    77,    81,    86,    88,    75,    77,
      76,    77,     9,   105,     9,   105,     9,   105,     9,   105,
       9,   105,     9,     6,    79,   105,    80,    89,    42,    45,
      99,    41,   100,    28,    29,    35,    36,    37,    38,    39,
      40,   102,   103,    30,    31,    32,   104,    89,    92,    25,
      74,    48,    50,    77,    46,    89,    64,    16,    67,    17,
      70,    18,    73,    19,    61,    15,    21,    24,    98,    24,
      98,    90,    91,    93,    94,    95,    98,    89,    78,     9,
       9,     9,     9,     9,   105,    26,    89,    26,    26,    16,
      17,    18,    19,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    53,    54,    52,    55,    56,    55,    57,    57,
      58,    58,    58,    58,    58,    59,    60,    59,    59,    61,
      59,    62,    63,    62,    62,    64,    62,    65,    66,    65,
      65,    67,    65,    68,    69,    68,    68,    70,    68,    71,
      72,    71,    71,    73,    71,    74,    74,    75,    75,    76,
      76,    76,    76,    77,    77,    78,    77,    77,    77,    77,
      77,    79,    79,    80,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    97,    97,    98,    98,    99,
     100,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   104,   105,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     8,     1,     0,     3,     2,     1,
       3,     3,     3,     3,     3,     1,     0,     4,     3,     0,
       6,     1,     0,     4,     3,     0,     6,     1,     0,     4,
       3,     0,     6,     1,     0,     4,     3,     0,     6,     1,
       0,     4,     3,     0,     6,     1,     2,     1,     1,     2,
       2,     2,     2,     1,     1,     0,     5,     5,     5,     3,
       1,     1,     3,     1,     3,     3,     1,     2,     4,     1,
       3,     2,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     3,     1,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 73 "SPparser.y"
    {line_no++; symTable.enterScope();}
#line 1459 "SPparser.tab.c"
    break;

  case 3:
#line 73 "SPparser.y"
    {line_no++;}
#line 1465 "SPparser.tab.c"
    break;

  case 4:
#line 73 "SPparser.y"
    {line_no++;}
#line 1471 "SPparser.tab.c"
    break;

  case 5:
#line 75 "SPparser.y"
    {line_no++;}
#line 1477 "SPparser.tab.c"
    break;

  case 6:
#line 76 "SPparser.y"
    {line_no++;}
#line 1483 "SPparser.tab.c"
    break;

  case 10:
#line 81 "SPparser.y"
    {line_no++;}
#line 1489 "SPparser.tab.c"
    break;

  case 11:
#line 82 "SPparser.y"
    {line_no++;}
#line 1495 "SPparser.tab.c"
    break;

  case 12:
#line 83 "SPparser.y"
    {line_no++;}
#line 1501 "SPparser.tab.c"
    break;

  case 13:
#line 84 "SPparser.y"
    {line_no++;}
#line 1507 "SPparser.tab.c"
    break;

  case 14:
#line 85 "SPparser.y"
    {line_no++;}
#line 1513 "SPparser.tab.c"
    break;

  case 15:
#line 87 "SPparser.y"
    { decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1519 "SPparser.tab.c"
    break;

  case 16:
#line 88 "SPparser.y"
    {decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1525 "SPparser.tab.c"
    break;

  case 17:
#line 88 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "integer"));}
#line 1531 "SPparser.tab.c"
    break;

  case 18:
#line 89 "SPparser.y"
    { decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1537 "SPparser.tab.c"
    break;

  case 19:
#line 90 "SPparser.y"
    { decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1543 "SPparser.tab.c"
    break;

  case 20:
#line 90 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "integer"));}
#line 1549 "SPparser.tab.c"
    break;

  case 21:
#line 92 "SPparser.y"
    { decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1555 "SPparser.tab.c"
    break;

  case 22:
#line 93 "SPparser.y"
    {decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1561 "SPparser.tab.c"
    break;

  case 23:
#line 93 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "integer"));}
#line 1567 "SPparser.tab.c"
    break;

  case 24:
#line 94 "SPparser.y"
    { decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1573 "SPparser.tab.c"
    break;

  case 25:
#line 95 "SPparser.y"
    { decl_id((yyvsp[0].sval), "integer"); symTable.insertSymbol((yyvsp[0].sval), "integer");}
#line 1579 "SPparser.tab.c"
    break;

  case 26:
#line 95 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "integer"));}
#line 1585 "SPparser.tab.c"
    break;

  case 27:
#line 97 "SPparser.y"
    {decl_id((yyvsp[0].sval), "real"); symTable.insertSymbol((yyvsp[0].sval), "real");}
#line 1591 "SPparser.tab.c"
    break;

  case 28:
#line 98 "SPparser.y"
    {decl_id((yyvsp[0].sval), "real"); symTable.insertSymbol((yyvsp[0].sval), "real");}
#line 1597 "SPparser.tab.c"
    break;

  case 29:
#line 98 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "real"));}
#line 1603 "SPparser.tab.c"
    break;

  case 30:
#line 99 "SPparser.y"
    {decl_id((yyvsp[0].sval), "real"); symTable.insertSymbol((yyvsp[0].sval), "real");}
#line 1609 "SPparser.tab.c"
    break;

  case 31:
#line 100 "SPparser.y"
    {decl_id((yyvsp[0].sval), "real"); symTable.insertSymbol((yyvsp[0].sval), "real");}
#line 1615 "SPparser.tab.c"
    break;

  case 32:
#line 100 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "real"));}
#line 1621 "SPparser.tab.c"
    break;

  case 33:
#line 102 "SPparser.y"
    {decl_id((yyvsp[0].sval), "character"); symTable.insertSymbol((yyvsp[0].sval), "character");}
#line 1627 "SPparser.tab.c"
    break;

  case 34:
#line 103 "SPparser.y"
    {decl_id((yyvsp[0].sval), "character"); symTable.insertSymbol((yyvsp[0].sval), "character");}
#line 1633 "SPparser.tab.c"
    break;

  case 35:
#line 103 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "character"));}
#line 1639 "SPparser.tab.c"
    break;

  case 36:
#line 104 "SPparser.y"
    {decl_id((yyvsp[0].sval), "character"); symTable.insertSymbol((yyvsp[0].sval), "character");}
#line 1645 "SPparser.tab.c"
    break;

  case 37:
#line 105 "SPparser.y"
    {decl_id((yyvsp[0].sval), "character"); symTable.insertSymbol((yyvsp[0].sval), "character");}
#line 1651 "SPparser.tab.c"
    break;

  case 38:
#line 105 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "character"));}
#line 1657 "SPparser.tab.c"
    break;

  case 39:
#line 107 "SPparser.y"
    {decl_id((yyvsp[0].sval), "string"); symTable.insertSymbol((yyvsp[0].sval), "string");}
#line 1663 "SPparser.tab.c"
    break;

  case 40:
#line 108 "SPparser.y"
    {decl_id((yyvsp[0].sval), "string"); symTable.insertSymbol((yyvsp[0].sval), "string");}
#line 1669 "SPparser.tab.c"
    break;

  case 41:
#line 108 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "string"));}
#line 1675 "SPparser.tab.c"
    break;

  case 42:
#line 109 "SPparser.y"
    {decl_id((yyvsp[0].sval), "string"); symTable.insertSymbol((yyvsp[0].sval), "string");}
#line 1681 "SPparser.tab.c"
    break;

  case 43:
#line 110 "SPparser.y"
    {decl_id((yyvsp[0].sval), "string"); symTable.insertSymbol((yyvsp[0].sval), "string");}
#line 1687 "SPparser.tab.c"
    break;

  case 44:
#line 110 "SPparser.y"
    {assign((yyvsp[-3].sval), new ParsedValue(yylval.sval, "string"));}
#line 1693 "SPparser.tab.c"
    break;

  case 49:
#line 121 "SPparser.y"
    {write_label((yyvsp[-1].rawval)->getValue());}
#line 1699 "SPparser.tab.c"
    break;

  case 50:
#line 122 "SPparser.y"
    {write_label((yyvsp[-1].rawval)->getValue());}
#line 1705 "SPparser.tab.c"
    break;

  case 51:
#line 123 "SPparser.y"
    {write_label((yyvsp[-1].rawval)->getValue());}
#line 1711 "SPparser.tab.c"
    break;

  case 52:
#line 124 "SPparser.y"
    {write_label((yyvsp[-1].rawval)->getValue());}
#line 1717 "SPparser.tab.c"
    break;

  case 55:
#line 129 "SPparser.y"
    {verify_sym_decl((yyvsp[-2].sval)); assign((yyvsp[-2].sval),(yyvsp[0].rawval));}
#line 1723 "SPparser.tab.c"
    break;

  case 56:
#line 129 "SPparser.y"
    {line_no++;}
#line 1729 "SPparser.tab.c"
    break;

  case 57:
#line 130 "SPparser.y"
    {line_no++;}
#line 1735 "SPparser.tab.c"
    break;

  case 58:
#line 131 "SPparser.y"
    {line_no++;}
#line 1741 "SPparser.tab.c"
    break;

  case 60:
#line 133 "SPparser.y"
    {line_no++;}
#line 1747 "SPparser.tab.c"
    break;

  case 61:
#line 136 "SPparser.y"
    {verify_sym_decl((yyvsp[0].sval)); read_id((yyvsp[0].sval));}
#line 1753 "SPparser.tab.c"
    break;

  case 62:
#line 137 "SPparser.y"
    {verify_sym_decl((yyvsp[0].sval)); read_id((yyvsp[0].sval));}
#line 1759 "SPparser.tab.c"
    break;

  case 63:
#line 139 "SPparser.y"
    {write_expr((yyvsp[0].rawval)->getValue());}
#line 1765 "SPparser.tab.c"
    break;

  case 64:
#line 140 "SPparser.y"
    {write_expr((yyvsp[0].rawval)->getValue());}
#line 1771 "SPparser.tab.c"
    break;

  case 65:
#line 143 "SPparser.y"
    {jump((yyvsp[-2].rawval)->getValue()); write_label((yyvsp[-1].rawval)->getValue());}
#line 1777 "SPparser.tab.c"
    break;

  case 66:
#line 146 "SPparser.y"
    {const char * temp = strdup(createTempLabel()); write_label(temp); (yyval.rawval) = new ParsedValue(temp, "character");}
#line 1783 "SPparser.tab.c"
    break;

  case 67:
#line 149 "SPparser.y"
    {(yyval.rawval) = conditionalJump("false", (yyvsp[-1].rawval));}
#line 1789 "SPparser.tab.c"
    break;

  case 68:
#line 152 "SPparser.y"
    {conditionalJump("true", (yyvsp[-3].rawval));}
#line 1795 "SPparser.tab.c"
    break;

  case 69:
#line 155 "SPparser.y"
    {const char * temp = strdup(createTempLabel()); write_label(temp); (yyval.rawval) = new ParsedValue(temp, "character");}
#line 1801 "SPparser.tab.c"
    break;

  case 70:
#line 158 "SPparser.y"
    {(yyval.rawval) = conditionalJump("false", (yyvsp[-1].rawval));/*not tested (lol)*/}
#line 1807 "SPparser.tab.c"
    break;

  case 71:
#line 161 "SPparser.y"
    {write_label((yyvsp[-1].rawval)->getValue());}
#line 1813 "SPparser.tab.c"
    break;

  case 72:
#line 164 "SPparser.y"
    {(yyval.rawval) = jump(strdup(createTempLabel())); write_label((yyvsp[-2].rawval)->getValue());/*needs testing*/}
#line 1819 "SPparser.tab.c"
    break;

  case 73:
#line 167 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1825 "SPparser.tab.c"
    break;

  case 74:
#line 168 "SPparser.y"
    {(yyval.rawval) = boolean_infix((yyvsp[-2].rawval), (yyvsp[-1].sval), (yyvsp[0].rawval));}
#line 1831 "SPparser.tab.c"
    break;

  case 75:
#line 171 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1837 "SPparser.tab.c"
    break;

  case 76:
#line 172 "SPparser.y"
    {(yyval.rawval) = boolean_infix((yyvsp[-2].rawval), (yyvsp[-1].sval), (yyvsp[0].rawval));}
#line 1843 "SPparser.tab.c"
    break;

  case 77:
#line 175 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1849 "SPparser.tab.c"
    break;

  case 78:
#line 176 "SPparser.y"
    {(yyval.rawval) = boolean_not((yyvsp[-1].sval), (yyvsp[0].rawval));}
#line 1855 "SPparser.tab.c"
    break;

  case 79:
#line 179 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1861 "SPparser.tab.c"
    break;

  case 80:
#line 180 "SPparser.y"
    {(yyval.rawval) = relation_infix((yyvsp[-2].rawval), (yyvsp[-1].sval), (yyvsp[0].rawval));}
#line 1867 "SPparser.tab.c"
    break;

  case 81:
#line 183 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1873 "SPparser.tab.c"
    break;

  case 82:
#line 184 "SPparser.y"
    {(yyval.rawval) = gen_infix((yyvsp[-2].rawval),(yyvsp[-1].sval),(yyvsp[0].rawval));}
#line 1879 "SPparser.tab.c"
    break;

  case 83:
#line 186 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1885 "SPparser.tab.c"
    break;

  case 84:
#line 187 "SPparser.y"
    {(yyval.rawval) = gen_infix((yyvsp[-2].rawval),(yyvsp[-1].sval),(yyvsp[0].rawval));}
#line 1891 "SPparser.tab.c"
    break;

  case 85:
#line 188 "SPparser.y"
    {error("EXPRESSION EXPECTED, BUT FOUND");}
#line 1897 "SPparser.tab.c"
    break;

  case 86:
#line 190 "SPparser.y"
    {(yyval.rawval) = (yyvsp[-1].rawval);}
#line 1903 "SPparser.tab.c"
    break;

  case 87:
#line 191 "SPparser.y"
    {verify_sym_decl((yyvsp[0].sval)); (yyval.rawval) = new ParsedValue((yyvsp[0].sval), symTable.typeOf((yyvsp[0].sval)).c_str());}
#line 1909 "SPparser.tab.c"
    break;

  case 88:
#line 192 "SPparser.y"
    {(yyval.rawval) = (yyvsp[0].rawval);}
#line 1915 "SPparser.tab.c"
    break;

  case 89:
#line 195 "SPparser.y"
    {(yyval.rawval) = new ParsedValue(yylval.sval, "integer");}
#line 1921 "SPparser.tab.c"
    break;

  case 90:
#line 196 "SPparser.y"
    {(yyval.rawval) = new ParsedValue(yylval.sval, "real");}
#line 1927 "SPparser.tab.c"
    break;

  case 91:
#line 197 "SPparser.y"
    {(yyval.rawval) = new ParsedValue(yylval.sval, "string");}
#line 1933 "SPparser.tab.c"
    break;

  case 92:
#line 198 "SPparser.y"
    {(yyval.rawval) = new ParsedValue(yylval.sval, "char");}
#line 1939 "SPparser.tab.c"
    break;

  case 93:
#line 199 "SPparser.y"
    {(yyval.rawval) = new ParsedValue(yylval.sval, "integer");}
#line 1945 "SPparser.tab.c"
    break;

  case 94:
#line 200 "SPparser.y"
    {error("NUMERIC VALUE EXPECTED, BUT FOUND");}
#line 1951 "SPparser.tab.c"
    break;

  case 96:
#line 204 "SPparser.y"
    {error("( EXPECTED , BUT FOUND");}
#line 1957 "SPparser.tab.c"
    break;

  case 98:
#line 207 "SPparser.y"
    {error(") EXPECTED , BUT FOUND");}
#line 1963 "SPparser.tab.c"
    break;

  case 99:
#line 210 "SPparser.y"
    {(yyval.sval) = strdup("or");}
#line 1969 "SPparser.tab.c"
    break;

  case 100:
#line 213 "SPparser.y"
    {(yyval.sval) = strdup("and");}
#line 1975 "SPparser.tab.c"
    break;

  case 101:
#line 216 "SPparser.y"
    {(yyval.sval) = strdup("not");}
#line 1981 "SPparser.tab.c"
    break;

  case 102:
#line 219 "SPparser.y"
    {(yyval.sval) = strdup("gt");}
#line 1987 "SPparser.tab.c"
    break;

  case 103:
#line 220 "SPparser.y"
    {(yyval.sval) = strdup("lt");}
#line 1993 "SPparser.tab.c"
    break;

  case 104:
#line 221 "SPparser.y"
    {(yyval.sval) = strdup("gtequal");}
#line 1999 "SPparser.tab.c"
    break;

  case 105:
#line 222 "SPparser.y"
    {(yyval.sval) = strdup("ltequal");}
#line 2005 "SPparser.tab.c"
    break;

  case 106:
#line 223 "SPparser.y"
    {(yyval.sval) = strdup("equal");}
#line 2011 "SPparser.tab.c"
    break;

  case 107:
#line 224 "SPparser.y"
    {(yyval.sval) = strdup("notequal");}
#line 2017 "SPparser.tab.c"
    break;

  case 108:
#line 227 "SPparser.y"
    {(yyval.sval) = strdup("add");}
#line 2023 "SPparser.tab.c"
    break;

  case 109:
#line 228 "SPparser.y"
    {(yyval.sval) = strdup("sub");}
#line 2029 "SPparser.tab.c"
    break;

  case 110:
#line 230 "SPparser.y"
    {(yyval.sval) = strdup("mult");}
#line 2035 "SPparser.tab.c"
    break;

  case 111:
#line 231 "SPparser.y"
    {(yyval.sval) = strdup("div");}
#line 2041 "SPparser.tab.c"
    break;

  case 112:
#line 232 "SPparser.y"
    {(yyval.sval) = strdup("mod");}
#line 2047 "SPparser.tab.c"
    break;

  case 113:
#line 234 "SPparser.y"
    {(yyval.sval) = strdup(yylval.sval);}
#line 2053 "SPparser.tab.c"
    break;

  case 114:
#line 235 "SPparser.y"
    {error("IDENTIFIER EXPECTED, BUT FOUND");}
#line 2059 "SPparser.tab.c"
    break;

  case 115:
#line 237 "SPparser.y"
    { finish(); }
#line 2065 "SPparser.tab.c"
    break;


#line 2069 "SPparser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 239 "SPparser.y"

int main( int argc, char **argv )
{
	char * loc;
	if( argc != 2 )
		std::cout << "Usage: pascal inputfile\n";
	else
	{
		std::string srcFilePath = argv[1]; // assume you are not mucking with pointers
		yyin = fopen( *++argv, "r" );
		if( yyin == NULL )
		{
			std::cout << "spascal: Couldn't open " << *argv << std::endl;
			exit( 1 );
		}
		
		std::string fileName = srcFilePath.substr(0, srcFilePath.rfind('.'));
		std::string asmFileName = fileName + ".asm";

		outFile.open(asmFileName);
		yyparse();
		fclose( yyin );
		outFile.close();
	}
}

void printSymbolTable(){
	ScopeNode* curr = symTable.head;
	std::cout << "printing table" << std::endl;
	while(curr!=NULL){
		for(auto const& pair : curr->scopeTable){
			std::cout << "{" << pair.first << ", " << pair.second << "}" << std::endl;
		}

		curr = curr->next;
	}
}

void verify_sym_decl(char symbol[]){
	if(!symTable.lookupSymbol(symbol)){
		std::stringstream ss;
		ss << "Symbol " << symbol << " not declared in this scope";
		std::string msg = ss.str();
		error(msg.c_str());
	}
	//Don't need to do anything if the symbol is found
}

void error( const char msg[] )
{
	std::cout << "ERROR : LINE " << line_no << " : " << msg << std::endl;
	exit( -1 );
}

void yyerror(const char s[]) {
  std::cout << "Parse error during compilation at line " << std::to_string(line_no) <<". Error Message: " << s << std::endl;
  // might as well halt now:
  exit(-1);
} 
