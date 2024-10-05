def is_prime_number(x):
    if x == 1:
        return False
    for i in range(2,x):
        if x%i == 0:
            return False
    return True

n = int(input())
array = list(map(int, input().split()))
prime_count = 0
for i in array:
    if is_prime_number(i):
        prime_count += 1

print(prime_count)
