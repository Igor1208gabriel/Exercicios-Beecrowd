n = input()

x = {key : n.count(key) for key in n}
y = list(x.values())
z = {key : y.count(key) for key in y}

legal = True
for i in list(z.values()):
    if i != 0 and i != 2:
        legal = False

if legal:
    print("Yes")
else:
    print("No")

#print(x)
#print(z)