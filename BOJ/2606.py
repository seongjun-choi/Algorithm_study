from collections import deque

v = int(input())

e = int(input())

graph = [[] for _ in range(v + 1)]
visited = [0] * (v + 1)

for i in range(e):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

# bfs로 풀이
visited[1] = 1
o = deque([1])

while o:
    c = o.popleft()
    for i in graph[c]:
        if visited[i] == 0:
            o.append(i)
            visited[i] = 1

print(sum(visited) - 1)

# dfs로 풀이
# def dfs(v):
#     visited[v] = 1
#     for i in graph[v]:
#         if visited[i] == 0:
#             dfs(i)

# dfs(1)
# print(sum(visited)-1)
