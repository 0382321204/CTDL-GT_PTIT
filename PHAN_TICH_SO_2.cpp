#include<bits/stdc++.h>
using namespace std;

int n;
vector <int> a;
vector <vector<int>> kq;
void Processing(int k){
	kq.push_back({a.begin()+1, a.begin()+k+1});
}
void PhanTich(int i, int start, int sum){
	if(sum > n) return;
	for(int j = start; j >= 1; j--){
		a[i] = j;
		int new_sum = sum + j;
		if(new_sum == n) Processing(i);
		else PhanTich(i + 1, j, new_sum);
	}
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	a.resize(n + 1);
    	PhanTich(1, n, 0);
    	
    	cout << kq.size() << endl;
    	for(auto os: kq){
    		cout << "(";
    		for(int i = 0; i < os.size(); i++){
    			cout << os[i];
    			if(i < os.size()-1) cout << " ";
			}
    		cout << ") ";
		}
		cout << endl;
		
		kq.clear();
		a.clear();
	}
}
