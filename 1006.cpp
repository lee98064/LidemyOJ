#include<iostream>

using namespace std;


int main(void){

    int table,is_use,t;
    cin>>table;
    cin>>is_use;

    //把桌數加入array
    int table_array[table + 1];
    for (int i = 1; i <= table; i++)
    {
        table_array[i] = i;
    }

    while(is_use--){
        cin>>t;
        table_array[t] = 0;
    }

    int count = 0;

    for (int i = 1; i <= table; i++)
    {
        if (table_array[i] != 0){
            
            if(i % 2 != 0 && i + 1 < table + 1 && table_array[i + 1] != 0){
                count++;
            }

            if(i % 2 != 0 && i + 2 < table + 1 && table_array[i + 2] != 0){
                count++;
            }

            if(i % 2 == 0 && i + 2 < table + 1 && table_array[i + 2] != 0){
                count++;
            }
        }
    }


    cout<<count<<endl;
    
    


    
    return 0;
}
