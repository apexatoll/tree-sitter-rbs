module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => repeat(
      $.declaration
    ),

    declaration: $ => choice(
      $.class_declaration,
      $.module_declaration,
      $.interface_declaration,
      $.type_alias_declaration,
      // $.constant_declaration,
      // $.global_declaration
    ),

    class_declaration: $ => seq(
      "class",
      // $.class_name,
      // $.module_type_parameters,
      // < $.class_name $.type_arguments
      // $.members,
      "end"
    ),

    module_declaration: $ => seq(
      "module",
      // $.module_name,
      // $.module_type_parameters,
      // : $.module_self_types,
      // $.members,
      "end"
    ),

    interface_declaration: $ => seq(
      "interface",
      // $.interface_name,
      // $.module_type_parameters,
      // $.interface_members,
      "end"
    ),

    type_alias_declaration: $ => seq(
      "type",
      // $.alias_name,
      // $.module_type_parameters,
      "=",
      $.type
    ),

    type: $ => choice(
      "untyped"
    )
  }
})
