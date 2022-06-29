// *: Cạnh cầu (bridge): của một đồ thị vô hướng là cạnh mà nếu xóa đi khỏi đồ thị thì số thành phần liên thông của đồ thị sẽ tăng thêm.
#include<bits/stdc++.h>
using namespace std;

vector <int> dsKe[1005];
vector <pair<int, int>> edge;
bool visited[1005];

void khoitao(int n, int m){
    edge.clear();
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
        edge.push_back({u, v});
    }
}
void DFS(int u){
    visited[u] = true;
    for(int i = 0; i < dsKe[u].size(); i++){
        if(!visited[dsKe[u][i]]) DFS(dsKe[u][i]);
    }
}
void DFS2(int u, int a, int b){
    visited[u] = true;
    for(int v = 0; v < dsKe[u].size(); v++){
        // * Không xét đến cạnh (a,b).
        if((u == a && dsKe[u][v] == b) || (u == b && dsKe[u][v] == a)) continue;
        if(!visited[dsKe[u][v]]) DFS2(dsKe[u][v], a, b);
    }
}
void Processing(int n, int m){
    // TODO: Đếm số liên thông ban đầu.
    int lienthong = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            lienthong++;
            DFS(i);
        }
    }

    // TODO: Xóa từng cạnh và đếm lại liên thông.
    for(int i = 0; i < edge.size(); i++){
        int a = edge[i].first, b = edge[i].second, dem = 0;
        memset(visited, false, sizeof(visited));
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++;
                DFS2(j, a, b);
            }
        }
        // * Nếu liên thông tăng lên -> (a,b) là cạnh cầu.
        if(dem > lienthong){
            cout << a << " " << b << " ";
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        khoitao(n, m);
        Processing(n, m);
        cout << endl;
    }
}