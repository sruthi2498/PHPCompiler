%{
	#include<stdio.h>
        #include "cd_hash.h"
	void yyerror(const char *);
	int yylex();
	char st[100][10];
	int top=0;
	extern char *yytext;

%}
%token START END ID TYPE SEMIC COMMA EQ NUM PLUS MINUS STAR BY OPEN CLOSE PLUS_EQ MINUS_EQ STAR_EQ BY_EQ PLUS_PLUS MINUS_MINUS OPEN_SQ CLOSE_SQ OPEN_B CLOSE_B IF ELSE ELSEIF WHILE FOR CONTINUE BREAK RETURN LT GT LTE GTE EQ_TO NOT_EQ_TO OR AND ECHO DOT DOUBLE SINGLE LETTER STRING

%%
P   	: Q	{printf("valid\n");YYACCEPT;}
		;
Q 		: START Stmt END
		;
compound_stmt  		: OPEN_B Stmt CLOSE_B
					;
Stmt 	: E SEMIC Stmt
		| AssignExpr Stmt
		| compound_stmt Stmt
		| selection_stmt Stmt
		| iteration_stmt Stmt
		| echo_stmt Stmt
		|
		;
selection_stmt  :  IF OPEN cond CLOSE compound_stmt 
				| IF OPEN cond CLOSE compound_stmt ELSE compound_stmt
				| IF OPEN cond CLOSE  compound_stmt ElseIfStatement ELSE  compound_stmt
				;
ElseIfStatement : ELSEIF OPEN cond CLOSE compound_stmt ElseIfStatement 
				| ELSEIF OPEN cond CLOSE compound_stmt 
				;
iteration_stmt  : FOR OPEN ForAssignExpr SEMIC cond SEMIC UnaryE CLOSE compound_stmt
				| FOR OPEN ForAssignExpr SEMIC cond SEMIC ForAssignExpr CLOSE compound_stmt
				;

iteration_stmt 	: FOR OPEN MultipleAssignExpr SEMIC MultipleForcond SEMIC MultipleAssignExpr CLOSE compound_stmt 
				;
MultipleAssignExpr  : 	ForAssignExpr MAE
					| UnaryE MAE
					;
MAE : COMMA ForAssignExpr MAE
	| COMMA UnaryE MAE
	|
	;			
MultipleForcond : cond MFC
				;
MFC : COMMA cond MFC
	|
	;
echo_stmt 	: ECHO ConcatenatedText SEMIC
			| ECHO OPEN ConcatenatedText CLOSE SEMIC
			;
ConcatenatedText : ConcatenatedText dot_text
				| E	
				| STRING 
				;
dot_text : DOT STRING
		 | DOT E
		 ;

cond 		:  expr 
			| expr logOp expr
			;

expr 	: relexp 
		| logexp 
		;
relexp 	: E relOp E
		;
logexp  : E logOp E
		;
logOp 	: OR 
		| AND
		;
relOp  	: LT 
		| GT 
		| LTE 
		| GTE 
		| NOT_EQ_TO
		| EQ_TO
		;
AssignExpr 	: ID {push(); printf("yytext is : %s\n ", yytext);} EQ E {genCode_assign();} SEMIC 
			;
ForAssignExpr : ID EQ E
			;
E		: E {push();} PLUS T {genCode_temp();}
		| E {push();} MINUS T {genCode_temp();} 
		| T
		; 
T		: T {push();} STAR F {genCode_temp();} 
		| T {push();} BY F {genCode_temp();}
		| F
		;
F 		: OPEN E CLOSE	
		| NUM {push();}
		| ID {push();}
		| UnaryE 
		| ID {push();} u_op Unary_op
		;
Unary_op : ID {push(); genCode_unary();}
		| NUM {push(); genCode_unary();}
		| OPEN E CLOSE
		;
u_op  	: PLUS_EQ
		| MINUS_EQ 
		| STAR_EQ 
		| BY_EQ
		;
UnaryE 	: PLUS_PLUS ID 
		| ID PLUS_PLUS  
		| MINUS_MINUS ID
		| ID MINUS_MINUS
		;
%%
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

push(){
  printf("Current top of stack : %s and pushing %s . Size of stack : %d \n", st[top], yytext, top);
  strcpy(st[++top],yytext);
 }


genCode_unary() {
	printf("unary ");
	printf(" top of stack is %s . Size of stack : %d \n", st[top], top);
}

genCode_temp() {
	printf("expression ");
	printf(" top of stack is %s . Size of stack : %d \n", st[top], top);
}

genCode_assign() {
	printf("assignment ");
	printf(" top of stack is %s . Size of stack : %d \n", st[top], top);

	printf("%s = %s\n",st[top-2],st[top]);
	top-=2;


}

