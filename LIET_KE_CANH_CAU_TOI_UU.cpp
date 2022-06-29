#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int maxn = 1001;
 
int n, m, disc[maxn], low[maxn], timer = 0;
vector<int> adj[maxn];
bool is_cut[maxn];
vector<pair<int,int>> cau;

void khoitao(){
    cau.clear();
    for(int i = 1; i <= n; i++) adj[i].clear();
}

bool compare(pair<int,int> A, pair<int,int> B){
    if(A.first == B.first) return A.second < B.second;
    else return A.first < B.first;
}
void in(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(disc, 0, sizeof(disc));
	memset(low, 0, sizeof(low));
	memset(is_cut, false, sizeof(is_cut));
}

void dfs(int u, int par){
	low[u] = disc[u] = ++timer;
	for(int v : adj[u]){
		if(v == par) continue;
		if(!disc[v]){
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if(low[v] > disc[u]){
				cau.push_back({u, v});
			}
		}else low[u] = min(low[u], disc[v]);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    int t; cin >> t;
    while(t--){
        khoitao();
        in();
        for(int i = 1; i <= n; i++){
		    if(!disc[i]){
			    dfs(i, -1);
		    }
	    }
        sort(cau.begin(), cau.end(), compare);
        for(int i = 0; i < cau.size(); i++)
            cout << cau[i].first << " " << cau[i].second << " ";
        cout << endl;
    }
}