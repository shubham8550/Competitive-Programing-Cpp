n = int(input())
word=input()
for i in range(n):
    msg=input().split(' ')
    f=True
    for w in msg:
        if not w in word:
            f=False
            break
    if f:  
        print("Yes")
    else:
        print("No")
    