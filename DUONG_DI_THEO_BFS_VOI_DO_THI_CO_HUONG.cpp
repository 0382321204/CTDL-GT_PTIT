#include<bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector <int> dsKe[1005];
int parent[1005];
bool visited[1005];

void khoitao(){
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        //dsKe[v].push_back(u);
    }
}

void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto os: dsKe[v]){
            if(!visited[os]){
                q.push(os);
                visited[os] = true;
                parent[os] = v;
            }
        }
    }
}

void Processing(){
    cin >> n >> m >> s >> t;
    khoitao();
    BFS(s);
    if(!visited[t]) cout << -1 << endl;
    else {
        vector <int> path;
        while(s != t){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(auto os: path) cout << os << " ";
        cout << endl;
    }
}
main(){
    int test; cin >> test;
    while(test--){
        Processing();
    }
}