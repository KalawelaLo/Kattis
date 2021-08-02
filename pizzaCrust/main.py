import sys as s
import math as m

def main():
    radius , crust_distance = tuple(map(float, (s.stdin.readline().split())))
    print("{:.12f}".format((radius-crust_distance)*(radius-crust_distance)/(radius*radius)*100.0))


if __name__ == "__main__":
    main()