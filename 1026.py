n = int(input())

item = list(map(int,input().split(" ")))


result = True
vaild = item[1] / item[0]
for i in range(0,len(item) - 1,1):
    if(item[i + 1] / item[i] != vaild):
        result = False
        break

if (result):
    print("Yes")
else:
    print("No")