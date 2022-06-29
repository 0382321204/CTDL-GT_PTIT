#include<bits/stdc++.h>
using namespace std;

int n;
vector <int> a, b;
//vector <string> kq;
vector <vector<int>> kq;

bool kiemtra(int n){
    if(n % 2 == 1) return true;
    else return false;
}
void Processing(){
    int tong = 0;
    string ans = "";
    vector <int> temp;
    for(int i = 1; i <= n; i++){
        if(b[i] == 1) tong = tong + a[i];
        //if(b[i] == 1) ans += to_string(a[i]) + " ";
        if(b[i] == 1) temp.push_back(a[i]);
    }
    if(kiemtra(tong)) kq.push_back(temp);
}
void SinhNP(int i){
    for(int j = 0; j <= 1; j++){
        b[i] = j;
        if(i == n) Processing();
        else SinhNP(i + 1);
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
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin() + 1, a.end(), greater<int>());

        b.resize(n + 1, 0);
        SinhNP(1);

        sort(kq.begin(), kq.end());
        for(int i = 0; i < kq.size(); i++){
            for(auto os: kq[i]) cout << os << " ";
            cout << endl;
        }
        
        kq.clear();
        a.clear();
        b.clear();
    }
}