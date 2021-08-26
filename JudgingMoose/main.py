import sys

def main():
    left, right = list(map(int, sys.stdin.readline().split()))
    res = ""
    if left != right:
        res += "Odd "
    else:
        res += "Even "
    right = max(left, right)
    res += str(right*2)

    if(left == right == 0):
        print("Not a moose")
    else:
        print(res)

if __name__ == "__main__":
    main()