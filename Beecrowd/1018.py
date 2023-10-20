n = int(input())
notas = [100, 50, 20, 10, 5, 2, 1]
c = 0
 
print(n)
 
for nota in notas:
    qtd_notas = n // nota
    c += qtd_notas
    n -= qtd_notas * nota
    print(f"{qtd_notas} nota(s) de R$ {nota},00")