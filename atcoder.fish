alias s="ac submit"
alias t="ac test"

function g
  ac gen $argv
  sh /Users/cron/ghq/github-reetok99709/reetok99709/atcorder/setup_contest.sh $argv
end

alias c="g++ main.cpp"
alias dc="g++ -D_DEBUG main.cpp"

alias ct="c;t;git_commit"
alias dct="dc;t"

function git_commit
  git add .
  git commit -m "Update $(pwd | sed -E 's/.+reetok99709\/atcorder\/(.+)\/(.+)/\1_\2/')"
end