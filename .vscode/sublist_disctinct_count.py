def sub_lists (l):
    lists = [[]]
    for i in range(len(l) + 1):
        for j in range(i):
            lists.append(l[j: i])
    return lists
def totalDistinct(N,A):
    sub=sub_lists(A)
    ds=[]
    for i in sub:
        if len(i)<=1:
            continue
        i.sort()
        ds.append(i[-1]-i[-2])
    return len(set(ds))

# driver code
N=int(input())
A=[]
for i in range(N):
    A.append(int(input()))
    
print(totalDistinct(N,A))