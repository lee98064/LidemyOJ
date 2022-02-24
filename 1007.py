name_list = []
score_list = []
max_score = -1

for i in range(int(input())):
    name, score = input().split(" ")

    name_list.append(name)
    score_list.append(int(score))


for i in score_list:
    if i > max_score:
        max_score = i

for i in range(0,len(score_list),1):
    if score_list[i] == max_score:
        print(name_list[i])