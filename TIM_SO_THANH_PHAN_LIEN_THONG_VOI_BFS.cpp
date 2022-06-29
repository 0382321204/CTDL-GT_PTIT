#include<bits/stdc++.h>
using namespace std;

vector <int> dsKe[1005];
bool visited[1005];
void khoitao(int n, int m){
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
    }
}
void DFS(int u){
    visited[u] = true;
    for(int i = 0; i < dsKe[u].size(); i++){
        if(!visited[dsKe[u][i]]) DFS(dsKe[u][i]);
    }
}
void Processing(int n, int m){
    khoitao(n, m);
    int lienthong = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            lienthong++;
            DFS(i);
        }
    }
    cout << lienthong << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        Processing(n, m);
    }
}