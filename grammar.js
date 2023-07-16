module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => repeat(
      $.declaration
    ),

    _alias: $ => /[a-z]\w*/,

    _constant: $ => /[A-Z]\w*/,

    _delimited_symbol: $ => /:["']@?_*[A-Za-z]\w*["']/,

    _global: $ => /\$[a-zA-Z]\w+/,

    _integer: $ => /[0-9][0-9_]*/,

    _interface: $ => /_[A-Z]\w*/,

    _ivar: $ => /@\w+/,

    _method: $ => /_*[A-za-z]\w*[!?]?/,

    _scope: $ => token("::"),

    _symbol: $ => /:@?_*[A-Za-z]\w*/,

    declaration: $ => choice(
      $.class_declaration,
      $.module_declaration,
      $.interface_declaration,
      $.type_alias_declaration,
      $.constant_declaration,
      $.global_declaration
    ),

    class_declaration: $ => seq(
      "class",
      $.class_name,
      // $.module_type_parameters,
      // < $.class_name $.type_arguments
      optional($.members),
      "end"
    ),

    module_declaration: $ => seq(
      "module",
      alias($.class_name, $.module_name),
      // $.module_type_parameters,
      // : $.module_self_types,
      optional($.members),
      "end"
    ),

    interface_declaration: $ => seq(
      "interface",
      $.interface_name,
      // $.module_type_parameters,
      // $.interface_members,
      "end"
    ),

    type_alias_declaration: $ => seq(
      "type",
      $.alias_name,
      // $.module_type_parameters,
      "=",
      $.type
    ),

    constant_declaration: $ => seq(
      alias($._constant, $.constant),
      ":",
      $.type
    ),
    
    global_declaration: $ => seq(
      alias($._global, $.global),
      ":",
      $.type
    ),

    members: $ => repeat1($.member),

    member: $ => choice(
      $.ivar_member,
      // $.method_member,
      $.attribute_member,
      $.include_member,
      $.extend_member,
      $.prepend_member,
      $.alias_member,
      $.visibility_member
    ),

    ivar_member: $ => seq(
      $.ivar_name,
      ":",
      $.type
    ),

    // method_member: $ => seq(
    //   $.visibility,
    //   "def",
    //   $.method_name,
    //   ":",
    //   $.method_types
    // ),

    attribute_member: $ => seq(
      optional($.visibility),
      $.attribute_type,
      $.method_name,
      optional(seq("(", optional($.ivar_name), ")")),
      ":",
      $.type
    ),

    include_member: $ => seq(
      "include",
      choice($.class_name, $.interface_name),
      // $.type_arguments
    ),

    extend_member: $ => seq(
      "extend",
      choice($.class_name, $.interface_name),
      // $.type_arguments
    ),

    prepend_member: $ => seq(
      "prepend",
      $.class_name,
      // $.type_arguments
    ),

    alias_member: $ => seq(
      "alias",
      choice(
        seq($.method_name, $.method_name),
        seq($.singleton_method_name, $.singleton_method_name)
      )
    ),

    visibility_member: $ => seq(
      $.visibility,
      token.immediate("\n")
    ),

    visibility: $ => choice(
      "private",
      "public"
    ),

    alias_name: $ => seq(
      optional($.namespace),
      $._alias
    ),

    class_name: $ => seq(
      optional($.namespace),
      $._constant
    ),

    interface_name: $ => seq(
      optional($.namespace),
      $._interface
    ),

    ivar_name: $ => $._ivar,

    namespace: $ => choice(
      $._scope,
      seq(optional($.namespace), $._constant, $._scope)
    ),

    method_name: $ => $._method,

    singleton_method_name: $ => seq(
      "self.",
      $._method,
    ),

    attribute_type: $ => choice(
      "attr_reader",
      "attr_writer",
      "attr_accessor"
    ),

    type: $ => choice(
      $.builtin_type,
      $.literal_type,
      $.operator_type,
      $.namespaceable_type,
    ),

    builtin_type: $ => choice(
      "top",
      "bot",
      "self",
      "instance",
      "class",
      "nil",
      "bool",
      "void",
      "untyped"
    ),

    literal_type: $ => choice(
      $.string_literal,
      $.symbol_literal,
      alias($._integer, $.integer_literal),
      $.true_literal,
      $.false_literal
    ),

    operator_type: $ => choice(
      $.union_type,
      $.intersection_type,
      $.optional_type
    ),

    namespaceable_type: $ => seq(
      choice($.class_name, $.interface_name, $.alias_name),
      // $.type_arguments
    ),

    string_literal: $ => choice(
      /'.*'/, /".*"/
    ),

    symbol_literal: $ => choice(
      $._symbol,
      $._delimited_symbol
    ),

    true_literal: $ => token("true"),

    false_literal: $ => token("false"),

    integer_literal: $ => /[0-9][0-9_]*/,

    union_type: $ => prec.right(
      seq($.type, "|", $.type)
    ),

    intersection_type: $ => prec.right(
      seq($.type, "&", $.type)
    ),

    optional_type: $ => seq(
      $.type, token.immediate("?")
    )
  }
})

function list(...rules) {
  return optional(list1(...rules))
}

function list1(...rules) {
  rules = choice(...rules)

  return seq(rules, repeat(seq(",", rules)))
}
