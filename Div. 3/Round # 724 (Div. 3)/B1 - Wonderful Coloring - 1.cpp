#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f first
#define s second 
typedef pair<int, int> pi; 
const int MM = 1e5; 
const int MOD = 1e9+7;
const ll INF =  1e18;
 int t, cnt, ans; 
map<char,int> _map; 
string s; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t; i++) {
		_map.clear();
		cin >> s;
		ans = 0, cnt = 0; 
		for (int i = 0; i < s.length(); i++) {
			if (_map.count(s[i]) == 0) _map.insert(make_pair(s[i], 0));
			if (_map.at(s[i]) == 0) {
				cnt++;
				_map.erase(s[i]);
				_map.insert(make_pair(s[i],1));
			}
			else if (_map.at(s[i]) == 1) {
				cnt++;
				_map.erase(s[i]);
				_map.insert(make_pair(s[i],2));
			}
			if (cnt == 2) {
				ans++;
				cnt = 0; 
			}
		}
		cout << ans << endl; 
	}
}  