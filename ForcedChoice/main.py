import sys
def main():
    num_of_card, choosen_card, steps = list(map(int, sys.stdin.readline().split()))
    for _ in range(steps):
        choosen = list(map(int, sys.stdin.readline().split()))
        choosen.pop(0)
        if choosen_card in choosen:
            print("KEEP")
        else:
            print("REMOVE")

if __name__ == "__main__":
    main()