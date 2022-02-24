import sys
data = sys.stdin.readline().strip('\n')
tmp = data.split()

n = int(tmp[0])
now = 1

while n != 0:
    a = tmp[now]
    now += 1

    b = tmp[now]
    now += 1

    k = tmp[now]
    now += 1

    if (a == b):
        print("DRAW")
        n -= 1
        continue;
        
    if (k == 1):
        if (a > b):
            print("A")
        else:
            print("B")
    else:
        if (a < b):
            print("B")
        else:
            print("A")

    n -= 1


for i in range(int(input())):
    a, b, d = map(int, input().split(" "))
    if a == b: print("DRAW")
    elif d == 1:
        print(["B","A"][a>b])
    else:
        print(["B","A"][a<b])
