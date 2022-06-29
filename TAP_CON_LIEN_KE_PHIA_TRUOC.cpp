#include <bits/stdc++.h>
using namespace std;
int n, k, a[10001], ok;

void sinh() {
    int i = k;
    while (i >= 1 && a[i] == i) i--;
    if (i == 0) {
        for (int j = 1; j <= k; j++) {
            cout << n - k + j << " ";
        }
    }
    else {
        while (a[i] - 1 == a[i - 1]) {
            a[i] = n - k + i;
            i--;
        }
        a[i]--;
        for (int j = 1; j <= k; j++)  cout << a[j] << " ";
    }
    cout << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= k; i++) cin >> a[i];
        sinh();
    }
}

