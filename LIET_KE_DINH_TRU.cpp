#include<bits/stdc++.h>
using namespace std;

int n, m;
vector <int> dsKe[1005];
bool visited[1005];
void khoitao(){
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
    for(auto os: dsKe[u]){
        if(!visited[os]) DFS(os);
    }
}
void Processing(){
    cin >> n >> m;
    khoitao();

    // TODO: Đếm thành phần liên thông ban đầu.
    int lienthong = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            lienthong++;
            DFS(i);
        }
    }
    // TODO: Xóa đỉnh và đếm lại liên thông.
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++;
                DFS(j);
            }
        }
        if(dem > lienthong) cout << i << " ";
    }
    cout << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        Processing();
    }
}