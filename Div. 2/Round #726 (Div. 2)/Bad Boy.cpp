#include <bits/stdc++.h>
using namespace std;
int t,n,m;
typedef pair<int,int> pi; 
typedef long long ll; 
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
 
	cin >> t;
	for (int i = 0; i< t; i++) {
		pi cord1, cord2;
		ll dis1 = 0, dis2=0, x, y; 		
		cin >> n >> m;
		cin >> x >> y; 
		//top left corner
		if (abs(x-1) + abs(y-1) > dis1) {dis1 =abs(x-1) + abs(y-1); cord1 = {1,1};}
		
		//bottom right corner
		if (abs(x-m) + abs(y-n) > dis1) {dis1 =abs(x-m) + abs(y-n); cord1 = {m,n};}
		
		//top right corner
		if (abs(x-m) + abs(y-1) > dis1) {dis1 =abs(x-m) + abs(y-1); cord1 = {m,1};}
		
		//bottom left corner
		if (abs(x-1) + abs(y-n) > dis1) {dis1 =abs(x-1) + abs(y-n); cord1 = {1,n};}
		
		//top left corner
		int dis = min (dis1 + abs( cord1.first-1) + abs(cord1.second-1) + abs(1-x) + abs(1-y), abs(1-x) + abs(1-y) + abs( cord1.first-1) + abs(cord1.second-1) + dis1);
		if (dis > dis2) {
			dis2 = dis; cord2 = {1,1};
		}
		//bottom right corner
		dis = min (dis1 + abs( cord1.first-m) + abs(cord1.second-n) + abs(m-x) + abs(n-y), abs(m-x) + abs(n-y) + abs( cord1.first-m) + abs(cord1.second-n) + dis1);
		if (dis > dis2) {dis2 =dis; cord2 = {m,n};}
		
		//top right corner
		dis = min (dis1 + abs( cord1.first-m) + abs(cord1.second-1) + abs(m-x) + abs(1-y), abs(m-x) + abs(1-y) + abs( cord1.first-m) + abs(cord1.second-1) + dis1);
		if (dis > dis2) {dis2 = dis; cord2 = {m,1};}
		
		//bottom left corner
		dis = min (dis1 + abs( cord1.first-1) + abs(cord1.second-n) + abs(1-x) + abs(n-y), abs(1-x) + abs(n-y) + abs( cord1.first-1) + abs(cord1.second-n) + dis1);
		if (dis > dis2) {dis2 = dis; cord2 = {1,n};}
		cout << cord1.first << " "<< cord1.second <<  " " << cord2.first << " " << cord2.second << endl; 
	}
}