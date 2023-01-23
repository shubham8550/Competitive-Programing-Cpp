n, x = map(int, input().split())
y = n - x

while x != y:
    if x > y:
        x -= y
    else:
        y -= x

print(n-(x+y))
