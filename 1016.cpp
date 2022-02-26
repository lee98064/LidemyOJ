#include <iostream>

using namespace std;

int main(void)
{
    int n = 0;
    int a = 0;
    int b = 0;

    cin>>n;

    char item[n]; 

    for (int i = 0; i < n; i++)
    {
        cin>>item[i];
        item[i] == 'A' ? a++ : b++;
    }
    
    if (a == b || a == 0 || b == 0){
        cout<<"PEACE"<<endl;
        return 0;
    }

    char result = a > b ? 'B' : 'A';
    for (int i = 0; i < n; i++)
    {
        if (item[i] == result)
            cout<<i + 1<<endl;
    }

    return 0;
}