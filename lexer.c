#include <string.h>
#include <stdio.h>

#include "lexer.h"
#include "token.h"

void readChar(lexer_t *l)
{
    if (l->readPosition >= strlen(l->input))
        {
            l->ch = 0;
        }
    else
        {
            char ch = l->input[l->readPosition];
            l->ch = ch;
        }

    l->position = l->readPosition;
    ++l->readPosition;
}

void newLexer(char *input, lexer_t *l)
{
    l->input = input;
    readChar(l);
}

token_t newToken(char *type, char *literal)
{
    token_t token = {type, literal};
    return token;
}
