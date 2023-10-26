n = int(input())
aurei = list(map(int,input().split()))
ans=0
for i in range(1, len(aurei)):
        if aurei[i] < aurei[i-1]:
            ans += aurei[i-1] - aurei[i]
            aurei[i] = (aurei[i-1])
print(ans)
