import sys as s
def main():

    gears = list(map(int,s.stdin.readline().split()))
    while(gears[0] != 0):
        front  = list(map(float,s.stdin.readline().split()))
        back = list(map(float,s.stdin.readline().split()))
        gear_ratios = []
        for j in front:
            for k in back:
                gear_ratios.append(k/j)

        gear_ratios.sort()
        drive_ratios = []
        for i in range(len(gear_ratios)-1):
            drive_ratios.append(gear_ratios[i+1]/gear_ratios[i])
        a = max(drive_ratios)
        print("{:0.2f}".format(a))
        gears = list(map(int,s.stdin.readline().split()))


if __name__ == "__main__":
    main()