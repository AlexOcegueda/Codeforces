n = int(input())

output = 0

for i in range(0, n):
    
    x = input()

    if x.count('+') > 1:
        output += 1
    else:
        output -= 1

print(output)