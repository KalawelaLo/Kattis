import sys as s

def main():
    cases = int(s.stdin.readline())
    while(cases>0):
        cases -= 1
        line = s.stdin.readline()
        loc = line.find("Simon says")
        if(loc != -1):
            print(line.split("says",1)[1])

main()