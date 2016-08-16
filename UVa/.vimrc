set tabstop=4 softtabstop=4 shiftwidth=4 noexpandtab

set autoread

set splitbelow
set splitright

filetype on

map	 <F8> <ESC>:w<CR>:!g++ -std=c++11 -ggdb -Wall %<CR>
map! <F8> <ESC>:w<CR>:!g++ -std=c++11 -ggdb -Wall %<CR>

map  <F9> <ESC>:w<CR>:!g++ -std=c++11 -ggdb -Wall %  && ./a.out < input.txt > output.txt<CR>
map! <F9> <ESC>:w<CR>:!g++ -std=c++11 -ggdb -Wall %  && ./a.out < input.txt > output.txt<CR>

map  <F10> <ESC>:wa<CR>:!./a.out < input.txt > output.txt<CR>
map! <F10> <ESC>:wa<CR>:!./a.out < input.txt > output.txt<CR>

autocmd VimEnter * :30vsp input.txt
autocmd VimEnter * :20sp output.txt
"autocmd VimEnter * :sba


"End of vimrc
