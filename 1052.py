n , max_weight = map(int,input().split(" "))

item = []

for _ in range(n):
    wight, value = map(int,input().split(" "))
    item.append([wight, value])

backpack = [0] * (max_weight + 1)

for i in item:
    for j in range(max_weight,i[0] - 1, -1):
        backpack[j] = max(backpack[j], backpack[j - i[0]] + i[1])

print(max(backpack))

