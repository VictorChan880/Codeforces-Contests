#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 
 
#define mp make_pair 
#define pb push_back
#define f first
#define s second
 
const int MM = 1e6+1; 
const int mod1 = 1e9+7;  
const int mod2 = 1e9+11;  

int a[MM]; 
int n, t; 
int main(){
	cin >> t; 
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> a[0]; 
		for (int i =1; i < n; i++) {
			cin >> a[i];
			a[i] = (a[i] & a[i-1]);
		}
		cout << a[n-1] << endl; 
		
	}
}