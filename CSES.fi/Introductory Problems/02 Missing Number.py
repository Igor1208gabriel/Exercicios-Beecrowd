n = int(input())
ahay = list(map(int,input().split()))
 
soma_esperada = (n * (n+1))/2
soma_real = 0
for i in ahay:
    soma_real += i 
 
numero = soma_esperada - soma_real
print(int(numero))
