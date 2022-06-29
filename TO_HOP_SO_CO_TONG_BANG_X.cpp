#include<bits/stdc++.h>
using namespace std;

int n, X;
vector <int> a, b;
vector <vector<int>> kq;

void Phantich(int start, int i, int sum){
    if(start >= n || sum > X) return;
    for(int j = start; j <= n; j++){
        b[i] = a[j];
        int new_sum = sum + a[j];
        if(new_sum == X) kq.push_back({b.begin() + 1, b.begin() + i + 1});
        else Phantich(j, i + 1, new_sum);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> X;
        a.resize(n + 100);
        b.resize(n + 100);
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin() + 1, a.begin() + n + 1);

        Phantich(1, 1, 0);
        if(kq.size() == 0) cout << -1 << endl;
        else {
            for(int i = 0; i < kq.size(); i++){
                cout << "[";
                for(int j = 0; j < kq[i].size(); j++){
                    cout << kq[i][j];
                    if(j < kq[i].size() - 1) cout << " ";
                }
                cout << "]";
            }
            cout << endl;
        }
        kq.clear();
        a.clear();
        b.clear();
    }
}