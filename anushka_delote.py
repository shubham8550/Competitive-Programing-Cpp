n = int(input())
s = 0
l=list(map(int, input().split(' ')))
for x in l:
    maxi = 0
    while x > 0:
        r = x % 10
        maxi = max(r, maxi)
        x = x // 10
    s += maxi
print(s)