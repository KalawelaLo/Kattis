import sys as s
def main():
    cases = int(s.stdin.readline())
    while(cases > 0):
        cases -= 1
        l0 = s.stdin.readline().strip()
        l1 = s.stdin.readline().strip()
        out = ""
        for i in range(len(l0)):
            if(l0[i] == l1[i]):
                out += "."
            else:
                out += "*"
        l0 = l0 + "\n" + l1 + "\n" + out + "\n"
        print(l0)
main()