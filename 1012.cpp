#include <iostream>

using namespace std;

int main(void)
{
    int n1, n2, n = 0;

    cin >> n1;
    cin >> n2;

    if (n1 > n2)
    {
        n = n1 * 2;
    }
    else
    {
        n = n2 * 2;
    }

    cout<<n<<endl;

    int lost = n - (n1 + n2);

    cout<<lost<<endl;

    return 0;
}