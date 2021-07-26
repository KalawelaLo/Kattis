import sys as s
def main():
    cases = int(s.stdin.readline())
    food_set = set()
    while(cases):
        cases -= 1
        line = list(map(int, s.stdin.readline().split()))
        for i in range(line[0], line[1]+1):
            food_set.add(i)
    print(len(food_set))

main()
