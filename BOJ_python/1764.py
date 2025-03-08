import sys

input = sys.stdin.readline

n, m = map(int, input().split())
s1 = set()
s2 = set()
s3 = set()

for _ in range(n):
    s1.add(input().rstrip())

for _ in range(m):
    s2.add(input().rstrip())

s3 = s1 & s2
s3 = sorted(s3)

print(len(s3))
for i in range(len(s3)):
    print(s3[i])
