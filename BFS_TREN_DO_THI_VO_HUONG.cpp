#include<bits/stdc++.h>
using namespace std;

vector <int> dsKe[1005];
bool visited[1005];

void khoitao(int n, int m){
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
    }
}
void BFS(int u){
    queue <int> myQueue;
    myQueue.push(u);
    visited[u] = true;
    while(!myQueue.empty()){
        int v = myQueue.front(); myQueue.pop();
        cout << v << " ";
        for(int i = 0; i < dsKe[v].size(); i++){
            if(!visited[dsKe[v][i]]){
                myQueue.push(dsKe[v][i]);
                visited[dsKe[v][i]] = true;
            }
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n, m, u;
        cin >> n >> m >> u;
        khoitao(n, m);
        BFS(u);
        cout << endl;
    }
}