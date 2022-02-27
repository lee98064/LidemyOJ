target = int(input())

item = []
for i in range(int(input())):
    item.append(int(input()))

try:
    print(item.index(target))
except:
    print("-1")