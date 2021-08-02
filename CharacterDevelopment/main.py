import sys as s

def main():
    characters = int(s.stdin.readline())
    print( (1<<characters) - characters - 1 )


if __name__ == "__main__":
    main()