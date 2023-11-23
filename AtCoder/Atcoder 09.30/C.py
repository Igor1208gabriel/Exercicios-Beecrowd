n, m = map(int,input().split())
fogos = [False]*n
templista = list(map(int,input().split()))

for i in templista:
    fogos[i-1] = True
print(fogos)

for i in range(n):
    x = fogos.index(True)
    if i < x:
        print(x-i)
    else:
        print(x-1)
        fogos[fogos.index(True)] = False