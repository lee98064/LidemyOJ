#include<bits/stdc++.h>

using namespace std;

int main(void){

    int n;
    string world; 

    cin>>n;

    while(n--){
        string temp;
        cin>>temp;
        world += temp;
    }

    cin>>n;

    string result;

    while (n--)
    {
        int temp;
        cin>>temp;
        result += world.substr(temp - 1,1);
    }

    cout<<result<<endl;


    return 0;
}


