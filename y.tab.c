#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacc_file.y"
	#include<stdio.h>
	void yyerror(const char *);
	int yylex();
#line 23 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
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
static const short yylhs[] = {                           -1,
    0,    1,    3,    2,    2,    2,    2,    2,    2,    2,
    6,    6,    6,   10,   10,    7,    7,    7,    7,   13,
   13,   14,   14,   15,   15,    8,    8,    8,   16,   16,
    9,    9,   17,   17,   19,   20,   18,   18,   21,   21,
   21,   21,   21,   21,    5,   11,    4,    4,    4,   22,
   22,   22,   23,   23,   23,   23,   23,   24,   24,   24,
   25,   25,   25,   25,   12,   12,   12,   12,
};
static const short yylen[] = {                            2,
    1,    3,    3,    3,    2,    2,    2,    2,    2,    0,
    5,    7,    8,    6,    5,    9,    9,    9,    9,    3,
    1,    3,    1,    3,    1,    3,    3,    5,    3,    1,
    1,    3,    1,    1,    3,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    4,    3,    3,    3,    1,    3,
    3,    1,    3,    1,    1,    1,    1,    3,    3,    5,
    1,    1,    1,    1,    2,    2,    2,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    1,    0,   54,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   56,
    0,   52,   57,    0,   61,   62,   63,   64,   66,   68,
    0,    0,    0,   65,   67,    0,    0,    0,    0,   30,
    0,    0,    2,    6,    0,    0,    0,    5,    7,    8,
    9,    0,    0,    0,   58,   59,    0,   53,    3,    0,
    0,    0,   33,   34,    0,    0,    0,    0,   26,   27,
    0,    4,    0,    0,   50,   51,   45,    0,   39,   40,
   41,   42,   44,   43,   37,   38,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   29,   60,    0,    0,    0,
   32,    0,    0,   23,    0,   20,   28,    0,    0,    0,
    0,    0,    0,   12,    0,    0,    0,    0,    0,   21,
   25,    0,    0,   22,    0,   13,    0,    0,    0,    0,
    0,    0,   17,   16,   18,    0,   24,   19,    0,   14,
};
static const short yydgoto[] = {                          2,
    3,   13,   14,   15,   16,   17,   18,   19,   61,  110,
   66,   20,   67,  105,  123,   42,   62,   87,   63,   64,
   88,   21,   22,   23,   31,
};
static const short yysindex[] = {                      -241,
 -186,    0,    0,  -36,    0,  -43, -230, -207, -186, -265,
 -203, -254, -184, -186, -142, -186, -186, -186, -186,    0,
 -233,    0,    0,  -43,    0,    0,    0,    0,    0,    0,
 -159,  -30, -115,    0,    0, -189,  -43, -151, -252,    0,
  -95, -253,    0,    0, -186,  -43,  -43,    0,    0,    0,
    0,  -43,  -43,  -42,    0,    0,  -43,    0,    0,  -81,
 -148, -219,    0,    0, -130, -107, -147, -268,    0,    0,
 -146,    0, -233, -233,    0,    0,    0,  -48,    0,    0,
    0,    0,    0,    0,    0,    0,  -43,  -43, -111,  -43,
  -43,  -43,  -43, -151,  -89,    0,    0, -127, -127, -108,
    0, -127,  -64,    0,  -57,    0,    0, -111,  -49,  -35,
 -141, -141,  -43,    0,  -43, -111, -214,  -45,  -22,    0,
    0, -251, -224,    0,  -20,    0, -111, -111, -111, -139,
 -111, -111,    0,    0,    0,  -69,    0,    0,  -34,    0,
};
static const short yyrindex[] = {                         0,
  -24,    0,    0,  -65,    0,    0,    0,    0,  -29,    0,
    0,    0,    0, -255,    0, -255, -255, -255, -255,    0,
 -149,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -164,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -255,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -206,    0,    0,    0,  -10,    0,    0,    0,    0,
    0,    0, -113, -103,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -101,  -97, -222,
    0, -182,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -28,    0,
};
static const short yygindex[] = {                         0,
    0,   51,  -88,   -6,    0,    0,    0,    0,  -21,  114,
  -85,  -98,  143,    0,    0,  217,  167,  196,    0,    0,
    0,  182,  178,    0,    0,
};
#define YYTABLESIZE 258
static const short yytable[] = {                         33,
  100,   95,   10,   37,   32,   41,   32,   70,  106,    5,
   94,    5,  119,  121,   39,    1,    6,   54,  129,  114,
    7,    8,    7,    8,   10,  118,  120,  126,   34,   71,
   60,  137,   33,   52,   53,   11,   11,  130,  133,  134,
  135,   11,  138,  139,   71,  131,   11,   40,   91,   40,
   78,   35,   11,   11,   31,   31,   11,   11,   11,   36,
   29,   30,   11,   31,   44,   38,   48,   49,   50,   51,
  103,  104,    4,   43,   11,   85,   86,    5,   46,   46,
   98,   99,    6,   60,  102,   60,   60,   46,    7,    8,
   59,  124,    9,  125,   10,   72,   55,   55,   11,   55,
   55,   55,   55,   55,   56,   55,   60,   65,   60,   57,
   12,   49,   49,   93,   94,   49,   49,  117,   45,  136,
   49,   89,   46,   47,   55,   55,   55,   55,   55,   55,
   55,   55,   91,    7,    8,    7,    8,   46,   47,   49,
   49,   49,   49,   49,   49,   49,   49,   47,   47,   46,
   47,   47,   47,   92,   58,   96,   47,   48,   48,   36,
   36,   48,   48,   35,   35,   69,   48,    9,   36,   46,
   47,  107,   35,  108,  109,   47,   47,   47,   47,   47,
   47,   47,   47,   46,   47,   48,   48,   48,   48,   48,
   48,   48,   48,   36,   36,   55,  111,   35,   35,   55,
   55,   55,   55,  112,  113,   29,   30,   79,   80,   81,
   82,   83,   84,   85,   86,   32,   46,   47,   77,  115,
    5,   97,   46,   47,  127,    6,   24,   73,   74,   75,
   76,    7,    8,   10,   25,   26,   27,   28,   29,   30,
   25,   26,   27,   28,   29,   30,  116,  128,  109,  132,
   10,   21,  140,   15,  122,   68,  101,   90,
};
static const short yycheck[] = {                          6,
   89,  270,  258,  269,  259,   12,  259,  261,   94,  264,
  262,  264,  111,  112,  269,  257,  269,   24,  270,  108,
  275,  276,  275,  276,  280,  111,  112,  116,  259,  298,
   37,  130,   39,  267,  268,  258,  259,  262,  127,  128,
  129,  264,  131,  132,  298,  270,  269,  302,  263,  302,
   57,  259,  275,  276,  261,  262,  279,  280,  281,    9,
  275,  276,  285,  270,   14,  269,   16,   17,   18,   19,
   92,   93,  259,  258,  297,  295,  296,  264,  261,  262,
   87,   88,  269,   90,   91,   92,   93,  270,  275,  276,
  280,  113,  279,  115,  281,   45,  261,  262,  285,  259,
  265,  266,  267,  268,  264,  270,  113,  259,  115,  269,
  297,  261,  262,  261,  262,  265,  266,  259,  261,  259,
  270,  270,  265,  266,  289,  290,  291,  292,  293,  294,
  295,  296,  263,  275,  276,  275,  276,  265,  266,  289,
  290,  291,  292,  293,  294,  295,  296,  261,  262,  265,
  266,  265,  266,  261,  270,  302,  270,  261,  262,  261,
  262,  265,  266,  261,  262,  261,  270,  279,  270,  265,
  266,  261,  270,  282,  283,  289,  290,  291,  292,  293,
  294,  295,  296,  265,  266,  289,  290,  291,  292,  293,
  294,  295,  296,  295,  296,  261,  261,  295,  296,  265,
  266,  267,  268,  261,  262,  275,  276,  289,  290,  291,
  292,  293,  294,  295,  296,  259,  265,  266,  261,  269,
  264,  270,  265,  266,  270,  269,  263,   46,   47,   52,
   53,  275,  276,  258,  271,  272,  273,  274,  275,  276,
  271,  272,  273,  274,  275,  276,  282,  270,  283,  270,
  280,  262,  139,  282,  112,   39,   90,   62,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 302
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

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
"DOUBLE","SINGLE","LETTER","STRING","illegal-symbol",
};
static const char *yyrule[] = {
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
"iteration_stmt : FOR OPEN MultipleAssignExpr SEMIC MultipleForcond SEMIC MultipleUnaryExpr CLOSE compound_stmt",
"MultipleAssignExpr : MultipleAssignExpr COMMA ForAssignExpr",
"MultipleAssignExpr : ForAssignExpr",
"MultipleForcond : MultipleForcond COMMA cond",
"MultipleForcond : cond",
"MultipleUnaryExpr : MultipleUnaryExpr COMMA UnaryE",
"MultipleUnaryExpr : UnaryE",
"echo_stmt : ECHO E SEMIC",
"echo_stmt : ECHO ConcatenatedText SEMIC",
"echo_stmt : ECHO OPEN ConcatenatedText CLOSE SEMIC",
"ConcatenatedText : ConcatenatedText DOT STRING",
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
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 108 "yacc_file.y"
extern FILE *yyin; 
extern int yylineno;
void yyerror(const char * p){
	printf("\nError : %s at line %d \n",p,yylineno);
}

main(){
	FILE *myfile = fopen("test.php", "r");
	yyin = myfile;
	if(!yyparse()){
		printf("\nParsed Successfully\n");
	}
	else printf("\nParsing Unsuccessful\n");
	return 0;

}
#line 385 "y.tab.c"

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
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

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

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
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
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
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

    yyerror("syntax error");

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
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
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
        if (yychar == 0) goto yyabort;
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
#line 9 "yacc_file.y"
	{printf("valid\n");YYACCEPT;}
break;
#line 591 "y.tab.c"
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
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
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
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
