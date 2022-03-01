#include<iostream>

using namespace std;


int main(void){

    int x,y;

    cin>>x;
    cin>>y;
    int min = 10000000;

    int xi[x],yi[y];

    for (int i = 0; i < x; i++)
    {
        cin>>xi[i];
    }

    for (int i = 0; i < y; i++)
    {
        cin>>yi[i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if(abs(xi[i] - yi[j]) < min)
                min = abs(xi[i] - yi[j]);
        }
        
    }
    
    cout<<min<<endl;
    
    return 0;

}