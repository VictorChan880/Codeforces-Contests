#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi;
const int MM = 101; 
int t,n ,a[MM], b[MM],cnta[MM], cntb[MM]; 
pi diff [MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n; 	
		memset(a,0,sizeof(a)); memset(b,0,sizeof(b));memset(diff,0,sizeof(diff));
		memset(cnta,0,sizeof(cnta)); memset(cntb,0,sizeof(cntb)); 
		int sum = 0; 
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		for (int j = 0; j < n; j++) {
			cin >> b[j];
			sum += b[j]-a[j]; 
		}
		if (sum != 0) cout << -1 << endl; 
		else {
			for (int j = 0; j < n; j++) {
				diff[j] = {b[j]-a[j], j};
			}
			sort(diff, diff+n);
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				if (diff[j].first < 0) cnt -= diff[j].first;
			}
			cout << cnt << endl; 
			int r = n-1, l =0;
			while (l < r) {
				for (int j = 0; j < min(-diff[l].first,diff[r].first); j++) {
					cout << diff[l].second+1 << " " << diff[r].second+1 << endl; 
					diff[l].first++; diff[r].first--; 
				}
				if (diff[l].first == 0) l++;
				if(diff[r].first == 0) r--;   
			}
		}
	}
}	