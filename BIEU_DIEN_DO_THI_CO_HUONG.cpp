#include<bits/stdc++.h>
using namespace std;

vector <int> dsKe[1005];
void Processing(int n, int m){
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
    }
    for(int i = 1; i <= n; i++){
        cout << i << ": ";
        for(int os: dsKe[i]){
            cout << os << " ";
        }
        dsKe[i].clear();
        cout << endl;
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        Processing(n, m);
    }
}