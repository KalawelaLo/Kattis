#!/bin/bash


for file in */*.in
do
    out=$(basename "$file" .in)
    python main.py <"$file"> "$out".out
done
for file in */*.ans
do
    out=$(basename "$file" .ans)
    echo "$file" 
    diff "$file" "$out".out
done


