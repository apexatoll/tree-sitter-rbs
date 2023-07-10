module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => repeat(
      $.declaration
    ),

    declaration: $ => choice(
      $.class_declaration,
      // $.module_declaration,
      // $.interface_declaration,
      // $.type_alias_declaration,
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
    )
  }
})
