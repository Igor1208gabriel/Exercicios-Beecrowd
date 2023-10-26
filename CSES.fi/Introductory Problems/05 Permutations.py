x = int(input())
lista = []
 
if x == 1:
    print(1)
 
elif x < 4 and x != 1:
    print("NO SOLUTION")
 
elif x == 4:
    print("2 4 1 3")
 
elif x % 2 == 1:
    meio = (x//2)+1
    for i in range(1,((x-1)//2)+1):
        lista.append(meio+i)
        lista.append(meio-i)
    lista.append(meio)
else:
    meio = x//2
    for i in range(1,meio+1):
        lista.append(i)
        lista.append(i+meio)
print(*lista)
