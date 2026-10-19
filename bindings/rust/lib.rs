use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_toolang() -> *const ();
}

pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_toolang) };

#[cfg(test)]
mod tests {
    #[test]
    fn malformed_block_colons_cannot_reopen_enclosing_headers() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for header in ["generate :", "keep in 2 lanes:", "sort ascending:"] {
            for binding in ["", "let value = ", "let "] {
                for nested in [false, true] {
                    let indent = if nested { "    " } else { "  " };
                    let prefix = if nested {
                        "  repeat:\n    run inner\n"
                    } else {
                        ""
                    };
                    let source = format!("flow first:\n  run before\n{prefix}{indent}{binding}{header}\n{indent}  Orphaned text.\n{indent}## Following.\n{indent}run after\n## Next.\nflow next:\n  pass\n");
                    let tree = parser.parse(&source, None).unwrap();
                    let root = tree.root_node();
                    assert!(root.has_error());
                    let flow = root.named_child(0).unwrap();
                    assert_eq!(
                        flow.child_by_field_name("colon").unwrap().start_position(),
                        tree_sitter::Point::new(0, 10)
                    );
                    let body = flow.child_by_field_name("body").unwrap();
                    assert!(!body.named_child(0).unwrap().has_error());
                    let body = if nested {
                        body.named_child(1)
                            .unwrap()
                            .child_by_field_name("body")
                            .unwrap()
                    } else {
                        body
                    };
                    let mut cursor = body.walk();
                    let after = body
                        .named_children(&mut cursor)
                        .find(|node| {
                            node.kind() == "run_statement"
                                && node
                                    .child_by_field_name("target")
                                    .unwrap()
                                    .utf8_text(source.as_bytes())
                                    .unwrap()
                                    == "after"
                        })
                        .unwrap();
                    assert!(!after.has_error());
                    let mut cursor = body.walk();
                    assert!(body
                        .named_children(&mut cursor)
                        .any(|node| node.kind() == "item_doc"));
                    assert_eq!(root.named_child(1).unwrap().kind(), "item_doc");
                    assert!(!root.named_child(2).unwrap().has_error());
                }
            }
        }
    }

    #[test]
    fn rejected_first_directives_keep_the_authored_body_baseline() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for (kind, following, entry) in [
            ("flow", "run after", "run_statement"),
            ("agic", "user: Following.", "message"),
        ] {
            let source = format!("{kind} first:\n  modles = fast\n    Orphaned content.\n  ## Following.\n  {following}\n## Next.\nflow next:\n  pass\n");
            let tree = parser.parse(&source, None).unwrap();
            let root = tree.root_node();
            assert!(root.has_error());
            let owner = root.named_child(0).unwrap();
            assert_eq!(owner.kind(), kind);
            let body = owner.child_by_field_name("body").unwrap();
            assert_eq!(body.start_position(), tree_sitter::Point::new(1, 0));
            let mut cursor = body.walk();
            let after = body
                .named_children(&mut cursor)
                .find(|node| {
                    node.kind() == entry
                        && node.utf8_text(source.as_bytes()).unwrap().trim() == following
                })
                .unwrap();
            assert!(!after.has_error());
            let mut cursor = body.walk();
            let doc = body
                .named_children(&mut cursor)
                .find(|node| node.kind() == "item_doc")
                .unwrap();
            assert_eq!(doc.utf8_text(source.as_bytes()).unwrap(), "## Following.\n");
            assert_eq!(root.named_child(1).unwrap().kind(), "item_doc");
            let next = root.named_child(2).unwrap();
            assert_eq!(next.kind(), "flow");
            assert!(!next.has_error());
        }
    }

    #[test]
    fn rejected_outer_prefix_docs_preserve_the_next_member_documentation() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for (header, member, body_kind) in [
            ("flow first:", "run one", "flow_body"),
            ("agic first:", "user: One.", "agic_body"),
            ("struct First:", "one: Text", "struct_body"),
            ("prompt first:", "one = Value", "cap_body"),
            ("chore first:", "one = Value", "chore_body"),
        ] {
            let source = format!("{header}\n#@ Wrong scope.\n# Outer.\n\n  ## First.\n  {member}\n## Next.\nflow next:\n  pass\n");
            let tree = parser.parse(&source, None).unwrap();
            let root = tree.root_node();
            assert!(root.has_error());
            let body = root
                .named_child(0)
                .unwrap()
                .child_by_field_name("body")
                .unwrap();
            assert_eq!(body.kind(), body_kind);
            assert_eq!(body.start_byte(), source.find("  ## First.").unwrap());
            let doc = body.named_child(0).unwrap();
            assert_eq!(doc.kind(), "item_doc");
            assert!(!doc.has_error());
            assert_eq!(doc.utf8_text(source.as_bytes()).unwrap(), "## First.\n");
            assert_eq!(root.named_child(1).unwrap().kind(), "item_doc");
            let next = root.named_child(2).unwrap();
            assert!(!next.has_error());
            assert_eq!(next.kind(), "flow");
        }
    }

    #[test]
    fn leading_member_docs_use_the_body_baseline_and_preserve_empty_boundaries() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        let source = "flow first:\n  ## Before outer.\n# Outer.\n\n  ## First.\n    ## Deeper.\n  run one\n  ## Second.\n  run two\nprompt empty:\n## Next.\nflow next:\n  pass\n";
        let tree = parser.parse(source, None).unwrap();
        let root = tree.root_node();
        assert!(!root.has_error());
        let flow = root.named_child(0).unwrap();
        let body = flow.child_by_field_name("body").unwrap();
        assert_eq!(body.start_byte(), source.find("  ## First.").unwrap());
        assert_eq!(body.end_byte(), source.find("prompt empty:").unwrap());
        let mut cursor = flow.walk();
        let outer: Vec<_> = flow
            .named_children(&mut cursor)
            .filter(|node| node.kind() == "item_doc")
            .map(|node| node.utf8_text(source.as_bytes()).unwrap())
            .collect();
        assert_eq!(outer, ["## Before outer.\n"]);
        let mut cursor = body.walk();
        let docs: Vec<_> = body
            .named_children(&mut cursor)
            .filter(|node| node.kind() == "item_doc")
            .map(|node| node.utf8_text(source.as_bytes()).unwrap())
            .collect();
        assert_eq!(docs, ["## First.\n", "## Deeper.\n", "## Second.\n"]);
        let empty = root.named_child(1).unwrap();
        assert!(empty.child_by_field_name("body").is_none());
        assert_eq!(empty.end_byte(), source.find("## Next.").unwrap());
        assert_eq!(root.named_child(2).unwrap().kind(), "item_doc");
        assert_eq!(root.named_child(3).unwrap().kind(), "flow");
    }

    #[test]
    fn rejected_comments_pending_statements_and_until_errors_keep_their_owners() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        let source = "flow bad_comment:\n  run before\n  #@ Wrong scope.\n  run after\nflow missing:\n  models = fast\n## Next.\nflow bad_until:\n  repeat:\n    run worker\n    until 42\n  run after_repeat\nflow next:\n  pass\n";
        let tree = parser.parse(source, None).unwrap();
        let root = tree.root_node();
        assert!(root.has_error());
        let mut cursor = root.walk();
        let items: Vec<_> = root.named_children(&mut cursor).collect();
        assert_eq!(
            items.iter().map(|node| node.kind()).collect::<Vec<_>>(),
            ["flow", "flow", "item_doc", "flow", "flow"]
        );
        for (index, name) in [
            (0, "bad_comment"),
            (1, "missing"),
            (3, "bad_until"),
            (4, "next"),
        ] {
            assert_eq!(
                items[index]
                    .child_by_field_name("name")
                    .unwrap()
                    .utf8_text(source.as_bytes())
                    .unwrap(),
                name
            );
        }
        assert!(items[1].end_byte() <= items[2].start_byte());
        assert_eq!(items[2].utf8_text(source.as_bytes()).unwrap(), "## Next.\n");
        assert!(!items[4].has_error());
        for (index, expected) in [(0, vec!["before", "after"]), (3, vec!["after_repeat"])] {
            let body = items[index].child_by_field_name("body").unwrap();
            let mut cursor = body.walk();
            let targets: Vec<_> = body
                .named_children(&mut cursor)
                .filter(|node| node.kind() == "run_statement")
                .map(|node| {
                    assert!(!node.has_error());
                    node.child_by_field_name("target")
                        .unwrap()
                        .utf8_text(source.as_bytes())
                        .unwrap()
                })
                .collect();
            assert_eq!(targets, expected);
        }
        let repeat = items[3]
            .child_by_field_name("body")
            .unwrap()
            .child_by_field_name("statement")
            .unwrap();
        let body = repeat.child_by_field_name("body").unwrap();
        let worker = body.child_by_field_name("statement").unwrap();
        assert_eq!(worker.kind(), "run_statement");
        assert_eq!(
            worker.utf8_text(source.as_bytes()).unwrap().trim(),
            "run worker"
        );
        assert_eq!(
            body.named_child(1).unwrap().kind(),
            "invalid_flow_statement"
        );
    }

    #[test]
    fn native_recovery_synchronizes_at_statements_and_program_items() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for prefix in [
            "flow broken:\n  map in 2 lanes in 3 lanes using worker\n  ## Following.\n  run after\n",
            "flow broken:\n  hands += worker\n  run after\n",
            "agic broken:\n  recall = wrong\n  user: Following.\n",
            "struct Broken:\n  value Text\n",
            "flow broken(\n",
        ] {
            let source = format!("{prefix}flow next:\n  pass\n");
            let tree = parser.parse(&source, None).unwrap();
            let root = tree.root_node();
            assert!(root.has_error());
            let next = root.named_child(root.named_child_count() - 1).unwrap();
            assert_eq!(next.kind(), "flow");
            assert!(!next.has_error());
            assert_eq!(next.start_byte(), prefix.len());
            assert_eq!(
                next.child_by_field_name("name")
                    .unwrap()
                    .utf8_text(source.as_bytes())
                    .unwrap(),
                "next"
            );
            if prefix.starts_with("flow broken:") {
                let body = root
                    .named_child(0)
                    .unwrap()
                    .child_by_field_name("body")
                    .unwrap();
                assert_eq!(
                    body.child_by_field_name("statement")
                        .unwrap()
                        .child_by_field_name("target")
                        .unwrap()
                        .utf8_text(source.as_bytes())
                        .unwrap(),
                    "after"
                );
            }
        }
    }

    #[test]
    fn public_cst_fields_and_body_ranges_keep_their_roles() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        let source = "prompt empty:\n## Next.\nflow work:\n# Preface.\n  instruct = named\n  run worker\n  repeat:\n    run worker\n    until: Ready.\n";
        let tree = parser.parse(source, None).unwrap();
        let root = tree.root_node();
        assert!(!root.has_error());
        assert!(root
            .named_child(0)
            .unwrap()
            .child_by_field_name("body")
            .is_none());
        assert_eq!(root.named_child(1).unwrap().kind(), "item_doc");
        let flow = root.named_child(2).unwrap();
        let body = flow.child_by_field_name("body").unwrap();
        assert_eq!(body.start_byte(), source.find("  instruct").unwrap());
        let directive = body.child_by_field_name("directive").unwrap();
        for (field, kind) in [
            ("key", "directive_key"),
            ("operator", "directive_operator"),
            ("value", "identifier"),
        ] {
            assert_eq!(directive.child_by_field_name(field).unwrap().kind(), kind);
        }
        let run = body.child_by_field_name("statement").unwrap();
        assert_eq!(
            run.child_by_field_name("target").unwrap().kind(),
            "runnable_name"
        );
        let condition = body
            .named_child(body.named_child_count() - 1)
            .unwrap()
            .child_by_field_name("body")
            .unwrap()
            .child_by_field_name("until")
            .unwrap();
        let target = condition.child_by_field_name("target").unwrap();
        assert_eq!(target.kind(), "inline_agic");
        assert!(target.child_by_field_name("return").is_none());
        assert_eq!(
            target
                .child_by_field_name("content")
                .unwrap()
                .utf8_text(source.as_bytes())
                .unwrap(),
            " Ready."
        );
        assert_eq!(
            run.named_child(run.named_child_count() - 1).unwrap().kind(),
            "newline"
        );
    }

    #[test]
    fn empty_body_and_content_recovery_preserve_peer_documentation() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for header in [
            "prompt empty:",
            "chore empty:",
            "flow empty:",
            "context empty:",
            "flow empty:\n  run:",
        ] {
            for ending in ["\n", "\r\n"] {
                let source =
                    format!("{header}\n## Next.\nflow next:\n  pass\n").replace('\n', ending);
                let tree = parser.parse(&source, None).unwrap();
                let root = tree.root_node();
                assert!(!root.has_error());
                assert_eq!(root.named_child_count(), 3);
                let doc = root.named_child(1).unwrap();
                assert_eq!(doc.kind(), "item_doc");
                assert_eq!(doc.start_byte(), source.find("## Next.").unwrap());
                assert!(root.named_child(0).unwrap().end_byte() <= doc.start_byte());
                assert_eq!(
                    root.named_child(2)
                        .unwrap()
                        .child_by_field_name("name")
                        .unwrap()
                        .utf8_text(source.as_bytes())
                        .unwrap(),
                    "next"
                );
            }
        }
    }

    #[test]
    fn unit_spellings_preserve_integer_fields_and_require_prefix_lanes() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for number in [
            "0",
            "1",
            "01",
            "2",
            "0002",
            "9999999999999999999999999999999999999999",
        ] {
            for unit in ["lane", "lanes"] {
                for (head, connector) in [
                    ("generate 3", "using"),
                    ("map", "using"),
                    ("keep", "if"),
                    ("drop", "if"),
                    ("sort ascending", "by"),
                ] {
                    let source =
                        format!("flow work:\n  {head} in {number} {unit} {connector} worker\n");
                    let tree = parser.parse(&source, None).unwrap();
                    assert!(!tree.root_node().has_error());
                    let statement = tree
                        .root_node()
                        .named_child(0)
                        .unwrap()
                        .child_by_field_name("body")
                        .unwrap()
                        .child_by_field_name("statement")
                        .unwrap();
                    let lanes = statement.child_by_field_name("lanes").unwrap();
                    assert_eq!(lanes.kind(), "integer_literal");
                    assert_eq!(lanes.utf8_text(source.as_bytes()).unwrap(), number);
                    assert_eq!(lanes.child_count(), 0);
                }
            }
            for unit in ["time", "times"] {
                let source = format!("flow work:\n  repeat {number} {unit}:\n    run worker\n");
                let tree = parser.parse(&source, None).unwrap();
                assert!(!tree.root_node().has_error());
                let statement = tree
                    .root_node()
                    .named_child(0)
                    .unwrap()
                    .child_by_field_name("body")
                    .unwrap()
                    .child_by_field_name("statement")
                    .unwrap();
                assert_eq!(
                    statement
                        .child_by_field_name("count")
                        .unwrap()
                        .utf8_text(source.as_bytes())
                        .unwrap(),
                    number
                );
            }
        }
        for statement in [
            "keep if worker in 2 lanes",
            "drop if worker in 1 lane",
            "sort ascending by worker in 2 lanes",
        ] {
            let source = format!("flow work:\n  {statement}\n  run after\nflow next:\n  pass\n");
            let tree = parser.parse(source, None).unwrap();
            assert!(tree.root_node().has_error());
            assert_eq!(tree.root_node().named_child(1).unwrap().kind(), "flow");
            assert!(!tree.root_node().named_child(1).unwrap().has_error());
        }
    }

    #[test]
    fn unknown_directives_fail_only_in_the_prefix() {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into()).unwrap();
        for kind in ["agic", "flow"] {
            let body = if kind == "agic" {
                "user: Continue."
            } else {
                "run after"
            };
            let invalid = format!("{kind} work:\n  modles = fast\n  {body}\nflow next:\n  pass\n");
            let tree = parser.parse(&invalid, None).unwrap();
            let root = tree.root_node();
            assert!(root.has_error());
            let next = root.named_child(root.named_child_count() - 1).unwrap();
            assert_eq!(next.kind(), "flow");
            assert!(!next.has_error());
            assert_eq!(
                next.child_by_field_name("name")
                    .unwrap()
                    .utf8_text(invalid.as_bytes())
                    .unwrap(),
                "next"
            );
            let valid = format!("{kind} work:\n  {body}\n  modles = literal\n");
            assert!(!parser.parse(valid, None).unwrap().root_node().has_error());
        }
        for kind in ["psyche", "skill", "service", "prompt", "chore"] {
            let source =
                format!("{kind} example:\n  unknown = value\n  Body.\n  unknown = literal\n");
            let tree = parser.parse(source, None).unwrap();
            assert!(!tree.root_node().has_error());
            let body = tree
                .root_node()
                .named_child(0)
                .unwrap()
                .child_by_field_name("body")
                .unwrap();
            let property = body.child_by_field_name("property").unwrap();
            assert_eq!(property.kind(), "property");
            assert!(body.child_by_field_name("content").is_some());
        }
    }

    #[test]
    fn documentation_fields_and_queries_are_available() {
        let language = super::LANGUAGE.into();
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&language).unwrap();
        let source = "#!/usr/bin/env too\n#@ Program.\n##! Important.\n## @param _ Input.\n";
        let tree = parser.parse(source, None).unwrap();
        let root = tree.root_node();
        assert_eq!(root.kind(), "program");
        assert!(!root.has_error());
        assert_eq!(root.named_child(0).unwrap().kind(), "shebang_comment");
        for (index, kind, text) in [
            (1, "program_doc", "Program."),
            (2, "item_doc", "! Important."),
        ] {
            let comment = root.named_child(index).unwrap();
            assert_eq!(comment.kind(), kind);
            assert_eq!(
                comment.child_by_field_name("text").unwrap().kind(),
                "comment_text"
            );
            assert_eq!(
                comment
                    .child_by_field_name("text")
                    .unwrap()
                    .utf8_text(source.as_bytes())
                    .unwrap(),
                text
            );
        }
        let comment = root.named_child(3).unwrap();
        assert_eq!(comment.kind(), "param_doc");
        assert_eq!(comment.start_byte(), source.find("## @param").unwrap());
        assert_eq!(comment.end_byte(), source.len());
        assert!(comment.child_by_field_name("parameter").is_none());
        for (field, value) in [("param", "_"), ("description", "Input.")] {
            assert_eq!(
                comment
                    .child_by_field_name(field)
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
            .child_by_field_name("body")
            .unwrap();
        let bare = statements.named_child(0).unwrap();
        assert_eq!(bare.kind(), "spawn_statement");
        assert_eq!(
            bare.child_by_field_name("target").unwrap().kind(),
            "runnable_name"
        );
        let bound = statements.named_child(1).unwrap();
        assert_eq!(bound.kind(), "let_statement");
        assert_eq!(
            bound
                .child_by_field_name("local")
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
            .child_by_field_name("body")
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
        assert_eq!(target.kind(), "runnable_name");
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
            ("async run", "run_statement", "target"),
            ("spawn", "spawn_statement", "target"),
        ] {
            let source = format!("flow launch:\n  let h = {operation} worker\n  await h\n  let x = await h\n  let await h\n  let h = await h\n");
            let tree = parser.parse(&source, None).unwrap();
            assert!(!tree.root_node().has_error());
            let statements = tree
                .root_node()
                .named_child(0)
                .unwrap()
                .child_by_field_name("body")
                .unwrap();
            let launch = statements.named_child(0).unwrap();
            let statement = launch.child_by_field_name("statement").unwrap();
            assert_eq!(statement.kind(), kind);
            assert_eq!(
                statement
                    .child_by_field_name("async")
                    .map(|node| node.kind()),
                if operation == "async run" {
                    Some("async_keyword")
                } else {
                    None
                }
            );
            assert_eq!(
                statement.child_by_field_name(target).unwrap().kind(),
                "runnable_name"
            );
            for (index, name) in [(1, None), (2, Some("x")), (3, None), (4, Some("h"))] {
                let node = statements.named_child(index).unwrap();
                let await_node = if index == 1 {
                    node
                } else {
                    assert_eq!(node.kind(), "let_statement");
                    assert!(node.child_by_field_name("value").is_none());
                    assert_eq!(
                        node.child_by_field_name("local")
                            .map(|node| node.utf8_text(source.as_bytes()).unwrap().trim()),
                        name
                    );
                    node.child_by_field_name("statement").unwrap()
                };
                assert_eq!(await_node.kind(), "await_statement");
                let handle = await_node.child_by_field_name("handle").unwrap();
                assert_eq!(handle.kind(), "handle_name");
                assert_eq!(handle.child_count(), 0);
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
            .child_by_field_name("body")
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
