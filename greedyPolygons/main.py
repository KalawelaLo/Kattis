import sys as s
import math as m

def main():
    cases = int(s.stdin.readline())
    while(cases > 0):
        cases -= 1
        sides, length, exp_dist, grabs = tuple(map(float, s.stdin.readline().split()))
        apothem = length / (2.0 * m.tan(m.pi/sides))
        circle = m.pi * (exp_dist * grabs) * (exp_dist*grabs)
        new_sides = grabs * exp_dist * length * sides
        area = sides * length * (apothem) / 2.0 + new_sides + circle
        print(area)

    


if __name__ == "__main__":
    main()