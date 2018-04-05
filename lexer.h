#ifndef MONKEY_LEXER_H
#define MONKEY_LEXER_H

typedef struct Lexer {
    char *input;        // source code
    int   position;     // current pos
    int   readPosition; // read pos (pos + 1)
    char  ch;           // current char at pos
}

#endif
