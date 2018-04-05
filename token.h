#ifndef MONKEY_TOKEN_H
#define MONKEY_TOKEN_H

#define TOK_ILLEGAL   "ILLEGAL"
#define TOK_EOF       "EOF"
#define TOK_IDENT     "IDENT"
#define TOK_INT       "INT"
#define TOK_ASSIGN    "="
#define TOK_PLUS      "+"
#define TOK_COMMA     ","
#define TOK_SEMICOLON ";"
#define TOK_LPAREN    "("
#define TOK_RPAREN    ")"
#define TOK_LBRACE    "{"
#define TOK_RBRACE    "}"
#define TOK_MINUS     "-"
#define TOK_BANG      "!"
#define TOK_ASTERISK  "*"
#define TOK_SLASH     "/"
#define TOK_LT        "<"
#define TOK_GT        ">"
#define TOK_FUNCTION  "FUNCTION"
#define TOK_LET       "LET"
#define TOK_TRUE      "TRUE"
#define TOK_FALSE     "FALSE"
#define TOK_IF        "IF"
#define TOK_ELSE      "ELSE"
#define TOK_RETURN    "RETURN"
#define TOK_EQ        "=="
#define TOK_NOT_EQ    "!="

/**
 * Main structure that represents our tokens that
 * are used throughout the interpreter
 */
typedef struct Token {
    char *type;    // token type i.e. IDENT
    char *literal; // token literal i.e. foo
} token_t;

/**
 * Representation of keyword entries that map keywords
 * to class tokens
 */
typedef struct Keyword {
    char *keyword;
    char *tokenType;
} keyword_t;

char *lookupIdent(char *string);

#endif
