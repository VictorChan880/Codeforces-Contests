#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f first
#define s second 
typedef pair<int, int> pi; 
const int MM = 2e5+1; 
const int MOD = 1e9+7;
const ll INF =  1e18;
int t, n, k;  
int ans[MM]; 
pi a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int f = 0; f < t; f++)  {
		cin >> n >> k; 
		for (int i = 0; i < n; i++) {
			int x ;
			cin >> x;
			a[i] = {x,i}; 
			ans[i] = 0;  
		}
		sort(a,a+n);
		int colour = 1, cnt = 0, pre = a[0].first; 
		for (int i =0; i < n; i++) {
			if (pre != a[i].first) cnt = 0;
			pre = a[i].first; 
			cnt++;
			if (cnt <= k) {
				ans[a[i].second] = colour;
				if(colour == k) colour = 1;
				else colour++;
			}
		}
		colour--; 
		cnt = 1; 
		for (int i =0; i < n; i++) {
			if (cnt > colour) break;
			if (ans[a[i].second] == cnt) {
				ans[a[i].second] = 0; 
				cnt++; 
			}
		}
		for (int i =0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}  