x = int(input())

participantes = []
soma = 0
for i in range(x):
    um, dois = map(str, input().split())
    soma+= int(dois)
    participantes.append(um)

participantes.sort()
soma = soma%x

print(participantes[soma])