#include<bits/stdc++.h>
using namespace std;

long long C[55] = {0};
void Processing(){
	C[0] = C[1] = 1;
    C[2] = 2; C[3] = 4;
    for(int i = 4; i <= 50; i++){
        C[i] = C[i-1] + C[i-2] + C[i-3];
    }
}
main(){
    Processing();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << C[n] << endl;
	}
}