# 1	2	3	4	5
# 1	1	2	3	5

n = int(input())

a = list()


for i in range(n):
    a.append(1)

for i in range(2,n,1):
    a[i] = a[i-1] + a[i-2]

print(a[len(a) - 1])