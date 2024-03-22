#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  anon_sym_number = 5,
  anon_sym_fn = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COLON = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
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
  sym_call_expression = 25,
  sym_let_binding = 26,
  sym_binary_expression = 27,
  sym_plus_expression = 28,
  sym_minus_expression = 29,
  aux_sym_program_repeat1 = 30,
  aux_sym_function_declaration_repeat1 = 31,
  aux_sym_call_expression_repeat1 = 32,
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
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_call_expression] = "call_expression",
  [sym_let_binding] = "let_binding",
  [sym_binary_expression] = "binary_expression",
  [sym_plus_expression] = "plus_expression",
  [sym_minus_expression] = "minus_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_call_expression] = sym_call_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_binary_expression] = sym_binary_expression,
  [sym_plus_expression] = sym_plus_expression,
  [sym_minus_expression] = sym_minus_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_call_expression_repeat1] = aux_sym_call_expression_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_call_expression] = {
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
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function = 1,
  field_kind = 2,
  field_name = 3,
  field_parameter = 4,
  field_parameters = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_kind] = "kind",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_name, 1},
  [5] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [7] =
    {field_name, 1},
    {field_parameter, 3, .inherited = true},
    {field_parameters, 3},
  [10] =
    {field_parameter, 0},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(7);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(37),
    [sym_statement] = STATE(4),
    [sym_block] = STATE(20),
    [sym_expression] = STATE(12),
    [sym_declaration] = STATE(20),
    [sym_type] = STATE(13),
    [sym_function_declaration] = STATE(19),
    [sym_call_expression] = STATE(13),
    [sym_let_binding] = STATE(19),
    [sym_binary_expression] = STATE(13),
    [sym_plus_expression] = STATE(15),
    [sym_minus_expression] = STATE(15),
    [aux_sym_program_repeat1] = STATE(4),
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
    [sym_block] = STATE(20),
    [sym_expression] = STATE(12),
    [sym_declaration] = STATE(20),
    [sym_type] = STATE(13),
    [sym_function_declaration] = STATE(19),
    [sym_call_expression] = STATE(13),
    [sym_let_binding] = STATE(19),
    [sym_binary_expression] = STATE(13),
    [sym_plus_expression] = STATE(15),
    [sym_minus_expression] = STATE(15),
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
    [sym_statement] = STATE(5),
    [sym_block] = STATE(20),
    [sym_expression] = STATE(12),
    [sym_declaration] = STATE(20),
    [sym_type] = STATE(13),
    [sym_function_declaration] = STATE(19),
    [sym_call_expression] = STATE(13),
    [sym_let_binding] = STATE(19),
    [sym_binary_expression] = STATE(13),
    [sym_plus_expression] = STATE(15),
    [sym_minus_expression] = STATE(15),
    [aux_sym_program_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(32),
    [sym_number] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(20),
    [sym_expression] = STATE(12),
    [sym_declaration] = STATE(20),
    [sym_type] = STATE(13),
    [sym_function_declaration] = STATE(19),
    [sym_call_expression] = STATE(13),
    [sym_let_binding] = STATE(19),
    [sym_binary_expression] = STATE(13),
    [sym_plus_expression] = STATE(15),
    [sym_minus_expression] = STATE(15),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
  },
  [5] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(20),
    [sym_expression] = STATE(12),
    [sym_declaration] = STATE(20),
    [sym_type] = STATE(13),
    [sym_function_declaration] = STATE(19),
    [sym_call_expression] = STATE(13),
    [sym_let_binding] = STATE(19),
    [sym_binary_expression] = STATE(13),
    [sym_plus_expression] = STATE(15),
    [sym_minus_expression] = STATE(15),
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
    ACTIONS(38), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17] = 3,
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
  [36] = 4,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(50), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [56] = 2,
    ACTIONS(58), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [72] = 2,
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
  [88] = 2,
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
  [104] = 4,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(70), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [124] = 2,
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
  [140] = 2,
    ACTIONS(74), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [156] = 2,
    ACTIONS(78), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [172] = 2,
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
  [186] = 2,
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
  [200] = 2,
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
  [214] = 2,
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
  [228] = 2,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(70), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [242] = 2,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(98), 5,
      sym_identifier,
      anon_sym_fn,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
  [256] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    STATE(15), 2,
      sym_plus_expression,
      sym_minus_expression,
    STATE(13), 3,
      sym_type,
      sym_call_expression,
      sym_binary_expression,
  [275] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    STATE(15), 2,
      sym_plus_expression,
      sym_minus_expression,
    STATE(13), 3,
      sym_type,
      sym_call_expression,
      sym_binary_expression,
  [294] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(15), 2,
      sym_plus_expression,
      sym_minus_expression,
    STATE(13), 3,
      sym_type,
      sym_call_expression,
      sym_binary_expression,
  [313] = 4,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_call_expression_repeat1,
    STATE(36), 1,
      sym_type,
  [326] = 4,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_call_expression_repeat1,
    STATE(36), 1,
      sym_type,
  [339] = 4,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_call_expression_repeat1,
    STATE(36), 1,
      sym_type,
  [352] = 3,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
  [362] = 3,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_function_declaration_repeat1,
  [372] = 3,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
  [382] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [389] = 1,
    ACTIONS(122), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [394] = 1,
    ACTIONS(109), 2,
      sym_number,
      anon_sym_RPAREN,
  [399] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [406] = 2,
    ACTIONS(124), 1,
      anon_sym_number,
    STATE(42), 1,
      sym_type_anotation,
  [413] = 1,
    ACTIONS(126), 1,
      anon_sym_COMMA,
  [417] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [421] = 1,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [425] = 1,
    ACTIONS(132), 1,
      sym_identifier,
  [429] = 1,
    ACTIONS(134), 1,
      anon_sym_EQ,
  [433] = 1,
    ACTIONS(136), 1,
      anon_sym_COMMA,
  [437] = 1,
    ACTIONS(138), 1,
      anon_sym_COMMA,
  [441] = 1,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
  [445] = 1,
    ACTIONS(142), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 17,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 313,
  [SMALL_STATE(26)] = 326,
  [SMALL_STATE(27)] = 339,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 362,
  [SMALL_STATE(30)] = 372,
  [SMALL_STATE(31)] = 382,
  [SMALL_STATE(32)] = 389,
  [SMALL_STATE(33)] = 394,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 406,
  [SMALL_STATE(36)] = 413,
  [SMALL_STATE(37)] = 417,
  [SMALL_STATE(38)] = 421,
  [SMALL_STATE(39)] = 425,
  [SMALL_STATE(40)] = 429,
  [SMALL_STATE(41)] = 433,
  [SMALL_STATE(42)] = 437,
  [SMALL_STATE(43)] = 441,
  [SMALL_STATE(44)] = 445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 4, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expression, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expression, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expression, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expression, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, .production_id = 4), SHIFT_REPEAT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 4, .production_id = 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_anotation, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
