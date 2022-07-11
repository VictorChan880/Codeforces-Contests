#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll,ll > pi; 
const int MM = 5000+5;  
const ll mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

string str;
ll dp[MM], psa[MM], fact[MM], invFact[MM]; 
ll pow (ll x, ll exp) {
	if (exp == 0) return 1LL;
	ll tmp = pow(x,exp/2LL);
	tmp =(tmp*tmp)%mod;
	return (exp%2LL? (tmp*x)%mod : tmp); 
}
ll nCr (ll n, ll r) {
	if (n == 0 && r == 0) return 1LL;
	if (n == 0) return 0LL;
	if (r == 0) return 1LL; 
	return ((fact[n] * invFact[r])%mod * invFact[n-r])%mod; 
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	ll n,k;
	cin >> n >> k >> str; 
	if (k == 0) {
		cout << 1 << nl; return 0; 
	}
	fact[0] = 1LL; invFact[0] = 1LL; 
	for (ll i = 1; i <= n; i++) {
		fact[i] = (fact[i-1] * i)%mod;
		invFact[i] = pow(fact[i], mod-2LL); 
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '1') psa[i]++;
		if (i) psa[i] += psa[i-1]; 
	}
	dp[0] = 1LL; 
	bool found = false; 
	for (int i = 1; i < str.length(); i++) {
		dp[i] = dp[i-1]; 
		if (psa[i] >= k) {
			int j = i, cnt = k; 
			for (; j >= 0; j--) {
				if (str[j] == '1') cnt--;
				if (cnt == -1) break; 
			}
			ll N = (i - j);
			if (found) {
				if (str[i] == '1') dp[i] = (dp[i] + nCr(N-1, k))%mod;
				else dp[i] = (dp[i] + nCr(N-1,k-1))%mod; 
			}
			else {
				dp[i] = (dp[i] + nCr(N,k) - 1 + mod)%mod; 
				found = true; 
			}
			./cerr << dp[i] << nl; 
		}
	}
	cout << dp[n-1]<< nl; 
	
}
	
	

