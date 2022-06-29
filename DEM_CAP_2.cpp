#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        long long ans = 0;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &c : a)
            cin >> c;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++){
            long long pos = lower_bound(a.begin(), a.end(), a[i] + k) - a.begin();
            cout << "i = " << i << " pos = " << pos << endl;
            ans += (pos - 1 - i);
            cout << "ans = " << ans << endl;
        }
        cout << ans << endl;
    }
}
