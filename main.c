#include <stdio.h>

#include "lexer.h"
#include "token.h"

int main(int argc, char **arg)
{
    lexer_t l;
    newLexer("1 + 2;", &l);

    printf("LEXER INPUT: '%s'\n", l.input);
    printf("LEXER POSITION: %d\n", l.position);
    printf("LEXER READ POSITION: %d\n", l.readPosition);
    printf("LEXER CHAR: %c\n", l.ch);

    token_t n = newToken(TOK_IDENT, "foobar");
    printf("The new token: %s\n", n.type);


    return 0;
}
