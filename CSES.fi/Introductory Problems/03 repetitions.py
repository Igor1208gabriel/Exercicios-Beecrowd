atcg = list(input().lower())
 
c = atcg[0]
count = 0
max = 0
for i in atcg:
    if c == i:
        count +=1
    else:
        if max < count:
            max = count
        count = 1
        c = i 
if max < count:
    max = count
print(max)
