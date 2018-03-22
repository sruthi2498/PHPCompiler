/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    START = 258,
    END = 259,
    ID = 260,
    TYPE = 261,
    SEMIC = 262,
    COMMA = 263,
    EQ = 264,
    NUM = 265,
    PLUS = 266,
    MINUS = 267,
    STAR = 268,
    BY = 269,
    OPEN = 270,
    CLOSE = 271,
    PLUS_EQ = 272,
    MINUS_EQ = 273,
    STAR_EQ = 274,
    BY_EQ = 275,
    PLUS_PLUS = 276,
    MINUS_MINUS = 277,
    OPEN_SQ = 278,
    CLOSE_SQ = 279,
    OPEN_B = 280,
    CLOSE_B = 281,
    IF = 282,
    ELSE = 283,
    ELSEIF = 284,
    WHILE = 285,
    FOR = 286,
    CONTINUE = 287,
    BREAK = 288,
    RETURN = 289,
    LT = 290,
    GT = 291,
    LTE = 292,
    GTE = 293,
    EQ_TO = 294,
    NOT_EQ_TO = 295,
    OR = 296,
    AND = 297,
    ECHO = 298,
    DOT = 299,
    DOUBLE = 300,
    SINGLE = 301,
    LETTER = 302,
    STRING = 303
  };
#endif
/* Tokens.  */
#define START 258
#define END 259
#define ID 260
#define TYPE 261
#define SEMIC 262
#define COMMA 263
#define EQ 264
#define NUM 265
#define PLUS 266
#define MINUS 267
#define STAR 268
#define BY 269
#define OPEN 270
#define CLOSE 271
#define PLUS_EQ 272
#define MINUS_EQ 273
#define STAR_EQ 274
#define BY_EQ 275
#define PLUS_PLUS 276
#define MINUS_MINUS 277
#define OPEN_SQ 278
#define CLOSE_SQ 279
#define OPEN_B 280
#define CLOSE_B 281
#define IF 282
#define ELSE 283
#define ELSEIF 284
#define WHILE 285
#define FOR 286
#define CONTINUE 287
#define BREAK 288
#define RETURN 289
#define LT 290
#define GT 291
#define LTE 292
#define GTE 293
#define EQ_TO 294
#define NOT_EQ_TO 295
#define OR 296
#define AND 297
#define ECHO 298
#define DOT 299
#define DOUBLE 300
#define SINGLE 301
#define LETTER 302
#define STRING 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
