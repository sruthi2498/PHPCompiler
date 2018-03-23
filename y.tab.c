/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacc_file.y"
	#include<stdio.h>
        #include "cd_hash.h"
	void yyerror(const char *);
	int yylex();
#line 26 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define START 257
#define END 258
#define ID 259
#define TYPE 260
#define SEMIC 261
#define COMMA 262
#define EQ 263
#define NUM 264
#define PLUS 265
#define MINUS 266
#define STAR 267
#define BY 268
#define OPEN 269
#define CLOSE 270
#define PLUS_EQ 271
#define MINUS_EQ 272
#define STAR_EQ 273
#define BY_EQ 274
#define PLUS_PLUS 275
#define MINUS_MINUS 276
#define OPEN_SQ 277
#define CLOSE_SQ 278
#define OPEN_B 279
#define CLOSE_B 280
#define IF 281
#define ELSE 282
#define ELSEIF 283
#define WHILE 284
#define FOR 285
#define CONTINUE 286
#define BREAK 287
#define RETURN 288
#define LT 289
#define GT 290
#define LTE 291
#define GTE 292
#define EQ_TO 293
#define NOT_EQ_TO 294
#define OR 295
#define AND 296
#define ECHO 297
#define DOT 298
#define DOUBLE 299
#define SINGLE 300
#define LETTER 301
#define STRING 302
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    3,    2,    2,    2,    2,    2,    2,    2,
    6,    6,    6,   10,   10,    7,    7,    7,   13,   13,
   15,   15,   15,   14,   16,   16,    8,    8,    8,   17,
   17,   17,   17,    9,    9,   18,   18,   20,   21,   19,
   19,   22,   22,   22,   22,   22,   22,    5,   11,    4,
    4,    4,   23,   23,   23,   24,   24,   24,   24,   24,
   25,   25,   25,   26,   26,   26,   26,   12,   12,   12,
   12,
};
static const YYINT yylen[] = {                            2,
    1,    3,    3,    3,    2,    2,    2,    2,    2,    0,
    5,    7,    8,    6,    5,    9,    9,    9,    2,    2,
    3,    3,    0,    2,    3,    0,    3,    3,    5,    3,
    3,    1,    1,    1,    3,    1,    1,    3,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    4,    3,    3,
    3,    1,    3,    3,    1,    3,    1,    1,    1,    1,
    3,    3,    5,    1,    1,    1,    1,    2,    2,    2,
    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,   57,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   59,
    0,   55,   60,    0,   64,   65,   66,   67,   69,   71,
    0,    0,    0,   68,   70,    0,    0,    0,    0,   33,
    0,    0,    2,    6,    0,    0,    0,    5,    7,    8,
    9,    0,    0,    0,   61,   62,    0,   56,    3,    0,
    0,    0,   36,   37,    0,    0,    0,    0,    0,    0,
   27,   28,    0,    4,    0,    0,   53,   54,   48,    0,
   42,   43,   44,   45,   47,   46,   40,   41,    0,    0,
    0,    0,    0,    0,    0,   19,   20,    0,    0,   30,
    0,   63,    0,    0,    0,   35,    0,    0,    0,    0,
    0,    0,   29,    0,    0,    0,    0,   21,   22,    0,
   24,    0,   12,    0,    0,    0,    0,    0,    0,    0,
    0,   13,    0,    0,   25,    0,    0,   17,   16,   18,
    0,   14,
};
static const YYINT yydgoto[] = {                          2,
    3,   13,   14,   15,   16,   17,   18,   19,   61,  116,
   66,   20,   68,  112,   96,  121,   42,   62,   89,   63,
   64,   90,   21,   22,   23,   31,
};
static const YYINT yysindex[] = {                      -228,
 -169,    0,    0,  -17,    0,  -44, -254, -237, -169, -227,
 -220, -256, -226, -169, -105, -169, -169, -169, -169,    0,
 -253,    0,    0,  -44,    0,    0,    0,    0,    0,    0,
 -190,  -24, -100,    0,    0, -223,  -44, -178, -252,    0,
  -38, -257,    0,    0, -169,  -44,  -44,    0,    0,    0,
    0,  -44,  -44,  -32,    0,    0,  -44,    0,    0,  -53,
 -211, -153,    0,    0, -174,  -77, -194, -186, -100, -261,
    0,    0, -248,    0, -253, -253,    0,    0,    0,   -5,
    0,    0,    0,    0,    0,    0,    0,    0,  -44,  -44,
 -208,  -44,  -44,  -44, -178,    0,    0,  -44, -170,    0,
  -49,    0,  -49,  -49,  -20,    0,  -49, -168, -194, -194,
 -166, -162,    0, -208, -158, -179, -178,    0,    0,  -44,
    0, -178,    0,  -44, -208, -155, -151, -166, -194, -140,
 -106,    0, -208, -208,    0, -208, -208,    0,    0,    0,
 -101,    0,
};
static const YYINT yyrindex[] = {                         0,
  -64,    0,    0, -121,    0,    0,    0,    0, -163,    0,
    0,    0,    0, -218,    0, -218, -218, -218, -218,    0,
 -157,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -141,    0,    0,    0,    0,    0,    0,    0,    0,
  -94,    0,    0,    0, -218,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -139,    0,    0,    0,    0, -231,    0,  -94,    0,
    0,    0,    0,    0, -103,  -93,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -235,    0,  -87,  -51, -203,    0,  -40,    0, -231, -231,
  -55,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -55,  -56,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -58,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  162,  -89,   -6,    0,    0,    0,    0,  -60,   77,
  -52,  -37,  104,    0,  -57,  107,  214,  172,  208,    0,
    0,    0,  220,  216,    0,    0,
};
#define YYTABLESIZE 270
static const YYINT yytable[] = {                         33,
   67,  105,   32,   72,   34,   41,   32,    5,   99,   97,
   32,    5,   39,   52,   53,    5,    6,   54,    7,    8,
    6,   35,    7,    8,  123,   31,    7,    8,    1,   23,
   60,   43,   69,  108,   31,  132,   73,  111,   23,   10,
   73,   37,  109,  138,  139,   40,  140,  141,   38,   40,
   80,  118,  119,  100,   11,   11,   59,  110,   91,  128,
   11,   10,   31,  131,  126,   11,  101,   95,   55,  129,
    9,   11,   11,   56,   98,   11,   11,   11,   57,  127,
   65,   11,  103,  104,   67,   60,  107,   60,   93,    4,
  113,   60,  117,   11,    5,  120,    7,    8,  122,    6,
   29,   30,  125,   52,   52,    7,    8,   52,   52,    9,
  124,   10,   52,   60,  133,   11,   10,   60,  134,   58,
   58,   34,   34,   58,   58,   58,   58,   12,   58,  136,
   34,   52,   52,   52,   52,   52,   52,   52,   52,   58,
   52,   87,   88,   58,   58,   58,   58,   58,   58,   58,
   58,   58,   58,   58,   58,   45,   58,   50,   50,   46,
   47,   50,   50,  137,   46,   47,   50,   51,   51,   58,
   36,   51,   51,   39,   39,   44,   51,   48,   49,   50,
   51,  115,   39,   94,   95,   50,   50,   50,   50,   50,
   50,   50,   50,   10,   50,   51,   51,   51,   51,   51,
   51,   51,   51,   32,   51,   26,   74,   39,   39,   38,
   38,   46,   47,   23,   32,   46,   47,  142,   38,    5,
   49,   49,   71,   15,    6,  130,   46,   47,   79,   49,
    7,    8,   46,   47,  135,   81,   82,   83,   84,   85,
   86,   87,   88,   38,   38,   24,   25,   26,   27,   28,
   29,   30,   70,   25,   26,   27,   28,   29,   30,   46,
   47,  114,  115,  106,  102,   75,   76,   77,   78,   92,
};
static const YYINT yycheck[] = {                          6,
   38,   91,  259,  261,  259,   12,  259,  264,  270,   67,
  259,  264,  269,  267,  268,  264,  269,   24,  275,  276,
  269,  259,  275,  276,  114,  261,  275,  276,  257,  261,
   37,  258,   39,   94,  270,  125,  298,   98,  270,  258,
  298,  269,   95,  133,  134,  302,  136,  137,  269,  302,
   57,  109,  110,  302,  258,  259,  280,   95,  270,  120,
  264,  280,  298,  124,  117,  269,   73,  262,  259,  122,
  279,  275,  276,  264,  261,  279,  280,  281,  269,  117,
  259,  285,   89,   90,  122,   92,   93,   94,  263,  259,
  261,   98,  261,  297,  264,  262,  275,  276,  261,  269,
  275,  276,  282,  261,  262,  275,  276,  265,  266,  279,
  269,  281,  270,  120,  270,  285,  280,  124,  270,  261,
  262,  261,  262,  265,  266,  267,  268,  297,  270,  270,
  270,  289,  290,  291,  292,  293,  294,  295,  296,  261,
  298,  295,  296,  265,  266,  267,  268,  289,  290,  291,
  292,  293,  294,  295,  296,  261,  298,  261,  262,  265,
  266,  265,  266,  270,  265,  266,  270,  261,  262,  270,
    9,  265,  266,  261,  262,   14,  270,   16,   17,   18,
   19,  283,  270,  261,  262,  289,  290,  291,  292,  293,
  294,  295,  296,  258,  298,  289,  290,  291,  292,  293,
  294,  295,  296,  298,  298,  261,   45,  295,  296,  261,
  262,  265,  266,  270,  259,  265,  266,  141,  270,  264,
  261,  262,  261,  282,  269,  122,  265,  266,  261,  270,
  275,  276,  265,  266,  128,  289,  290,  291,  292,  293,
  294,  295,  296,  295,  296,  263,  271,  272,  273,  274,
  275,  276,   39,  271,  272,  273,  274,  275,  276,  265,
  266,  282,  283,   92,  270,   46,   47,   52,   53,   62,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 302
#define YYUNDFTOKEN 331
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"START","END","ID","TYPE","SEMIC",
"COMMA","EQ","NUM","PLUS","MINUS","STAR","BY","OPEN","CLOSE","PLUS_EQ",
"MINUS_EQ","STAR_EQ","BY_EQ","PLUS_PLUS","MINUS_MINUS","OPEN_SQ","CLOSE_SQ",
"OPEN_B","CLOSE_B","IF","ELSE","ELSEIF","WHILE","FOR","CONTINUE","BREAK",
"RETURN","LT","GT","LTE","GTE","EQ_TO","NOT_EQ_TO","OR","AND","ECHO","DOT",
"DOUBLE","SINGLE","LETTER","STRING",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : P",
"P : Q",
"Q : START Stmt END",
"compound_stmt : OPEN_B Stmt CLOSE_B",
"Stmt : E SEMIC Stmt",
"Stmt : AssignExpr Stmt",
"Stmt : compound_stmt Stmt",
"Stmt : selection_stmt Stmt",
"Stmt : iteration_stmt Stmt",
"Stmt : echo_stmt Stmt",
"Stmt :",
"selection_stmt : IF OPEN cond CLOSE compound_stmt",
"selection_stmt : IF OPEN cond CLOSE compound_stmt ELSE compound_stmt",
"selection_stmt : IF OPEN cond CLOSE compound_stmt ElseIfStatement ELSE compound_stmt",
"ElseIfStatement : ELSEIF OPEN cond CLOSE compound_stmt ElseIfStatement",
"ElseIfStatement : ELSEIF OPEN cond CLOSE compound_stmt",
"iteration_stmt : FOR OPEN ForAssignExpr SEMIC cond SEMIC UnaryE CLOSE compound_stmt",
"iteration_stmt : FOR OPEN ForAssignExpr SEMIC cond SEMIC ForAssignExpr CLOSE compound_stmt",
"iteration_stmt : FOR OPEN MultipleAssignExpr SEMIC MultipleForcond SEMIC MultipleAssignExpr CLOSE compound_stmt",
"MultipleAssignExpr : ForAssignExpr MAE",
"MultipleAssignExpr : UnaryE MAE",
"MAE : COMMA ForAssignExpr MAE",
"MAE : COMMA UnaryE MAE",
"MAE :",
"MultipleForcond : cond MFC",
"MFC : COMMA cond MFC",
"MFC :",
"echo_stmt : ECHO E SEMIC",
"echo_stmt : ECHO ConcatenatedText SEMIC",
"echo_stmt : ECHO OPEN ConcatenatedText CLOSE SEMIC",
"ConcatenatedText : ConcatenatedText DOT STRING",
"ConcatenatedText : ConcatenatedText DOT E",
"ConcatenatedText : E",
"ConcatenatedText : STRING",
"cond : expr",
"cond : expr logOp expr",
"expr : relexp",
"expr : logexp",
"relexp : E relOp E",
"logexp : E logOp E",
"logOp : OR",
"logOp : AND",
"relOp : LT",
"relOp : GT",
"relOp : LTE",
"relOp : GTE",
"relOp : NOT_EQ_TO",
"relOp : EQ_TO",
"AssignExpr : ID EQ E SEMIC",
"ForAssignExpr : ID EQ E",
"E : E PLUS T",
"E : E MINUS T",
"E : T",
"T : T STAR F",
"T : T BY F",
"T : F",
"F : OPEN E CLOSE",
"F : NUM",
"F : ID",
"F : UnaryE",
"F : Unary_op",
"Unary_op : ID u_op ID",
"Unary_op : ID u_op NUM",
"Unary_op : ID u_op OPEN E CLOSE",
"u_op : PLUS_EQ",
"u_op : MINUS_EQ",
"u_op : STAR_EQ",
"u_op : BY_EQ",
"UnaryE : PLUS_PLUS ID",
"UnaryE : ID PLUS_PLUS",
"UnaryE : MINUS_MINUS ID",
"UnaryE : ID MINUS_MINUS",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 111 "yacc_file.y"
extern FILE *yyin; 
extern int yylineno;
extern FILE *yyout;
void yyerror(const char * p){
	printf("\nError : %s at line %d \n",p,yylineno);
}

int main(){
	FILE *myfile = fopen("test.php", "r");
	yyin = myfile;
	if(!yyparse()){
		printf("\nParsed Successfully\n");
	}
	else printf("\nParsing Unsuccessful\n");
        printf("\n\n#################SYMBOL TABLE#########################\n\n\n");
        display();
        printf("\n\n######################################################\n\n\n");
	return 0;

	
}
#line 409 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 10 "yacc_file.y"
	{printf("valid\n");YYACCEPT;}
break;
#line 615 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
