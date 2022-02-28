n , m = map(int, input().split(" "))
item = {}

for i in range(n):
    item[int(input())] = i


for i in range(m):

    try:
        print(item[int(input())])
    except:
        print("-1")