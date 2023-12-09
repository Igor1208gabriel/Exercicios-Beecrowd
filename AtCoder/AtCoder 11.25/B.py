def solve(A, L, R):
    ans = []

    for Ai in A:
        if Ai < L:
            Xi = L
        elif Ai > R:
            Xi = R
        else:
            Xi = Ai
        ans.append(Xi)

    return ans

n, l, r = map(int,input().split())
a = list(map(int,input().split()))
ans = solve(a, l, r)
print(*ans)


