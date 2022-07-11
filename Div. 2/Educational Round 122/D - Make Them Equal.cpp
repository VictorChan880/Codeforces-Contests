#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll,ll > pi; 
const int MM = 1e3+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"
ll b[MM], w[MM],t, c[MM];
ll dp1[(int)1e6+5], dp[(int)1e6+5]; 
bool vis[MM]; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 1; i < MM; i++) dp1[i] = (int)1e9; 
	dp1[1] = 0; 
	for (int i = 1; i < MM; i++) {
		for (int j = 1; j <= i; j++) {
			dp1[i + i/j] = min(dp1[i + i/j], dp1[i] + 1);
		}
	}
	while (t--) {
		int n,k;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			w[i] = dp1[b[i]]; 		
		}
		k = min(k,12*n); 
		for (int i = 0; i <= k;i++) dp[i] = 0; 
		for (int i = 0; i < n; i++) cin >> c[i];
		for (int i =0; i < n; i++) {
			for (int j = k; j >= w[i]; j--) {
				dp[j] = max(dp[j], dp[j-w[i]] + c[i]);
			}
		}
		cout << dp[k] << nl; 
	}
	
}	
