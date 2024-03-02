def palindromo(lista):
    lista2 = lista[::-1]
    if lista2 == lista:
        return True
    return False

listapal = []

for x in range(10000000):
    y = x**3
    if palindromo(str(y)):
        listapal.append(y)

print(listapal)