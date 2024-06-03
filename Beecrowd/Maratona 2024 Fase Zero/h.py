def primo(x):
    for i in range(1,x-1):
        if x%i == 0:
            return False
    return True


f = int(input())
print("{", end="")
for i in range(f):
    if(primo(i)): 
        print(1, end=", ")
    else:
        print(0, end=", ")

print("}")