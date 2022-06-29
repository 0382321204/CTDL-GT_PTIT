#include<bits/stdc++.h>
using namespace std;

long long f[100];

char Processing(long long n, long long k){
	if(n == 0) return 'A';
	if(n == 1) return 'B';
	if(k <= f[n-2]) return Processing(n-2, k);
	else return Processing(n-1, k-f[n-2]);
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	f[0] = 0; f[1] = 1;
	for(int i = 2; i <= 45; i++) f[i] = f[i-1] + f[i-2]; 
	
	int t; cin >> t;
	while(t--){
		int n, k, dem = 0;
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			if(Processing(n, i) == 'B') dem++;
		}
		cout << dem << endl;
	}
}
