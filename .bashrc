#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'

alias build='./build.sh'
alias intr='g++ code.cpp -o box/code.out; box/code.out'
alias outf='g++ code.cpp -o box/code.out; box/code.out <txt/in.txt >txt/out.txt'

alias pyrun='python code.py <txt/in.txt'
alias rsrun='rustc code.rs; ./code'

alias set='cd ~/WorkSpace; nvim -S ./session.nv'
alias record='gpu-screen-recorder -w screen -f 60 -a default_output -o ~/Videos/output.mp4'

PS1='[\u@\h \W]\$ '

export ATAC_KEY_BINDINGS="$HOME/.config/atac/vim_key_bindings.toml"

fastfetch
eval "$(starship init bash)"
