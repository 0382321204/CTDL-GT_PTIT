#include<bits/stdc++.h>
using namespace std;

vector <int> dsKe[1005];
bool visited[1005];
void khoitao(int n, int m){
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        //dsKe[v].push_back(u);
    }
    memset(visited, false, sizeof(visited));
}
void DFS(int u){
    cout << u << " ";
    visited[u] = true;
    for(int i = 0; i < dsKe[u].size(); i++){
        if(!visited[dsKe[u][i]]) DFS(dsKe[u][i]);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n, m, u;
        cin >> n >> m >> u;
        khoitao(n, m);
        DFS(u);
        cout << endl;
    }
}