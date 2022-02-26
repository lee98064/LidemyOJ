#include <iostream>

using namespace std;

int main(void)
{
    int n = 0, a = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        
        if (a == 1)
        {
            cout << "Composite" << endl;
            continue;
        }

        int temp = a;

        while (temp--)
        {
            if (a % temp == 0){
                break;
            }
        }
        

        if (temp == 1)
        {
            cout<<"Prime"<<endl;
        }else{

            cout<<"Composite"<<endl;
        }
        
    }

    return 0;
}