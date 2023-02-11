n = int(input())
roll_numbers = {}
for i in range(n):
    rn = int(input())
    if rn in roll_numbers:
        roll_numbers[rn] += 1
    else:
        roll_numbers[rn] = 1
k = int(input())
count = 0
for rn, c in roll_numbers.items():
    if c == 1:
        count += 1
        if count == k:
            print(rn)
            break
