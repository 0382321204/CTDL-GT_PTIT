#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        
        vector <long long> a(n), b(m), c(k), kq;
        for(auto &os: a) cin >> os; 
        for(auto &os: b) cin >> os; 
        for(auto &os: c) cin >> os;

        for(auto os: a){
            auto pos_b = lower_bound(b.begin(), b.end(), os) - b.begin();
            auto pos_c = lower_bound(c.begin(), c.end(), os) - c.begin();
            if(b[pos_b] == os && c[pos_c] == os){
                kq.push_back(os);
                b.erase(b.begin() + pos_b);
                c.erase(c.begin() + pos_c);
            }
        }

        if(kq.size() == 0) cout << -1;
        else for(auto os: kq) cout << os << " ";
        cout << endl;
    }
}