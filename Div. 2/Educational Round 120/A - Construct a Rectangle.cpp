#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair< ll ,ll > pi; 
const int MM = 5e5+5;  
const int mod = 998244353 ; 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
#define nl "\n"

int t; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		int a, b, c; 
		cin >> a >> b >> c;
		if (a - b == c || b - a== c || c - a == b) {
			cout << "YES" << nl;
		}
		else if ((a == b && c % 2 == 0) || (a == c && b%2 == 0) || (b ==c && a%2 == 0)) {
			cout  << "YES" << nl; 
		}
		else cout << "NO" << nl; 
	}
	
}
