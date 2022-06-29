#include<bits/stdc++.h>
using namespace std;

void Processing(int a[], int n){
    int s = 0, e = 0;
    for(int i = 0; i < n; i++){
        e = max(a[i], e + a[i]);
        s = max(s, e);
    }
    cout << s << endl;
}
main(){
    int t, a[1005]; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        Processing(a, n);
    }
}