def primo(n):
    if n==1: return False
    if n==2: return True
    if n%2==0: return False
    i=3
    while i*i<=n:
        if n%i==0:
            return False
        i = i+2
    return True
 
t = int(input())
for _ in range(t):
    n = int(input())
    if primo(n):
        print("Prime")
    else:
        print("Not Prime")