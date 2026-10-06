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
    fn spawn_targets_and_bindings_are_available() {
        let language = super::LANGUAGE.into();
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&language).unwrap();
        let source = "flow launch:\n  spawn worker\n  let job = spawn -> Text: Research.\n";
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
        let bare = statements.named_child(0).unwrap();
        assert_eq!(bare.kind(), "spawn_statement");
        assert_eq!(
            bare.child_by_field_name("target").unwrap().kind(),
            "runnable"
        );
        let bound = statements.named_child(1).unwrap();
        assert_eq!(bound.kind(), "let_statement");
        assert_eq!(
            bound
                .child_by_field_name("name")
                .unwrap()
                .utf8_text(source.as_bytes())
                .unwrap()
                .trim(),
            "job"
        );
        let spawn = bound.child_by_field_name("statement").unwrap();
        assert_eq!(spawn.kind(), "spawn_statement");
        assert_eq!(
            spawn.child_by_field_name("target").unwrap().kind(),
            "inline_agic"
        );
    }

    #[test]
    fn repeat_body_exposes_condition_in_source_order() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        let source = "flow work:\n  repeat:\n    run first\n    until done\n    run last\n";
        let tree = parser.parse(source, None).unwrap();
        assert!(!tree.root_node().has_error());
        let statement = tree
            .root_node()
            .named_child(0)
            .unwrap()
            .named_child(0)
            .unwrap()
            .child_by_field_name("body")
            .unwrap()
            .named_child(0)
            .unwrap()
            .named_child(0)
            .unwrap();
        assert!(statement.child_by_field_name("until").is_none());
        let body = statement.child_by_field_name("body").unwrap();
        assert_eq!(body.kind(), "repeat_body");
        let condition = body.child_by_field_name("until").unwrap();
        assert_eq!(condition.kind(), "until_clause");
        assert_eq!(body.named_child(1).unwrap(), condition);
        let target = condition.child_by_field_name("target").unwrap();
        assert_eq!(target.kind(), "runnable");
        assert_eq!(target.utf8_text(source.as_bytes()).unwrap().trim(), "done");
        let mut cursor = body.walk();
        let statements: Vec<_> = body
            .children_by_field_name("statement", &mut cursor)
            .collect();
        assert_eq!(statements.len(), 2);
        assert!(statements[0].end_byte() <= condition.start_byte());
        assert!(condition.end_byte() <= statements[1].start_byte());
    }

    #[test]
    fn launch_handles_share_await_fields() {
        let language = super::LANGUAGE.into();
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&language).unwrap();
        for (operation, kind, target) in [
            ("async run", "run_statement", "runnable"),
            ("spawn", "spawn_statement", "target"),
        ] {
            let source = format!("flow launch:\n  let h = {operation} worker\n  await h\n  let x = await h\n  let await h\n  let h = await h\n");
            let tree = parser.parse(&source, None).unwrap();
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
            let launch = statements.named_child(0).unwrap();
            let statement = launch.child_by_field_name("statement").unwrap();
            assert_eq!(statement.kind(), kind);
            assert_eq!(
                statement
                    .child_by_field_name("async")
                    .map(|node| node.kind()),
                if operation == "async run" {
                    Some("flow_async_keyword")
                } else {
                    None
                }
            );
            assert_eq!(
                statement.child_by_field_name(target).unwrap().kind(),
                "runnable"
            );
            for (index, name) in [(1, None), (2, Some("x")), (3, None), (4, Some("h"))] {
                let node = statements.named_child(index).unwrap();
                let await_node = if index == 1 {
                    node
                } else {
                    assert_eq!(node.kind(), "let_statement");
                    assert!(node.child_by_field_name("value").is_none());
                    assert_eq!(
                        node.child_by_field_name("name")
                            .map(|node| node.utf8_text(source.as_bytes()).unwrap().trim()),
                        name
                    );
                    node.child_by_field_name("statement").unwrap()
                };
                assert_eq!(await_node.kind(), "await_statement");
                let handle = await_node.child_by_field_name("handle").unwrap();
                assert_eq!(handle.kind(), "local_name");
                assert_eq!(handle.utf8_text(source.as_bytes()).unwrap().trim(), "h");
            }
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
        assert_eq!(body.kind(), "repeat_body");
        assert_eq!(body.named_child_count(), 1);
    }
}
