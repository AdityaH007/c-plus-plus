vim.cmd [[packadd packer.nvim]]

return require('packer').startup(function(use)
  -- Packer can manage itself
  use 'wbthomason/packer.nvim'



use {
  'nvim-telescope/telescope.nvim', tag = '0.1.8',
-- or                            , branch = '0.1.x',
  requires = { {'nvim-lua/plenary.nvim'} }
}



use({ 'scottmckendry/cyberdream.nvim',
       as = "cyberdream",
       })



use( 'nvim-treesitter/nvim-treesitter', { run=':TSUpdate'})

use 'nvim-lua/plenary.nvim'
use 'ThePrimeagen/harpoon'
use 'mbbill/undotree'
use 'tpope/vim-fugitive'

--lsp
use {
  'VonHeikemen/lsp-zero.nvim',
  branch = 'v3.x',
  requires = {
    --- Uncomment the two plugins below if you want to manage the language servers from neovim
    {'williamboman/mason.nvim'},
    {'williamboman/mason-lspconfig.nvim'},

    {'neovim/nvim-lspconfig'},
    {'hrsh7th/nvim-cmp'},
    {'hrsh7th/cmp-nvim-lsp'},
    {'L3MON4D3/LuaSnip'},
  }
}

--bracket
	
use {
    "windwp/nvim-autopairs",
    event = "InsertEnter",
    config = function()
        require("nvim-autopairs").setup {}
end
}

-- using packer.nvim
use {
  'nmac427/guess-indent.nvim',
  config = function() require('guess-indent').setup {} end,
}

  end)

