n, m = map(int, input().split())

array = list(map(int, input().split()))
array.sort()

sum = []
length = len(array)
for i in range(0, length - 2):
    for j in range(i + 1, length - 1):
        for k in range(j + 1, length):
            sum.append(array[i] + array[j] + array[k])

if m in sum:
    print(m)
else:
    new_sum = [x for x in sum if x < m]
    print(max(new_sum))
