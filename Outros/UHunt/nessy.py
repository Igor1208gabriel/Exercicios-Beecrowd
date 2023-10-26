n, m = map(int, input().split())
n-=2
m-=2

lista = [0]*((n*m)+1)

def print_matriz(matriz, n, m):
    for i in range(m):
        print(i, " ", end=" ")    
    print()
    for i in range(1,n+1):
        x = ((i-1)*m)+1
        y = (i*m)+1
        print(i,matriz[x:y])

def addx(matriz, m, n, x, y):
    if (x == 0 or x == m) and (y != 0 or y != n):
        matriz[]


print_matriz(lista, n, m)