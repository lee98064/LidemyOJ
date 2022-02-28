n = int(input())
total = 0

for i in range(1,n,1):
    if (i * i > n):
        break
    total += i * i

print(total)