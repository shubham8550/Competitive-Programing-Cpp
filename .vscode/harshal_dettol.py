def printResult(M ,N):
    product = M * N
    sum_mn = M + N
    diff = abs(product - sum_mn)
    s = 0
    for i in range(1, diff+1):
        if diff % i == 0:
            s += i
    return s

M ,N= map(int, input().split())
print(printResult(M ,N))
