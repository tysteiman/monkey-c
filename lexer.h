#ifndef MONKEY_LEXER_H
#define MONKEY_LEXER_H

typedef struct Lexer {
    char *input;        // source code
    int   position;     // current pos
    int   readPosition; // read pos (pos + 1)
    char  ch;           // current char at pos
} lexer_t;

void newLexer(char *input, lexer_t *l);
void readChar(lexer_t *l);

#endif
