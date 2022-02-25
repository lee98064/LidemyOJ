#include <iostream>
using namespace std;

int main(void)
{

    int n, item, total;
    cin >> n;
    cin >> item;

    int item_list[item];
    int max = -1;

    for (int i = 0; i < item; i++)
    {
        cin >> item_list[i];
    }

    if (item > n || item == n){
        int total = 0;
        for (int i = 0; i < item; i++)
        {
            total += item_list[i];
        }
        cout<<total<<endl;
        return 0;
    }

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

    if (n == 1)
    {
        cout << item_list[item - 1] << endl;
        return 0;
    }

    for (int i = 0; i < item - n + 1; i++)
    {
        int temp = 0;
        for (int j = i; j < i + n; j++)
        {
            temp += item_list[j];
            if (temp > max)
                max = temp;
        }
    }

    cout << max << endl;

    return 0;
}