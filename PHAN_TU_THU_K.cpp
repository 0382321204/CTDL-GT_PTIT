#include<bits/stdc++.h>
using namespace std;

int a[1000005], b[1000005], n, m, k;

int xuly(){
    int i = 1, j = 1, key = 0;
    while(i <= n && j <= m){
        key++;
        if(a[i] <= b[j]){
            if(key == k) return a[i];
            else i++;
        } else {
            if(key == k) return b[j];
            else j++;
        }
    }
    while(i <= n){
        key++;
        if(key == k) return a[i];
        else i++;
    }
    while(j <= m){
        key++;
        if(key == k) return b[j];
        else j++;
    }
}

main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= m; i++) cin >> b[i];
        cout << xuly() << endl;
    }
}