n = float(input())
notas = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00]
moedas = [1.00, 0.50, 0.25, 0.10, 0.05, 0.01]
c = 0
     
print("NOTAS:")
for nota in notas:
    qtd_notas = int(n // nota)
    c += qtd_notas
    n -= qtd_notas * nota
    print(f"{qtd_notas} nota(s) de R$ {nota:.2f}")

print('MOEDAS:')
for moeda in moedas:
    qtd_moedas = int(n // moeda)
    c += qtd_moedas
    n -= qtd_moedas * moeda
    print(f"{qtd_moedas} moeda(s) de R$ {moeda:.2f}")