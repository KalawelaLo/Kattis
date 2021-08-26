import sys
def main():
    cases = int(sys.stdin.readline()) - 1
    prev_time, prev_distance = list(map(int, sys.stdin.readline().split()))
    max_speed = 0
    while(cases > 0):
        cases += -1
        curr_time, curr_distance = list(map(int, sys.stdin.readline().split()))
        prev_time = curr_time-prev_time
        prev_distance = curr_distance - prev_distance
        speed = prev_distance/prev_time
        if(speed > max_speed):
            max_speed = speed
        prev_distance = curr_distance
        prev_time = curr_time
    print(int(max_speed))

if __name__ == "__main__":
    main()