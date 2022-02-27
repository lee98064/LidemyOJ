s = input()
target = input()
print('true' if s[len(target) * -1:] == target else 'false')