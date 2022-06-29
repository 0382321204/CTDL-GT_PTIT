#include<bits/stdc++.h>
using namespace std;

vector <int> dsKe[1005];
bool visited[1005];
int parent[1005], n, m;

void khoitao(){
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
    }
}
bool DFS(int u){
    visited[u] = true;
    for(auto os: dsKe[u]){
        if(!visited[os]){
            parent[os] = u;
            if(DFS(os)) return true;
        } else if(os != parent[u]) return true;
    }
    return false;
}
bool Processing(){
    cin >> n >> m;
    khoitao();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(DFS(i)) return true;
        }
    }
    return false;
}
main(){
    int t; cin >> t;
    while(t--){
        if(Processing()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}