ini, ope = map(int,input().split())
total = list(map(int,input().split()))
freq = [0]*(ini+10)

for i in total:
    freq[i]+=1

cont = 0
for i in freq:
    if i % 2 == 1:
        cont +=1

print(ini-cont) 