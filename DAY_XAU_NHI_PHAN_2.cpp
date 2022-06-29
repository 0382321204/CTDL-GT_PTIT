#include<iostream>
using namespace std;

main(){
    int t; cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        long long* a = new long long[n + 10];
        a[1] = 1; a[2] = 1;
        for (int i = 3; i <= n; i++) a[i] = a[i - 1] + a[i - 2];
        while (1) {
            if (n == 1){
                cout << 0 << endl;
                break;
            } else if (n == 2) {
                cout << 1 << endl;
                break;
            }
            if (k > a[n - 2]) {
                k = k - a[n - 2];
                n--;
            } else n = n - 2;
        }
    }
    return 0;
}