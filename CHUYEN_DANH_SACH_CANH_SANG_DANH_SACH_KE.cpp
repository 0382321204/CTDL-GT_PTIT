#include<bits/stdc++.h>
using namespace std;

vector <int> myVector[1005];
void ClearVector(int n, int m){
    for(int i = 1; i <= n; i++){
        myVector[i].clear();
    }
}
void Processing(int n, int m){
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        myVector[u].push_back(v);
        myVector[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        cout << i << ": ";
        for(int j = 0; j < myVector[i].size(); j++){
            cout << myVector[i][j] << " ";
        }
        cout << endl;
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        Processing(n, m);
        ClearVector(n, m);
    }
    return 0;
}