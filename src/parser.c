#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  anon_sym_number = 5,
  anon_sym_fn = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COLON = 9,
  anon_sym_COMMA = 10,
  anon_sym_let = 11,
  anon_sym_var = 12,
  anon_sym_const = 13,
  anon_sym_EQ = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  sym_program = 17,
  sym_statement = 18,
  sym_block = 19,
  sym_expression = 20,
  sym_declaration = 21,
  sym_type_anotation = 22,
  sym_type = 23,
  sym_function_declaration = 24,
  sym_parameters = 25,
  sym_call_expression = 26,
  sym_arguments = 27,
  sym_let_binding = 28,
  sym_binary_expression = 29,
  sym_plus_expression = 30,
  sym_minus_expression = 31,
  aux_sym_program_repeat1 = 32,
  aux_sym_parameters_repeat1 = 33,
  aux_sym_arguments_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [anon_sym_number] = "number",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
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
  [sym_declaration] = "declaration",
  [sym_type_anotation] = "type_anotation",
  [sym_type] = "type",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_call_expression] = "call_expression",
  [sym_arguments] = "arguments",
  [sym_let_binding] = "let_binding",
  [sym_binary_expression] = "binary_expression",
  [sym_plus_expression] = "plus_expression",
  [sym_minus_expression] = "minus_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_declaration] = sym_declaration,
  [sym_type_anotation] = sym_type_anotation,
  [sym_type] = sym_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_call_expression] = sym_call_expression,
  [sym_arguments] = sym_arguments,
  [sym_let_binding] = sym_let_binding,
  [sym_binary_expression] = sym_binary_expression,
  [sym_plus_expression] = sym_plus_expression,
  [sym_minus_expression] = sym_minus_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_type_anotation] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
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
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_function = 2,
  field_kind = 3,
  field_name = 4,
  field_parameters = 5,
  field_type = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function] = "function",
  [field_kind] = "kind",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 4},
  [8] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 2},
    {field_function, 0},
  [2] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
  [5] =
    {field_name, 1},
  [6] =
    {field_name, 0},
    {field_type, 2},
  [8] =
    {field_name, 1},
    {field_parameters, 3},
  [10] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [14] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [18] =
    {field_name, 1},
    {field_type, 3},
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
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
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
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
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_number);
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(41),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(18),
    [sym_expression] = STATE(9),
    [sym_declaration] = STATE(18),
    [sym_type] = STATE(10),
    [sym_function_declaration] = STATE(15),
    [sym_call_expression] = STATE(10),
    [sym_let_binding] = STATE(15),
    [sym_binary_expression] = STATE(10),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(18),
    [sym_expression] = STATE(9),
    [sym_declaration] = STATE(18),
    [sym_type] = STATE(10),
    [sym_function_declaration] = STATE(15),
    [sym_call_expression] = STATE(10),
    [sym_let_binding] = STATE(15),
    [sym_binary_expression] = STATE(10),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(20),
    [anon_sym_RBRACE] = ACTIONS(15),
    [sym_number] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(26),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_var] = ACTIONS(29),
    [anon_sym_const] = ACTIONS(29),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(18),
    [sym_expression] = STATE(9),
    [sym_declaration] = STATE(18),
    [sym_type] = STATE(10),
    [sym_function_declaration] = STATE(15),
    [sym_call_expression] = STATE(10),
    [sym_let_binding] = STATE(15),
    [sym_binary_expression] = STATE(10),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
  },
  [4] = {
    [sym_statement] = STATE(5),
    [sym_block] = STATE(18),
    [sym_expression] = STATE(9),
    [sym_declaration] = STATE(18),
    [sym_type] = STATE(10),
    [sym_function_declaration] = STATE(15),
    [sym_call_expression] = STATE(10),
    [sym_let_binding] = STATE(15),
    [sym_binary_expression] = STATE(10),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(34),
    [sym_number] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
  },
  [5] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(18),
    [sym_expression] = STATE(9),
    [sym_declaration] = STATE(18),
    [sym_type] = STATE(10),
    [sym_function_declaration] = STATE(15),
    [sym_call_expression] = STATE(10),
    [sym_let_binding] = STATE(15),
    [sym_binary_expression] = STATE(10),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(36),
    [sym_number] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(40), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(38), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [18] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [37] = 2,
    ACTIONS(50), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [53] = 4,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(54), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [73] = 2,
    ACTIONS(44), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [89] = 2,
    ACTIONS(62), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [105] = 2,
    ACTIONS(66), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [121] = 2,
    ACTIONS(70), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [137] = 4,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(74), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [157] = 2,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(78), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [171] = 2,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(82), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [185] = 2,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(86), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [199] = 2,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(54), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [213] = 2,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(90), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [227] = 2,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(94), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [241] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(11), 2,
      sym_plus_expression,
      sym_minus_expression,
    STATE(10), 3,
      sym_type,
      sym_call_expression,
      sym_binary_expression,
  [260] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(11), 2,
      sym_plus_expression,
      sym_minus_expression,
    STATE(10), 3,
      sym_type,
      sym_call_expression,
      sym_binary_expression,
  [279] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(11), 2,
      sym_plus_expression,
      sym_minus_expression,
    STATE(10), 3,
      sym_type,
      sym_call_expression,
      sym_binary_expression,
  [298] = 3,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_parameters,
  [308] = 3,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [318] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_arguments_repeat1,
  [328] = 3,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_parameters_repeat1,
  [338] = 3,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_parameters_repeat1,
  [348] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameters_repeat1,
  [358] = 3,
    ACTIONS(9), 1,
      sym_number,
    STATE(25), 1,
      sym_type,
    STATE(48), 1,
      sym_arguments,
  [368] = 3,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_arguments_repeat1,
  [378] = 1,
    ACTIONS(124), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [383] = 1,
    ACTIONS(126), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [388] = 2,
    ACTIONS(128), 1,
      anon_sym_number,
    STATE(33), 1,
      sym_type_anotation,
  [395] = 2,
    ACTIONS(9), 1,
      sym_number,
    STATE(37), 1,
      sym_type,
  [402] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [409] = 1,
    ACTIONS(119), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [414] = 2,
    ACTIONS(128), 1,
      anon_sym_number,
    STATE(29), 1,
      sym_type_anotation,
  [421] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [428] = 1,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
  [432] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [436] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [440] = 1,
    ACTIONS(136), 1,
      sym_identifier,
  [444] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [448] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [452] = 1,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [456] = 1,
    ACTIONS(144), 1,
      anon_sym_COLON,
  [460] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [464] = 1,
    ACTIONS(148), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 53,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 137,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 199,
  [SMALL_STATE(19)] = 213,
  [SMALL_STATE(20)] = 227,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 260,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 298,
  [SMALL_STATE(25)] = 308,
  [SMALL_STATE(26)] = 318,
  [SMALL_STATE(27)] = 328,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 348,
  [SMALL_STATE(30)] = 358,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 378,
  [SMALL_STATE(33)] = 383,
  [SMALL_STATE(34)] = 388,
  [SMALL_STATE(35)] = 395,
  [SMALL_STATE(36)] = 402,
  [SMALL_STATE(37)] = 409,
  [SMALL_STATE(38)] = 414,
  [SMALL_STATE(39)] = 421,
  [SMALL_STATE(40)] = 428,
  [SMALL_STATE(41)] = 432,
  [SMALL_STATE(42)] = 436,
  [SMALL_STATE(43)] = 440,
  [SMALL_STATE(44)] = 444,
  [SMALL_STATE(45)] = 448,
  [SMALL_STATE(46)] = 452,
  [SMALL_STATE(47)] = 456,
  [SMALL_STATE(48)] = 460,
  [SMALL_STATE(49)] = 464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expression, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expression, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expression, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 4, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 7),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 7), SHIFT_REPEAT(44),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_anotation, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, .production_id = 8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
