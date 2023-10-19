comeco, fim = map(int,input().split())
duracao = 24
if comeco < fim:
    duracao = fim - comeco
elif comeco > fim:
    duracao = (24-comeco) + fim
print(f"O JOGO DUROU {duracao} HORA(S)")