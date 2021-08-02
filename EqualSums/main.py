import sys as s
from itertools import combinations as c
def main():
    cases = int(s.stdin.readline())
    num = 1
    while(cases>0):
        print(f"Case #{ num }:")
        cases -= 1
        num += 1
        solve()

def solve():
    ar = list(map(int, s.stdin.readline().split()))
    ar.pop(0)
    ar = find_all_subsets(ar)
    ar_dict = dict()
    for items in ar:
        if sum(items) not in ar_dict:
            ar_dict[sum(items)] = items
        else:
            print(' '.join(map(str,items)))
            print(' '.join(map(str, ar_dict[sum(items)])))
            return

def find_all_subsets(ar):
    res = []
    for i in range(1,len(ar)):
        res.extend(c(ar, i))
    return res

if __name__ == "__main__":
    main()