#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f first
#define s second 
typedef pair<int, int> pi; 
const int MM = 1e5; 
const int MOD = 1e9+7;
const ll INF =  1e18;
ll n; int t; 
bool found = false;  
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n%3 == 1) {
			cout << n/3 + 1 <<  " " << n/3 << endl; 
		}
		else if (n%3 == 2) {
			cout << n/3 << " " << n/3 + 1 << endl; 
		}
		else {
			cout << n/3 << " " << n/3 << endl;
		}
	}
}  