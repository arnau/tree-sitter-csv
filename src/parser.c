#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LF = 1,
  anon_sym_CR_LF = 2,
  sym_delimiter = 3,
  sym_null = 4,
  sym_na = 5,
  sym_boolean = 6,
  sym_integer = 7,
  sym_hex = 8,
  sym_float = 9,
  sym_quote = 10,
  sym_non_escaped = 11,
  sym_text = 12,
  sym_escape_sequence = 13,
  sym_source_file = 14,
  sym_record = 15,
  sym__eor = 16,
  sym__pair = 17,
  sym__field = 18,
  sym__number = 19,
  sym_string = 20,
  sym_escaped = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_record_repeat1 = 23,
  aux_sym_escaped_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_delimiter] = "delimiter",
  [sym_null] = "null",
  [sym_na] = "na",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_hex] = "hex",
  [sym_float] = "float",
  [sym_quote] = "quote",
  [sym_non_escaped] = "non_escaped",
  [sym_text] = "text",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_record] = "record",
  [sym__eor] = "_eor",
  [sym__pair] = "_pair",
  [sym__field] = "_field",
  [sym__number] = "_number",
  [sym_string] = "string",
  [sym_escaped] = "escaped",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_escaped_repeat1] = "escaped_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_delimiter] = sym_delimiter,
  [sym_null] = sym_null,
  [sym_na] = sym_na,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_hex] = sym_hex,
  [sym_float] = sym_float,
  [sym_quote] = sym_quote,
  [sym_non_escaped] = sym_non_escaped,
  [sym_text] = sym_text,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_record] = sym_record,
  [sym__eor] = sym__eor,
  [sym__pair] = sym__pair,
  [sym__field] = sym__field,
  [sym__number] = sym__number,
  [sym_string] = sym_string,
  [sym_escaped] = sym_escaped,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_escaped_repeat1] = aux_sym_escaped_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_na] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_non_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym__eor] = {
    .visible = false,
    .named = true,
  },
  [sym__pair] = {
    .visible = false,
    .named = true,
  },
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escaped_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_sep = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_sep] = "sep",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_sep, 0},
  [1] =
    {field_sep, 0, .inherited = true},
  [2] =
    {field_sep, 0, .inherited = true},
    {field_sep, 1, .inherited = true},
  [4] =
    {field_sep, 1, .inherited = true},
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_na);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_quote);
      if (lookahead == '"') ADVANCE(47);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == '0') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'L') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_non_escaped);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_non_escaped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_na] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_non_escaped] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_record] = STATE(2),
    [sym__eor] = STATE(7),
    [sym__pair] = STATE(18),
    [sym__field] = STATE(10),
    [sym__number] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_record_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [sym_delimiter] = ACTIONS(7),
    [sym_null] = ACTIONS(9),
    [sym_na] = ACTIONS(9),
    [sym_boolean] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_hex] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_quote] = ACTIONS(11),
    [sym_non_escaped] = ACTIONS(13),
  },
  [2] = {
    [sym_record] = STATE(3),
    [sym__eor] = STATE(7),
    [sym__pair] = STATE(18),
    [sym__field] = STATE(10),
    [sym__number] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_record_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [sym_delimiter] = ACTIONS(7),
    [sym_null] = ACTIONS(9),
    [sym_na] = ACTIONS(9),
    [sym_boolean] = ACTIONS(9),
    [sym_integer] = ACTIONS(9),
    [sym_hex] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_quote] = ACTIONS(11),
    [sym_non_escaped] = ACTIONS(13),
  },
  [3] = {
    [sym_record] = STATE(3),
    [sym__eor] = STATE(7),
    [sym__pair] = STATE(18),
    [sym__field] = STATE(10),
    [sym__number] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_record_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_CR_LF] = ACTIONS(19),
    [sym_delimiter] = ACTIONS(22),
    [sym_null] = ACTIONS(25),
    [sym_na] = ACTIONS(25),
    [sym_boolean] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [sym_hex] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_quote] = ACTIONS(28),
    [sym_non_escaped] = ACTIONS(31),
  },
  [4] = {
    [sym__field] = STATE(16),
    [sym__number] = STATE(16),
    [sym_string] = STATE(16),
    [anon_sym_LF] = ACTIONS(34),
    [anon_sym_CR_LF] = ACTIONS(34),
    [sym_delimiter] = ACTIONS(34),
    [sym_null] = ACTIONS(36),
    [sym_na] = ACTIONS(36),
    [sym_boolean] = ACTIONS(36),
    [sym_integer] = ACTIONS(36),
    [sym_hex] = ACTIONS(36),
    [sym_float] = ACTIONS(36),
    [sym_quote] = ACTIONS(11),
    [sym_non_escaped] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 11,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [17] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 11,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [34] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 11,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [51] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 11,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [68] = 5,
    ACTIONS(7), 1,
      sym_delimiter,
    STATE(6), 1,
      sym__eor,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(18), 1,
      sym__pair,
    ACTIONS(54), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [85] = 5,
    ACTIONS(7), 1,
      sym_delimiter,
    STATE(8), 1,
      sym__eor,
    STATE(11), 1,
      aux_sym_record_repeat1,
    STATE(18), 1,
      sym__pair,
    ACTIONS(56), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [102] = 5,
    ACTIONS(7), 1,
      sym_delimiter,
    STATE(5), 1,
      sym__eor,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(18), 1,
      sym__pair,
    ACTIONS(58), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [119] = 5,
    ACTIONS(60), 1,
      sym_quote,
    ACTIONS(62), 1,
      sym_text,
    ACTIONS(64), 1,
      sym_escape_sequence,
    STATE(14), 1,
      aux_sym_escaped_repeat1,
    STATE(21), 1,
      sym_escaped,
  [135] = 4,
    ACTIONS(68), 1,
      sym_delimiter,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(18), 1,
      sym__pair,
    ACTIONS(66), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [149] = 4,
    ACTIONS(71), 1,
      sym_quote,
    ACTIONS(73), 1,
      sym_text,
    ACTIONS(75), 1,
      sym_escape_sequence,
    STATE(15), 1,
      aux_sym_escaped_repeat1,
  [162] = 4,
    ACTIONS(77), 1,
      sym_quote,
    ACTIONS(79), 1,
      sym_text,
    ACTIONS(82), 1,
      sym_escape_sequence,
    STATE(15), 1,
      aux_sym_escaped_repeat1,
  [175] = 1,
    ACTIONS(85), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [181] = 1,
    ACTIONS(87), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [187] = 1,
    ACTIONS(89), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [193] = 1,
    ACTIONS(91), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [199] = 1,
    ACTIONS(93), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [205] = 1,
    ACTIONS(95), 1,
      sym_quote,
  [209] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 17,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 51,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 187,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 199,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 1, .production_id = 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 3),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 3), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_repeat1, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_repeat1, 2), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_csv(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
