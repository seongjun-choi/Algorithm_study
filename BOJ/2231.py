n = int(input())
array =[]
for i in range(n):
    num = sum(map(int, str(i)))
    num_sum = i + num
    if num_sum == n:
        array.append(i)

if not array:
    print(0)
else:
    print(min(array))
