#import sys
#input = sys.stdin.readline

n = int(input())
words = []

for _ in range(n):
    words.append(input())

words = list(set(words))
words.sort()
words.sort(key = len)

for x in words:
    print(x)