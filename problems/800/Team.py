questions = int(input())

output = 0

for i in range(0, questions):
    q = input()

    if q.count('1') >= 2:
        output += 1

print(output)