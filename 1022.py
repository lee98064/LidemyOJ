n = int(input())

blank = int((n * 2) - 1)
start = 1
ans = ""
for i in range(n):
    temp = blank - start
    ans += " " * int(temp / 2)
    ans += "*" * start + "\n"
    # ans += " " * int(temp / 2) + "\n"
    start += 2

print(ans.rstrip())