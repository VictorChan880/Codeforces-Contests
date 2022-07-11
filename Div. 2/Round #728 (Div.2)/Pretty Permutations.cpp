#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 2*1e5;
int n, t; 
int a[101]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t; 
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (!(n%2)) {
			for (int i = 1; i <= n; i+=2) {
				cout << i+1 << " " << i;
				if (i == n-1) cout << endl;
				else cout << " "; 
			}
		}
		else {
			for (int i = 1; i <= n;i++) a[i] = i; 
			for (int i =1; i <= n-2; i+=2){
				swap(a[i],a[i+1]); 
			} 
			swap(a[n], a[n-1]);
			for (int i = 1; i <= n;i++) {
				cout << a[i];
				if (i==n) cout << endl;
				else cout << " "; 
			}

		}
	}
}