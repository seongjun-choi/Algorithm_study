import sys
from collections import deque

input = sys.stdin.readline
sys.setrecursionlimit(10**6)

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


# def bfs(x, y):
#     queue = deque([[x, y]])
#     matrix[x][y] = 0

#     while queue:
#         x, y = queue.popleft()
#         for i in range(4):
#             nx = x + dx[i]
#             ny = y + dy[i]

#             if nx < 0 or nx >= m or ny < 0 or ny >= n:
#                 continue
#             if matrix[nx][ny] == 1:
#                 queue.append([nx, ny])
#                 matrix[nx][ny] = 0


def dfs(x, y):
    matrix[x][y] = 0

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx < 0 or nx >= m or ny < 0 or ny >= n:
            continue
        if matrix[nx][ny] == 1:
            matrix[nx][ny] = 0
            dfs(nx, ny)


t = int(input())
for _ in range(t):
    cnt = 0
    m, n, k = map(int, input().split())
    # m,n = x,y
    matrix = [[0 for _ in range(n)] for _ in range(m)]

    for _ in range(k):
        a, b = map(int, input().split())
        matrix[a][b] = 1

    for i in range(m):
        for j in range(n):
            if matrix[i][j] == 1:
                # bfs(i, j)
                dfs(i, j)
                cnt += 1
    print(cnt)
