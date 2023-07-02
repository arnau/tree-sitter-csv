#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 26
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
  sym__non_escaped = 11,
  sym_text = 12,
  sym_escape_sequence = 13,
  sym_source_file = 14,
  sym_record = 15,
  sym__eor = 16,
  sym__pair = 17,
  sym__field = 18,
  sym__number = 19,
  sym_string = 20,
  sym_quoted_content = 21,
  sym_unquoted_content = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_record_repeat1 = 24,
  aux_sym_quoted_content_repeat1 = 25,
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
  [sym__non_escaped] = "_non_escaped",
  [sym_text] = "text",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_record] = "record",
  [sym__eor] = "_eor",
  [sym__pair] = "_pair",
  [sym__field] = "_field",
  [sym__number] = "_number",
  [sym_string] = "string",
  [sym_quoted_content] = "quoted_content",
  [sym_unquoted_content] = "unquoted_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_quoted_content_repeat1] = "quoted_content_repeat1",
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
  [sym__non_escaped] = sym__non_escaped,
  [sym_text] = sym_text,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_record] = sym_record,
  [sym__eor] = sym__eor,
  [sym__pair] = sym__pair,
  [sym__field] = sym__field,
  [sym__number] = sym__number,
  [sym_string] = sym_string,
  [sym_quoted_content] = sym_quoted_content,
  [sym_unquoted_content] = sym_unquoted_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_quoted_content_repeat1] = aux_sym_quoted_content_repeat1,
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
  [sym__non_escaped] = {
    .visible = false,
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
  [sym_quoted_content] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_content] = {
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
  [aux_sym_quoted_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_deli = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_deli] = "deli",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_deli, 0},
  [1] =
    {field_deli, 0, .inherited = true},
  [2] =
    {field_deli, 1, .inherited = true},
  [3] =
    {field_deli, 0, .inherited = true},
    {field_deli, 1, .inherited = true},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(11);
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
      if (eof) ADVANCE(8);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_na);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_boolean);
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
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 't') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == 'A') ADVANCE(13);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == 'a') ADVANCE(13);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
      ACCEPT_TOKEN(sym__non_escaped);
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
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 0},
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
    [sym__non_escaped] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_record] = STATE(2),
    [sym__field] = STATE(7),
    [sym__number] = STATE(7),
    [sym_string] = STATE(7),
    [sym_unquoted_content] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_null] = ACTIONS(5),
    [sym_na] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_integer] = ACTIONS(5),
    [sym_hex] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [sym_quote] = ACTIONS(7),
    [sym__non_escaped] = ACTIONS(9),
  },
  [2] = {
    [sym_record] = STATE(3),
    [sym__field] = STATE(7),
    [sym__number] = STATE(7),
    [sym_string] = STATE(7),
    [sym_unquoted_content] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_null] = ACTIONS(5),
    [sym_na] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_integer] = ACTIONS(5),
    [sym_hex] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [sym_quote] = ACTIONS(7),
    [sym__non_escaped] = ACTIONS(9),
  },
  [3] = {
    [sym_record] = STATE(3),
    [sym__field] = STATE(7),
    [sym__number] = STATE(7),
    [sym_string] = STATE(7),
    [sym_unquoted_content] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_null] = ACTIONS(15),
    [sym_na] = ACTIONS(15),
    [sym_boolean] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_hex] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_quote] = ACTIONS(18),
    [sym__non_escaped] = ACTIONS(21),
  },
  [4] = {
    [sym__field] = STATE(17),
    [sym__number] = STATE(17),
    [sym_string] = STATE(17),
    [sym_unquoted_content] = STATE(14),
    [anon_sym_LF] = ACTIONS(24),
    [anon_sym_CR_LF] = ACTIONS(24),
    [sym_delimiter] = ACTIONS(24),
    [sym_null] = ACTIONS(26),
    [sym_na] = ACTIONS(26),
    [sym_boolean] = ACTIONS(26),
    [sym_integer] = ACTIONS(26),
    [sym_hex] = ACTIONS(26),
    [sym_float] = ACTIONS(26),
    [sym_quote] = ACTIONS(7),
    [sym__non_escaped] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 8,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym__non_escaped,
  [14] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 8,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym__non_escaped,
  [28] = 5,
    ACTIONS(38), 1,
      sym_delimiter,
    STATE(6), 1,
      sym__eor,
    STATE(8), 1,
      aux_sym_record_repeat1,
    STATE(15), 1,
      sym__pair,
    ACTIONS(36), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [45] = 5,
    ACTIONS(38), 1,
      sym_delimiter,
    STATE(5), 1,
      sym__eor,
    STATE(10), 1,
      aux_sym_record_repeat1,
    STATE(15), 1,
      sym__pair,
    ACTIONS(40), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [62] = 5,
    ACTIONS(42), 1,
      sym_quote,
    ACTIONS(44), 1,
      sym_text,
    ACTIONS(46), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym_quoted_content_repeat1,
    STATE(19), 1,
      sym_quoted_content,
  [78] = 4,
    ACTIONS(50), 1,
      sym_delimiter,
    STATE(10), 1,
      aux_sym_record_repeat1,
    STATE(15), 1,
      sym__pair,
    ACTIONS(48), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [92] = 4,
    ACTIONS(53), 1,
      sym_quote,
    ACTIONS(55), 1,
      sym_text,
    ACTIONS(57), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym_quoted_content_repeat1,
  [105] = 4,
    ACTIONS(59), 1,
      sym_quote,
    ACTIONS(61), 1,
      sym_text,
    ACTIONS(64), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym_quoted_content_repeat1,
  [118] = 1,
    ACTIONS(67), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [124] = 1,
    ACTIONS(69), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [130] = 1,
    ACTIONS(71), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [136] = 1,
    ACTIONS(73), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [142] = 1,
    ACTIONS(75), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [148] = 1,
    ACTIONS(77), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_delimiter,
  [154] = 1,
    ACTIONS(79), 1,
      sym_quote,
  [158] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 154,
  [SMALL_STATE(20)] = 158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 1, .production_id = 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 4),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 4), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_content, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_content_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_content_repeat1, 2), SHIFT_REPEAT(12),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_content_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_content, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
