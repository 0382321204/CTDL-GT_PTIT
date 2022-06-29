#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];

        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());

        int l = 0, r = n / 2, dem = 0;
        while(l < n/2 && r < n){
            if(a[l] >= 2 * a[r]){
                dem++; l++; r++;
            } else {
                r++;
            }
        }
        cout << n - dem << endl;
    }
}