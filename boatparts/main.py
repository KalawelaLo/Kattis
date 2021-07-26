import sys as s
def main():
    parts_seasons = list(map(int, s.stdin.readline().split()))
    used_parts = set()
    for i in range(parts_seasons[1]):
        part = s.stdin.readline()
        used_parts.add(part)
        if(len(used_parts) == parts_seasons[0]):
            print(i+1)
            return
    print("paradox avoided")
    

main()