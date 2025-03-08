n = int(input())
array = list(map(int, input().split()))
t , p = map(int,input().split())
T=0
for i in array:
    if i%t == 0:
        T += i//t
    else:
        T += (i//t + 1)

P1 = n//p
P2 = n%p
print(T)
print(P1, P2)