n = int(input())
for i in range(n):
    conta=0
    c = float(input())
    while c > 1:
        c/=2
        conta+=1
    print(conta, "dias")