%{
	int count=0;
	int line_no = 0;
	// \/\/.* ;

%}
forward		\/
line		['\n']
single		{forward}{forward}.*
star		\*
not_star	[^\*]
not_forward	[^\/]
space		[ ]
tab		['\t']
hash		#.*
multi		{forward}{star}({space}|{tab}|{not_star}|{star}{not_forward}|{line})*{star}{forward}
string_literal  \".*\"
not_new_line 	[^'\n']
%%
{single}		{count++; 
				fprintf(yyout,"");
			}
{multi}			{count++; 
				fprintf(yyout,"");
			}
{hash}			{count++;
				fprintf(yyout,"");
			}
{string_literal}	{fprintf(yyout,"%s", yytext);
			}	
%%
int main(){
fprintf(yyout,"");
	printf("\nRemoving comments ...\n");
	yyin=fopen("test.php","r");
	yyout=fopen("op.php","w");
	yylex();
	printf("\nNumber of comments : %d\n",count);
	printf("\nNumber of lines: %d\n", yylineno);
	fclose(yyin);
	fclose(yyout);
	return(0);
}

