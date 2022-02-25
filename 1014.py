import math
n = int(input())

temp = str(n)[::-1]
count = 0
total = 0

for i in temp:
    total += math.pow(9,count) * int(i)
    count += 1


print(int(total))
