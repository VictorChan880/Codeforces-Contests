#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<double, double> pi; 
const int MM = 2e5*2;
int n,t; int a[MM] ; 

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int i = 0; i < t;i++) {
		cin >> n;
		memset(a,0, sizeof(a)); 
		for (int j = 0; j < n;j++) cin >> a[j];
		sort (a,a+n);
		
		for (int j = 0; j < n;j++) a[j+n] = a[j];
		
		int ind = 0, min = 1e9+1; 
		
		for (int j = 0; j < n-1;j++) {
			if (a[j+1] - a[j] < min) {
				ind = j;
				min = a[j+1] - a[j]; 
			}
		}
		cout << a[ind] << " ";
		for (int j = 2; j < n; j++) {
			cout << a[j+ind] << " ";
		}
		cout << a[ind+1]<< endl; 

	}	
}