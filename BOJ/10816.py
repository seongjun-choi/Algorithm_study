n = int(input())
nList = input().split()
nDic = {}
m = int(input())
mList = input().split()

for a in nList:
    if a not in nDic.keys():
        nDic[a] = 1
    else:
        nDic[a] += 1

for b in mList:
    if b in nDic.keys():
        print(nDic.get(b), end=" ")
    else:
        print(0, end=" ")
