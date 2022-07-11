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

string s; 
int n, t;
int ans [MM]; 
int main(){
	cin >> t; 
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> s; 
		int p = -1; 
		for (int i = 0; i < n; i++) {
			if (s[i] != '?') {
				p = i;
				break;
			}
		}
		if (p == -1) {
			for (int i =0; i <n; i++) {
				if (i%2) {
					s[i] = 'B';
				}
				else s[i]= 'R';
			}
		}
		else {
			for (int i = p-1; i>=0; i--) {
				if (s[i+1] == 'B') s[i] = 'R';
				else s[i] = 'B';
			}
			for (int i = p+1; i<n; i++) {
				if (s[i] != '?') continue;
				else if (s[i-1] == 'B') s[i] = 'R';
				else s[i] = 'B';
			}
		}
		cout << s << endl; 
	}
}
