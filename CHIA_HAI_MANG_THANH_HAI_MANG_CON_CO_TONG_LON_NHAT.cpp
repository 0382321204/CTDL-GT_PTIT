#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        int a[n + 10];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, greater<int>());

        long long min = 0, max = 0;
        if(k < n - k){
            for(int i = 0; i < n - k; i++) max = max + a[i];
            for(int i = n - k; i < n; i++) min = min + a[i];
        } else {
            for(int i = 0; i < k; i++) max = max + a[i];
            for(int i = k; i < n; i++) min = min + a[i];
        }

        cout << max - min << endl;
    }
}