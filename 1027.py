card = input()

card = card.replace('-','')

if(len(card)<16):
    print("INVALID")
    quit()

odd = 0
for i in range(0,len(card),2):
    n = int(card[i])
    if (int(card[i]) * 2 >= 10):
        odd += n * 2 - 9
    else:
        odd += n * 2

plural = 0
for i in range(1,len(card) - 1,2):
    plural += int(card[i])

vaild = 10 -((odd + plural) % 10)

if (int(card[15]) == vaild):
    n = int(card[0])
    if(n == 5):
        print("MASTER_CARD")
    elif(n == 4):
        print("VISA")
    elif(n == 3):
        print("JCB")
else:
    print("INVALID")