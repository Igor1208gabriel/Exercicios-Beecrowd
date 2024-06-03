
def crianca_irritante(N, nomes, ordem_idade):
    idade_por_nome = {nomes[i]: ordem_idade[i] for i in range(N)}
    irritantes = []

    for i in range(N):
        mais_nova_irritante = min(nomes[:i + 1], key=lambda x: idade_por_nome[x])
        irritantes.append(mais_nova_irritante)

    return irritantes

N = int(input())
nomes = input().split()
ordem_idade = input().split()

resultado = crianca_irritante(N, nomes, ordem_idade)
print(' '.join(resultado))
