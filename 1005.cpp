#include<bits/stdc++.h>

using namespace std;


int main(void){

    while (true)
    {
        int n,temp, a = 0, b = 0;
        cin>>n;
        
        if (n == 0)
            break;

        temp = n;

        

        for(int i = n - 1; i > 0; i--){
            if (n % i == 0){
                a += i;
            }
        }


        for(int i = a - 1; i > 0; i--){
            if (a % i == 0){
                b += i;
            }
        }
        

        if(n == b){
            cout<<a<<endl;
        }else{
            cout<<"QQ"<<endl;
        }

    }
    
    return 0;


}