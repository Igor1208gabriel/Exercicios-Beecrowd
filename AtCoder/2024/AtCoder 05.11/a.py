x = input()
a = list(map(int,input().split()))

for i in a:
    if i > a[0]:
        print(a.index(i)+1)
        quit()
print(-1)