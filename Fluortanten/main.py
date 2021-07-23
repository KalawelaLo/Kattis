import sys as s
def sumAr(ar, t, prev):
    if(t == 0):
        res = 0
        prev = (1) * ar[0] 
        for i in range(len(ar)):
            res += (i + 2) * ar[i]
    elif(t == len(ar)):
        res = prev
    else:
        res = prev
        prev += (t+1) * ar[t]
        for i in range(t, len(ar)):
            res += (i+2)*ar[i]
    return prev, res

def main():
    numOfChilds = int(s.stdin.readline())
    ar = []
    for i in s.stdin.readline().strip().split():
        ar.append(int(i))
    ar.remove(0)
    prev = 0
    max = None
    for i in range(len(ar)+1):
        prev, su = sumAr(ar, i, prev)
        if(max == None):
            max = su
        elif (max < su):
            max = su
    print(max)
main()