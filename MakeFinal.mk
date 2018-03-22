all : lex_config yacc_config main
lex_config : lex_file.l
			lex lex_file.l
yacc_config : yacc_file.y
			yacc -d yacc_file.y
main : lex.yy.c y.tab.c y.tab.h
		gcc lex.yy.c y.tab.c -ll -o main
clean:
	rm -f lex.yy.c y.tab.c y.tab.h main