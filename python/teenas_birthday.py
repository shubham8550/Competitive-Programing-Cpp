n=int(input())
k=int(input())
p=list(map(int,input().split()))
q=list(map(int,input().split()))
r=[p[0]-q[0]]
s=[q[0]]
s1=q[0]-q[1]
if k>0:
    if s1 >0:
        print(2)
    else:
        print(max(s))

elif k<= 0:
    for i in range(1,n):
        a=p[i]*q[i]
        r.append(a)
    print(max(r))


#chana sol
# n,t =int(input()),int(input())
# a=[int(input()) for i in range(n)]
# b=[int(input()) for i in range(n)]
# z=[]
# for i in range(n):
#     z.append(a[i]*b[i])
#     while t> 0:
#         maxpos=z.index(max(z))
#         z[maxpos]=z[maxpos] -b[maxpos]
#         t-=1
# print(max(z))
        
