#!/bin/bash

if [ -d $1 ];then
  find $1 -name "main.cpp" -type f | sed -E 's/([A-Za-z0-9]+)\/([A-Za-z0-9]+)\/main.cpp/add_executable(\1_\2 \1\/\2\/main.cpp)/' >> ./CMakeLists.txt
  git add .
  git commit -m "Initalized $1"
  cd $1 || exit
fi
