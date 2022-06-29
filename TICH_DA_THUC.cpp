#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 5], b[m + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        map <int, int> kq;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                kq[i + j] = kq[i + j] + a[i] * b[j];
            }
        }

        for(auto os: kq) cout << os.second << " ";
        cout << endl;
    }
}