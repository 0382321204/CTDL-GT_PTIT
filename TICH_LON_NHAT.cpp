#include<bits/stdc++.h>
using namespace std;

main(){
    int n; cin >> n;

    long long a[n + 5];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a ,a + n);

    long long kq = -999999;
    kq = max(kq, a[0] * a[1]);
    kq = max(kq, a[n-2] * a[n-1]);
    kq = max(kq, a[0] * a[1] * a[n-1]);
    kq = max(kq, a[n-1] * a[n-2] * a[n-3]);

    cout << kq;
}