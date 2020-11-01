command CBuild :! g++ -o %.o %
command CRun :!./%.o
command CRunO :!./%.o > ./output_%.txt
command CRunI :!./%.o < input_%.txt
command CRunIO :!./%.o < input_%.txt > output_%.txt
command CBuildRun :! g++ -o %.o % && ./%.o
command CGenInputFile :e input_%.txt
command CCheckOutputFile :e output_%.txt

nmap <Leader>cb :CBuild<CR>
nmap <Leader>cB :CBuildRun<CR>
nmap <Leader>ci :CGenInputFile<CR>
nmap <Leader>co :CCheckOutputFile<CR>
nmap <Leader>cr :CRunIO<CR>
