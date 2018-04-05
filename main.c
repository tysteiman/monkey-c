#include <stdio.h>

#include "token.h"

int main(int argc, char **arg)
{
    printf("Function Keyword -> %s\n", lookupIdent("fn"));
    printf("BANG Keyword -> %s\n", lookupIdent("bang"));
    printf("TRUE Keyword -> %s\n", lookupIdent("true"));
    return 0;
}
