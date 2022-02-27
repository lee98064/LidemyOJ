st = input()

n = int(input())

pdst = input()

now = 0

while(len(st) < n):
    st += pdst[now]
    now += 1

    if(now > len(pdst) - 1):
        now = 0

print(st)