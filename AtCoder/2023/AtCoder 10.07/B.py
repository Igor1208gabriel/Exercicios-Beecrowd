n = int(input())
vitorias = [0]*n

for i in range(n):
    est = input()
    lest = list(est)
    for j in lest:
        if j == "o":
            vitorias[i] +=1

for i in range(n):
    print((vitorias.index(max(vitorias)) +1), end=" ")
    vitorias[vitorias.index(max(vitorias))] = -1