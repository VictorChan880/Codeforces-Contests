#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 1e5+1;
int n, t; 
int a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t; 
	for (int i= 0; i < t; i++) {
		cin >> n; 
		ll cnt = 0; 
		for (int i = 1; i <= n;i++) {
			cin >> a[i]; 
		}
		for (int i = 1; i <= n;i++) {
			for (int j = a[i]; j-i <= n; j+=a[i]) {
				if (j-i < 1 || j-i == i) continue; 
				if (a[j-i] == (j/a[i])) {
					cnt++;
				} 
			}
		}
		cout << cnt/2 << endl; 
	}
}