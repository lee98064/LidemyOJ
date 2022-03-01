n = int(input())

ans = 0
num = 31
while(n > 0):
    while(pow(2,num) > n):
        num -= 1
    ans += 1
    n -= pow(2,num)
    num = 31

print(ans)