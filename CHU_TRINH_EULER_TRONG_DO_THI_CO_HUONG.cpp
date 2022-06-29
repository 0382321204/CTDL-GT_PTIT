#include<bits/stdc++.h>
using namespace std;

int n, m;
vector <int> dsKe[1005];
pair <int, int> degree[1005];
void khoitao(){
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    memset(degree, 0, sizeof(degree));

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        degree[u].first++;
        degree[v].second++;
    }
}
int kiemtra(){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        //cout << i << " " << degree[i].first << " " << degree[i].second << endl;
        if(degree[i].first != degree[i].second) dem++;
        //if(abs(degree[i].first - degree[i].second) == 1) dem++;
    }
    if(dem == 0) return 1;
    else return 0;
}
void Processing(){
    khoitao();
    cout << kiemtra() << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        Processing();
    }
    return 0;
}