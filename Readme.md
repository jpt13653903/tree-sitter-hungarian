# Tree-sitter-hungarian

[![CI][ci]](https://github.com/jpt13653903/tree-sitter-hungarian/actions/workflows/ci.yml)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)

Hungarian notation grammar for language-injection

## Use Case

This parser is meant to be used as an injected language for Neovim Tree-sitter
setups, typically for C or C++. The purpose is to hide the Hungarian prefixes
where the company coding standard demands it.

![Screenshot](screenshots/example.png)

## Setup Process

Setup depends on the version of nvim-treesitter:

### nvim-treesitter on `main`

Configure your `treesitter.lua` (or equivalent) as follows:

```lua
vim.api.nvim_create_autocmd('User', { pattern = 'TSUpdate',
callback = function()
  require('nvim-treesitter.parsers').hungarian = {
    install_info = {
      url     = "https://github.com/jpt13653903/tree-sitter-hungarian.git",
      files   = { 'src/parser.c', 'src/scanner.c' },
      branch  = 'master',
      queries = 'queries/hungarian',
    },
  }
end})

languages = {
  -- Some list of languages...
  'hungarian',
  -- Some more languages...
}
local treesitter = require('nvim-treesitter')
treesitter.install(languages)

vim.api.nvim_create_autocmd('FileType', {
  pattern  = languages,
  callback = function() vim.treesitter.start() end,
})
```

Then copy the contents of the `injections` folder to your `after/queries`
folder.

### nvim-treesitter on `master` (legacy)

Configure your `treesitter.lua` (or equivalent) as follows:

```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()

parser_config.hungarian = {
  install_info = {
    url = "https://github.com/jpt13653903/tree-sitter-hungarian.git",
    files = { 'src/parser.c', 'src/scanner.c' },
    branch = 'master',
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = 'hungarian',
}

local treesitter = require('nvim-treesitter.configs')

treesitter.setup {
  ensure_installed = {
    -- Some list of languages...
    'hungarian',
    -- Some more languages...
  },

  -- Some other options and configuration...
}
```

Then copy the `queries` folder to your `after` configuration folder, typically
`~/.config/nvim/after` on Linux and `~/AppData/Local/nvim/after` on Windows.

Also copy the contents of the `injections` folder to your `after/queries`
folder.  These are separate in order to pass the automated tests.

Finally, run `:TSUpdate`.

## Building

- Follow the instructions [here][ts-docs] to setup your development environment.
- Run `npm install --save-dev tree-sitter-cli`
- Add `node_modules/.bin` to your environment path
- Run `tree-sitter generate`
- Run `tree-sitter test`

[ci]: https://img.shields.io/github/actions/workflow/status/jpt13653903/tree-sitter-hungarian/ci.yml?logo=github&label=CI
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[ts-docs]: https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started

