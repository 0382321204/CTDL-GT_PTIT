#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+5];

        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        
        long long sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i = i + 2){
            sum1 = sum1 * 10 + a[i];
        }
        for(int i = 1; i < n; i = i + 2){
            sum2 = sum2 * 10 + a[i];
        }

        cout << sum1 + sum2 << endl;
    }
}