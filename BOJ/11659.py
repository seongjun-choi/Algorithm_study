import sys

input = sys.stdin.readline

n, m = map(int, input().split())

arr = list(map(int, input().split()))

result = 0
sum = [0]

for i in range(n):
    result += arr[i]
    sum.append(result)

for _ in range(m):
    a, b = map(int, input().split())
    print(sum[b] - sum[a - 1])
