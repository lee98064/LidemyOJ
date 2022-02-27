n = int(input())

item = []
for i in range(n):
    item.append(int(input()))

item.sort()

for i in item:
    print(i)