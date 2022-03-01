#include<iostream>

using namespace std;


int main(void){

    int n = 0;
    cin>>n;
    int item[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
    {  
        cin>>item[i];
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(item[i] > item[j])
                ans++;
        }
    }


    cout<<ans<<endl;
    
    return 0;

}