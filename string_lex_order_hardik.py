
words = input().strip().split()

output = ""

for word in words:
    count = 0
    for i in range(len(word)-1):
        if word[i] < word[i+1]:
            count += 1
    output += str(count)

print(output)
