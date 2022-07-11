#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 750000; 
const int mod = 1e9 + 7; 
ll gcd (ll a, ll b) {
	if (b == 0) return a;
	else return gcd(b, a%b); 
}
ll lcm (ll a, ll b) {
	return (a * b) / gcd(a,b); 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t; ll n; 
	cin >> t;
	for (int i = 0; i < t;i++) {
		cin >> n; 
		int	 ans = 0; 
		ll b = 1; 
		for (int i = 2; i <= 100000; i++) {
			ll a = lcm(b,i);
			ll cur = n/b; cur -= n/a;
			b = a; 
			ans = (ans%mod + (cur*(ll)i)%mod)%mod; 
			if (a > n) break; 
		}
		cout << ans << endl;
	}
}