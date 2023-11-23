rounds, nota = map(int,input().split())
notas = list(map(int,input().split()))

notaf = sum(notas) - (min(notas) + max(notas))
ans = nota - notaf

if ans > 100:
    ans = -1

print(ans)
