#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    n = n % 26;

    string data;

    cin>>data;

    string result = "";

    if (n == 0){
        cout<<data<<endl;
    }

    for (int i = 0; i < data.size(); i++)
    {
        char b = data.at(i);
        int a = int(b);


        

        if (a + n > 122){
            int use = 122 - a;
            a = 96 + (n - use);
        }else{
            a += n;
        }

        result += char(a);

    }
    

    cout<<result<<endl;



    return 0;
}