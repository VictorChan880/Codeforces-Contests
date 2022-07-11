#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair
#define pb push_back 
const int MM = 1e6; 
const int mod = 1e9+7; 

int n,m,u,v,q, ans = 0; 
set<int> par [MM];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m ;i++) {
		cin >> u >> v;
		if (u < v) par[u].insert(v);
		else par[v].insert(u);
	}
	for (int i = 1; i<= n; i++) {
		if (par[i].size() == 0) ans++;  
	}
	cin >> q; 
	for (int i =0; i < q; i++) {
		int op; 
		cin >> op;
		if (op == 1) {
			cin >> u >> v;
			if (u < v) {
				par[u].insert(v);
				if (par[u].size() == 1) ans--; 

			}
			else {
				par[v].insert(u);
				if (par[v].size() == 1) ans--; 

			}
		}
		else if  (op == 2) {
			cin >> u >> v;
			if (u < v) {
				par[u].erase(v);
				if (par[u].size() == 0) ans++; 
			}
			else {
				par[v].erase(u); 
				if (par[v].size() == 0) ans++; 
			}
			
		}
		else {
			cout << ans << endl; 
		}
	}
}

