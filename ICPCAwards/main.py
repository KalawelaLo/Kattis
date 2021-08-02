import sys as s
def main():
    cases = int(s.stdin.readline())
    college_set = set()
    printed = 0
    while(cases > 0):
        college, team = tuple(s.stdin.readline().strip().split())
        if(college not in college_set):
            college_set.add(college)
            print(college, team, sep=" ")
            printed += 1
        if(printed == 12):
            break


if __name__ == "__main__":
    main()