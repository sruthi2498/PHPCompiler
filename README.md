# PHPCompiler

# To run :

    $ make
    $ ./main

# Files:

### lex_file.c
    Lexer file - Returns tokens to parser when input text matches.
    Prints invalid character if text not matched.
    Ignores comments, whitespaces and newlines.
    
### yacc_file.c
    Parser - Returns whether input was parsed successfully (valid) or not.
    Contains the grammar for valid PHP code.
    Prints errors along with line number on invalid input.
    
    
### remove.l
    Lexer file - Prodcues a copy of the input php file without comments
