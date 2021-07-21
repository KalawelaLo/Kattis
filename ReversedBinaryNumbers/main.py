import sys as s
def main():
    num = int(s.stdin.readline())
    num = format(num, "b")
    num = num[::-1]
    num = int(num, 2)
    print(num)
    return

def __main__():
    main()

__main__()