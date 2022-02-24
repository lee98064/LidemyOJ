#include<iostream>
#include <chrono> 
using namespace std::chrono; 
using namespace std;
int main() {
    auto start = high_resolution_clock::now(); 
	int n = 8, m = 2,t;
	while (cin >> n) {
		int table[35]={0},ans = 0,one=3,two=4,three=6;
		for (int i = 1; i <= n; i++) {
			table[i] = i;
		}
		cin >> m;
		while (m--) {
			cin >> t;
			table[t] = 0;
		}
		for (int i = 1; i < n; i += 2) {
			if (table[i] + table[i + 1] == one) ans++;
			one += 4;
		}
		for (int i = 1; i < n; i += 2) {
			if (table[i] + table[i + 2] == two) ans++;
			two += 4;
		}
		for (int i = 2; i < n; i += 2) {
			if (table[i] + table[i + 2] == three) ans++;
			three += 4;
		}
		cout << ans<<endl;
        auto stop = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(stop - start); 
        
        cout << duration.count() << endl; 
	}
}