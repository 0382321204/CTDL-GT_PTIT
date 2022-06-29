#include<bits/stdc++.h>
using namespace std;

const int maxn = 100005;


vector <int> dsKe[maxn], r_dsKe[maxn];
int n, m;
bool visited[maxn];
stack <int> st;

void khoitao(){
    while(!st.empty()) st.pop();
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++) {dsKe[i].clear(); r_dsKe[i].clear();}
    for(int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
        r_dsKe[v].push_back(u);
    }
}
void DFS1(int u){
    visited[u] = true;
    for(auto os: dsKe[u]){
        if(!visited[os]) DFS1(os);
    }
    //* Da duyet xong dinh u.
    st.push(u);
}
void DFS2(int u){
    visited[u] = true;
    //cout << u << " ";
    for(auto os: r_dsKe[u]){
        if(!visited[os]) DFS2(os);
    }
}
void Processing(){
    int dem = 0;
    cin >> n >> m;
    khoitao();
    // TODO 1: Goi DFS tren do thi ban dau.
    for(int i = 1; i <= n; i++){
        if(!visited[i]) DFS1(i);
    }
    // TODO 2: Lat nguoc do thi (da lam o khoitao()).
    memset(visited, false, sizeof(visited));
    // TODO 3: Lan luot pop cac dinh trong stack va goi DFS de liet ke thanh pha lien thong manh.
    vector <int> vt;
    while(!st.empty()){
        int u = st.top(); st.pop();
        if(!visited[u]){
            vt.push_back(u);
            dem++;
            DFS2(u);
            //cout << endl;
        }
    }
    if(dem == 1) cout << "YES" << endl;
    else {
        cout << "NO" << endl;
        cout << vt[1] << " " << vt[0] << endl;
    }
}
main(){
    Processing();
}