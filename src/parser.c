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
      if (eof) ADVANCE(8);
      if (lookahead == 'G') ADVANCE(31);
      if (lookahead == '_' ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          lookahead == 'o' ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e' ||
          lookahead == 'n' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'p')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'G') ADVANCE(32);
      if (lookahead == '_' ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          lookahead == 'o' ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e' ||
          lookahead == 'n' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'p')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__prefix);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'a' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 'r') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == 't' ||
          lookahead == 'z') ADVANCE(9);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(9);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__prefix);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__prefix);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__uppercase);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__uppercase);
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__uppercase);
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier_start);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == '_') ADVANCE(3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'a' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier_start);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (lookahead == '0') ADVANCE(9);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
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
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'h' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'p')) ADVANCE(43);
      END_STATE();
    case 43:
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
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e' ||
          lookahead == 't' ||
          lookahead == 'w') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'p')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier_chars);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
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
    [sym_identifier] = STATE(5),
    [sym__hungarian] = STATE(6),
    [sym_prefix] = STATE(3),
    [sym__normal] = STATE(6),
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
  [14] = 1,
    ACTIONS(13), 1,
      sym__identifier_chars,
  [18] = 1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
  [22] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [26] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [30] = 1,
    ACTIONS(21), 1,
      sym__identifier_chars,
  [34] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 7,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 38,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hungarian, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
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
