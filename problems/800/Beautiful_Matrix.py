matrix = []

for _ in range(5):

    row = list(map(int, input().split()))

    matrix.append(row)

current_row = 0
current_col = 0

for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            current_row = i
            current_col = j
            break

center_row = 2
center_col = 2

distance = abs(center_row - current_row) + abs(center_col - current_col)

print(distance)