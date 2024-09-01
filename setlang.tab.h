/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SETLANG_TAB_H_INCLUDED
# define YY_YY_SETLANG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    COLLECTION = 261,              /* COLLECTION  */
    SET = 262,                     /* SET  */
    INT = 263,                     /* INT  */
    STR = 264,                     /* STR  */
    LBRACE = 265,                  /* LBRACE  */
    RBRACE = 266,                  /* RBRACE  */
    SEMICOLON = 267,               /* SEMICOLON  */
    LBRACKET = 268,                /* LBRACKET  */
    RBRACKET = 269,                /* RBRACKET  */
    COMMA = 270,                   /* COMMA  */
    PLUS = 271,                    /* PLUS  */
    MINUS = 272,                   /* MINUS  */
    MULTIPLY = 273,                /* MULTIPLY  */
    DIVIDE = 274,                  /* DIVIDE  */
    AND = 275,                     /* AND  */
    PIPE = 276,                    /* PIPE  */
    GREATER_THAN = 277,            /* GREATER_THAN  */
    LESS_THAN = 278,               /* LESS_THAN  */
    GREATER_EQUAL = 279,           /* GREATER_EQUAL  */
    LESS_EQUAL = 280,              /* LESS_EQUAL  */
    EQUAL = 281,                   /* EQUAL  */
    NOT = 282,                     /* NOT  */
    ASSIGN = 283,                  /* ASSIGN  */
    FOR = 284,                     /* FOR  */
    WHILE = 285,                   /* WHILE  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    COLON = 288,                   /* COLON  */
    OUTPUT = 289,                  /* OUTPUT  */
    LPAREN = 290,                  /* LPAREN  */
    RPAREN = 291,                  /* RPAREN  */
    OR = 292,                      /* OR  */
    INPUT = 293                    /* INPUT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "setlang.y"

    char    *sval;
    int     ival;
    char    **vars;
    struct u_number_list {
        int *vars;
        int count;
    } u_number_list;

    struct  u_var_list {
        char    **vars;
        int     count;
       }        u_var_list;

#line 117 "setlang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SETLANG_TAB_H_INCLUDED  */
