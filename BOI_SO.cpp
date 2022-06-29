#include<bits/stdc++.h>
using namespace std;

long long processing(int n){
    queue <long long> q;
    q.push(9);
    while(1){
        long long ans = q.front(); q.pop();
        if(ans % n == 0) return ans;
        q.push(ans * 10);
        q.push(ans * 10 + 9);
    }
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << processing(n) << endl;
    }
}