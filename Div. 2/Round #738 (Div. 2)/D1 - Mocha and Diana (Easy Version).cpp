#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod1 = 1e9+7;  
const int mod2 = 1e9+11;  
int n, m1, m2;  
int par1[MM], par2[MM];
int find (int u, int par[]) {
	if (par[u] != u) par[u] = find (par[u], par);
	return par[u]; 
}

void merge (int u, int v, int par[]) {
	int u_par = find(u, par), v_par = find(v, par); 
	if (u_par != v_par) {
		par[u_par] = par[v_par]; 
	}
}
int main(){
	cin >> n >> m1 >> m2; 
	for (int i = 1; i <= n; i++) par1[i] = i;
	for (int i = 1; i <= n; i++) par2[i] = i;
	int u, v; 
	for (int i = 0; i < m1; i++) {
		cin >> u >> v;
		merge (u,v, par1);
	}
	for (int i = 0; i < m2; i++) {
		cin >> u >> v;
		merge (u,v,par2);
	}
	vector<pi> edges; 
	for (int i = 1; i<= n; i++) {
		for (int j = i+1 ; j <= n; j++) {
			if (find(i, par1) != find(j, par1) && find(i, par2) != find(j, par2)) {
				edges.pb({i,j}); 
				merge (i,j, par1); merge(i,j, par2); 
			}
		}
	}
	cout << edges.size() << endl;
	for (pi edge : edges) {
		cout << edge.f << " " << edge.s << endl; 
	}
}
