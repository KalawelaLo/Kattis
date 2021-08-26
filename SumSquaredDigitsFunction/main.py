import sys

def main():
    cases = int(sys.stdin.readline())
    while(cases > 0):
        cases += -1
        this_case, base, num = list(map(int, sys.stdin.readline().split()))
        sum = 0
        while(num > 0):
            dig = num % base
            sum += dig*dig
            num = (num - dig)/base
        print(this_case, int(sum))



if __name__ == "__main__":
    main()