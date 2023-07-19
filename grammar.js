module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => repeat($._declaration),

    _alias: $ => /[a-z]\w*/,

    _constant: $ => /[A-Z]\w*/,

    _delimited_symbol: $ => /:["']@?_*[A-Za-z]\w*["']/,

    _global: $ => /\$[a-zA-Z]\w+/,

    _integer: $ => /[0-9][0-9_]*/,

    _interface: $ => /_[A-Z]\w*/,

    _ivar: $ => /@\w+/,

    _method: $ => /_*[A-za-z]\w*[!?]?/,

    _operator_method: $ => choice(
      "==", "===", "=~", "=>",
      "!=", "!~", "~", 
      "+", "+=", "-", "-=",
      "*", "**", "**=", "*=",
      "/", "/=", "%", "%=",
      "<", "<<", "<<=", "<=", "<=>",
      ">", ">=", ">>", ">>=",
      "&", "&&", "&&=", "&=",
      "|", "|=", "||", "||=",
      "^", "^=",
      "[]", "[]="
    ),

    _scope: $ => seq("::"),

    _symbol: $ => /:@?_*[A-Za-z]\w*/,

    _unchecked: $ => seq("unchecked"),

    _var: $ => /[a-z]\w*/,

    _variance: $ => choice("in", "out"),

    _declaration: $ => choice(
      alias($.class_declaration, $.class),
      alias($.module_declaration, $.module),
      alias($.interface_declaration, $.interface),
      alias($.type_alias_declaration, $.type_alias),
      $.constant_declaration,
      $.global_declaration
    ),

    class_declaration: $ => seq(
      "class",
      $.class_name,
      optional($.module_type_parameters),
      optional($.superclass),
      optional($.members),
      "end"
    ),

    module_declaration: $ => seq(
      "module",
      alias($.class_name, $.module_name),
      optional($.module_type_parameters),
      optional($.module_reference),
      optional($.members),
      "end"
    ),

    interface_declaration: $ => seq(
      "interface",
      $.interface_name,
      optional($.module_type_parameters),
      optional($.interface_members),
      "end"
    ),

    type_alias_declaration: $ => seq(
      "type",
      $.alias_name,
      optional($.module_type_parameters),
      "=",
      $.type
    ),

    constant_declaration: $ => seq(
      alias($._constant, $.constant_name),
      ":",
      $.type
    ),
    
    global_declaration: $ => seq(
      alias($._global, $.global_name),
      ":",
      $.type
    ),

    superclass: $ => seq(
      "<",
      $.class_name,
      optional($.type_arguments)
    ),

    module_type_parameters: $ => seq(
      "[", 
      optional(alias($._unchecked, $.unchecked)),
      optional(alias($._variance, $.variance)),
      optional(choice($.type_variable, $.bound_type)),
      "]"
    ),

    module_reference: $ => seq(
      ":",
      list1(seq(
        choice($.class_name, $.interface_name),
        optional($.type_arguments),
      )),
    ),

    members: $ => repeat1($._member),

    interface_members: $ => repeat1($._interface_member),

    _member: $ => choice(
      $.ivar_member,
      $._method_member,
      $.attribute_member,
      $.include_member,
      $.extend_member,
      $.prepend_member,
      $.alias_member,
      $.visibility_member,
      $._declaration
    ),

    _interface_member: $ => choice(
      $._method_member,
      $.include_member,
      $.alias_member
    ),

    ivar_member: $ => seq(
      $.ivar_name,
      ":",
      $.type
    ),

    _method_member: $ => choice(
      $.method,
      $.singleton_method,
      $.module_function
    ),

    attribute_member: $ => seq(
      optional($.visibility),
      $.attribute_type,
      alias($.method_name, $.attribute_name),
      optional(seq("(", optional($.ivar_name), ")")),
      ":",
      $.type
    ),

    include_member: $ => seq(
      "include",
      choice($.class_name, $.interface_name),
      optional($.type_arguments)
    ),

    extend_member: $ => seq(
      "extend",
      choice($.class_name, $.interface_name),
      optional($.type_arguments)
    ),

    prepend_member: $ => seq(
      "prepend",
      $.class_name,
      optional($.type_arguments)
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

    attribute_type: $ => choice(
      "attr_reader",
      "attr_writer",
      "attr_accessor"
    ),

    type_variable: $ => $._constant,

    var_name: $ => $._var,

    ivar_name: $ => $._ivar,

    method_name: $ =>  choice($._method, $._operator_method),

    singleton_method_name: $ => seq(
      "self",
      ".",
      $._method,
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

    namespace: $ => prec.right(
      choice(
        $._scope,
        seq(optional($.namespace), $._constant, $._scope)
      )
    ),

    method: $ => seq(
      optional($.visibility),
      "def",
      $.method_name,
      ":",
      $.method_signatures
    ),

    singleton_method: $ => seq(
      optional($.visibility),
      "def",
      "self",
      ".",
      $.method_name,
      ":",
      $.method_signatures
    ),

    module_function: $ => seq(
      "def",
      "self?",
      ".",
      $.method_name,
      ":",
      $.method_signatures
    ),

    method_signatures: $ => seq(
      $.signature,
      repeat(seq("|", choice($.signature, $.supertype)))
    ),

    // Higher precedence than union types
    signature: $ => prec(1, seq(
      optional($.method_type_parameters),
      optional($.parameters),
      optional($.block),
      "->",
      $.type
    )),

    method_type_parameters: $ => seq(
      "[", list1($.type_variable, $.bound_type), "]"
    ),

    block: $ => seq(
      optional("?"),
      "{",
      optional($.parameters),
      "->",
      $.type,
      "}",
    ),

    supertype: $ => token("..."),

    parameters: $ => seq(
      "(",
      list(
        $.parameter,
        $.optional_parameter,
        $.splat_parameter,
        $.keyword_parameter,
        $.optional_keyword_parameter,
        $.double_splat_parameter
      ),
      ")"
    ),

    _parameter: $ => seq(
      $.type,
      optional($.var_name)
    ),

    parameter: $ => $._parameter,

    optional_parameter: $ => seq("?", $._parameter),

    splat_parameter: $ => seq("*", $._parameter),

    keyword_parameter: $ => seq(
      alias($.var_name, $.hash_key),
      ":",
      $._parameter
    ),

    optional_keyword_parameter: $ => seq(
      "?",
      alias($.var_name, $.hash_key),
      ":",
      $._parameter
    ),

    double_splat_parameter: $ => seq("**", $._parameter),

    type_arguments: $ => seq(
      "[", list1($.type), "]"
    ),

    type: $ => choice(
      $.builtin_type,
      $.literal_type,
      $.operator_type,
      $.namespaceable_type,
      $.class_singleton_type,
      $.record_type,
      $.tuple_type,
      $.proc_type
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
      $.integer_literal,
      $.true_literal,
      $.false_literal
    ),

    operator_type: $ => choice(
      $.union_type,
      $.intersection_type,
      $.optional_type
    ),

    namespaceable_type: $ => seq(
      optional($._scope),
      choice($.class_name, $.interface_name, $.alias_name),
      optional($.type_arguments)
    ),

    bound_type: $ => seq(
      $.type_variable,
      "<",
      choice(
        $.class_singleton_type,
        seq(choice($.class_name, $.interface_name), optional($.type_arguments))
      )
    ),

    string_literal: $ => choice(
      /'.*'/, /".*"/
    ),

    integer_literal: $ => $._integer,

    symbol_literal: $ => choice(
      $._symbol,
      $._delimited_symbol
    ),

    true_literal: $ => token("true"),

    false_literal: $ => token("false"),

    integer_literal: $ => /[0-9][0-9_]*/,

    union_type: $ => prec.right(
      choice(
        seq($.type, "|", $.type),
        seq("(", $.type, "|", $.type, ")")
      )
    ),

    intersection_type: $ => prec.right(
      seq($.type, "&", $.type)
    ),

    optional_type: $ => seq(
      $.type, token.immediate("?")
    ),

    class_singleton_type: $ => seq(
      "singleton(", $.class_name, ")",
    ),
    
    record_type: $ => seq(
      "{",
      list(seq(alias($.var_name, $.hash_key), ":", $.type)),
      "}"
    ),

    tuple_type: $ => seq(
      "[", list($.type), "]"
    ),

    // Prevents conflict with union types
    proc_type: $ => prec.right(
      seq("^", $.parameters, "->", $.type)
    ),
  }
})

function list(...rules) {
  return optional(list1(...rules))
}

function list1(...rules) {
  rules = choice(...rules)

  return seq(rules, repeat(seq(",", rules)))
}
