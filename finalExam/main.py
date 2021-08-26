import sys

def main():
    total_questions = int(sys.stdin.readline())
    total_correct = 0
    prev_a = sys.stdin.readline()
    for _ in range(total_questions-1):
        curr_a = sys.stdin.readline()
        if prev_a == curr_a:
            total_correct += 1
        prev_a = curr_a
    print(total_correct)
    return



if __name__ == "__main__":
    main()