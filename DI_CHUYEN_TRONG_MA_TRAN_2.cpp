#include<bits/stdc++.h>
using namespace std;

int n, m;
int dem, a[101][101];
void khoitao(){
    dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i, int j){
    if(i == n-1 && j == m-1) dem++;
    if(i < n - 1) Try(i + 1, j);
    if(j < m - 1) Try(i, j + 1);
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        int a[n][m];

        khoitao();
        Try(0, 0);

        cout << dem << endl;
    }
    return 0;
}