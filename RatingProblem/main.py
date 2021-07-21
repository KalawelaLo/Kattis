import sys
judges, alreadyJudged = sys.stdin.readline().split()
judges = int(judges)
alreadyJudged = int(alreadyJudged)
minnes = [3.0]*judges
maxxes = [-3.0]*judges
for i in range(alreadyJudged):
    maxxes[i] = float(input())
    minnes[i] = maxxes[i]
judges = float(judges)
m = sum(maxxes)/judges
n = sum(minnes)/judges
a = ""
a += str(m)
a += " "
a += str(n)
print(a)
