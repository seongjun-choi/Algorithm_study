def bi_search(x, array):
    start = 0
    end = len(array) - 1

    while start <= end:
        mid = (start + end) // 2

        if array[mid] == x:
            return True
        elif array[mid] > x:
            end = mid - 1
        else:
            start = mid + 1
    return False


n = int(input())

a = list(map(int, input().split()))

m = int(input())

b = list(map(int, input().split()))
a.sort()
for i in b:
    if bi_search(i, a):
        print(1)
    else:
        print(0)

# set 활용해서 o(1)으로 in 사용가능
# n = int(input())
# A = list(map(int,input().split()))
# m = int(input())
# B = list(map(int,input().split()))

# A = set(A)
# for num in B:
#     if num in A:
#         print(1)
#     else:
#         print(0)
