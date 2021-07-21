import sys
import math
def parse():
    line = sys.stdin.readline().split()
    radius = float(line[0])
    totalPoints = int(line[1])
    circlePoints = int(line[2])
    return (radius, totalPoints, circlePoints)

def calcCircle(rad):
    return math.pi*rad*rad

def simCircle(rad, tot, ctot):
    square = 2*rad
    square = square*square
    ratio = ctot/float(tot)
    return square*ratio

def main():
    while True:
        r, m, c = parse()
        if(r == 0.0):
            break
        else:
            out = ""
            out += str(calcCircle(r))
            out +=  " "
            out += str(simCircle(r, m, c))
            print(out)

main()
