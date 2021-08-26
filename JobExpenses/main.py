import sys

def main():
    sys.stdin.readline()
    ledger = list(map(int, sys.stdin.readline().split())) 
    expenses = 0
    for tran in ledger:
        if tran < 0:
            expenses -= tran
    print(expenses)

if __name__ == "__main__":
    main()