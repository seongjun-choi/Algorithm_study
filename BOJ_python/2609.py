n, m = map(int, input().split())


def gcd(n, m):
    while m > 0:
        n, m = m, n % m
    return n


def lcm(n, m):
    result = n * m // gcd(n, m)
    return result


print(gcd(n, m))
print(lcm(n, m))
