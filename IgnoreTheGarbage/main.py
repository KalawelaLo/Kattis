import sys as s
def convert(original_num: int):
    out = ""
    while(original_num>0):
        digit = original_num%7
        original_num = int(original_num / 7)
        if digit == 3:
            out += "5"
        elif digit == 4:
            out += "9"
        elif digit == 5:
            out += "8"
        else:
            out += str(digit)
    return out

def main():
    for line in s.stdin:
        if(line.strip() == ''):
            break
        print(convert(int(line.strip())))

main()