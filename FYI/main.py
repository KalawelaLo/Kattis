import sys as s

def main():
    phone_number = s.stdin.readline()[:3]
    if phone_number == "555":
        print(1)
    else:
        print(0)

if __name__ == "__main__":
    main()