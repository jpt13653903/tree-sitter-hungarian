// #define DEBUG
//------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
//------------------------------------------------------------------------------

#include "tree_sitter/parser.h"
#include "debug_macros.h"
//------------------------------------------------------------------------------

typedef enum TokenTypeTag{
    TOKEN_PREFIX,
    TOKEN_BODY,
    TOKEN_NORMAL,
    ERROR_SENTINEL,

    SCOPE,         // Optional once at the beginning
    PREFIX,        // Zero or many of
    TYPE,          // Only one of at the end
    TYPE_OR_PREFIX // May terminate the sequence, or have more following
} TokenType;
//------------------------------------------------------------------------------

void* tree_sitter_hungarian_external_scanner_create()
{
    return 0;
}
//------------------------------------------------------------------------------

void tree_sitter_hungarian_external_scanner_destroy(void* scanner)
{
}
//------------------------------------------------------------------------------

unsigned tree_sitter_hungarian_external_scanner_serialize(void* scanner, char* buffer)
{
    return 0;
}
//------------------------------------------------------------------------------

void tree_sitter_hungarian_external_scanner_deserialize(void* scanner, const char* buffer, unsigned length)
{
}
//------------------------------------------------------------------------------

static inline void advance(TSLexer* lexer)
{
    lexer->advance(lexer, false);
    debug("lookahead = %c", lexer->lookahead);
}
//------------------------------------------------------------------------------

static void identifier(TSLexer* lexer)
{
    while(!lexer->eof(lexer)){
        if(lexer->lookahead != '_' &&
           (lexer->lookahead < 'a' || lexer->lookahead > 'z') &&
           (lexer->lookahead < 'A' || lexer->lookahead > 'Z') &&
           (lexer->lookahead < '0' || lexer->lookahead > '9')){
            return;
        }
        advance(lexer);
    }
}
//------------------------------------------------------------------------------

static TokenType find_prefix(TSLexer* lexer)
{
    switch(lexer->lookahead){
        case 'G': case 'E': case 'M': case 'g':
            advance(lexer);
            if(lexer->lookahead == '_'){
                advance(lexer);
                return SCOPE;
            }
            return TOKEN_NORMAL;

        case 'm':
            advance(lexer);
            if(lexer->lookahead == '_'){
                advance(lexer);
                return SCOPE;
            }else{
                return PREFIX;
            }

        case 'p': case 'a':
            advance(lexer);
            return PREFIX;

        case 'h': case 'v':
            advance(lexer);
            return TYPE_OR_PREFIX;

        case 'c':
            advance(lexer);
            switch(lexer->lookahead){
                case 'x': case 'h': case 'l':
                    advance(lexer);
                    return TYPE_OR_PREFIX;

                case 'u':
                    advance(lexer);
                    switch(lexer->lookahead){
                        case 'f':
                            advance(lexer);
                            if(lexer->lookahead == 'f'){
                                advance(lexer);
                                if(lexer->lookahead == 't'){
                                    advance(lexer);
                                    return TYPE;
                                }else{
                                    return TOKEN_NORMAL;
                                }
                            }else{
                                return TOKEN_NORMAL;
                            }
                        case '1': case '2': case '4': case '8':
                            advance(lexer);
                            return TYPE;
                        default:
                            return TYPE;
                    }

                case '4': case '8':
                    advance(lexer);
                    return TYPE;

                case '1':
                    advance(lexer);
                    if(lexer->lookahead == '0'){
                        advance(lexer);
                        return TYPE;
                    }
                    return TOKEN_NORMAL;

                default:
                    return TYPE_OR_PREFIX;
            }

        case 'l':
            advance(lexer);
            if(lexer->lookahead == 'p'){
                advance(lexer);
                return TYPE_OR_PREFIX;
            }else{
                return TYPE;
            }

        case 't':
            advance(lexer);
            if(lexer->lookahead == 'h'){
                advance(lexer);
                if(lexer->lookahead == 'r'){
                    advance(lexer);
                    return TYPE;
                }else{
                    return TYPE;
                }
            }else{
                return TYPE;
            }

        case 'i':
            advance(lexer);
            switch(lexer->lookahead){
                case 't': case '1': case '2': case '4': case '8':
                    advance(lexer);
                    return TYPE;
                default:
                    return TYPE;
            }

        case 'u':
            advance(lexer);
            switch(lexer->lookahead){
                case 'i': case '1': case '2': case '4': case '8':
                    advance(lexer);
                    switch(lexer->lookahead){
                        case '1': case '2': case '4': case '8':
                            advance(lexer);
                            return TYPE;
                        default:
                            return TYPE;
                    }
                    return TYPE;
                default:
                    return TYPE;
            }

        case 'f':
            advance(lexer);
            switch(lexer->lookahead){
                case 'n': case '4': case '8':
                    advance(lexer);
                    return TYPE;

                case '1':
                    advance(lexer);
                    if(lexer->lookahead == '0'){
                        advance(lexer);
                        return TYPE;
                    }
                    return TOKEN_NORMAL;

                default:
                    return TYPE;
            }

        case 'b':
            advance(lexer);
            if(lexer->lookahead == 'r'){
                advance(lexer);
                return TYPE;
            }
            while(lexer->lookahead >= '0' && lexer->lookahead <= '9'){
                advance(lexer);
            }
            return TYPE;

        case 's':
            advance(lexer);
            switch(lexer->lookahead){
                case 't': case 'z':
                    advance(lexer);
                    return TYPE;

                default:
                    return TYPE;
            }

        case 'e': case 'w': case 'n':
            advance(lexer);
            return TYPE;

        case 'd':
            advance(lexer);
            if(lexer->lookahead == 'w'){
                advance(lexer);
                return TYPE;
            }else{
                return TOKEN_NORMAL;
            }
        default:
            return TOKEN_NORMAL;
    }
}
//------------------------------------------------------------------------------

static bool start_body(TSLexer* lexer)
{
    return lexer->lookahead >= 'A' && lexer->lookahead <= 'Z';
}
//------------------------------------------------------------------------------

bool tree_sitter_hungarian_external_scanner_scan(void* scanner, TSLexer* lexer, const bool* valid_symbols)
{
    if(valid_symbols[ERROR_SENTINEL]) debug("Error correction mode");

    if(!valid_symbols[ERROR_SENTINEL] && valid_symbols[TOKEN_BODY]){
        identifier(lexer);
        lexer->result_symbol = TOKEN_BODY;
        debug("Returning type TOKEN_BODY");
        return true;
    }

    TokenType type = find_prefix(lexer);
    if(type == SCOPE){
        debug("Found scope");
        if(start_body(lexer)){
            lexer->result_symbol = TOKEN_PREFIX;
            debug("Returning type TOKEN_PREFIX");
            return true;
        }
        type = find_prefix(lexer);
    }
    while(type == PREFIX || type == TYPE_OR_PREFIX){
        if(type == TYPE_OR_PREFIX){
            if(start_body(lexer)){
                lexer->result_symbol = TOKEN_PREFIX;
                debug("Returning type TOKEN_PREFIX");
                return true;
            }
        }
        type = find_prefix(lexer);
    }
    if(type == TYPE){
        if(start_body(lexer)){
            lexer->result_symbol = TOKEN_PREFIX;
            debug("Returning type TOKEN_PREFIX");
            return true;
        }
    }

    identifier(lexer);
    lexer->result_symbol = TOKEN_NORMAL;
    debug("Returning type TOKEN_NORMAL");
    return true;
}
//------------------------------------------------------------------------------

