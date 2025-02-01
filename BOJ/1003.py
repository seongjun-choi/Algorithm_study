t = int(input())

for _ in range(t):
    x = int(input())
    a, b = 1, 0
    for _ in range(x):
        a, b = b, a + b
    print(a, b)
