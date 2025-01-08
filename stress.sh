#!/bin/bash

g++ gen.cpp -o box/gen.out || { echo "C_Err0r: gen"; exit 1; }
g++ brute.cpp -o box/brute.out || { echo "C_Err0r: brute"; exit 1; }
g++ code.cpp -o box/code.out || { echo "C_Error: code"; exit 1; }

testcase=0
iteration=256
if [[ $# -gt 0 ]]; then
  iteration=$1
fi

while [[ $testcase -lt $iteration ]]; do
  echo "TestCase #$testcase"

  box/gen.out >txt/in.txt || { echo "Err0r: gen"; exit 1; }
  box/brute.out <txt/in.txt >txt/sol.txt || { echo "Err0r: brute"; exit 1; }
  box/code.out <txt/in.txt >txt/out.txt || { echo "Err0r: code"; exit 1; }

  if ! diff -q txt/out.txt txt/sol.txt; then
    echo "Err0R: #$testcase!"
    echo "Input:"
    cat txt/in.txt
    echo "Solution:"
    cat txt/sol.txt
    echo "Output:"
    cat txt/out.txt
    exit 1
  fi
  ((testcase++))
done

