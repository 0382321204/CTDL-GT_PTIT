#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        long long a[n], b[m], c[k];

        int i, j, q;
        for(i = 0; i < n; i++) cin >> a[i];
        for(i = 0; i < m; i++) cin >> b[i];
        for(i = 0; i < k; i++) cin >> c[i];

        i = j = q = 0;
        vector <long long> kq;

        while(i < n && j < m && q < k){
            if(a[i] == b[j] && a[i] == c[q]){
                kq.push_back(a[i]); i++; j++; q++;
            } else if(a[i] <= b[j] && a[i] <= c[q]) i++;
            else if(b[j] <= a[i] && b[j] <= c[q]) j++;
            else q++;
        }

        if(kq.size() == 0) cout << "NO";
        else for(auto os: kq) cout << os << " ";

        cout << endl;
    }
}