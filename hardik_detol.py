x1, y1 = map(int, input().split(" "))
x2, y2 = map(int, input().split(" "))
x3, y3 = map(int, input().split(" "))
x4, y4 = map(int, input().split(" "))

side = abs(x1 - x2)

A = side * side
P = 4 * side

print(A, P)
