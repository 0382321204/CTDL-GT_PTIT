#include<bits/stdc++.h>
using namespace std;

int F[1005][1005], A[1005], C[1005], n, m;

int Quyhoachdong(){
    memset(F, 0, sizeof(F));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            F[i][j] = F[i-1][j];
            if(j >= A[i]){
                F[i][j] = max(F[i][j], F[i-1][j-A[i]] + C[i]);
            }
        }
    }
    return F[n][m];
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++) cin >> A[i];
        for(int i = 1; i <= n; i++) cin >> C[i];
        cout << Quyhoachdong() << endl; 
    }
}