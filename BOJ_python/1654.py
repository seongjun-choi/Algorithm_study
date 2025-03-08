k, n = map(int, input().split())

array =[]
for _ in range(k):
    array.append(int(input()))
start , end = 1, max(array)
while start <= end:
    lines = 0
    mid = (start + end)//2
    for i in array:
        lines += i//mid
    if lines >= n:
        start = mid + 1
    else:
        end = mid - 1

print(end)

