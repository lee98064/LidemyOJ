n = list(map(int,input().split(" ")))

while(True):
    total = 0
    for i in n:
        for j in str(i):
            total += int(j)
    n = [total]
    if(n[0] < 10):
        break

print(n[0])