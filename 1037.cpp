#include <iostream>

using namespace std;

int main(void)
{
    int n = 0,count = 0;

    cin>>n;
    cin>>count;
    
    for (int i = 0; i < count; i++)
    {   
        int temp = 0; 
        cin>>temp;
        if(temp != n){
            cout<<temp<<endl;
        }
    }
    
    return 0;
}
