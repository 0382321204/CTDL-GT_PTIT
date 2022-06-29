#include<bits/stdc++.h>
using namespace std;

vector <int> check, a;
void Output(int n){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << " ";
}
void SinhHV(int i, int n){
	for(int j = 1; j <= n; j++){
		if(check[j] == 0){
			a[i] = j;
			check[j] = 1;
			if(i == n) Output(n);
			else SinhHV(i + 1, n);
			check[j] = 0;
		}
	}
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		check.resize(n + 1, 0);
		a.resize(n + 1);
		SinhHV(1, n);
		cout << endl;
	}
}
