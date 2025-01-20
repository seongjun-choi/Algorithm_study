n, k = map(int, input().split())


def factorial(a):
    result = 1
    for i in range(1, a + 1):
        result *= i
    return result


print(int(factorial(n) / factorial(n - k) / factorial(k)))
