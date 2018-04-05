#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

char * string(char ch)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = ch;
    str[1] = '\0';

    return str;
}

token_t nextToken(lexer_t *l)
{
    token_t token;

    switch (l->ch)
        {
        case '=':
            token = newToken(TOK_ASSIGN, &l->ch);
            break;
        case ';':
            token = newToken(TOK_SEMICOLON, string(l->ch));
            break;
        case '(':
            token = newToken(TOK_LPAREN, string(l->ch));
            break;
        case ')':
            token = newToken(TOK_RPAREN, &l->ch);
            break;
        case '{':
            token = newToken(TOK_LBRACE, &l->ch);
            break;
        case '}':
            token = newToken(TOK_RBRACE, &l->ch);
            break;
        case ',':
            token = newToken(TOK_COMMA, &l->ch);
            break;
        case '+':
            token = newToken(TOK_PLUS, &l->ch);
            break;
        case '-':
            token = newToken(TOK_MINUS, &l->ch);
            break;
        case '!':
            token = newToken(TOK_BANG, &l->ch);
            break;
        case '*':
            token = newToken(TOK_ASTERISK, &l->ch);
            break;
        case '/':
            token = newToken(TOK_SLASH, &l->ch);
            break;
        case '<':
            token = newToken(TOK_LT, &l->ch);
            break;
        case '>':
            token = newToken(TOK_GT, &l->ch);
            break;
        case 0:
            token.literal = "";
            token.type    = TOK_EOF;
            break;
        default:
            printf("ERROR: NOT PARSING THESE YET: %c\n", l->ch);
            exit(EXIT_FAILURE);
        }

    readChar(l);

    return token;
}

token_t newToken(char *type, char *literal)
{
    token_t token = {type, literal};
    return token;
}
