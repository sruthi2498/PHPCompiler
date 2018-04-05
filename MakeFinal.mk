all : lex_config yacc_config main
lex_config : lex_file.l
			lex lex_file.l
yacc_config : yacc_file.y
			yacc -d -v yacc_file.y
main : cd_hash.c lex.yy.c y.tab.c y.tab.h
		gcc cd_hash.c lex.yy.c y.tab.c -ll -o main
clean:
	rm -f y.output lex.yy.c y.tab.c y.tab.h main
