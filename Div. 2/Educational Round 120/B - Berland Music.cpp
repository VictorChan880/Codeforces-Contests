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

int t; 
int p[MM], ans[MM]; 
string str; 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--) {
		int n; 
		cin >> n; 
		for (int i = 0; i < n; i++) {
			cin >> p[i]; 
		}
		cin >> str;
		vector<pi> like, dislike; 
		for (int i = 0; i < n; i++) {
			if (str[i] == '1') like.pb({p[i],i});
			else dislike.pb({p[i],i});
		}
		sort(like.begin(), like.end());
		sort(dislike.begin(), dislike.end());
		int rating = 1; 
		for (int i = 0; i < dislike.size(); i++) {
			ans[dislike[i].s] = rating++;
		}
		for (int i = 0; i < like.size(); i++) {
			ans[like[i].s] = rating++;
		}
		for (int i = 0; i < n; i++) {
			cout << ans[i] << " " ;
		}
		cout << nl; 
	}
	
}
