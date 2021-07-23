import sys as s


def getAr():
    ar = []
    for i in s.stdin.readline().split():
        ar.append(int(i))
    return ar

def main():
    cases = int(s.stdin.readline())
    while(cases > 0):
        cases -= 1
        ar = getAr()
        if(ar[0]*ar[1]==ar[2]):
            print("Possible")
        elif(ar[0]+ar[1]==ar[2]):
             print("Possible")
        elif(ar[0]-ar[1]==ar[2]):
            print("Possible")
        elif(ar[0]/ar[1]==ar[2] and ar[0]%ar[1]==0):
            print("Possible")
        elif(ar[1]-ar[0]==ar[2]):
            print("Possible")
        elif(ar[1]/ar[0]==ar[2] and ar[1]%ar[0]==0):
            print("Possible")
        else:
            print("Impossible")



main()