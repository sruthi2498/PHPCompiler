%{
    #include "y.tab.h"
    #include "cd_hash.h"
    void yyerror(const char *);
%}
%%
"/*"([^*]|\*+[^*/])*\*+"/" 		;
"//".* 		;
"#".* 		;
"<?php"    {insert(compute("<?php"),"<?php","START");return START;}
"?>"		{insert(compute("?>"),"?>","END");return END;}
"+="           {insert(compute("+="),"+=","ARITH_ASSN");return PLUS_EQ;}
"-="           {insert(compute("-="),"-=","ARITH_ASSN");return MINUS_EQ;}
"*="           {insert(compute("*="),"*=","ARITH_ASSN");return STAR_EQ;}
"/="           {insert(compute("/="),"/=","ARITH_ASSN");return BY_EQ;}
"++"           {insert(compute("++"),"++","UNARY");return PLUS_PLUS;}
"--"           {insert(compute("--"),"--","UNARY");return MINUS_MINUS;}
"="           {insert(compute("="),"=","ASSN");return EQ;}
";"           {insert(compute(";"),";","");return SEMIC;}
","           {insert(compute(","),",","");return COMMA;}
"."		{insert(compute("."),".","");return DOT;}
"\""		{insert(compute("\""),"\"","COMMENT");return DOUBLE;}
"\'"		{insert(compute("\'"),"\'","COMMENT");return SINGLE;} 
"+"           {insert(compute("+"),"+","ARITH_OP");return PLUS;}
"-"           {insert(compute("-"),"-","ARITH_OP");return MINUS;}
"*"           {insert(compute("*"),"*","ARITH_OP");return STAR;}
"/"           {insert(compute("/"),"/","ARITH_OP");return BY;}
"("           {insert(compute("("),"(","");return OPEN;}
")"           {insert(compute(")"),")","");return CLOSE;}
"["           {insert(compute("["),"[","");return OPEN_SQ;}
"]"           {insert(compute("]"),"]","");return CLOSE_SQ;}
"{"        {insert(compute("{"),"{","");return OPEN_B;}
"}"        {insert(compute("}"),"}","");return CLOSE_B;}
"<"        {insert(compute("<"),"<","RELOP");return LT;}
">"        {insert(compute(">"),">","RELOP");return GT;}
"<="        {insert(compute("<="),"<=","RELOP");return LTE;}
">="        {insert(compute(">="),">=","RELOP");return GTE;}
"=="        {insert(compute("=="),"==","RELOP");return EQ_TO;}
"!="        {insert(compute("!="),"!=","RELOP");return NOT_EQ_TO;}
"while"        		{insert(compute("while"),"while","KEYWORD");return WHILE;}
"for"         		{insert(compute("for"),"for","KEYWORD");return FOR;}
"if"        		{insert(compute("if"),"if","KEYWORD");return IF;}
"else"         		{insert(compute("else"),"else","KEYWORD");return ELSE;}
"elseif"      		{insert(compute("elseif"),"elseif","KEYWORD");return ELSEIF;}
"continue"     		{insert(compute("continue"),"continue","KEYWORD");return CONTINUE;}
"break"        		{insert(compute("break"),"break","KEYWORD");return BREAK;}
"return"    		{insert(compute("return"),"return","KEYWORD");return RETURN;}
"echo"			{insert(compute("echo"),"echo","KEYWORD");return ECHO;}
"||"        		{insert(compute("||"),"||","LOGICAL_OP");return OR;}
"&&"        		{insert(compute("&&"),"&&","LOGICAL_OP");return AND;}
[ \t\n]			;
"$"[a-zA-Z][a-zA-Z0-9_]*    {insert(compute(yytext),yytext,"ID");return ID;}
[0-9]+       		{insert(compute(yytext),yytext,"NUM");return NUM;}
[a-zA-Z]			{insert(compute(yytext),yytext,"LETTER");return LETTER;}
\".*\"		{insert(compute(yytext),yytext,"STRING");return STRING;}
\'.*\'		{insert(compute(yytext),yytext,"STRING");return STRING;}
.            {
            yyerror("Invalid Character");
            return *yytext;
        }



