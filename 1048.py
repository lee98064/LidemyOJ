n = int(input())

item = []
for _ in range(n):
    item.append(int(input()))

item_sum = [0] * n

for i in range(0,n,1):
    item_sum[i] = item[i] + item_sum[i-1]

ans = item[0]

for i in range(0,n,1):
    for j in range(i,n,1):
        s = item_sum[j] - item_sum[i - 1]
        if(s > ans):
            ans = s

print(ans)
