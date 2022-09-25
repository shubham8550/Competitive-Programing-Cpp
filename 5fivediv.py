
S=input()
while ("89" in S) or ("98" in S):
    S=S.replace('98', '')
    S=S.replace('89', '')
print(len(S))


