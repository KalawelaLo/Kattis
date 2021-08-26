import sys as s


def game():
    ar = [True for i in range(11)]
    guess = int(s.stdin.readline())
    while guess != 0:
        trash, result = s.stdin.readline().split()
        if result == "low":
            for i in range(guess+1):
                ar[i] = False
        elif result == "high":
            for i in range(guess, len(ar)):
                ar[i] = False
        else:
            if ar[guess]:
                print("Stan may be honest")
            else:
                print("Stan is dishonest")
            ar = [True for i in range(11)]
        guess = int(s.stdin.readline())

def main():
    game()
    return


if __name__ == "__main__":
    main()