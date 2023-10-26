n = int(input())
matriz = [0]*n
for i in range(n):
    matriz[i] = [0]*n

for i in range(n):
    for j in range(n):
        matriz[i][j] = 1
        print(matriz)

print(matriz)