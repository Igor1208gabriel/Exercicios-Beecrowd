numero = int(input())
ganhou = 0
for n in range(0,numero):
    carro = int(input())
    if carro != 1:
        ganhou +=1
print(ganhou)