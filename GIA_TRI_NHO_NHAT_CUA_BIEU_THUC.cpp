#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue <long long, vector <long long>, less<long long>> a;
        priority_queue <long long, vector <long long>, greater<long long>> b;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push(x);
        }
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            b.push(x);
        }
        long long kq = 0;
        while(!a.empty() && !b.empty()){
            kq = kq + a.top() * b.top();
            a.pop(); b.pop();
        }
        cout << kq << endl;
    }
}