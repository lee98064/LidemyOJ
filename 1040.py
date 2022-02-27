st = input()
ans = ""
for i in range(int(input())):
    ans += input() + st

print(ans[:len(st) * -1])