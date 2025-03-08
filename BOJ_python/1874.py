n = int(input())
stack = []
for _ in range(n):
    stack.append(input())

for i in range(n):
    if stack[i] >= 3:
        if stack[i+1] < stack[i]-2:
            print('NO')
            break
    
     