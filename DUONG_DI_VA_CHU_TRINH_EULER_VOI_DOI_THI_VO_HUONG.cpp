#include<bits/stdc++.h>
using namespace std;

int n, m;
set <int> dsKe[1005];
int degree[1005];

void khoitao(){
	memset(degree, 0, sizeof(degree));
	for(int i = 1; i <= n; i++) dsKe[i].clear();
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int u, v; cin >> u >> v;
		dsKe[u].insert(v);
		dsKe[v].insert(u);
		degree[u]++; degree[v]++;
	}
}
int kiemtra(){
	int dem = 0;
	for(int i = 1; i <= n; i++) 
		if(dsKe[i].size() % 2 != 0) dem++;
	if(dem == 0) return 2;
	else if(dem == 2) return 1;
	else return 0;
}
void Euler(int u){
	vector <int> EC;
	stack <int> st; st.push(u);
	while(!st.empty()){
		int x = st.top();
		if(dsKe[x].size() != 0){
			int y = *dsKe[x].begin();
			st.push(y);
			dsKe[x].erase(y);
			dsKe[y].erase(x);
		} else {
			st.pop();
			EC.push_back(x);
		}
	}
	for(auto os : EC) cout << os << " ";
	cout << endl;
}
void Processing(){
	khoitao();
	Euler(1);
	//cout << kiemtra() << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		Processing();
	}
	return 0;
}
