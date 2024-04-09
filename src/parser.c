#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
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
  anon_sym_DASH = 7,
  sym_integer = 8,
  sym_hex = 9,
  sym_float = 10,
  sym_quote = 11,
  sym_non_escaped = 12,
  sym_text = 13,
  sym_escape_sequence = 14,
  sym_source_file = 15,
  sym_record = 16,
  sym__eor = 17,
  sym__pair = 18,
  sym__field = 19,
  sym__number = 20,
  sym_string = 21,
  sym_escaped = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_record_repeat1 = 24,
  aux_sym_escaped_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_delimiter] = "delimiter",
  [sym_null] = "null",
  [sym_na] = "na",
  [sym_boolean] = "boolean",
  [anon_sym_DASH] = "-",
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
  [anon_sym_DASH] = anon_sym_DASH,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
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
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_na);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_quote);
      if (lookahead == '"') ADVANCE(56);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 't') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'A') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'E') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_non_escaped);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_non_escaped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_non_escaped);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
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
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_non_escaped] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_record] = STATE(2),
    [sym__eor] = STATE(6),
    [sym__pair] = STATE(20),
    [sym__field] = STATE(10),
    [sym__number] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_record_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [sym_delimiter] = ACTIONS(7),
    [sym_null] = ACTIONS(9),
    [sym_na] = ACTIONS(9),
    [sym_boolean] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(9),
    [sym_hex] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_quote] = ACTIONS(13),
    [sym_non_escaped] = ACTIONS(15),
  },
  [2] = {
    [sym_record] = STATE(3),
    [sym__eor] = STATE(6),
    [sym__pair] = STATE(20),
    [sym__field] = STATE(10),
    [sym__number] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_record_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [sym_delimiter] = ACTIONS(7),
    [sym_null] = ACTIONS(9),
    [sym_na] = ACTIONS(9),
    [sym_boolean] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(9),
    [sym_hex] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_quote] = ACTIONS(13),
    [sym_non_escaped] = ACTIONS(15),
  },
  [3] = {
    [sym_record] = STATE(3),
    [sym__eor] = STATE(6),
    [sym__pair] = STATE(20),
    [sym__field] = STATE(10),
    [sym__number] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_record_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
    [sym_delimiter] = ACTIONS(24),
    [sym_null] = ACTIONS(27),
    [sym_na] = ACTIONS(27),
    [sym_boolean] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(30),
    [sym_integer] = ACTIONS(27),
    [sym_hex] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_quote] = ACTIONS(33),
    [sym_non_escaped] = ACTIONS(36),
  },
  [4] = {
    [sym__field] = STATE(16),
    [sym__number] = STATE(16),
    [sym_string] = STATE(16),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
    [sym_delimiter] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [sym_na] = ACTIONS(41),
    [sym_boolean] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(41),
    [sym_hex] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_quote] = ACTIONS(13),
    [sym_non_escaped] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 12,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      anon_sym_DASH,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [18] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 12,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      anon_sym_DASH,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [36] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 12,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      anon_sym_DASH,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [54] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 12,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      anon_sym_DASH,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_non_escaped,
  [72] = 5,
    ACTIONS(7), 1,
      sym_delimiter,
    STATE(5), 1,
      sym__eor,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(20), 1,
      sym__pair,
    ACTIONS(59), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [89] = 5,
    ACTIONS(7), 1,
      sym_delimiter,
    STATE(8), 1,
      sym__eor,
    STATE(9), 1,
      aux_sym_record_repeat1,
    STATE(20), 1,
      sym__pair,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [106] = 5,
    ACTIONS(7), 1,
      sym_delimiter,
    STATE(7), 1,
      sym__eor,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(20), 1,
      sym__pair,
    ACTIONS(63), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [123] = 5,
    ACTIONS(65), 1,
      sym_quote,
    ACTIONS(67), 1,
      sym_text,
    ACTIONS(69), 1,
      sym_escape_sequence,
    STATE(15), 1,
      aux_sym_escaped_repeat1,
    STATE(23), 1,
      sym_escaped,
  [139] = 4,
    ACTIONS(73), 1,
      sym_delimiter,
    STATE(13), 1,
      aux_sym_record_repeat1,
    STATE(20), 1,
      sym__pair,
    ACTIONS(71), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [153] = 4,
    ACTIONS(76), 1,
      sym_quote,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(81), 1,
      sym_escape_sequence,
    STATE(14), 1,
      aux_sym_escaped_repeat1,
  [166] = 4,
    ACTIONS(84), 1,
      sym_quote,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(88), 1,
      sym_escape_sequence,
    STATE(14), 1,
      aux_sym_escaped_repeat1,
  [179] = 1,
    ACTIONS(90), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [185] = 1,
    ACTIONS(92), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [191] = 2,
    ACTIONS(94), 1,
      sym_integer,
    ACTIONS(96), 2,
      sym_hex,
      sym_float,
  [199] = 1,
    ACTIONS(98), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [205] = 1,
    ACTIONS(100), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [211] = 1,
    ACTIONS(102), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [217] = 1,
    ACTIONS(104), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [223] = 1,
    ACTIONS(106), 1,
      sym_quote,
  [227] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 211,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 3),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 3), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
