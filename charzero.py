s=input()
op=""
wo=""
for i in s:
    if not i == "0":
        wo=wo+chr(96+int(i))
    else:
        op=op+'0'
print(wo+op)