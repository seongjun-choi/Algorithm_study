n = int(input())

array = []
for _ in range(n):
    array.append(list(map(int, input().split())))

array.sort()

for i in array:
    print(i[0], i[1])
