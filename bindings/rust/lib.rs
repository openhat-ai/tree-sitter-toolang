use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_toolang() -> *const ();
}

pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_toolang) };

#[cfg(test)]
mod tests {
    #[test]
    fn can_load_language() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        let source = "flow work:\n  repeat 2 times:\n    run improve\n  run publish\n";
        let tree = parser.parse(source, None).unwrap();
        assert!(!tree.root_node().has_error());
        let statements = tree
            .root_node()
            .named_child(0)
            .unwrap()
            .named_child(0)
            .unwrap()
            .child_by_field_name("body")
            .unwrap()
            .named_child(0)
            .unwrap();
        assert_eq!(statements.named_child_count(), 2);
        let body = statements
            .named_child(0)
            .unwrap()
            .child_by_field_name("body")
            .unwrap();
        assert_eq!(body.named_child_count(), 1);
    }
}
