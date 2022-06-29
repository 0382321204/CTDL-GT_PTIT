#include<bits/stdc++.h>
using namespace std;

int modulo = 1e9 + 7;
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> q;

        for(int i = 0; i < n; i++){
            long long ans; cin >> ans;
            q.push(ans);
        }

        long long kq = 0;
        while(q.size() >= 2){
            long long min1 = q.top(); q.pop();
            long long min2 = q.top(); q.pop();
            long long sum = (min1 + min2) % modulo;
            kq = (kq + sum) % modulo;
            q.push(sum);
        }
        cout << kq << endl;
    }
}