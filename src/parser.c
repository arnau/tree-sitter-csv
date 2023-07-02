#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LF = 1,
  anon_sym_CR = 2,
  sym_delimiter = 3,
  sym_null = 4,
  sym_na = 5,
  sym_boolean = 6,
  sym_integer = 7,
  sym_hex = 8,
  sym_float = 9,
  sym_quote = 10,
  sym_unquoted_content = 11,
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
  aux_sym_source_file_repeat1 = 22,
  aux_sym_record_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym_delimiter] = "delimiter",
  [sym_null] = "null",
  [sym_na] = "na",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_hex] = "hex",
  [sym_float] = "float",
  [sym_quote] = "quote",
  [sym_unquoted_content] = "unquoted_content",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym_delimiter] = sym_delimiter,
  [sym_null] = sym_null,
  [sym_na] = sym_na,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_hex] = sym_hex,
  [sym_float] = sym_float,
  [sym_quote] = sym_quote,
  [sym_unquoted_content] = sym_unquoted_content,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
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
  [anon_sym_CR] = {
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
  [sym_unquoted_content] = {
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
  [sym_quoted_content] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_na);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_na);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_quote);
      if (lookahead == '"') ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'L') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'U') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_unquoted_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_na] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_record] = STATE(5),
    [sym__field] = STATE(2),
    [sym__number] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_null] = ACTIONS(5),
    [sym_na] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_integer] = ACTIONS(5),
    [sym_hex] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [sym_quote] = ACTIONS(7),
    [sym_unquoted_content] = ACTIONS(9),
  },
  [2] = {
    [sym__eor] = STATE(13),
    [sym__pair] = STATE(10),
    [aux_sym_record_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_CR] = ACTIONS(13),
    [sym_delimiter] = ACTIONS(15),
    [sym_null] = ACTIONS(17),
    [sym_na] = ACTIONS(17),
    [sym_boolean] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_hex] = ACTIONS(17),
    [sym_float] = ACTIONS(17),
    [sym_quote] = ACTIONS(17),
    [sym_unquoted_content] = ACTIONS(17),
  },
  [3] = {
    [sym__field] = STATE(12),
    [sym__number] = STATE(12),
    [sym_string] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR] = ACTIONS(21),
    [sym_delimiter] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_na] = ACTIONS(23),
    [sym_boolean] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [sym_hex] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_quote] = ACTIONS(7),
    [sym_unquoted_content] = ACTIONS(9),
  },
  [4] = {
    [sym__eor] = STATE(14),
    [sym__pair] = STATE(10),
    [aux_sym_record_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_CR] = ACTIONS(27),
    [sym_delimiter] = ACTIONS(15),
    [sym_null] = ACTIONS(29),
    [sym_na] = ACTIONS(29),
    [sym_boolean] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [sym_hex] = ACTIONS(29),
    [sym_float] = ACTIONS(29),
    [sym_quote] = ACTIONS(29),
    [sym_unquoted_content] = ACTIONS(29),
  },
  [5] = {
    [sym_record] = STATE(6),
    [sym__field] = STATE(2),
    [sym__number] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_null] = ACTIONS(5),
    [sym_na] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_integer] = ACTIONS(5),
    [sym_hex] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [sym_quote] = ACTIONS(7),
    [sym_unquoted_content] = ACTIONS(9),
  },
  [6] = {
    [sym_record] = STATE(6),
    [sym__field] = STATE(2),
    [sym__number] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_null] = ACTIONS(35),
    [sym_na] = ACTIONS(35),
    [sym_boolean] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [sym_hex] = ACTIONS(35),
    [sym_float] = ACTIONS(35),
    [sym_quote] = ACTIONS(38),
    [sym_unquoted_content] = ACTIONS(41),
  },
  [7] = {
    [sym__pair] = STATE(10),
    [aux_sym_record_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LF] = ACTIONS(46),
    [anon_sym_CR] = ACTIONS(46),
    [sym_delimiter] = ACTIONS(48),
    [sym_null] = ACTIONS(46),
    [sym_na] = ACTIONS(46),
    [sym_boolean] = ACTIONS(46),
    [sym_integer] = ACTIONS(46),
    [sym_hex] = ACTIONS(46),
    [sym_float] = ACTIONS(46),
    [sym_quote] = ACTIONS(46),
    [sym_unquoted_content] = ACTIONS(46),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 11,
      anon_sym_LF,
      anon_sym_CR,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [17] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 11,
      anon_sym_LF,
      anon_sym_CR,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [34] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 11,
      anon_sym_LF,
      anon_sym_CR,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [51] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 11,
      anon_sym_LF,
      anon_sym_CR,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [68] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 11,
      anon_sym_LF,
      anon_sym_CR,
      sym_delimiter,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [85] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 8,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [99] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 8,
      sym_null,
      sym_na,
      sym_boolean,
      sym_integer,
      sym_hex,
      sym_float,
      sym_quote,
      sym_unquoted_content,
  [113] = 3,
    ACTIONS(79), 1,
      sym_quote,
    STATE(18), 1,
      sym_quoted_content,
    ACTIONS(81), 2,
      sym_text,
      sym_escape_sequence,
  [124] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [128] = 1,
    ACTIONS(85), 1,
      sym_quote,
  [132] = 1,
    ACTIONS(87), 1,
      sym_quote,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 17,
  [SMALL_STATE(10)] = 34,
  [SMALL_STATE(11)] = 51,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 99,
  [SMALL_STATE(15)] = 113,
  [SMALL_STATE(16)] = 124,
  [SMALL_STATE(17)] = 128,
  [SMALL_STATE(18)] = 132,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 4),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2, .production_id = 4), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 2, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pair, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_content, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
