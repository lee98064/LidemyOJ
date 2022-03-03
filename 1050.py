# n, target = map(int,input().split(" "))

# item = list(map(int,input("").split(" ")))



# for i in range(0,len(item) - 1,1):
#     for j in range(i,len(item),1):
#         if (item[i] + item[j] == target):
#             if (i < j):
#                 print(i,j)
#             else:
#                 print(j,i)
#             break


n, target = map(int,input().split(" "))

dic = {}
index = 0

for i in list(map(int,input().split(" "))):
    dic[i] = index
    index += 1

ans = []
for i in dic:
    if (target - i in dic):
        ans = [dic[i],dic[target - i]]
        break

ans.sort()
print(ans[0], ans[1])