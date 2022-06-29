#include<bits/stdc++.h>
using namespace std;

vector <int> nt, kq[1000];
int a[205], s, dem = 0;
bool ktnguyento(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
void processing(int k){
    int tong = 0;
    for(int i = 1; i <= k; i++) tong += nt[a[i]];
    if(tong == s) {
        for(int i = 1; i <= k; i++) kq[dem].push_back(nt[a[i]]);
        dem++;
    }
}
void tohop(int i, int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k) processing(k);
        else tohop(i + 1, n, k);
    }
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        dem = 0;
        nt.push_back(-1);
        memset(a, 0, sizeof(a));

        int n, p;
        cin >> n >> p >> s;
        for(int i = p + 1; i < s; i++){
            if(ktnguyento(i)) nt.push_back(i);
        }
        tohop(1, nt.size()-1, n);
        cout << dem << endl;
        for(int i = 0; i < dem; i++){
            for(int j = 0; j < kq[i].size(); j++){
                cout << kq[i][j] << " ";
            }
            cout << endl;
        }
        for(int i = 0; i < dem; i++) kq[i].clear();
        nt.clear();
    }
    return 0;
}