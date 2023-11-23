palavra = input()
lista = list(palavra)
count =0
ans =0
for i in range(len(lista)):
    for j in range(len(lista)):
        if lista[i] == lista[j] and i !=j:
            um = i
            dois = j
            while(1):
                if lista[um] == lista[dois]:
                    um +=1
                    dois -=1
                    count +=1
                else:
                    break
            if ans < count:
                ans = count
            count = 0
print(ans)