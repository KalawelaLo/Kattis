import sys as s

def main():
    cases = int(s.stdin.readline())
    while(cases > 0):
        cases += -1
        ar = []
        for i in s.stdin.readline().split():
            ar.append(int(i))
        turtles = 0
        maxRepo = ar.pop(0) * 2
        while(len(ar)>0):
            if(ar[0]==0):
                break
            if(maxRepo < ar[0]):
                turtles += ar[0]-maxRepo
            maxRepo = ar.pop(0) * 2
        print(turtles)

main()