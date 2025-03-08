import sys
from collections import deque

input = sys.stdin.readline
n = int(input().rstrip())

queue = deque(range(1, n + 1))

while len(queue) > 1:
    queue.popleft()
    queue.rotate(-1)

print(queue[0])
