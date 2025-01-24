import sys
from collections import deque

input = sys.stdin.readline
n = int(input().rstrip())

queue = deque(range(1, n + 1))

while True:
    if n == 1:
        break
    queue.popleft()
    queue.rotate(-1)
    if len(queue) == 1:
        break

print(queue[0])
