#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_string_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_fn = 10,
  anon_sym_COLON = 11,
  anon_sym_let = 12,
  anon_sym_var = 13,
  anon_sym_const = 14,
  anon_sym_EQ = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  sym_program = 18,
  sym_statement = 19,
  sym_block = 20,
  sym_expression = 21,
  sym_string = 22,
  sym_declaration = 23,
  sym_type = 24,
  sym_call_expression = 25,
  sym_function_declaration = 26,
  sym_let_binding = 27,
  sym_binary_expression = 28,
  sym_plus_expression = 29,
  sym_minus_expression = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
  aux_sym_call_expression_repeat1 = 33,
  aux_sym_function_declaration_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_fn] = "fn",
  [anon_sym_COLON] = ":",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_string] = "string",
  [sym_declaration] = "declaration",
  [sym_type] = "type",
  [sym_call_expression] = "call_expression",
  [sym_function_declaration] = "function_declaration",
  [sym_let_binding] = "let_binding",
  [sym_binary_expression] = "binary_expression",
  [sym_plus_expression] = "plus_expression",
  [sym_minus_expression] = "minus_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_string] = sym_string,
  [sym_declaration] = sym_declaration,
  [sym_type] = sym_type,
  [sym_call_expression] = sym_call_expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_let_binding] = sym_let_binding,
  [sym_binary_expression] = sym_binary_expression,
  [sym_plus_expression] = sym_plus_expression,
  [sym_minus_expression] = sym_minus_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_call_expression_repeat1] = aux_sym_call_expression_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_plus_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_minus_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_function = 2,
  field_kind = 3,
  field_name = 4,
  field_parameter = 5,
  field_parameters = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function] = "function",
  [field_kind] = "kind",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_arguments, 2},
    {field_function, 0},
  [3] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
  [6] =
    {field_name, 1},
  [7] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [9] =
    {field_parameter, 0},
    {field_parameter, 1},
    {field_parameter, 2},
  [12] =
    {field_name, 1},
    {field_parameter, 3, .inherited = true},
    {field_parameters, 3},
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_const);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(41),
    [sym_statement] = STATE(4),
    [sym_block] = STATE(19),
    [sym_expression] = STATE(11),
    [sym_declaration] = STATE(19),
    [sym_call_expression] = STATE(12),
    [sym_function_declaration] = STATE(18),
    [sym_let_binding] = STATE(18),
    [sym_binary_expression] = STATE(12),
    [sym_plus_expression] = STATE(14),
    [sym_minus_expression] = STATE(14),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(19),
    [sym_expression] = STATE(11),
    [sym_declaration] = STATE(19),
    [sym_call_expression] = STATE(12),
    [sym_function_declaration] = STATE(18),
    [sym_let_binding] = STATE(18),
    [sym_binary_expression] = STATE(12),
    [sym_plus_expression] = STATE(14),
    [sym_minus_expression] = STATE(14),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(18),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(24),
    [anon_sym_var] = ACTIONS(24),
    [anon_sym_const] = ACTIONS(24),
  },
  [3] = {
    [sym_statement] = STATE(5),
    [sym_block] = STATE(19),
    [sym_expression] = STATE(11),
    [sym_declaration] = STATE(19),
    [sym_call_expression] = STATE(12),
    [sym_function_declaration] = STATE(18),
    [sym_let_binding] = STATE(18),
    [sym_binary_expression] = STATE(12),
    [sym_plus_expression] = STATE(14),
    [sym_minus_expression] = STATE(14),
    [aux_sym_program_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(19),
    [sym_expression] = STATE(11),
    [sym_declaration] = STATE(19),
    [sym_call_expression] = STATE(12),
    [sym_function_declaration] = STATE(18),
    [sym_let_binding] = STATE(18),
    [sym_binary_expression] = STATE(12),
    [sym_plus_expression] = STATE(14),
    [sym_minus_expression] = STATE(14),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
  },
  [5] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(19),
    [sym_expression] = STATE(11),
    [sym_declaration] = STATE(19),
    [sym_call_expression] = STATE(12),
    [sym_function_declaration] = STATE(18),
    [sym_let_binding] = STATE(18),
    [sym_binary_expression] = STATE(12),
    [sym_plus_expression] = STATE(14),
    [sym_minus_expression] = STATE(14),
    [aux_sym_program_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [18] = 2,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [33] = 2,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [48] = 4,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(49), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [67] = 2,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [82] = 4,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(61), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [101] = 2,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [116] = 2,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [131] = 2,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [146] = 2,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(73), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [159] = 2,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(77), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [172] = 2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(81), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [185] = 2,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(85), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [198] = 2,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(61), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [211] = 2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(89), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [224] = 5,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_string,
    ACTIONS(94), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(21), 2,
      sym_type,
      aux_sym_call_expression_repeat1,
  [242] = 5,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_string,
    ACTIONS(101), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(21), 2,
      sym_type,
      aux_sym_call_expression_repeat1,
  [260] = 5,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_string,
    ACTIONS(101), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(22), 2,
      sym_type,
      aux_sym_call_expression_repeat1,
  [278] = 4,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    STATE(12), 2,
      sym_call_expression,
      sym_binary_expression,
    STATE(14), 2,
      sym_plus_expression,
      sym_minus_expression,
  [293] = 4,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    STATE(12), 2,
      sym_call_expression,
      sym_binary_expression,
    STATE(14), 2,
      sym_plus_expression,
      sym_minus_expression,
  [308] = 4,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(12), 2,
      sym_call_expression,
      sym_binary_expression,
    STATE(14), 2,
      sym_plus_expression,
      sym_minus_expression,
  [323] = 3,
    ACTIONS(111), 1,
      aux_sym_string_token1,
    STATE(27), 1,
      aux_sym_string_repeat1,
    ACTIONS(109), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [334] = 1,
    ACTIONS(114), 4,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
  [341] = 3,
    ACTIONS(118), 1,
      aux_sym_string_token1,
    STATE(31), 1,
      aux_sym_string_repeat1,
    ACTIONS(116), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [352] = 1,
    ACTIONS(120), 4,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
  [359] = 3,
    ACTIONS(124), 1,
      aux_sym_string_token1,
    STATE(27), 1,
      aux_sym_string_repeat1,
    ACTIONS(122), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [370] = 1,
    ACTIONS(126), 4,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
  [377] = 3,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_function_declaration_repeat1,
  [387] = 3,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_function_declaration_repeat1,
  [397] = 3,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_function_declaration_repeat1,
  [407] = 1,
    ACTIONS(139), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [412] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [419] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [426] = 1,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [430] = 1,
    ACTIONS(143), 1,
      sym_identifier,
  [434] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [438] = 1,
    ACTIONS(147), 1,
      sym_identifier,
  [442] = 1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
  [446] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [450] = 1,
    ACTIONS(153), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 48,
  [SMALL_STATE(10)] = 67,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 211,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 293,
  [SMALL_STATE(26)] = 308,
  [SMALL_STATE(27)] = 323,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 370,
  [SMALL_STATE(33)] = 377,
  [SMALL_STATE(34)] = 387,
  [SMALL_STATE(35)] = 397,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 412,
  [SMALL_STATE(38)] = 419,
  [SMALL_STATE(39)] = 426,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 434,
  [SMALL_STATE(42)] = 438,
  [SMALL_STATE(43)] = 442,
  [SMALL_STATE(44)] = 446,
  [SMALL_STATE(45)] = 450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 4, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(28),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, .production_id = 5), SHIFT_REPEAT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 3, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_U_LANG(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
