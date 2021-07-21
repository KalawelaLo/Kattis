import sys
x = [0]*4
y = [0]*4
for i in range(3):
    x[i], y[i] = sys.stdin.readline().split()
if x[0] == x[1]:
    x[3] = x[2]
if x[0] == x[2]:
    x[3] = x[1]
if x[1] == x[2]:
    x[3] = x[0]
if y[0] == y[1]:
    y[3] = y[2]
if y[0] == y[2]:
    y[3] = y[1]
if y[1] == y[2]:
    y[3] = y[0]

out = ""
out += x[3]
out += " "
out += y[3]
print(out)
