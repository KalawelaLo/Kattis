import sys as s
import math as m

def main():
    out = ""
    line = s.stdin.readline()
    js = int(m.sqrt(len(line))) 
    ind = js - 1
    start = ind
    while(len(out)!=len(line)):
        out += line[ind]
        ind += js
        if(ind > len(line)-1):
            start -= 1
            ind = start
    print(out)

def __start__():
    cases = int(s.stdin.readline())
    for i in range(cases):
        main()

__start__()