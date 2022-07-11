#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi; 

#define mp make_pair 
#define pb push_back
#define f first
#define s second

const int MM = 1e6+1; 
const int mod = 1e9+7; 

int n, t; double a[MM]; 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i< t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		sort (a,a+n);	
		double avg = 0; 
		for (int j = 0; j < n-1; j++) {
			avg += a[j];
		}	
		cout << setprecision(9) << a[n-1] + avg/(n-1) << endl; 
	}
	
}