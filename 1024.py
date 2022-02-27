a = int(input())
b = int(input())

for i in range(1,a + 1,1):
    for j in range(1,b + 1,1):
        print(str(i) + "*" + str(j) + "=" + str(i*j) )