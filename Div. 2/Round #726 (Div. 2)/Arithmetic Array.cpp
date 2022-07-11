#include <bits/stdc++.h>
using namespace std;
int t, n, a[51]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t ; i++) {
		cin >> n;
		memset(a,sizeof(a),0); 
		int sum = 0; 
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
			sum += a[i];
		}
		if (sum < n) cout << 1 << endl;
		else cout << abs(sum - n) << endl; 
		
	}
	
}