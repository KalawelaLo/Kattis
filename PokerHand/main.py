import sys


def main():
    hand = sys.stdin.readline().split()
    card_count = dict()
    for card in hand:
        if card[0] not in card_count.keys():
            card_count[card[0]] = 1
        else:
            tmp = card_count[card[0]]
            tmp += 1
            card_count[card[0]]= tmp
    print(max(card_count.values()))



if __name__ == "__main__":
    main()