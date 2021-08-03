import sys as s

def main():
    cases = int(s.stdin.readline())
    while cases > 0:
        cases -= 1
        print(len(s.stdin.readline().strip()))
    
if __name__ == "__main__":
    main()