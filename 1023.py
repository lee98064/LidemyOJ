n = int(input())

blank = int((n * 2) - 1)
start = 1
ans = ""
for i in range(n):
    temp = blank - start
    ans += " " * int(temp / 2)
    ans += "*" * start + "\n"
    # ans += " " * int(temp / 2) + 
    start += 2

for i in range(n - 1):
    ans += " " * int(blank / 2)
    ans += "|" + "\n"
    # ans += " " * int(blank / 2) + "\n"
print(ans.rstrip())