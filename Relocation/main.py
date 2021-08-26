import sys

def main():
    tech_companies, queries = list(map(int, sys.stdin.readline().split()))
    com_location = list(map(int, sys.stdin.readline().split()))
    for _ in range(queries):
        query  = list(map(int,sys.stdin.readline().split()))
        if query[0] == 1:
            com_location[query[1]-1] = query[2]
        else:
            print(abs(com_location[query[1]-1]-com_location[query[2]-1]))
    return


if __name__ == "__main__":
    main()