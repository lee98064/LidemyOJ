#include <iostream>

using namespace std;

int main(void)
{
    int n = 0;

    cin>>n;

    int item[n];
    for (int i = 0; i < n; i++)
    {
        cin>>item[i];
    }

    int max = 1;
    int last = item[0];
    int total = 1;
    for (int i = 1; i < n; i++)
    {
        if (last == item[i]){
            total += 1;
        }

        if (last != item[i] && total > max){
            max = total;
        }

        if(last != item[i]){
            total = 1;
        }
        last = item[i];
    }
    
    if (total > max){
        max = total;
    }
    
    
    cout<<max<<endl;    

    return 0;
}