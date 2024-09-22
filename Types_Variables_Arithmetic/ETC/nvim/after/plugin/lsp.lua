local lsp_zero = require('lsp-zero')



require('mason').setup({})
require('mason-lspconfig').setup ({
    ensure_installed = {
        'eslint',
        'lua_ls',
        'rust_analyzer',
        'clangd',
        'pylsp'
    }
})

--local lsp_zero = require('lsp-zero')

local cmp = require('cmp')
local cmp_select = {behavior =cmp.SelectBehavior.Select}
local cmp_action = require('lsp-zero').cmp_action()

cmp.setup({
  mapping = cmp.mapping.preset.insert({
    -- `Enter` key to confirm completion
    ['<CR>'] = cmp.mapping.confirm({select = false}),

    -- Ctrl+Space to trigger completion menu
    ['<C-Space>'] = cmp.mapping.complete(),

    -- Navigate between snippet placeholder
    ['<C-f>'] = cmp_action.luasnip_jump_forward(),
    ['<C-b>'] = cmp_action.luasnip_jump_backward(),

    -- Scroll up and down in the completion documentation
    ['<C-u>'] = cmp.mapping.scroll_docs(-4),
    ['<C-d>'] = cmp.mapping.scroll_docs(4),
  }),
  snippet = {
    expand = function(args)
      require('luasnip').lsp_expand(args.body)
    end,
  },
})




lsp_zero.on_attach(function(client, bufnr)
  -- see :help lsp-zero-keybindings
  -- to learn the available actions
  
end)

require('lspconfig').rust_analyzer.setup({})
require('lspconfig').lua_ls.setup({})
require('lspconfig').clangd.setup({})
require('lspconfig').pylsp.setup({})
