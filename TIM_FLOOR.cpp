#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n + 5];
        for(int i = 1; i <= n; i++) cin >> arr[i];
        auto pos = lower_bound(arr + 1, arr + n + 1, k) - arr;
        //cout << "pos = " << pos << endl;
        if(arr[pos] == k) cout << pos << endl;
        else if(pos == 1) cout << -1 << endl;
        else cout << pos - 1 << endl;
    }
}