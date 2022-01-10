/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "functii.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
void yyerror(char * s);
int yylex();

#line 83 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_TIP = 4,                        /* TIP  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_INTEGER = 6,                    /* INTEGER  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_STRUCT = 8,                     /* STRUCT  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_LT = 15,                        /* LT  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_LTE = 17,                       /* LTE  */
  YYSYMBOL_GTE = 18,                       /* GTE  */
  YYSYMBOL_PLUS = 19,                      /* PLUS  */
  YYSYMBOL_MINUS = 20,                     /* MINUS  */
  YYSYMBOL_MULT = 21,                      /* MULT  */
  YYSYMBOL_SUBT = 22,                      /* SUBT  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_NEQ = 24,                       /* NEQ  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 26,                   /* BOOLEAN  */
  YYSYMBOL_FLOAT = 27,                     /* FLOAT  */
  YYSYMBOL_CONST = 28,                     /* CONST  */
  YYSYMBOL_FUNCTION = 29,                  /* FUNCTION  */
  YYSYMBOL_ARRAY = 30,                     /* ARRAY  */
  YYSYMBOL_PRINT = 31,                     /* PRINT  */
  YYSYMBOL_32_ = 32,                       /* '^'  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* '('  */
  YYSYMBOL_37_ = 37,                       /* ')'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '"'  */
  YYSYMBOL_40_ = 40,                       /* '.'  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_progr = 44,                     /* progr  */
  YYSYMBOL_declaratii = 45,                /* declaratii  */
  YYSYMBOL_declaratie = 46,                /* declaratie  */
  YYSYMBOL_declaratii_struct = 47,         /* declaratii_struct  */
  YYSYMBOL_declaratie_struct = 48,         /* declaratie_struct  */
  YYSYMBOL_lista_param = 49,               /* lista_param  */
  YYSYMBOL_declaratii_in_functie = 50,     /* declaratii_in_functie  */
  YYSYMBOL_lista_param_functii_definite = 51, /* lista_param_functii_definite  */
  YYSYMBOL_param = 52,                     /* param  */
  YYSYMBOL_param_fd = 53,                  /* param_fd  */
  YYSYMBOL_conditie = 54,                  /* conditie  */
  YYSYMBOL_bloc_main = 55,                 /* bloc_main  */
  YYSYMBOL_lista_functii = 56,             /* lista_functii  */
  YYSYMBOL_functie = 57,                   /* functie  */
  YYSYMBOL_bloc_functie = 58,              /* bloc_functie  */
  YYSYMBOL_lista_instructiuni = 59,        /* lista_instructiuni  */
  YYSYMBOL_lista_instructiuni_main = 60,   /* lista_instructiuni_main  */
  YYSYMBOL_lista_statement = 61,           /* lista_statement  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_expresie = 63,                  /* expresie  */
  YYSYMBOL_control = 64,                   /* control  */
  YYSYMBOL_lista_control = 65,             /* lista_control  */
  YYSYMBOL_lista_apel = 66,                /* lista_apel  */
  YYSYMBOL_tipuri = 67                     /* tipuri  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    39,     2,     2,     2,     2,     2,
      36,    37,     2,     2,    38,     2,    40,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    26,    26,    29,    30,    33,    34,    38,    43,    48,
      49,    54,    55,    58,    62,    66,    67,    72,    73,    79,
      83,    85,    90,    94,   100,   101,   103,   104,   106,   113,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   136,   139,   140,   142,   148,
     150,   152,   153,   154,   155,   156,   157,   160,   161,   162,
     163,   164,   165,   171,   172,   175,   187,   199,   205,   218,
     231,   243,   271,   292,   313,   333,   353,   376,   406,   425,
     444,   463,   482,   505,   510,   515,   519,   523,   527,   531,
     535,   539,   543,   547,   552,   556,   562,   568,   574,   580,
     589,   590,   591,   592,   595,   596,   599,   603,   605
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TIP", "ASSIGN",
  "INTEGER", "MAIN", "STRUCT", "IF", "ELSE", "FOR", "WHILE", "AND", "OR",
  "LT", "GT", "LTE", "GTE", "PLUS", "MINUS", "MULT", "SUBT", "EQ", "NEQ",
  "STRING", "BOOLEAN", "FLOAT", "CONST", "FUNCTION", "ARRAY", "PRINT",
  "'^'", "';'", "'{'", "'}'", "'('", "')'", "','", "'\"'", "'.'", "'['",
  "']'", "$accept", "progr", "declaratii", "declaratie",
  "declaratii_struct", "declaratie_struct", "lista_param",
  "declaratii_in_functie", "lista_param_functii_definite", "param",
  "param_fd", "conditie", "bloc_main", "lista_functii", "functie",
  "bloc_functie", "lista_instructiuni", "lista_instructiuni_main",
  "lista_statement", "statement", "expresie", "control", "lista_control",
  "lista_apel", "tipuri", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,    17,    29,    37,    32,    61,   218,    36,    57,    77,
      97,   122,  -204,   119,   123,   102,  -204,    25,   156,  -204,
     131,   251,  -204,   158,   102,  -204,   175,  -204,   -25,  -204,
     189,   197,   193,   196,    86,   181,   211,    10,   205,   215,
     222,   228,    30,   124,     6,   200,  -204,   176,   234,  -204,
    -204,  -204,   264,   239,   246,   283,   286,  -204,   260,  -204,
     284,    18,   295,   300,   303,    98,     6,    98,    13,  -204,
      30,     6,   176,   287,  -204,  -204,   285,  -204,    31,   156,
    -204,   292,  -204,   316,   237,   -19,  -204,  -204,    13,   306,
     129,  -204,    50,  -204,   327,   291,   318,   351,  -204,  -204,
    -204,    98,   281,   129,   314,   299,   194,  -204,   343,  -204,
     345,  -204,   104,   168,   349,  -204,   295,   350,   354,   347,
     317,    13,    13,    13,    13,    13,  -204,   295,    79,   352,
     311,   347,    98,    98,    98,    98,    98,    98,    98,    98,
      49,    98,   340,  -204,   373,   190,  -204,  -204,  -204,   362,
     219,  -204,   355,    13,    13,    13,    13,   359,  -204,   136,
     136,  -204,  -204,   245,  -204,   266,    15,  -204,  -204,   367,
     129,    83,  -204,   372,   372,   372,   372,   372,   372,   372,
     372,   360,   280,   328,   280,  -204,   364,   345,   390,  -204,
    -204,    70,   108,   363,   365,    13,   396,   366,   341,    66,
    -204,  -204,   376,   129,   280,   400,   401,   402,   392,  -204,
     135,     6,   176,     6,   171,   280,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,   245,    75,  -204,   403,   369,   201,    84,
     377,   407,   408,  -204,  -204,     6,   176,   378,  -204,   212,
     371,  -204,  -204,  -204,   379,   257,   381,   380,   383,  -204,
     144,   386,   385,  -204,   415,   280,  -204,  -204,   406,   241,
     420,  -204,   391,  -204
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     1,     0,     0,    49,     3,     0,     0,     7,
       0,     0,     4,     0,     2,    46,     0,     9,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,    58,     0,   104,    57,     0,    47,
      28,     8,     0,    13,     0,     0,     0,     5,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      62,    61,    60,     0,    63,   105,     0,    20,     0,     0,
      14,     0,    12,     0,    96,    97,    69,    68,     0,     0,
      67,   108,     0,   106,     0,     0,    30,    32,    31,    33,
      34,     0,     0,    44,     0,     0,    96,    97,     0,    64,
       0,    17,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,    26,    16,    15,     0,
       0,    95,     0,     0,     0,     0,     0,     0,    70,    94,
      93,    91,    92,    86,   107,    96,    97,    74,    73,     0,
      76,     0,    43,    42,    41,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,    29,     0,     0,     0,    99,
      98,    94,    93,    91,    92,     0,     0,     0,    96,    97,
      81,    80,     0,    82,     0,     0,     0,     0,     0,    53,
       0,    52,    51,     0,     0,     0,    48,    27,    18,    87,
      88,    89,    90,    85,    95,    75,     0,     0,     0,     0,
       0,     0,     0,   100,    56,    55,    54,     0,   103,     0,
       0,    79,   101,    21,     0,     0,     0,     0,     0,    50,
      98,     0,     0,    22,     0,     0,    24,    23,     0,     0,
       0,   102,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,    12,    11,   346,   -29,   348,  -203,  -204,   375,
     242,   -61,  -204,  -204,   404,  -204,  -176,  -204,   -21,   -40,
     -58,   -45,   -20,   315,   305
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    34,    35,    28,   209,   145,    29,
     146,   102,    15,    24,    25,   216,   210,    43,   211,    45,
     103,    46,   212,    92,    93
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    47,    75,    90,    73,    58,   105,   234,   214,    37,
     108,   234,    51,    52,   -66,    61,   106,    14,   -66,   107,
       8,    84,    71,    72,    85,   234,   104,    75,   228,    26,
     119,    73,     9,    42,     1,    26,   234,    41,     2,   239,
     130,    10,   252,   131,    86,    87,    62,    11,   -72,    88,
      63,    64,   -72,    14,    88,    70,   234,    89,     3,   181,
       4,    12,    27,   159,   160,   161,   162,   163,   111,    16,
     170,   173,   174,   175,   176,   177,   178,   179,   180,   259,
     183,    14,   165,   182,    58,   166,   198,   126,   127,   199,
      30,   123,   124,    17,    31,   191,   192,   193,   194,   -78,
      19,    96,   125,   -78,    97,   167,   168,   219,   -71,   200,
     201,    18,   -71,   203,    32,    88,    33,   243,   169,    88,
     244,    57,   202,    98,    99,   100,    20,    37,     1,   123,
     124,    23,     2,    38,   101,    39,    40,   223,    37,   205,
     125,   147,    52,   206,    38,   220,    39,    40,   121,   122,
     123,   124,     3,    21,     4,    41,    22,   123,   124,    69,
      30,   125,    48,   207,    31,   208,    41,    75,   125,    36,
     233,    73,    30,   237,    37,   205,    31,   -77,    50,   206,
      38,   -77,    39,    40,    32,    38,    33,    39,    40,   235,
     236,    75,    53,   235,   236,    73,    32,    55,    33,   207,
      54,   208,    41,   148,    37,   205,   238,   235,   236,   206,
      38,    56,    39,    40,    59,    37,   205,    60,   235,   236,
     206,    38,     1,    39,    40,    13,     2,   186,   187,   207,
     116,   208,    41,    74,   117,   118,   242,    76,   235,   236,
     207,    65,   208,    41,    37,   205,     3,   249,     4,   206,
      38,    66,    39,    40,    37,     1,   189,   127,    67,     2,
      38,   205,    39,    40,    68,   206,   123,   124,    26,   207,
     -65,   208,    41,   116,   -65,    78,   261,   117,   118,     3,
      79,     4,    41,    37,   205,   207,    80,   208,   206,    38,
      81,    39,    40,    82,   132,   133,   134,   135,   136,   137,
      83,    91,   116,    94,   138,   139,   196,   118,   207,    95,
     208,    41,   132,   133,   134,   135,   136,   137,   140,   115,
     109,   110,   138,   139,   132,   133,   134,   135,   136,   137,
     114,   120,   128,   129,   138,   139,   142,   -96,   -96,   -96,
     -96,   132,   133,   134,   135,   136,   137,   141,   172,   144,
     -96,   138,   139,   151,   116,   149,   158,   171,   117,   118,
     152,   213,   121,   122,   123,   124,   153,   154,   155,   156,
     -97,   -97,   -97,   -97,   184,   125,   185,   116,   188,   125,
     143,   117,   226,   -97,   157,   132,   133,   134,   135,   136,
     137,   195,   197,   218,   204,   138,   139,   190,   215,   224,
     221,   227,   222,   229,   230,   225,   231,   232,   241,   240,
     246,   245,   247,   250,   253,   248,   251,   255,   254,   256,
     257,   258,   260,   262,   263,   113,   112,    77,    49,   217,
       0,   150,   164
};

static const yytype_int16 yycheck[] =
{
      21,    21,    47,    61,    44,    34,    67,   210,   184,     3,
      68,   214,    37,    38,    33,     5,     3,     6,    37,     6,
       3,     3,    43,    43,     6,   228,    66,    72,   204,     4,
      88,    71,     3,    21,     4,     4,   239,    31,     8,   215,
     101,     4,   245,   101,    26,    27,    36,    15,    33,    36,
      40,    41,    37,    42,    36,    43,   259,    39,    28,    10,
      30,     0,    37,   121,   122,   123,   124,   125,    37,    33,
     128,   132,   133,   134,   135,   136,   137,   138,   139,   255,
     141,    70,     3,    34,   113,     6,     3,    37,    38,     6,
       4,    21,    22,    36,     8,   153,   154,   155,   156,    33,
       3,     3,    32,    37,     6,    26,    27,    37,    33,    26,
      27,    34,    37,   171,    28,    36,    30,    33,    39,    36,
      36,    35,    39,    25,    26,    27,     4,     3,     4,    21,
      22,    29,     8,     9,    36,    11,    12,   195,     3,     4,
      32,    37,    38,     8,     9,    37,    11,    12,    19,    20,
      21,    22,    28,    34,    30,    31,    33,    21,    22,    35,
       4,    32,     4,    28,     8,    30,    31,   212,    32,    38,
      35,   211,     4,   213,     3,     4,     8,    33,     3,     8,
       9,    37,    11,    12,    28,     9,    30,    11,    12,   210,
     210,   236,     3,   214,   214,   235,    28,     4,    30,    28,
       3,    30,    31,    35,     3,     4,    35,   228,   228,     8,
       9,    15,    11,    12,    33,     3,     4,     6,   239,   239,
       8,     9,     4,    11,    12,     7,     8,    37,    38,    28,
      36,    30,    31,    33,    40,    41,    35,     3,   259,   259,
      28,    36,    30,    31,     3,     4,    28,    35,    30,     8,
       9,    36,    11,    12,     3,     4,    37,    38,    36,     8,
       9,     4,    11,    12,    36,     8,    21,    22,     4,    28,
      33,    30,    31,    36,    37,    36,    35,    40,    41,    28,
      34,    30,    31,     3,     4,    28,     3,    30,     8,     9,
       4,    11,    12,    33,    13,    14,    15,    16,    17,    18,
      16,     6,    36,     3,    23,    24,    40,    41,    28,     6,
      30,    31,    13,    14,    15,    16,    17,    18,    37,     3,
      33,    36,    23,    24,    13,    14,    15,    16,    17,    18,
      38,    25,     5,    42,    23,    24,    37,    19,    20,    21,
      22,    13,    14,    15,    16,    17,    18,    33,    37,     4,
      32,    23,    24,     3,    36,     6,    39,     5,    40,    41,
       6,    33,    19,    20,    21,    22,    19,    20,    21,    22,
      19,    20,    21,    22,    34,    32,     3,    36,    16,    32,
      37,    40,    41,    32,    37,    13,    14,    15,    16,    17,
      18,    32,    25,     3,    34,    23,    24,    42,    34,     3,
      37,    25,    37,     3,     3,    39,     4,    15,    39,     6,
       3,    34,     4,    42,    33,    37,    37,    34,    38,    33,
      35,     6,    16,     3,    33,    79,    78,    52,    24,   187,
      -1,   116,   127
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     8,    28,    30,    44,    45,    46,     3,     3,
       4,    15,     0,     7,    46,    55,    33,    36,    34,     3,
       4,    34,    33,    29,    56,    57,     4,    37,    49,    52,
       4,     8,    28,    30,    47,    48,    38,     3,     9,    11,
      12,    31,    45,    60,    61,    62,    64,    65,     4,    57,
       3,    37,    38,     3,     3,     4,    15,    35,    48,    33,
       6,     5,    36,    40,    41,    36,    36,    36,    36,    35,
      45,    61,    65,    62,    33,    64,     3,    52,    36,    34,
       3,     4,    33,    16,     3,     6,    26,    27,    36,    39,
      63,     6,    66,    67,     3,     6,     3,     6,    25,    26,
      27,    36,    54,    63,    62,    54,     3,     6,    63,    33,
      36,    37,    49,    47,    38,     3,    36,    40,    41,    63,
      25,    19,    20,    21,    22,    32,    37,    38,     5,    42,
      54,    63,    13,    14,    15,    16,    17,    18,    23,    24,
      37,    33,    37,    37,     4,    51,    53,    37,    35,     6,
      66,     3,     6,    19,    20,    21,    22,    37,    39,    63,
      63,    63,    63,    63,    67,     3,     6,    26,    27,    39,
      63,     5,    37,    54,    54,    54,    54,    54,    54,    54,
      54,    10,    34,    54,    34,     3,    37,    38,    16,    37,
      42,    63,    63,    63,    63,    32,    40,    25,     3,     6,
      26,    27,    39,    63,    34,     4,     8,    28,    30,    50,
      59,    61,    65,    33,    59,    34,    58,    53,     3,    37,
      37,    37,    37,    63,     3,    39,    41,    25,    59,     3,
       3,     4,    15,    35,    50,    61,    65,    62,    35,    59,
       6,    39,    35,    33,    36,    34,     3,     4,    37,    35,
      42,    37,    50,    33,    38,    34,    33,    35,     6,    59,
      16,    35,     3,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    50,    50,    51,    51,    52,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    56,    56,    57,    57,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      60,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    65,    65,    66,    66,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     3,     5,     2,     3,     5,     4,
       7,     2,     3,     2,     3,     5,     5,     4,     7,     1,
       3,     3,     4,     5,     5,     8,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     1,     2,     7,     0,
       3,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       5,     7,     5,     5,     5,     7,     5,     9,     6,     8,
       6,     6,     6,     4,     4,     5,     3,     5,     5,     5,
       5,     3,     3,     3,     3,     3,     1,     1,     4,     4,
       7,     8,    11,     7,     1,     2,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* progr: declaratii bloc_main lista_functii  */
#line 26 "limbaj.y"
                                          {printf("\nprogram corect sintactic\n"); print_info(); check_errors();}
#line 1334 "limbaj.tab.c"
    break;

  case 5: /* declaratie: STRUCT ID '{' declaratii_struct '}'  */
#line 33 "limbaj.y"
                                                     { nr_curent_structuri++; adauga_struct((yyvsp[-3].strval),yylineno); }
#line 1340 "limbaj.tab.c"
    break;

  case 6: /* declaratie: TIP ID  */
#line 35 "limbaj.y"
          {
               adauga_variabila("public",(yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno,"global");
          }
#line 1348 "limbaj.tab.c"
    break;

  case 7: /* declaratie: CONST TIP ID  */
#line 39 "limbaj.y"
           {
                adauga_variabila("const",(yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno, "global");
           }
#line 1356 "limbaj.tab.c"
    break;

  case 8: /* declaratie: TIP ID '(' lista_param ')'  */
#line 44 "limbaj.y"
           {   
               nr_curent_functii++;
               add_functie((yyvsp[-4].strval),(yyvsp[-3].strval),yylineno);
           }
#line 1365 "limbaj.tab.c"
    break;

  case 10: /* declaratie: ARRAY LT TIP ',' INTEGER GT ID  */
#line 50 "limbaj.y"
           {   nr_curent_arrays++;
                adauga_array((yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval),yylineno);
           }
#line 1373 "limbaj.tab.c"
    break;

  case 13: /* declaratie_struct: TIP ID  */
#line 59 "limbaj.y"
          {
               adauga_variabile_struct((yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno);
          }
#line 1381 "limbaj.tab.c"
    break;

  case 14: /* declaratie_struct: CONST TIP ID  */
#line 63 "limbaj.y"
           {
                adauga_variabile_struct((yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno);
           }
#line 1389 "limbaj.tab.c"
    break;

  case 15: /* declaratie_struct: STRUCT ID '{' declaratii_struct '}'  */
#line 66 "limbaj.y"
                                                 { nr_curent_structuri++; adauga_struct((yyvsp[-3].strval),yylineno); }
#line 1395 "limbaj.tab.c"
    break;

  case 16: /* declaratie_struct: TIP ID '(' lista_param ')'  */
#line 68 "limbaj.y"
           {
               nr_curent_functii++;
               add_functie((yyvsp[-4].strval),(yyvsp[-3].strval),yylineno);
           }
#line 1404 "limbaj.tab.c"
    break;

  case 18: /* declaratie_struct: ARRAY LT TIP ',' INTEGER GT ID  */
#line 74 "limbaj.y"
           {
                nr_curent_arrays++;
                adauga_array((yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval),yylineno);
           }
#line 1413 "limbaj.tab.c"
    break;

  case 19: /* lista_param: param  */
#line 80 "limbaj.y"
            {
               
            }
#line 1421 "limbaj.tab.c"
    break;

  case 21: /* declaratii_in_functie: TIP ID ';'  */
#line 86 "limbaj.y"
          {
               add_variabila_functie_definita("public",(yyvsp[-2].strval),(yyvsp[-1].strval),"",yylineno,"local");
               functii_definite[nr_curent_functii_definite].nr_variabile_declarate++;
          }
#line 1430 "limbaj.tab.c"
    break;

  case 22: /* declaratii_in_functie: CONST TIP ID ';'  */
#line 91 "limbaj.y"
           {
                add_variabila_functie_definita("const",(yyvsp[-2].strval),(yyvsp[-1].strval),"",yylineno, "local");
           }
#line 1438 "limbaj.tab.c"
    break;

  case 28: /* param: TIP ID  */
#line 107 "limbaj.y"
      {     
          add_functie_argumente((yyvsp[-1].strval),(yyvsp[0].strval));
          functii[nr_curent_functii].nr_argumente++;
      }
#line 1447 "limbaj.tab.c"
    break;

  case 29: /* param_fd: TIP ID  */
#line 114 "limbaj.y"
     {
          add_parametru_functie_definita((yyvsp[-1].strval),(yyvsp[0].strval));
          functii_definite[nr_curent_functii_definite].nr_argumente++;
     }
#line 1456 "limbaj.tab.c"
    break;

  case 48: /* functie: FUNCTION TIP ID '(' lista_param_functii_definite ')' bloc_functie  */
#line 143 "limbaj.y"
        {
                  add_functie_definite((yyvsp[-5].strval),(yyvsp[-4].strval),yylineno);
                  nr_curent_functii_definite++;
             
        }
#line 1466 "limbaj.tab.c"
    break;

  case 65: /* statement: ID ASSIGN ID  */
#line 176 "limbaj.y"
         {
              if(strcmp(ia_tip((yyvsp[-2].strval)),ia_tip((yyvsp[0].strval))) == 0)
              update_valoare((yyvsp[-2].strval),get_value((yyvsp[0].strval)));
              else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are acelasi tip ca \"%s\" (linia %d)\n",(yyvsp[-2].strval),(yyvsp[0].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              
         }
#line 1482 "limbaj.tab.c"
    break;

  case 66: /* statement: ID ASSIGN INTEGER  */
#line 188 "limbaj.y"
         {
              adauga_variabile_main((yyvsp[-2].strval),yylineno);
              if(strcmp(ia_tip((yyvsp[-2].strval)),"integer") == 0)
                    update_valoare((yyvsp[-2].strval),(yyvsp[0].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
#line 1498 "limbaj.tab.c"
    break;

  case 67: /* statement: ID ASSIGN expresie  */
#line 200 "limbaj.y"
         {     
              char buf[30];
              sprintf(buf,"%d",evalAST((yyvsp[0].root)));
              update_valoare((yyvsp[-2].strval),buf);
         }
#line 1508 "limbaj.tab.c"
    break;

  case 68: /* statement: ID ASSIGN FLOAT  */
#line 207 "limbaj.y"
         {    adauga_variabile_main((yyvsp[-2].strval),yylineno);
              if(strcmp(ia_tip((yyvsp[-2].strval)),"float") == 0)
                    update_valoare((yyvsp[-2].strval),(yyvsp[0].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul float (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
               
         }
#line 1524 "limbaj.tab.c"
    break;

  case 69: /* statement: ID ASSIGN BOOLEAN  */
#line 219 "limbaj.y"
         {    
              adauga_variabile_main((yyvsp[-2].strval),yylineno);
              if(strcmp(ia_tip((yyvsp[-2].strval)),"boolean") == 0)
                    update_valoare((yyvsp[-2].strval),(yyvsp[0].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul boolean (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
               
         }
#line 1541 "limbaj.tab.c"
    break;

  case 70: /* statement: ID ASSIGN '"' STRING '"'  */
#line 232 "limbaj.y"
         {
              adauga_variabile_main((yyvsp[-4].strval),yylineno);
              if(strcmp(ia_tip((yyvsp[-4].strval)),"string") == 0)
                    update_valoare((yyvsp[-4].strval),(yyvsp[-1].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul string (linia %d)\n",(yyvsp[-4].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
#line 1557 "limbaj.tab.c"
    break;

  case 71: /* statement: ID '.' ID ASSIGN ID '.' ID  */
#line 244 "limbaj.y"
         {    
              if(vericica_daca_struct_este_declarat((yyvsp[-6].strval),(yyvsp[-4].strval)))
              {     if(vericica_daca_struct_este_declarat((yyvsp[-2].strval),(yyvsp[0].strval)))
                   {
                        if(strcmp(ia_tip_struct((yyvsp[-6].strval),(yyvsp[-4].strval)),ia_tip_struct((yyvsp[-2].strval),(yyvsp[0].strval))) == 0)
                              update_valoare_struct((yyvsp[-6].strval),(yyvsp[-4].strval),(yyvsp[0].strval));
                         else
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu are acelasi tip ca \"%s\" (linia %d)\n",(yyvsp[-4].strval),(yyvsp[0].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }
                    
                    }
                    else
                    {
                         char buf[500];
                         sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-2].strval),(yyvsp[0].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }
                    
               }
              else
                    {char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-6].strval),(yyvsp[-4].strval),yylineno);
                   adauga_eroare(buf,yylineno);}
         }
#line 1589 "limbaj.tab.c"
    break;

  case 72: /* statement: ID '.' ID ASSIGN INTEGER  */
#line 273 "limbaj.y"
         {
              if(vericica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
              {
              if(strcmp(ia_tip_struct((yyvsp[-4].strval),(yyvsp[-2].strval)),"integer") == 0)
                    update_valoare_struct((yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul integer (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
#line 1613 "limbaj.tab.c"
    break;

  case 73: /* statement: ID '.' ID ASSIGN FLOAT  */
#line 294 "limbaj.y"
         {
              if(vericica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
              {
              if(strcmp(ia_tip_struct((yyvsp[-4].strval),(yyvsp[-2].strval)),"float") == 0)
                    update_valoare_struct((yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul float (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
#line 1637 "limbaj.tab.c"
    break;

  case 74: /* statement: ID '.' ID ASSIGN BOOLEAN  */
#line 314 "limbaj.y"
         {
              if(vericica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
              {
              if(strcmp(ia_tip_struct((yyvsp[-4].strval),(yyvsp[-2].strval)),"boolean") == 0)
                    update_valoare_struct((yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul boolean (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
#line 1661 "limbaj.tab.c"
    break;

  case 75: /* statement: ID '.' ID ASSIGN '"' STRING '"'  */
#line 334 "limbaj.y"
         {
              if(vericica_daca_struct_este_declarat((yyvsp[-6].strval),(yyvsp[-4].strval)))
              {
              if(strcmp(ia_tip_struct((yyvsp[-6].strval),(yyvsp[-4].strval)),"boolean") == 0)
                    update_valoare_struct((yyvsp[-6].strval),(yyvsp[-4].strval),(yyvsp[-1].strval));
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul string (linia %d)\n",(yyvsp[-6].strval),(yyvsp[-4].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-6].strval),(yyvsp[-4].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
#line 1685 "limbaj.tab.c"
    break;

  case 76: /* statement: ID '.' ID ASSIGN expresie  */
#line 354 "limbaj.y"
         {     if(vericica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
              {
              if(strcmp(ia_tip_struct((yyvsp[-4].strval),(yyvsp[-2].strval)),"integer") == 0)
                         {char buf[30];
               sprintf(buf,"%d",evalAST((yyvsp[0].root)));
               update_valoare_struct((yyvsp[-4].strval),(yyvsp[-2].strval),buf);}
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul integer (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-4].strval),(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }

              
         }
#line 1712 "limbaj.tab.c"
    break;

  case 77: /* statement: ID '[' INTEGER ']' ASSIGN ID '[' INTEGER ']'  */
#line 378 "limbaj.y"
         {    
              if(vericica_daca_array_este_declarat((yyvsp[-8].strval)))
                    {if(vericica_daca_array_este_declarat((yyvsp[-3].strval)))
                         {
                         if(strcmp(ia_tip_array((yyvsp[-8].strval)),ia_tip_array((yyvsp[-3].strval)))==0)
                              update_element_array_index((yyvsp[-8].strval),(yyvsp[-6].strval),(yyvsp[-3].strval),(yyvsp[-1].strval));
                         else
                              {
                                   char buf[500];
                                   sprintf(buf,"\"%s\" nu are acelasis tip ca \"%s\" (linia %d)\n",(yyvsp[-8].strval),(yyvsp[-3].strval),yylineno);
                                   adauga_eroare(buf,yylineno);
                              }
                         }
                    else
                         {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",(yyvsp[-3].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                         }
                    }
                    else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",(yyvsp[-8].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }
 
         }
#line 1745 "limbaj.tab.c"
    break;

  case 78: /* statement: ID '[' INTEGER ']' ASSIGN INTEGER  */
#line 407 "limbaj.y"
          {    if(vericica_daca_array_este_declarat((yyvsp[-5].strval)))    
                         if(strcmp(ia_tip_array((yyvsp[-5].strval)),"integer")==0)
                              update_element_array_value((yyvsp[-5].strval),(yyvsp[-3].strval),(yyvsp[0].strval));
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",(yyvsp[-5].strval),yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",(yyvsp[-5].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
#line 1768 "limbaj.tab.c"
    break;

  case 79: /* statement: ID '[' INTEGER ']' ASSIGN '"' STRING '"'  */
#line 426 "limbaj.y"
         {    if(vericica_daca_array_este_declarat((yyvsp[-7].strval)))    
                         if(strcmp(ia_tip_array((yyvsp[-7].strval)),"string")==0)
                              update_element_array_value((yyvsp[-7].strval),(yyvsp[-5].strval),(yyvsp[-1].strval));
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul string (linia %d)\n",(yyvsp[-7].strval),yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",(yyvsp[-7].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
#line 1791 "limbaj.tab.c"
    break;

  case 80: /* statement: ID '[' INTEGER ']' ASSIGN FLOAT  */
#line 445 "limbaj.y"
         {    if(vericica_daca_array_este_declarat((yyvsp[-5].strval)))    
                         if(strcmp(ia_tip_array((yyvsp[-5].strval)),"float")==0)
                              update_element_array_value((yyvsp[-5].strval),(yyvsp[-3].strval),(yyvsp[0].strval));
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul float (linia %d)\n",(yyvsp[-5].strval),yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",(yyvsp[-5].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
#line 1814 "limbaj.tab.c"
    break;

  case 81: /* statement: ID '[' INTEGER ']' ASSIGN BOOLEAN  */
#line 464 "limbaj.y"
         {    if(vericica_daca_array_este_declarat((yyvsp[-5].strval)))    
                         if(strcmp(ia_tip_array((yyvsp[-5].strval)),"boolean")==0)
                              update_element_array_value((yyvsp[-5].strval),(yyvsp[-3].strval),(yyvsp[0].strval));
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul boolean (linia %d)\n",(yyvsp[-5].strval),yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",(yyvsp[-5].strval),yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
#line 1837 "limbaj.tab.c"
    break;

  case 82: /* statement: ID '[' INTEGER ']' ASSIGN expresie  */
#line 483 "limbaj.y"
         {     if(vericica_daca_array_este_declarat((yyvsp[-5].strval)))
              {
              if(strcmp(ia_tip_array((yyvsp[-5].strval)),"integer") == 0)
                         {char buf[30];
                         sprintf(buf,"%d",evalAST((yyvsp[0].root)));
                         update_element_array_value((yyvsp[-5].strval),(yyvsp[-3].strval),buf);}
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",(yyvsp[-5].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",(yyvsp[-5].strval),(yyvsp[-3].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }

              
         }
#line 1864 "limbaj.tab.c"
    break;

  case 83: /* statement: ID '(' lista_apel ')'  */
#line 506 "limbaj.y"
         {
              nr_curent_functii_main++;
              add_functie_main((yyvsp[-3].strval),yylineno);
         }
#line 1873 "limbaj.tab.c"
    break;

  case 84: /* statement: PRINT '(' expresie ')'  */
#line 511 "limbaj.y"
         {
              printf("%d\n",evalAST((yyvsp[-1].root)));
         }
#line 1881 "limbaj.tab.c"
    break;

  case 85: /* expresie: '(' expresie ')' '^' expresie  */
#line 516 "limbaj.y"
         {
              (yyval.root)=buildAST("^",(yyvsp[-3].root),(yyvsp[0].root),operator);
         }
#line 1889 "limbaj.tab.c"
    break;

  case 86: /* expresie: expresie '^' expresie  */
#line 520 "limbaj.y"
         {
              (yyval.root)=buildAST("^",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 1897 "limbaj.tab.c"
    break;

  case 87: /* expresie: '(' expresie PLUS expresie ')'  */
#line 524 "limbaj.y"
         {
              (yyval.root)=buildAST("+",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 1905 "limbaj.tab.c"
    break;

  case 88: /* expresie: '(' expresie MINUS expresie ')'  */
#line 528 "limbaj.y"
         {
              (yyval.root)=buildAST("-",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 1913 "limbaj.tab.c"
    break;

  case 89: /* expresie: '(' expresie MULT expresie ')'  */
#line 532 "limbaj.y"
         {
              (yyval.root)=buildAST("*",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 1921 "limbaj.tab.c"
    break;

  case 90: /* expresie: '(' expresie SUBT expresie ')'  */
#line 536 "limbaj.y"
         {
              (yyval.root)=buildAST("/",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 1929 "limbaj.tab.c"
    break;

  case 91: /* expresie: expresie MULT expresie  */
#line 540 "limbaj.y"
         {
              (yyval.root)=buildAST("*",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 1937 "limbaj.tab.c"
    break;

  case 92: /* expresie: expresie SUBT expresie  */
#line 544 "limbaj.y"
         {
              (yyval.root)=buildAST("/",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 1945 "limbaj.tab.c"
    break;

  case 93: /* expresie: expresie MINUS expresie  */
#line 548 "limbaj.y"
         {
              (yyval.root)=buildAST("-",(yyvsp[-2].root),(yyvsp[0].root),operator);
              //printf("Arg: %s %s %s\n",$1->valoare,"-",$3->valoare);
         }
#line 1954 "limbaj.tab.c"
    break;

  case 94: /* expresie: expresie PLUS expresie  */
#line 553 "limbaj.y"
         {
              (yyval.root)=buildAST("+",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 1962 "limbaj.tab.c"
    break;

  case 95: /* expresie: ID '.' ID  */
#line 557 "limbaj.y"
         {
              char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value_struct((yyvsp[-2].strval),(yyvsp[0].strval)));
               (yyval.root)=buildAST(s,NULL,NULL,numar);
         }
#line 1972 "limbaj.tab.c"
    break;

  case 96: /* expresie: ID  */
#line 563 "limbaj.y"
         {     char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value((yyvsp[0].strval)));
               (yyval.root)=buildAST(s,NULL,NULL,numar);

         }
#line 1982 "limbaj.tab.c"
    break;

  case 97: /* expresie: INTEGER  */
#line 569 "limbaj.y"
         {
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",(yyvsp[0].strval));
               (yyval.root)=buildAST(s,NULL,NULL,numar);
         }
#line 1992 "limbaj.tab.c"
    break;

  case 98: /* expresie: ID '[' INTEGER ']'  */
#line 575 "limbaj.y"
         {
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value_array((yyvsp[-3].strval),(yyvsp[-1].strval)));
               (yyval.root)=buildAST(s,NULL,NULL,numar);
         }
#line 2002 "limbaj.tab.c"
    break;

  case 99: /* expresie: ID '(' lista_apel ')'  */
#line 581 "limbaj.y"
         {     
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s","0");
               (yyval.root)=buildAST(s,NULL,NULL,numar);
              
         }
#line 2013 "limbaj.tab.c"
    break;

  case 106: /* lista_apel: tipuri  */
#line 600 "limbaj.y"
           {
               //printf("%s\n",verifica_daca_functia_apelata_e_declarata_sau_corecta());
           }
#line 2021 "limbaj.tab.c"
    break;

  case 108: /* tipuri: INTEGER  */
#line 606 "limbaj.y"
       {  
          add_functie_argumente_main("integer",(yyvsp[0].strval));
          functii_in_main[nr_curent_functii_main].nr_argumente++;
       }
#line 2030 "limbaj.tab.c"
    break;


#line 2034 "limbaj.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 611 "limbaj.y"

void yyerror(char * s){
  printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
  yyin=fopen(argv[1],"r");
  yyparse();
} 
