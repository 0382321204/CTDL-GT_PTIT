#include <bits/stdc++.h>
using namespace std;

int a[1000005], C[1000005];
void Processing(int n) {
	C[0] = a[0];
	C[1] = max(a[0], a[1]);
	for (int i = 2; i < n; ++i) {
		C[i] = max(C[i - 2] + a[i], C[i - 1]);
	}
	cout << C[n - 1] << endl;
}

int main() {
	int t; cin >> t;
	while (t--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
		Processing(n);
	}
}