n = int(input())
max = 1
cnt = 1

while n > max:
    max = max + 6 * cnt
    cnt += 1

print(cnt)
