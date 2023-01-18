N=4 
M = 3
A=[6,3,2,5]

p=[A[i * M:(i + 1) * M] for i in range((len(A) + M - 1) // M )]
for i in p:
    print(str(max(i)),end=" ")
