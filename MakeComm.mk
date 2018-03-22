all : clean lex_config
lex_config : remove.l
			lex remove.l
main : lex.yy.c 
		gcc lex.yy.c -ll -o prepCode
clean:
	rm -f lex.yy.c prepCode