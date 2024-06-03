grupos, lugares = map(int,input().split())

pessoas = list(map(int,input().split()))

indice = 0
ans = 0

while True:
    carrinho = lugares

    if indice < len(pessoas):
        ans+=1
        
        for i in range(indice, len(pessoas)):
            if carrinho >= pessoas[i]:
                indice+=1
                carrinho -= pessoas[i]
            else: 
                break
    
    else:
        break

print(ans)