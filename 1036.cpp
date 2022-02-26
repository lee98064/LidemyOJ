#include <iostream>

using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    string item[n];

    for (int i = 0; i < n; i++)
    {
        cin >> item[i];
    }

    int temp = n;
    while (temp--)
    {
        cout << item[temp] << endl;
    }

    return 0;
}