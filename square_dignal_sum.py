#wroong Solution

M, N = map(int, input().split())
matrix = []
for i in range(M):
    matrix.append([int(x) for x in input().split()])
X = int(input())

# create a frequency dictionary
d = {}
for i in range(M):
    for j in range(N):
        if matrix[i][j] in d:
            d[matrix[i][j]] += 1
        else:
            d[matrix[i][j]] = 1

# calculate the sum of diagonal elements
s = 0
for i in range(min(M, N)):
    if matrix[i][i] in d and d[matrix[i][i]] <= X:
        s += matrix[i][i]
    if i < M and i < N and matrix[i][N-i-1] in d and d[matrix[i][N-i-1]] <= X:
        s += matrix[i][N-i-1]

print(s)
