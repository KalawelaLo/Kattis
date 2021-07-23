import sys as s
def main():
    x = int(s.stdin.readline())
    ar = list(map(int, s.stdin.readline().split()))
    childNumber = 0
    sum = 0
    for elem in ar:
        if elem == 0:
            continue
        childNumber += 1
        sum += childNumber * elem
    e_sum = 0
    max_sum = sum + e_sum
    ind = x
    for elem in reversed(ar):
        sum -= ind * elem
        e_sum += (ind + 1) * elem
        ind -= 1
        p_sum = sum + e_sum
        max_sum = max(p_sum, max_sum)
    print(max_sum)
main()