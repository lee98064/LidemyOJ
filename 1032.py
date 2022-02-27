n = int(input())

for i in range(n):
    x1 = int(input())
    y1 = int(input())
    x2 = int(input())
    y2 = int(input())
    print("%.2f" % round((pow(abs(x1 - x2),2) + pow(abs(y1 - y2),2)) ** 0.5,2))
    