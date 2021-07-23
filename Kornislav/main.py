import sys as s
def main():
    ar = []
    for i in s.stdin.readline().split():
        ar.append(int(i))
    ar.sort()
    print(ar[0]*ar[2])

main()