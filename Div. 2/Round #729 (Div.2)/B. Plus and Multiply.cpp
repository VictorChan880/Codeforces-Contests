#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi; 
const int MM = 750000; 
ll a, b, n; int t;  
bool vis[MM];   
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t;i++) {
		cin >> n >> a >> b;
		ll A = 1; 
		bool can = false; 
		if (a == 1)  {
			if (!((n-1)%b)) can = true; 
		}
		else if (b == 1) can = true; 
		else {while (A <= n) {
				if ((!(n % A) && !(((n%A) - 1)%b)) || !((n-A)%b)) {
					can = true;
				}
				A*=a; 
			}
		}
		cout << (can? "Yes" : "No") << endl; 
	}
	
}