n = int(input())

x = []
y = []
ans = 100000000000000000
ansx = []
ansy = []

for _ in range(n):
    temp = list(map(int,input().split(" ")))
    x.append(temp[0])
    y.append(temp[1])

for i in range(n):
    for j in range(i + 1,n,1):
        temp = (pow(x[i] - x[j],2) + pow(y[i] - y[j],2)) ** 0.5
        if (temp < ans):
            ans = temp
            ansx.clear
            ansy.clear
            ansx.append(x[i])
            ansx.append(x[j])
            ansy.append(y[i])
            ansy.append(y[j])

if(ansx[0] < ansx[1]):
    print(ansx[0], ansy[0])
    print(ansx[1], ansy[1])
elif(ansx[0] > ansx[1]):
    print(ansx[1], ansy[1])
    print(ansx[0], ansy[0])
elif(ansy[0] < ansy[1]):
    print(ansx[0], ansy[0])
    print(ansx[1], ansy[1])
elif(ansy[0] > ansy[1]):
    print(ansx[1], ansy[1])
    print(ansx[0], ansy[0])