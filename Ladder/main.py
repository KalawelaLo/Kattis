import sys as s
import math as m

def main():
    x, y = s.stdin.readline().split()
    x, y = float(x), float(y)
    #sin(Angle) =  O/H ----> H = O/sin(Angle)
    z = int(m.ceil(x/m.sin(y*m.pi/180)))
    print(z)
    return


main()