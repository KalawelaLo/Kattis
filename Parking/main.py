import sys
case = int(sys.stdin.readline())
while (case > 0):
    input = int(sys.stdin.readline())
    places = [0] * input
    inputs = sys.stdin.readline().split()
    for i in range(input):
        places[i]=int(inputs[i])
    mi = min(places)
    ma = max(places)
    distance = (ma-mi)*2
    print(distance)
    case -= 1