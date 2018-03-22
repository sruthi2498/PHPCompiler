all : clean lex_config prepCode
lex_config : remove.l
			lex remove.l
prepCode : lex.yy.c 
		gcc lex.yy.c -ll -w -o prepCode
clean:
	rm -f lex.yy.c prepCode