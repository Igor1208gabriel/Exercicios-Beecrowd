#tentei fazer no c++ mas python é pra essas coisa feia mesmo

n, l, r = map(int,input().split())

a = [i for i in range(1,n+1)]
b = [a[:l-1], a[l-1:r], a[r:]] 

print(*b[0], *reversed(b[1]), *b[2])