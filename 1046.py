from pickle import TRUE
from re import T


item = []


for i in range(3):
    temp =[]
    for j in  input():
        temp.append(j)
    item.append(temp)


O = False
X = False

def setvar(s):
    global O
    global X
    if (s == "O"):
        O = True
    else:
        X = True
        

if (item[0][0] == item[0][1] == item[0][2]):
    setvar(item[0][0])
elif (item[1][0] == item[1][1] == item[1][2]):
    setvar(item[1][0])
elif (item[2][0] == item[2][1] == item[2][2]):
    setvar(item[2][0])
elif (item[0][0] == item[1][0] == item[2][0]):
    setvar(item[0][0])
elif (item[0][1] == item[1][1] == item[2][1]):
    setvar(item[0][1])
elif (item[0][2] == item[1][2] == item[2][2]):
    setvar(item[0][2])
elif (item[0][0] == item[1][1] == item[2][2]):
    setvar(item[0][0])
elif (item[0][2] == item[1][1] == item[2][0]):
    setvar(item[0][2])

if(O == X):
    print("DRAW")
elif(O):
    print("O")
elif(X):
    print("X")
