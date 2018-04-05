#include <string.h>

#include "token.h"

/**
 * Actual registry of our keywords to constants
 */
keyword_t keywords[] = {
    {"fn",     TOK_FUNCTION},
    {"let",    TOK_LET},
    {"if",     TOK_IF},
    {"else",   TOK_ELSE},
    {"true",   TOK_TRUE},
    {"false",  TOK_FALSE},
    {"return", TOK_RETURN}
};

char *lookupIdent(char *string)
{
    for (int i = 0; i < (sizeof(keywords) / sizeof(keyword_t)); i++)
        {
            if (strcmp(keywords[i].keyword, string) == 0)
                {
                    return keywords[i].tokenType;
                }
        }

    return TOK_IDENT;
}
