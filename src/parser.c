#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  anon_sym_let = 5,
  anon_sym_var = 6,
  anon_sym_const = 7,
  anon_sym_EQ = 8,
  anon_sym_fn = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  sym_program = 12,
  sym_statement = 13,
  sym_block = 14,
  sym_expression_statement = 15,
  sym_declaration = 16,
  sym_let_binding = 17,
  sym_function_declaration = 18,
  sym_binary_expression = 19,
  sym_plus_expression = 20,
  sym_minus_expression = 21,
  aux_sym_program_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_fn] = "fn",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_block] = "block",
  [sym_expression_statement] = "expression_statement",
  [sym_declaration] = "declaration",
  [sym_let_binding] = "let_binding",
  [sym_function_declaration] = "function_declaration",
  [sym_binary_expression] = "binary_expression",
  [sym_plus_expression] = "plus_expression",
  [sym_minus_expression] = "minus_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_block] = sym_block,
  [sym_expression_statement] = sym_expression_statement,
  [sym_declaration] = sym_declaration,
  [sym_let_binding] = sym_let_binding,
  [sym_function_declaration] = sym_function_declaration,
  [sym_binary_expression] = sym_binary_expression,
  [sym_plus_expression] = sym_plus_expression,
  [sym_minus_expression] = sym_minus_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [anon_sym_fn] = {
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
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
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
};

enum ts_field_identifiers {
  field_kind = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
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
      if (eof) ADVANCE(1);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(23),
    [sym_statement] = STATE(5),
    [sym_block] = STATE(16),
    [sym_expression_statement] = STATE(10),
    [sym_declaration] = STATE(16),
    [sym_let_binding] = STATE(13),
    [sym_function_declaration] = STATE(13),
    [sym_binary_expression] = STATE(6),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(16),
    [sym_expression_statement] = STATE(10),
    [sym_declaration] = STATE(16),
    [sym_let_binding] = STATE(13),
    [sym_function_declaration] = STATE(13),
    [sym_binary_expression] = STATE(6),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(20),
    [anon_sym_RBRACE] = ACTIONS(15),
    [sym_number] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(26),
    [anon_sym_var] = ACTIONS(26),
    [anon_sym_const] = ACTIONS(26),
    [anon_sym_fn] = ACTIONS(29),
  },
  [3] = {
    [sym_statement] = STATE(4),
    [sym_block] = STATE(16),
    [sym_expression_statement] = STATE(10),
    [sym_declaration] = STATE(16),
    [sym_let_binding] = STATE(13),
    [sym_function_declaration] = STATE(13),
    [sym_binary_expression] = STATE(6),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(32),
    [sym_number] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(16),
    [sym_expression_statement] = STATE(10),
    [sym_declaration] = STATE(16),
    [sym_let_binding] = STATE(13),
    [sym_function_declaration] = STATE(13),
    [sym_binary_expression] = STATE(6),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(34),
    [sym_number] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
  },
  [5] = {
    [sym_statement] = STATE(2),
    [sym_block] = STATE(16),
    [sym_expression_statement] = STATE(10),
    [sym_declaration] = STATE(16),
    [sym_let_binding] = STATE(13),
    [sym_function_declaration] = STATE(13),
    [sym_binary_expression] = STATE(6),
    [sym_plus_expression] = STATE(11),
    [sym_minus_expression] = STATE(11),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(40), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [16] = 4,
    ACTIONS(46), 1,
      anon_sym_PLUS,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(44), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [36] = 2,
    ACTIONS(52), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [52] = 2,
    ACTIONS(56), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [68] = 4,
    ACTIONS(46), 1,
      anon_sym_PLUS,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(60), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [88] = 2,
    ACTIONS(64), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [104] = 2,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(68), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [118] = 2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(72), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [132] = 2,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(76), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [146] = 2,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(80), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [160] = 2,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(60), 5,
      sym_identifier,
      anon_sym_let,
      anon_sym_var,
      anon_sym_const,
      anon_sym_fn,
  [174] = 4,
    STATE(6), 1,
      sym_binary_expression,
    STATE(9), 1,
      sym_expression_statement,
    ACTIONS(9), 2,
      sym_number,
      sym_identifier,
    STATE(11), 2,
      sym_plus_expression,
      sym_minus_expression,
  [189] = 4,
    STATE(6), 1,
      sym_binary_expression,
    STATE(8), 1,
      sym_expression_statement,
    ACTIONS(9), 2,
      sym_number,
      sym_identifier,
    STATE(11), 2,
      sym_plus_expression,
      sym_minus_expression,
  [204] = 4,
    STATE(6), 1,
      sym_binary_expression,
    STATE(7), 1,
      sym_expression_statement,
    ACTIONS(9), 2,
      sym_number,
      sym_identifier,
    STATE(11), 2,
      sym_plus_expression,
      sym_minus_expression,
  [219] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [226] = 1,
    ACTIONS(82), 1,
      anon_sym_EQ,
  [230] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [234] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [238] = 1,
    ACTIONS(88), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 16,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 52,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 189,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 219,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 230,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 4, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 4, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_expression, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_expression, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_expression, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_expression, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
