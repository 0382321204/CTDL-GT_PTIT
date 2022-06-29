#include<bits/stdc++.h>
using namespace std;

int n, s, a[35], kq = 1000;

void quaylui(int i, int sum, int ans){
    if(sum > s || ans > kq) return;
    if(i == n){
        if(sum == s) kq = min(kq, ans);
        return;
    }
    quaylui(i+1, sum, ans);
    quaylui(i+1, sum+a[i], ans+1);
}
main(){
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> a[i];
    quaylui(0,0,0);
    if(kq == 1000) cout << -1;
    else cout << kq;
}