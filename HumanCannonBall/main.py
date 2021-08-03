import sys as s
import math as m

def main():
    cases = int(s.stdin.readline())
    while cases > 0:
        cases -= 1
        v_zero , theta, distance_to_wall, wall_botton, wall_top = tuple(map(float, s.stdin.readline().split()))
        # x(t) = v_0*t*cos(0) We need to solve for t
        # x(t)/(v_0*cos(0))
        t_at_wall = distance_to_wall / (v_zero * m.cos(theta * m.pi / 180 ) )
        #now we find height at that time
        #y(t) = v_0*t*sin(0)- 1/2  gt^2
        y_at_wall = v_zero * t_at_wall * m.sin(theta * m.pi /180) - 0.5 * 9.81 * t_at_wall * t_at_wall

        if y_at_wall > wall_botton and y_at_wall < wall_top and abs(wall_top - y_at_wall) >= 1.0 and abs(y_at_wall-wall_botton) >= 1.0:
            print("Safe")
        else:
            print("Not Safe")
    
if __name__ == "__main__":
    main()