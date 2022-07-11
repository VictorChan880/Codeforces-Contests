#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 1e6; 
const int mod = 1e9+7; 

int t, p,n; string a, b; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int k = 0; k < t; k++) {
		cin >> n >> a >> b; 
		int ans = 0; 
		for (int i =0; i < n; i++) {
			if (b[i] == '1') {
				if (a[i] == '0') {
					ans++;
					a[i] = '2'; 
				}
				else if (i > 0 && a[i-1] == '1')  {
					ans++;
					a[i-1] = '2'; 
				}
				else if (i+1 < n && a[i+1] == '1')  {
					ans++;
					a[i+1] = '2'; 
				}

			} 
		}
		cout << ans << endl; 
	}
}

