input()
ar=list(map(int,input().strip().split()))
input()
ar2=list(map(int,input().strip().split()))
k = int(input())
c1=0
c2=0
for i in ar:
    if i > k:
        c1+=1
for i in ar2:
    if i < k:
        c2+=1
print(max(c1,c2))