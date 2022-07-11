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
int t,n;
string str; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> t;
	while (t--) {
		cin >> str;
		
		int one = 0, zero = 0; 

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '0') zero++;
			else one++;
		}
		if (str.length() == 1 || (str.length() == 2 && one == zero)) cout << 0 << nl; 
		else if (one == zero) cout << one -1<< nl;
		else cout << min(one,zero) << nl; 
		
	}


}