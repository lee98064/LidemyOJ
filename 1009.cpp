#include <iostream>

using namespace std;

int main(void){

    string n;
    cin>>n;

    string result ="";

    for (int i = 0; i < n.size(); i++)
    {
        result = n.substr(i,1) + result;
    }

    cout<<result<<endl;
    
    return 0;
}