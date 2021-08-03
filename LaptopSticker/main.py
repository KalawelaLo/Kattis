import sys as s

def main():
    lap_width, lap_height, stick_width, stick_height = tuple(map(int, s.stdin.readline().split()))
    if lap_width - 2 >= stick_width and lap_height - 2 >= stick_height:
        print(1)
    else:
        print(0)
    return 
    
if __name__ == "__main__":
    main()