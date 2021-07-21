import sys

inputstring = sys.stdin.readline()
ar = [0] * 3
ar[0] = 1
for char in inputstring:
    if char == 'A':
        tmp = ar[0]
        ar[0] = ar[1]
        ar[1] = tmp
    if char == 'B':
        tmp = ar[1]
        ar[1] = ar[2]
        ar[2] = tmp
    if char == 'C':
        tmp = ar[0]
        ar[0] = ar[2]
        ar[2] = tmp

index = ar.index(1) + 1
print(index)
