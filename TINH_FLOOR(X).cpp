#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		long long n, x;
		cin >> n >> x;
		
		vector <long long> a(n + 1);
		for(int i = 1; i <= n; i++) cin >> a[i];
		auto pos = lower_bound(a.begin()+1, a.begin()+n+1, x) - a.begin();
		
		if(a[pos] == x) cout << pos << endl;
		else if(pos == 1) cout << -1 << endl;
		else cout << pos - 1 << endl;
	}
	return 0;
}
