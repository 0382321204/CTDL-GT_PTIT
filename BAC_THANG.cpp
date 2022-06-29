#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int Processing(int n, int k){
	int C[n + 5] = {0};
	C[0] = C[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 0; j <= min(i, k); j++){
			C[i] = C[i] + C[i-j];
			C[i] = C[i] % mod;
		}
	} 
	return C[n];
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << Processing(n, k) << endl;
	}
}