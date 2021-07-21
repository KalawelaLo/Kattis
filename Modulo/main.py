import sys
mod_set = {}
mod_set = set()
for i in range(10):
    mod_set.add(int(sys.stdin.readline())%42)
print(len(mod_set))