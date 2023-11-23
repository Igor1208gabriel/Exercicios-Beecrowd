n = input()
n = list(n)
ok = True

if len(n) > 1:
    for i in range(len(n)-1):
        if int(n[i]) <= int(n[i+1]):
            ok = False

if ok == True:
    print("Yes")
elif ok == False:
    print("No")
