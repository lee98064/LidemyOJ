h , w = map(int,input().split(" "))

maze = [['#' for i in range(w)]for i in range(h)]

for i in range(h):
    temp = input()
    for j in range(w):
        maze[i][j] = temp[j]

now_h ,now_w = [0,0]
ans = 0

while(True):
    if(now_h == h - 1 and now_w == w - 1):
        break

    if(now_w + 1 < w):
        if(maze[now_h][now_w + 1] == "."):
            now_w += 1
            ans += 1
            continue

    if(now_h + 1 < h):
        if(maze[now_h + 1][now_w] == "."):
            now_h += 1
            ans += 1
            continue
    
    if(now_w - 1 > 0):
        if(maze[now_h][now_w - 1] == "."):
            now_w -= 1
            ans += 1
            continue

    if(now_h - 1 > 0):
        if(maze[now_h - 1][now_w] == "."):
            now_h -= 1
            ans += 1
            continue

print(ans)


# 4 3
# ...
# #.#
# #.#
# #..