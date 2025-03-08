import sys

input = sys.stdin.readline

n = int(input())

s = set()

for _ in range(n):
    command = input().split()
    if len(command) == 1:
        if command[0] == "all":
            s = set(range(1, 21))
        else:
            s = set()
    else:
        cmd, target = command[0], command[1]
        target = int(command[1])
        if cmd == "add":
            s.add(target)
        elif cmd == "remove":
            s.discard(target)
        elif cmd == "check":
            if target in s:
                print(1)
            else:
                print(0)
        elif cmd == "toggle":
            if target in s:
                s.discard(target)
            else:
                s.add(target)
