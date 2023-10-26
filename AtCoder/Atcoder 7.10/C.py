def pegarmaior(participante, participantepontos, pontoscopia):
    for i in range(len(pontoscopia)):
        if participantepontos[participante][max(pontoscopia)]

n, m  = map(int,input().split())
participantes = [0]*n

pontos = list(map(int,input().split()))
participantespontos= [0]*n
for i in range(n):
    participantespontos[i] = [0]*m

for i in range(len(participantes)):
    participantes[i] = i+1
    
print(participantespontos)

for i in range(n):
    est = input()
    lest = list(est)
    for j in range(len(lest)):
        if lest[j] == "o":
            participantes[i] += pontos[j]
            participantespontos[i][j] = 1

print(participantespontos)
print(participantes)

maior = max(participantes)

for i in range(len(participantes)):
    participante = participantes[i]
    count = 0
    pontoscopia = pontos
    for j in pontos:
        if (maior - participante) > 0:
            participante += j
            count +=1
        else:
            break
    print(count)
