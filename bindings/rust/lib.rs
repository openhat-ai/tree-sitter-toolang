use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_toolang() -> *const ();
}

pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_toolang) };

#[cfg(test)]
mod tests {
    #[test]
    fn documentation_fields_and_queries_are_available() {
        let language = super::LANGUAGE.into();
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&language).unwrap();
        let source = "#!/usr/bin/env too\n#@ Module.\n##! Legacy.\n## @param _ Input.\n";
        let tree = parser.parse(source, None).unwrap();
        let root = tree.root_node();
        assert!(!root.has_error());
        assert_eq!(root.named_child(0).unwrap().kind(), "shebang_comment");
        for index in [1, 2] {
            let comment = root.named_child(index).unwrap();
            assert_eq!(comment.kind(), "module_doc_comment");
            assert_eq!(
                comment.child_by_field_name("text").unwrap().kind(),
                "comment_text"
            );
        }
        let comment = root.named_child(3).unwrap();
        assert_eq!(comment.kind(), "item_doc_comment");
        let tag = comment.child_by_field_name("parameter").unwrap();
        assert_eq!(tag.kind(), "param_doc_tag");
        for (field, value) in [("name", "_"), ("description", "Input.")] {
            assert_eq!(
                tag.child_by_field_name(field)
                    .unwrap()
                    .utf8_text(source.as_bytes())
                    .unwrap(),
                value
            );
        }
        for query in [
            include_str!("../../queries/highlights.scm"),
            include_str!("../../queries/injections.scm"),
            include_str!("../../queries/indents.scm"),
            include_str!("../../queries/outline.scm"),
            include_str!("../../queries/tags.scm"),
        ] {
            tree_sitter::Query::new(&language, query).unwrap();
        }
    }

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
