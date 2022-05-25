#!/bin/bash

if [ -d $1 ];then
  find $1 -name "main.cpp" -type f | sed -E 's/([A-Za-z0-9]+)\/([A-Za-z0-9]+)\/main.cpp/add_executable(\1_\2 \1\/\2\/main.cpp)/' >> ./CMakeLists.txt
  find abc244 -name "main.cpp" -type f | sed -E 's/([A-Za-z0-9]+)\/([A-Za-z0-9]+)\/main.cpp/\1\/\2/' | while read line
  do
    git add $line
    git commit -m "Initalized $line"
  done
  cd $1
fi
