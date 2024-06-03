import heapq

def cuca_problema(N, ordens, idades):
    fila_prioridade = []

    for i in range(N):
        heapq.heappush(fila_prioridade, (ordens[i], idades[i]))

    fila_prioridade.reverse()
    print(fila_prioridade)

    ans = []

    while fila_prioridade:
        idade, nome = heapq.heappop(fila_prioridade)
        ans.append(idade)

    return ans

N = int(input())
ordem = input().split()
idade = input().split()

resultado = cuca_problema(N, ordem, idade)
print(*resultado)
