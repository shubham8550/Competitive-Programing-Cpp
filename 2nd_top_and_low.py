n = int(input())
ls=list(set(map(int, input().split(' '))))
ls.sort()
print(ls[-2])
print(ls[1])