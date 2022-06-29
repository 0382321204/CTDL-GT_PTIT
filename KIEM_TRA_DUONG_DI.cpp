#include<bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector <int> dsKe[1005];
bool visited[1005];

void khoitao(){
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
    }
}

void DFS(int u){
    visited[u] = true;
    for(auto os: dsKe[u]){
        if(!visited[os]) DFS(os);
    }
}
void Processing(){
    cin >> n >> m;
    khoitao();

    int Q; cin >> Q;
    while(Q--){
        cin >> s >> t;
        memset(visited, false, sizeof(visited));
        DFS(s);
        if(!visited[t]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
main(){
    int test; cin >> test;
    while(test--){
        Processing();
    }
    return 0;
}