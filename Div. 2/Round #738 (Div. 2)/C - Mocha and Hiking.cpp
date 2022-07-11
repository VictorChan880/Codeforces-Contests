#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod1 = 1e9+7;  
const int mod2 = 1e9+11;  
int n, t; 
int a[MM]; 
int main(){
	cin >> t; 
	for (int T = 0; T < t; T++) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i]; 
		}
		if (a[n] == 0) {
			for (int i = 1; i <= n+1; i++) {
				cout << i << " ";
			}
			cout << endl;
		}
		else if (a[1] == 1) {
			cout << n+1 << " "; 
			for (int i = 1; i <= n; i++) {
				cout << i << " ";
			}
			cout << endl; 

		}
		else {
			for (int i = 1; i < n; i++) {
			if (a[i] == 0 && a[i+1] == 1) {
				for (int j = 1; j <= i; j++) cout << j << " "; 
				cout << n+1 << " "; 
				for (int j = i+1; j <= n; j++) {
					cout << j << " ";
				}
				break; 
			}
		}
	}	
}
}