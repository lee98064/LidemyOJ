n , m = map(int, input().split(" "))

item = []
for i in range(n):
    item.append(input())


for i in range(m):

    try:
        print(item.index(input()))
    except:
        print("-1")