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
int t,n, dp[MM];
bool sieve[MM];

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> t;
	while (t--) {
		cin >> n;
		int r = n%7; 
		if (n%10 < r) cout << n + 7 - r << nl;
		else cout << n - r << nl; 
	}


}