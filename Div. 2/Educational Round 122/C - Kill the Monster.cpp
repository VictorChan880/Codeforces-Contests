#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< int, pair<int ,int> > pi; 
const int MM = 1e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
int t;
ll hc,dc,hm,dm,k,w,a; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> hc >> dc >> hm >> dm >> k >> w >> a;
		bool flag = false; 
		for (int i = 0; i <= k; i++) {
			ll up_w = i, up_a = k-i;
			ll _hc = hc + up_a * a, _dc = dc + up_w * w;
			ll r1 = _hc/dm, r2 = hm/_dc;
			if (_hc%dm != 0) r1++;
			if (hm%_dc != 0) r2++;
			if (r1 >= r2) {
				flag = true; break;
			}
			
		}
		cout << (flag? "YES" : "NO") << nl; 
	}


}