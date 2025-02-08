#! /bin/bash

g++ -std=c++20 code.cpp -o box/code.out

start=$(date +%s%N)
box/code.out <txt/in.txt
end=$(date +%s%N)

time=$(( (end-start)/1000000))
echo -e "\n________________"
echo "time: $time ms"

