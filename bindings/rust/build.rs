fn main() {
    let src_dir = std::path::Path::new("src");

    cc::Build::new()
        .include(src_dir)
        .file(src_dir.join("parser.c"))
        .file(src_dir.join("scanner.c"))
        .warnings(false)
        .compile("tree-sitter-toolang");

    for file in ["parser.c", "scanner.c", "keywords.h"] {
        println!("cargo:rerun-if-changed=src/{file}");
    }
}
