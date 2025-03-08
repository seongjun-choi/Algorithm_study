while True:
    x = input()
    if x == 0:
        break
    y = x[::-1]
    if x == y:
        print('yes')
    else:
        print('no')