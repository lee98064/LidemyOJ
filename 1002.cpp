#include<bits/stdc++.h>

using namespace std;


int main(void){
	int a,b;
	while(true){
    	cin>>a;
      	cin>>b;
      
      	if (a == 0 && b== 0){
        	break;
        }
    	
    	if (a > b){
        	cout<<a<<endl;
        }else{
        	cout<<b<<endl;
        }
    
    }
  
  return 0;

}