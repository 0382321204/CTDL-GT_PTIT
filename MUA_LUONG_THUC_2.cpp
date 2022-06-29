#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n, s, m;
		cin >> n >> s >> m;
		int ngaymocua = s - s/7; // so ngay mo cua;
		int tongLT = s * m;
		if(tongLT < n * ngaymocua) {
			for(int i = 1; i <= ngaymocua; i++) {
				if(tongLT <= n * i) {
					cout << i << endl;
					break;
				}
			}
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}