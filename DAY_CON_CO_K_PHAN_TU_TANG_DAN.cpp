#include<bits/stdc++.h>
using namespace std;

int n, k;
vector <int> a, b;

void Processing(){
    for(int i = 1; i <= k; i++) cout << a[b[i]] << " ";
    cout << endl;
}
void SinhTH(int i){
    for(int j = b[i-1] + 1; j <= n - k + i; j++){
        b[i] = j;
        if(i == k) Processing();
        else SinhTH(i + 1);
    }
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        a.resize(n + 1);
        b.resize(n + 1, 0);
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin() + 1, a.end());
        SinhTH(1);
    }
}