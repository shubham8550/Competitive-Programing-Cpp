def next_char(c):
    if c.isalpha():
        if c == 'z':
            return 'a'
        elif c == 'Z':
            return 'A'
        else:
            return chr(ord(c) + 1)
    elif c.isdigit():
        if c == '9':
            return '0'
        else:
            return str(int(c) + 1)
    else:
        return c

line = input()
new_line = ""
for c in line:
    new_line += next_char(c)
print(new_line)




