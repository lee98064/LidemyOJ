import math
n, m = map(int, input().split(" "))


for i in range(n,m+1,1):

    str_len = len(str(i))
    total = 0
    for j in str(i):
        total += math.pow(int(j),str_len)

    if (total == i):
        print(int(total))