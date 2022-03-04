h , w = map(int,input().split(" "))

maze = [['#' for i in range(w)]for i in range(h)]

for i in range(h):
    temp = input()
    for j in range(w):
        maze[i][j] = temp[j]

queue = [[0,0]]
past = []
ans = [0]

while(True):

    if([h - 1,w - 1] in queue):
        print(ans[queue.index([h - 1,w - 1])])
        break
    
    now_h = queue[0][0]
    now_w = queue[0][1]
    t_ans = ans[0]

    # 判斷往右
    if (now_w + 1 < w and not([now_h,now_w + 1] in past) and maze[now_h][now_w + 1] == "." ):
        queue.append([now_h,now_w + 1])
        ans.append(t_ans + 1)
    
    # 判斷往下
    if (now_h + 1 < h and not([now_h + 1,now_w] in past) and maze[now_h + 1][now_w] == "." ):
        queue.append([now_h + 1,now_w])
        ans.append(t_ans + 1)

    # 判斷往上
    if (now_h - 1 >= 0 and not([now_h - 1,now_w] in past) and maze[now_h - 1][now_w] == "." ):
        queue.append([now_h - 1,now_w])
        ans.append(t_ans + 1)

    # 判斷往左
    if (now_w - 1 >= 0 and not([now_h,now_w - 1] in past) and maze[now_h][now_w - 1] == "." ):
        queue.append([now_h,now_w - 1])
        ans.append(t_ans + 1)

    past.append([now_h,now_w])
    queue.pop(0)
    ans.pop(0)