#ifndef MONKEY_LEXER_H
#define MONKEY_LEXER_H

#include "token.h"

typedef struct Lexer {
    char *input;        // source code
    int   position;     // current pos
    int   readPosition; // read pos (pos + 1)
    char  ch;           // current char at pos
} lexer_t;

void newLexer(char *input, lexer_t *l);
void readChar(lexer_t *l);
token_t newToken(char *type, char *ch);
token_t nextToken(lexer_t *l);
char * string(char ch);

#endif
