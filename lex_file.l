%{
    #include "y.tab.h"
    void yyerror(const char *);
%}
%%
"<?php"    return START;
"?>"		return END;
"int"           return TYPE;
"float"       return TYPE;
"char"       return TYPE;
"void"         return TYPE;
"+="           return PLUS_EQ;
"-="           return MINUS_EQ;
"*="           return STAR_EQ;
"/="           return BY_EQ;
"++"           return PLUS_PLUS;
"--"           return MINUS_MINUS;
"="           return EQ;
";"           return SEMIC;
","           return COMMA;
"."				return DOT;
"\""		return DOUBLE;
"\'"		return SINGLE; 
"+"           return PLUS;
"-"           return MINUS;
"*"           return STAR;
"/"           return BY;
"("           return OPEN;
")"           return CLOSE;
"["           return OPEN_SQ;
"]"           return CLOSE_SQ;
"{"        return OPEN_B;
"}"        return CLOSE_B;
"<"        return LT;
">"        return GT;
"<="        return LTE;
">="        return GTE;
"=="        return EQ_TO;
"!="        return NOT_EQ_TO;
"while"        		return WHILE;
"for"         		return FOR;
"if"        		return IF;
"else"         		return ELSE;
"elseif"      		return ELSEIF;
"continue"     		return CONTINUE;
"break"        		return BREAK;
"return"    		return RETURN;
"echo"				return ECHO;
"||"        		return OR;
"&&"        		return AND;
[ \t\n]			;
"$"[a-zA-Z][a-zA-Z0-9_]*    return ID;
[0-9]+       		return NUM;
[a-zA-Z]			return LETTER;
[a-zA-Z0-9][a-zA-Z0-9 \t]*		return STRING;
.            {
            yyerror("Invalid Character");
            return *yytext;
        }



