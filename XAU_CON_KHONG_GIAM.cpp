#include<bits/stdc++.h>
using namespace std;

int C[1005][1005];
void Processing(string s1, string s2){
	memset(C, 0, sizeof(C));
	int kq = 0, n = s1.size(), m = s2.size();

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s1[i] == s2[j]) C[i][j] = max(C[i][j], C[i-1][j-1] + 1);
			else C[i][j] = max(C[i][j-1], C[i-1][j]);
		}
	}
	cout << C[n][m] << endl;
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	string s1, s2; 
	cin >> s1 >> s2;
	Processing(s1, s2);
}
