#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi; 

#define mp make_pair 
#define pb push_back
#define f first
#define s second

const int MM = 1e6+1; 
const int mod = 1e9+7; 

int n, t,k; pi a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i< t; i++) {
		cin >> n >> k; 
		for (int j = 0; j < n; j++) {
			int x; 
			cin >> x; 
			a[j] = {x,j}; 
		}
		sort (a,a+n);
		int cnt = n; 	
		for (int i =0; i < n-1; i++) {
			if (a[i].s+1 == a[i+1].s)cnt--;
		}
		cout << ((cnt <= k)? "Yes" : "No") << endl; 
	}
	
}