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
  YYSYMBOL_39_ = 39,                       /* '&'  */
  YYSYMBOL_40_ = 40,                       /* '|'  */
  YYSYMBOL_41_ = 41,                       /* '!'  */
  YYSYMBOL_42_ = 42,                       /* '"'  */
  YYSYMBOL_43_ = 43,                       /* '.'  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_progr = 47,                     /* progr  */
  YYSYMBOL_declaratii = 48,                /* declaratii  */
  YYSYMBOL_declaratie = 49,                /* declaratie  */
  YYSYMBOL_declaratii_struct = 50,         /* declaratii_struct  */
  YYSYMBOL_declaratie_struct = 51,         /* declaratie_struct  */
  YYSYMBOL_lista_param = 52,               /* lista_param  */
  YYSYMBOL_declaratii_in_functie = 53,     /* declaratii_in_functie  */
  YYSYMBOL_lista_param_functii_definite = 54, /* lista_param_functii_definite  */
  YYSYMBOL_param = 55,                     /* param  */
  YYSYMBOL_param_fd = 56,                  /* param_fd  */
  YYSYMBOL_conditie = 57,                  /* conditie  */
  YYSYMBOL_bool = 58,                      /* bool  */
  YYSYMBOL_bloc_main = 59,                 /* bloc_main  */
  YYSYMBOL_lista_functii = 60,             /* lista_functii  */
  YYSYMBOL_functie = 61,                   /* functie  */
  YYSYMBOL_bloc_functie = 62,              /* bloc_functie  */
  YYSYMBOL_lista_instructiuni = 63,        /* lista_instructiuni  */
  YYSYMBOL_lista_instructiuni_main = 64,   /* lista_instructiuni_main  */
  YYSYMBOL_lista_statement = 65,           /* lista_statement  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_expresie = 67,                  /* expresie  */
  YYSYMBOL_control = 68,                   /* control  */
  YYSYMBOL_lista_control = 69,             /* lista_control  */
  YYSYMBOL_lista_apel = 70,                /* lista_apel  */
  YYSYMBOL_tipuri = 71                     /* tipuri  */
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
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

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
       2,     2,     2,    41,    42,     2,     2,     2,    39,     2,
      36,    37,     2,     2,    38,     2,    43,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,    40,    35,     2,     2,     2,     2,
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
       0,    27,    27,    30,    31,    34,    35,    41,    52,    62,
      73,    85,    90,    95,   100,   101,   104,   108,   112,   113,
     118,   119,   125,   129,   131,   136,   140,   146,   147,   149,
     150,   152,   159,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   183,
     200,   217,   234,   239,   266,   269,   270,   272,   278,   280,
     282,   283,   284,   285,   286,   287,   290,   291,   292,   293,
     294,   295,   301,   302,   305,   317,   329,   335,   348,   361,
     373,   401,   422,   443,   463,   483,   506,   536,   555,   574,
     593,   612,   635,   640,   644,   649,   653,   657,   661,   665,
     669,   673,   677,   681,   686,   690,   696,   702,   708,   714,
     723,   724,   725,   726,   729,   730,   733,   737,   739,   744
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
  "'^'", "';'", "'{'", "'}'", "'('", "')'", "','", "'&'", "'|'", "'!'",
  "'\"'", "'.'", "'['", "']'", "$accept", "progr", "declaratii",
  "declaratie", "declaratii_struct", "declaratie_struct", "lista_param",
  "declaratii_in_functie", "lista_param_functii_definite", "param",
  "param_fd", "conditie", "bool", "bloc_main", "lista_functii", "functie",
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

#define YYPACT_NINF (-221)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     165,    19,    32,    11,    29,    51,   150,    43,    30,    57,
      98,   102,  -221,    83,   106,   100,  -221,    13,   173,   136,
     128,   274,  -221,   172,   100,  -221,   181,  -221,    78,  -221,
     203,   211,   217,   212,   194,   197,   134,   234,     4,   219,
     227,   248,   261,   165,   115,    27,   214,  -221,   255,   250,
    -221,  -221,  -221,   295,   267,   257,   307,   309,  -221,   306,
    -221,  -221,  -221,  -221,  -221,   349,    33,   125,   314,   360,
     108,    27,   108,    96,  -221,   165,    27,   255,   334,  -221,
    -221,   341,  -221,    16,   173,  -221,   340,  -221,   376,   236,
     -12,  -221,  -221,    10,   355,   379,  -221,  -221,   127,  -221,
     383,   344,   287,   387,  -221,   143,  -221,   108,    26,   319,
     206,   379,   357,   331,   285,  -221,  -221,   301,   365,  -221,
     392,  -221,   252,   246,   397,  -221,   125,   401,   412,    18,
     373,   378,    10,    10,    10,    10,    10,  -221,   125,    62,
     416,   346,   373,  -221,   206,   108,   108,   108,   108,   108,
     108,   108,   108,     0,    26,    26,   108,   390,  -221,  -221,
     422,   313,  -221,  -221,  -221,   410,   315,  -221,   382,    10,
      10,    10,    10,   396,  -221,    71,    71,  -221,  -221,   336,
    -221,    20,   105,  -221,  -221,   404,   379,    94,  -221,   399,
     399,   399,   399,   399,   399,   399,   399,   398,   284,   206,
     206,   358,   284,  -221,   400,   392,   427,  -221,  -221,   183,
     279,   394,   402,    10,   430,   393,    69,   180,  -221,  -221,
     411,   379,   284,   434,   435,   436,   426,  -221,   144,    27,
     255,    27,   159,   284,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,   336,   195,  -221,   437,   403,   188,   226,   408,   441,
     442,  -221,  -221,    27,   255,   413,  -221,   230,   406,  -221,
    -221,  -221,   415,   290,   414,   417,   419,  -221,   198,   421,
     423,  -221,   443,   284,  -221,  -221,   432,   240,   453,  -221,
     424,  -221
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     1,     0,     0,    58,     3,     0,     0,     0,
       0,     0,     4,     0,     2,    55,     0,    12,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,    67,     0,   114,    66,     0,
      56,    31,    11,     0,    16,     0,     0,     0,     5,     0,
      14,     7,     9,    10,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    71,    70,    69,     0,    72,
     115,     0,    23,     0,     0,    17,     0,    15,     0,   106,
     107,    78,    77,     0,     0,    76,   119,   118,     0,   116,
       0,     0,    33,    35,    34,    36,    37,     0,     0,     0,
      48,    47,     0,     0,   106,   107,    52,     0,     0,    73,
       0,    20,     0,     0,     0,    13,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,    47,    53,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    93,
       0,     0,    29,    19,    18,     0,     0,   105,     0,     0,
       0,     0,     0,     0,    79,   104,   103,   101,   102,    96,
     117,   106,   107,    83,    82,     0,    85,     0,    46,    45,
      44,    38,    39,    40,    41,    42,    43,     0,     0,    49,
      50,     0,     0,    32,     0,     0,     0,   109,   108,   104,
     103,   101,   102,     0,     0,     0,   106,   107,    90,    89,
       0,    91,     0,     0,     0,     0,     0,    62,     0,    61,
      60,     0,     0,     0,    57,    30,    21,    97,    98,    99,
     100,    95,   105,    84,     0,     0,     0,     0,     0,     0,
       0,   110,    65,    64,    63,     0,   113,     0,     0,    88,
     111,    24,     0,     0,     0,     0,     0,    59,   108,     0,
       0,    25,     0,     0,    27,    26,     0,     0,     0,   112,
       0,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,    -2,    12,   375,   -29,   377,  -220,  -221,   409,
     256,   -66,   -59,  -221,  -221,   439,  -221,  -195,  -221,   -21,
     -43,   -62,   -45,   -20,   338,   327
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    34,    35,    28,   227,   161,    29,
     162,   109,   110,    15,    24,    25,   234,   228,    44,   229,
      46,   111,    47,   230,    98,    99
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    48,    78,    80,    95,    59,   113,   232,   252,    66,
     197,   118,   252,   129,   117,    10,   115,    26,    14,    43,
      26,   -75,     8,    76,    77,   -75,   252,   246,   112,   143,
      38,   130,    80,    78,   198,     9,    89,   252,   257,    90,
      67,   141,    75,   270,    11,   142,    93,    68,    69,   144,
      27,    12,   116,   121,   126,    14,   126,   252,    42,    91,
      92,   127,   128,   214,   128,   181,    17,   108,   182,    93,
     175,   176,   177,   178,   179,    94,    16,   186,   277,   189,
     190,   191,   192,   193,   194,   195,   196,    14,   183,   184,
     201,    18,   134,   135,    59,   199,   200,   216,    93,   114,
     217,    19,   115,   136,   185,   126,    20,   209,   210,   211,
     212,   102,   127,   244,   103,    52,    53,    21,    38,     1,
     218,   219,   116,     2,    39,   221,    40,    41,    96,    23,
      93,    97,    93,   104,   105,   106,   220,   108,   -81,    22,
      61,    36,   -81,     3,   107,     4,    42,    38,   223,   108,
      74,   241,   224,    39,     1,    40,    41,    13,     2,    62,
      63,    64,    38,   223,   137,   138,    37,   224,    39,     1,
      40,    41,   225,     2,   226,    42,    49,    30,     3,   251,
       4,    31,   -52,   -52,    51,    80,    78,   225,   255,   226,
      42,    38,   223,     3,   256,     4,   224,    39,    30,    40,
      41,    32,    31,    33,   134,   135,    54,   253,   254,    80,
      78,   253,   254,   -87,    55,   136,   225,   -87,   226,    42,
     237,    56,    32,   260,    33,   253,   254,    57,   -80,    58,
      60,   -86,   -80,    38,   223,   -86,   253,   254,   224,    39,
      65,    40,    41,    38,   223,   154,   155,    79,   224,    39,
      30,    40,    41,    81,    31,    70,   253,   254,   225,   261,
     226,    42,   262,    71,    39,   267,    40,    41,   225,   -74,
     226,    42,   126,   -74,    32,   279,    33,    38,     1,   127,
     128,   164,     2,    39,    72,    40,    41,    38,   223,   163,
      53,    84,   224,    39,   223,    40,    41,    73,   224,    26,
     134,   135,     3,    83,     4,    42,  -106,  -106,  -106,  -106,
      85,   136,   225,    86,   226,    42,   238,   100,   225,  -106,
     226,   126,   -53,   126,   -53,   -53,   -53,   -53,   127,   128,
     127,   128,   145,   146,   147,   148,   149,   150,   158,    87,
     154,   155,   151,   152,   145,   146,   147,   148,   149,   150,
     204,   205,   207,   138,   151,   152,   153,   134,   135,   145,
     146,   147,   148,   149,   150,    88,   101,   119,   157,   151,
     152,   145,   146,   147,   148,   149,   150,   120,   124,   125,
     131,   151,   152,   188,   132,   133,   134,   135,   139,   140,
     156,   231,   169,   170,   171,   172,   160,   136,   132,   133,
     134,   135,   159,   165,   167,   136,  -107,  -107,  -107,  -107,
     173,   136,   145,   146,   147,   148,   149,   150,   168,  -107,
     174,   187,   151,   152,   202,   203,   206,   208,   213,   215,
     236,   239,   222,   242,   233,   243,   245,   247,   248,   240,
     249,   250,   263,   258,   264,   259,   265,   271,   278,   276,
     266,   268,   269,   273,   274,   272,   280,   281,   275,   123,
     122,   235,    82,    50,   166,   180
};

static const yytype_int16 yycheck[] =
{
      21,    21,    45,    48,    66,    34,    72,   202,   228,     5,
      10,    73,   232,     3,    73,     4,     6,     4,     6,    21,
       4,    33,     3,    44,    44,    37,   246,   222,    71,     3,
       3,    93,    77,    76,    34,     3,     3,   257,   233,     6,
      36,   107,    44,   263,    15,   107,    36,    43,    44,   108,
      37,     0,    26,    37,    36,    43,    36,   277,    31,    26,
      27,    43,    44,    43,    44,     3,    36,    41,     6,    36,
     132,   133,   134,   135,   136,    42,    33,   139,   273,   145,
     146,   147,   148,   149,   150,   151,   152,    75,    26,    27,
     156,    34,    21,    22,   123,   154,   155,     3,    36,     3,
       6,     3,     6,    32,    42,    36,     4,   169,   170,   171,
     172,     3,    43,    44,     6,    37,    38,    34,     3,     4,
      26,    27,    26,     8,     9,   187,    11,    12,     3,    29,
      36,     6,    36,    25,    26,    27,    42,    41,    33,    33,
       6,     5,    37,    28,    36,    30,    31,     3,     4,    41,
      35,   213,     8,     9,     4,    11,    12,     7,     8,    25,
      26,    27,     3,     4,    37,    38,    38,     8,     9,     4,
      11,    12,    28,     8,    30,    31,     4,     4,    28,    35,
      30,     8,    39,    40,     3,   230,   229,    28,   231,    30,
      31,     3,     4,    28,    35,    30,     8,     9,     4,    11,
      12,    28,     8,    30,    21,    22,     3,   228,   228,   254,
     253,   232,   232,    33,     3,    32,    28,    37,    30,    31,
      37,     4,    28,    35,    30,   246,   246,    15,    33,    35,
      33,    33,    37,     3,     4,    37,   257,   257,     8,     9,
       6,    11,    12,     3,     4,    39,    40,    33,     8,     9,
       4,    11,    12,     3,     8,    36,   277,   277,    28,    33,
      30,    31,    36,    36,     9,    35,    11,    12,    28,    33,
      30,    31,    36,    37,    28,    35,    30,     3,     4,    43,
      44,    35,     8,     9,    36,    11,    12,     3,     4,    37,
      38,    34,     8,     9,     4,    11,    12,    36,     8,     4,
      21,    22,    28,    36,    30,    31,    19,    20,    21,    22,
       3,    32,    28,     4,    30,    31,    37,     3,    28,    32,
      30,    36,    37,    36,    39,    40,    39,    40,    43,    44,
      43,    44,    13,    14,    15,    16,    17,    18,    37,    33,
      39,    40,    23,    24,    13,    14,    15,    16,    17,    18,
      37,    38,    37,    38,    23,    24,    37,    21,    22,    13,
      14,    15,    16,    17,    18,    16,     6,    33,    37,    23,
      24,    13,    14,    15,    16,    17,    18,    36,    38,     3,
      25,    23,    24,    37,    19,    20,    21,    22,     5,    45,
      33,    33,    19,    20,    21,    22,     4,    32,    19,    20,
      21,    22,    37,     6,     3,    32,    19,    20,    21,    22,
      37,    32,    13,    14,    15,    16,    17,    18,     6,    32,
      42,     5,    23,    24,    34,     3,    16,    45,    32,    25,
       3,    37,    34,     3,    34,    42,    25,     3,     3,    37,
       4,    15,    34,     6,     3,    42,     4,    33,    16,     6,
      37,    45,    37,    34,    33,    38,     3,    33,    35,    84,
      83,   205,    53,    24,   126,   138
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     8,    28,    30,    47,    48,    49,     3,     3,
       4,    15,     0,     7,    49,    59,    33,    36,    34,     3,
       4,    34,    33,    29,    60,    61,     4,    37,    52,    55,
       4,     8,    28,    30,    50,    51,     5,    38,     3,     9,
      11,    12,    31,    48,    64,    65,    66,    68,    69,     4,
      61,     3,    37,    38,     3,     3,     4,    15,    35,    51,
      33,     6,    25,    26,    27,     6,     5,    36,    43,    44,
      36,    36,    36,    36,    35,    48,    65,    69,    66,    33,
      68,     3,    55,    36,    34,     3,     4,    33,    16,     3,
       6,    26,    27,    36,    42,    67,     3,     6,    70,    71,
       3,     6,     3,     6,    25,    26,    27,    36,    41,    57,
      58,    67,    66,    57,     3,     6,    26,    58,    67,    33,
      36,    37,    52,    50,    38,     3,    36,    43,    44,     3,
      67,    25,    19,    20,    21,    22,    32,    37,    38,     5,
      45,    57,    67,     3,    58,    13,    14,    15,    16,    17,
      18,    23,    24,    37,    39,    40,    33,    37,    37,    37,
       4,    54,    56,    37,    35,     6,    70,     3,     6,    19,
      20,    21,    22,    37,    42,    67,    67,    67,    67,    67,
      71,     3,     6,    26,    27,    42,    67,     5,    37,    57,
      57,    57,    57,    57,    57,    57,    57,    10,    34,    58,
      58,    57,    34,     3,    37,    38,    16,    37,    45,    67,
      67,    67,    67,    32,    43,    25,     3,     6,    26,    27,
      42,    67,    34,     4,     8,    28,    30,    53,    63,    65,
      69,    33,    63,    34,    62,    56,     3,    37,    37,    37,
      37,    67,     3,    42,    44,    25,    63,     3,     3,     4,
      15,    35,    53,    65,    69,    66,    35,    63,     6,    42,
      35,    33,    36,    34,     3,     4,    37,    35,    45,    37,
      53,    33,    38,    34,    33,    35,     6,    63,    16,    35,
       3,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    53,    53,    53,    54,
      54,    55,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    58,    58,    58,    59,    60,    60,    61,    61,    62,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    70,    70,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     3,     5,     2,     5,     5,     5,
       5,     5,     4,     7,     2,     3,     2,     3,     5,     5,
       4,     7,     1,     3,     3,     4,     5,     5,     8,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     2,     1,     1,     4,     1,     2,     7,     0,     3,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     5,
       7,     5,     5,     5,     7,     5,     9,     6,     8,     6,
       6,     6,     4,     4,     4,     5,     3,     5,     5,     5,
       5,     3,     3,     3,     3,     3,     1,     1,     4,     4,
       7,     8,    11,     7,     1,     2,     1,     3,     1,     1
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
#line 27 "limbaj.y"
                                          {print_info(); check_errors(); printf("\nprogram corect sintactic\n");}
#line 1353 "limbaj.tab.c"
    break;

  case 5: /* declaratie: STRUCT ID '{' declaratii_struct '}'  */
#line 34 "limbaj.y"
                                                     { nr_curent_structuri++; adauga_struct("global",(yyvsp[-3].strval),yylineno); }
#line 1359 "limbaj.tab.c"
    break;

  case 6: /* declaratie: TIP ID  */
#line 36 "limbaj.y"
          {     
               if(!exista_var((yyvsp[-1].strval),(yyvsp[0].strval)))
               adauga_variabila("public",(yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno,"global");
               else printf("Redeclararea variabilei \"%s\" (linia %d)\n",(yyvsp[0].strval),yylineno);
          }
#line 1369 "limbaj.tab.c"
    break;

  case 7: /* declaratie: CONST TIP ID ASSIGN INTEGER  */
#line 42 "limbaj.y"
           {    
                if(strcmp((yyvsp[-3].strval),"integer") == 0)
                    adauga_variabila_const("integer",(yyvsp[-2].strval),(yyvsp[0].strval),yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
#line 1384 "limbaj.tab.c"
    break;

  case 8: /* declaratie: CONST TIP ID ASSIGN FLOAT  */
#line 53 "limbaj.y"
           {     if(strcmp((yyvsp[-3].strval),"float") == 0)
                    adauga_variabila_const("float",(yyvsp[-2].strval),(yyvsp[0].strval),yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul float (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
#line 1398 "limbaj.tab.c"
    break;

  case 9: /* declaratie: CONST TIP ID ASSIGN STRING  */
#line 63 "limbaj.y"
           {    
                if(strcmp((yyvsp[-3].strval),"string") == 0)
                    adauga_variabila_const("string",(yyvsp[-2].strval),(yyvsp[0].strval),yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul string (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
#line 1413 "limbaj.tab.c"
    break;

  case 10: /* declaratie: CONST TIP ID ASSIGN BOOLEAN  */
#line 74 "limbaj.y"
           {    
                if(strcmp((yyvsp[-3].strval),"boolean") == 0)
                    adauga_variabila_const("boolean",(yyvsp[-2].strval),(yyvsp[0].strval),yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul boolean (linia %d)\n",(yyvsp[-2].strval),yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
#line 1428 "limbaj.tab.c"
    break;

  case 11: /* declaratie: TIP ID '(' lista_param ')'  */
#line 86 "limbaj.y"
           {   
               nr_curent_functii++;
               add_functie((yyvsp[-4].strval),(yyvsp[-3].strval),yylineno);
           }
#line 1437 "limbaj.tab.c"
    break;

  case 12: /* declaratie: TIP ID '(' ')'  */
#line 91 "limbaj.y"
           {   
               nr_curent_functii++;
               add_functie((yyvsp[-3].strval),(yyvsp[-2].strval),yylineno);
           }
#line 1446 "limbaj.tab.c"
    break;

  case 13: /* declaratie: ARRAY LT TIP ',' INTEGER GT ID  */
#line 96 "limbaj.y"
           {   nr_curent_arrays++;
                adauga_array("global",(yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval),yylineno);
           }
#line 1454 "limbaj.tab.c"
    break;

  case 16: /* declaratie_struct: TIP ID  */
#line 105 "limbaj.y"
          {
               adauga_variabile_struct((yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno);
          }
#line 1462 "limbaj.tab.c"
    break;

  case 17: /* declaratie_struct: CONST TIP ID  */
#line 109 "limbaj.y"
           {
                adauga_variabile_struct((yyvsp[-1].strval),(yyvsp[0].strval),"",yylineno);
           }
#line 1470 "limbaj.tab.c"
    break;

  case 18: /* declaratie_struct: STRUCT ID '{' declaratii_struct '}'  */
#line 112 "limbaj.y"
                                                 { nr_curent_structuri++; adauga_struct("global",(yyvsp[-3].strval),yylineno); }
#line 1476 "limbaj.tab.c"
    break;

  case 19: /* declaratie_struct: TIP ID '(' lista_param ')'  */
#line 114 "limbaj.y"
           {
               nr_curent_functii++;
               add_functie((yyvsp[-4].strval),(yyvsp[-3].strval),yylineno);
           }
#line 1485 "limbaj.tab.c"
    break;

  case 21: /* declaratie_struct: ARRAY LT TIP ',' INTEGER GT ID  */
#line 120 "limbaj.y"
           {
                nr_curent_arrays++;
                adauga_array("global",(yyvsp[-4].strval),(yyvsp[-2].strval),(yyvsp[0].strval),yylineno);
           }
#line 1494 "limbaj.tab.c"
    break;

  case 22: /* lista_param: param  */
#line 126 "limbaj.y"
            {
               
            }
#line 1502 "limbaj.tab.c"
    break;

  case 24: /* declaratii_in_functie: TIP ID ';'  */
#line 132 "limbaj.y"
          {
               add_variabila_functie_definita("public",(yyvsp[-2].strval),(yyvsp[-1].strval),"",yylineno,"local");
               functii_definite[nr_curent_functii_definite].nr_variabile_declarate++;
          }
#line 1511 "limbaj.tab.c"
    break;

  case 25: /* declaratii_in_functie: CONST TIP ID ';'  */
#line 137 "limbaj.y"
           {
                add_variabila_functie_definita("const",(yyvsp[-2].strval),(yyvsp[-1].strval),"",yylineno, "local");
           }
#line 1519 "limbaj.tab.c"
    break;

  case 31: /* param: TIP ID  */
#line 153 "limbaj.y"
      {     
          add_functie_argumente((yyvsp[-1].strval),(yyvsp[0].strval));
          functii[nr_curent_functii].nr_argumente++;
      }
#line 1528 "limbaj.tab.c"
    break;

  case 32: /* param_fd: TIP ID  */
#line 160 "limbaj.y"
     {
          add_parametru_functie_definita((yyvsp[-1].strval),(yyvsp[0].strval));
          functii_definite[nr_curent_functii_definite].nr_argumente++;
     }
#line 1537 "limbaj.tab.c"
    break;

  case 49: /* bool: bool '&' bool  */
#line 184 "limbaj.y"
    {
        if(strcmp((yyvsp[-2].strval),"false")==0 || strcmp((yyvsp[0].strval),"false") == 0)
        {
            char x[30];
            strcpy(x,"false");
            char *s = strdup(x);
            strcpy((yyval.strval),s);
        }
        else
        {
            char x[30];
            strcpy(x,"true");
            char *s = strdup(x);
            strcpy((yyval.strval),s);
        } 
    }
#line 1558 "limbaj.tab.c"
    break;

  case 50: /* bool: bool '|' bool  */
#line 201 "limbaj.y"
    {
        if(strcmp((yyvsp[-2].strval),"true")==0 || strcmp((yyvsp[0].strval),"true") == 0)
        {
            char x[30];
            strcpy(x,"true");
            char *s = strdup(x);
            strcpy((yyval.strval),s);
        }
        else
        {
            char x[30];
            strcpy(x,"false");
            char *s = strdup(x);
            strcpy((yyval.strval),s);
        } 
    }
#line 1579 "limbaj.tab.c"
    break;

  case 51: /* bool: '!' bool  */
#line 218 "limbaj.y"
    {
        if(strcmp((yyvsp[0].strval),"false")==0)
        {
            char x[30];
            strcpy(x,"true");
            char *s = strdup(x);
            strcpy((yyval.strval),s);
        }
        else
        {
            char x[30];
            strcpy(x,"false");
            char *s = strdup(x);
            strcpy((yyval.strval),s);
        } 
    }
#line 1600 "limbaj.tab.c"
    break;

  case 52: /* bool: BOOLEAN  */
#line 235 "limbaj.y"
    {
        char *s = strdup((yyvsp[0].strval));
            strcpy((yyval.strval),s);;
    }
#line 1609 "limbaj.tab.c"
    break;

  case 53: /* bool: ID  */
#line 240 "limbaj.y"
    {
        if(strcmp(ia_tip((yyvsp[0].strval)),"integer") == 0)
        {
            if(get_value((yyvsp[0].strval))==0)
            {
                char x[30];
                strcpy(x,"false");
                char *s = strdup(x);
                strcpy((yyval.strval),s);
            }
            else
            {
                char x[30];
                strcpy(x,"true");
                char *s = strdup(x);
                strcpy((yyval.strval),s);
            }
        }
        else
            {
                char x[30];
                strcpy(x,"true");
                char *s = strdup(x);
                strcpy((yyval.strval),s);
            }
    }
#line 1640 "limbaj.tab.c"
    break;

  case 57: /* functie: FUNCTION TIP ID '(' lista_param_functii_definite ')' bloc_functie  */
#line 273 "limbaj.y"
        {
                  add_functie_definite((yyvsp[-5].strval),(yyvsp[-4].strval),yylineno);
                  nr_curent_functii_definite++;
             
        }
#line 1650 "limbaj.tab.c"
    break;

  case 74: /* statement: ID ASSIGN ID  */
#line 306 "limbaj.y"
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
#line 1666 "limbaj.tab.c"
    break;

  case 75: /* statement: ID ASSIGN INTEGER  */
#line 318 "limbaj.y"
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
#line 1682 "limbaj.tab.c"
    break;

  case 76: /* statement: ID ASSIGN expresie  */
#line 330 "limbaj.y"
         {     
              char buf[30];
              sprintf(buf,"%d",evalAST((yyvsp[0].root)));
              update_valoare((yyvsp[-2].strval),buf);
         }
#line 1692 "limbaj.tab.c"
    break;

  case 77: /* statement: ID ASSIGN FLOAT  */
#line 337 "limbaj.y"
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
#line 1708 "limbaj.tab.c"
    break;

  case 78: /* statement: ID ASSIGN BOOLEAN  */
#line 349 "limbaj.y"
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
#line 1725 "limbaj.tab.c"
    break;

  case 79: /* statement: ID ASSIGN '"' STRING '"'  */
#line 362 "limbaj.y"
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
#line 1741 "limbaj.tab.c"
    break;

  case 80: /* statement: ID '.' ID ASSIGN ID '.' ID  */
#line 374 "limbaj.y"
         {    
              if(verifica_daca_struct_este_declarat((yyvsp[-6].strval),(yyvsp[-4].strval)))
              {     if(verifica_daca_struct_este_declarat((yyvsp[-2].strval),(yyvsp[0].strval)))
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
#line 1773 "limbaj.tab.c"
    break;

  case 81: /* statement: ID '.' ID ASSIGN INTEGER  */
#line 403 "limbaj.y"
         {
              if(verifica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
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
#line 1797 "limbaj.tab.c"
    break;

  case 82: /* statement: ID '.' ID ASSIGN FLOAT  */
#line 424 "limbaj.y"
         {
              if(verifica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
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
#line 1821 "limbaj.tab.c"
    break;

  case 83: /* statement: ID '.' ID ASSIGN BOOLEAN  */
#line 444 "limbaj.y"
         {
              if(verifica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
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
#line 1845 "limbaj.tab.c"
    break;

  case 84: /* statement: ID '.' ID ASSIGN '"' STRING '"'  */
#line 464 "limbaj.y"
         {
              if(verifica_daca_struct_este_declarat((yyvsp[-6].strval),(yyvsp[-4].strval)))
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
#line 1869 "limbaj.tab.c"
    break;

  case 85: /* statement: ID '.' ID ASSIGN expresie  */
#line 484 "limbaj.y"
         {     if(verifica_daca_struct_este_declarat((yyvsp[-4].strval),(yyvsp[-2].strval)))
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
#line 1896 "limbaj.tab.c"
    break;

  case 86: /* statement: ID '[' INTEGER ']' ASSIGN ID '[' INTEGER ']'  */
#line 508 "limbaj.y"
         {    
              if(verifica_daca_array_este_declarat((yyvsp[-8].strval)))
                    {if(verifica_daca_array_este_declarat((yyvsp[-3].strval)))
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
#line 1929 "limbaj.tab.c"
    break;

  case 87: /* statement: ID '[' INTEGER ']' ASSIGN INTEGER  */
#line 537 "limbaj.y"
          {    if(verifica_daca_array_este_declarat((yyvsp[-5].strval)))    
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
#line 1952 "limbaj.tab.c"
    break;

  case 88: /* statement: ID '[' INTEGER ']' ASSIGN '"' STRING '"'  */
#line 556 "limbaj.y"
         {    if(verifica_daca_array_este_declarat((yyvsp[-7].strval)))    
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
#line 1975 "limbaj.tab.c"
    break;

  case 89: /* statement: ID '[' INTEGER ']' ASSIGN FLOAT  */
#line 575 "limbaj.y"
         {    if(verifica_daca_array_este_declarat((yyvsp[-5].strval)))    
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
#line 1998 "limbaj.tab.c"
    break;

  case 90: /* statement: ID '[' INTEGER ']' ASSIGN BOOLEAN  */
#line 594 "limbaj.y"
         {    if(verifica_daca_array_este_declarat((yyvsp[-5].strval)))    
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
#line 2021 "limbaj.tab.c"
    break;

  case 91: /* statement: ID '[' INTEGER ']' ASSIGN expresie  */
#line 613 "limbaj.y"
         {     if(verifica_daca_array_este_declarat((yyvsp[-5].strval)))
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
#line 2048 "limbaj.tab.c"
    break;

  case 92: /* statement: ID '(' lista_apel ')'  */
#line 636 "limbaj.y"
         {
              nr_curent_functii_main++;
              add_functie_main((yyvsp[-3].strval),yylineno);
         }
#line 2057 "limbaj.tab.c"
    break;

  case 93: /* statement: PRINT '(' expresie ')'  */
#line 641 "limbaj.y"
         {
              printf("%d\n",evalAST((yyvsp[-1].root)));
         }
#line 2065 "limbaj.tab.c"
    break;

  case 94: /* statement: PRINT '(' bool ')'  */
#line 645 "limbaj.y"
         {
              printf("%s\n",(yyvsp[-1].strval));
         }
#line 2073 "limbaj.tab.c"
    break;

  case 95: /* expresie: '(' expresie ')' '^' expresie  */
#line 650 "limbaj.y"
         {
              (yyval.root)=buildAST("^",(yyvsp[-3].root),(yyvsp[0].root),operator);
         }
#line 2081 "limbaj.tab.c"
    break;

  case 96: /* expresie: expresie '^' expresie  */
#line 654 "limbaj.y"
         {
              (yyval.root)=buildAST("^",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 2089 "limbaj.tab.c"
    break;

  case 97: /* expresie: '(' expresie PLUS expresie ')'  */
#line 658 "limbaj.y"
         {
              (yyval.root)=buildAST("+",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 2097 "limbaj.tab.c"
    break;

  case 98: /* expresie: '(' expresie MINUS expresie ')'  */
#line 662 "limbaj.y"
         {
              (yyval.root)=buildAST("-",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 2105 "limbaj.tab.c"
    break;

  case 99: /* expresie: '(' expresie MULT expresie ')'  */
#line 666 "limbaj.y"
         {
              (yyval.root)=buildAST("*",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 2113 "limbaj.tab.c"
    break;

  case 100: /* expresie: '(' expresie SUBT expresie ')'  */
#line 670 "limbaj.y"
         {
              (yyval.root)=buildAST("/",(yyvsp[-3].root),(yyvsp[-1].root),operator);
         }
#line 2121 "limbaj.tab.c"
    break;

  case 101: /* expresie: expresie MULT expresie  */
#line 674 "limbaj.y"
         {
              (yyval.root)=buildAST("*",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 2129 "limbaj.tab.c"
    break;

  case 102: /* expresie: expresie SUBT expresie  */
#line 678 "limbaj.y"
         {
              (yyval.root)=buildAST("/",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 2137 "limbaj.tab.c"
    break;

  case 103: /* expresie: expresie MINUS expresie  */
#line 682 "limbaj.y"
         {
              (yyval.root)=buildAST("-",(yyvsp[-2].root),(yyvsp[0].root),operator);
              //printf("Arg: %s %s %s\n",$1->valoare,"-",$3->valoare);
         }
#line 2146 "limbaj.tab.c"
    break;

  case 104: /* expresie: expresie PLUS expresie  */
#line 687 "limbaj.y"
         {
              (yyval.root)=buildAST("+",(yyvsp[-2].root),(yyvsp[0].root),operator);
         }
#line 2154 "limbaj.tab.c"
    break;

  case 105: /* expresie: ID '.' ID  */
#line 691 "limbaj.y"
         {
              char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value_struct((yyvsp[-2].strval),(yyvsp[0].strval)));
               (yyval.root)=buildAST(s,NULL,NULL,numar);
         }
#line 2164 "limbaj.tab.c"
    break;

  case 106: /* expresie: ID  */
#line 697 "limbaj.y"
         {     char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value((yyvsp[0].strval)));
               (yyval.root)=buildAST(s,NULL,NULL,numar);

         }
#line 2174 "limbaj.tab.c"
    break;

  case 107: /* expresie: INTEGER  */
#line 703 "limbaj.y"
         {
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",(yyvsp[0].strval));
               (yyval.root)=buildAST(s,NULL,NULL,numar);
         }
#line 2184 "limbaj.tab.c"
    break;

  case 108: /* expresie: ID '[' INTEGER ']'  */
#line 709 "limbaj.y"
         {
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value_array((yyvsp[-3].strval),(yyvsp[-1].strval)));
               (yyval.root)=buildAST(s,NULL,NULL,numar);
         }
#line 2194 "limbaj.tab.c"
    break;

  case 109: /* expresie: ID '(' lista_apel ')'  */
#line 715 "limbaj.y"
         {     
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s","0");
               (yyval.root)=buildAST(s,NULL,NULL,numar);
              
         }
#line 2205 "limbaj.tab.c"
    break;

  case 116: /* lista_apel: tipuri  */
#line 734 "limbaj.y"
           {
               //printf("%s\n",verifica_daca_functia_apelata_e_declarata_sau_corecta());
           }
#line 2213 "limbaj.tab.c"
    break;

  case 118: /* tipuri: INTEGER  */
#line 740 "limbaj.y"
       {  
          add_functie_argumente_main("integer",(yyvsp[0].strval));
          functii_in_main[nr_curent_functii_main].nr_argumente++;
       }
#line 2222 "limbaj.tab.c"
    break;

  case 119: /* tipuri: ID  */
#line 744 "limbaj.y"
           {
       }
#line 2229 "limbaj.tab.c"
    break;


#line 2233 "limbaj.tab.c"

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

#line 747 "limbaj.y"

void yyerror(char * s){
  printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
  yyin=fopen(argv[1],"r");
  yyparse();
} 
