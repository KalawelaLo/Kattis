import sys as s

def main():
    hand_played = s.stdin.readline().strip()
    card_set = dict()
    for char in hand_played:
        if char in card_set:
            card_set[char] = card_set[char] + 1
        else:
            card_set[char] = 1
    sum = 0
    num_of_sets = 51
    for item in card_set.values():
        num_of_sets = min(num_of_sets, item)
        sum += item * item
    if(len(card_set) == 3):
        sum += 7 * num_of_sets
    print(sum)

if __name__ == "__main__":
    main()