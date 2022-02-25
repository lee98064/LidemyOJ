#include <iostream>
using namespace std;

int main(void)
{

    int n, item, total = 0;
    cin >> n;
    cin >> item;

    int item_list[item];

    for (int i = 0; i < item; i++)
    {
        cin >> item_list[i];
    }

    // 氣泡排序
    for (int i = 0; i < item - 1; i++)
    {
        for (int j = 0; j < item - 1 - 1; j++)
        {
            if (item_list[j] > item_list[j + 1])
            {
                int temp = item_list[j];
                item_list[j] = item_list[j + 1];
                item_list[j + 1] = temp;
            }
        }
    }


    int index = item - 1;
    while(n--){
        if (index < 0)
            break;
        total += item_list[index];
        index--;
    }
    
    cout << total << endl;

    return 0;
}