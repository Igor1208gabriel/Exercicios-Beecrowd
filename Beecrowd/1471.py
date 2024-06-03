def solve(i, s):
    seq = [x for x in range(1,i+1)]
    ans = []
    for j in seq:
        if j not in s:
            ans.append(j)
    return ans
    


while 1:
    try:
        entrou, saiu = map(int,input().split())
        volt = list(map(int,input().split()))
        s = solve(entrou, volt)
        if len(s) == 0:
            print('*')
        else:
            print(*s,end=" \n")
    except EOFError:
        break