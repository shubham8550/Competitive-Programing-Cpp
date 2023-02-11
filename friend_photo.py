

fr=int(input())
photo=int(input())
l1=[]
for i in range(photo):
    l1.append(int(input()))

l2=[]
for i in range(photo):
    l2.append(int(input()))

all=l1+l2
totalfr=photo*2
uniquefr=len(set(all))
print(totalfr-uniquefr)