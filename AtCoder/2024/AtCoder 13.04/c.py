n = input()
t = input()

t = t.lower()
legal = True

if (t[0] in n and t[1] in n and t[2] in n) or (t[0] in n and t[1] in n and t[2] == "x"):
    legal = True
else:
    legal = False

if legal:
    print("Yes")
else:
    print("No")