# tree-sitter-xresources

[![CI][ci]](https://github.com/ValdezFOmar/tree-sitter-xresources/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
<!-- NOTE: uncomment these if you're publishing packages: -->
<!-- [![npm][npm]](https://www.npmjs.com/package/tree-sitter-xresources) -->
<!-- [![crates][crates]](https://crates.io/crates/tree-sitter-xresources) -->
<!-- [![pypi][pypi]](https://pypi.org/project/tree-sitter-xresources/) -->

A tree-sitter parser for `.Xresources` or `.Xdefaults` files.

This grammar also parses some C preprocessor macros/directives since
[`xrdb(1)`][xrdb-1] passes the file through a C preprocessor before
loading the resources.

## References

- `XrmGetDatabase(3)`, [*FILE SYNTAX* section][XrmGetFileDatabase]
- `X(7)`, [*RESOURCES* section][x-7-resources]
- [`xrdb(1)`][xrdb-1]
- [The C Preprocessor (GNU implementation)][cpp]
- [tree-sitter-c] grammar

[XrmGetFileDatabase]: https://man.archlinux.org/man/XrmGetFileDatabase.3#FILE_SYNTAX
[x-7-resources]: https://man.archlinux.org/man/X.7#RESOURCES
[xrdb-1]: https://man.archlinux.org/man/xrdb.1
[cpp]: https://gcc.gnu.org/onlinedocs/cpp/index.html
[tree-sitter-c]: https://github.com/tree-sitter/tree-sitter-c

[ci]: https://img.shields.io/github/actions/workflow/status/ValdezFOmar/tree-sitter-xresources/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-xresources?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-xresources?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-xresources?logo=pypi&logoColor=ffd242
