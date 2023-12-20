#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__prefix = 1,
  sym__uppercase = 2,
  sym__identifier_start = 3,
  sym__identifier_chars = 4,
  sym_identifier = 5,
  sym__hungarian = 6,
  sym_prefix = 7,
  sym_body = 8,
  sym__normal = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__prefix] = "_prefix",
  [sym__uppercase] = "_uppercase",
  [sym__identifier_start] = "_identifier_start",
  [sym__identifier_chars] = "_identifier_chars",
  [sym_identifier] = "identifier",
  [sym__hungarian] = "_hungarian",
  [sym_prefix] = "prefix",
  [sym_body] = "body",
  [sym__normal] = "_normal",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__prefix] = sym__prefix,
  [sym__uppercase] = sym__uppercase,
  [sym__identifier_start] = sym__identifier_start,
  [sym__identifier_chars] = sym__identifier_chars,
  [sym_identifier] = sym_identifier,
  [sym__hungarian] = sym__hungarian,
  [sym_prefix] = sym_prefix,
  [sym_body] = sym_body,
  [sym__normal] = sym__normal,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__uppercase] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_start] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_chars] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__hungarian] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__normal] = {
    .visible = false,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == 'G') ADVANCE(38);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e' ||
          lookahead == 'n' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'p') ADVANCE(44);
      if (('j' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'G') ADVANCE(39);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e' ||
          lookahead == 'n' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'p') ADVANCE(46);
      if (('j' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__prefix);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(21);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'c' ||
          lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'c' ||
          lookahead == 'f') ADVANCE(2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'r') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 't' ||
          lookahead == 'z') ADVANCE(12);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(12);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__prefix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__uppercase);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__uppercase);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__uppercase);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier_start);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (lookahead == '0') ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'p')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          lookahead == 'n' ||
          lookahead == 'o' ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'p')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__prefix] = ACTIONS(1),
    [sym__uppercase] = ACTIONS(1),
    [sym__identifier_start] = ACTIONS(1),
    [sym__identifier_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_identifier] = STATE(6),
    [sym__hungarian] = STATE(7),
    [sym_prefix] = STATE(3),
    [sym__normal] = STATE(7),
    [sym__prefix] = ACTIONS(3),
    [sym__uppercase] = ACTIONS(5),
    [sym__identifier_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(7), 1,
      sym__uppercase,
    ACTIONS(9), 1,
      sym__identifier_chars,
  [7] = 2,
    ACTIONS(11), 1,
      sym__uppercase,
    STATE(9), 1,
      sym_body,
  [14] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__identifier_chars,
  [21] = 1,
    ACTIONS(17), 1,
      sym__identifier_chars,
  [25] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [29] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [33] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [37] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [41] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 7,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 37,
  [SMALL_STATE(10)] = 41,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hungarian, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hungarian(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
