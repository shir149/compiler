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
#line 1 "setlang.y"

#include <stdio.h>
#include <stdlib.h>
#include "All_Data.h"
#include "stack_manager.h"
#include "utility_functions.h"
/**/
extern                  int yylex(void);
extern                  int yyparse(void);
extern                  FILE *yyin;  /*FOR READING A FILE*/
extern int              yylineno;

void                    yyerror(const char *s);
extern void             yy_scan_string(const char *str);
extern void             yy_delete_buffer(void *buffer);
void                    yyerror(const char *s);
/**/    
StatementStack          statement_stack ;
Node_struct               *head = NULL; 
void                    pop_regulation();
void                    pop_loop_statement();
void                    release_stck();
void                    pop_all_if_stack();  
void                    pop_loop_no_brace_statement();

char*                   my_helper = "result";
int                     if_block = 0;
/**/
void                    read_file_and_process(const char *filename) ;

#line 102 "setlang.tab.c"

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

#include "setlang.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_COLLECTION = 6,                 /* COLLECTION  */
  YYSYMBOL_SET = 7,                        /* SET  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_STR = 9,                        /* STR  */
  YYSYMBOL_LBRACE = 10,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 11,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 12,                 /* SEMICOLON  */
  YYSYMBOL_LBRACKET = 13,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 14,                  /* RBRACKET  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 18,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 19,                    /* DIVIDE  */
  YYSYMBOL_AND = 20,                       /* AND  */
  YYSYMBOL_PIPE = 21,                      /* PIPE  */
  YYSYMBOL_GREATER_THAN = 22,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 23,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_EQUAL = 24,             /* GREATER_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 25,                /* LESS_EQUAL  */
  YYSYMBOL_EQUAL = 26,                     /* EQUAL  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_FOR = 29,                       /* FOR  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_COLON = 33,                     /* COLON  */
  YYSYMBOL_OUTPUT = 34,                    /* OUTPUT  */
  YYSYMBOL_LPAREN = 35,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 36,                    /* RPAREN  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_INPUT = 38,                     /* INPUT  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_declarations = 41,              /* declarations  */
  YYSYMBOL_declaration = 42,               /* declaration  */
  YYSYMBOL_operations = 43,                /* operations  */
  YYSYMBOL_operation = 44,                 /* operation  */
  YYSYMBOL_loop_no_brace = 45,             /* loop_no_brace  */
  YYSYMBOL_for_loop = 46,                  /* for_loop  */
  YYSYMBOL_if_statement = 47,              /* if_statement  */
  YYSYMBOL_if_else = 48,                   /* if_else  */
  YYSYMBOL_output_statement = 49,          /* output_statement  */
  YYSYMBOL_input_statement = 50,           /* input_statement  */
  YYSYMBOL_assignment = 51,                /* assignment  */
  YYSYMBOL_u_var_list = 52,                /* u_var_list  */
  YYSYMBOL_string_list = 53,               /* string_list  */
  YYSYMBOL_number_list = 54,               /* number_list  */
  YYSYMBOL_continue = 55,                  /* continue  */
  YYSYMBOL_conditions = 56,                /* conditions  */
  YYSYMBOL_operators = 57,                 /* operators  */
  YYSYMBOL_type = 58,                      /* type  */
  YYSYMBOL_list = 59                       /* list  */
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
typedef yytype_uint8 yy_state_t;

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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif /* 1 */

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    72,    72,    73,    74,    77,    78,    79,    82,    88,
      93,    97,   114,   121,   127,   133,   143,   144,   145,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   161,   171,
     172,   180,   185,   186,   199,   214,   215,   228,   229,   243,
     250,   266,   267,   278,   279,   290,   313,   325,   340,   345,
     357,   358,   362,   373,   374,   378,   389,   390,   391,   392,
     393,   394,   395,   398,   399,   400,   401,   402,   403,   404,
     405,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   435,   446,   454,
     455,   456,   457,   458,   459,   461,   462,   463,   474
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIFIER",
  "STRING_LITERAL", "COLLECTION", "SET", "INT", "STR", "LBRACE", "RBRACE",
  "SEMICOLON", "LBRACKET", "RBRACKET", "COMMA", "PLUS", "MINUS",
  "MULTIPLY", "DIVIDE", "AND", "PIPE", "GREATER_THAN", "LESS_THAN",
  "GREATER_EQUAL", "LESS_EQUAL", "EQUAL", "NOT", "ASSIGN", "FOR", "WHILE",
  "IF", "ELSE", "COLON", "OUTPUT", "LPAREN", "RPAREN", "OR", "INPUT",
  "$accept", "program", "declarations", "declaration", "operations",
  "operation", "loop_no_brace", "for_loop", "if_statement", "if_else",
  "output_statement", "input_statement", "assignment", "u_var_list",
  "string_list", "number_list", "continue", "conditions", "operators",
  "type", "list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   -17,    17,    17,    17,    17,    78,    84,    89,    88,
     104,   111,   114,  -122,   114,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,   154,  -122,   -10,     4,    61,    86,   121,
     122,   281,   305,   123,  -122,  -122,   114,  -122,  -122,   117,
     329,   120,   128,   133,  -122,   134,  -122,  -122,  -122,   107,
     119,   345,  -122,  -122,  -122,  -122,  -122,   142,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,   266,     6,   208,   135,  -122,
      29,    34,  -122,  -122,    64,  -122,   -11,  -122,   145,   147,
     150,   156,  -122,  -122,  -122,  -122,  -122,  -122,   233,   130,
    -122,    90,   150,   156,   233,  -122,    29,  -122,    67,   114,
     133,  -122,   329,  -122,   114,   156,   257,   151,   157,   159,
     161,   160,   165,   126,   137,  -122,  -122,   164,  -122,   168,
     329,  -122,    97,  -122,    20,   171,  -122,   172,   182,   172,
     172,  -122,  -122,  -122,  -122,    58,   177,    76,   172,   170,
    -122,  -122,   114,    74,  -122,  -122,  -122,  -122,  -122,  -122,
     195,  -122,  -122,   114,  -122,   114,   114,   176,  -122,   329,
    -122,   114,   203,   204,   205,   114,   181,  -122,  -122,   172,
    -122,  -122,   207,  -122,   114,  -122
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     7,     4,    17,    20,    21,    24,    26,
      25,    22,    23,     0,    48,     0,     0,     0,     0,     0,
       0,    71,    71,     0,     1,     6,     3,    27,    18,     0,
      71,     0,    50,    53,    12,     0,    13,    14,    15,     0,
       0,    63,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    63,    71,     0,     0,     8,
      85,    71,     9,    51,     0,    54,     0,    49,     0,     0,
       0,    70,    64,    65,    66,    67,    68,    69,    71,     0,
      70,    95,    72,    76,    71,    90,    85,    91,    50,    19,
      53,    94,    71,    93,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    86,     0,    88,     0,
      71,    96,     0,    40,     0,     0,    42,    19,     0,    19,
      19,    10,    52,    11,    55,    19,     0,    19,    19,     0,
      97,    98,    19,    85,    62,    27,    59,    44,    60,    61,
       0,    47,    46,    19,    28,    19,    19,     0,    34,    71,
      39,    19,     0,     0,     0,    19,     0,    45,    30,    19,
      33,    36,     0,    31,    19,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,     1,   210,     0,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,   112,   125,   139,  -121,   175,   -25,     3,
     -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    37,    14,   146,    16,    17,    18,    19,
      20,    21,    22,    25,    74,    76,   147,    88,   148,   149,
     103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    13,    44,   111,   112,    45,    65,    67,   151,   152,
      70,    23,    15,    35,    38,    71,    46,   158,   -85,    45,
     108,    24,    92,    53,    54,    55,    93,    57,    58,    59,
      60,    61,    62,    63,   141,   112,    38,    95,   106,    97,
     119,    94,   101,    64,    98,    80,   101,   100,   173,   105,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     1,   101,     2,     3,     4,     5,   153,   101,
     102,    64,    73,    47,   107,   109,    45,   125,   121,   110,
       1,   128,     2,     3,     4,     5,   156,     6,     7,     8,
      80,   117,     9,    32,   105,   139,    10,   120,    48,   123,
      98,    45,    23,   100,   126,     6,     7,     8,   140,    33,
       9,    34,   110,    29,    10,    26,    27,    28,     1,    30,
       2,     3,     4,     5,    31,    49,    50,    68,   145,    69,
     145,   145,    72,    73,   166,   154,    75,   157,    77,   145,
      78,    79,   160,     6,     7,     8,    89,   104,     9,   113,
     114,   118,    10,   162,   115,   163,   164,    39,    40,    41,
     116,   167,   135,   129,    42,   171,   132,    43,   134,   130,
     145,   131,   133,   136,   175,    95,   143,    97,     2,     3,
       4,     5,    98,   142,   144,   100,   150,   155,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
     137,     6,     7,     8,   138,   159,     9,   161,   165,    64,
      10,    95,    96,    97,   168,   169,   170,   172,    98,   174,
      99,   100,    36,   122,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    95,    96,    97,   124,
      91,     0,     0,    98,     0,    64,   100,     0,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    70,     0,     0,     0,     0,     0,     0,     0,   127,
      64,     0,     0,    92,    53,    54,    55,    93,    57,    58,
      59,    60,    61,    62,    63,    51,    90,     0,    82,    83,
      84,    85,    86,    87,    64,     0,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    64,     0,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    64,     0,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,    80,     0,     0,     0,    81,    64,    82,    83,    84,
      85,    86,    87
};

static const yytype_int16 yycheck[] =
{
       0,     0,    12,    14,    15,    15,    31,    32,   129,   130,
       4,    28,    12,    12,    14,    40,    12,   138,    12,    15,
      71,     4,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    14,    15,    36,     3,     4,     5,
      91,    66,    67,    37,    10,    16,    71,    13,   169,    20,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     4,    88,     6,     7,     8,     9,    10,    94,
      67,    37,     5,    12,    71,    11,    15,   102,    11,    15,
       4,   106,     6,     7,     8,     9,    10,    29,    30,    31,
      16,    88,    34,     5,    20,   120,    38,    94,    12,    99,
      10,    15,    28,    13,   104,    29,    30,    31,    11,     5,
      34,     0,    15,    35,    38,     3,     4,     5,     4,    35,
       6,     7,     8,     9,    35,     4,     4,     4,   127,    12,
     129,   130,    12,     5,   159,   135,     3,   137,     4,   138,
      33,    22,   142,    29,    30,    31,     4,    12,    34,     4,
       3,    21,    38,   153,     4,   155,   156,     3,     4,     5,
       4,   161,    36,    12,    10,   165,     5,    13,     3,    12,
     169,    12,    12,    36,   174,     3,     4,     5,     6,     7,
       8,     9,    10,    12,    12,    13,     4,    10,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      36,    29,    30,    31,    36,    35,    34,    12,    32,    37,
      38,     3,     4,     5,    11,    11,    11,    36,    10,    12,
      12,    13,    12,    98,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     3,     4,     5,   100,
      65,    -1,    -1,    10,    -1,    37,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      37,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     4,    20,    -1,    22,    23,
      24,    25,    26,    27,    37,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    37,    22,    23,    24,
      25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,     7,     8,     9,    29,    30,    31,    34,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    28,     4,    52,    52,    52,    52,    35,
      35,    35,     5,     5,     0,    42,    43,    42,    44,     3,
       4,     5,    10,    13,    12,    15,    12,    12,    12,     4,
       4,     4,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    37,    57,     4,    57,     4,    12,
       4,    57,    12,     5,    53,     3,    54,     4,    33,    22,
      16,    20,    22,    23,    24,    25,    26,    27,    56,     4,
      20,    56,    16,    20,    57,     3,     4,     5,    10,    12,
      13,    57,    58,    59,    12,    20,     4,    58,    59,    11,
      15,    14,    15,     4,     3,     4,     4,    58,    21,    59,
      58,    11,    53,    44,    54,    57,    44,    12,    57,    12,
      12,    12,     5,    12,     3,    36,    36,    36,    36,    57,
      11,    14,    12,     4,    12,    42,    44,    55,    57,    58,
       4,    55,    55,    10,    44,    10,    10,    44,    55,    35,
      44,    12,    44,    44,    44,    32,    57,    44,    11,    11,
      11,    44,    36,    55,    12,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    40,    41,    41,    41,    42,    42,
      42,    42,    42,    42,    42,    42,    43,    43,    43,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    45,    46,
      46,    46,    47,    47,    47,    48,    48,    49,    49,    49,
      49,    50,    50,    51,    51,    51,    51,    51,    52,    52,
      53,    53,    53,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     0,     2,     1,     4,     4,
       6,     6,     3,     3,     3,     3,     0,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     0,
       9,    10,     0,     9,     7,     0,     9,     0,    11,     7,
       5,     0,     5,     0,     7,     9,     7,     7,     1,     3,
       0,     1,     3,     0,     1,     3,     0,     0,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     0,
       1,     1,     1,     1,     1,     0,     2,     3,     3
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
        YY_LAC_DISCARD ("YYBACKUP");                              \
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* program: %empty  */
#line 72 "setlang.y"
         {}
#line 1810 "setlang.tab.c"
    break;

  case 3: /* program: declarations operations  */
#line 73 "setlang.y"
                               {if(!isEmpty(&statement_stack)){release_stck();}}
#line 1816 "setlang.tab.c"
    break;

  case 8: /* declaration: IDENTIFIER ASSIGN NUMBER SEMICOLON  */
#line 82 "setlang.y"
                                                        {
                        Node_struct *current_node = search_node(head, (yyvsp[-3].sval));
                        current_node->var_count = 0;
                        current_node->variables = (yyvsp[-1].ival);
                        free((yyvsp[-3].sval));
                    }
#line 1827 "setlang.tab.c"
    break;

  case 9: /* declaration: IDENTIFIER ASSIGN STRING_LITERAL SEMICOLON  */
#line 88 "setlang.y"
                                                                 {
                        Node_struct *current_node = search_node(head, (yyvsp[-3].sval));
                        current_node->var_count = 1;
                        current_node->variables = (yyvsp[-1].sval);
                    }
#line 1837 "setlang.tab.c"
    break;

  case 10: /* declaration: IDENTIFIER ASSIGN LBRACE string_list RBRACE SEMICOLON  */
#line 93 "setlang.y"
                                                                               {
                        Node_struct *current_node = search_node(head, (yyvsp[-5].sval));
                        set_variables(current_node, (yyvsp[-2].u_var_list).vars, (yyvsp[-2].u_var_list).count);
                    }
#line 1846 "setlang.tab.c"
    break;

  case 11: /* declaration: IDENTIFIER ASSIGN LBRACKET number_list RBRACKET SEMICOLON  */
#line 97 "setlang.y"
                                                                                { 
                        if((yyvsp[-2].u_number_list).vars[0] != 0){
                            Node_struct *current_node = search_node(head, (yyvsp[-5].sval));
                            current_node->var_count = (yyvsp[-2].u_number_list).count;
                            free(current_node->variables);
                            current_node->variables = (int *)malloc(sizeof(int) * ((yyvsp[-2].u_number_list).count+1));
                            for (int i = 0; i < (yyvsp[-2].u_number_list).count; i++) {
                            current_node->variables[i] = (yyvsp[-2].u_number_list).vars[i];
                        }
                        }else{/* EMPTY INIT */
                            Node_struct *current_node = search_node(head, (yyvsp[-5].sval));
                            current_node->var_count = (yyvsp[-2].u_number_list).count;
                            current_node->variables = (int *)malloc(sizeof(int) * ((yyvsp[-2].u_number_list).count+1));
                            current_node->variables[0] = NULL;
                        }
                        free((yyvsp[-2].u_number_list).vars);
                    }
#line 1868 "setlang.tab.c"
    break;

  case 12: /* declaration: COLLECTION u_var_list SEMICOLON  */
#line 114 "setlang.y"
                                                          {
                        for (int i = 0; i < (yyvsp[-1].u_var_list).count; i++) {
                            Node_struct *new_node = initialize(COLLECTION_VAR, (yyvsp[-1].u_var_list).vars[i]);
                            add_node(&head, new_node); 
                        }
                        free((yyvsp[-1].u_var_list).vars);
                        }
#line 1880 "setlang.tab.c"
    break;

  case 13: /* declaration: SET u_var_list SEMICOLON  */
#line 121 "setlang.y"
                                                         {
                        for (int i = 0; i < (yyvsp[-1].u_var_list).count; i++) {
                            Node_struct *new_node = initialize(SET_VAR, (yyvsp[-1].u_var_list).vars[i]);
                            add_node(&head, new_node); 
                        }
                        }
#line 1891 "setlang.tab.c"
    break;

  case 14: /* declaration: INT u_var_list SEMICOLON  */
#line 127 "setlang.y"
                                                         {
                        for (int i = 0; i < (yyvsp[-1].u_var_list).count; i++) {
                            Node_struct *new_node = initialize(INT_VAR, (yyvsp[-1].u_var_list).vars[i]);
                            add_node(&head, new_node); 
                        }
                        }
#line 1902 "setlang.tab.c"
    break;

  case 15: /* declaration: STR u_var_list SEMICOLON  */
#line 133 "setlang.y"
                                                         {
                        for (int i = 0; i < (yyvsp[-1].u_var_list).count; i++) {
                            Node_struct *new_node = initialize(STR_VAR, (yyvsp[-1].u_var_list).vars[i]);
                            add_node(&head, new_node); 
                        }

                        }
#line 1914 "setlang.tab.c"
    break;

  case 16: /* operations: %empty  */
#line 143 "setlang.y"
           {}
#line 1920 "setlang.tab.c"
    break;

  case 18: /* operations: operations operation  */
#line 145 "setlang.y"
                           {if(!isEmpty(&statement_stack)){release_stck();}}
#line 1926 "setlang.tab.c"
    break;

  case 21: /* operation: for_loop  */
#line 150 "setlang.y"
                 {release_stck();}
#line 1932 "setlang.tab.c"
    break;

  case 28: /* loop_no_brace: FOR LPAREN IDENTIFIER COLON IDENTIFIER RPAREN operation  */
#line 161 "setlang.y"
                                                                 {
            char **ids =  malloc(3 * sizeof(char *));
            ids[0] = (yyvsp[-4].sval);
            ids[1] = (yyvsp[-2].sval);
            ids[2] = NULL;
            Statement *new_statement = create_for_statement(ids);
            new_statement->type = FOR_STATEMENT_NO_BRACE;
            pushStatement(&statement_stack, new_statement);    
        }
#line 1946 "setlang.tab.c"
    break;

  case 30: /* for_loop: FOR LPAREN IDENTIFIER COLON IDENTIFIER RPAREN LBRACE operation RBRACE  */
#line 172 "setlang.y"
                                                                                 {
            char **ids =  malloc(3 * sizeof(char *));
            ids[0] = (yyvsp[-6].sval);
            ids[1] = (yyvsp[-4].sval);
            ids[2] = NULL;
            Statement *new_statement = create_for_statement(ids);
            pushStatement(&statement_stack, new_statement);
        }
#line 1959 "setlang.tab.c"
    break;

  case 31: /* for_loop: WHILE LPAREN IDENTIFIER GREATER_THAN NUMBER RPAREN LBRACE operation RBRACE continue  */
#line 180 "setlang.y"
                                                                                              {printf("While loop\n");}
#line 1965 "setlang.tab.c"
    break;

  case 33: /* if_statement: IF LPAREN IDENTIFIER conditions type RPAREN LBRACE operation RBRACE  */
#line 186 "setlang.y"
                                                                               {
                char **ids = (char **)malloc(4 * sizeof(char *));
                if((yyvsp[-4].sval) < 100 && (yyvsp[-4].sval) > 0){
                    ids[2] = int_to_string((yyvsp[-4].sval)); 
                }else{
                    ids[2] = (yyvsp[-4].sval); 
                }
                ids[0] = (yyvsp[-6].sval); 
                ids[1] = (yyvsp[-5].sval);
                ids[3] = NULL;
                Statement *stmt = createStatement(IF_STATEMENT,ids);
                pushStatement(&statement_stack,stmt);
        }
#line 1983 "setlang.tab.c"
    break;

  case 34: /* if_statement: IF LPAREN operators conditions list RPAREN continue  */
#line 199 "setlang.y"
                                                               {
            char **ids = (char **)malloc(4 * sizeof(char *));
                if((yyvsp[-2].u_var_list).vars < 100 && (yyvsp[-2].u_var_list).vars > 0){
                    ids[2] = int_to_string((yyvsp[-2].u_var_list).vars); 
                }else{
                    ids[2] = (yyvsp[-2].u_var_list).vars;
                }
                ids[0] = (yyvsp[-4].sval); 
                ids[1] = (yyvsp[-3].sval); 
                ids[3] = NULL; 
                Statement *stmt = createStatement(IF_STATEMENT,ids);
                pushStatement(&statement_stack,stmt);
        }
#line 2001 "setlang.tab.c"
    break;

  case 36: /* if_else: IF LPAREN IDENTIFIER conditions type RPAREN operation ELSE operation  */
#line 215 "setlang.y"
                                                                               {
            char **ids = (char **)malloc(4 * sizeof(char *));
            if((yyvsp[-4].sval) < 100 && (yyvsp[-4].sval) > 0){
                ids[2] = int_to_string((yyvsp[-4].sval)); 
            }else{
                ids[2] = (yyvsp[-4].sval); 
            }
            ids[0] = (yyvsp[-6].sval); 
            ids[1] = (yyvsp[-5].sval); 
            ids[3] = NULL; 
            Statement *stmt = createStatement(IF_ELSE_STATEMENT,ids);
            pushStatement(&statement_stack,stmt);
        }
#line 2019 "setlang.tab.c"
    break;

  case 38: /* output_statement: OUTPUT STRING_LITERAL IDENTIFIER operators type operators LPAREN operators RPAREN SEMICOLON operation  */
#line 229 "setlang.y"
                                                                                                                {
            char **ids =  malloc(4 * sizeof(char *));
            if((yyvsp[-8].sval) < 100 && (yyvsp[-8].sval) > 0){
                ids[1] = int_to_string((yyvsp[-8].sval)); 
            }else{
                ids[1] = (yyvsp[-8].sval);
            }
            ids[0] = (yyvsp[-9].sval);
            ids[2] = (yyvsp[-3].sval);
            ids[3] = NULL;
            Statement *new_statement = create_output_statement(ids);
            pushStatement(&statement_stack, new_statement);
            if_block++;
        }
#line 2038 "setlang.tab.c"
    break;

  case 39: /* output_statement: OUTPUT STRING_LITERAL operators type operators SEMICOLON operation  */
#line 243 "setlang.y"
                                                                             {
            char **ids =  malloc(4 * sizeof(char *));
            ids[0] = (yyvsp[-5].sval);
            ids[1] = (yyvsp[-4].sval);
            ids[2] = NULL;
            Statement *new_statement = create_output_statement(ids);
        }
#line 2050 "setlang.tab.c"
    break;

  case 40: /* output_statement: OUTPUT STRING_LITERAL operators SEMICOLON operation  */
#line 250 "setlang.y"
                                                               {         
            char **ids =  malloc(4 * sizeof(char *));
            if((yyvsp[-2].sval) < 100 && (yyvsp[-2].sval) > 0){
                ids[1] = int_to_string((yyvsp[-2].sval)); 
            }else{
                ids[1] = (yyvsp[-2].sval);
            }
            ids[0] = (yyvsp[-3].sval);
            ids[2] = NULL;
            Statement *new_statement = create_output_statement(ids);
            pushStatement(&statement_stack, new_statement);
            if_block++;
        }
#line 2068 "setlang.tab.c"
    break;

  case 42: /* input_statement: INPUT STRING_LITERAL IDENTIFIER SEMICOLON operation  */
#line 267 "setlang.y"
                                                              {
            char **ids =  malloc(4 * sizeof(char *));
            ids[0] = (yyvsp[-4].sval);
            ids[1] = (yyvsp[-3].sval);
            ids[2] = (yyvsp[-2].sval);
            ids[4] = NULL;
            Statement *new_statement = create_input_statement(ids);
            pushStatement(&statement_stack, new_statement);
        }
#line 2082 "setlang.tab.c"
    break;

  case 44: /* assignment: IDENTIFIER ASSIGN IDENTIFIER operators IDENTIFIER SEMICOLON continue  */
#line 279 "setlang.y"
                                                                               {
            char **ids =  malloc(5 * sizeof(char *));
            ids[0] = (yyvsp[-6].sval); 
            ids[1] = (yyvsp[-4].sval); 
            ids[2] = (yyvsp[-3].sval); 
            ids[3] = (yyvsp[-2].sval); 
            ids[4] = NULL;
            Statement *new_statement = create_assign_statement(ids);
            pushStatement(&statement_stack, new_statement);
            if_block++;
        }
#line 2098 "setlang.tab.c"
    break;

  case 45: /* assignment: IDENTIFIER ASSIGN IDENTIFIER operators IDENTIFIER operators IDENTIFIER SEMICOLON operation  */
#line 290 "setlang.y"
                                                                                                     {
                /*MAIN = LEFT OP RIGHT OP RIGHTER*/
                /*HENDELING LEF AND RIGHT*/
                char **ids =  malloc(5 * sizeof(char *));
                ids[0] = (yyvsp[-8].sval);
                ids[1] = (yyvsp[-6].sval);
                ids[2] = (yyvsp[-5].sval);
                ids[3] = (yyvsp[-4].sval);
                ids[4] = NULL;
                Statement *new_statement = create_assign_statement(ids);
                execute_statement(new_statement, head);
                Node_struct *current_node = search_node(head, (yyvsp[-8].sval));
                /*HENDELING MAIN OP RIGHTER*/
                char **mian_ids =  malloc(5 * sizeof(char *));
                mian_ids[0] = (yyvsp[-8].sval);
                mian_ids[1] = (yyvsp[-8].sval);
                mian_ids[2] = (yyvsp[-3].sval);
                mian_ids[3] = (yyvsp[-2].sval);
                mian_ids[4] = NULL;
                Statement *main_new_statement = create_assign_statement(mian_ids);
                pushStatement(&statement_stack, main_new_statement);
                if_block++;
        }
#line 2126 "setlang.tab.c"
    break;

  case 46: /* assignment: IDENTIFIER ASSIGN IDENTIFIER operators list SEMICOLON continue  */
#line 313 "setlang.y"
                                                                         {
            set_variables_by_key(my_helper, (yyvsp[-2].u_var_list).vars,(yyvsp[-2].u_var_list).count,head);
            char **ids =  malloc(5 * sizeof(char *));
            ids[0] = (yyvsp[-6].sval);
            ids[1] = (yyvsp[-4].sval);
            ids[2] = (yyvsp[-3].sval);
            ids[3] = my_helper;
            ids[4] = NULL;
            Statement *new_statement = create_assign_statement(ids);
            pushStatement(&statement_stack, new_statement);
            if_block++;
        }
#line 2143 "setlang.tab.c"
    break;

  case 47: /* assignment: IDENTIFIER ASSIGN IDENTIFIER operators type SEMICOLON continue  */
#line 325 "setlang.y"
                                                                         {
            char **ids =  malloc(5 * sizeof(char *));
            ids[0] = (yyvsp[-6].sval);
            ids[1] = (yyvsp[-4].sval);
            ids[2] = (yyvsp[-3].sval);
            ids[3] = (yyvsp[-2].sval);
            ids[4] = NULL;
            Statement *new_statement = create_assign_statement(ids);
            pushStatement(&statement_stack, new_statement);
            if_block++;
        }
#line 2159 "setlang.tab.c"
    break;

  case 48: /* u_var_list: IDENTIFIER  */
#line 340 "setlang.y"
                   {
            (yyval.u_var_list) = (struct u_var_list){ malloc(sizeof(char *)), 1 };
            (yyval.u_var_list) .vars[0] = (yyvsp[0].sval);
    
        }
#line 2169 "setlang.tab.c"
    break;

  case 49: /* u_var_list: u_var_list COMMA IDENTIFIER  */
#line 345 "setlang.y"
                                      {                          
            (yyval.u_var_list) = (struct u_var_list){ realloc((yyvsp[-2].u_var_list).vars, sizeof(char *) * ((yyvsp[-2].u_var_list).count + 2)), (yyvsp[-2].u_var_list).count + 1 };
            if ((yyval.u_var_list) .vars == NULL) {
                fprintf(stderr, "Out of memory\n");
                exit(EXIT_FAILURE);
            }
            (yyval.u_var_list) .vars[(yyval.u_var_list) .count - 1] = (yyvsp[0].sval);
        }
#line 2182 "setlang.tab.c"
    break;

  case 50: /* string_list: %empty  */
#line 357 "setlang.y"
                {}
#line 2188 "setlang.tab.c"
    break;

  case 51: /* string_list: STRING_LITERAL  */
#line 358 "setlang.y"
                     { 
        (yyval.u_var_list) = (struct u_var_list) { malloc(sizeof(char *)), 1 };
        (yyval.u_var_list) .vars[0] = strdup((yyvsp[0].sval));
     }
#line 2197 "setlang.tab.c"
    break;

  case 52: /* string_list: string_list COMMA STRING_LITERAL  */
#line 362 "setlang.y"
                                       { 
        (yyval.u_var_list) = (struct u_var_list) { realloc((yyvsp[-2].u_var_list).vars, sizeof(char *) * ((yyvsp[-2].u_var_list).count + 1)), (yyvsp[-2].u_var_list).count + 1 };
        if ((yyval.u_var_list) .vars == NULL) {
            fprintf(stderr, "Out of memory\n");
            exit(EXIT_FAILURE);
        }
        (yyval.u_var_list) .vars[(yyval.u_var_list) .count - 1] = strdup((yyvsp[0].sval));
     }
#line 2210 "setlang.tab.c"
    break;

  case 53: /* number_list: %empty  */
#line 373 "setlang.y"
                  {(yyval.u_number_list) = (struct u_number_list) { malloc(sizeof(int)), 1 };(yyval.u_number_list) .vars[0] = 0;(yyval.u_number_list) .count = 0;}
#line 2216 "setlang.tab.c"
    break;

  case 54: /* number_list: NUMBER  */
#line 374 "setlang.y"
                        {
                    (yyval.u_number_list) = (struct u_number_list) { malloc(sizeof(int)), 1 };
                    (yyval.u_number_list) .vars[0] = (yyvsp[0].ival);
                 }
#line 2225 "setlang.tab.c"
    break;

  case 55: /* number_list: number_list COMMA NUMBER  */
#line 378 "setlang.y"
                                          {
                    (yyval.u_number_list) = (struct u_number_list) { realloc((yyvsp[-2].u_number_list).vars, sizeof(int) * ((yyvsp[-2].u_number_list).count + 1)), (yyvsp[-2].u_number_list).count + 1 };
                    if ((yyval.u_number_list) .vars == NULL) {
                        fprintf(stderr, "Out of memory\n");
                        exit(EXIT_FAILURE);
                    }
                    (yyval.u_number_list) .vars[(yyval.u_number_list) .count - 1] = (yyvsp[0].ival);
                  }
#line 2238 "setlang.tab.c"
    break;

  case 63: /* conditions: %empty  */
#line 398 "setlang.y"
                {(yyval.sval) = "TRUE";}
#line 2244 "setlang.tab.c"
    break;

  case 64: /* conditions: GREATER_THAN  */
#line 399 "setlang.y"
                             { (yyval.sval) = ">"; }
#line 2250 "setlang.tab.c"
    break;

  case 65: /* conditions: LESS_THAN  */
#line 400 "setlang.y"
                          { (yyval.sval) = "<"; }
#line 2256 "setlang.tab.c"
    break;

  case 66: /* conditions: GREATER_EQUAL  */
#line 401 "setlang.y"
                              { (yyval.sval) = ">="; }
#line 2262 "setlang.tab.c"
    break;

  case 67: /* conditions: LESS_EQUAL  */
#line 402 "setlang.y"
                           { (yyval.sval) = "<="; }
#line 2268 "setlang.tab.c"
    break;

  case 68: /* conditions: EQUAL  */
#line 403 "setlang.y"
                      { (yyval.sval) = "=="; }
#line 2274 "setlang.tab.c"
    break;

  case 69: /* conditions: NOT  */
#line 404 "setlang.y"
                    { (yyval.sval) = "!="; }
#line 2280 "setlang.tab.c"
    break;

  case 70: /* conditions: AND  */
#line 405 "setlang.y"
                   { (yyval.sval) = "&&"; }
#line 2286 "setlang.tab.c"
    break;

  case 72: /* operators: PLUS  */
#line 410 "setlang.y"
                   { (yyval.sval) = "+";}
#line 2292 "setlang.tab.c"
    break;

  case 73: /* operators: MINUS  */
#line 411 "setlang.y"
                    { (yyval.sval) = "-";}
#line 2298 "setlang.tab.c"
    break;

  case 74: /* operators: MULTIPLY  */
#line 412 "setlang.y"
                       { (yyval.sval) = "*";}
#line 2304 "setlang.tab.c"
    break;

  case 75: /* operators: DIVIDE  */
#line 413 "setlang.y"
                     { (yyval.sval) = "/";}
#line 2310 "setlang.tab.c"
    break;

  case 76: /* operators: AND  */
#line 414 "setlang.y"
                  { (yyval.sval) = "&";}
#line 2316 "setlang.tab.c"
    break;

  case 77: /* operators: PIPE  */
#line 415 "setlang.y"
                   { (yyval.sval) = "|";}
#line 2322 "setlang.tab.c"
    break;

  case 78: /* operators: GREATER_THAN  */
#line 416 "setlang.y"
                           { (yyval.sval) = ">"; }
#line 2328 "setlang.tab.c"
    break;

  case 79: /* operators: LESS_THAN  */
#line 417 "setlang.y"
                         { (yyval.sval) = "<"; }
#line 2334 "setlang.tab.c"
    break;

  case 80: /* operators: GREATER_EQUAL  */
#line 418 "setlang.y"
                            { (yyval.sval) = ">="; }
#line 2340 "setlang.tab.c"
    break;

  case 81: /* operators: LESS_EQUAL  */
#line 419 "setlang.y"
                         { (yyval.sval) = "<="; }
#line 2346 "setlang.tab.c"
    break;

  case 82: /* operators: EQUAL  */
#line 420 "setlang.y"
                    { (yyval.sval) = "==";}
#line 2352 "setlang.tab.c"
    break;

  case 83: /* operators: NOT  */
#line 421 "setlang.y"
                  { (yyval.sval) = "!=";}
#line 2358 "setlang.tab.c"
    break;

  case 84: /* operators: OR  */
#line 422 "setlang.y"
                 { (yyval.sval) = "||";}
#line 2364 "setlang.tab.c"
    break;

  case 85: /* operators: IDENTIFIER  */
#line 423 "setlang.y"
                         { (yyval.sval) = (yyvsp[0].sval);}
#line 2370 "setlang.tab.c"
    break;

  case 86: /* operators: IDENTIFIER AND IDENTIFIER  */
#line 424 "setlang.y"
                                        {
                char **ids =  malloc(5 * sizeof(char *));
                ids[0] = my_helper;
                ids[1] = (yyvsp[-2].sval);
                ids[2] ="&";
                ids[3] = (yyvsp[0].sval);
                ids[4] = NULL;
                Statement *new_statement = create_assign_statement(ids);
                execute_statement(new_statement, head);
                (yyval.sval) = my_helper;
                }
#line 2386 "setlang.tab.c"
    break;

  case 87: /* operators: IDENTIFIER PLUS IDENTIFIER  */
#line 435 "setlang.y"
                                         {
                char **ids =  malloc(5 * sizeof(char *));
                ids[0] = my_helper;
                ids[1] = (yyvsp[-2].sval);
                ids[2] ="+";
                ids[3] = (yyvsp[0].sval);
                ids[4] = NULL;                
                Statement *new_statement = create_assign_statement(ids);
                execute_statement(new_statement, head);
                (yyval.sval) = my_helper;
            }
#line 2402 "setlang.tab.c"
    break;

  case 88: /* operators: PIPE IDENTIFIER PIPE  */
#line 446 "setlang.y"
                                  {
                Node_struct *current_node = search_node(head, (yyvsp[-1].sval));
                (yyval.sval) = current_node->var_count;
            }
#line 2411 "setlang.tab.c"
    break;

  case 89: /* type: %empty  */
#line 454 "setlang.y"
      {(yyval.sval) = "TRUE";}
#line 2417 "setlang.tab.c"
    break;

  case 90: /* type: NUMBER  */
#line 455 "setlang.y"
             { (yyval.sval) = (yyvsp[0].ival); }
#line 2423 "setlang.tab.c"
    break;

  case 91: /* type: STRING_LITERAL  */
#line 456 "setlang.y"
                     { (yyval.sval) = (yyvsp[0].sval); }
#line 2429 "setlang.tab.c"
    break;

  case 92: /* type: IDENTIFIER  */
#line 457 "setlang.y"
                 { (yyval.sval) = (yyvsp[0].sval); }
#line 2435 "setlang.tab.c"
    break;

  case 96: /* list: LBRACE RBRACE  */
#line 462 "setlang.y"
                    { (yyval.u_var_list).vars = "FALSE"; }
#line 2441 "setlang.tab.c"
    break;

  case 97: /* list: LBRACE string_list RBRACE  */
#line 463 "setlang.y"
                                {
        int count = (yyvsp[-1].u_var_list).count;
        (yyval.u_var_list).count = count;
        (yyval.u_var_list) = (struct u_var_list) { malloc(sizeof(char *)), 1 };
        (yyval.u_var_list).vars = (char **)malloc(sizeof(char *) * (count + 1));
        for (int i = 0; i < count; i++) {
            (yyval.u_var_list).vars[i] = strdup((yyvsp[-1].u_var_list).vars[i]);
        }
        (yyval.u_var_list).count = count;
        (yyval.u_var_list).vars[count] = NULL;
    }
#line 2457 "setlang.tab.c"
    break;


#line 2461 "setlang.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 479 "setlang.y"


int main(int argc, char **argv) {     
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }
    initStack(&statement_stack);
    Node_struct *helper = initialize(HELPER,my_helper);
    add_node(&head, helper);
    read_file_and_process(argv[1]);    
    return EXIT_SUCCESS;
}    


void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}


void read_file_and_process(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    yyin = file;  
    printf("Run Program:\n");

    int parse_result = yyparse();

    fclose(file);

    if (parse_result != 0) {
        fprintf(stderr, "Parsing failed.\n");
        exit(EXIT_FAILURE);
    }
}


void pop_regulation(){
    Statement *current_statement = popStatement(&statement_stack);
    execute_statement(current_statement, head);
}



void pop_loop_statement(){
    Statement **QQ_stack = createStatementsFromStack(&statement_stack);
    Node_struct *left_node = search_node(head, QQ_stack[0]->statement[0]);
    Node_struct *right_node = search_node(head, QQ_stack[0]->statement[1]);
    if(left_node == NULL || right_node == NULL){
        printf("NOT_SUPPORTED_ERROR");
    }
    int statments_count = list_counter(QQ_stack);
    for(int i = 0; i < right_node->var_count; i++){
        left_node->variables = right_node->variables[i];
        for(int j = 0 ; j < statments_count ; j++){
            if(QQ_stack[j]->type == IF_STATEMENT){
                bool condition = execute_statement(QQ_stack[j], head);
                if(condition == 0){
                    j += if_block;
                }
            }else{
                execute_statement(QQ_stack[j], head);
            }
        } 
    }
}


void pop_all_if_stack() {
    int total_elements = if_block + 1;
    Statement **Q_if_statements = createStatementArray(total_elements);
    Statement **temp_stack = createStatementArray(total_elements); 
    
    int temp_count = 0;
    while (!isEmpty(&statement_stack)) { 
        temp_stack[temp_count] = popStatement(&statement_stack);
        temp_count++;
    }

    int processed_count = 0;
    for (int i = temp_count - 1; i >= 0; i--) {
        if (processed_count == 0) {
            Q_if_statements[processed_count++] = temp_stack[i];
            continue;
        }
        if (processed_count <= if_block) {
            if (temp_stack[i]->type != 1) {
                Q_if_statements[processed_count++] = temp_stack[i];
            } else {
                pushStatement(&statement_stack, temp_stack[i]);
            }
        } else {
            pushStatement(&statement_stack, temp_stack[i]);
        }
    }
    bool suc = execute_statement(Q_if_statements[if_block], head);
    if(suc == true){
        for(int i = if_block-1; i >= 0; i--){
            execute_statement(Q_if_statements[i], head);
        }
    }
    free(temp_stack);
}


void pop_loop_no_brace_statement() {
    Statement **Q_if_statements = createStatementArray(2);
    Q_if_statements[0] = popStatement(&statement_stack);
    Node_struct *left_node = search_node(head, Q_if_statements[0]->statement[0]);
    Node_struct *right_node = search_node(head, Q_if_statements[0]->statement[1]);
    
    if (left_node == NULL || right_node == NULL) {
        printf("NOT_SUPPORTED_ERROR");
        return;
    }else{
        Q_if_statements[1] = popStatement(&statement_stack);
    }
    for (int i = 0; i < right_node->var_count; i++) {
        left_node->variables = right_node->variables[i];
        execute_statement(Q_if_statements[1], head);
    }
}


void pop_if_else_stack(){
    int stack_count = countStatementsInStack(&statement_stack);
    Statement **Q_if_statements = createStatementArray(stack_count);
    Statement *temp_stack = statement_stack.data[2];
    if(Q_if_statements == NULL || temp_stack == NULL || stack_count == 0){
        printf("MEMORY_ALLOCATION_ERROR");
    }
    for(int i = 0; i < stack_count; i++){
        Q_if_statements[i] = popStatement(&statement_stack);
    }
    sort_statements(Q_if_statements, stack_count);
    bool condition = execute_statement(Q_if_statements[0], head);
    if(condition == true){
        execute_statement(Q_if_statements[8], head);
    }else{
        execute_statement(Q_if_statements[2], head);
    }
    execute_statement(Q_if_statements[10], head);

    condition = execute_statement(Q_if_statements[1], head);
    if(condition == true){
        execute_statement(Q_if_statements[7], head);
    }else{
        execute_statement(Q_if_statements[3], head);
    }

    execute_statement(Q_if_statements[4], head);

    condition = execute_statement(Q_if_statements[9], head);
    if(condition == false){
        execute_statement(Q_if_statements[5], head);
    }
    execute_statement(temp_stack, head);
    if_block = 1;
}


void release_stck() {
    while (!isEmpty(&statement_stack)) { 
        int type = getTypeTopOfStack(&statement_stack);
        if (type == IF_STATEMENT) {
            pop_all_if_stack();  
            if_block = 0;
        } else if (type == FOR_STATEMENT) {
            pop_loop_statement();
        }else if(type == FOR_STATEMENT_NO_BRACE){
            pop_loop_no_brace_statement();
        } else if(type == IF_ELSE_STATEMENT) {
            pop_if_else_stack();
        } 
        else {
            pop_regulation();
        }
    }
    if_block = 0;
}


