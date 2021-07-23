import sys as s
def getDay(mon):
    mon = int(mon)
    cov = [31,28,31, 30,31,30, 31,31,30, 31,30,31]
    if(mon == 1):
        return 0
    else:
        days = 0
        for i in range(mon-1):
            days += cov[i]
        return days

def getDayOfWeek(w):
        day = (w+4)%7
        if(day == 0):
            return "Saturday"
        elif(day == 1):
            return "Sunday"
        elif(day == 2):
            return "Monday"
        elif(day == 3):
            return "Tuesday"
        elif(day == 4):
            return "Wednesday"
        elif(day == 5):
            return "Thursday"
        else:
            return "Friday"

def main():
    ar = []
    for i in s.stdin.readline().split():
        ar.append(int(i))
    conversion = ar[0] + getDay(ar[1])
    print(getDayOfWeek(conversion))


main()