#include<bits/stdc++.h>


using namespace std;

int main(void){

    int n,a,b,k;
    string result;
    cin>>n;
    while(n--){

        cin>>a;
        cin>>b;
        cin>>k;
        if (a == b){
            // cout<<"DRAW"<<endl;
            result += "DRAW\n";
            continue;
        }

        if (k == 1){
            if (a > b)
                // cout<<"A"<<endl;
                result += "A\n";
            else
                // cout<<"B"<<endl;
                result += "B\n";
        }else{
            if (a > b)
                // cout<<"B"<<endl;
                result += "B\n";
            else
                // cout<<"A"<<endl;
                result += "A\n";
        }

    }
    cout<<result;
    return 0;
}