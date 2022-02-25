#include <iostream>

using namespace std;

int main(void)
{
    int n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        total += temp;
    }

    if (total / n >= 183)
    {
        cout << "real" << endl;
    }
    else
    {
        cout << "fake" << endl;
    }

    return 0;
}