n, k = map(int, input().split())

x = list(map(int, input().split()))

k_place_score = x[k - 1]

output = 0

for score in x:
    if score >= k_place_score and score > 0:
        output += 1

print(output)