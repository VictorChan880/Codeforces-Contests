#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<int, int> pi;
const int MM = 1e5; 
int t, n, m; 
string str[MM]; 
int bits [MM]; 
string x;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	for (int k = 0; k < t; k++) {
		cin >> n >> m;
		memset(bits,0,sizeof(bits)); 
		for (int i =0; i < n; i++)cin >> str[i];
		for (int i =0; i < n-1; i++) {
			cin >> x; 
			for (int j = 0; j < m; j++) {
				bits[j] ^= (int)x[j];  
			} 
		}
		for (int i =0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				bits[j] ^= (int)str[i][j]; 
			}
		}
		string stolen = ""; 
		for (int i =0; i < m; i++) {
			stolen += (char)bits[i]; 
		}
		for (int i = 0; i < n; i++) {
			if (!(stolen.compare(str[i]))) {
				cout << str[i] << endl; 
				break; 
			}
		}
		
	}
}	