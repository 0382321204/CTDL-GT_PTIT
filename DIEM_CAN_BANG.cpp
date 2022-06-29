#include<bits/stdc++.h>
using  namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+10];

        for(int i = 0; i < n; i++) cin >> a[i];
        int check = 0;

        for(int i = 0; i < n-1; i++){
            int l = 0, r = 0;
            for(int k = i + 1; k < n; k++) r += a[k];
            for(int j = 0; j < i; j++){
                l = l + a[j];
                if(l > r) break;
            }
            if(l == r){
                check = 1;
                cout << i+1 << endl;
                break;
            }
        }

        if(check == 0) cout << -1 << endl;

    }
    return 0;
}