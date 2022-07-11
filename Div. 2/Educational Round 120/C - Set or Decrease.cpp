#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< int ,int > pi; 
const int MM = 2e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int t, n; 
ll a[MM], sum, steps, k, ans, psa[MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		ans = 1e18;
		cin >> n >> k;  
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n); psa[0] = a[0];
		for (int i =1;i < n; i++) {
			psa[i] = psa[i-1] + a[i]; 
		}
		if (psa[n-1] <= k) ans = 0; 
		for (int i = n-1; i >= 0; i--) {
			ll s = psa[i] - psa[0];
			ll x = (ll)floor((double)(k - s)/ (n-i)); 
			ll steps = max(a[0] - x,0LL) + (n-i-1);
			ans = min(ans,steps);
		}
		cout << ans << nl; 
		
	}
	
}
