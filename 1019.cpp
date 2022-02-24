#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int width, height;

    cin >> width;
    cin >> height;

    char maze[height][width];

    for (int i = 0; i < height; i++){
        char temp[width];
        cin >> temp;
        for (int j = 0; j < width; j++){
            maze[i][j] = temp[j];
        }
    }

    int step = 0;
    int now_x = 0, now_y = 0;
    char status[1] = {'n'};
    while (true){
                
        if (now_x == width - 1 && now_y == height - 1){
            break;
        }
        
        // 判斷直向往下
        if (maze[now_y + 1][now_x] == '.' && status[0] != 'u'){
            now_y++;
            step++;
            status[0] = 'd';
        }
        // 判斷橫向往右
        else if(maze[now_y][now_x + 1] == '.' && status[0] != 'l'){
            now_x++;
            step++;
            status[0] = 'r';
        }

        // 判斷橫向往左
        if(now_x - 1 > -1 && maze[now_y][now_x - 1] == '.' && status[0] != 'r'){
            now_x--;
            step++;
            status[0] = 'l';
        }
        // 判斷直向往上
        else if (now_y - 1 > -1 && maze[now_y - 1][now_x] == '.' && status[0] != 'd'){
            now_y--;
            step++;
            status[0] = 'u';
        }


    }

    cout<<step<<endl;

    return 0;
}